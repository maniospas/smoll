#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1636v="tmp.txt";
const char* const __temp1639v="hello world";
static const char* __temp_all_errcodes[44] = {"noerr",
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
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp603v(const char* other, const char** __temp1641v) {
  goto __temp_return;
  __temp_return:
  *__temp1641v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1642v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1642v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1643v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1643v=z;
}

static inline __attribute__((always_inline)) int write__temp1314v(const char* _path, char** __temp1644v) {
  const char* __temp1315v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1316v__=0;
  char __temp1317v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp603v(_path,&__temp1315v__);
  path=__temp1315v__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp398v(unsafe_ptr,&__temp1316v__);
  not__temp18v(__temp1316v__,&__temp1317v__);
  if(__temp1317v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1644v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1585v(char** __temp1645v, const char* text) {
  char* f__unsafe_ptr=*__temp1645v;
  char __temp1586v__=0;
  char __temp1587v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1586v__);
  not__temp18v(__temp1586v__,&__temp1587v__);
  if(__temp1587v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __temp_failure:*__temp1645v=f__unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1635v() {
  char* __temp1637v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1314v(__temp1636v,&__temp1637v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1637v__unsafe_ptr;
  __temp_errcode=print__temp1585v(&f__unsafe_ptr,__temp1639v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1635v();return 0;}