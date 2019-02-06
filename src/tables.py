def gen_vline_table():
    for x in xrange(159*128, -128, -128):
        print "move.b %d1, {}(%a0)".format(x)

def gen_vline_dither_table():
    for x in xrange(159, -1, -1):
        sx = x * 128
        if x & 1:
            print "move.b %d2, {}(%a0)".format(sx)
        else:
            print "move.b %d1, {}(%a0)".format(sx)
            
        
if __name__ == '__main__':
    gen_vline_dither_table()
    
