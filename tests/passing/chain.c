#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1187v="123";
const char* const __temp353v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void eq__temp722v(const char* x, const char* y, char* __temp1190v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1190v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(char value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1186v() {
  char __temp1188v__=0;
  eq__temp722v(__temp1187v,__temp1187v,&__temp1188v__);
  print__temp368v(__temp1188v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1186v();return 0;}