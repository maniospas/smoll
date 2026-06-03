#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1557t="123";
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void eq__t819t(const char* x, const char* y, char* __t1560t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1560t=z;
}

static inline __attribute__((always_inline)) void print__t397t(char value) {
  int __t398t=0;
  const char* endl=0;
  endl=__t382t;
  if(value){
  printf("%s%s","true",endl);
  }
  else{
  printf("%s%s","false",endl);
  }
}

static inline __attribute__((always_inline)) void main__t1555t() {
  char __t1558t__=0;
  console__t366t();
  eq__t819t(__t1557t,__t1557t,&__t1558t__);
  print__t397t(__t1558t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1555t();return 0;}