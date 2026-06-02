#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
const char* const __t1543t=" ";
const char* const __t1545t=" minutes\n";
const char* const __t1542t="in";
const char* const __t1535t="B";
const char* const __t1530t="A";
const char* const __t1536t="C";
const char* const __t1538t="answered: ";
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

static inline __attribute__((always_inline)) void answers__t1527t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1547t, const char** __t1548t, uint64_t* __t1549t) {
  *__t1547t=first;
  *__t1548t=second;
  *__t1549t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1550t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1550t=z;
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t374t(const char* value, const char* endl) {
  int __t375t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t387t(uint64_t value, const char* endl) {
  int __t388t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1528t() {
  uint64_t __t1531t=0;
  const char* __t1532t__first=0;
  const char* __t1532t__second=0;
  uint64_t __t1532t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1533t=0;
  char __t1534t=0;
  char __t1537t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1531t=60;
  answers__t1527t(__t1530t,__t1530t,__t1531t,&__t1532t__first,&__t1532t__second,&__t1532t__minutes_to_answer);
  answers__first=__t1532t__first;
  answers__second=__t1532t__second;
  answers__minutes_to_answer=__t1532t__minutes_to_answer;
  __t1534t=1;
  if(__t1530t!=answers__first){
  __t1534t=0;
  }
  if(__t1530t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1530t!=answers__first){
  __t1534t=0;
  }
  if(__t1535t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1530t!=answers__first){
  __t1534t=0;
  }
  if(__t1536t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1535t!=answers__first){
  __t1534t=0;
  }
  if(__t1530t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1535t!=answers__first){
  __t1534t=0;
  }
  if(__t1535t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1535t!=answers__first){
  __t1534t=0;
  }
  if(__t1536t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1536t!=answers__first){
  __t1534t=0;
  }
  if(__t1530t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1536t!=answers__first){
  __t1534t=0;
  }
  if(__t1535t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  __t1534t=1;
  if(__t1536t!=answers__first){
  __t1534t=0;
  }
  if(__t1536t!=answers__second){
  __t1534t=0;
  }
  if(__t1534t){
  __t1533t=1;
  }
  not__t28t(__t1533t,&__t1537t__);
  if(__t1537t__){
  __t_errcode=35;
  goto __t_failure;
  }
  print__t376t(__t1538t);
  print__t376t(answers__first);
  print__t376t(answers__second);
  print__t374t(__t1542t,__t1543t);
  print__t387t(answers__minutes_to_answer,__t1545t);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1528t();return 0;}