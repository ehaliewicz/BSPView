# math improvements
- large maps seem to completely break the fixed point math (due to integer overflow most likely, hopefully we can get away with 16-bit floating point when we have to do multiplications)


# Subpixel accurate rasterization
- convert whole pipeline to fixed point
-- span buffer
-- wall interpolation

# Optimize perforamnce
- drawing two pixels at a time?
- optimizing span buffering and vertex/3d math in assembly?

  
# texturing 
- needs subpixel accurate rasterization
- slow accurate texturing is easy
- fast, inaccurate texturing is easy
- fast and accurate texturing. how?
- ideas: for light levels, use pre-lit textures?

# improvements 
- add yaw/looking up and down (one extra multiply per vertex)
- add left-right scrolling to skybox (it's currently fixed in place) 
- add sprite objects
- add an automap
- make gameplay speed framerate independent?
