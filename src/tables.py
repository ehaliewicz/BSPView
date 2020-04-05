import sys

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
        return ("  move.b %d0, {}(%a1) | write texel {} to pixel {}".format(pix*2, texel_idx, pix), 12)

def emit_direct_copy_texel(pix, texel_idx):
    if pix == 0:
        return ("  move.b (%a0)+, (%a1) | write texel {} to pixel {}".format(texel_idx, pix), 12)
    else:
        return ("  move.b (%a0)+, {}(%a1) | write texel {} to pixel {}".format(pix*2, texel_idx, pix), 16)
    

def skip_texels(skip_amount):
    if skip_amount <= 8:
        return ("  addq.l #{}, %a0".format(skip_amount), 8)
    else:
        return ("  add.l #{}, %a0".format(skip_amount), 10)

def emit_offset_copy_texel(pix, texel):
    return ("  move.b {}(%a0), {}(%a1)".format(texel, pix*2), 20)

def emit_c_offset_copy_texel(pix, texel):
    return ("      buf_ptr[{}] = tex_ptr[{}];".format(texel, pix*2), 20)


def gen_texture_table(texture_size, wall_height):
    du_over_dy = texture_size / float(wall_height)

    draw_table_code = []

    skip_dv_table = []

    skip_table = []
    
    cycles = 0
    du = 0

    skip_texels_per_skip_pixels = []
    
    draw_table_label = "draw_{}_tex_to_{}".format(texture_size, wall_height)
    skip_dv_table_label = "skip_dv_{}_tex_to_{}".format(texture_size, wall_height)
    skip_code_table_label = "skip_code_{}_tex_to_{}".format(texture_size, wall_height)
    print "  {}:".format(draw_table_label)
    print "  switch(skip_pixels) {"
    for y in xrange(wall_height):
        
        draw_lbl = "draw_{}_tex_to_{}_pix_{}".format(texture_size, wall_height, y)
        skip_lbl = "skip_{}_tex_to_{}_skip_pix_{}".format(texture_size, wall_height, y)
        #draw_table_code.append("  {}:".format(draw_lbl))
        print "    case {}:".format(y) 
        #pix_map[pix] = draw_lbl
        #jump_pix_skip_to_texel_idx[pix] = int(cur_texel)

        #skip_table.append(draw_lbl)
        
        du_int = int(du)
        skip_texels_per_skip_pixels.append(du_int)
        code,cnt = emit_c_offset_copy_texel(y, du_int)
        du += du_over_dy
        cycles += cnt
        print code
        #draw_table_code.append(code)
        skip_dv_table.append(du_int)

    print "    return;"
    print "    }"
    
    draw_table_code.append("    return;")
    
    
    print "  {}:\n".format(draw_table_label)
    print "\n".join(draw_table_code)

    print "  const u16 {}[{}] = ".format(skip_dv_table_label, wall_height) + "{"
    print "    " + ", ".join([str(i) for i in skip_dv_table])
    print "  };\n"

    print "  const static void* {}[{}] = ".format(skip_code_table_label, wall_height) + "{"
    for lbl in skip_table:
        print "    &&{},".format(lbl)
    print "  };"
        
    sys.stderr.write('cycles for {} to {}: {}\n'.format(texture_size, wall_height, cycles))
    
    return draw_table_label, skip_dv_table_label, skip_code_table_label, skip_texels_per_skip_pixels

    
        
    
    
def gen_texture_table_old(texture_size, wall_height):
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

    
    draw_table_code.append("  rts")
    
    print "draw_{}_tex_to_{}:".format(texture_size, wall_height)
    print "\n".join(draw_table_code)

    print "skip_code_{}_tex_to_{}:".format(texture_size, wall_height)
    print "\n".join(skip_table_code)
    
    skip_addresses_table_label = "skip_addresses_{}_tex_to_{}".format(texture_size, wall_height)
    print "{}:".format(skip_addresses_table_label)
    print "\n".join(skip_addresses)
    
    sys.stderr.write('cycles for {} to {}: {}\n'.format(texture_size, wall_height, cycles))
    
    return skip_addresses_table_label



if __name__ == '__main__':
    print "#include \"genesis.h\""
    max_wall_size = 125

    #texture_size = 32

    """
    for y in xrange(1, max_wall_size+1):
        u = 0
        u_per_dy = float(texture_size) / float(y)
        print "static const u8 skip_texels_for_{}[{}] = ".format(y, y) + "{"
        skip_texels = []
        for py in xrange(y):
            skip_texels.append(int(u))
            u += u_per_dy

        for skip in skip_texels:
            print "  {},".format(int(skip))
            
        #for skip in reversed(skip_texels):
        #    print "      {},".format(31-int(skip))
            
        print "};"
    """

    for texture_size in [16, 32]: 
    
        for y in xrange(1, max_wall_size+1):
            skip_texel_for_skip_pixel = []
        
            u_per_dy = float(texture_size) / float(y)
            print "void draw_{}_tex_to_{}_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) ".format(texture_size, y) + "{"

            reuse_texels = y >= texture_size
            
            
            print "s16 total_skip = skip_top_pixels + skip_bot_pixels;"
            print "  if(total_skip) {"
            #print "    tex_ptr = tex_ptr - skip_texels_for_{}[total_skip];".format(y)
            #print "    tex_ptr = tex_ptr + skip_texels_for_{}[skip_top_pixels];".format(y)
            #print "    tex_ptr = tex_ptr - skip_texels_for_{}[skip_bot_pixels];".format(y)
            if reuse_texels:
                pass
            else:
                print "    tex_ptr -= ((skip_bot_pixels*{})>>5);".format(int(u_per_dy*32))
            #if reuse_texels:
            #    print "    tex_ptr += ((skip_top_pixels * {})>>5);".format(int(u_per_dy*32))
            print "  }"

        
                
            u = 0

            print "  switch(skip_top_pixels+skip_bot_pixels) {"
            for py in xrange(y):
                next_u = u+u_per_dy
                print "    case {}: ".format(py)
                if reuse_texels:
                    if int(next_u) > int(u):
                        print "      buf_ptr[{}] = *tex_ptr++;".format(py*2)
                    else:
                        print "      buf_ptr[{}] = *tex_ptr;".format(py*2)
                else:
                    print "      buf_ptr[{}] = tex_ptr[{}];".format(py*2, int(u))
                u = next_u
            print "  };"
            print "  return;"
            print "}"

    
        print "void (*jmp_{}[{}])(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) = ".format(texture_size, max_wall_size+1) + "{"
        print "  NULL,"
        for y in xrange(1, max_wall_size+1):
            print "  draw_{}_tex_to_{}_pixels,".format(texture_size, y)
        print "};"
        
    
        print "void vline_texture_{}_c(u8* buf_ptr, u8* tex_ptr, s16 wall_height, s16 skip_top_pixels, s16 skip_bot_pixels) ".format(texture_size) +"{"

        print "  int total_skip = skip_top_pixels + skip_bot_pixels;"
  

        print "  buf_ptr = buf_ptr - (total_skip*2);"

        print "  jmp_{}[wall_height](buf_ptr, tex_ptr, skip_top_pixels, skip_bot_pixels);".format(texture_size)

        print "}"
        
    

"""
if __name__ == '__main__':
    #print "{} cycles".format(gen_vline_dither_table())

    #print gen_texture_table(texture_size=64,wall_height=10)
    #exit()
    
    master_texture_table = ["NULL"]
    master_dv_skip_table = ["0"]

    print "#include \"genesis.h\"\n"
    print "void texture(u8* buf_ptr, u8* tex_ptr) {\n"

    print "  int skip_pixels;"
    max_wall_size = 64

    draw_labels = []
    skip_labels = []
    for x in xrange(1, max_wall_size+1, 1):
        #addresses = gen_texture_table(texture_size=64, wall_height=x)
        draw_address_label,skip_dv_address_label,skip_code_address_label = gen_texture_table(texture_size=32, wall_height=x)
        #master_texture_table.append("  dc.l {}".format(draw_address_label))
        #master_dv_skip_table.append("  dc.l {}".format(skip_dv_address_label))
        master_texture_table.append("{}".format(draw_address_label))

        master_dv_skip_table.append("{}".format(skip_dv_address_label))
        
    
        
    print "  const static void* texture_draw_tables[{}] = ".format(max_wall_size+1) + "{"
    print "    " + ",\n    ".join(master_texture_table)
        #print "\n".join(master_texture_table)
    print "  };"
    #print "skip_dv_tables:"
    #print "\n".join(master_dv_skip_table)

    print "  dispatch:"
    
    print "}"
    #gen_texture_table(texture_size=64, wall_height=159)
"""
