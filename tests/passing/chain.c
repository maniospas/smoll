#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp1199v="123";
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
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
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
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

static inline __attribute__((always_inline)) void eq__temp735v(const char* x, const char* y, int* __temp1202v) {
  int z=0;
  z=(x==y);
  *__temp1202v=z;
}

static inline __attribute__((always_inline)) void print__temp365v(int value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1198v() {
  int __temp1200v__=0;
  eq__temp735v(__temp1199v,__temp1199v,&__temp1200v__);
  print__temp365v(__temp1200v__);
}

int main() {main__temp1198v();return 0;}