import sys
from PIL import Image

def read_palette(palfile):
    palette = {}
    im = Image.open(palfile)
    px = im.load()
    for x in xrange(16):
        palette[px[x,0]] = x
    return palette

def read_texture_and_apply_palette(texfile, palette):
    im = Image.open(texfile)
    width,height = im.size
    

    px = im.load()
    output = []
    for y in xrange(height):
        row = []
        for x in xrange(width):
            rgb = px[x,y]
            if rgb not in palette:
                raise Exception("palette lookup error!")
            else:
                row.append(palette[rgb])
        output.append(row)

    return output

def gen_c_texture(name, tex):
    height = len(tex)
    width = len(tex[0])
    output = "const u8 {}[{}]".format(name, height*width) + " = {"

    for y in xrange(height):
        for x in xrange(width):
            output += "{}, ".format(tex[y][x]<<4 | tex[y][x])
        output += "\n"

    output += "};\n"

    return output
    
if __name__ == '__main__':
    
    palfile = sys.argv[1]
    palette = read_palette(palfile)

    
    texfile = sys.argv[2]
    texfile_start = texfile.split(".png")[0]
    light_texfile = "{}_light.png".format(texfile_start)
    dark_texfile = "{}_dark.png".format(texfile_start)
    
    normal_tex = read_texture_and_apply_palette(texfile, palette)
    light_tex = read_texture_and_apply_palette(light_texfile, palette)
    dark_tex = read_texture_and_apply_palette(dark_texfile, palette)

    print "#include \"genesis.h\""
    print gen_c_texture("wood_tex", normal_tex)
    print gen_c_texture("wood_tex_light", light_tex)
    print gen_c_texture("wood_tex_dark", dark_tex)
    
