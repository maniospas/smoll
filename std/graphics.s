import "std/core.s"
import "std/mini.s"
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
def size(float width, float height)

def window(size size, cstr title)
    {"-lraylib"}
    {"-lGL"}
    {SetTraceLogLevel(LOG_WARNING); InitWindow(size__width, size__height, title); }
    openy = mut false
    return singleton(size, title, openy)

def is_open(effect edit window WINDOW)
    {builtins::bool ret = WindowShouldClose(); }
    return not ret

def draw(effect edit window WINDOW)
    if WINDOW.openy fail "alopeny drawing on window"
    is_drawing = true
    {BeginDrawing();}
    defer
        if is_drawing
            {EndDrawing();}
    return is_drawing

def clear(effect edit window WINDOW, color color)
    {ClearBackground((Color){color__r,color__g,color__b,color__a});}

def text(effect edit window WINDOW, cstr txt, position pos, float size, color color)
    {
        DrawText(
            txt, 
            pos__x, 
            pos__y, 
            size, 
            (Color){color__r, color__g, color__b, color__a}
        ); 
    }

local def TextureData(nat id, size size, nat mipmaps, nat format)
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

def draw(effect edit window WINDOW, Texture _tex, position pos, color color)
    tex = TextureData _tex.data[0]
    { 
        DrawTexture(
            (Texture2D){(int)tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            pos__x, pos__y,
            (Color){color__r,color__g,color__b,color__a}
        ); 
    }

def draw(effect edit window WINDOW, Texture _tex, position pos, float rotation, float scale, color color)
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

def draw(effect edit window WINDOW, Texture _tex, position pos, float rotation, size size, color color)
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

def circ(effect edit window WINDOW, position pos, float radius, color color)
    {
        DrawCircleV(
            (Vector2){(float)pos__x, (float)pos__y}, 
            (float)radius,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def rect(effect edit window WINDOW, position pos, size size, color color)
    {
        DrawRectangle(
            pos__x, pos__y,
            size__width, size__height,
            (Color){color__r,color__g,color__b,color__a}
        );
    }

def rect_line(effect edit window WINDOW, position pos, size size, nat thickness, color color)
    {DrawRectangleLinesEx((Rectangle){(float)pos__x, (float)pos__y, (float)size__width, (float)size__height}, (int)thickness, (Color){color__r,color__g,color__b,color__a});}

def circ_line(effect edit window WINDOW, position pos, nat radius, nat thickness, color color)
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
    {builtins::float dt = GetFrameTime();}
    return dt