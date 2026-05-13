#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1594v="one";
const char* const __temp359v="\n";
static const char* __temp_all_errcodes[31] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void which__temp1592v(const char** __temp1612v) {
  goto __temp_return;
  __temp_return:
  *__temp1612v=__temp1594v;
}

static inline __attribute__((always_inline)) void print__temp357v(const char* value) {
  int __temp358v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1613v) {
  int value=0;
  *__temp1613v=value;
}

static inline __attribute__((always_inline)) void not__temp31v(int __temp_anon0, int* __temp1614v) {
  int __temp32v__=0;
  false__temp10v(&__temp32v__);
  goto __temp_return;
  __temp_return:
  *__temp1614v=__temp32v__;
}

static inline __attribute__((always_inline)) void is_different__temp89v(uint64_t x, uint64_t y, int* __temp1615v) {
  int __temp90v=0;
  int __temp91v__=0;
  not__temp31v(__temp90v,&__temp91v__);
  goto __temp_return;
  __temp_return:
  *__temp1615v=__temp91v__;
}

static inline __attribute__((always_inline)) void add__temp166v(uint64_t x, uint64_t y, uint64_t* __temp1616v) {
  int __temp167v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp167v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1616v=z;
}

static inline __attribute__((always_inline)) void inc__temp1583v(uint64_t x, uint64_t* __temp1617v) {
  uint64_t __temp1584v=0;
  uint64_t __temp1585v__=0;
  __temp1584v=1;
  add__temp166v(x,__temp1584v,&__temp1585v__);
  goto __temp_return;
  __temp_return:
  *__temp1617v=__temp1585v__;
}

static inline __attribute__((always_inline)) void print__temp370v(uint64_t value) {
  int __temp371v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1580v(uint64_t x, uint64_t* __temp1618v) {
  uint64_t __temp1581v=0;
  uint64_t __temp1582v__=0;
  __temp1581v=1;
  add__temp166v(x,__temp1581v,&__temp1582v__);
  goto __temp_return;
  __temp_return:
  *__temp1618v=__temp1582v__;
}

static inline __attribute__((always_inline)) void inc__temp1586v(uint64_t x, uint64_t* __temp1619v) {
  uint64_t __temp1587v=0;
  uint64_t __temp1588v__=0;
  __temp1587v=2;
  add__temp166v(x,__temp1587v,&__temp1588v__);
  goto __temp_return;
  __temp_return:
  *__temp1619v=__temp1588v__;
}

static inline __attribute__((always_inline)) void main__temp1598v() {
  const char* __temp1600v__=0;
  uint64_t __temp1602v=0;
  uint64_t __temp1603v__=0;
  uint64_t __temp1605v=0;
  uint64_t __temp1606v__=0;
  uint64_t __temp1608v=0;
  uint64_t __temp1610v__=0;
  which__temp1592v(&__temp1600v__);
  print__temp357v(__temp1600v__);
  __temp1602v=0;
  inc__temp1583v(__temp1602v,&__temp1603v__);
  print__temp370v(__temp1603v__);
  __temp1605v=0;
  inc__temp1580v(__temp1605v,&__temp1606v__);
  print__temp370v(__temp1606v__);
  __temp1608v=0;
  inc__temp1586v(__temp1608v,&__temp1610v__);
  print__temp370v(__temp1610v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1598v();return 0;}