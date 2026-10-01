import std.core
import std.graphics
import std.io.process::breakpoint
import std.sci.math


def main(CLI, TEXTURES, edit WINDOW)
    set_font "std/ArianaVioleta-dz2K.ttf"
    tex = open "docs/smol.png"
    circ_state = (100.0, 100.0, 50.0) # tuples are automatically unpacked when used later
    rect_state = (120.0, 120.0, 200.0, 50.0)
    thickness = 3
    while is_open()
        breakpoint()
        frame = draw()
        clear color(255,255,255)
        # partial bg
        texture(tex, 0.0, 0.0, WINDOW.size.width, WINDOW.size.height, color(255,255,255,255) rotate neg 12.0+2.0*cos(10.0*uptime()))
        # outlined circ
        circ(circ_state solid color(255,0,0,128))
        circ(circ_state line thickness, color(128,0,0))
        # outlined rect
        rect(rect_state solid color(0,255,0,128))
        rect(rect_state line thickness, color(0,128,0))

