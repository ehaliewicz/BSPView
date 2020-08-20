import util
import draw

#def draw_bsp_nodes(nodes, surf):
#    root_node = get_root_node(nodes)

#    draw_bsp_node(root_node, surf)


def is_ssect_idx(idx):
    return (idx & (1<<15))


def is_on_left(node, x, y):
    dx = x - node.partition_x_coord
    dy = y - node.partition_y_coord

    return (((dx * node.dy) - (dy * node.dx)) <= 0)


def get_real_idx(idx):
    masked_idx = (idx & (~(1<<15)))
    return (idx & (~(1<<15))) 

def traverse_bsp_node(node_idx,
                      node_depth,
                      level_data,
                      node_callback,
                      ssector_callback):

    
    if is_ssect_idx(node_idx):
        ssector_callback(level_data['SSECTORS'][get_real_idx(node_idx)])
    else:
        node = level_data['NODES'][get_real_idx(node_idx)]
        node_callback(node, node_depth)
        traverse_bsp_node(node.left_child, node_depth+1,
                          level_data, node_callback, ssector_callback)
        traverse_bsp_node(node.right_child, node_depth+1,
                          level_data, node_callback, ssector_callback)

    
        
def traverse_all_bsp_nodes(level_data,
                           node_callback=lambda node: None,
                           ssect_callback=lambda ssect: None):
    nodes = level_data['NODES']
    root_idx = len(nodes)-1
    traverse_bsp_node(root_idx, 0, level_data, node_callback, ssect_callback)


def bsp_child_onscreen(node, left_child=True):
    
    if left_child:
        v1 = (node.left_box_left, node.left_box_top)
        v2 = (node.left_box_right, node.left_box_top)
        v3 = (node.left_box_right, node.left_box_bottom)
        v4 = (node.left_box_left, node.left_box_bottom)
    else:
        v1 = (node.right_box_left, node.right_box_top)
        v2 = (node.right_box_right, node.right_box_top)
        v3 = (node.right_box_right, node.right_box_bottom)
        v4 = (node.right_box_left, node.right_box_bottom)


    return draw.bbox_on_screen(v1,v2,v3,v4)

    
    
def traverse_bsp_front_to_back(level_data,
                               x, y,
                               ssect_callback=lambda ssect: None):
    nodes = level_data['NODES']
    ssectors = level_data['SSECTORS']
    root_node_idx = len(nodes)-1
    depth = 0

    stk = [root_node_idx]
    
    while len(stk) > 0:
        node_idx = stk.pop()

        if is_ssect_idx(node_idx):
            ssect_callback(ssectors[get_real_idx(node_idx)])
        else:
            node = nodes[get_real_idx(node_idx)]
            if is_on_left(node, x, y):
                if draw.draw_mode == draw.TOPDOWN_DRAW_ALL_SEGS or (bsp_child_onscreen(node, left_child=False)):
                    stk.append(node.right_child)
                stk.append(node.left_child)
            else:
                if draw.draw_mode == draw.TOPDOWN_DRAW_ALL_SEGS or (bsp_child_onscreen(node, left_child=True)):
                    stk.append(node.left_child)
                stk.append(node.right_child)
                

    
    
def find_subsector_for_position(level_data,
                                x, y,
                                node_callback=lambda node: None):
    nodes = level_data['NODES']
    node_idx = len(nodes)-1

    depth = 0
    while True:        
        if is_ssect_idx(node_idx):
            return level_data['SSECTORS'][get_real_idx(node_idx)]
        else:
            node = nodes[get_real_idx(node_idx)]
            if is_on_left(node, x, y):
                node_callback(node, depth, on_left=True)
                node_idx = node.left_child
            else:
                node_callback(node, depth, on_left=False)
                node_idx = node.right_child
            depth += 1
