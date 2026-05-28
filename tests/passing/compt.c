#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
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

static inline __attribute__((always_inline)) void false__t10t(int* __t2437t) {
  int value=0;
  *__t2437t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2438t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2438t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2439t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2439t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2440t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2440t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2441t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2441t=z;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2442t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2442t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2443t) {
  *__t2443t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2444t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2444t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t1452t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2445t) {
  char __t1453t__=0;
  uint64_t __t1454t=0;
  uint64_t __t1455t__=0;
  uint64_t __t1456t__=0;
  char* __t1457t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1453t__);
  if(__t1453t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1454t=8;
  add__t171t(i,v__pos,&__t1455t__);
  mul__t195t(__t1454t,__t1455t__,&__t1456t__);
  add__t504t(v__unsafe_ptr,__t1456t__,&__t1457t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2445t=__t1457t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2401t() {
  char* __t2430t=0;
  uint64_t __t2431t=0;
  uint64_t __t2432t=0;
  char* v__t2430t=0;
  uint64_t v__t2431t=0;
  uint64_t v__t2432t=0;
  uint64_t __t2433t=0;
  char* __t2434t__=0;
  double __t2435t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2430t="\x00\x00\x00\x00\x00\x00\x00@\x00\x00\x00\x00\x00\x00\x00@\x00\x00\x00\x00\x00\x00A@";
  __t2431t=0;
  __t2432t=3;
  v__t2430t=__t2430t;
  v__t2431t=__t2431t;
  v__t2432t=__t2432t;
  __t2433t=0;
  __t_errcode=get__t1452t(v__t2430t,v__t2431t,v__t2432t,__t2433t,&__t2434t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2434t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2435t__value,__t2434t__,8);
  print__t374t(__t2435t__value);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2401t();return 0;}