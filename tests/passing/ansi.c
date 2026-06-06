#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2047t="hi";
const char* const __t2043t="!";
const char* const __t374t="";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void supports_ansi__t407t(char* __t2075t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t2075t=supports;
}

static inline __attribute__((always_inline)) void colors__t408t(char* __t2076t) {
  char __t409t__=0;
  char initialized=0;
  supports_ansi__t407t(&__t409t__);
  initialized=__t409t__;
  goto __t_return;
  __t_return:
  *__t2076t=initialized;
}

static inline __attribute__((always_inline)) void set__t422t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t2077t, const char** __t2078t) {
  goto __t_return;
  __t_return:
  *__t2077t=value;
  *__t2078t=__t374t;
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

static inline __attribute__((always_inline)) void greet__t2059t() {
  const char* __t2061t__value=0;
  const char* __t2061t____t374t=0;
  int __t2063t=0;
  nn__t373t(__t2047t,&__t2061t__value,&__t2061t____t374t);
  print__t378t(__t2061t__value,__t2061t____t374t);
  print__t380t(__t2043t);
}

static inline __attribute__((always_inline)) void main__t2066t() {
  char __t2068t__initialized=0;
  char color__initialized=0;
  console__t366t();
  colors__t408t(&__t2068t__initialized);
  color__initialized=__t2068t__initialized;
  set__t422t(color__initialized);
  greet__t2059t();
  if(__t2068t__initialized){
  printf("\033[0m");
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2066t();return 0;}