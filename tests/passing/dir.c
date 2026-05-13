#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1635v="./std";
const char* const __temp353v="\n";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp617v(const char* other, const char** __temp1645v) {
  goto __temp_return;
  __temp_return:
  *__temp1645v=other;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1646v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1646v=z;
}

static inline __attribute__((always_inline)) void not__temp21v(char value, char* __temp1647v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1647v=z;
}

static inline __attribute__((always_inline)) int read__temp1617v(const char* _path, char** __temp1648v) {
  const char* __temp1618v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1619v__=0;
  char __temp1620v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp617v(_path,&__temp1618v__);
  path=__temp1618v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp401v(unsafe_ptr,&__temp1619v__);
  not__temp21v(__temp1619v__,&__temp1620v__);
  if(__temp1620v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1648v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1649v, uint64_t* __temp1650v, uint64_t* __temp1651v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1649v=unsafe_ptr;
  *__temp1650v=unsafe_size;
  *__temp1651v=unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1652v) {
  char* allocated=*__temp1652v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1652v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1653v) {
  int value=0;
  *__temp1653v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1654v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1654v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1655v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1655v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1656v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1656v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1657v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1657v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1658v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1658v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1659v) {
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
  *__temp1659v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1660v, uint64_t* __temp1661v, uint64_t* __temp1662v, uint64_t size, char** __temp1663v, uint64_t* __temp1664v, uint64_t* __temp1665v) {
  char* buffer__unsafe_ptr=*__temp1660v;
  uint64_t buffer__unsafe_size=*__temp1661v;
  uint64_t buffer__unsafe_align=*__temp1662v;
  int __temp456v=0;
  char __temp457v__=0;
  uint64_t __temp458v=0;
  char __temp460v__=0;
  uint64_t __temp461v=0;
  char __temp462v__=0;
  uint64_t __temp463v=0;
  uint64_t __temp464v__=0;
  uint64_t __temp466v=0;
  char __temp467v__=0;
  uint64_t __temp468v__=0;
  uint64_t bytes=0;
  char* __temp469v__=0;
  uint64_t __temp470v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp460v__);
  if(__temp460v__){
  __temp461v=0;
  neq__temp305v(size,__temp461v,&__temp462v__);
  if(__temp462v__){
  __temp463v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp464v__);
  zero__temp432v(buffer__unsafe_ptr,__temp463v,__temp464v__);
  }
  goto __temp_return;
  }
  __temp466v=0;
  neq__temp305v(buffer__unsafe_size,__temp466v,&__temp467v__);
  if(__temp467v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp468v__);
  bytes=__temp468v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp469v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp469v__;
  __temp470v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp470v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp457v__);
  if(__temp457v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1660v=buffer__unsafe_ptr;
  *__temp1661v=buffer__unsafe_size;
  *__temp1662v=buffer__unsafe_align;
  *__temp1663v=buffer__unsafe_ptr;
  *__temp1664v=buffer__unsafe_size;
  *__temp1665v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1666v, uint64_t* __temp1667v, uint64_t* __temp1668v) {
  char* __temp511v__unsafe_ptr=0;
  uint64_t __temp511v__unsafe_size=0;
  uint64_t __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  uint64_t __temp512v__unsafe_size=0;
  uint64_t __temp512v__unsafe_align=0;
  char* __temp513v__unsafe_ptr=0;
  uint64_t __temp513v__unsafe_size=0;
  uint64_t __temp513v__unsafe_align=0;
  char __temp514v____temp457v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp511v__unsafe_ptr,&__temp511v__unsafe_size,&__temp511v__unsafe_align);
  __temp512v__unsafe_ptr=__temp511v__unsafe_ptr;
  __temp512v__unsafe_size=__temp511v__unsafe_size;
  __temp512v__unsafe_align=__temp511v__unsafe_align;
  __temp_errcode=alloc__temp455v(&__temp512v__unsafe_ptr,&__temp512v__unsafe_size,&__temp512v__unsafe_align,size,&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp513v__unsafe_ptr,&__temp514v____temp457v__);
  if(__temp514v____temp457v__){
  __temp513v__unsafe_size=0;
  __temp513v__unsafe_size=__temp513v__unsafe_size;
  free__temp431v(&__temp513v__unsafe_ptr);
  }
  __temp_return:
  *__temp1666v=__temp513v__unsafe_ptr;
  *__temp1667v=__temp513v__unsafe_size;
  *__temp1668v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1669v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1669v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1670v) {
  *__temp1670v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1671v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1671v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1672v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1672v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1673v, uint64_t* __temp1674v, uint64_t* __temp1675v, char* __temp1676v) {
  goto __temp_return;
  __temp_return:
  *__temp1673v=unsafe_ptr;
  *__temp1674v=dat__pos;
  *__temp1675v=dat__length;
  *__temp1676v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1677v, uint64_t* __temp1678v, uint64_t* __temp1679v, char* __temp1680v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1677v=__temp550v__unsafe_ptr;
  *__temp1678v=__temp550v__dat__pos;
  *__temp1679v=__temp550v__dat__length;
  *__temp1680v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1681v, uint64_t* __temp1682v, uint64_t* __temp1683v, char* __temp1684v) {
  uint64_t __temp576v=0;
  char __temp577v__=0;
  char* __temp578v__=0;
  char __temp579v__value=0;
  char first=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp576v=0;
  neq__temp305v(length,__temp576v,&__temp577v__);
  if(__temp577v__){
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp578v__){
  goto __temp_failure;
  }
  memcpy(&__temp579v__value,__temp578v__,1);
  first=__temp579v__value;
  }
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1681v=__temp580v__unsafe_ptr;
  *__temp1682v=__temp580v__dat__pos;
  *__temp1683v=__temp580v__dat__length;
  *__temp1684v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1685v, uint64_t* __temp1686v, uint64_t* __temp1687v, char* __temp1688v) {
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__unsafe_size=0;
  uint64_t __temp582v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp583v=0;
  char* __temp584v__unsafe_ptr=0;
  uint64_t __temp584v__dat__pos=0;
  uint64_t __temp584v__dat__length=0;
  char __temp584v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp582v__unsafe_ptr,&__temp582v__unsafe_size,&__temp582v__unsafe_align);
  buf__unsafe_ptr=__temp582v__unsafe_ptr;
  buf__unsafe_size=__temp582v__unsafe_size;
  buf__unsafe_align=__temp582v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp583v=0;
  __temp_errcode=str__temp575v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp583v,length,&__temp584v__unsafe_ptr,&__temp584v__dat__pos,&__temp584v__dat__length,&__temp584v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1685v=__temp584v__unsafe_ptr;
  *__temp1686v=__temp584v__dat__pos;
  *__temp1687v=__temp584v__dat__length;
  *__temp1688v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1628v(char** __temp1689v, char** __temp1690v, uint64_t* __temp1691v, uint64_t* __temp1692v, char* __temp1693v) {
  char* f__unsafe_ptr=*__temp1689v;
  char __temp1629v__=0;
  char __temp1630v__=0;
  char* de=0;
  char __temp1631v__=0;
  char __temp1632v__=0;
  const char* dirname=0;
  char* __temp1633v__unsafe_ptr=0;
  uint64_t __temp1633v__dat__pos=0;
  uint64_t __temp1633v__dat__length=0;
  char __temp1633v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp401v(f__unsafe_ptr,&__temp1629v__);
  not__temp21v(__temp1629v__,&__temp1630v__);
  if(__temp1630v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp401v(de,&__temp1631v__);
  not__temp21v(__temp1631v__,&__temp1632v__);
  if(__temp1632v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp581v(dirname,&__temp1633v__unsafe_ptr,&__temp1633v__dat__pos,&__temp1633v__dat__length,&__temp1633v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1689v=f__unsafe_ptr;
  *__temp1690v=__temp1633v__unsafe_ptr;
  *__temp1691v=__temp1633v__dat__pos;
  *__temp1692v=__temp1633v__dat__length;
  *__temp1693v=__temp1633v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp680v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp681v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1634v() {
  char* __temp1636v__unsafe_ptr=0;
  char* __temp1638v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __temp1639v=0;
  char* __temp1640v__unsafe_ptr=0;
  uint64_t __temp1640v__unsafe_size=0;
  uint64_t __temp1640v__unsafe_align=0;
  char __temp1641v____temp514v____temp457v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char __temp1642v=0;
  char* __temp1643v__unsafe_ptr=0;
  uint64_t __temp1643v__dat__pos=0;
  uint64_t __temp1643v__dat__length=0;
  char __temp1643v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1617v(__temp1635v,&__temp1636v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1638v__unsafe_ptr=__temp1636v__unsafe_ptr;
  dir__unsafe_ptr=__temp1638v__unsafe_ptr;
  __temp1639v=128;
  __temp_errcode=alloc__temp508v(__temp1639v,&__temp1640v__unsafe_ptr,&__temp1640v__unsafe_size,&__temp1640v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1640v__unsafe_ptr;
  buf__unsafe_size=__temp1640v__unsafe_size;
  buf__unsafe_align=__temp1640v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1628v(&dir__unsafe_ptr,&__temp1643v__unsafe_ptr,&__temp1643v__dat__pos,&__temp1643v__dat__length,&__temp1643v__dat__first);
  __temp1642v=__temp_complain;
  entry__unsafe_ptr=__temp1643v__unsafe_ptr;
  entry__dat__pos=__temp1643v__dat__pos;
  entry__dat__length=__temp1643v__dat__length;
  entry__dat__first=__temp1643v__dat__first;
  __temp1642v=__temp1642v==0;
  if(!__temp1642v){
  break;
  }
  print__temp680v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:exists__temp401v(__temp1640v__unsafe_ptr,&__temp1641v____temp514v____temp457v__);
  if(__temp1641v____temp514v____temp457v__){
  __temp1640v__unsafe_size=0;
  __temp1640v__unsafe_size=__temp1640v__unsafe_size;
  free__temp431v(&__temp1640v__unsafe_ptr);
  }
  if(__temp1636v__unsafe_ptr){
  closedir((DIR*)__temp1636v__unsafe_ptr);
  __temp1636v__unsafe_ptr=0;
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1634v();return 0;}