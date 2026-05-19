#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1249v="123";
static const char* __temp_all_errcodes[33] = {"noerr",
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

static inline __attribute__((always_inline)) void eq__temp784v(const char* x, const char* y, char* __temp1252v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void print__temp380v(char value) {
  int __temp381v=0;
  const char* endl=0;
  endl=__temp365v;
  if(value){
  printf("%s%s","true",endl);
  }
  else{
  printf("%s%s","false",endl);
  }
}

static inline __attribute__((always_inline)) void main__temp1248v() {
  char __temp1250v__=0;
  eq__temp784v(__temp1249v,__temp1249v,&__temp1250v__);
  print__temp380v(__temp1250v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}