#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/raysupport.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5272t="docs/smol.png";
const char* const __t5270t="std/ArianaVioleta-dz2K.ttf";
const char* const __t463t="";
const char* const __t5153t="SIGINT: ";
const char* const __t5158t="Create a safe failure (F), or unsafely crash (C)?\n";
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

static inline __attribute__((always_inline)) void global__t4608t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5335t) {
  const char* value=0;
  *__t5335t=value;
}

static inline __attribute__((always_inline)) void unsafe_set_maximize_resize_flag__t4538t() {
  SetConfigFlags(FLAG_WINDOW_MAXIMIZED|FLAG_WINDOW_RESIZABLE);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5336t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5336t=z;
}

static inline __attribute__((always_inline)) void exists__t1842t(const char* c, char* __t5337t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5337t=z;
}

static inline __attribute__((always_inline)) int unsafe_open_window__t4509t(double size__width, double size__height, const char* title, const char* font_path) {
  char ready=0;
  char __t4510t__=0;
  char __t4511t__=0;
  int64_t __smolambda_n=0;
  int64_t c=0;
  int __t_errcode=0;
  int __t_complain=0;
  SetTraceLogLevel(LOG_NONE);
  InitWindow(size__width,size__height,title);
  SetExitKey(KEY_NULL);
  ready=IsWindowReady();
  not__t42t(ready,&__t4510t__);
  if(__t4510t__){
  __t_errcode=45;
  goto __t_failure;
  }
  exists__t1842t(font_path,&__t4511t__);
  if(__t4511t__){
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

static inline __attribute__((always_inline)) void unsafe_close_window__t4512t(char ready) {
  if(IsWindowFullscreen())ToggleFullscreen();
  CloseWindow();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int window__t4513t(double size__width, double size__height, const char* title, const char* font_path, double* __t5338t, double* __t5339t, const char** __t5340t, char* __t5341t) {
  int __t4518t=0;
  int __t4523t=0;
  char __t4524t=0;
  char __t4525t=0;
  char ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4524t=0;
  __t4525t=__t4524t;
  ready=__t4525t;
  __t_errcode=unsafe_open_window__t4509t(size__width,size__height,title,font_path);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:unsafe_close_window__t4512t(ready);
  
  goto __t_skip_returns;__t_return:
  *__t5338t=size__width;
  *__t5339t=size__height;
  *__t5340t=title;
  *__t5341t=ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int window__t4546t(const char* title, const char* font_path, double* __t5342t, double* __t5343t, const char** __t5344t, char* __t5345t) {
  int __t4547t=0;
  double __t4549t=0;
  double __t4550t=0;
  double __t4551t__size__width=0;
  double __t4551t__size__height=0;
  const char* __t4551t__title=0;
  char __t4551t__ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_set_maximize_resize_flag__t4538t();
  __t4549t=1280.0;
  __t4550t=960.0;
  __t_errcode=window__t4513t(__t4549t,__t4550t,title,font_path,&__t4551t__size__width,&__t4551t__size__height,&__t4551t__title,&__t4551t__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:unsafe_close_window__t4512t(__t4551t__ready);
  
  goto __t_skip_returns;__t_return:
  *__t5342t=__t4551t__size__width;
  *__t5343t=__t4551t__size__height;
  *__t5344t=__t4551t__title;
  *__t5345t=__t4551t__ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int window__t4564t(double* __t5346t, double* __t5347t, const char** __t5348t, char* __t5349t) {
  const char* __t4565t__=0;
  double __t4568t__size__width=0;
  double __t4568t__size__height=0;
  const char* __t4568t__title=0;
  char __t4568t__ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  cstr__t1t(&__t4565t__);
  __t_errcode=window__t4546t(__t463t,__t4565t__,&__t4568t__size__width,&__t4568t__size__height,&__t4568t__title,&__t4568t__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:unsafe_close_window__t4512t(__t4568t__ready);
  
  goto __t_skip_returns;__t_return:
  *__t5346t=__t4568t__size__width;
  *__t5347t=__t4568t__size__height;
  *__t5348t=__t4568t__title;
  *__t5349t=__t4568t__ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1805t(char** __t5350t, uint64_t* __t5351t, uint32_t* __t5352t, uint32_t* __t5353t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5350t=unsafe_ptr;
  *__t5351t=unsafe_size;
  *__t5352t=unsafe_offset;
  *__t5353t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5354t) {
  *__t5354t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5355t) {
  int value=0;
  *__t5355t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5356t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5356t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5357t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5357t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5358t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5358t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5359t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5359t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5360t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5360t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t5361t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5361t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5362t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5362t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5363t) {
  *__t5363t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t5364t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t5364t=__t847t__;
}

static inline __attribute__((always_inline)) int get__t1191t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5365t) {
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
  *__t5365t=__t1198t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1844t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5366t, uint64_t* __t5367t, uint64_t* __t5368t, char* __t5369t) {
  goto __t_return;
  __t_return:
  *__t5366t=unsafe_ptr;
  *__t5367t=dat__pos;
  *__t5368t=dat__length;
  *__t5369t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1848t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5370t, uint64_t* __t5371t, uint64_t* __t5372t, char* __t5373t) {
  char* unsafe_ptr=0;
  uint64_t __t1849t__=0;
  uint64_t __t1850t=0;
  char __t1851t__=0;
  uint64_t __t1852t__=0;
  uint64_t __t1853t=0;
  char __t1854t__=0;
  char* __t1855t__unsafe_ptr=0;
  uint64_t __t1855t__dat__pos=0;
  uint64_t __t1855t__dat__length=0;
  char __t1855t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1849t__);
  __t1850t=1;
  neq__t158t(__t1849t__,__t1850t,&__t1851t__);
  if(__t1851t__){
  __t_errcode=27;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1852t__);
  __t1853t=0;
  neq__t158t(__t1852t__,__t1853t,&__t1854t__);
  if(__t1854t__){
  __t_errcode=28;
  goto __t_failure;
  }
  str__t1844t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1855t__unsafe_ptr,&__t1855t__dat__pos,&__t1855t__dat__length,&__t1855t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5370t=__t1855t__unsafe_ptr;
  *__t5371t=__t1855t__dat__pos;
  *__t5372t=__t1855t__dat__length;
  *__t5373t=__t1855t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1882t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5374t, uint64_t* __t5375t, uint64_t* __t5376t, char* __t5377t) {
  uint64_t __t1883t=0;
  char __t1884t__=0;
  char* __t1886t__=0;
  char __t1887t__value=0;
  char first=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__dat__pos=0;
  uint64_t __t1888t__dat__length=0;
  char __t1888t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1883t=0;
  neq__t158t(length,__t1883t,&__t1884t__);
  if(__t1884t__){
  __t_errcode=get__t1191t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1886t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1886t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1887t__value,__t1886t__,1);
  first=__t1887t__value;
  }
  __t_errcode=str__t1848t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1888t__unsafe_ptr,&__t1888t__dat__pos,&__t1888t__dat__length,&__t1888t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5374t=__t1888t__unsafe_ptr;
  *__t5375t=__t1888t__dat__pos;
  *__t5376t=__t1888t__dat__length;
  *__t5377t=__t1888t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1904t(const char* c, char** __t5378t, uint64_t* __t5379t, uint64_t* __t5380t, char* __t5381t) {
  char* __t1905t__unsafe_ptr=0;
  uint64_t __t1905t__unsafe_size=0;
  uint32_t __t1905t__unsafe_offset=0;
  uint32_t __t1905t__unsafe_align=0;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__unsafe_size=0;
  uint32_t __t1906t__unsafe_offset=0;
  uint32_t __t1906t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1907t__=0;
  uint64_t length=0;
  uint64_t __t1908t=0;
  uint64_t __t1909t__=0;
  char __t1910t=0;
  uint64_t __t1911t=0;
  char* __t1913t__unsafe_ptr=0;
  uint64_t __t1913t__dat__pos=0;
  uint64_t __t1913t__dat__length=0;
  char __t1913t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1805t(&__t1905t__unsafe_ptr,&__t1905t__unsafe_size,&__t1905t__unsafe_offset,&__t1905t__unsafe_align);
  __t1906t__unsafe_ptr=__t1905t__unsafe_ptr;
  __t1906t__unsafe_size=__t1905t__unsafe_size;
  __t1906t__unsafe_offset=__t1905t__unsafe_offset;
  __t1906t__unsafe_align=__t1905t__unsafe_align;
  buf__unsafe_ptr=__t1906t__unsafe_ptr;
  buf__unsafe_size=__t1906t__unsafe_size;
  buf__unsafe_offset=__t1906t__unsafe_offset;
  buf__unsafe_align=__t1906t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1907t__);
  buf__unsafe_ptr=__t1907t__;
  if(c){
  length=strlen(c);
  }
  __t1908t=1;
  add__t188t(length,__t1908t,&__t1909t__);
  buf__unsafe_size=__t1909t__;
  __t1911t=0;
  __t_complain=str__t1882t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1911t,length,&__t1913t__unsafe_ptr,&__t1913t__dat__pos,&__t1913t__dat__length,&__t1913t__dat__first);
  __t1910t=__t_complain;
  if(__t_complain){
  goto __t1910t__label;
  }
  ret__unsafe_ptr=__t1913t__unsafe_ptr;
  ret__dat__pos=__t1913t__dat__pos;
  ret__dat__length=__t1913t__dat__length;
  ret__dat__first=__t1913t__dat__first;
  __t1910t__label:__t1910t=__t1910t==0;
  goto __t_return;
  __t_return:
  *__t5378t=ret__unsafe_ptr;
  *__t5379t=ret__dat__pos;
  *__t5380t=ret__dat__length;
  *__t5381t=ret__dat__first;
}

void unsafe_temp__t2068t(const char* cstr, const char** __t5382t, char** __t5383t, uint64_t* __t5384t, uint64_t* __t5385t, char* __t5386t) {
  char* __t2069t__unsafe_ptr=0;
  uint64_t __t2069t__dat__pos=0;
  uint64_t __t2069t__dat__length=0;
  char __t2069t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  str__t1904t(cstr,&__t2069t__unsafe_ptr,&__t2069t__dat__pos,&__t2069t__dat__length,&__t2069t__dat__first);
  str__unsafe_ptr=__t2069t__unsafe_ptr;
  str__dat__pos=__t2069t__dat__pos;
  str__dat__length=__t2069t__dat__length;
  str__dat__first=__t2069t__dat__first;
  goto __t_return;
  __t_return:
  *__t5382t=cstr;
  *__t5383t=str__unsafe_ptr;
  *__t5384t=str__dat__pos;
  *__t5385t=str__dat__length;
  *__t5386t=str__dat__first;
}

static inline __attribute__((always_inline)) void cstr__t2072t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5387t) {
  goto __t_return;
  __t_return:
  *__t5387t=value__cstr;
}

static inline __attribute__((always_inline)) void unsafe_set_font__t4574t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5388t, const char* font_path) {
  char WINDOW__ready=*__t5388t;
  int64_t __smolambda_n=0;
  int64_t c=0;
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
  goto __t_return;
  __t_return:
  *__t5388t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void set_font__t4575t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5389t, const char* _font_path) {
  char WINDOW__ready=*__t5389t;
  const char* __t4576t__cstr=0;
  char* __t4576t__str__unsafe_ptr=0;
  uint64_t __t4576t__str__dat__pos=0;
  uint64_t __t4576t__str__dat__length=0;
  char __t4576t__str__dat__first=0;
  const char* __t4577t__=0;
  const char* font_path=0;
  unsafe_temp__t2068t(_font_path,&__t4576t__cstr,&__t4576t__str__unsafe_ptr,&__t4576t__str__dat__pos,&__t4576t__str__dat__length,&__t4576t__str__dat__first);
  cstr__t2072t(__t4576t__cstr,__t4576t__str__unsafe_ptr,__t4576t__str__dat__pos,__t4576t__str__dat__length,__t4576t__str__dat__first,&__t4577t__);
  font_path=__t4577t__;
  unsafe_set_font__t4574t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,font_path);
  goto __t_return;
  __t_return:
  *__t5389t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void unsafe_open_texture__t4610t(const char* path, uint64_t* __t5390t, double* __t5391t, double* __t5392t, uint64_t* __t5393t, uint64_t* __t5394t) {
  uint64_t id=0;
  double width=0;
  double height=0;
  uint64_t mipmaps=0;
  uint64_t format=0;
  id=0;
  width=0;
  height=0;
  mipmaps=0;
  format=0;
  __smolambda_ray_texture(path,id,width,height,mipmaps,format);
  goto __t_return;
  __t_return:
  *__t5390t=id;
  *__t5391t=width;
  *__t5392t=height;
  *__t5393t=mipmaps;
  *__t5394t=format;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5395t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5395t=z;
}

static inline __attribute__((always_inline)) void Texture__t4602t(uint64_t id, double size__width, double size__height, uint64_t mipmaps, uint64_t format, uint64_t* __t5396t, double* __t5397t, double* __t5398t, uint64_t* __t5399t, uint64_t* __t5400t) {
  goto __t_return;
  __t_return:
  *__t5396t=id;
  *__t5397t=size__width;
  *__t5398t=size__height;
  *__t5399t=mipmaps;
  *__t5400t=format;
}

static inline __attribute__((always_inline)) int open__t4611t(const char* path, uint64_t* __t5401t, double* __t5402t, double* __t5403t, uint64_t* __t5404t, uint64_t* __t5405t) {
  uint64_t __t4612t__id=0;
  double __t4612t__width=0;
  double __t4612t__height=0;
  uint64_t __t4612t__mipmaps=0;
  uint64_t __t4612t__format=0;
  uint64_t texture_data__id=0;
  double texture_data__width=0;
  double texture_data__height=0;
  uint64_t texture_data__mipmaps=0;
  uint64_t texture_data__format=0;
  uint64_t __t4613t=0;
  char __t4614t__=0;
  uint64_t __t4615t__id=0;
  double __t4615t__size__width=0;
  double __t4615t__size__height=0;
  uint64_t __t4615t__mipmaps=0;
  uint64_t __t4615t__format=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_open_texture__t4610t(path,&__t4612t__id,&__t4612t__width,&__t4612t__height,&__t4612t__mipmaps,&__t4612t__format);
  texture_data__id=__t4612t__id;
  texture_data__width=__t4612t__width;
  texture_data__height=__t4612t__height;
  texture_data__mipmaps=__t4612t__mipmaps;
  texture_data__format=__t4612t__format;
  __t4613t=0;
  eq__t134t(texture_data__id,__t4613t,&__t4614t__);
  if(__t4614t__){
  __t_errcode=47;
  goto __t_failure;
  }
  Texture__t4602t(texture_data__id,texture_data__width,texture_data__height,texture_data__mipmaps,texture_data__format,&__t4615t__id,&__t4615t__size__width,&__t4615t__size__height,&__t4615t__mipmaps,&__t4615t__format);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5401t=__t4615t__id;
  *__t5402t=__t4615t__size__width;
  *__t5403t=__t4615t__size__height;
  *__t5404t=__t4615t__mipmaps;
  *__t5405t=__t4615t__format;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_open__t4584t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char WINDOW__ready, char* __t5406t) {
  char ret=0;
  char __t4585t__=0;
  ret=WindowShouldClose();
  not__t42t(ret,&__t4585t__);
  goto __t_return;
  __t_return:
  *__t5406t=__t4585t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5407t) {
  int value=0;
  *__t5407t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5408t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5408t=__t54t__;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t5409t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5409t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t5410t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t5410t=initialized;
}

static inline __attribute__((always_inline)) void set__t507t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t5411t, const char** __t5412t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t5411t=value;
  *__t5412t=__t464t;
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

static inline __attribute__((always_inline)) int breakpoint__t5139t() {
  int __t5141t=0;
  int __t5146t=0;
  int __t5147t__=0;
  char has_failed=0;
  char __t5148t__=0;
  char __t5149t__initialized=0;
  char color__initialized=0;
  const char* __t5154t__value=0;
  const char* __t5154t____t464t=0;
  const char* __t5159t__value=0;
  const char* __t5159t____t464t=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t53t(__t5146t,&__t5147t__);
  has_failed=__t_interrupted;
  not__t42t(has_failed,&__t5148t__);
  if(__t5148t__){
  goto __t_return;
  }
  colors__t501t(&__t5149t__initialized);
  color__initialized=__t5149t__initialized;
  set__t507t(color__initialized);
  nn__t462t(__t5153t,&__t5154t__value,&__t5154t____t464t);
  print__t471t(__t5154t__value,__t5154t____t464t);
  set__t515t(color__initialized);
  nn__t462t(__t5158t,&__t5159t__value,&__t5159t____t464t);
  print__t471t(__t5159t__value,__t5159t____t464t);
  if(__t5149t__initialized){
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

static inline __attribute__((always_inline)) void unsafe_begin_drawing__t4586t() {
  BeginDrawing();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void unsafe_end_drawing__t4587t() {
  int __t4589t=0;
  EndDrawing();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int draw__t4590t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5413t, char* __t5414t) {
  char WINDOW__ready=*__t5413t;
  char __t4591t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(WINDOW__ready){
  __t_errcode=46;
  goto __t_failure;
  }
  __t4591t=1;
  is_drawing=__t4591t;
  unsafe_begin_drawing__t4586t();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  unsafe_end_drawing__t4587t();
  }
  
  goto __t_skip_returns;__t_return:
  *__t5413t=WINDOW__ready;
  *__t5414t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5415t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5415t=z;
}

static inline __attribute__((always_inline)) int nat8__t706t(uint64_t x, uint8_t* __t5416t) {
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
  *__t5416t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t4500t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t5417t, uint8_t* __t5418t, uint8_t* __t5419t, uint8_t* __t5420t) {
  int __t4501t=0;
  uint64_t __t4502t=0;
  uint64_t _a=0;
  uint8_t __t4503t__=0;
  uint8_t r=0;
  uint8_t __t4504t__=0;
  uint8_t g=0;
  uint8_t __t4505t__=0;
  uint8_t b=0;
  uint8_t __t4506t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4502t=255;
  _a=__t4502t;
  __t_errcode=nat8__t706t(_r,&__t4503t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t4503t__;
  __t_errcode=nat8__t706t(_g,&__t4504t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t4504t__;
  __t_errcode=nat8__t706t(_b,&__t4505t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t4505t__;
  __t_errcode=nat8__t706t(_a,&__t4506t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t4506t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5417t=r;
  *__t5418t=g;
  *__t5419t=b;
  *__t5420t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t4594t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5421t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5421t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5421t=WINDOW__ready;
}

static inline __attribute__((always_inline)) int color__t4494t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t5422t, uint8_t* __t5423t, uint8_t* __t5424t, uint8_t* __t5425t) {
  int __t4495t=0;
  uint8_t __t4496t__=0;
  uint8_t r=0;
  uint8_t __t4497t__=0;
  uint8_t g=0;
  uint8_t __t4498t__=0;
  uint8_t b=0;
  uint8_t __t4499t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t706t(_r,&__t4496t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t4496t__;
  __t_errcode=nat8__t706t(_g,&__t4497t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t4497t__;
  __t_errcode=nat8__t706t(_b,&__t4498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t4498t__;
  __t_errcode=nat8__t706t(_a,&__t4499t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t4499t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5422t=r;
  *__t5423t=g;
  *__t5424t=b;
  *__t5425t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void uptime__t4657t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char WINDOW__ready, double* __t5426t) {
  double t=0;
  t=GetTime();
  goto __t_return;
  __t_return:
  *__t5426t=t;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t5427t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t5427t=__t87t__;
}

static inline __attribute__((always_inline)) void mul__t190t(double x, double y, double* __t5428t) {
  int __t191t__=0;
  double z=0;
  is_different__t85t(x,y,&__t191t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5428t=z;
}

static inline __attribute__((always_inline)) void cos__t5257t(double x, double* __t5429t) {
  double z=0;
  z=cos(x);
  goto __t_return;
  __t_return:
  *__t5429t=z;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t5430t) {
  int __t167t__=0;
  double z=0;
  is_different__t85t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5430t=z;
}

static inline __attribute__((always_inline)) void neg__t163t(double x, double* __t5431t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t5431t=z;
}

static inline __attribute__((always_inline)) void float__t644t(double x, double* __t5432t) {
  int __t645t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5432t=z;
}

static inline __attribute__((always_inline)) void eq__t112t(double x, double y, char* __t5433t) {
  int __t113t__=0;
  char z=0;
  is_different__t85t(x,y,&__t113t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5433t=z;
}

static inline __attribute__((always_inline)) int div__t220t(double x, double y, double* __t5434t) {
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
  *__t5434t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t280t(double x, double y, char* __t5435t) {
  int __t281t__=0;
  char z=0;
  is_different__t85t(x,y,&__t281t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5435t=z;
}

static inline __attribute__((always_inline)) int texture__t4622t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5436t, uint64_t tex__id, double tex__size__width, double tex__size__height, uint64_t tex__mipmaps, uint64_t tex__format, double pos__x, double pos__y, double size__width, double size__height, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double rotation) {
  char WINDOW__ready=*__t5436t;
  double __t4623t__=0;
  double __t4624t__=0;
  double scale_x=0;
  double __t4625t__=0;
  double __t4626t__=0;
  double scale_y=0;
  double __t4627t=0;
  double scale=0;
  char __t4628t__=0;
  double __t4629t__=0;
  double __t4630t__=0;
  double width=0;
  double __t4631t__=0;
  double __t4632t__=0;
  double height=0;
  int __t_errcode=0;
  int __t_complain=0;
  float__t644t(tex__size__width,&__t4623t__);
  __t_errcode=div__t220t(size__width,__t4623t__,&__t4624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  scale_x=__t4624t__;
  float__t644t(tex__size__height,&__t4625t__);
  __t_errcode=div__t220t(size__height,__t4625t__,&__t4626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  scale_y=__t4626t__;
  __t4627t=scale_x;
  scale=__t4627t;
  lt__t280t(scale_y,scale_x,&__t4628t__);
  if(__t4628t__){
  scale=scale_y;
  }
  mul__t190t(tex__size__width,scale,&__t4629t__);
  float__t644t(__t4629t__,&__t4630t__);
  width=__t4630t__;
  mul__t190t(tex__size__height,scale,&__t4631t__);
  float__t644t(__t4631t__,&__t4632t__);
  height=__t4632t__;
  DrawTexturePro((Texture2D){
  tex__id,(int)tex__size__width,(int)tex__size__height,(int)tex__mipmaps,(int)tex__format}
  ,(Rectangle){
  0,0,(float)tex__size__width,(float)tex__size__height}
  ,(Rectangle){
  (float)pos__x+width/2,(float)pos__y+height/2,width,height}
  ,(Vector2){
  width/2,height/2}
  ,(float)rotation,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5436t=WINDOW__ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ__t4638t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5437t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5437t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5437t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void float__t648t(uint64_t x, double* __t5438t) {
  int __t649t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5438t=z;
}

static inline __attribute__((always_inline)) void gt__t304t(double x, double y, char* __t5439t) {
  int __t305t__=0;
  char z=0;
  is_different__t85t(x,y,&__t305t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5439t=z;
}

static inline __attribute__((always_inline)) void sub__t376t(double x, double y, double* __t5440t) {
  int __t377t__=0;
  int __t378t=0;
  int __t379t=0;
  double z=0;
  is_different__t85t(x,y,&__t377t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5440t=z;
}

static inline __attribute__((always_inline)) void circ__t4650t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5441t, double pos__x, double pos__y, double radius, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5441t;
  double __t4651t__=0;
  char __t4652t__=0;
  double __t4655t=0;
  double inner=0;
  double __t4653t__=0;
  double __t4654t__=0;
  double outer=0;
  float__t648t(thickness,&__t4651t__);
  gt__t304t(radius,__t4651t__,&__t4652t__);
  if(__t4652t__){
  float__t648t(thickness,&__t4653t__);
  sub__t376t(radius,__t4653t__,&__t4654t__);
  inner=__t4654t__;
  }
  else{
  __t4655t=0.0;
  inner=__t4655t;
  }
  outer=(float)radius;
  DrawRing((Vector2){
  (float)pos__x,(float)pos__y}
  ,inner,outer,0,360,64,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5441t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void rect__t4645t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5442t, double pos__x, double pos__y, double size__width, double size__height, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5442t;
  DrawRectangle(pos__x,pos__y,size__width,size__height,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5442t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void rect__t4646t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5443t, double pos__x, double pos__y, double size__width, double size__height, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5443t;
  DrawRectangleLinesEx((Rectangle){
  (float)pos__x,(float)pos__y,(float)size__width,(float)size__height}
  ,(int)thickness,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5443t=WINDOW__ready;
}

static inline __attribute__((always_inline)) int main__t5269t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5444t) {
  char WINDOW__ready=*__t5444t;
  uint64_t __t5273t__id=0;
  double __t5273t__size__width=0;
  double __t5273t__size__height=0;
  uint64_t __t5273t__mipmaps=0;
  uint64_t __t5273t__format=0;
  uint64_t tex__id=0;
  double tex__size__width=0;
  double tex__size__height=0;
  uint64_t tex__mipmaps=0;
  uint64_t tex__format=0;
  double __t5274t=0;
  double __t5275t=0;
  double __t5276t=0;
  double circ_state____t5274t=0;
  double circ_state____t5275t=0;
  double circ_state____t5276t=0;
  double __t5277t=0;
  double __t5278t=0;
  double __t5279t=0;
  double __t5280t=0;
  double rect_state____t5277t=0;
  double rect_state____t5278t=0;
  double rect_state____t5279t=0;
  double rect_state____t5280t=0;
  uint64_t __t5281t=0;
  uint64_t thickness=0;
  char __t5282t__=0;
  char __t5284t__=0;
  char frame=0;
  uint64_t __t5286t=0;
  uint64_t __t5287t=0;
  uint64_t __t5288t=0;
  uint8_t __t5289t__r=0;
  uint8_t __t5289t__g=0;
  uint8_t __t5289t__b=0;
  uint8_t __t5289t__a=0;
  double __t5291t=0;
  double __t5292t=0;
  uint64_t __t5293t=0;
  uint64_t __t5294t=0;
  uint64_t __t5295t=0;
  uint64_t __t5296t=0;
  uint8_t __t5297t__r=0;
  uint8_t __t5297t__g=0;
  uint8_t __t5297t__b=0;
  uint8_t __t5297t__a=0;
  double __t5299t=0;
  double __t5300t=0;
  double __t5301t=0;
  double __t5302t__=0;
  double __t5303t__=0;
  double __t5304t__=0;
  double __t5305t__=0;
  double __t5306t__=0;
  double __t5307t__=0;
  uint64_t __t5310t=0;
  uint64_t __t5311t=0;
  uint64_t __t5312t=0;
  uint64_t __t5313t=0;
  uint8_t __t5314t__r=0;
  uint8_t __t5314t__g=0;
  uint8_t __t5314t__b=0;
  uint8_t __t5314t__a=0;
  uint64_t __t5317t=0;
  uint64_t __t5318t=0;
  uint64_t __t5319t=0;
  uint8_t __t5320t__r=0;
  uint8_t __t5320t__g=0;
  uint8_t __t5320t__b=0;
  uint8_t __t5320t__a=0;
  uint64_t __t5323t=0;
  uint64_t __t5324t=0;
  uint64_t __t5325t=0;
  uint64_t __t5326t=0;
  uint8_t __t5327t__r=0;
  uint8_t __t5327t__g=0;
  uint8_t __t5327t__b=0;
  uint8_t __t5327t__a=0;
  uint64_t __t5330t=0;
  uint64_t __t5331t=0;
  uint64_t __t5332t=0;
  uint8_t __t5333t__r=0;
  uint8_t __t5333t__g=0;
  uint8_t __t5333t__b=0;
  uint8_t __t5333t__a=0;
  int __t_errcode=0;
  int __t_complain=0;
  set_font__t4575t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,__t5270t);
  __t_errcode=open__t4611t(__t5272t,&__t5273t__id,&__t5273t__size__width,&__t5273t__size__height,&__t5273t__mipmaps,&__t5273t__format);
  if(__t_errcode){
  goto __t_failure;
  }
  tex__id=__t5273t__id;
  tex__size__width=__t5273t__size__width;
  tex__size__height=__t5273t__size__height;
  tex__mipmaps=__t5273t__mipmaps;
  tex__format=__t5273t__format;
  __t5274t=100.0;
  __t5275t=100.0;
  __t5276t=50.0;
  circ_state____t5274t=__t5274t;
  circ_state____t5275t=__t5275t;
  circ_state____t5276t=__t5276t;
  __t5277t=120.0;
  __t5278t=120.0;
  __t5279t=200.0;
  __t5280t=50.0;
  rect_state____t5277t=__t5277t;
  rect_state____t5278t=__t5278t;
  rect_state____t5279t=__t5279t;
  rect_state____t5280t=__t5280t;
  __t5281t=3;
  thickness=__t5281t;
  while(1){
  is_open__t4584t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,WINDOW__ready,&__t5282t__);
  if(!__t5282t__){
  break;
  }
  __t_errcode=breakpoint__t5139t();
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=draw__t4590t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,&__t5284t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t5284t__;
  __t5286t=255;
  __t5287t=255;
  __t5288t=255;
  __t_errcode=color__t4500t(__t5286t,__t5287t,__t5288t,&__t5289t__r,&__t5289t__g,&__t5289t__b,&__t5289t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t4594t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,__t5289t__r,__t5289t__g,__t5289t__b,__t5289t__a);
  __t5291t=0.0;
  __t5292t=0.0;
  __t5293t=255;
  __t5294t=255;
  __t5295t=255;
  __t5296t=255;
  __t_errcode=color__t4494t(__t5293t,__t5294t,__t5295t,__t5296t,&__t5297t__r,&__t5297t__g,&__t5297t__b,&__t5297t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5299t=12.0;
  __t5300t=2.0;
  __t5301t=10.0;
  uptime__t4657t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,WINDOW__ready,&__t5302t__);
  mul__t190t(__t5301t,__t5302t__,&__t5303t__);
  cos__t5257t(__t5303t__,&__t5304t__);
  mul__t190t(__t5300t,__t5304t__,&__t5305t__);
  add__t166t(__t5299t,__t5305t__,&__t5306t__);
  neg__t163t(__t5306t__,&__t5307t__);
  __t_errcode=texture__t4622t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,tex__id,tex__size__width,tex__size__height,tex__mipmaps,tex__format,__t5291t,__t5292t,WINDOW__size__width,WINDOW__size__height,__t5297t__r,__t5297t__g,__t5297t__b,__t5297t__a,__t5307t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5310t=255;
  __t5311t=0;
  __t5312t=0;
  __t5313t=128;
  __t_errcode=color__t4494t(__t5310t,__t5311t,__t5312t,__t5313t,&__t5314t__r,&__t5314t__g,&__t5314t__b,&__t5314t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t4638t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,circ_state____t5274t,circ_state____t5275t,circ_state____t5276t,__t5314t__r,__t5314t__g,__t5314t__b,__t5314t__a);
  __t5317t=128;
  __t5318t=0;
  __t5319t=0;
  __t_errcode=color__t4500t(__t5317t,__t5318t,__t5319t,&__t5320t__r,&__t5320t__g,&__t5320t__b,&__t5320t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t4650t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,circ_state____t5274t,circ_state____t5275t,circ_state____t5276t,thickness,__t5320t__r,__t5320t__g,__t5320t__b,__t5320t__a);
  __t5323t=0;
  __t5324t=255;
  __t5325t=0;
  __t5326t=128;
  __t_errcode=color__t4494t(__t5323t,__t5324t,__t5325t,__t5326t,&__t5327t__r,&__t5327t__g,&__t5327t__b,&__t5327t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  rect__t4645t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,rect_state____t5277t,rect_state____t5278t,rect_state____t5279t,rect_state____t5280t,__t5327t__r,__t5327t__g,__t5327t__b,__t5327t__a);
  __t5330t=0;
  __t5331t=128;
  __t5332t=0;
  __t_errcode=color__t4500t(__t5330t,__t5331t,__t5332t,&__t5333t__r,&__t5333t__g,&__t5333t__b,&__t5333t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  rect__t4646t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,rect_state____t5277t,rect_state____t5278t,rect_state____t5279t,rect_state____t5280t,thickness,__t5333t__r,__t5333t__g,__t5333t__b,__t5333t__a);
  if(__t5284t__){
  unsafe_end_drawing__t4587t();
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5444t=WINDOW__ready;
  
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
  double __t5448t__size__width=0;
  double __t5448t__size__height=0;
  const char* __t5448t__title=0;
  char __t5448t__ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t448t();
  global__t4608t();
  __t_errcode=window__t4564t(&__t5448t__size__width,&__t5448t__size__height,&__t5448t__title,&__t5448t__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=main__t5269t(__t5448t__size__width,__t5448t__size__height,__t5448t__title,&__t5448t__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:unsafe_close_window__t4512t(__t5448t__ready);
  
  return __t_errcode;
}