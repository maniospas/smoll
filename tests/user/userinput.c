#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t397t="\n";
const char* const __t2171t="12";
const char* const __t2168t="PROGRAM v";
const char* const __t389t="";
static const char* __t_all_errcodes[36] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t380t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t422t(char* __t2173t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t2173t=supports;
}

static inline __attribute__((always_inline)) void colors__t423t(char* __t2174t) {
  char __t424t__=0;
  char initialized=0;
  supports_ansi__t422t(&__t424t__);
  initialized=__t424t__;
  goto __t_return;
  __t_return:
  *__t2174t=initialized;
}

static inline __attribute__((always_inline)) void set__t437t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void nn__t388t(const char* value, const char** __t2175t, const char** __t2176t) {
  goto __t_return;
  __t_return:
  *__t2175t=value;
  *__t2176t=__t389t;
}

static inline __attribute__((always_inline)) void print__t393t(const char* value, const char* endl) {
  int __t394t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t395t(const char* value) {
  int __t396t=0;
  const char* endl=0;
  endl=__t397t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2161t() {
  char __t2164t__initialized=0;
  char color__initialized=0;
  const char* __t2169t__value=0;
  const char* __t2169t____t389t=0;
  console__t380t();
  colors__t423t(&__t2164t__initialized);
  color__initialized=__t2164t__initialized;
  set__t437t(color__initialized);
  nn__t388t(__t2168t,&__t2169t__value,&__t2169t____t389t);
  print__t393t(__t2169t__value,__t2169t____t389t);
  print__t395t(__t2171t);
  if(__t2164t__initialized){
  printf("\033[0m");
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2161t();return 0;}