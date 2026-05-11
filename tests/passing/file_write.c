#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1631v="tmp.txt";
const char* const __temp1634v="hello world";
static const char* __temp_all_errcodes[44] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp598v(const char* other, const char** __temp1636v) {
  goto __temp_return;
  __temp_return:
  *__temp1636v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1637v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1637v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(uint8_t value, uint8_t* __temp1638v) {
  uint8_t z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1638v=z;
}

static inline __attribute__((always_inline)) int write__temp1309v(const char* _path, char** __temp1639v) {
  const char* __temp1310v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  uint8_t __temp1311v__=0;
  uint8_t __temp1312v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp598v(_path,&__temp1310v__);
  path=__temp1310v__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp398v(unsafe_ptr,&__temp1311v__);
  not__temp18v(__temp1311v__,&__temp1312v__);
  if(__temp1312v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1639v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1577v(char** __temp1640v, const char* text) {
  char* f__unsafe_ptr=*__temp1640v;
  uint8_t __temp1578v__=0;
  uint8_t __temp1579v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1578v__);
  not__temp18v(__temp1578v__,&__temp1579v__);
  if(__temp1579v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __temp_failure:*__temp1640v=f__unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1630v() {
  char* __temp1632v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1309v(__temp1631v,&__temp1632v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1632v__unsafe_ptr;
  __temp_errcode=print__temp1577v(&f__unsafe_ptr,__temp1634v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1632v__unsafe_ptr)fclose((FILE*)__temp1632v__unsafe_ptr);
  __temp1632v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1630v();return 0;}