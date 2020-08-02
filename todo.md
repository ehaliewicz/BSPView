# Optimize performance
- backface culling in worldspace?
- check sector AABBs or spheres against frustum and span-buffer
- drawing horizontal rectangular regions horizontally?
- optimize vertex transformation with assembly?
- optimize span-buffer with assembly?
- optimize wall rasterization with assembly?
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
  
# texturing 
- generate assembly from tables.py
- use supervisor stack pointer trick (requires getting rid of SGDK...)
- slow accurate texturing can be optimized with the same trick as above
    ```addx.l %d1, %d0    ; fractional carry goes into integer texture coordinate
    move.b (a0, d0.w), 0(a1) ; use just integer texture coordinate
    ; alternatively, with supervisor stack pointer
    move.b (a0, d0.w), (a7)+
    ```

# improvements 
- add yaw/looking up and down? (one extra multiply per vertex)
- add left-right scrolling to skybox (it's currently fixed in place) 
- add sprite objects
- add an automap
- make gameplay speed framerate independent?
