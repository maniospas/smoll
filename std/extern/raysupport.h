#include "raylib.h"

static Font __smolambda_font;
int __smolambda_codepoints[256];
#if defined(__EMSCRIPTEN__)

static inline void __smo_ray_texture(const char *path, unsigned int *out_id,
                                      int *out_width, int *out_height,
                                      int *out_mipmaps, int *out_format) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return;

    Texture2D ret = LoadTexture(full);

    *out_id = ret.id;
    *out_width = ret.width;
    *out_height = ret.height;
    *out_mipmaps = ret.mipmaps;
    *out_format = ret.format;
}

#define __smolambda_ray_texture(path_ptr,out_id,out_width,out_height,out_mipmaps,out_format) \
    __smo_ray_texture((const char *)(path_ptr), &(out_id), &(out_width), &(out_height), &(out_mipmaps), &(out_format))

static inline Font __smo_load_font(const char *path, int fontSize, int *codepoints, int codepointCount) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) {
        Font empty = { 0 };
        return empty;
    }
    return LoadFontEx(full, fontSize, codepoints, codepointCount);
}

#else

#define __smolambda_ray_texture(path_ptr,out_id,out_width,out_height,out_mipmaps,out_format) {Texture2D ret = LoadTexture((char*)path_ptr);out_id=ret.id;out_width=ret.width;out_height=ret.height;out_mipmaps=ret.mipmaps;out_format=ret.format;}
#define __smo_load_font LoadFontEx

#endif