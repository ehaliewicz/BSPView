.globl vline_native_dither

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
	move.l (%sp)+, %d2
	rts


fill_edge_list_for_one_sided_span:

	| stash all registers
    movem.l %d2-%d4, -(%sp)

	move.l (stash_edge_list_ptr), %a0	| a0 is edge_list_ptr
	
	move.l (stash_fix_y1a), %d0			| d0 is fix_y1a
	move.l (stash_fix_y1b), %d1			| d1 is fix_y1b 
	move.l (stash_top_slope), %d2	    | d2 is top_slope 
	move.l (stash_bot_slope), %d3  		| d3 is bot_slope 

	move.w (stash_ddx), %d4				| d4 is num_pixels_to_draw 


| d0, d1 - 16.16 fixed point integers
| d2, d3 - 16.16 fixed point slopes of the top and bottom of the wall
| d4 - count of pixels to draw
| a0 - pointer to edge list (stores top and bottom coords to draw)

.fill_edge_list_loop:

	| write integer portion of coordinate to edge list, and increment by slope
	swap %d0		   | swap 16-bit halves of d0 to get integer portion 
	move.w %d0, (%a0)+ | write integer coord to edge-list
	swap %d0		   | swap back
	add.l %d2, %d0     | increment top edge with 16.16 fixed point slope

	| same as above, but for the bottom of the wall
	swap %d1
	move.w %d1, (%a0)+
	swap %d1 
	add.l %d3, %d1 

	dbeq %d4, .fill_edge_list_loop	 | decrement number of pixels and jump back to top of loop if we still have more to draw


	| restore registers and return
    movem.l (%sp)+,%d2-%d4
	rts



clamp_edge_list_for_one_sided_span:
	| stash all registers
    movem.l %d2-%d4, -(%sp)

	move.l (stash_edge_list_ptr), %a0	| a0 is edge_list_ptr
	move.l (stash_yclip_ptr), %a1		| a1 is yclip_ptr
	move.w (stash_ddx), %d0				| d0 is num_pixels_to_draw 

.clamp_edge_list_loop:
	move.w (%a0), %d1				| d1 is y1a 
	move.w 2(%a0), %d2				| d2 is y1b 
	move.w (%a1)+, %d3	 			| d3 is cytop 
	move.w (%a1)+, %d4 				| d4 is cybottom

.check_clip_top:
	cmp.w %d3, %d1
	bpl.b .no_y1a_top_clip
	move.w %d3, %d1
	| addq.w #1, %d1					| draw one lower than top clip?
.no_y1a_top_clip: 
	cmp.w %d3, %d2
	bpl.b .no_y1b_top_clip 
	move.w %d3, %d2 
	| add.w #1, %d2 					| draw one lower than top clip?
.no_y1b_top_clip: 

.check_clip_bot:
	cmp.w %d4, %d1
	bmi.b .no_y1a_bot_clip 
	move.w %d4, %d1
	| subq.w #1, %d1					| draw one higher than bot clip? 
.no_y1a_bot_clip: 
	cmp.w %d4, %d2 
	bmi.b .no_y1b_bot_clip 
	move.w %d4, %d2 
	| subq.w #1, %d2					| draw one higher than bot clip? 
.no_y1b_bot_clip:

	move.w %d1, (%a0)+
	move.w %d2, (%a0)+

	dbeq %d0, .clamp_edge_list_loop

	| restore registers and return
    movem.l (%sp)+,%d2-%d4
	rts