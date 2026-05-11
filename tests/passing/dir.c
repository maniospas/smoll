#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1636v="./std";
const char* const __temp436v="free";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp603v(const char* other, const char** __temp1646v) {
  goto __temp_return;
  __temp_return:
  *__temp1646v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1647v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1647v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1648v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1648v=z;
}

static inline __attribute__((always_inline)) int read__temp1618v(const char* _path, char** __temp1649v) {
  const char* __temp1619v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1620v__=0;
  char __temp1621v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp603v(_path,&__temp1619v__);
  path=__temp1619v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1620v__);
  not__temp18v(__temp1620v__,&__temp1621v__);
  if(__temp1621v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1649v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1650v, unsigned long long* __temp1651v, unsigned long long* __temp1652v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1650v=unsafe_ptr;
  *__temp1651v=unsafe_size;
  *__temp1652v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1653v) {
  int value=0;
  *__temp1653v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1654v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1654v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1655v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1655v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1656v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1656v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1657v) {
  char* allocated=*__temp1657v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1657v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1658v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1658v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1659v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1659v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1660v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1660v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, unsigned long long size, char** __temp1664v, unsigned long long* __temp1665v, unsigned long long* __temp1666v) {
  char* buffer__unsafe_ptr=*__temp1661v;
  unsigned long long buffer__unsafe_size=*__temp1662v;
  unsigned long long buffer__unsafe_align=*__temp1663v;
  int __temp435v=0;
  unsigned long long __temp438v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  char __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  char __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  char* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp302v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp429v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp302v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1661v=buffer__unsafe_ptr;
  *__temp1662v=buffer__unsafe_size;
  *__temp1663v=buffer__unsafe_align;
  *__temp1664v=buffer__unsafe_ptr;
  *__temp1665v=buffer__unsafe_size;
  *__temp1666v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1667v, unsigned long long* __temp1668v, unsigned long long* __temp1669v) {
  char* __temp513v__unsafe_ptr=0;
  unsigned long long __temp513v__unsafe_size=0;
  unsigned long long __temp513v__unsafe_align=0;
  char* __temp514v__unsafe_ptr=0;
  unsigned long long __temp514v__unsafe_size=0;
  unsigned long long __temp514v__unsafe_align=0;
  char* __temp515v__unsafe_ptr=0;
  unsigned long long __temp515v__unsafe_size=0;
  unsigned long long __temp515v__unsafe_align=0;
  unsigned long long __temp516v____temp438v=0;
  char __temp516v____temp439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  __temp514v__unsafe_ptr=__temp513v__unsafe_ptr;
  __temp514v__unsafe_size=__temp513v__unsafe_size;
  __temp514v__unsafe_align=__temp513v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp514v__unsafe_ptr,&__temp514v__unsafe_size,&__temp514v__unsafe_align,size,&__temp515v__unsafe_ptr,&__temp515v__unsafe_size,&__temp515v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1667v=__temp515v__unsafe_ptr;
  *__temp1668v=__temp515v__unsafe_size;
  *__temp1669v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1670v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1670v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1671v) {
  *__temp1671v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1672v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1672v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1673v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1673v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, char* __temp1677v) {
  goto __temp_return;
  __temp_return:
  *__temp1674v=unsafe_ptr;
  *__temp1675v=dat__pos;
  *__temp1676v=dat__length;
  *__temp1677v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v, char* __temp1681v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1678v=__temp552v__unsafe_ptr;
  *__temp1679v=__temp552v__dat__pos;
  *__temp1680v=__temp552v__dat__length;
  *__temp1681v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, char* __temp1685v) {
  unsigned long long __temp562v=0;
  char __temp563v__=0;
  char* __temp564v__=0;
  char __temp565v__value=0;
  char first=0;
  char* __temp566v__unsafe_ptr=0;
  unsigned long long __temp566v__dat__pos=0;
  unsigned long long __temp566v__dat__length=0;
  char __temp566v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp562v=0;
  neq__temp302v(length,__temp562v,&__temp563v__);
  if(__temp563v__){
  __temp_errcode=get__temp505v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp564v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp564v__){
  goto __temp_failure;
  }
  memcpy(&__temp565v__value,__temp564v__,1);
  first=__temp565v__value;
  }
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp566v__unsafe_ptr,&__temp566v__dat__pos,&__temp566v__dat__length,&__temp566v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1682v=__temp566v__unsafe_ptr;
  *__temp1683v=__temp566v__dat__pos;
  *__temp1684v=__temp566v__dat__length;
  *__temp1685v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, char* __temp1689v) {
  char* __temp568v__unsafe_ptr=0;
  unsigned long long __temp568v__unsafe_size=0;
  unsigned long long __temp568v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp569v=0;
  char* __temp570v__unsafe_ptr=0;
  unsigned long long __temp570v__dat__pos=0;
  unsigned long long __temp570v__dat__length=0;
  char __temp570v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp568v__unsafe_ptr,&__temp568v__unsafe_size,&__temp568v__unsafe_align);
  buf__unsafe_ptr=__temp568v__unsafe_ptr;
  buf__unsafe_size=__temp568v__unsafe_size;
  buf__unsafe_align=__temp568v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp569v=0;
  __temp_errcode=str__temp561v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp569v,length,&__temp570v__unsafe_ptr,&__temp570v__dat__pos,&__temp570v__dat__length,&__temp570v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1686v=__temp570v__unsafe_ptr;
  *__temp1687v=__temp570v__dat__pos;
  *__temp1688v=__temp570v__dat__length;
  *__temp1689v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1629v(char** __temp1690v, char** __temp1691v, unsigned long long* __temp1692v, unsigned long long* __temp1693v, char* __temp1694v) {
  char* f__unsafe_ptr=*__temp1690v;
  char __temp1630v__=0;
  char __temp1631v__=0;
  char* de=0;
  char __temp1632v__=0;
  char __temp1633v__=0;
  const char* dirname=0;
  char* __temp1634v__unsafe_ptr=0;
  unsigned long long __temp1634v__dat__pos=0;
  unsigned long long __temp1634v__dat__length=0;
  char __temp1634v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1630v__);
  not__temp18v(__temp1630v__,&__temp1631v__);
  if(__temp1631v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1632v__);
  not__temp18v(__temp1632v__,&__temp1633v__);
  if(__temp1633v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp567v(dirname,&__temp1634v__unsafe_ptr,&__temp1634v__dat__pos,&__temp1634v__dat__length,&__temp1634v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1690v=f__unsafe_ptr;
  *__temp1691v=__temp1634v__unsafe_ptr;
  *__temp1692v=__temp1634v__dat__pos;
  *__temp1693v=__temp1634v__dat__length;
  *__temp1694v=__temp1634v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp681v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp682v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1635v() {
  char* __temp1637v__unsafe_ptr=0;
  char* __temp1639v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  unsigned long long __temp1640v=0;
  char* __temp1641v__unsafe_ptr=0;
  unsigned long long __temp1641v__unsafe_size=0;
  unsigned long long __temp1641v__unsafe_align=0;
  unsigned long long __temp1642v____temp516v____temp438v=0;
  char __temp1642v____temp516v____temp439v__=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char __temp1643v=0;
  char* __temp1644v__unsafe_ptr=0;
  unsigned long long __temp1644v__dat__pos=0;
  unsigned long long __temp1644v__dat__length=0;
  char __temp1644v__dat__first=0;
  char* entry__unsafe_ptr=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1618v(__temp1636v,&__temp1637v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1639v__unsafe_ptr=__temp1637v__unsafe_ptr;
  dir__unsafe_ptr=__temp1639v__unsafe_ptr;
  __temp1640v=128;
  __temp_errcode=alloc__temp510v(__temp1640v,&__temp1641v__unsafe_ptr,&__temp1641v__unsafe_size,&__temp1641v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1641v__unsafe_ptr;
  buf__unsafe_size=__temp1641v__unsafe_size;
  buf__unsafe_align=__temp1641v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1629v(&dir__unsafe_ptr,&__temp1644v__unsafe_ptr,&__temp1644v__dat__pos,&__temp1644v__dat__length,&__temp1644v__dat__first);
  __temp1643v=__temp_complain;
  entry__unsafe_ptr=__temp1644v__unsafe_ptr;
  entry__dat__pos=__temp1644v__dat__pos;
  entry__dat__length=__temp1644v__dat__length;
  entry__dat__first=__temp1644v__dat__first;
  __temp1643v=__temp1643v==0;
  if(!__temp1643v){
  break;
  }
  print__temp681v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1635v();return 0;}