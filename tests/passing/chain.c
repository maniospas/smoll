#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1200v="123";
const char* const __temp348v="\n";
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

static inline __attribute__((always_inline)) void eq__temp736v(const char* x, const char* y, int* __temp1203v) {
  int z=0;
  z=(x==y);
  *__temp1203v=z;
}

static inline __attribute__((always_inline)) void print__temp363v(int value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1199v() {
  int __temp1201v__=0;
  eq__temp736v(__temp1200v,__temp1200v,&__temp1201v__);
  print__temp363v(__temp1201v__);
}

int main() {main__temp1199v();return 0;}