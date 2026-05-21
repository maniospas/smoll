#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1329t="A";
const char* const __t1343t=" minutes\n";
const char* const __t370t="\n";
const char* const __t1335t="C";
const char* const __t1037t=" ";
const char* const __t1337t="answered: ";
const char* const __t1334t="B";
const char* const __t1341t="in";
static const char* __t_all_errcodes[37] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void answers__t1327t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1345t, const char** __t1346t, uint64_t* __t1347t) {
  *__t1345t=first;
  *__t1346t=second;
  *__t1347t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1348t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1348t=z;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t366t(const char* value, const char* endl) {
  int __t367t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t379t(uint64_t value, const char* endl) {
  int __t380t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1328t() {
  uint64_t __t1330t=0;
  const char* __t1331t__first=0;
  const char* __t1331t__second=0;
  uint64_t __t1331t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1332t=0;
  char __t1333t=0;
  char __t1336t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1330t=60;
  answers__t1327t(__t1329t,__t1329t,__t1330t,&__t1331t__first,&__t1331t__second,&__t1331t__minutes_to_answer);
  answers__first=__t1331t__first;
  answers__second=__t1331t__second;
  answers__minutes_to_answer=__t1331t__minutes_to_answer;
  __t1333t=1;
  if(__t1329t!=answers__first){
  __t1333t=0;
  }
  if(__t1329t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1329t!=answers__first){
  __t1333t=0;
  }
  if(__t1334t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1329t!=answers__first){
  __t1333t=0;
  }
  if(__t1335t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1334t!=answers__first){
  __t1333t=0;
  }
  if(__t1329t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1334t!=answers__first){
  __t1333t=0;
  }
  if(__t1334t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1334t!=answers__first){
  __t1333t=0;
  }
  if(__t1335t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1335t!=answers__first){
  __t1333t=0;
  }
  if(__t1329t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1335t!=answers__first){
  __t1333t=0;
  }
  if(__t1334t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  __t1333t=1;
  if(__t1335t!=answers__first){
  __t1333t=0;
  }
  if(__t1335t!=answers__second){
  __t1333t=0;
  }
  if(__t1333t){
  __t1332t=1;
  }
  not__t26t(__t1332t,&__t1336t__);
  if(__t1336t__){
  __t_errcode=36;
  goto __t_failure;
  }
  print__t368t(__t1337t);
  print__t368t(answers__first);
  print__t368t(answers__second);
  print__t366t(__t1341t,__t1037t);
  print__t379t(answers__minutes_to_answer,__t1343t);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1328t();return 0;}