import "std/core.s"
import "std/mini.s"
import "std/extern/raysupport.h"


def Color(nat _r, nat _g, nat _b, nat|blank _a)
    if _a is blank
        _a = 255
    r = nat8 _r
    g = nat8 _g
    b = nat8 _b
    a = nat8 _a
    return (r,g,b,a)

def Position(float x, float y)
def Size(float width, float height)

def Window(Size size, cstr title)
    {"-lraylib"}
    {"-lGL"}
    {SetTraceLogLevel(LOG_WARNING); InitWindow(size__width, size__height, title); }
    openy = mut false
    return singleton(size, title, openy)

def is_open(Window)
    {builtins:bool ret = WindowShouldClose(); }
    return not ret

def draw(edit Window window)
    if window.openy fail "alopeny drawing on window"
    is_drawing = true
    {BeginDrawing();}
    defer
        if is_drawing
            {EndDrawing();}
    return is_drawing

def clear(edit Window window, Color color)
    {ClearBackground((Color){color__r,color__g,color__b,color__a});}
    return window

def text(edit Window window, cstr txt, Position pos, float size, Color color)
    {
        DrawText(
            txt, 
            pos__x, 
            pos__y, 
            size, 
            (Color){color__r, color__g, color__b, color__a}
        ); 
    }
    return window

local def TextureData(nat id, Size size, nat mipmaps, nat format)
def Texture(TextureData _data)
    data = [_data]
    return class(data)

def exists(Texture tex)
    return 0!=len tex.data

def open(cstr path)
    {
        builtins:nat id = 0;
        builtins:float width = 0;
        builtins:float height = 0;
        builtins:nat mipmaps = 0;
        builtins:nat format = 0;
        __smolambda_ray_texture(path__contents, id, width, height, mipmaps, format);
    }
    defer
        {UnloadTexture((Texture2D){id, (int)width, (int)height, (int)mipmaps, (int)format});}
    return Texture(id, Size(width, height), mipmaps, format)

def draw(edit Window window, Texture _tex, Position pos, Color color)
    tex = TextureData _tex.data[0]
    { 
        DrawTexture(
            (Texture2D){(int)tex__id, (int)tex__size__width, (int)tex__size__height, (int)tex__mipmaps, (int)tex__format},
            pos__x, pos__y,
            (Color){color__r,color__g,color__b,color__a}
        ); 
    }
    return window

def draw(edit Window window, Texture _tex, Position pos, float rotation, float scale, Color color)
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
    return window

def draw(edit Window window, Texture _tex, Position pos, float rotation, Size size, Color color)
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
    return window

def circ(edit Window window, Position pos, float radius, Color color)
    {
        DrawCircleV(
            (Vector2){(float)pos__x, (float)pos__y}, 
            (float)radius,
            (Color){color__r,color__g,color__b,color__a}
        );
    }
    return window

def rect(edit Window window, Position pos, Size size, Color color)
    {
        DrawRectangle(
            pos__x, pos__y,
            size__width, size__height,
            (Color){color__r,color__g,color__b,color__a}
        );
    }
    return window

def rect_line(edit Window window, Position pos, Size size, nat thickness, Color color)
    {DrawRectangleLinesEx((Rectangle){(float)pos__x, (float)pos__y, (float)size__width, (float)size__height}, (int)thickness, (Color){color__r,color__g,color__b,color__a});}
    return window

def circ_line(edit Window window, Position pos, nat radius, nat thickness, Color color)
    {
        builtins:float inner = (radius > thickness) ? (float)(radius - thickness) : 0.0f;
        builtins:float outer = (float)radius;
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
    return window

def dt()
    {builtins:float dt = GetFrameTime();}
    return dt