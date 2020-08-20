import math, pygame, random, sys, time

 
"""

WAD stuff 

"""


PLAYER_THING_TYPE = 1

import array, os, struct

def read_byte(file):
    return int(file.read(1))

def read_long(file):
    string = file.read(4)
    return struct.unpack('<l', string)[0]

NUMBERS = '0123456789'

def cached(attr):
    def inner(func):
        def inner2(self):
            if not getattr(self, attr):
                return func(self)
            
            return getattr(self, attr)
        return inner2
    return inner
    
def is_level(name):
    return (len(name) == 4 and
            name[0] == 'E' and
            name[1] in NUMBERS and
            name[2] == 'M' and
            name[3] in NUMBERS)
            
class WAD(object):
    def __init__(self, path):
        self.file = open(path, mode='rb')
        self.check_header()
        self.path = path
        self.loaded_lumps = None
        self.loaded_levels = None
        
    def check_header(self):
        header = self.file.read(4)
        assert header == b'IWAD', 'Expected IWAD header'

    
    @cached('loaded_lumps')
    def lumps(self):
        num_lumps = read_long(self.file)

        offset_to_listing = read_long(self.file)
        self.file.seek(offset_to_listing, 0)
            
        self.loaded_lumps = [Lump(self.file) for dir in range(num_lumps)]
        return self.loaded_lumps
    
        
    @cached('loaded_levels')
    def levels(self):
        lumps = self.lumps()
        all_levels = []
        cur_level = None
        cur_level_children = []
        level_children = [s.upper() for s in ['things', 'linedefs', 'sidedefs', 'vertexes', 'segs',
                                               'ssectors', 'nodes', 'sectors', 'reject', 'blockmap']]
        
        
        for lump in lumps:
            if is_level(lump.name):
                if cur_level:
                    all_levels.append(Level(self.file, cur_level, cur_level_children))
                cur_level = lump
                cur_level_children = []

            elif lump.name not in level_children:
                if cur_level:
                    all_levels.append(Level(self.file, cur_level, cur_level_children))
                    break
            else:
                cur_level_children.append(lump)
                

        self.loaded_levels = all_levels
        return self.loaded_levels

        
    
TYPE_MAP = {
    's8': 'b',
    'u8': 'B',
    's16': 'h',
    'u16': 'H',
    's32': 'i',
    'u32': 'I',
    'str[8]': '8s'
}    
    
        
        

class Lump(object):
    def __init__(self, file):
        self.file = file
        self.offset = read_long(file)
        self.size = read_long(file)
        self.name = file.read(8).split(b'\x00', 1)[0].decode()            
        
    def __str__(self):
        return "<Lump: {}>".format(self.name)


def compile_parse_str(s):
    fields = s.split(" ")
    split_fields = [f.split(":") for f in fields]
    field_names = [f[0] for f in split_fields]
    struct_parse_str = '<'+''.join([TYPE_MAP[f[1]] for f in split_fields])
    
    size = struct.calcsize(struct_parse_str)
    def func(file):
        data = file.read(size)
        fields = struct.unpack(struct_parse_str, data)

        return [(field_names[idx],val) for idx,val in enumerate(fields)]

    return func, size

def parse_level_lump(lump, parse_str, name, file):
    file.seek(lump.offset, 0)
    lump_bytes = lump.size
    parse_func, instance_size = compile_parse_str(parse_str)
    lump_instances = int(lump_bytes/instance_size)
    assert(lump_instances == lump_bytes/instance_size)

    return [Object(name, parse_func(file)) for i in range(lump_instances)]


class Object(object):
    def __init__(self, name, fields):
        self.obj_type = name
        self.field_strs = []
        for (name,val) in fields:
            setattr(self, name, val)
            self.field_strs.append("{}:{}".format(name, val))
        
            
    def __str__(self):
        return "<{}: {}>".format(self.obj_type, ", ".join(self.field_strs))
        

PARSE_TABLE = {
    'things': 'x_pos:s16 y_pos:s16 angle:u16 type:u16 spawn_flags:u16',
    'linedefs': 'v1:u16 v2:u16 flags:u16 line_type:u16 sector_tag:u16 right_sidedef:u16 left_sidedef:u16',
    'sidedefs': 'x_off:s16 y_off:s16 upper_texture:str[8] lower_texture:str[8] middle_texture:str[8] sector_ref:u16',
    'vertexes': 'x_pos:s16 y_pos:s16',
    'segs': 'v1:u16 v2:u16 angle:s16 linedef:u16 direction:s16 offet:s16',
    'nodes': "partition_x_pos:s16 partition_y_pos:s16 dx:s16 dy:s16 rbbox_top:s16 rbbox_bottom:s16 rbbox_left:s16 rbbox_right:s16 lbbox_top:s16 lbbox_bottom:s16 lbbox_left:s16 lbbox_right:s16 left_child:u16 right_child:u16",
    'ssectors': 'num_segs:u16 start_seg_idx:u16'
}

class Level(object):
    def __init__(self, file, level_lump, children_lumps):
        self.file = file
        children = []
        self.main_lump = level_lump

        def process_lump(lump):
            name = lump.name.lower()
            lump_offset = lump.offset
            lump_bytes = lump.size
            loaded_key = "loaded_{}".format(name)
            setattr(self, "{}_lump".format(name), lump)
            setattr(self, loaded_key, None)
            
            if name in PARSE_TABLE:
                
                parse_str = PARSE_TABLE[name]
                def func():
                    if not getattr(self, loaded_key):
                        vals = parse_level_lump(lump, parse_str, name, file)
                        setattr(self, loaded_key, vals)
                    return getattr(self, loaded_key)
        
                setattr(self, name, func)
            else:
                def func():
                    raise UnimplementedException("blah")
                setattr(self,name, func)
        for lump in children_lumps:
            process_lump(lump)

    def __str__(self):
        return "<Level: {}>".format(self.main_lump.name)


"""

drawing stuff

"""

player_pos = (0,0)
player_angle = 0


SCREEN_WIDTH = 2880
SCREEN_HEIGHT = 1800


draw_surf = None
    
def translate_vertex(vert):
    (x,y) = vert
    (plx,ply) = player_pos
    return ((x-plx), (y-ply))
    
    
def rotate_vertex(vert):
    (x,y) = vert
    sn = math.sin(player_angle)
    cs = math.cos(player_angle)
    rx = x * cs - y * sn
    ry = x * sn + y * cs
    #rx = x * sn + y * cs
    #ry = x * cs - y * sn
    return (rx,ry)

    
def transform_vertex(vert):
    (x,y) = vert
    vert2 = (x,y) #10,y/10)#/20)
    translated = translate_vertex(vert2)
    rotated = rotate_vertex(translated)
    (rx,ry) = rotated
    
    
    #print("untransformed: {}".format(vert))
    #print("translated: {}".format(translated))
    #print("rotated: {}".format(rotated))

    return (rx+SCREEN_WIDTH/2, ry+SCREEN_HEIGHT/2)

def is_point_on_left(pos, partition, partition_dpos):
    (x,y) = pos
    (part_x, part_y) = partition
    (dx, dy) = partition_dpos

    rel_x = x - part_x
    rel_y = y - part_y
    
    return (((rel_x * dy) - (rel_y * dx)) <= 0) 
    
    

def draw_player():
    length = 20
    pygame.draw.line(draw_surf,
                     (255,0,0),
                     (SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
                     (SCREEN_WIDTH/2, (SCREEN_HEIGHT/2)-length), 2)

seg_depth = 0

def draw_seg(seg, level):
    global seg_depth 
    v1 = level.vertexes()[seg.v1]
    v2 = level.vertexes()[seg.v2]
    #r = random.randrange(255)
    #g = random.randrange(255)
    #b = random.randrange(255)

    a = 255
    b = 10
    c = seg_depth / len(level.segs())
    
    b = (c * a) + ((1-c) * b)
    #b = max(1, 255-seg_depth)
    seg_depth += 1

    
    trans_v1 = transform_vertex((v1.x_pos, v1.y_pos))
    trans_v2 = transform_vertex((v2.x_pos, v2.y_pos))
    pygame.draw.line(draw_surf, (b,b,b), trans_v1, trans_v2, 2)
    """
    if seg.direction == 0:
        #same direction
        dx = v2.x - v1.x
        dy = v2.y - v1.y
    else:
        dx = v1.x - v2.x
        dy = v1.y - v2.y
        

    ang = math.atan2(dx, dy)
    start_y = seg.offset * cos(ang)
    start_x = seg.offset * cos(ang)
    """
    
    # draw seg here

def draw_linedef(linedef, level):
    v1 = level.vertexes[linedef.v1]
    v2 = level.vertexes[linedef.v2]
    
    trans_v1 = transform_vertex((v1.x_pos, v1.y_pos))
    trans_v2 = transform_vertex((v2.x_pos, v2.y_pos))

    (tx1,ty1) = trans_v1
    (tx2,ty2) = trans_v2
    
    pygame.draw.line(draw_surf, (255,255,255), trans_v1, trans_v2, 2) 

"""

bsp stuff

"""

SUBSECTOR_IDENTIFIER = 0x8000

rendered_subsectors = 0
def render_subsector(subsector, level):
    global rendered_subsectors
    rendered_subsectors += 1
    if rendered_subsectors >= 10:
        return
    for seg_idx in range(subsector.num_segs):
        seg = level.segs()[subsector.start_seg_idx + seg_idx]
        draw_seg(seg, level)
        

def render_node(node_id, pos, level):
    if node_id & SUBSECTOR_IDENTIFIER:
        render_subsector(level.ssectors()[node_id & (~SUBSECTOR_IDENTIFIER)], level)
    else:
        node = level.nodes()[node_id]
        is_on_left = is_point_on_left(pos,
                                      (node.partition_x_pos, node.partition_y_pos),
                                      (node.dx, node.dy))
        if is_point_on_left:
            render_node(node.left_child, pos, level)
            render_node(node.right_child, pos, level)
        else:
            render_node(node.right_child, pos, level)
            render_node(node.left_child, pos, level)

def render_bsp_tree(nodes, pos, level):
    global seg_depth, rendered_subsectors
    print("rendering bsp tree from pos {}".format(pos))
    seg_depth = 0
    rendered_subsectors = 0
    render_node(len(nodes)-1, pos, level)
    

"""

player stuff

"""

def init_player(x,y,ang):
    global player_pos, player_angle
    player_pos = (x,y)
    
    player_angle = ang*math.pi/180
    

def rotate_left():
    global player_angle
    player_angle -= .01

def rotate_right():
    global player_angle
    player_angle += .01

def move_forward():
    global player_pos
    (px,py) = player_pos
    y = math.cos(player_angle)
    x = math.sin(player_angle)
    
    player_pos = (px-x*1.5, py-y*1.5)
    
    

def move_backward():
    global player_pos
    (px,py) = player_pos
    y = math.cos(player_angle)
    x = math.sin(player_angle)
    px += x*1
    player_pos = (px+x*1.5, py+y*1.5)
    
    
"""

main program

"""

events = [#(pygame.K_LEFT, [pygame.KEYUP, pygame.KEYDOWN], rotate_left),
          #(pygame.K_z, [pygame.KEYDOWN], switch_modes),
          (None, [pygame.QUIT], sys.exit)]



def handle_event(event):
    for (key, event_types, func) in events:
        if event.type in event_types and ((key is None) or (event.key == key)):
            func()
    
keys = [(pygame.K_LEFT, rotate_left),
        (pygame.K_RIGHT, rotate_right),
        (pygame.K_UP, move_forward),
        (pygame.K_DOWN, move_backward)]


def handle_keys():
    key_map = pygame.key.get_pressed()
    
    for (key, func) in keys:
        if key_map[key]:
            func()
    

def main(args):
        
    wadfile = args[0]
    loaded_wad = WAD(wadfile)
    lumps = loaded_wad.lumps()
    levels = loaded_wad.levels()

    e1m1 = levels[0]
    

    things = e1m1.things()
    linedefs = e1m1.linedefs()
    vertexes = e1m1.vertexes()
    nodes = e1m1.nodes()
    
    
    player = things[0]
    assert player.type == PLAYER_THING_TYPE
    
    init_player(player.x_pos, player.y_pos, 180)
    
    
    draw_size = SCREEN_WIDTH, SCREEN_HEIGHT
    size = int(SCREEN_WIDTH/2), int(SCREEN_HEIGHT/2)
    speed = [2,2]
    black = 0, 0, 0

    pygame.init()
    global draw_surf
    screen_surface = pygame.display.set_mode(size)
    draw_surf = pygame.Surface(draw_size)
        
    
    
    while True:
        for event in pygame.event.get():
            handle_event(event)
                    

        handle_keys()
        draw_surf.fill(black)
        draw_player()
        
        #for linedef in linedefs:
        #    draw_linedef(linedef, vertexes)

        render_bsp_tree(nodes, player_pos, e1m1)
        
        #draw_surf.blit(screen_surface, (0,0))
        scale_surf = pygame.transform.scale(draw_surf, size)#, scale_surf)
        blit_surf = pygame.transform.flip(scale_surf, True, False)
        
        screen_surface.blit(blit_surf, (0, 0)) #draw_surf, (0,0))
        
        
        pygame.display.flip()
    
    
        
if __name__ == '__main__':
    args = sys.argv[1:]
            
    main(args)



