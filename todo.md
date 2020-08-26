# Optimize performance
- backface culling in worldspace
  - in each sector, store the range(s) of angles (up to 2) for which a wall seg is visible
- bsp node frustum culling
  - instead of checking bounding boxes at runtime (probably expensive), add information to each bsp node that says whether a child is potentially visible or not from any of the four quadrants! 
- check sector AABBs or spheres against frustum and span-buffer
- use visplanes and perspective correct depth shading (do correction every N pixels and interpolate between)
- add masked object rendering
  - not quite sure how this works yet
  - need to clip sprites against a recorded list of drawn silhouettes

- draw transparent masked objects!
  - skip every other row in a column being drawn
  - offset by a row for each column

- mipmapping (per column, use the column's pixel size as the index into a 160 element table, containing the size of the texture map to use) 
- optimize vertex transformation with assembly?
- optimize span-buffer with assembly?
- optimize wall rasterization with assembly
   - use addx for fixed point with no shifting 
   e.g.
   
    ```
    ; d0 is fixed point y coordinate of wall (but with fractional bits in the top word, and integer bits in the lower word)
    ; d1 is dy (wall slope), in the same fixed point format as d0
    move.w %d0, (a0)+  ; copy only integer bits over
    addx.l %d1, %d0    ; add dy to y position, any overflowing fractional portion gets moved into the carry
    move.w %d0, (a0)+
    addx.l %d1, %d0    ; carry from last addition goes into the integer portion of this addition
    ; and so on
    ```
    - make sure to optimize walls with no dy
    
- use the forward texture mapping trick for rasterization (i.e. dx_over_dy instead of dy_over_dx)

# texturing 
- generate assembly from tables.py
- use supervisor stack pointer trick (might require getting rid of SGDK)
- accurate texturing can be optimized with the same trick as above
    ```
    addx.l d1, d0    ; fractional carry goes into integer texture coordinate
    move.b (a0, d0.w), 0(a1) ; use just integer texture coordinate
    ; alternatively, with supervisor stack pointer
    move.b (a0, d0.w), (a7)+
    ```

    We can use slightly lower quality texture mapping and double each pixel
    which will give us 19 cycles per pixel, assuming it's fully unrolled up to 160 pixels
    That's only 3 cycles per pixel slower than the fully unrolled, less accurate `move.b precalculatedOffset(a0), (a7)+1` style.

    ```
    addx.l %d1, %d0
    move.b (a0, d0.w), d2
    move.b d2, (a7)+
    move.b d2, (a7)+

- another idea for texturing: use forward texture mapping, calculate how many pixels to draw for each texel, load texel once, and loop for that many times over the pixels (i.e instead of dtexel_over_dy, dy_over_dtexel) should work well with mipmapping


# improvements 
- add yaw/looking up and down? (one extra multiply per vertex)
- add left-right scrolling to skybox (it's currently fixed in place) 
- add sprite objects
- add an automap
- make gameplay speed framerate independent?

- use log and expt tables for division (16/16), sample code below
  ```
EXPT   incbin "EXPS10000H.bin"
LOGT   incbin "LOGS8000H.bin"

START:
    lea logt,a0
    lea expt,a1
    
    move.w #1322, d0  ; dividend
    move.w #220,d1    ; divisor
    
    move.b (a0,d0.w), d0  ; get log of dividend
    sub.b (a0,d1),d1      ; subtract log of divisor from dividend
    blt.b zero    ; if less than, quotient is zero (double check this)
    
    and.w #$ff, d0  ; clear top byte of dividend
    add.w d0, d0    ; double log subtraction result (for indexing into word-size expt table)
    move.w (a1, d0), d2 ; quotient here
    rts
zero:
    moveq #0, d2  ; quotient is zero here
    rts
    ```

