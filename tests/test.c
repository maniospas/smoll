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

static inline __attribute__((always_inline)) void nat__temp_buffer__buffer__temp1654v(char** __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1672v=unsafe_ptr;
  *__temp1673v=unsafe_size;
  *__temp1674v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1675v) {
  int value=0;
  *__temp1675v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1676v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1676v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1677v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1677v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1678v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1678v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1679v) {
  char* allocated=*__temp1679v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1679v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1680v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1681v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1681v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1682v) {
  char* allocated=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1682v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, unsigned long long size, char** __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v) {
  char* buffer__unsafe_ptr=*__temp1683v;
  unsigned long long buffer__unsafe_size=*__temp1684v;
  unsigned long long buffer__unsafe_align=*__temp1685v;
  unsigned long long __temp435v=0;
  char __temp436v__=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
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
  *__temp1683v=buffer__unsafe_ptr;
  *__temp1684v=buffer__unsafe_size;
  *__temp1685v=buffer__unsafe_align;
  *__temp1686v=buffer__unsafe_ptr;
  *__temp1687v=buffer__unsafe_size;
  *__temp1688v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1689v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1689v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1690v) {
  *__temp1690v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1691v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1691v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v, unsigned long long i, char** __temp1695v) {
  char* buffer__unsafe_ptr=*__temp1692v;
  unsigned long long buffer__unsafe_size=*__temp1693v;
  unsigned long long buffer__unsafe_align=*__temp1694v;
  char __temp479v__=0;
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
  *__temp1692v=buffer__unsafe_ptr;
  *__temp1693v=buffer__unsafe_size;
  *__temp1694v=buffer__unsafe_align;
  *__temp1695v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1696v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp427v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated__unsafe_ptr){
  new_allocated=realloc(allocated__unsafe_ptr,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  *__temp1696v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1697v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1697v=z;
}

static inline __attribute__((always_inline)) int resize__temp451v(char** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, unsigned long long size, char** __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v) {
  char* buffer__unsafe_ptr=*__temp1698v;
  unsigned long long buffer__unsafe_size=*__temp1699v;
  unsigned long long buffer__unsafe_align=*__temp1700v;
  char __temp452v__=0;
  unsigned long long __temp453v=0;
  char __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  char __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  char* __temp461v__=0;
  char __temp462v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp452v__);
  if(__temp452v__){
  goto __temp_return;
  }
  __temp453v=0;
  eq__temp278v(size,__temp453v,&__temp454v__);
  if(__temp454v__){
  __temp455v=0;
  buffer__unsafe_size=__temp455v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp457v=0;
  eq__temp278v(buffer__unsafe_size,__temp457v,&__temp458v__);
  if(__temp458v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp459v__);
  prev_bytes=__temp459v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp460v__);
  bytes=__temp460v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp461v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__;
  lt__temp182v(prev_bytes,bytes,&__temp462v__);
  if(__temp462v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1698v=buffer__unsafe_ptr;
  *__temp1699v=buffer__unsafe_size;
  *__temp1700v=buffer__unsafe_align;
  *__temp1701v=buffer__unsafe_ptr;
  *__temp1702v=buffer__unsafe_size;
  *__temp1703v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1704v) {
  char __temp483v__=0;
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
  *__temp1704v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp363v(unsigned long long value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1705v) {
  *__temp1705v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int main__temp1653v() {
  char* __temp1656v__unsafe_ptr=0;
  unsigned long long __temp1656v__unsafe_size=0;
  unsigned long long __temp1656v__unsafe_align=0;
  char* __temp1657v__unsafe_ptr=0;
  unsigned long long __temp1657v__unsafe_size=0;
  unsigned long long __temp1657v__unsafe_align=0;
  unsigned long long __temp1658v=0;
  char* __temp1659v__unsafe_ptr=0;
  unsigned long long __temp1659v__unsafe_size=0;
  unsigned long long __temp1659v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1661v=0;
  char* __temp1662v__=0;
  unsigned long long __temp1663v=0;
  unsigned long long __temp1664v=0;
  char* __temp1665v__unsafe_ptr=0;
  unsigned long long __temp1665v__unsafe_size=0;
  unsigned long long __temp1665v__unsafe_align=0;
  unsigned long long __temp1666v=0;
  char* __temp1667v__=0;
  unsigned long long __temp1668v__number=0;
  unsigned long long __temp1670v__=0;
  unsigned long long __temp1709v=0;
  char __temp1710v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp_buffer__buffer__temp1654v(&__temp1656v__unsafe_ptr,&__temp1656v__unsafe_size,&__temp1656v__unsafe_align);
  __temp1657v__unsafe_ptr=__temp1656v__unsafe_ptr;
  __temp1657v__unsafe_size=__temp1656v__unsafe_size;
  __temp1657v__unsafe_align=__temp1656v__unsafe_align;
  __temp1658v=4;
  __temp_errcode=alloc__temp434v(&__temp1657v__unsafe_ptr,&__temp1657v__unsafe_size,&__temp1657v__unsafe_align,__temp1658v,&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1659v__unsafe_ptr;
  x__unsafe_size=__temp1659v__unsafe_size;
  x__unsafe_align=__temp1659v__unsafe_align;
  __temp1661v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1661v,&__temp1662v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1663v=1;
  if(!__temp1662v__){
  goto __temp_failure;
  }
  memcpy(__temp1662v__,&__temp1663v,8);
  __temp1664v=10;
  __temp_errcode=resize__temp451v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1664v,&__temp1665v__unsafe_ptr,&__temp1665v__unsafe_size,&__temp1665v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1666v=0;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1666v,&__temp1667v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1667v__){
  goto __temp_failure;
  }
  memcpy(&__temp1668v__number,__temp1667v__,8);
  print__temp363v(__temp1668v__number);
  len__temp486v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,&__temp1670v__);
  print__temp363v(__temp1670v__);
  
  __temp_failure:__temp1709v=0;
  neq__temp302v(__temp1659v__unsafe_size,__temp1709v,&__temp1710v);
  if(__temp1710v){
  __temp1659v__unsafe_size=0;
  free__temp428v(&__temp1659v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1653v();return 0;}