BMP_STRIDE = 128

def gen_vline_table():
    cycles = 0
    for x in xrange(159*BMP_STRIDE, -BMP_STRIDE, -BMP_STRIDE):
        print "move.b %d1, {}(%a0)".format(x)
        cycles += 12
    return cycles
        
def gen_vline_dither_table():
    cycles = 0
    for x in xrange(159, -1, -1):
        sx = x * BMP_STRIDE
        if x & 1:
            print "move.b %d2, {}(%a0)".format(sx)
            cycles += 12
        else:
            print "move.b %d1, {}(%a0)".format(sx)
            cycles += 12

    return cycles
            

def emit_load_texel():
    return ("  move.b (%a0)+, %d0", 8)

    
def emit_write_pixel(pix, texel_idx):
    if pix == 0:
        return ("  move.b %d0, (%a1) | write texel {} to pixel {}".format(texel_idx, pix), 8)
    else:
        return ("  move.b %d0, {}(%a1) | write texel {} to pixel {}".format(pix*128, texel_idx, pix), 12)

def emit_direct_copy_texel(pix, texel_idx):
    if pix == 0:
        return ("  move.b (%a0)+, (%a1) | write texel {} to pixel {}".format(texel_idx, pix), 12)
    else:
        return ("  move.b (%a0)+, {}(%a1) | write texel {} to pixel {}".format(pix*128, texel_idx, pix), 16)
    

def skip_texels(skip_amount):
    if skip_amount <= 8:
        return ("  addq.l #{}, %a0".format(skip_amount), 8)
    else:
        return ("  add.l #{}, %a0".format(skip_amount), 10)


# TODO 
    
def gen_texture_table(texture_size, wall_height):
    pixel_texel_ratio = texture_size/float(wall_height)
    #print "pixel texel ratio {}".format(pixel_texel_ratio)

    cur_texel = 0


    got_texel = False

    cycles = 0

    pix_map = {}
    draw_table_code = []
    jump_pix_skip_to_texel_idx = {}
    skip_table_code = []
    skip_addresses = []
    
    for pix in xrange(wall_height):
        draw_lbl = "draw_{}_tex_to_{}_pix_{}".format(texture_size, wall_height, pix)
        skip_lbl = "skip_{}_tex_to_{}_skip_pix_{}".format(texture_size, wall_height, pix)
        draw_table_code.append("{}:".format(draw_lbl))
        
        pix_map[pix] = draw_lbl
        jump_pix_skip_to_texel_idx[pix] = int(cur_texel)

        skip_table_code.append("{}:".format(skip_lbl))

        if int(cur_texel) > 0:
            code,cnt = skip_texels(int(cur_texel))
            skip_table_code.append(code)

        if got_texel:
            # need to add a load to skip code
            code,cnt = emit_load_texel()
            skip_table_code.append(code)
        skip_table_code.append("  bra.w {}".format(draw_lbl))
        skip_addresses.append("  dc.l {}".format(skip_lbl))
        next_texel = cur_texel + pixel_texel_ratio
                
        if int(next_texel) == int(cur_texel):
            # don't need to do anything
            will_reuse_texel = True
            skip_amount = 0
            
        else:
            will_reuse_texel = False
            
            skip_amount = int(next_texel) - int(cur_texel)

        
        direct_copied = False
        if got_texel:
            code,cnt =  emit_write_pixel(pix, int(cur_texel))
            draw_table_code.append(code)
            cycles += cnt
        else:
            if will_reuse_texel:
                code,cnt = emit_load_texel()
                cycles += cnt
                draw_table_code.append(code)
                code,cnt = emit_write_pixel(pix, int(cur_texel))
                cycles += cnt
                draw_table_code.append(code)
            else:
                code,cnt = emit_direct_copy_texel(pix, int(cur_texel))
                cycles += cnt
                draw_table_code.append(code)
                

        if skip_amount > 1:
            code,cnt = skip_texels(skip_amount-1)
            cycles += cnt
            draw_table_code.append(code)
            
        cur_texel = next_texel
        got_texel = will_reuse_texel

    if "add" in draw_table_code[-1]:
        draw_table_code.pop()

    draw_table_code.append("  move.l (%sp)+, %a2       | restore registers")
    draw_table_code.append("  move.l (%sp)+, %a1       | restore registers")
    draw_table_code.append("  rts")

    print "draw_{}_tex_to_{}:".format(texture_size, wall_height)
    print "\n".join(draw_table_code)

    print "skip_code_{}_tex_to_{}:".format(texture_size, wall_height)
    print "\n".join(skip_table_code)
    
    skip_addresses_table_label = "skip_addresses_{}_tex_to_{}".format(texture_size, wall_height)
    print "{}:".format(skip_addresses_table_label)
    print "\n".join(skip_addresses)
    
    return skip_addresses_table_label

            
    
if __name__ == '__main__':
    #print "{} cycles".format(gen_vline_dither_table())

    #print gen_texture_table(texture_size=64,wall_height=10)
    #exit()
    
    master_table = []
    master_table.append("  dc.l 0")
    for x in xrange(1, 129, 1):
        addresses = gen_texture_table(texture_size=64, wall_height=x)
        master_table.append("  dc.l {}".format(addresses))
        
    print "skip_tables:"
    print "\n".join(master_table)

    #gen_texture_table(texture_size=64, wall_height=159)
