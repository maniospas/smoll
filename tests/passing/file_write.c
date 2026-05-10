#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1657v="hello world";
const char* const __temp1654v="tmp.txt";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp597v(const char* other, const char** __temp1659v) {
  *__temp1659v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1660v) {
  char z=0;
  z=x!=0;
  *__temp1660v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1661v) {
  char z=0;
  z=value?0:1;
  *__temp1661v=z;
}

static inline __attribute__((always_inline)) int write__temp1332v(const char* _path, char** __temp1662v) {
  const char* __temp1333v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1334v__=0;
  char __temp1335v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp597v(_path,&__temp1333v__);
  path=__temp1333v__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp398v(unsafe_ptr,&__temp1334v__);
  not__temp18v(__temp1334v__,&__temp1335v__);
  if(__temp1335v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  *__temp1662v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1597v(char** __temp1663v, const char* text) {
  char* f__unsafe_ptr=*__temp1663v;
  char __temp1598v__=0;
  char __temp1599v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1598v__);
  not__temp18v(__temp1598v__,&__temp1599v__);
  if(__temp1599v__){
  __temp_errcode=39;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  *__temp1663v=f__unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1653v() {
  char* __temp1655v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1332v(__temp1654v,&__temp1655v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1655v__unsafe_ptr;
  __temp_errcode=print__temp1597v(&f__unsafe_ptr,__temp1657v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1655v__unsafe_ptr)fclose((FILE*)__temp1655v__unsafe_ptr);
  __temp1655v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1653v();return 0;}