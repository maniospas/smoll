#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1188v="123";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void eq__temp723v(const char* x, const char* y, char* __temp1191v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1191v=z;
}

static inline __attribute__((always_inline)) void print__temp365v(char value) {
  int __temp366v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1187v() {
  char __temp1189v__=0;
  eq__temp723v(__temp1188v,__temp1188v,&__temp1189v__);
  print__temp365v(__temp1189v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1187v();return 0;}