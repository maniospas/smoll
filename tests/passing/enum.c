#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
const char* const __t1346t="B";
const char* const __t1355t=" minutes\n";
const char* const __t1349t="answered: ";
const char* const __t1049t=" ";
const char* const __t1347t="C";
const char* const __t1353t="in";
const char* const __t1341t="A";
static const char* __t_all_errcodes[37] = {"noerr",
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

static inline __attribute__((always_inline)) void answers__t1339t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1357t, const char** __t1358t, uint64_t* __t1359t) {
  *__t1357t=first;
  *__t1358t=second;
  *__t1359t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1360t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1360t=z;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t380t(uint64_t value, const char* endl) {
  int __t381t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1340t() {
  uint64_t __t1342t=0;
  const char* __t1343t__first=0;
  const char* __t1343t__second=0;
  uint64_t __t1343t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1344t=0;
  char __t1345t=0;
  char __t1348t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1342t=60;
  answers__t1339t(__t1341t,__t1341t,__t1342t,&__t1343t__first,&__t1343t__second,&__t1343t__minutes_to_answer);
  answers__first=__t1343t__first;
  answers__second=__t1343t__second;
  answers__minutes_to_answer=__t1343t__minutes_to_answer;
  __t1345t=1;
  if(__t1341t!=answers__first){
  __t1345t=0;
  }
  if(__t1341t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1341t!=answers__first){
  __t1345t=0;
  }
  if(__t1346t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1341t!=answers__first){
  __t1345t=0;
  }
  if(__t1347t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1346t!=answers__first){
  __t1345t=0;
  }
  if(__t1341t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1346t!=answers__first){
  __t1345t=0;
  }
  if(__t1346t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1346t!=answers__first){
  __t1345t=0;
  }
  if(__t1347t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1347t!=answers__first){
  __t1345t=0;
  }
  if(__t1341t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1347t!=answers__first){
  __t1345t=0;
  }
  if(__t1346t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  __t1345t=1;
  if(__t1347t!=answers__first){
  __t1345t=0;
  }
  if(__t1347t!=answers__second){
  __t1345t=0;
  }
  if(__t1345t){
  __t1344t=1;
  }
  not__t27t(__t1344t,&__t1348t__);
  if(__t1348t__){
  __t_errcode=36;
  goto __t_failure;
  }
  print__t369t(__t1349t);
  print__t369t(answers__first);
  print__t369t(answers__second);
  print__t367t(__t1353t,__t1049t);
  print__t380t(answers__minutes_to_answer,__t1355t);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1340t();return 0;}