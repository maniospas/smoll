#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1647v="hello world";
const char* const __temp1644v="tmp.txt";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp591v(const char* other, const char** __temp1649v) {
  *__temp1649v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1650v) {
  char z=0;
  z=x!=0;
  *__temp1650v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1651v) {
  char z=0;
  z=value?0:1;
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) int write__temp1322v(const char* _path, char** __temp1652v) {
  const char* __temp1323v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1324v__=0;
  char __temp1325v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp591v(_path,&__temp1323v__);
  path=__temp1323v__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp398v(unsafe_ptr,&__temp1324v__);
  not__temp18v(__temp1324v__,&__temp1325v__);
  if(__temp1325v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  *__temp1652v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1593v(char** __temp1653v, const char* text) {
  char* f__unsafe_ptr=*__temp1653v;
  char __temp1594v__=0;
  char __temp1595v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1594v__);
  not__temp18v(__temp1594v__,&__temp1595v__);
  if(__temp1595v__){
  __temp_errcode=39;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  *__temp1653v=f__unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1643v() {
  char* __temp1645v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1322v(__temp1644v,&__temp1645v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1645v__unsafe_ptr;
  __temp_errcode=print__temp1593v(&f__unsafe_ptr,__temp1647v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1645v__unsafe_ptr)fclose((FILE*)__temp1645v__unsafe_ptr);
  __temp1645v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1643v();return 0;}