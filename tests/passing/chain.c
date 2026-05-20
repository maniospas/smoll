#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1267t="123";
const char* const __t365t="\n";
static const char* __t_all_errcodes[34] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void eq__t783t(const char* x, const char* y, char* __t1270t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1270t=z;
}

static inline __attribute__((always_inline)) void print__t380t(char value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t365t;
  if(value){
  printf("%s%s","true",endl);
  }
  else{
  printf("%s%s","false",endl);
  }
}

static inline __attribute__((always_inline)) void main__t1266t() {
  char __t1268t__=0;
  eq__t783t(__t1267t,__t1267t,&__t1268t__);
  print__t380t(__t1268t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1266t();return 0;}