.globl vline_native_dither, vline_native_dither_movep, vline_native_tex, vline_native_tex_low_quality, vline_native_tex_table_wrapper

|                                         4(%sp)    8(%sp)         12(%sp)          16(%sp)    
| void* line_native_tex_table_wrapper(u8* buf_ptr, u8* tex_ptr, u32 wall_height, u32 clipped_pixels);

a2_save:
    dc.l 0

vline_native_tex_table_wrapper:

    move.l 4(%sp), %a1  | load buf ptr
    move.l 8(%sp), %a0  | load tex ptr

    move.l %a2, (a2_save)               | stash a2
    | move.l #texture_draw_tables, %a2    | texture_draw_tables is a table of pointers to unrolled texture mapping loops
    move.l 12(%sp), %d0                 | load wall_height
    lsl.w #2, %d0                       | wall_height *= 4
    move.l 0(%a2, %d0.W), %a2           | load pointer to unrolled loop for this wall height
    move.l 16(%sp), %d0                 | load clipped_pixels
    lsl.w #3, %d0                       | clipped_pixels *= 6
    add.l %d0, %a2                      | skip instructions for clipped_pixels, each instruction is 6 bytes

    | jsr draw_32_tex_to_59_skip_56
    | jsr (%a2)                           | jump to code

    move.l (a2_save), %a2               | restore a2
    rts



| void vline_native_tex(u8* buf_ptr, u8* tex_ptr, s32 draw_dy, fix32 dv_over_dy)
|  for(int y = 0; y < draw_dy; y++) {
|    u8 texel = tex_ptr[dv>>16];
|    *buf_ptr = texel;//dv>>24]; // dv>>16];//tex_ptr[dv>>16];
|    dv += dv_over_dy;
|    buf_ptr += 2;
|  }

d2_save:
    dc.l 0
d3_save:
    dc.l 0


vline_native_tex:
    move.l %d2, (d2_save)
    move.l 4(%sp), %a1      | load buf_ptr
    move.l 8(%sp), %a0      | load tex_ptr
    move.l 12(%sp), %d0     | load draw_dy
    move.l 16(%sp), %d1     | load dv_over_dy
    move.l 20(%sp), %d2     | load dv
    

    lsr.l #1, %d0
tex_lp:
    swap %d2
    move.b (%a0, %d2.W), (%a1)
    swap %d2
    add.l %d1, %d2
    swap %d2
    move.b (%a0, %d2.W), 2(%a1)
    addq.l #4, %a1
    swap %d2
    add.l %d1, %d2
    dbeq %d0, tex_lp

    move.l (d2_save), %d2
    rts

vline_native_tex_low_quality:
    move.l %d2, (d2_save)
    move.l %d3, (d3_save)
    move.l 4(%sp), %a1      | load buf_ptr
    move.l 8(%sp), %a0      | load tex_ptr
    move.l 12(%sp), %d0     | load draw_dy
    move.l 16(%sp), %d1     | load dv_over_dy
    move.l 20(%sp), %d2     | load dv
    
    | add.l %d1, %d1      | double dv_over_dy (low quality)
    lsr.l #1, %d0
lq_tex_lp:
    swap %d2
    move.b (%a0, %d2.W), %d3
    move.b %d3, (%a1)
    move.b %d3, 2(%a1)
    addq.l #4, %a1
    swap %d2
    add.l %d1, %d2
    add.l %d1, %d2
    dbeq %d0, lq_tex_lp

    move.l (d2_save), %d2
    move.l (d3_save), %d3
    rts

vline_native_dither_movep:
	| vline_native_dither_movep(u8* buf, s16 dy, u32 col1_col2) 
	move.l 4(%sp), %a0		| load pointer
    moveq.l #0, %d0
    move.w 10(%sp), %d0
    move.l 12(%sp), %d1

    andi.w #3, %d0
    beq after_edge_loop
    subq.b #1, %d0
edge_loop:
    move.b %d1, (%a0)
    addq.l #2, %a0
    ror.l #8, %d1
    dbeq %d0, edge_loop

after_edge_loop:
    
    moveq.l #0, %d0
    move.w 10(%sp), %d0
    andi.w #65532, %d0
    beq exit

    lsr.l #2, %d0
    neg.w %d0
    add.w #36, %d0
    lsl.w #2, %d0
    jmp dither_draw_table_movep(%pc, %d0.W)


dither_draw_table_movep:
    | movep.l %d1, 312(%a0)
    | movep.l %d1, 304(%a0)
    | movep.l %d1, 296(%a0)
    | movep.l %d1, 288(%a0)
    movep.l %d1, 280(%a0)
    movep.l %d1, 272(%a0)
    movep.l %d1, 264(%a0)
    movep.l %d1, 256(%a0)
    movep.l %d1, 248(%a0)
    movep.l %d1, 240(%a0)
    movep.l %d1, 232(%a0)
    movep.l %d1, 224(%a0)
    movep.l %d1, 216(%a0)
    movep.l %d1, 208(%a0)
    movep.l %d1, 200(%a0)
    movep.l %d1, 192(%a0)
    movep.l %d1, 184(%a0)
    movep.l %d1, 176(%a0)
    movep.l %d1, 168(%a0)
    movep.l %d1, 160(%a0)
    movep.l %d1, 152(%a0)
    movep.l %d1, 144(%a0)
    movep.l %d1, 136(%a0)
    movep.l %d1, 128(%a0)
    movep.l %d1, 120(%a0)
    movep.l %d1, 112(%a0)
    movep.l %d1, 104(%a0)
    movep.l %d1, 96(%a0)
    movep.l %d1, 88(%a0)
    movep.l %d1, 80(%a0)
    movep.l %d1, 72(%a0)
    movep.l %d1, 64(%a0)
    movep.l %d1, 56(%a0)
    movep.l %d1, 48(%a0)
    movep.l %d1, 40(%a0)
    movep.l %d1, 32(%a0)
    movep.l %d1, 24(%a0)
    movep.l %d1, 16(%a0)
    movep.l %d1, 8(%a0)
    movep.l %d1, 0(%a0)
exit:
	rts




vline_native_dither:
	| vline_native_dither(u8* buf, s16 dy, u8 col1, u8 col2)
	move.l 4(%sp), %a0		| load pointer
	moveq.l #0, %d0
	move.w #159, %d0
	sub.w 10(%sp), %d0		| d0 is 159-dy
	move.b 15(%sp), %d1 	| load color 1
	move.l %d2, -(%sp)
	move.b 4+19(%sp), %d2		| load color 2
	lsl.w #2, %d0
	jmp dither_draw_table(%pc, %d0.W)

dither_draw_table:	
	move.b %d2, 636(%a0)
    move.b %d1, 632(%a0)
    move.b %d2, 628(%a0)
    move.b %d1, 624(%a0)
    move.b %d2, 620(%a0)
    move.b %d1, 616(%a0)
    move.b %d2, 612(%a0)
    move.b %d1, 608(%a0)
    move.b %d2, 604(%a0)
    move.b %d1, 600(%a0)
    move.b %d2, 596(%a0)
    move.b %d1, 592(%a0)
    move.b %d2, 588(%a0)
    move.b %d1, 584(%a0)
    move.b %d2, 580(%a0)
    move.b %d1, 576(%a0)
    move.b %d2, 572(%a0)
    move.b %d1, 568(%a0)
    move.b %d2, 564(%a0)
    move.b %d1, 560(%a0)
    move.b %d2, 556(%a0)
    move.b %d1, 552(%a0)
    move.b %d2, 548(%a0)
    move.b %d1, 544(%a0)
    move.b %d2, 540(%a0)
    move.b %d1, 536(%a0)
    move.b %d2, 532(%a0)
    move.b %d1, 528(%a0)
    move.b %d2, 524(%a0)
    move.b %d1, 520(%a0)
    move.b %d2, 516(%a0)
    move.b %d1, 512(%a0)
    move.b %d2, 508(%a0)
    move.b %d1, 504(%a0)
    move.b %d2, 500(%a0)
    move.b %d1, 496(%a0)
    move.b %d2, 492(%a0)
    move.b %d1, 488(%a0)
    move.b %d2, 484(%a0)
    move.b %d1, 480(%a0)
    move.b %d2, 476(%a0)
    move.b %d1, 472(%a0)
    move.b %d2, 468(%a0)
    move.b %d1, 464(%a0)
    move.b %d2, 460(%a0)
    move.b %d1, 456(%a0)
    move.b %d2, 452(%a0)
    move.b %d1, 448(%a0)
    move.b %d2, 444(%a0)
    move.b %d1, 440(%a0)
    move.b %d2, 436(%a0)
    move.b %d1, 432(%a0)
    move.b %d2, 428(%a0)
    move.b %d1, 424(%a0)
    move.b %d2, 420(%a0)
    move.b %d1, 416(%a0)
    move.b %d2, 412(%a0)
    move.b %d1, 408(%a0)
    move.b %d2, 404(%a0)
    move.b %d1, 400(%a0)
    move.b %d2, 396(%a0)
    move.b %d1, 392(%a0)
    move.b %d2, 388(%a0)
    move.b %d1, 384(%a0)
    move.b %d2, 380(%a0)
    move.b %d1, 376(%a0)
    move.b %d2, 372(%a0)
    move.b %d1, 368(%a0)
    move.b %d2, 364(%a0)
    move.b %d1, 360(%a0)
    move.b %d2, 356(%a0)
    move.b %d1, 352(%a0)
    move.b %d2, 348(%a0)
    move.b %d1, 344(%a0)
    move.b %d2, 340(%a0)
    move.b %d1, 336(%a0)
    move.b %d2, 332(%a0)
    move.b %d1, 328(%a0)
    move.b %d2, 324(%a0)
    move.b %d1, 320(%a0)
    move.b %d2, 316(%a0)
    move.b %d1, 312(%a0)
    move.b %d2, 308(%a0)
    move.b %d1, 304(%a0)
    move.b %d2, 300(%a0)
    move.b %d1, 296(%a0)
    move.b %d2, 292(%a0)
    move.b %d1, 288(%a0)
    move.b %d2, 284(%a0)
    move.b %d1, 280(%a0)
    move.b %d2, 276(%a0)
    move.b %d1, 272(%a0)
    move.b %d2, 268(%a0)
    move.b %d1, 264(%a0)
    move.b %d2, 260(%a0)
    move.b %d1, 256(%a0)
    move.b %d2, 252(%a0)
    move.b %d1, 248(%a0)
    move.b %d2, 244(%a0)
    move.b %d1, 240(%a0)
    move.b %d2, 236(%a0)
    move.b %d1, 232(%a0)
    move.b %d2, 228(%a0)
    move.b %d1, 224(%a0)
    move.b %d2, 220(%a0)
    move.b %d1, 216(%a0)
    move.b %d2, 212(%a0)
    move.b %d1, 208(%a0)
    move.b %d2, 204(%a0)
    move.b %d1, 200(%a0)
    move.b %d2, 196(%a0)
    move.b %d1, 192(%a0)
    move.b %d2, 188(%a0)
    move.b %d1, 184(%a0)
    move.b %d2, 180(%a0)
    move.b %d1, 176(%a0)
    move.b %d2, 172(%a0)
    move.b %d1, 168(%a0)
    move.b %d2, 164(%a0)
    move.b %d1, 160(%a0)
    move.b %d2, 156(%a0)
    move.b %d1, 152(%a0)
    move.b %d2, 148(%a0)
    move.b %d1, 144(%a0)
    move.b %d2, 140(%a0)
    move.b %d1, 136(%a0)
    move.b %d2, 132(%a0)
    move.b %d1, 128(%a0)
    move.b %d2, 124(%a0)
    move.b %d1, 120(%a0)
    move.b %d2, 116(%a0)
    move.b %d1, 112(%a0)
    move.b %d2, 108(%a0)
    move.b %d1, 104(%a0)
    move.b %d2, 100(%a0)
    move.b %d1, 96(%a0)
    move.b %d2, 92(%a0)
    move.b %d1, 88(%a0)
    move.b %d2, 84(%a0)
    move.b %d1, 80(%a0)
    move.b %d2, 76(%a0)
    move.b %d1, 72(%a0)
    move.b %d2, 68(%a0)
    move.b %d1, 64(%a0)
    move.b %d2, 60(%a0)
    move.b %d1, 56(%a0)
    move.b %d2, 52(%a0)
    move.b %d1, 48(%a0)
    move.b %d2, 44(%a0)
    move.b %d1, 40(%a0)
    move.b %d2, 36(%a0)
    move.b %d1, 32(%a0)
    move.b %d2, 28(%a0)
    move.b %d1, 24(%a0)
    move.b %d2, 20(%a0)
    move.b %d1, 16(%a0)
    move.b %d2, 12(%a0)
    move.b %d1, 8(%a0)
    move.b %d2, 4(%a0)
    move.b %d1, 0(%a0)
.exit:
	move.l (%sp)+, %d2
	rts

