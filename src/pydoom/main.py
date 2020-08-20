import math, pygame, sys

import bsp, draw, wad, span_buffer

DEFAULT_WADFILE = "./doom.wad"

screen = None
draw_surf = None
scale_surf = None

BLIT_WIDTH = draw.DRAW_WIDTH*2
BLIT_HEIGHT = draw.DRAW_HEIGHT*2

SCREEN_WIDTH = BLIT_WIDTH+300
SCREEN_HEIGHT = BLIT_HEIGHT

PROJECTED_WIDTH = 256
PROJECTED_HEIGHT = 144

def init():
    global screen, draw_surf, scale_surf
    pygame.init()
    pygame.font.init()
    screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
    pygame.display.set_caption('WAD loader')

    draw_surf = pygame.Surface((draw.DRAW_WIDTH, draw.DRAW_WIDTH))
    scale_surf = pygame.Surface((BLIT_WIDTH, BLIT_HEIGHT))
    
    

RED   = (255,   0,   0)
GREEN = (  0, 255,   0)
BLUE  = (  0,   0, 255)
GRAY  = (140, 140, 140)
WHITE = (255, 255, 255)


def flip(stats_func=lambda : None):
    pygame.transform.scale(draw_surf,
                           (BLIT_WIDTH, BLIT_HEIGHT),
                           scale_surf)
    stats_func()
    screen.blit(scale_surf, (0, 0))
    # update the screen
    pygame.display.flip()

level = None
    
def main():
    global directory, level
    
    if len(sys.argv) == 1:
        wadfile = DEFAULT_WADFILE
    else:
        wadfile = sys.argv[1]

    if len(sys.argv) > 2:
        level = sys.argv[2]

    directory, is_doom_two = wad.read_wadfile(wadfile)
    if not level:
        if is_doom_two:
            level = 'MAP24'
        else:
            level = 'E1M1'
    
    
    level_data = directory[level+'_DATA']
    things = level_data['THINGS']
    player_thing = next(t for t in things if t.thing_type == 1)
        
    draw.cam_x = player_thing.x_pos
    draw.cam_y = player_thing.y_pos
    
    
    init()
    
    clock = pygame.time.Clock()
    font = pygame.font.Font('freesansbold.ttf',14)
    
    while(True):

        span_buffer.reset(PROJECTED_WIDTH)
        
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            elif event.type == pygame.KEYUP:
                if event.key == pygame.K_t:
                    draw.translate = (not draw.translate)
                    
                if event.key == pygame.K_z:
                    draw.zoom += 1
                elif event.key == pygame.K_x:
                    draw.zoom -= 1
                elif event.key == pygame.K_d:
                    draw.draw_mode = draw.next_draw_mode_table[draw.draw_mode]
                    
                    
                if draw.zoom <= 0:
                    draw.zoom = 1
        
        keys=pygame.key.get_pressed()
        if keys[pygame.K_LEFT]:
            draw.cam_angle -= .08
            #draw.cam_x -= 10
        elif keys[pygame.K_RIGHT]:
            #draw.cam_x += 10
            draw.cam_angle += .08


        move = False

        if keys[pygame.K_UP]:
            move = True
            factor = 10
        elif keys[pygame.K_DOWN]:
            move = True
            factor = -10

        if move:
            draw.cam_x += (math.sin(draw.cam_angle) * factor)
            draw.cam_y += (math.cos(draw.cam_angle) * factor)
            
        
        
        #if keys[pygame.K_TAB]:
        #    clear_col_map()
                
        # erase the screen
        draw_surf.fill(GRAY)
        
        
        #draw.draw_level_linedefs(level_data)

        #draw.draw_level_segs(level_data, draw_surf, color=RED)
        #draw.draw_level_vertexes(level_data, draw_surf, color=GREEN)
        
        col = (255,255,255)

        #segs = []
        segs_drawn = 0
        segs_processed = 0
        ssectors_processed = 0
        segs_fully_clipped = 0
        segs_backface_culled = 0

        all_segs = []
        visible_segs = []
        
        def draw_ssect(ssect):
            nonlocal col, segs_drawn
            nonlocal ssectors_processed, segs_processed
            nonlocal segs_fully_clipped
            nonlocal segs_backface_culled
            nonlocal all_segs, visible_segs

            ssectors_processed += 1
            start_seg = ssect.first_seg
            num_segs = ssect.num_segs
            segs = level_data['SEGS']
            #drew_once = False
            segs_processed += num_segs
            for i in range(start_seg, start_seg+num_segs):
                seg = segs[i]

                #draw.draw_seg(level_data, draw_surf, seg, col)
                
                res,v1,v2 = draw.draw_seg(level_data, draw_surf, seg, col)
                all_segs.append((v1,v2))
                if res == draw.DRAWN:
                    visible_segs.append((v1,v2))
                    #drew_once = True
                    segs_drawn += 1
                elif res == draw.FULLY_CLIPPED:
                    segs_fully_clipped += 1
                elif res == draw.BACKFACE_CULLED:
                    segs_backface_culled += 1
                
                    
                
            #if drew_once:
            #    ncol = col[0]-1
            #    col = (ncol, ncol, ncol)


        draw.draw_player(draw_surf, color=RED)
        draw_ssect_func = draw.ssect_draw_func_table[draw.draw_mode]
        def bound_func(ssect):
            nonlocal ssectors_processed
            ssectors_processed += 1
            draw_ssect_func(level_data, draw_surf, ssect)
            
        #bound_func = lambda ssect: draw_ssect_func(level_data, draw_surf, ssect)
        bsp.traverse_bsp_front_to_back(level_data,
                                       draw.cam_x, draw.cam_y,
                                       ssect_callback = bound_func)

        

        nodes_traversed = 0
        def node_callback(node, level, on_left):
            nonlocal nodes_traversed
            nodes_traversed += 1
            draw.draw_bsp_node(node, level, draw_surf, BLUE, draw_left=on_left, draw_right=(not on_left))
        ssect_callback = lambda ssect: None
        

        bsp.find_subsector_for_position(level_data,
                                        draw.cam_x, draw.cam_y,
                                        node_callback)

        #draw_ssect)

        #if draw.draw_all_segs:
        #    for (v1,v2) in all_segs:
        #        pygame.draw.line(draw_surf, (60,60,60), v1, v2)
        
    
        #for (v1,v2) in visible_segs:
        #    pygame.draw.line(draw_surf, (255, 255, 255), v1, v2)

        #def draw_node_bbox(node, depth):
        #    draw.draw_bsp_node(node, depth, draw_surf, color=BLUE,
        #                       draw_left = True,
        #                       draw_right = True)
            
        #bsp.traverse_all_bsp_nodes(level_data,
        #                           draw_node_bbox)
            
        
        

        def stats_func():
            line = 0
            
            def draw_font_line(st):
                nonlocal line
                text_surf = font.render(st, True, (0, 0, 0))
                scale_surf.blit(text_surf, (0, line))
                line += 15

            fps = clock.get_fps()
            draw_font_line("drawing map {}".format(level))
            draw_font_line("draw mode {}".format(draw.draw_mode))
            draw_font_line("{} nodes traversed".format(nodes_traversed))
            print("ssectors procesed: {}".format(ssectors_processed))
            draw_font_line("{} subsectors processed".format(ssectors_processed))
            draw_font_line("{} segs processed".format(segs_processed))
            draw_font_line("{} segs fully clipped".format(segs_fully_clipped))
            draw_font_line("{} segs backface culled".format(segs_backface_culled))
            draw_font_line("{} segs drawn".format(segs_drawn))
            draw_font_line("{} fps".format(fps))
            
        flip(stats_func)
        
        clock.tick(60)
        

        
    


if __name__ == '__main__':
    main()
