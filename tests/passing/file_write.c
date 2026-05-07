#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[44] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp1590v="hello world";
const char* const __temp1587v="tmp.txt";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp592v(const char* other, const char** __temp1592v) {
  *__temp1592v=other;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1593v) {
  int z=0;
  z=x!=0;
  *__temp1593v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1594v) {
  int z=0;
  z=value?0:1;
  *__temp1594v=z;
}

static inline __attribute__((always_inline)) int write__temp1247v(const char* _path, void** __temp1595v) {
  const char* __temp1248v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1249v__=0;
  int __temp1250v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp592v(_path,&__temp1248v__);
  path=__temp1248v__;
  unsafe_ptr=fopen(path,"wx+");
  exists__temp396v(unsafe_ptr,&__temp1249v__);
  not__temp18v(__temp1249v__,&__temp1250v__);
  if(__temp1250v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1595v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1518v(void** __temp1596v, const char* text) {
  void* f__unsafe_ptr=*__temp1596v;
  int __temp1519v__=0;
  int __temp1520v__=0;
  int __temp_errcode=0;
  exists__temp396v(f__unsafe_ptr,&__temp1519v__);
  not__temp18v(__temp1519v__,&__temp1520v__);
  if(__temp1520v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  *__temp1596v=f__unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1586v() {
  void* __temp1588v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  int __temp_errcode=0;
  __temp_errcode=write__temp1247v(__temp1587v,&__temp1588v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1588v__unsafe_ptr;
  __temp_errcode=print__temp1518v(&f__unsafe_ptr,__temp1590v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1588v__unsafe_ptr)fclose((FILE*)__temp1588v__unsafe_ptr);
  __temp1588v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}