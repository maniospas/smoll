#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1492t="B";
const char* const __t1493t="C";
const char* const __t374t="\n";
const char* const __t1502t=" minutes\n";
const char* const __t1499t="in";
const char* const __t1500t=" ";
const char* const __t1487t="A";
const char* const __t1495t="answered: ";
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

static inline __attribute__((always_inline)) void answers__t1485t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1504t, const char** __t1505t, uint64_t* __t1506t) {
  *__t1504t=first;
  *__t1505t=second;
  *__t1506t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1507t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1507t=z;
}

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t370t(const char* value, const char* endl) {
  int __t371t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t383t(uint64_t value, const char* endl) {
  int __t384t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1486t() {
  uint64_t __t1488t=0;
  const char* __t1489t__first=0;
  const char* __t1489t__second=0;
  uint64_t __t1489t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1490t=0;
  char __t1491t=0;
  char __t1494t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1488t=60;
  answers__t1485t(__t1487t,__t1487t,__t1488t,&__t1489t__first,&__t1489t__second,&__t1489t__minutes_to_answer);
  answers__first=__t1489t__first;
  answers__second=__t1489t__second;
  answers__minutes_to_answer=__t1489t__minutes_to_answer;
  __t1491t=1;
  if(__t1487t!=answers__first){
  __t1491t=0;
  }
  if(__t1487t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1487t!=answers__first){
  __t1491t=0;
  }
  if(__t1492t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1487t!=answers__first){
  __t1491t=0;
  }
  if(__t1493t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1492t!=answers__first){
  __t1491t=0;
  }
  if(__t1487t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1492t!=answers__first){
  __t1491t=0;
  }
  if(__t1492t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1492t!=answers__first){
  __t1491t=0;
  }
  if(__t1493t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1493t!=answers__first){
  __t1491t=0;
  }
  if(__t1487t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1493t!=answers__first){
  __t1491t=0;
  }
  if(__t1492t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  __t1491t=1;
  if(__t1493t!=answers__first){
  __t1491t=0;
  }
  if(__t1493t!=answers__second){
  __t1491t=0;
  }
  if(__t1491t){
  __t1490t=1;
  }
  not__t27t(__t1490t,&__t1494t__);
  if(__t1494t__){
  __t_errcode=35;
  goto __t_failure;
  }
  print__t372t(__t1495t);
  print__t372t(answers__first);
  print__t372t(answers__second);
  print__t370t(__t1499t,__t1500t);
  print__t383t(answers__minutes_to_answer,__t1502t);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1486t();return 0;}