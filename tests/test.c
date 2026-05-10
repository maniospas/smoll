#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void nat__temp_buffer__buffer__temp1644v(char** __temp1658v, unsigned long long* __temp1659v, unsigned long long* __temp1660v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1658v=unsafe_ptr;
  *__temp1659v=unsafe_size;
  *__temp1660v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1661v) {
  int value=0;
  *__temp1661v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1662v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1662v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1663v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1663v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1664v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1664v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1665v) {
  char* allocated=*__temp1665v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1665v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1666v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1667v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1667v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1668v) {
  char* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1668v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v, unsigned long long size, char** __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v) {
  char* buffer__unsafe_ptr=*__temp1669v;
  unsigned long long buffer__unsafe_size=*__temp1670v;
  unsigned long long buffer__unsafe_align=*__temp1671v;
  unsigned long long __temp435v=0;
  int __temp436v__=0;
  int __temp439v__=0;
  unsigned long long __temp440v=0;
  int __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  int __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
  unsigned long long __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  __temp_return:
  *__temp1669v=buffer__unsafe_ptr;
  *__temp1670v=buffer__unsafe_size;
  *__temp1671v=buffer__unsafe_align;
  *__temp1672v=buffer__unsafe_ptr;
  *__temp1673v=buffer__unsafe_size;
  *__temp1674v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1675v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1675v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1676v) {
  *__temp1676v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1677v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1677v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v, unsigned long long i, char** __temp1681v) {
  char* buffer__unsafe_ptr=*__temp1678v;
  unsigned long long buffer__unsafe_size=*__temp1679v;
  unsigned long long buffer__unsafe_align=*__temp1680v;
  int __temp479v__=0;
  unsigned long long __temp480v__=0;
  char* __temp481v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp480v__);
  add__temp430v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1678v=buffer__unsafe_ptr;
  *__temp1679v=buffer__unsafe_size;
  *__temp1680v=buffer__unsafe_align;
  *__temp1681v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1682v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  char* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1682v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1643v() {
  char* __temp1646v__unsafe_ptr=0;
  unsigned long long __temp1646v__unsafe_size=0;
  unsigned long long __temp1646v__unsafe_align=0;
  char* __temp1647v__unsafe_ptr=0;
  unsigned long long __temp1647v__unsafe_size=0;
  unsigned long long __temp1647v__unsafe_align=0;
  unsigned long long __temp1648v=0;
  char* __temp1649v__unsafe_ptr=0;
  unsigned long long __temp1649v__unsafe_size=0;
  unsigned long long __temp1649v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1651v=0;
  char* __temp1652v__=0;
  unsigned long long __temp1653v=0;
  unsigned long long __temp1654v=0;
  char* __temp1655v__=0;
  unsigned long long __temp1656v__value=0;
  unsigned long long __temp1686v=0;
  int __temp1687v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp_buffer__buffer__temp1644v(&__temp1646v__unsafe_ptr,&__temp1646v__unsafe_size,&__temp1646v__unsafe_align);
  __temp1647v__unsafe_ptr=__temp1646v__unsafe_ptr;
  __temp1647v__unsafe_size=__temp1646v__unsafe_size;
  __temp1647v__unsafe_align=__temp1646v__unsafe_align;
  __temp1648v=12;
  __temp_errcode=alloc__temp434v(&__temp1647v__unsafe_ptr,&__temp1647v__unsafe_size,&__temp1647v__unsafe_align,__temp1648v,&__temp1649v__unsafe_ptr,&__temp1649v__unsafe_size,&__temp1649v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1649v__unsafe_ptr;
  x__unsafe_size=__temp1649v__unsafe_size;
  x__unsafe_align=__temp1649v__unsafe_align;
  __temp1651v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1651v,&__temp1652v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1653v=1;
  if(!__temp1652v__){
  goto __temp_failure;
  }
  memcpy(__temp1652v__,&__temp1653v,8);
  __temp1654v=0;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1654v,&__temp1655v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1655v__){
  goto __temp_failure;
  }
  memcpy(&__temp1656v__value,__temp1655v__,8);
  print__temp361v(__temp1656v__value);
  
  __temp_failure:__temp1686v=0;
  neq__temp302v(__temp1649v__unsafe_size,__temp1686v,&__temp1687v);
  if(__temp1687v){
  __temp1649v__unsafe_size=0;
  free__temp428v(&__temp1649v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1643v();return 0;}