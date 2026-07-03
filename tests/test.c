#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t400t="\n";
const char* const __t2203t="pair";
static const char* __t_all_errcodes[38] = {"noerr",
"error",
"null pointer",
"assertion error",
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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"unexpected end of console read",
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
"does not match",
"empty input name"
};

static inline __attribute__((always_inline)) void console__t383t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void pair__t2202t(double x, double y, const char** __t2236t, double* __t2237t, double* __t2238t) {
  goto __t_return;
  __t_return:
  *__t2236t=__t2203t;
  *__t2237t=x;
  *__t2238t=y;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t2239t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2239t=z;
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2240t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2240t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t2241t) {
  char* allocated=0;
  char __t673t__=0;
  char __t674t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t609t(allocated,&__t673t__);
  not__t36t(__t673t__,&__t674t__);
  if(__t674t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2241t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void pair____t_buffer____buffer__t2220t(char** __t2242t, uint64_t* __t2243t, uint16_t* __t2244t, uint16_t* __t2245t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t2242t=unsafe_ptr;
  *__t2243t=unsafe_size;
  *__t2244t=unsafe_offset;
  *__t2245t=unsafe_align;
}

static inline __attribute__((always_inline)) void cstr____t_buffer____buffer__t2146t(char** __t2246t, uint64_t* __t2247t, uint16_t* __t2248t, uint16_t* __t2249t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2246t=unsafe_ptr;
  *__t2247t=unsafe_size;
  *__t2248t=unsafe_offset;
  *__t2249t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1115t(const char* x, const char* y, char* __t2250t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2250t=z;
}

static inline __attribute__((always_inline)) void neq__t1144t(const char* x, const char* y, char* __t2251t) {
  char __t1145t__=0;
  char __t1146t__=0;
  eq__t1115t(x,y,&__t1145t__);
  not__t36t(__t1145t__,&__t1146t__);
  goto __t_return;
  __t_return:
  *__t2251t=__t1146t__;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2252t) {
  *__t2252t=to;
}

static inline __attribute__((always_inline)) int unsafe_match__t2145t(char** __t2253t, const char* name, char* type, char** __t2254t) {
  char* obj=*__t2253t;
  char* __t2148t__unsafe_ptr=0;
  uint64_t __t2148t__unsafe_size=0;
  uint16_t __t2148t__unsafe_offset=0;
  uint16_t __t2148t__unsafe_align=0;
  const char* __t2149t__value=0;
  const char* found=0;
  char __t2150t__=0;
  char* __t2151t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  cstr____t_buffer____buffer__t2146t(&__t2148t__unsafe_ptr,&__t2148t__unsafe_size,&__t2148t__unsafe_offset,&__t2148t__unsafe_align);
  if(!obj){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2149t__value,obj,8);
  found=__t2149t__value;
  neq__t1144t(found,name,&__t2150t__);
  if(__t2150t__){
  __t_errcode=36;
  goto __t_failure;
  }
  unsafe_attach_type__t28t(obj,type,&__t2151t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2253t=obj;
  *__t2254t=__t2151t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t403t(double value) {
  int __t404t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2205t() {
  double __t2208t=0;
  double __t2209t=0;
  const char* __t2210t____t2203t=0;
  double __t2210t__x=0;
  double __t2210t__y=0;
  uint64_t __t2212t=0;
  char* __t2213t__=0;
  char* __t2214t=0;
  char* obj=0;
  char __t2215t=0;
  char* __t2222t__unsafe_ptr=0;
  uint64_t __t2222t__unsafe_size=0;
  uint16_t __t2222t__unsafe_offset=0;
  uint16_t __t2222t__unsafe_align=0;
  char* __t2223t__=0;
  char* __t2224t=0;
  char* p=0;
  char* __t2226t=0;
  double __t2227t=0;
  char* __t2229t=0;
  double __t2230t__=0;
  char* __t2233t=0;
  double __t2234t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t383t();
  __t2208t=1.0;
  __t2209t=2.0;
  pair__t2202t(__t2208t,__t2209t,&__t2210t____t2203t,&__t2210t__x,&__t2210t__y);
  __t2212t=24;
  __t_errcode=alloc__t672t(__t2212t,&__t2213t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2213t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2213t__,&__t2210t____t2203t,8);
  memcpy(__t2213t__+8,&__t2210t__x,8);
  memcpy(__t2213t__+16,&__t2210t__y,8);
  __t2214t=__t2213t__;
  obj=__t2214t;
  pair____t_buffer____buffer__t2220t(&__t2222t__unsafe_ptr,&__t2222t__unsafe_size,&__t2222t__unsafe_offset,&__t2222t__unsafe_align);
  __t_complain=unsafe_match__t2145t(&obj,__t2203t,__t2222t__unsafe_ptr,&__t2223t__);
  __t2215t=__t_complain;
  __t2224t=__t2223t__;
  p=__t2224t;
  __t2215t=__t2215t==0;
  if(__t2215t){
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2226t=p+8;
  __t2227t=3.0;
  if(!__t2226t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2226t,&__t2227t,8);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2229t=p+8;
  if(!__t2229t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2230t__,__t2229t,8);
  print__t403t(__t2230t__);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2233t=p+16;
  if(!__t2233t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2234t__,__t2233t,8);
  print__t403t(__t2234t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2205t();return 0;}