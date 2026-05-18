#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1705v="tmp.txt";
const char* const __temp1708v="hello world";
static const char* __temp_all_errcodes[49] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp653v(const char* other, const char** __temp1710v) {
  goto __temp_return;
  __temp_return:
  *__temp1710v=other;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1711v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1711v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1712v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1712v=z;
}

static inline __attribute__((always_inline)) int write__temp1317v(const char* _path, char** __temp1713v) {
  const char* __temp1318v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1319v__=0;
  char __temp1320v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp653v(_path,&__temp1318v__);
  path=__temp1318v__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp412v(unsafe_ptr,&__temp1319v__);
  not__temp26v(__temp1319v__,&__temp1320v__);
  if(__temp1320v__){
  __temp_errcode=36;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1713v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1598v(char** __temp1714v, const char* text) {
  char* f__unsafe_ptr=*__temp1714v;
  char __temp1599v__=0;
  char __temp1600v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1599v__);
  not__temp26v(__temp1599v__,&__temp1600v__);
  if(__temp1600v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __temp_failure:*__temp1714v=f__unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1704v() {
  char* __temp1706v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1317v(__temp1705v,&__temp1706v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1706v__unsafe_ptr;
  __temp_errcode=print__temp1598v(&f__unsafe_ptr,__temp1708v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1706v__unsafe_ptr)fclose((FILE*)__temp1706v__unsafe_ptr);
  __temp1706v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1704v();return 0;}