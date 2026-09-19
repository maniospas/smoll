import std.core
import std.graphics
import std.io.process::breakpoint

def main()
    CLI = edit console() # needed for breakpoint
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