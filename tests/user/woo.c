#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t2670t="wooo";
const char* const __t2087t="Create a safe failure (F), or unsafely crash (C)?\n";
const char* const __t374t="";
const char* const __t2082t="SIGINT: ";
const char* const __t2664t="the end";
static const char* __t_all_errcodes[54] = {"noerr",
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
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
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
int wooo__t2657t() ;
static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void void__t25t() {
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2673t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2673t=z;
}

static inline __attribute__((always_inline)) void supports_ansi__t407t(char* __t2674t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t2674t=supports;
}

static inline __attribute__((always_inline)) void colors__t408t(char* __t2675t) {
  char __t409t__=0;
  char initialized=0;
  supports_ansi__t407t(&__t409t__);
  initialized=__t409t__;
  goto __t_return;
  __t_return:
  *__t2675t=initialized;
}

static inline __attribute__((always_inline)) void set__t414t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t2676t, const char** __t2677t) {
  goto __t_return;
  __t_return:
  *__t2676t=value;
  *__t2677t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t422t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) int breakpoint__t2076t() {
  char has_failed=0;
  char __t2077t__=0;
  char __t2078t__initialized=0;
  char color__initialized=0;
  const char* __t2083t__value=0;
  const char* __t2083t____t374t=0;
  const char* __t2088t__value=0;
  const char* __t2088t____t374t=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  has_failed=__t_interrupted;
  not__t28t(has_failed,&__t2077t__);
  if(__t2077t__){
  goto __t_return;
  }
  colors__t408t(&__t2078t__initialized);
  color__initialized=__t2078t__initialized;
  set__t414t(color__initialized);
  nn__t373t(__t2082t,&__t2083t__value,&__t2083t____t374t);
  print__t378t(__t2083t__value,__t2083t____t374t);
  set__t422t(color__initialized);
  nn__t373t(__t2087t,&__t2088t__value,&__t2088t____t374t);
  print__t378t(__t2088t__value,__t2088t____t374t);
  if(__t2078t__initialized){
  printf("\033[0m");
  }
  while(true){
  c=getchar();
  if(c=='F'){
  has_failed=0;
  break;
  }
  if(c=='f'){
  has_failed=0;
  break;
  }
  if(c=='C'){
  break;
  }
  if(c=='c'){
  break;
  }
  }
  if(has_failed){
  _exit(1);
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

int wooo__t2657t() {
  char __t2667t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2667t=0;
  if(__t2667t){
  void__t25t();
  goto __t_return;
  }
  __t_errcode=breakpoint__t2076t();
  if(__t_errcode){
  goto __t_failure;
  }
  print__t380t(__t2670t);
  __t_errcode=wooo__t2657t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void main__t2660t() {
  char __t2662t=0;
  int __t_complain=0;
  console__t366t();
  __t_complain=wooo__t2657t();
  __t2662t=__t_complain;
  __t2662t=__t2662t==0;
  print__t380t(__t2664t);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2660t();return 0;}