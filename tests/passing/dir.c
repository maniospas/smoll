#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1668v="./std";
const char* const __temp364v="\n";
static const char* __temp_all_errcodes[46] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp650v(const char* other, const char** __temp1678v) {
  goto __temp_return;
  __temp_return:
  *__temp1678v=other;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1679v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1679v=z;
}

static inline __attribute__((always_inline)) void not__temp25v(char value, char* __temp1680v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) int read__temp1650v(const char* _path, char** __temp1681v) {
  const char* __temp1651v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1652v__=0;
  char __temp1653v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp650v(_path,&__temp1651v__);
  path=__temp1651v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp411v(unsafe_ptr,&__temp1652v__);
  not__temp25v(__temp1652v__,&__temp1653v__);
  if(__temp1653v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1681v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1682v, uint64_t* __temp1683v, uint64_t* __temp1684v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1682v=unsafe_ptr;
  *__temp1683v=unsafe_size;
  *__temp1684v=unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1685v) {
  char* allocated=*__temp1685v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1685v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1686v) {
  int value=0;
  *__temp1686v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1687v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1687v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1688v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1688v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1689v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1689v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1690v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1690v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1691v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1692v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1692v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1693v, uint64_t* __temp1694v, uint64_t* __temp1695v, uint64_t size, char** __temp1696v, uint64_t* __temp1697v, uint64_t* __temp1698v) {
  char* buffer__unsafe_ptr=*__temp1693v;
  uint64_t buffer__unsafe_size=*__temp1694v;
  uint64_t buffer__unsafe_align=*__temp1695v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1693v=buffer__unsafe_ptr;
  *__temp1694v=buffer__unsafe_size;
  *__temp1695v=buffer__unsafe_align;
  *__temp1696v=buffer__unsafe_ptr;
  *__temp1697v=buffer__unsafe_size;
  *__temp1698v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp537v(uint64_t size, char** __temp1699v, uint64_t* __temp1700v, uint64_t* __temp1701v) {
  char* __temp540v__unsafe_ptr=0;
  uint64_t __temp540v__unsafe_size=0;
  uint64_t __temp540v__unsafe_align=0;
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char __temp543v____temp468v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp540v__unsafe_ptr,&__temp540v__unsafe_size,&__temp540v__unsafe_align);
  __temp541v__unsafe_ptr=__temp540v__unsafe_ptr;
  __temp541v__unsafe_size=__temp540v__unsafe_size;
  __temp541v__unsafe_align=__temp540v__unsafe_align;
  __temp_errcode=alloc__temp466v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align,size,&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp542v__unsafe_ptr,&__temp543v____temp468v__);
  if(__temp543v____temp468v__){
  __temp542v__unsafe_size=0;
  __temp542v__unsafe_size=__temp542v__unsafe_size;
  free__temp460v(&__temp542v__unsafe_ptr);
  }
  __temp_return:
  *__temp1699v=__temp542v__unsafe_ptr;
  *__temp1700v=__temp542v__unsafe_size;
  *__temp1701v=__temp542v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1702v) {
  *__temp1702v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1703v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1703v=z;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1704v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1704v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1705v) {
  *__temp1705v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1706v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1706v=__temp463v__;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1707v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1707v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1708v, uint64_t* __temp1709v, uint64_t* __temp1710v, char* __temp1711v) {
  goto __temp_return;
  __temp_return:
  *__temp1708v=unsafe_ptr;
  *__temp1709v=dat__pos;
  *__temp1710v=dat__length;
  *__temp1711v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1712v, uint64_t* __temp1713v, uint64_t* __temp1714v, char* __temp1715v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1712v=__temp579v__unsafe_ptr;
  *__temp1713v=__temp579v__dat__pos;
  *__temp1714v=__temp579v__dat__length;
  *__temp1715v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1716v, uint64_t* __temp1717v, uint64_t* __temp1718v, char* __temp1719v) {
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__=0;
  char __temp608v__value=0;
  char first=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__dat__pos=0;
  uint64_t __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=0;
  neq__temp141v(length,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp607v__){
  goto __temp_failure;
  }
  memcpy(&__temp608v__value,__temp607v__,1);
  first=__temp608v__value;
  }
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp609v__unsafe_ptr,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1716v=__temp609v__unsafe_ptr;
  *__temp1717v=__temp609v__dat__pos;
  *__temp1718v=__temp609v__dat__length;
  *__temp1719v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1720v, uint64_t* __temp1721v, uint64_t* __temp1722v, char* __temp1723v) {
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__unsafe_size=0;
  uint64_t __temp611v__unsafe_align=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp613v__=0;
  uint64_t length=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v__=0;
  uint64_t __temp616v=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp611v__unsafe_ptr,&__temp611v__unsafe_size,&__temp611v__unsafe_align);
  __temp612v__unsafe_ptr=__temp611v__unsafe_ptr;
  __temp612v__unsafe_size=__temp611v__unsafe_size;
  __temp612v__unsafe_align=__temp611v__unsafe_align;
  buf__unsafe_ptr=__temp612v__unsafe_ptr;
  buf__unsafe_size=__temp612v__unsafe_size;
  buf__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp20v(buf__unsafe_ptr,c,&__temp613v__);
  buf__unsafe_ptr=__temp613v__;
  if(c){
  length=strlen(c);
  }
  __temp614v=1;
  add__temp169v(length,__temp614v,&__temp615v__);
  buf__unsafe_size=__temp615v__;
  __temp616v=0;
  __temp_errcode=str__temp604v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp616v,length,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1720v=__temp617v__unsafe_ptr;
  *__temp1721v=__temp617v__dat__pos;
  *__temp1722v=__temp617v__dat__length;
  *__temp1723v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1661v(char** __temp1724v, char** __temp1725v, uint64_t* __temp1726v, uint64_t* __temp1727v, char* __temp1728v) {
  char* f__unsafe_ptr=*__temp1724v;
  char __temp1662v__=0;
  char __temp1663v__=0;
  char* de=0;
  char __temp1664v__=0;
  char __temp1665v__=0;
  const char* dirname=0;
  char* __temp1666v__unsafe_ptr=0;
  uint64_t __temp1666v__dat__pos=0;
  uint64_t __temp1666v__dat__length=0;
  char __temp1666v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp411v(f__unsafe_ptr,&__temp1662v__);
  not__temp25v(__temp1662v__,&__temp1663v__);
  if(__temp1663v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp411v(de,&__temp1664v__);
  not__temp25v(__temp1664v__,&__temp1665v__);
  if(__temp1665v__){
  __temp_errcode=45;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp610v(dirname,&__temp1666v__unsafe_ptr,&__temp1666v__dat__pos,&__temp1666v__dat__length,&__temp1666v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1724v=f__unsafe_ptr;
  *__temp1725v=__temp1666v__unsafe_ptr;
  *__temp1726v=__temp1666v__dat__pos;
  *__temp1727v=__temp1666v__dat__length;
  *__temp1728v=__temp1666v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp715v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp716v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1667v() {
  char* __temp1669v__unsafe_ptr=0;
  char* __temp1671v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __temp1672v=0;
  char* __temp1673v__unsafe_ptr=0;
  uint64_t __temp1673v__unsafe_size=0;
  uint64_t __temp1673v__unsafe_align=0;
  char __temp1674v____temp543v____temp468v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char __temp1675v=0;
  char* __temp1676v__unsafe_ptr=0;
  uint64_t __temp1676v__dat__pos=0;
  uint64_t __temp1676v__dat__length=0;
  char __temp1676v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1650v(__temp1668v,&__temp1669v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1671v__unsafe_ptr=__temp1669v__unsafe_ptr;
  dir__unsafe_ptr=__temp1671v__unsafe_ptr;
  __temp1672v=128;
  __temp_errcode=alloc__temp537v(__temp1672v,&__temp1673v__unsafe_ptr,&__temp1673v__unsafe_size,&__temp1673v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1673v__unsafe_ptr;
  buf__unsafe_size=__temp1673v__unsafe_size;
  buf__unsafe_align=__temp1673v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1661v(&dir__unsafe_ptr,&__temp1676v__unsafe_ptr,&__temp1676v__dat__pos,&__temp1676v__dat__length,&__temp1676v__dat__first);
  __temp1675v=__temp_complain;
  entry__unsafe_ptr=__temp1676v__unsafe_ptr;
  entry__dat__pos=__temp1676v__dat__pos;
  entry__dat__length=__temp1676v__dat__length;
  entry__dat__first=__temp1676v__dat__first;
  __temp1675v=__temp1675v==0;
  if(!__temp1675v){
  break;
  }
  print__temp715v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:exists__temp411v(__temp1673v__unsafe_ptr,&__temp1674v____temp543v____temp468v__);
  if(__temp1674v____temp543v____temp468v__){
  __temp1673v__unsafe_size=0;
  __temp1673v__unsafe_size=__temp1673v__unsafe_size;
  free__temp460v(&__temp1673v__unsafe_ptr);
  }
  if(__temp1669v__unsafe_ptr){
  closedir((DIR*)__temp1669v__unsafe_ptr);
  __temp1669v__unsafe_ptr=0;
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1667v();return 0;}