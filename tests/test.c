#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp352v="\n";
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

static inline __attribute__((always_inline)) void cstr__temp_buffer__buffer__temp1200v(void** __temp1651v, unsigned long long* __temp1652v, unsigned long long* __temp1653v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1651v=unsafe_ptr;
  *__temp1652v=unsafe_size;
  *__temp1653v=unsafe_align;
}

static inline __attribute__((always_inline)) void args__temp1199v(void** __temp1655v, unsigned long long* __temp1656v, unsigned long long* __temp1657v) {
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  void* ret__unsafe_ptr=0;
  unsigned long long ret__unsafe_size=0;
  unsigned long long ret__unsafe_align=0;
  cstr__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  ret__unsafe_ptr=__temp1202v__unsafe_ptr;
  ret__unsafe_size=__temp1202v__unsafe_size;
  ret__unsafe_align=__temp1202v__unsafe_align;
  ret__unsafe_ptr=__temp_argv;
  ret__unsafe_size=__temp_argc;
  *__temp1655v=ret__unsafe_ptr;
  *__temp1656v=ret__unsafe_size;
  *__temp1657v=ret__unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1658v) {
  int value=0;
  *__temp1658v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1659v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1659v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1660v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1660v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1661v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1661v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1662v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1663v) {
  *__temp1663v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1664v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1664v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1665v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1665v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void osname__temp1198v(const char** __temp1666v) {
  const char* ret=0;
  ret=__temp_osname;
  *__temp1666v=ret;
}

static inline __attribute__((always_inline)) int main__temp1643v() {
  void* __temp1644v__unsafe_ptr=0;
  unsigned long long __temp1644v__unsafe_size=0;
  unsigned long long __temp1644v__unsafe_align=0;
  void* args__unsafe_ptr=0;
  unsigned long long args__unsafe_size=0;
  unsigned long long args__unsafe_align=0;
  unsigned long long __temp1645v=0;
  void* __temp1646v__=0;
  const char* __temp1647v__value=0;
  const char* __temp1649v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  args__temp1199v(&__temp1644v__unsafe_ptr,&__temp1644v__unsafe_size,&__temp1644v__unsafe_align);
  args__unsafe_ptr=__temp1644v__unsafe_ptr;
  args__unsafe_size=__temp1644v__unsafe_size;
  args__unsafe_align=__temp1644v__unsafe_align;
  __temp1645v=0;
  __temp_errcode=get__temp482v(args__unsafe_ptr,args__unsafe_size,args__unsafe_align,__temp1645v,&__temp1646v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1646v__){
  goto __temp_failure;
  }
  memcpy(&__temp1647v__value,(char*)__temp1646v__,8);
  print__temp350v(__temp1647v__value);
  osname__temp1198v(&__temp1649v__);
  print__temp350v(__temp1649v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1643v();return 0;}