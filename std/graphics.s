# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

import std.core
import std.mini
import "std/extern/raysupport.h"

def color(nat _r, nat _g, nat _b, nat|blank _a)
    if _a is blank
        _a = 255
    r = nat8 _r
    g = nat8 _g
    b = nat8 _b
    a = nat8 _a
    return (r,g,b,a)

def position(float x, float y)
    return compiler::args()

def size(float width, float height)
    return compiler::args()

local def unsafe_open_window(size size, cstr title, cstr font_path)
    VM "(pyray.set_trace_log_level(pyray.LOG_NONE), pyray.init_window(int($size__width),int($size__height),$title),pyray.set_target_fps(60),memory.set_global('font', pyray.load_font_ex($font_path,128,None,0) if $font_path else pyray.get_font_default()))"
    {SetTraceLogLevel(LOG_NONE); InitWindow(size__width, size__height, title); }
    if exists font_path
        {
            builtins::int __smolambda_n = 0;
            for (builtins::int c = 32; c <= 126; c++)   __smolambda_codepoints[__smolambda_n++] = c;
            __smolambda_codepoints[__smolambda_n++] = 0x2018;
            __smolambda_codepoints[__smolambda_n++] = 0x2019;
            for (int c = 0x2500; c <= 0x257F; c++) __smolambda_codepoints[__smolambda_n++] = c;
            __smolambda_font = __smo_load_font(font_path, 128, __smolambda_codepoints, __smolambda_n);
        }

def window(size size, cstr title, cstr font_path)
    # HOW TO INSTALL RAYLIB FOR UBUNTU
    # sudo apt install libraylib-dev
    # HOW TO INSTALL RAYLIB FOR EMSCRIPTEN (--back emcc)
    # sudo apt install emscripten
    # git clone https://github.com/raysan5/raylib.git
    # cd raylib
    # emcmake cmake -S . -B build -DPLATFORM=Web -DBUILD_EXAMPLES=OFF 
    # cmake --build build -j$(nproc)
    if compiler::back type "emcc"
        {"-I./raylib/src"}
        {"-L./raylib/build/raylib"}
        {"-lraylib"}
        {"-sUSE_GLFW=3"}
        {"-sASYNCIFY"}
        {"-sASYNCIFY_STACK_SIZE=65536"}
        {"-flto"}
    else
        {"-lraylib"}
        {"-lGL"}
    openy = mut false
    unsafe_open_window(size, title, font_path)
    return singleton(size, title, openy)

def is_open(effect edit window WINDOW)
    VM "[not pyray.window_should_close()]"
    {builtins::bool ret = WindowShouldClose(); }
    return not ret

local def unsafe_begin_drawing()
    VM "pyray.begin_drawing()"
    {BeginDrawing();}

local def unsafe_end_drawing()
    VM "pyray.end_drawing()"
    {EndDrawing();}
    if compiler::back type "emcc"
        { emscripten_sleep(0); }
    
def draw(effect edit window WINDOW)
    if WINDOW.openy fail "alopeny drawing on window"
    is_drawing = true
    unsafe_begin_drawing()
    defer
        if is_drawing
            unsafe_end_drawing()
    return is_drawing

def clear(effect edit window WINDOW, color color)
    VM "pyray.clear_background(pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {ClearBackground((Color){color__r,color__g,color__b,color__a});}

def text(effect edit window WINDOW, cstr txt, position pos, float size, color color)
    VM "pyray.draw_text_ex(memory.globals['font'],$txt,pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawTextEx(
            __smolambda_font,
            txt, 
            (Vector2){pos__x,pos__y}, 
            size, 
            1.0f,
            (Color){color__r, color__g, color__b, color__a}
        ); 
    }

def text(effect edit window WINDOW, str txt, position pos, float size, color color)
    VM "pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawTextEx(
            __smolambda_font,
            TextSubtext(txt__unsafe_ptr, txt__dat__pos, txt__dat__length), 
            (Vector2){pos__x,pos__y}, 
            size, 
            1.0f,
            (Color){color__r, color__g, color__b, color__a}
        ); 
    }
    
def text(effect edit window WINDOW, str txt, position pos, float size, color color, "rotate", position origin, float rotation)
    VM "pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawTextPro(
            __smolambda_font,
            TextSubtext(txt__unsafe_ptr, txt__dat__pos, txt__dat__length), 
            (Vector2){pos__x,pos__y}, 
            (Vector2){origin__x,origin__y},
            rotation,
            size, 
            1.0f,
            (Color){color__r, color__g, color__b, color__a}
        ); 
    }

def sleep(nat milliseconds)
    VM "time.sleep($seconds*0.001)"
    { WaitTime((double)milliseconds/(double)1000.0); }

local def TextureData(nat id, size size, nat mipmaps, nat format)
    return compiler::args()
    
def Texture(TextureData _data)
    data = [_data]
    return class(data)

def exists(Texture tex)
    return 0!=len tex.data

def open(cstr path)
    {
        builtins::nat id = 0;
        builtins::float width = 0;
        builtins::float height = 0;
        builtins::nat mipmaps = 0;
        builtins::nat format = 0;
        __smolambda_ray_texture(path__contents, id, width, height, mipmaps, format);
    }
    defer
        {UnloadTexture((Texture2D){id, (int)width, (int)height, (int)mipmaps, (int)format});}
    return Texture(id, size(width, height), mipmaps, format)

def texture(effect edit window WINDOW, Texture _tex, position pos, color color)
    tex = TextureData _tex.data[0]
    { 
        DrawTexture(
            (Texture2D){(int)tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            pos__x, pos__y,
            (Color){color__r,color__g,color__b,color__a}
        ); 
    }

def texture(effect edit window WINDOW, Texture _tex, position pos, float scale, color color, "rotate", float rotation)
    tex = TextureData _tex.data[0]
    { 
        DrawTextureEx(
            (Texture2D){tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            (Vector2){(float)pos__x, (float)pos__y},
            (float)rotation,
            (float)scale,
            (Color){color__r,color__g,color__b,color__a}
        ); 
    }

def texture(effect edit window WINDOW, Texture _tex, position pos, size size, color color, "rotate", float rotation)
    tex = TextureData _tex.data[0]
    scale_x = size.width/float tex.size.width
    scale_y = size.height/float tex.size.height
    { 
        DrawTextureEx(
            (Texture2D){tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            (Vector2){(float)pos__x, (float)pos__y},
            (float)rotation,
            (float)scale,
            (Color){color__r,color__g,color__b,color__a}
        ); 
    }

def texture(effect edit window WINDOW, Texture _tex, position pos, float scale, color color, "rotate", position origin, float rotation)
    tex = TextureData _tex.data[0]
    {
        DrawTexturePro(
            (Texture2D){tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            (Rectangle){0, 0, (float)tex__size__width, (float)tex__size__height},
            (Rectangle){(float)pos__x, (float)pos__y, (float)tex__size__width*scale, (float)tex__size__height*scale},
            (Vector2){(float)origin__x, (float)origin__y},
            (float)rotation,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def texture(effect edit window WINDOW, Texture _tex, position pos, size size, color color, "rotate", position origin, float rotation)
    tex = TextureData _tex.data[0]
    {
        DrawTexturePro(
            (Texture2D){tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            (Rectangle){0, 0, (float)tex__size__width, (float)tex__size__height},
            (Rectangle){(float)pos__x, (float)pos__y, (float)size__width, (float)size__height},
            (Vector2){(float)origin__x, (float)origin__y},
            (float)rotation,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def circ(effect edit window WINDOW, position pos, float radius, "solid", color color)
    VM "pyray.draw_circle_v(pyray.Vector2($pos__x,$pos__y),$radius,pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawCircleV(
            (Vector2){(float)pos__x, (float)pos__y}, 
            (float)radius,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def ellipse(effect edit window WINDOW, position pos, position radius, "solid", color color)
    {
        DrawEllipseV(
            (Vector2){(float)pos__x, (float)pos__y}, 
            (float)radius__x,
            (float)radius__y,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def ellipse(effect edit window WINDOW, position pos, position radius, "line", nat thickness, color color)
    {
        DrawEllipseLines(
            (int)pos__x, (int)pos__y,
            (float)radius__x,
            (float)radius__y,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def rect(effect edit window WINDOW, position pos, size size, "solid", color color)
    VM "pyray.draw_rectangle(int($pos__x),int($pos__y),int($size__width),int($size__height),pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawRectangle(
            pos__x, pos__y,
            size__width, size__height,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def rect(effect edit window WINDOW, position pos, size size, "line", nat thickness, color color)
    VM "pyray.draw_rectangle_lines_ex(pyray.Rectangle($pos__x,$pos__y,$size__width,$size__height),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {DrawRectangleLinesEx((Rectangle){(float)pos__x, (float)pos__y, (float)size__width, (float)size__height}, (int)thickness, (Color){color__r,color__g,color__b,color__a});}

def rect(effect edit window WINDOW, position pos, size size, "solid", color color, "rotate", position origin, float rotation)
    {
        DrawRectanglePro(
            (Rectangle){(float)pos__x, (float)pos__y, (float)size__width, (float)size__height},
            (Vector2){(float)origin__x, (float)origin__y},
            rotation,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def tri(effect edit window WINDOW, position p1, position p2, position p3, "solid", color color)
    VM "pyray.draw_triangle(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawTriangle(
            (Vector2){(float)p1__x, (float)p1__y},
            (Vector2){(float)p2__x, (float)p2__y},
            (Vector2){(float)p3__x, (float)p3__y},
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def tri(effect edit window WINDOW, position p1, position p2, position p3, "line", color color)
    VM "pyray.draw_triangle_lines(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        DrawTriangleLines(
            (Vector2){(float)p1__x, (float)p1__y},
            (Vector2){(float)p2__x, (float)p2__y},
            (Vector2){(float)p3__x, (float)p3__y},
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def circ(effect edit window WINDOW, position pos, float radius, "line", nat thickness, color color)
    VM "pyray.draw_ring(pyray.Vector2($pos__x,$pos__y),max(0,$radius-$thickness),$radius,0,360,64,pyray.Color($color__r,$color__g,$color__b,$color__a))"
    {
        builtins::float inner = (radius > thickness) ? (float)(radius - thickness) : 0.0f;
        builtins::float outer = (float)radius;
        DrawRing(
            (Vector2){(float)pos__x, 
            (float)pos__y}, 
            inner, 
            outer, 
            0, 
            360, 
            64, 
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def dt(effect window WINDOW)
    VM "[pyray.get_frame_time()]"
    {builtins::float dt = GetFrameTime();}
    return dt

def uptime(effect window WINDOW)
    VM "[pyray.get_time()]"
    {builtins::float t = GetTime();}
    return t

def key_down(effect window WINDOW, nat key)
    VM "[pyray.is_key_down($key)]"
    {builtins::bool ret = IsKeyDown(key);}
    return ret

def key_pressed(effect edit window WINDOW, nat key)
    VM "[pyray.is_key_pressed($key)]"
    {builtins::bool ret = IsKeyPressed(key);}
    return ret

def key_released(effect edit window WINDOW, nat key)
    VM "[pyray.is_key_released($key)]"
    {builtins::bool ret = IsKeyReleased(key);}
    return ret

def mouse_pos(effect window WINDOW)
    VM "[(lambda p=pyray.get_mouse_position():(p.x,p.y))()]"
    {
        builtins::float x = GetMouseX();
        builtins::float y = GetMouseY();
    }
    return position(x, y)

def mouse_down(effect window WINDOW, nat button)
    VM "[pyray.is_mouse_button_down($button)]"
    {builtins::bool ret = IsMouseButtonDown(button);}
    return ret

def mouse_pressed(effect edit window WINDOW, nat button)
    VM "[pyray.is_mouse_button_pressed($button)]"
    {builtins::bool ret = IsMouseButtonPressed(button);}
    return ret

def mouse_wheel(effect window WINDOW)
    VM "[pyray.get_mouse_wheel_move()]"
    {builtins::float ret = GetMouseWheelMove();}
    return ret

def KEY_NULL            = 0
def KEY_APOSTROPHE      = 39
def KEY_COMMA           = 44
def KEY_MINUS           = 45
def KEY_PERIOD          = 46
def KEY_SLASH           = 47
def KEY_ZERO            = 48
def KEY_ONE             = 49
def KEY_TWO             = 50
def KEY_THREE           = 51
def KEY_FOUR            = 52
def KEY_FIVE            = 53
def KEY_SIX             = 54
def KEY_SEVEN           = 55
def KEY_EIGHT           = 56
def KEY_NINE            = 57
def KEY_SEMICOLON       = 59
def KEY_EQUAL           = 61
def KEY_A               = 65
def KEY_B               = 66
def KEY_C               = 67
def KEY_D               = 68
def KEY_E               = 69
def KEY_F               = 70
def KEY_G               = 71
def KEY_H               = 72
def KEY_I               = 73
def KEY_J               = 74
def KEY_K               = 75
def KEY_L               = 76
def KEY_M               = 77
def KEY_N               = 78
def KEY_O               = 79
def KEY_P               = 80
def KEY_Q               = 81
def KEY_R               = 82
def KEY_S               = 83
def KEY_T               = 84
def KEY_U               = 85
def KEY_V               = 86
def KEY_W               = 87
def KEY_X               = 88
def KEY_Y               = 89
def KEY_Z               = 90
def KEY_LEFT_BRACKET    = 91
def KEY_BACKSLASH       = 92
def KEY_RIGHT_BRACKET   = 93
def KEY_GRAVE           = 96
def KEY_SPACE           = 32
def KEY_ESCAPE          = 256
def KEY_ENTER           = 257
def KEY_TAB             = 258
def KEY_BACKSPACE       = 259
def KEY_INSERT          = 260
def KEY_DELETE          = 261
def KEY_RIGHT           = 262
def KEY_LEFT            = 263
def KEY_DOWN            = 264
def KEY_UP              = 265
def KEY_PAGE_UP         = 266
def KEY_PAGE_DOWN       = 267
def KEY_HOME            = 268
def KEY_END             = 269
def KEY_CAPS_LOCK       = 280
def KEY_SCROLL_LOCK     = 281
def KEY_NUM_LOCK        = 282
def KEY_PRINT_SCREEN    = 283
def KEY_PAUSE           = 284
def KEY_F1              = 290
def KEY_F2              = 291
def KEY_F3              = 292
def KEY_F4              = 293
def KEY_F5              = 294
def KEY_F6              = 295
def KEY_F7              = 296
def KEY_F8              = 297
def KEY_F9              = 298
def KEY_F10             = 299
def KEY_F11             = 300
def KEY_F12             = 301
def KEY_LEFT_SHIFT      = 340
def KEY_LEFT_CONTROL    = 341
def KEY_LEFT_ALT        = 342
def KEY_LEFT_SUPER      = 343
def KEY_RIGHT_SHIFT     = 344
def KEY_RIGHT_CONTROL   = 345
def KEY_RIGHT_ALT       = 346
def KEY_RIGHT_SUPER     = 347
def KEY_KB_MENU         = 348
def KEY_KP_0            = 320
def KEY_KP_1            = 321
def KEY_KP_2            = 322
def KEY_KP_3            = 323
def KEY_KP_4            = 324
def KEY_KP_5            = 325
def KEY_KP_6            = 326
def KEY_KP_7            = 327
def KEY_KP_8            = 328
def KEY_KP_9            = 329
def KEY_KP_DECIMAL      = 330
def KEY_KP_DIVIDE       = 331
def KEY_KP_MULTIPLY     = 332
def KEY_KP_SUBTRACT     = 333
def KEY_KP_ADD          = 334
def KEY_KP_ENTER        = 335
def KEY_KP_EQUAL        = 336
def KEY_BACK            = 4
def KEY_MENU            = 5
def KEY_VOLUME_UP       = 24
def KEY_VOLUME_DOWN     = 25