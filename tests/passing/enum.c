#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1577t="B";
const char* const __t382t="\n";
const char* const __t1587t=" minutes\n";
const char* const __t1578t="C";
const char* const __t1584t="in";
const char* const __t1580t="answered: ";
const char* const __t1585t=" ";
const char* const __t1572t="A";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void answers__t1569t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1589t, const char** __t1590t, uint64_t* __t1591t) {
  *__t1589t=first;
  *__t1590t=second;
  *__t1591t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1592t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1592t=z;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t391t(uint64_t value, const char* endl) {
  int __t392t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1570t() {
  uint64_t __t1573t=0;
  const char* __t1574t__first=0;
  const char* __t1574t__second=0;
  uint64_t __t1574t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1575t=0;
  char __t1576t=0;
  char __t1579t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1573t=60;
  answers__t1569t(__t1572t,__t1572t,__t1573t,&__t1574t__first,&__t1574t__second,&__t1574t__minutes_to_answer);
  answers__first=__t1574t__first;
  answers__second=__t1574t__second;
  answers__minutes_to_answer=__t1574t__minutes_to_answer;
  __t1576t=1;
  if(__t1572t!=answers__first){
  __t1576t=0;
  }
  if(__t1572t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1572t!=answers__first){
  __t1576t=0;
  }
  if(__t1577t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1572t!=answers__first){
  __t1576t=0;
  }
  if(__t1578t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1577t!=answers__first){
  __t1576t=0;
  }
  if(__t1572t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1577t!=answers__first){
  __t1576t=0;
  }
  if(__t1577t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1577t!=answers__first){
  __t1576t=0;
  }
  if(__t1578t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1578t!=answers__first){
  __t1576t=0;
  }
  if(__t1572t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1578t!=answers__first){
  __t1576t=0;
  }
  if(__t1577t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  __t1576t=1;
  if(__t1578t!=answers__first){
  __t1576t=0;
  }
  if(__t1578t!=answers__second){
  __t1576t=0;
  }
  if(__t1576t){
  __t1575t=1;
  }
  not__t28t(__t1575t,&__t1579t__);
  if(__t1579t__){
  __t_errcode=35;
  goto __t_failure;
  }
  print__t380t(__t1580t);
  print__t380t(answers__first);
  print__t380t(answers__second);
  print__t378t(__t1584t,__t1585t);
  print__t391t(answers__minutes_to_answer,__t1587t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1570t();return 0;}