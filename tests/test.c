#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp352v="\n";
static const char* __temp_all_errcodes[45] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1651v) {
  int value=0;
  *__temp1651v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1652v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1652v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1653v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1653v=__temp87v__;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1654v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1654v=z;
}

static inline __attribute__((always_inline)) void print__temp363v(unsigned long long value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1655v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1655v=z;
}

static inline __attribute__((always_inline)) void main__temp1643v() {
  unsigned long long __temp1644v=0;
  unsigned long long __temp1645v=0;
  unsigned long long x=0;
  unsigned long long __temp1646v=0;
  char __temp1647v__=0;
  unsigned long long __temp1649v=0;
  unsigned long long __temp1650v__=0;
  __temp1644v=1;
  __temp1645v=__temp1644v;
  x=__temp1645v;
  while(1){
  __temp1646v=10;
  lt__temp182v(x,__temp1646v,&__temp1647v__);
  if(!__temp1647v__)break;
  print__temp363v(x);
  __temp1649v=1;
  add__temp110v(x,__temp1649v,&__temp1650v__);
  x=__temp1650v__;
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1643v();return 0;}