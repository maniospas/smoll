<h1>making simple games with smoλ</h1>

<div class="toc" markdown="1">

**Contents**<br>
[window](#window) <br>
[shapes](#shapes) <br>
[textures](#textures) <br>
[webapp](#webapp)
</div>

## window

Smoλ wraps the interface of the [raylib](https://www.raylib.com/) library
under the `std/graphics.s` part of the standard library. The wrapper
remains safe for use in your code, and adds some more safety checks.
To begin with, a singleton window can be constructed based on desired dimensions, 
window name, and default font. It must be declared as at least editable and a `WINDOW`
variable name lets it be passsed automatically to all functions.

There may be linking errors if raylib is not installed in your system;
*smoλ* and gcc need to access its include and linking directories. For example,
you may install raylib via the next command or an equivalent. At the
end of this tutorial, we will talk about compiling with the emscripten
backend to create a *webgl* application running in the browser.

```cmd
sudo apt install libraylib-dev
```


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


## webapp

*Smoλ* offers the option to switch to different compilation beckends, or even
run code via its own virtual machine! Do this by running programs like below:

```cmd
./smol main.s --back vm
```

By default, *gcc* is the backend of choice, *vm* is a slow-ish virtual machine that
is nonetheless used for resolution of compile-time instructions and macros, *antcc*
is an alternate compiler, and *emcc* is emscripten for export into web applications.
Here we focus on the last option, which lets us export graphics application to the
browser.

To begin with, the `emcc` compiler needs to be present in the current system.
For, example, install it with the following command or an equivalent.

```cmd
sudo apt install emscripten
```

However, you also need to compile depdendencies for the web too. You can do
this for *raylib* by running the following cheat sheet in the workling directory
of the *smoll* executable without affecting the system-wide installation:

```cmd
git clone https://github.com/raysan5/raylib.git
cd raylib
emcmake cmake -S . -B build -DPLATFORM=Web -DBUILD_EXAMPLES=OFF 
cmake --build build -j$(nproc)
```

That is, a common project can look like this:

```cmd
workdir
|- smoll
|- main.s
|- std/
|  |- ...
|- raylib/
|  |- build/
|  |  |- ...
|  |- ...
```

This project can thus be compiled with both of the following
commands, for an executable and web application.

```cmd
./smoll main.s
./smoll main.s --back emcc
```

The web application creates *main.js*, *main.wasm*, and *main.html* files.
These need to be hosted by an http server, where *smoλ*
automatically serves them in the localhost for demonstration.
You can freely edit the html file, too, as the important part is to just 
embed the javascript script into the page to properly run the wesm executable.

Web applications work on a persistent file system compartmenized by the
browser. Populate this file system with files obtained via a get request
from your own server via the following pattern. This is curated so that
you can wait on multiple files at once, and they will be retrieved asynchronously.

```python
import "std/core.s"
import "std/io.s"

def main()
    while not dir::wait_file "myfile.txt" blank() # wait until this file becomes available
```