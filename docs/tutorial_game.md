<h1>making simple games with smoλ</h1>

<div class="toc" markdown="1">

**Contents**<br>
[window](#window) <br>
[shapes](#shapes) <br>
[textures](#textures) <br>
</div>

## window

Smoλ wraps the interface of the [raylib](https://www.raylib.com/) library
under the `std/graphics.s` part of the standard library. The wrap
remains safe for use in your code, and adds some more safety checks.
To begin with, a singleton window can be constructed based on desired dimensions, 
window name, and default font. It must be declared as at least editable and a `WINDOW`
variable name lets it be passsed automatically to all functions. 

Check for window closing events with `is_open`, or loop forever. Then, in each loop,
create a drawable frame with the `frame = draw()` function. The frame is drawn when released,
which occurs either automatically if the draw function call is made within a function,
or manually with `del frame` if the drawing happens directly inside the loop.  
The type system will help prevent bugs by complaining of leaking resources if you declare
but not release a frame within a loop. In general, positions and sizes
are float numbers. See below for colors.


```python
import "std/core.s"
import "std/graphics.s"

def main()
    WINDOW = edit window(800.0, 600.0, "example", "std/ArianaVioleta-dz2K.ttf")
    font_size = 64.0
    while is_open()
        frame = draw()
        clear color(255,255,255)
        text("smoll + raylib", 20.0, 20.0, font_size, color(64,0,0))
        del frame
```

## shapes

Use the functions `rect`, `circ`, `ellipse` to draw corresponding shapes, as demonstrated
below. Switch between `solid color` and `line thickness, color` to fill the contents vs create an outline. Those
keywords are automatically created language shorthands for `,type "solid",` and `,type "line",`
that would help select between the drawing mode via a string type.
Finally, `color` is used to cast color values from natural number tuples to `nat8` tuples
with either transparency or not.

```python
import "std/core.s"
import "std/graphics.s"

def main()
    WINDOW = edit window(800.0, 600.0, "overlap", "std/ArianaVioleta-dz2K.ttf")
    circ_state = (100.0, 100.0, 50.0) # tuples are automatically unpacked when used later
    rect_state = (120.0, 120.0, 200.0, 50.0)
    thickness = 3
    while is_open()
        breakpoint()
        frame = draw()
        clear color(255,255,255)
        # outlined circ
        circ(circ_state solid color(255,0,0,128))
        circ(circ_state line thickness, color(128,0,0))
        # outlined rect
        rect(rect_state solid color(0,255,0,128))
        rect(rect_state line thickness, color(0,128,0))
        del frame
```

## textures

To be completed.