def gen_table(width, height, tile_size):
    num_tiles = width*height/tile_size
    
    
    rows = []
    width_in_tiles = width / tile_size
    height_in_tiles = height / tile_size
    for y in xrange(height):
        row = []
        for x in xrange(width):
            row.append(None)
        rows.append(row)
    
    i = 0
    for tile_num_y in xrange(height_in_tiles):
        base_y = tile_num_y * tile_size
        for tile_num_x in xrange(width_in_tiles):
            base_x = tile_num_x * tile_size
            for y in xrange(tile_size):
                for x in xrange(tile_size):
                    rows[y+base_y][x+base_x] = '{0:9x}'.format(i)
                    i += 1

    #for y in xrange(height):
    #    print ''.join(rows[y])
    return rows[7][0], rows[8][0]
        


#
# to move downwards at a tile boundary, add 968 to the index
# to move downwards otherwise, add 8 to the index

# to move right at a tile boundary, add 57 to the index
# to move right otherwise, add 1 to the index


# in the outer rightwards wall rasterization loop, if the 4th bit ever gets set,
# clear all but the top most bit, and shift it left to get the next index

# in the inner wall drawing unrolled loop, handle up to 8 pixels
# before the first boundary outside of the unrolled block,
# then call into the unrolled block
# the unrolled block will increase the 

if __name__ == '__main__':
    print gen_table(128, 16, 8)
    #gen_table(32, 16, 8)

# uh...
# rearraging the framebuffer so that 8x8 tiles are stored linearly rather than whole rows or columns, so we can easily use DMA to copy the whole thing in one blast.

# problem is is that the wall rasterizer has to check for tile
# boundaries (which can be done efficiently with bit ops)
# and the vertical line drawer called by the rasterizer has to have an
# extra block or loop at the top for up to 7 extra pixels before it
# goes into 8-pixel-chunk tile mode. 

# if compilers could figure that out we wouldn't have performance issues with any modern software
# or it would be hardcoded to recognize this one obscure case
