#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t382t="\n";
const char* const __t2018t="!";
const char* const __t2022t="hi";
static const char* __t_all_errcodes[35] = {"noerr",
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void colors__t407t(char* __t2050t) {
  char initialized=0;
  initialized=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t2050t=initialized;
}

static inline __attribute__((always_inline)) void print__t420t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t2051t, const char** __t2052t) {
  goto __t_return;
  __t_return:
  *__t2051t=value;
  *__t2052t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void greet__t2034t() {
  const char* __t2036t__value=0;
  const char* __t2036t____t374t=0;
  int __t2038t=0;
  nn__t373t(__t2022t,&__t2036t__value,&__t2036t____t374t);
  print__t378t(__t2036t__value,__t2036t____t374t);
  print__t380t(__t2018t);
}

static inline __attribute__((always_inline)) void main__t2041t() {
  char __t2043t__initialized=0;
  char colors__initialized=0;
  console__t366t();
  colors__t407t(&__t2043t__initialized);
  colors__initialized=__t2043t__initialized;
  print__t420t(colors__initialized);
  greet__t2034t();
  if(__t2043t__initialized){
  printf("\033[0m");
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2041t();return 0;}