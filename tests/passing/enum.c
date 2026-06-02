#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1493t="B";
const char* const __t1488t="A";
const char* const __t1496t="answered: ";
const char* const __t1500t="in";
const char* const __t1501t=" ";
const char* const __t1494t="C";
const char* const __t377t="\n";
const char* const __t1503t=" minutes\n";
static const char* __t_all_errcodes[36] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"not a valid answer"
};

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void answers__t1485t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1505t, const char** __t1506t, uint64_t* __t1507t) {
  *__t1505t=first;
  *__t1506t=second;
  *__t1507t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1508t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t386t(uint64_t value, const char* endl) {
  int __t387t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1486t() {
  uint64_t __t1489t=0;
  const char* __t1490t__first=0;
  const char* __t1490t__second=0;
  uint64_t __t1490t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1491t=0;
  char __t1492t=0;
  char __t1495t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t1489t=60;
  answers__t1485t(__t1488t,__t1488t,__t1489t,&__t1490t__first,&__t1490t__second,&__t1490t__minutes_to_answer);
  answers__first=__t1490t__first;
  answers__second=__t1490t__second;
  answers__minutes_to_answer=__t1490t__minutes_to_answer;
  __t1492t=1;
  if(__t1488t!=answers__first){
  __t1492t=0;
  }
  if(__t1488t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1488t!=answers__first){
  __t1492t=0;
  }
  if(__t1493t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1488t!=answers__first){
  __t1492t=0;
  }
  if(__t1494t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1493t!=answers__first){
  __t1492t=0;
  }
  if(__t1488t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1493t!=answers__first){
  __t1492t=0;
  }
  if(__t1493t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1493t!=answers__first){
  __t1492t=0;
  }
  if(__t1494t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1494t!=answers__first){
  __t1492t=0;
  }
  if(__t1488t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1494t!=answers__first){
  __t1492t=0;
  }
  if(__t1493t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  __t1492t=1;
  if(__t1494t!=answers__first){
  __t1492t=0;
  }
  if(__t1494t!=answers__second){
  __t1492t=0;
  }
  if(__t1492t){
  __t1491t=1;
  }
  not__t27t(__t1491t,&__t1495t__);
  if(__t1495t__){
  __t_errcode=35;
  goto __t_failure;
  }
  print__t375t(__t1496t);
  print__t375t(answers__first);
  print__t375t(answers__second);
  print__t373t(__t1500t,__t1501t);
  print__t386t(answers__minutes_to_answer,__t1503t);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1486t();return 0;}