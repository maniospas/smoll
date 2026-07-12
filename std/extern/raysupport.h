#include "raylib.h"

static Font __smolambda_font;
int __smolambda_codepoints[256];
#define __smolambda_ray_texture(path_ptr,out_id,out_width,out_height,out_mipmaps,out_format) {Texture2D ret = LoadTexture((char*)path_ptr);out_id=ret.id;out_width=ret.width;out_height=ret.height;out_mipmaps=ret.mipmaps;out_format=ret.format;}
