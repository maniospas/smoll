#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/raysupport.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5231t="overlap";
const char* const __t463t="";
const char* const __t5235t="docs/smol.png";
const char* const __t5138t="Create a safe failure (F), or unsafely crash (C)?\n";
const char* const __t5232t="std/ArianaVioleta-dz2K.ttf";
const char* const __t5133t="SIGINT: ";
static const char* __t_all_errcodes[55] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"slice start cannot be greater than slice end",
"cannot slice beyond 64 bits",
"slice start cannot be greater than or equal to slice end",
"value does not fit in bit slice",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"linkedmem allocation multiple must be at least 1",
"cannot create a linkedmem using an allocated buffer as prototype",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
"unexpected end of console read",
"read string does not fit on buffer",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot",
"imbalanced brackets",
"failed to open window",
"already drawing on window",
"failed to load texture",
"arg not found",
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed"
};

static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5291t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5291t=z;
}

static inline __attribute__((always_inline)) void exists__t1824t(const char* c, char* __t5292t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5292t=z;
}

static inline __attribute__((always_inline)) int unsafe_open_window__t4513t(double size__width, double size__height, const char* title, const char* font_path) {
  char ready=0;
  char __t4514t__=0;
  char __t4515t__=0;
  int64_t __smolambda_n=0;
  int64_t c=0;
  int __t_errcode=0;
  int __t_complain=0;
  SetTraceLogLevel(LOG_NONE);
  InitWindow(size__width,size__height,title);
  ready=IsWindowReady();
  not__t42t(ready,&__t4514t__);
  if(__t4514t__){
  __t_errcode=45;
  goto __t_failure;
  }
  exists__t1824t(font_path,&__t4515t__);
  if(__t4515t__){
  __smolambda_n=0;
  for(c=32;
  c<=126;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_codepoints[__smolambda_n++]=0x2018;
  __smolambda_codepoints[__smolambda_n++]=0x2019;
  for(int c=0x2500;
  c<=0x257F;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_font=__smo_load_font(font_path,128,__smolambda_codepoints,__smolambda_n);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int window__t4516t(double size__width, double size__height, const char* title, const char* font_path, double* __t5293t, double* __t5294t, const char** __t5295t, char* __t5296t) {
  int __t4521t=0;
  int __t4526t=0;
  char __t4527t=0;
  char __t4528t=0;
  char ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4527t=0;
  __t4528t=__t4527t;
  ready=__t4528t;
  __t_errcode=unsafe_open_window__t4513t(size__width,size__height,title,font_path);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5293t=size__width;
  *__t5294t=size__height;
  *__t5295t=title;
  *__t5296t=ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5297t) {
  int value=0;
  *__t5297t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5298t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5298t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5299t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5299t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5300t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5300t=z;
}

static inline __attribute__((always_inline)) void size__t4512t(double width, double height, double* __t5301t, double* __t5302t) {
  goto __t_return;
  __t_return:
  *__t5301t=width;
  *__t5302t=height;
}

static inline __attribute__((always_inline)) void nat__float__float__nat__nat____buffer__t4555t(char** __t5303t, uint64_t* __t5304t, uint32_t* __t5305t, uint32_t* __t5306t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=40;
  *__t5303t=unsafe_ptr;
  *__t5304t=unsafe_size;
  *__t5305t=unsafe_offset;
  *__t5306t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t5307t) {
  char* allocated=*__t5307t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5307t=allocated;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5308t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5308t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t5309t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5309t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5310t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5310t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t5311t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5311t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t5312t) {
  char* allocated=0;
  char __t829t__=0;
  char __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t683t(allocated,&__t829t__);
  not__t42t(__t829t__,&__t830t__);
  if(__t830t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5312t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t971t(char** __t5313t, uint64_t* __t5314t, uint32_t* __t5315t, uint32_t* __t5316t, uint64_t size, char** __t5317t, uint64_t* __t5318t, uint32_t* __t5319t, uint32_t* __t5320t) {
  char* buffer__unsafe_ptr=*__t5313t;
  uint64_t buffer__unsafe_size=*__t5314t;
  uint32_t buffer__unsafe_offset=*__t5315t;
  uint32_t buffer__unsafe_align=*__t5316t;
  int __t972t=0;
  int __t973t=0;
  char __t975t__=0;
  uint64_t __t976t=0;
  char __t977t__=0;
  char __t978t=0;
  uint64_t __t979t=0;
  uint64_t __t980t__=0;
  uint64_t __t981t__=0;
  int __t983t=0;
  uint64_t __t984t=0;
  char __t985t__=0;
  uint64_t __t986t__=0;
  uint64_t __t987t__=0;
  uint64_t bytes=0;
  int __t988t=0;
  uint64_t __t989t=0;
  char __t990t__=0;
  char* __t991t__=0;
  int __t992t=0;
  uint64_t __t993t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t975t__);
  if(__t975t__){
  __t976t=0;
  neq__t158t(size,__t976t,&__t977t__);
  __t978t=__t977t__;
  }
  if(__t978t){
  __t979t=0;
  nat__t724t(buffer__unsafe_align,&__t980t__);
  mul__t212t(__t980t__,size,&__t981t__);
  zero__t845t(buffer__unsafe_ptr,__t979t,__t981t__);
  goto __t_return;
  }
  __t984t=0;
  neq__t158t(buffer__unsafe_size,__t984t,&__t985t__);
  if(__t985t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t986t__);
  mul__t212t(__t986t__,size,&__t987t__);
  bytes=__t987t__;
  __t989t=0;
  eq__t134t(bytes,__t989t,&__t990t__);
  if(__t990t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t991t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t993t=0;
  zero__t845t(__t991t__,__t993t,bytes);
  buffer__unsafe_ptr=__t991t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t844t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5313t=buffer__unsafe_ptr;
  *__t5314t=buffer__unsafe_size;
  *__t5315t=buffer__unsafe_offset;
  *__t5316t=buffer__unsafe_align;
  *__t5317t=buffer__unsafe_ptr;
  *__t5318t=buffer__unsafe_size;
  *__t5319t=buffer__unsafe_offset;
  *__t5320t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int Texture__t4552t(uint64_t _data__id, double _data__size__width, double _data__size__height, uint64_t _data__mipmaps, uint64_t _data__format, char** __t5321t, uint64_t* __t5322t, uint32_t* __t5323t, uint32_t* __t5324t) {
  char* __t4557t__unsafe_ptr=0;
  uint64_t __t4557t__unsafe_size=0;
  uint32_t __t4557t__unsafe_offset=0;
  uint32_t __t4557t__unsafe_align=0;
  uint64_t __t4558t=0;
  char* __t4559t__unsafe_ptr=0;
  uint64_t __t4559t__unsafe_size=0;
  uint32_t __t4559t__unsafe_offset=0;
  uint32_t __t4559t__unsafe_align=0;
  char* data__unsafe_ptr=0;
  uint64_t data__unsafe_size=0;
  uint32_t data__unsafe_offset=0;
  uint32_t data__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__float__float__nat__nat____buffer__t4555t(&__t4557t__unsafe_ptr,&__t4557t__unsafe_size,&__t4557t__unsafe_offset,&__t4557t__unsafe_align);
  __t4558t=1;
  __t_errcode=alloc__t971t(&__t4557t__unsafe_ptr,&__t4557t__unsafe_size,&__t4557t__unsafe_offset,&__t4557t__unsafe_align,__t4558t,&__t4559t__unsafe_ptr,&__t4559t__unsafe_size,&__t4559t__unsafe_offset,&__t4559t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t4557t__unsafe_ptr,&_data__id,8);
  memcpy(__t4557t__unsafe_ptr+8,&_data__size__width,8);
  memcpy(__t4557t__unsafe_ptr+16,&_data__size__height,8);
  memcpy(__t4557t__unsafe_ptr+24,&_data__mipmaps,8);
  memcpy(__t4557t__unsafe_ptr+32,&_data__format,8);
  data__unsafe_ptr=__t4557t__unsafe_ptr;
  data__unsafe_size=__t4557t__unsafe_size;
  data__unsafe_offset=__t4557t__unsafe_offset;
  data__unsafe_align=__t4557t__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t844t(&data__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5321t=data__unsafe_ptr;
  *__t5322t=data__unsafe_size;
  *__t5323t=data__unsafe_offset;
  *__t5324t=data__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5325t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5325t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5326t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5326t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5327t) {
  *__t5327t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t5328t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t5328t=__t847t__;
}

static inline __attribute__((always_inline)) int get__t1191t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5329t) {
  int __t1192t=0;
  char __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t __t1195t__=0;
  uint64_t __t1196t__=0;
  uint64_t __t1197t__=0;
  char* __t1198t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1193t__);
  if(__t1193t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1194t__);
  mul__t212t(i,__t1194t__,&__t1195t__);
  nat__t724t(buffer__unsafe_offset,&__t1196t__);
  add__t188t(__t1195t__,__t1196t__,&__t1197t__);
  add__t846t(buffer__unsafe_ptr,__t1197t__,&__t1198t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5329t=__t1198t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_unload_texture__t4566t(char* tex__data__unsafe_ptr, uint64_t tex__data__unsafe_size, uint32_t tex__data__unsafe_offset, uint32_t tex__data__unsafe_align) {
  char __t4567t=0;
  uint64_t __t4568t=0;
  char* __t4570t__=0;
  uint64_t __t4571t___data__id=0;
  double __t4571t___data__size__width=0;
  double __t4571t___data__size__height=0;
  uint64_t __t4571t___data__mipmaps=0;
  uint64_t __t4571t___data__format=0;
  uint64_t data__id=0;
  double data__size__width=0;
  double data__size__height=0;
  uint64_t data__mipmaps=0;
  uint64_t data__format=0;
  int __t_complain=0;
  __t4568t=0;
  __t_complain=get__t1191t(tex__data__unsafe_ptr,tex__data__unsafe_size,tex__data__unsafe_offset,tex__data__unsafe_align,__t4568t,&__t4570t__);
  __t4567t=__t_complain;
  if(__t_complain){
  goto __t4567t__label;
  }
  if(!__t4570t__){
  __t_complain=2;
  goto __t4567t__label;
  }
  else{
  memcpy(&__t4571t___data__id,__t4570t__,8);
  memcpy(&__t4571t___data__size__width,__t4570t__+8,8);
  memcpy(&__t4571t___data__size__height,__t4570t__+16,8);
  memcpy(&__t4571t___data__mipmaps,__t4570t__+24,8);
  memcpy(&__t4571t___data__format,__t4570t__+32,8);
  }
  data__id=__t4571t___data__id;
  data__size__width=__t4571t___data__size__width;
  data__size__height=__t4571t___data__size__height;
  data__mipmaps=__t4571t___data__mipmaps;
  data__format=__t4571t___data__format;
  __t4567t__label:__t4567t=__t4567t==0;
  if(__t4567t){
  UnloadTexture((Texture2D){
  data__id,(int)data__size__width,(int)data__size__height,(int)data__mipmaps,(int)data__format}
  );
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t4572t(const char* path, char** __t5330t, uint64_t* __t5331t, uint32_t* __t5332t, uint32_t* __t5333t) {
  uint64_t id=0;
  double width=0;
  double height=0;
  uint64_t mipmaps=0;
  uint64_t format=0;
  uint64_t __t4573t=0;
  char __t4574t__=0;
  double __t4575t__width=0;
  double __t4575t__height=0;
  char* __t4576t__data__unsafe_ptr=0;
  uint64_t __t4576t__data__unsafe_size=0;
  uint32_t __t4576t__data__unsafe_offset=0;
  uint32_t __t4576t__data__unsafe_align=0;
  char* ret__data__unsafe_ptr=0;
  uint64_t ret__data__unsafe_size=0;
  uint32_t ret__data__unsafe_offset=0;
  uint32_t ret__data__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  id=0;
  width=0;
  height=0;
  mipmaps=0;
  format=0;
  __smolambda_ray_texture(path,id,width,height,mipmaps,format);
  __t4573t=0;
  eq__t134t(id,__t4573t,&__t4574t__);
  if(__t4574t__){
  __t_errcode=47;
  goto __t_failure;
  }
  size__t4512t(width,height,&__t4575t__width,&__t4575t__height);
  __t_errcode=Texture__t4552t(id,__t4575t__width,__t4575t__height,mipmaps,format,&__t4576t__data__unsafe_ptr,&__t4576t__data__unsafe_size,&__t4576t__data__unsafe_offset,&__t4576t__data__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__data__unsafe_ptr=__t4576t__data__unsafe_ptr;
  ret__data__unsafe_size=__t4576t__data__unsafe_size;
  ret__data__unsafe_offset=__t4576t__data__unsafe_offset;
  ret__data__unsafe_align=__t4576t__data__unsafe_align;
  goto __t_return;
  
  __t_failure:unsafe_unload_texture__t4566t(ret__data__unsafe_ptr,ret__data__unsafe_size,ret__data__unsafe_offset,ret__data__unsafe_align);
  free__t844t(&ret__data__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5330t=ret__data__unsafe_ptr;
  *__t5331t=ret__data__unsafe_size;
  *__t5332t=ret__data__unsafe_offset;
  *__t5333t=ret__data__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_open__t4531t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5334t, char* __t5335t) {
  char WINDOW__ready=*__t5334t;
  char ret=0;
  char __t4532t__=0;
  ret=WindowShouldClose();
  not__t42t(ret,&__t4532t__);
  goto __t_return;
  __t_return:
  *__t5334t=WINDOW__ready;
  *__t5335t=__t4532t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5336t) {
  int value=0;
  *__t5336t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5337t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5337t=__t54t__;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t5338t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5338t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t5339t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t5339t=initialized;
}

static inline __attribute__((always_inline)) void set__t507t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t5340t, const char** __t5341t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t5340t=value;
  *__t5341t=__t464t;
}

static inline __attribute__((always_inline)) void print__t471t(const char* value, const char* endl) {
  int __t472t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t515t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int breakpoint__t5119t() {
  int __t5121t=0;
  int __t5126t=0;
  int __t5127t__=0;
  char has_failed=0;
  char __t5128t__=0;
  char __t5129t__initialized=0;
  char color__initialized=0;
  const char* __t5134t__value=0;
  const char* __t5134t____t464t=0;
  const char* __t5139t__value=0;
  const char* __t5139t____t464t=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t53t(__t5126t,&__t5127t__);
  has_failed=__t_interrupted;
  not__t42t(has_failed,&__t5128t__);
  if(__t5128t__){
  goto __t_return;
  }
  colors__t501t(&__t5129t__initialized);
  color__initialized=__t5129t__initialized;
  set__t507t(color__initialized);
  nn__t462t(__t5133t,&__t5134t__value,&__t5134t____t464t);
  print__t471t(__t5134t__value,__t5134t____t464t);
  set__t515t(color__initialized);
  nn__t462t(__t5138t,&__t5139t__value,&__t5139t____t464t);
  print__t471t(__t5139t__value,__t5139t____t464t);
  if(__t5129t__initialized){
  printf("\033[0m");
  }
  while(1){
  c=getchar();
  if(c=='F'){
  has_failed=0;
  break;
  }
  if(c=='f'){
  has_failed=0;
  break;
  }
  if(c=='C'){
  break;
  }
  if(c=='c'){
  break;
  }
  }
  if(has_failed){
  _exit(1);
  }
  __t_errcode=49;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_begin_drawing__t4533t() {
  BeginDrawing();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void unsafe_end_drawing__t4534t() {
  int __t4536t=0;
  EndDrawing();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int draw__t4537t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5342t, char* __t5343t) {
  char WINDOW__ready=*__t5342t;
  char __t4538t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(WINDOW__ready){
  __t_errcode=46;
  goto __t_failure;
  }
  __t4538t=1;
  is_drawing=__t4538t;
  unsafe_begin_drawing__t4533t();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  unsafe_end_drawing__t4534t();
  }
  
  goto __t_skip_returns;__t_return:
  *__t5342t=WINDOW__ready;
  *__t5343t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5344t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5344t=z;
}

static inline __attribute__((always_inline)) int nat8__t706t(uint64_t x, uint8_t* __t5345t) {
  uint64_t __t707t=0;
  char __t708t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t707t=255;
  gt__t326t(x,__t707t,&__t708t__);
  if(__t708t__){
  __t_errcode=9;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5345t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t4504t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t5346t, uint8_t* __t5347t, uint8_t* __t5348t, uint8_t* __t5349t) {
  int __t4505t=0;
  uint64_t __t4506t=0;
  uint64_t _a=0;
  uint8_t __t4507t__=0;
  uint8_t r=0;
  uint8_t __t4508t__=0;
  uint8_t g=0;
  uint8_t __t4509t__=0;
  uint8_t b=0;
  uint8_t __t4510t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4506t=255;
  _a=__t4506t;
  __t_errcode=nat8__t706t(_r,&__t4507t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t4507t__;
  __t_errcode=nat8__t706t(_g,&__t4508t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t4508t__;
  __t_errcode=nat8__t706t(_b,&__t4509t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t4509t__;
  __t_errcode=nat8__t706t(_a,&__t4510t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t4510t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5346t=r;
  *__t5347t=g;
  *__t5348t=b;
  *__t5349t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t4541t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5350t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5350t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5350t=WINDOW__ready;
}

static inline __attribute__((always_inline)) int color__t4498t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t5351t, uint8_t* __t5352t, uint8_t* __t5353t, uint8_t* __t5354t) {
  int __t4499t=0;
  uint8_t __t4500t__=0;
  uint8_t r=0;
  uint8_t __t4501t__=0;
  uint8_t g=0;
  uint8_t __t4502t__=0;
  uint8_t b=0;
  uint8_t __t4503t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t706t(_r,&__t4500t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t4500t__;
  __t_errcode=nat8__t706t(_g,&__t4501t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t4501t__;
  __t_errcode=nat8__t706t(_b,&__t4502t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t4502t__;
  __t_errcode=nat8__t706t(_a,&__t4503t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t4503t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5351t=r;
  *__t5352t=g;
  *__t5353t=b;
  *__t5354t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void TextureData__t4551t(uint64_t id, double size__width, double size__height, uint64_t mipmaps, uint64_t format, uint64_t* __t5355t, double* __t5356t, double* __t5357t, uint64_t* __t5358t, uint64_t* __t5359t) {
  goto __t_return;
  __t_return:
  *__t5355t=id;
  *__t5356t=size__width;
  *__t5357t=size__height;
  *__t5358t=mipmaps;
  *__t5359t=format;
}

static inline __attribute__((always_inline)) void float__t644t(double x, double* __t5360t) {
  int __t645t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5360t=z;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t5361t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t5361t=__t87t__;
}

static inline __attribute__((always_inline)) void eq__t112t(double x, double y, char* __t5362t) {
  int __t113t__=0;
  char z=0;
  is_different__t85t(x,y,&__t113t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5362t=z;
}

static inline __attribute__((always_inline)) int div__t220t(double x, double y, double* __t5363t) {
  int __t221t__=0;
  int __t222t=0;
  double zero=0;
  char __t223t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t85t(x,y,&__t221t__);
  zero=0;
  eq__t112t(y,zero,&__t223t__);
  if(__t223t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5363t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t280t(double x, double y, char* __t5364t) {
  int __t281t__=0;
  char z=0;
  is_different__t85t(x,y,&__t281t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5364t=z;
}

static inline __attribute__((always_inline)) int texture__t4591t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5365t, char* _tex__data__unsafe_ptr, uint64_t _tex__data__unsafe_size, uint32_t _tex__data__unsafe_offset, uint32_t _tex__data__unsafe_align, double pos__x, double pos__y, double size__width, double size__height, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double rotation) {
  char WINDOW__ready=*__t5365t;
  uint64_t __t4592t=0;
  char* __t4594t__=0;
  uint64_t __t4595t___data__id=0;
  double __t4595t___data__size__width=0;
  double __t4595t___data__size__height=0;
  uint64_t __t4595t___data__mipmaps=0;
  uint64_t __t4595t___data__format=0;
  uint64_t __t4596t__id=0;
  double __t4596t__size__width=0;
  double __t4596t__size__height=0;
  uint64_t __t4596t__mipmaps=0;
  uint64_t __t4596t__format=0;
  uint64_t tex__id=0;
  double tex__size__width=0;
  double tex__size__height=0;
  uint64_t tex__mipmaps=0;
  uint64_t tex__format=0;
  double __t4597t__=0;
  double __t4598t__=0;
  double scale_x=0;
  double __t4599t__=0;
  double __t4600t__=0;
  double scale_y=0;
  double __t4601t=0;
  double scale=0;
  char __t4602t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4592t=0;
  __t_errcode=get__t1191t(_tex__data__unsafe_ptr,_tex__data__unsafe_size,_tex__data__unsafe_offset,_tex__data__unsafe_align,__t4592t,&__t4594t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4594t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4595t___data__id,__t4594t__,8);
  memcpy(&__t4595t___data__size__width,__t4594t__+8,8);
  memcpy(&__t4595t___data__size__height,__t4594t__+16,8);
  memcpy(&__t4595t___data__mipmaps,__t4594t__+24,8);
  memcpy(&__t4595t___data__format,__t4594t__+32,8);
  TextureData__t4551t(__t4595t___data__id,__t4595t___data__size__width,__t4595t___data__size__height,__t4595t___data__mipmaps,__t4595t___data__format,&__t4596t__id,&__t4596t__size__width,&__t4596t__size__height,&__t4596t__mipmaps,&__t4596t__format);
  tex__id=__t4596t__id;
  tex__size__width=__t4596t__size__width;
  tex__size__height=__t4596t__size__height;
  tex__mipmaps=__t4596t__mipmaps;
  tex__format=__t4596t__format;
  float__t644t(tex__size__width,&__t4597t__);
  __t_errcode=div__t220t(size__width,__t4597t__,&__t4598t__);
  if(__t_errcode){
  goto __t_failure;
  }
  scale_x=__t4598t__;
  float__t644t(tex__size__height,&__t4599t__);
  __t_errcode=div__t220t(size__height,__t4599t__,&__t4600t__);
  if(__t_errcode){
  goto __t_failure;
  }
  scale_y=__t4600t__;
  __t4601t=scale_x;
  scale=__t4601t;
  lt__t280t(scale_y,scale_x,&__t4602t__);
  if(__t4602t__){
  scale=scale_y;
  }
  DrawTextureEx((Texture2D){
  tex__id,(int)tex__size__width,(int)tex__size__height,(int)tex__mipmaps,(int)tex__format}
  ,(Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)rotation,(float)scale,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5365t=WINDOW__ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ__t4618t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5366t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5366t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5366t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void float__t648t(uint64_t x, double* __t5367t) {
  int __t649t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5367t=z;
}

static inline __attribute__((always_inline)) void gt__t304t(double x, double y, char* __t5368t) {
  int __t305t__=0;
  char z=0;
  is_different__t85t(x,y,&__t305t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5368t=z;
}

static inline __attribute__((always_inline)) void sub__t376t(double x, double y, double* __t5369t) {
  int __t377t__=0;
  int __t378t=0;
  int __t379t=0;
  double z=0;
  is_different__t85t(x,y,&__t377t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5369t=z;
}

static inline __attribute__((always_inline)) void circ__t4630t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5370t, double pos__x, double pos__y, double radius, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5370t;
  double __t4631t__=0;
  char __t4632t__=0;
  double __t4635t=0;
  double inner=0;
  double __t4633t__=0;
  double __t4634t__=0;
  double outer=0;
  float__t648t(thickness,&__t4631t__);
  gt__t304t(radius,__t4631t__,&__t4632t__);
  if(__t4632t__){
  float__t648t(thickness,&__t4633t__);
  sub__t376t(radius,__t4633t__,&__t4634t__);
  inner=__t4634t__;
  }
  else{
  __t4635t=0.0;
  inner=__t4635t;
  }
  outer=(float)radius;
  DrawRing((Vector2){
  (float)pos__x,(float)pos__y}
  ,inner,outer,0,360,64,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5370t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void rect__t4625t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5371t, double pos__x, double pos__y, double size__width, double size__height, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5371t;
  DrawRectangle(pos__x,pos__y,size__width,size__height,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5371t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void rect__t4626t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5372t, double pos__x, double pos__y, double size__width, double size__height, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5372t;
  DrawRectangleLinesEx((Rectangle){
  (float)pos__x,(float)pos__y,(float)size__width,(float)size__height}
  ,(int)thickness,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5372t=WINDOW__ready;
}

static inline __attribute__((always_inline)) int main__t5226t() {
  double __t5229t=0;
  double __t5230t=0;
  double __t5233t__size__width=0;
  double __t5233t__size__height=0;
  const char* __t5233t__title=0;
  char __t5233t__ready=0;
  double __t5234t__size__width=0;
  double __t5234t__size__height=0;
  const char* __t5234t__title=0;
  char __t5234t__ready=0;
  double WINDOW__size__width=0;
  double WINDOW__size__height=0;
  const char* WINDOW__title=0;
  char WINDOW__ready=0;
  char* __t5236t__data__unsafe_ptr=0;
  uint64_t __t5236t__data__unsafe_size=0;
  uint32_t __t5236t__data__unsafe_offset=0;
  uint32_t __t5236t__data__unsafe_align=0;
  char* tex__data__unsafe_ptr=0;
  uint64_t tex__data__unsafe_size=0;
  uint32_t tex__data__unsafe_offset=0;
  uint32_t tex__data__unsafe_align=0;
  double __t5238t=0;
  double __t5239t=0;
  double __t5240t=0;
  double circ_state____t5238t=0;
  double circ_state____t5239t=0;
  double circ_state____t5240t=0;
  double __t5241t=0;
  double __t5242t=0;
  double __t5243t=0;
  double __t5244t=0;
  double rect_state____t5241t=0;
  double rect_state____t5242t=0;
  double rect_state____t5243t=0;
  double rect_state____t5244t=0;
  uint64_t __t5245t=0;
  uint64_t thickness=0;
  char __t5246t__=0;
  char __t5248t__=0;
  char frame=0;
  uint64_t __t5250t=0;
  uint64_t __t5251t=0;
  uint64_t __t5252t=0;
  uint8_t __t5253t__r=0;
  uint8_t __t5253t__g=0;
  uint8_t __t5253t__b=0;
  uint8_t __t5253t__a=0;
  double __t5255t=0;
  double __t5256t=0;
  uint64_t __t5257t=0;
  uint64_t __t5258t=0;
  uint64_t __t5259t=0;
  uint64_t __t5260t=0;
  uint8_t __t5261t__r=0;
  uint8_t __t5261t__g=0;
  uint8_t __t5261t__b=0;
  uint8_t __t5261t__a=0;
  double __t5263t=0;
  uint64_t __t5266t=0;
  uint64_t __t5267t=0;
  uint64_t __t5268t=0;
  uint64_t __t5269t=0;
  uint8_t __t5270t__r=0;
  uint8_t __t5270t__g=0;
  uint8_t __t5270t__b=0;
  uint8_t __t5270t__a=0;
  uint64_t __t5273t=0;
  uint64_t __t5274t=0;
  uint64_t __t5275t=0;
  uint8_t __t5276t__r=0;
  uint8_t __t5276t__g=0;
  uint8_t __t5276t__b=0;
  uint8_t __t5276t__a=0;
  uint64_t __t5279t=0;
  uint64_t __t5280t=0;
  uint64_t __t5281t=0;
  uint64_t __t5282t=0;
  uint8_t __t5283t__r=0;
  uint8_t __t5283t__g=0;
  uint8_t __t5283t__b=0;
  uint8_t __t5283t__a=0;
  uint64_t __t5286t=0;
  uint64_t __t5287t=0;
  uint64_t __t5288t=0;
  uint8_t __t5289t__r=0;
  uint8_t __t5289t__g=0;
  uint8_t __t5289t__b=0;
  uint8_t __t5289t__a=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t448t();
  __t5229t=800.0;
  __t5230t=600.0;
  __t_errcode=window__t4516t(__t5229t,__t5230t,__t5231t,__t5232t,&__t5233t__size__width,&__t5233t__size__height,&__t5233t__title,&__t5233t__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5234t__size__width=__t5233t__size__width;
  __t5234t__size__height=__t5233t__size__height;
  __t5234t__title=__t5233t__title;
  __t5234t__ready=__t5233t__ready;
  WINDOW__size__width=__t5234t__size__width;
  WINDOW__size__height=__t5234t__size__height;
  WINDOW__title=__t5234t__title;
  WINDOW__ready=__t5234t__ready;
  __t_errcode=open__t4572t(__t5235t,&__t5236t__data__unsafe_ptr,&__t5236t__data__unsafe_size,&__t5236t__data__unsafe_offset,&__t5236t__data__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  tex__data__unsafe_ptr=__t5236t__data__unsafe_ptr;
  tex__data__unsafe_size=__t5236t__data__unsafe_size;
  tex__data__unsafe_offset=__t5236t__data__unsafe_offset;
  tex__data__unsafe_align=__t5236t__data__unsafe_align;
  __t5238t=100.0;
  __t5239t=100.0;
  __t5240t=50.0;
  circ_state____t5238t=__t5238t;
  circ_state____t5239t=__t5239t;
  circ_state____t5240t=__t5240t;
  __t5241t=120.0;
  __t5242t=120.0;
  __t5243t=200.0;
  __t5244t=50.0;
  rect_state____t5241t=__t5241t;
  rect_state____t5242t=__t5242t;
  rect_state____t5243t=__t5243t;
  rect_state____t5244t=__t5244t;
  __t5245t=3;
  thickness=__t5245t;
  while(1){
  is_open__t4531t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,&__t5246t__);
  if(!__t5246t__){
  break;
  }
  __t_errcode=breakpoint__t5119t();
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=draw__t4537t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,&__t5248t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t5248t__;
  __t5250t=255;
  __t5251t=255;
  __t5252t=255;
  __t_errcode=color__t4504t(__t5250t,__t5251t,__t5252t,&__t5253t__r,&__t5253t__g,&__t5253t__b,&__t5253t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t4541t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,__t5253t__r,__t5253t__g,__t5253t__b,__t5253t__a);
  __t5255t=0.0;
  __t5256t=0.0;
  __t5257t=255;
  __t5258t=255;
  __t5259t=255;
  __t5260t=255;
  __t_errcode=color__t4498t(__t5257t,__t5258t,__t5259t,__t5260t,&__t5261t__r,&__t5261t__g,&__t5261t__b,&__t5261t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5263t=0.0;
  __t_errcode=texture__t4591t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,tex__data__unsafe_ptr,tex__data__unsafe_size,tex__data__unsafe_offset,tex__data__unsafe_align,__t5255t,__t5256t,WINDOW__size__width,WINDOW__size__height,__t5261t__r,__t5261t__g,__t5261t__b,__t5261t__a,__t5263t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5266t=255;
  __t5267t=0;
  __t5268t=0;
  __t5269t=128;
  __t_errcode=color__t4498t(__t5266t,__t5267t,__t5268t,__t5269t,&__t5270t__r,&__t5270t__g,&__t5270t__b,&__t5270t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t4618t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,circ_state____t5238t,circ_state____t5239t,circ_state____t5240t,__t5270t__r,__t5270t__g,__t5270t__b,__t5270t__a);
  __t5273t=128;
  __t5274t=0;
  __t5275t=0;
  __t_errcode=color__t4504t(__t5273t,__t5274t,__t5275t,&__t5276t__r,&__t5276t__g,&__t5276t__b,&__t5276t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t4630t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,circ_state____t5238t,circ_state____t5239t,circ_state____t5240t,thickness,__t5276t__r,__t5276t__g,__t5276t__b,__t5276t__a);
  __t5279t=0;
  __t5280t=255;
  __t5281t=0;
  __t5282t=128;
  __t_errcode=color__t4498t(__t5279t,__t5280t,__t5281t,__t5282t,&__t5283t__r,&__t5283t__g,&__t5283t__b,&__t5283t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  rect__t4625t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,rect_state____t5241t,rect_state____t5242t,rect_state____t5243t,rect_state____t5244t,__t5283t__r,__t5283t__g,__t5283t__b,__t5283t__a);
  __t5286t=0;
  __t5287t=128;
  __t5288t=0;
  __t_errcode=color__t4504t(__t5286t,__t5287t,__t5288t,&__t5289t__r,&__t5289t__g,&__t5289t__b,&__t5289t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  rect__t4626t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,rect_state____t5241t,rect_state____t5242t,rect_state____t5243t,rect_state____t5244t,thickness,__t5289t__r,__t5289t__g,__t5289t__b,__t5289t__a);
  if(__t5248t__){
  unsafe_end_drawing__t4534t();
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:unsafe_unload_texture__t4566t(__t5236t__data__unsafe_ptr,__t5236t__data__unsafe_size,__t5236t__data__unsafe_offset,__t5236t__data__unsafe_align);
  free__t844t(&__t5236t__data__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  __t_errcode=main__t5226t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}