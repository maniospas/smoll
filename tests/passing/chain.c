#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1220v="123";
const char* const __temp364v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void eq__temp755v(const char* x, const char* y, char* __temp1223v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1223v=z;
}

static inline __attribute__((always_inline)) void print__temp379v(char value) {
  int __temp380v=0;
  const char* endl=0;
  endl=__temp364v;
  if(value){
  printf("%s%s","true",endl);
  }
  else{
  printf("%s%s","false",endl);
  }
}

static inline __attribute__((always_inline)) void main__temp1219v() {
  char __temp1221v__=0;
  eq__temp755v(__temp1220v,__temp1220v,&__temp1221v__);
  print__temp379v(__temp1221v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1219v();return 0;}