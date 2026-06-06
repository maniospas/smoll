#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2047t=" minutes\n";
const char* const __t2040t="answered: ";
const char* const __t2037t="B";
const char* const __t2032t="A";
const char* const __t2045t=" ";
const char* const __t2044t="in";
const char* const __t2038t="C";
const char* const __t382t="\n";
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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void answers__t2029t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t2049t, const char** __t2050t, uint64_t* __t2051t) {
  *__t2049t=first;
  *__t2050t=second;
  *__t2051t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2052t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2052t=z;
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

static inline __attribute__((always_inline)) int main__t2030t() {
  uint64_t __t2033t=0;
  const char* __t2034t__first=0;
  const char* __t2034t__second=0;
  uint64_t __t2034t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t2035t=0;
  char __t2036t=0;
  char __t2039t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t2033t=60;
  answers__t2029t(__t2032t,__t2032t,__t2033t,&__t2034t__first,&__t2034t__second,&__t2034t__minutes_to_answer);
  answers__first=__t2034t__first;
  answers__second=__t2034t__second;
  answers__minutes_to_answer=__t2034t__minutes_to_answer;
  __t2036t=1;
  if(__t2032t!=answers__first){
  __t2036t=0;
  }
  if(__t2032t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2032t!=answers__first){
  __t2036t=0;
  }
  if(__t2037t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2032t!=answers__first){
  __t2036t=0;
  }
  if(__t2038t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2037t!=answers__first){
  __t2036t=0;
  }
  if(__t2032t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2037t!=answers__first){
  __t2036t=0;
  }
  if(__t2037t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2037t!=answers__first){
  __t2036t=0;
  }
  if(__t2038t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2038t!=answers__first){
  __t2036t=0;
  }
  if(__t2032t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2038t!=answers__first){
  __t2036t=0;
  }
  if(__t2037t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  __t2036t=1;
  if(__t2038t!=answers__first){
  __t2036t=0;
  }
  if(__t2038t!=answers__second){
  __t2036t=0;
  }
  if(__t2036t){
  __t2035t=1;
  }
  not__t28t(__t2035t,&__t2039t__);
  if(__t2039t__){
  __t_errcode=35;
  goto __t_failure;
  }
  print__t380t(__t2040t);
  print__t380t(answers__first);
  print__t380t(answers__second);
  print__t378t(__t2044t,__t2045t);
  print__t391t(answers__minutes_to_answer,__t2047t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2030t();return 0;}