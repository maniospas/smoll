#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
const char* const __t2438t="\x00\x00\x00\x00\x00\x00\x00@\x00\x00\x00\x00\x00\x00\x00@\x00\x00\x00\x00\x00\x00A@\x00\x00\x00\x00\x00\x00\xf0?";
static const char* __t_all_errcodes[49] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void false__t10t(int* __t2448t) {
  int value=0;
  *__t2448t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2449t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2449t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2450t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2450t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2451t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2451t=z;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2452t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2452t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2453t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2453t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2454t) {
  *__t2454t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2455t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2455t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t2050t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2456t) {
  char __t2051t__=0;
  char __t2052t__=0;
  uint64_t __t2053t=0;
  uint64_t __t2054t__=0;
  uint64_t __t2055t__=0;
  uint64_t __t2056t__=0;
  uint64_t __t2057t__=0;
  char* __t2058t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,m__rows,&__t2051t__);
  if(__t2051t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t320t(j,m__cols,&__t2052t__);
  if(__t2052t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t2053t=8;
  mul__t195t(i,m__stride,&__t2054t__);
  add__t171t(__t2054t__,j,&__t2055t__);
  add__t171t(m__pos,__t2055t__,&__t2056t__);
  mul__t195t(__t2053t,__t2056t__,&__t2057t__);
  add__t504t(m__unsafe_ptr,__t2057t__,&__t2058t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2456t=__t2058t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2405t() {
  uint64_t __t2439t=0;
  uint64_t __t2440t=0;
  uint64_t __t2441t=0;
  uint64_t __t2442t=0;
  char* v__t2438t=0;
  uint64_t v__t2439t=0;
  uint64_t v__t2440t=0;
  uint64_t v__t2441t=0;
  uint64_t v__t2442t=0;
  uint64_t __t2443t=0;
  uint64_t __t2444t=0;
  char* __t2445t__=0;
  double __t2446t__z=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2439t=0;
  __t2440t=2;
  __t2441t=2;
  __t2442t=2;
  v__t2438t=__t2438t;
  v__t2439t=__t2439t;
  v__t2440t=__t2440t;
  v__t2441t=__t2441t;
  v__t2442t=__t2442t;
  __t2443t=0;
  __t2444t=0;
  __t_errcode=get__t2050t(v__t2438t,v__t2439t,v__t2440t,v__t2441t,v__t2442t,__t2443t,__t2444t,&__t2445t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2445t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2446t__z,__t2445t__,8);
  print__t374t(__t2446t__z);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2405t();return 0;}