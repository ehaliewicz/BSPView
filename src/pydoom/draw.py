import math, pygame
import span_buffer, util

cam_x = 0
cam_y = 0
cam_angle = .0
TOPDOWN_DRAW_ALL_SEGS = 'topdown draw all segs'
TOPDOWN_DRAW_VISIBLE_SEGS = 'topdown draw visible segs'
DRAW_VISIBLE_SEGS = '3d draw visible segs'

draw_mode = TOPDOWN_DRAW_ALL_SEGS
next_draw_mode_table = {
    TOPDOWN_DRAW_ALL_SEGS: TOPDOWN_DRAW_VISIBLE_SEGS,
    TOPDOWN_DRAW_VISIBLE_SEGS: DRAW_VISIBLE_SEGS,
    DRAW_VISIBLE_SEGS: TOPDOWN_DRAW_ALL_SEGS
}

draw_stats = {
    'sectors_processed': 0,
    'segs_processed': 0,
    'segs_fully_clipped': 0,
    'segs_partially_clipped': 0,
    'segs_backface_culled': 0,
    'segs_drawn': 0    
}


def ssect_draw_all_segs(level_data, draw_surf, ssect):
    
    start_seg = ssect.first_seg
    num_segs = ssect.num_segs
    segs = level_data['SEGS']
    
    #draw_stats.ssectors_processed += 1
    #draw_stats.segs_processed += num_segs
    for i in range(start_seg, start_seg+num_segs):
        seg = segs[i]

        res,v1,v2 = transform_seg(level_data, draw_surf, seg) #, col)
        
        pygame.draw.line(draw_surf, (255,255,255), v1, v2)
        #if res == draw.DRAWN:
        #    pygame.draw.line(draw_surf, (255,255,255), v1, v2)
            #draw_stats.segs_drawn += 1
        #elif res == draw.FULLY_CLIPPED:
            #draw_stats.segs_fully_clipped += 1
        #elif res == draw.BACKFACE_CULLED:
            #draw_stats.segs_backface_culled += 1
                    
def ssect_draw_visible_segs(level_data, draw_surf, ssect):
    start_seg = ssect.first_seg
    num_segs = ssect.num_segs
    segs = level_data['SEGS']
    
    #draw_stats.ssectors_processed += 1
    #draw_stats.segs_processed += num_segs
    for i in range(start_seg, start_seg+num_segs):
        seg = segs[i]

        res,v1,v2 = transform_seg(level_data, draw_surf, seg)
        #draw_stats.segs_drawn += 1
        if res == DRAWN:
            pygame.draw.line(draw_surf, (255,255,255), v1, v2)
                

ssect_draw_func_table = {
    TOPDOWN_DRAW_ALL_SEGS: ssect_draw_all_segs,
    TOPDOWN_DRAW_VISIBLE_SEGS: ssect_draw_visible_segs,
    DRAW_VISIBLE_SEGS: lambda level_data, draw_surf, ssect: None
}

DRAW_WIDTH = 400
DRAW_HEIGHT = 350

HFOV = 60
VFOV = 28

BACKFACE_CULLED = 'bface'
FULLY_CLIPPED = 'fully_clipped'
DRAWN = 'drawn'


def clear_col_map():
    global seg_col_map
    seg_col_map = {}


depth_col_map = {}
def bsp_depth_color(depth):
    global depth_col_map
    if depth not in depth_col_map:
        depth_col_map[depth] = util.rand_color()
    return depth_col_map[depth]


def translate_point(point):
    (x, y) = point
    return (x-cam_x, y-cam_y)

def rotate_point(point):
    (x, y) = point
    rot_x = (math.cos(cam_angle) * x) - (math.sin(cam_angle) * y)
    rot_y = (math.sin(cam_angle) * x) + (math.cos(cam_angle) * y)
    return (rot_x, rot_y)

def project_point(point):
    (x,y) = point
    
    return x * (HFOV / y)

zoom = 12

def adjust_to_display(point):
    global zoom
    (x, y) = point
    return ((x/zoom)+(DRAW_WIDTH/2)), ((-y/zoom)+(DRAW_HEIGHT/2))
    
def transform_point(point):
    (x, y) = point
    #trans_x, trans_y = ((x-cam_x), ((-y)-cam_y))
    trans_x, trans_y = ((x-cam_x), ((y)-cam_y))
    rot_x = (math.cos(cam_angle) * trans_x) - (math.sin(cam_angle) * trans_y)
    rot_y = (math.sin(cam_angle) * trans_x) + (math.cos(cam_angle) * trans_y)
    return ((rot_x/12)+(DRAW_WIDTH/2)), ((-rot_y/12)+(DRAW_HEIGHT/2))


def draw_level_vertexes(level_data, surf, color):
    vertexes = level_data['VERTEXES']
    for vert in vertexes:
        trans_x, trans_y = transform_point((vert.x, vert.y))
        pygame.draw.rect(surf, color, (trans_x, trans_y, 1, 1), 1)

def seg_fully_clipped(rot_v1, rot_v2):
    (rot_v1_x, rot_v1_y) = rot_v1
    (rot_v2_x, rot_v2_y) = rot_v2
    return (rot_v1_y < 0 and rot_v2_y < 0)

def bbox_on_screen(v1,v2,v3,v4):
    
    (vv1_x,vv1_y) = rotate_point(translate_point(v1))
    (vv2_x,vv2_y) = rotate_point(translate_point(v2))
    (vv3_x,vv3_y) = rotate_point(translate_point(v3))
    (vv4_x,vv4_y) = rotate_point(translate_point(v4))
    
    nvv1_y = 1 if (vv1_y <= 0) else vv1_y
    nvv2_y = 1 if (vv2_y <= 0) else vv2_y
    nvv3_y = 1 if (vv3_y <= 0) else vv3_y
    nvv4_y = 1 if (vv4_y <= 0) else vv4_y
    
    vv1 = (vv1_x, vv1_y)
    vv2 = (vv2_x, vv2_y)
    vv3 = (vv3_x, vv3_y)
    vv4 = (vv4_x, vv4_y)

    nvv1 = (vv1_x, nvv1_y)
    nvv2 = (vv2_x, nvv2_y)
    nvv3 = (vv3_x, nvv3_y)
    nvv4 = (vv4_x, nvv4_y)

    x1 = project_point(nvv1)
    x2 = project_point(nvv2)
    x3 = project_point(nvv3)
    x4 = project_point(nvv4)
        
    shitty_clip = (seg_fully_clipped(vv1,vv2) and
                   seg_fully_clipped(vv2,vv3) and
                   seg_fully_clipped(vv3,vv4) and
                   seg_fully_clipped(vv4,vv1))
    if shitty_clip:
        return False
        print("WEW")

    return True
    #intersects = (span_buffer.span_intersects((x1,x2)) or
    #              span_buffer.span_intersects((x2,x3)) or
    #              span_buffer.span_intersects((x3,x4)) or
    #              span_buffer.span_intersects((x4,x1)))
    #return not intersects

def transform_seg(level_data, surf, seg): #, color):
    segs = level_data['SEGS']
    vertexes = level_data['VERTEXES']
    linedefs = level_data['LINEDEFS']
    v1 = vertexes[seg.begin_vert]
    v2 = vertexes[seg.end_vert]

    transf_v1 = transform_point((v1.x, v1.y))
    transf_v2 = transform_point((v2.x, v2.y))

    trans_v1 = translate_point((v1.x, v1.y))
    trans_v2 = translate_point((v2.x, v2.y))
    rot_v1 = rotate_point(trans_v1)
    rot_v2 = rotate_point(trans_v2)
    
    res = DRAWN
    #rot_v1_x,rot_v1_y = rot_v1
    #rot_v2_x,rot_v2_y = rot_v2

    if(seg_fully_clipped(rot_v1, rot_v2)):
        res = FULLY_CLIPPED
    
    disp_v1 = adjust_to_display(rot_v1)
    disp_v2 = adjust_to_display(rot_v2)

    disp_v1_x,disp_v1_y = disp_v1
    disp_v2_x,disp_v2_y = disp_v2
    if(disp_v1_x > disp_v2_x):
        res = BACKFACE_CULLED
        
        
    #linedef = linedefs[seg.linedef]

    #color = RED
    #if (linedef.left_sidedef != 1 and linedef.right_sidedef != 1):
    #    color = GREEN
    #pygame.draw.line(draw_surf, color, trans_v1, trans_v2)
    #if res == DRAWN:
    #    pygame.draw.line(surf, (255,255,255), disp_v1, disp_v2)
    #else:
    #    pygame.draw.line(surf, (150,150,150), disp_v1, disp_v2)
    
    return (res, disp_v1, disp_v2)
        
def draw_level_segs(level_data, surf, color):
    segs = level_data['SEGS']

    for seg_idx,seg in enumerate(segs):
        draw_seg(level_data, surf, seg, color)
        
        
def draw_level_linedefs(level_data, surf, color):
    linedefs = level_data['LINEDEFS']
    vertexes = level_data['VERTEXES']
    
    for linedef in linedefs:
        v1 = vertexes[linedef.begin_vert]
        v2 = vertexes[linedef.end_vert]
        trans_v1 = transform_point((v1.x, v1.y))
        trans_v2 = transform_point((v2.x, v2.y))
        #(trans_x1, trans_y1) = trans_v1
        #color = RED
        #if (linedef.left_sidedef != -1 and linedef.right_sidedef != -1):
        #    color = GREEN
        pygame.draw.line(surf, color, trans_v1, trans_v2)

def draw_bounding_box(v1, v2, v3, v4, surf, color):
    tv1 = transform_point(v1)
    tv2 = transform_point(v2)
    tv3 = transform_point(v3)
    tv4 = transform_point(v4)

    pygame.draw.line(surf, color, tv1, tv2)
    pygame.draw.line(surf, color, tv2, tv3)
    pygame.draw.line(surf, color, tv3, tv4)
    pygame.draw.line(surf, color, tv4, tv1)
    

def draw_bsp_node(node, node_depth, surf, color=None, draw_left=True, draw_right=True):
    if not color:
        color = bsp_depth_color(node_depth)
    lv1 = (node.left_box_left, node.left_box_top)
    lv2 = (node.left_box_right, node.left_box_top)
    lv3 = (node.left_box_right, node.left_box_bottom)
    lv4 = (node.left_box_left, node.left_box_bottom)

    
    rv1 = (node.right_box_left, node.right_box_top)
    rv2 = (node.right_box_right, node.right_box_top)
    rv3 = (node.right_box_right, node.right_box_bottom)
    rv4 = (node.right_box_left, node.right_box_bottom)

    if draw_left:
        draw_bounding_box(lv1, lv2, lv3, lv4, surf, color)
    if draw_right:
        draw_bounding_box(rv1, rv2, rv3, rv4, surf, color)


    part_v1 = node.partition_x_coord, node.partition_y_coord
    part_v2 = node.partition_x_coord+node.dx, node.partition_y_coord+node.dy

    tpv1 = transform_point(part_v1)
    tpv2 = transform_point(part_v2)
    pygame.draw.line(surf, (0, 255, 0), tpv1, tpv2)


def draw_player(draw_surf, color):
    x, y = DRAW_WIDTH/2, DRAW_HEIGHT/2

    top = (x, y-1)
    left = (x-2, y+2)
    right = (x+2, y+2)


    pygame.draw.polygon(draw_surf, color, [top, right, left]) 
    
    
    
