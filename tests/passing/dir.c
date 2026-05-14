#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1669v="./std";
const char* const __temp363v="\n";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp651v(const char* other, const char** __temp1679v) {
  goto __temp_return;
  __temp_return:
  *__temp1679v=other;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1680v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1681v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1681v=z;
}

static inline __attribute__((always_inline)) int read__temp1651v(const char* _path, char** __temp1682v) {
  const char* __temp1652v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1653v__=0;
  char __temp1654v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp651v(_path,&__temp1652v__);
  path=__temp1652v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1653v__);
  not__temp26v(__temp1653v__,&__temp1654v__);
  if(__temp1654v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1682v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1683v, uint64_t* __temp1684v, uint64_t* __temp1685v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1683v=unsafe_ptr;
  *__temp1684v=unsafe_size;
  *__temp1685v=unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1686v) {
  char* allocated=*__temp1686v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1686v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1687v) {
  int value=0;
  *__temp1687v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1688v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1688v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1689v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1689v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1690v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1690v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1691v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1692v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1693v) {
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
  *__temp1693v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1694v, uint64_t* __temp1695v, uint64_t* __temp1696v, uint64_t size, char** __temp1697v, uint64_t* __temp1698v, uint64_t* __temp1699v) {
  char* buffer__unsafe_ptr=*__temp1694v;
  uint64_t buffer__unsafe_size=*__temp1695v;
  uint64_t buffer__unsafe_align=*__temp1696v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1694v=buffer__unsafe_ptr;
  *__temp1695v=buffer__unsafe_size;
  *__temp1696v=buffer__unsafe_align;
  *__temp1697v=buffer__unsafe_ptr;
  *__temp1698v=buffer__unsafe_size;
  *__temp1699v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1700v, uint64_t* __temp1701v, uint64_t* __temp1702v) {
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char* __temp543v__unsafe_ptr=0;
  uint64_t __temp543v__unsafe_size=0;
  uint64_t __temp543v__unsafe_align=0;
  char __temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  __temp542v__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp542v__unsafe_size=__temp541v__unsafe_size;
  __temp542v__unsafe_align=__temp541v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align,size,&__temp543v__unsafe_ptr,&__temp543v__unsafe_size,&__temp543v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp543v__unsafe_ptr,&__temp544v____temp469v__);
  if(__temp544v____temp469v__){
  __temp543v__unsafe_size=0;
  __temp543v__unsafe_size=__temp543v__unsafe_size;
  free__temp461v(&__temp543v__unsafe_ptr);
  }
  __temp_return:
  *__temp1700v=__temp543v__unsafe_ptr;
  *__temp1701v=__temp543v__unsafe_size;
  *__temp1702v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1703v) {
  *__temp1703v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1704v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1704v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1705v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1705v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1706v) {
  *__temp1706v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1707v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1707v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1708v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1708v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1709v, uint64_t* __temp1710v, uint64_t* __temp1711v, char* __temp1712v) {
  goto __temp_return;
  __temp_return:
  *__temp1709v=unsafe_ptr;
  *__temp1710v=dat__pos;
  *__temp1711v=dat__length;
  *__temp1712v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1713v, uint64_t* __temp1714v, uint64_t* __temp1715v, char* __temp1716v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1713v=__temp580v__unsafe_ptr;
  *__temp1714v=__temp580v__dat__pos;
  *__temp1715v=__temp580v__dat__length;
  *__temp1716v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1717v, uint64_t* __temp1718v, uint64_t* __temp1719v, char* __temp1720v) {
  uint64_t __temp606v=0;
  char __temp607v__=0;
  char* __temp608v__=0;
  char __temp609v__value=0;
  char first=0;
  char* __temp610v__unsafe_ptr=0;
  uint64_t __temp610v__dat__pos=0;
  uint64_t __temp610v__dat__length=0;
  char __temp610v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp606v=0;
  neq__temp142v(length,__temp606v,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp608v__){
  goto __temp_failure;
  }
  memcpy(&__temp609v__value,__temp608v__,1);
  first=__temp609v__value;
  }
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp610v__unsafe_ptr,&__temp610v__dat__pos,&__temp610v__dat__length,&__temp610v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1717v=__temp610v__unsafe_ptr;
  *__temp1718v=__temp610v__dat__pos;
  *__temp1719v=__temp610v__dat__length;
  *__temp1720v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1721v, uint64_t* __temp1722v, uint64_t* __temp1723v, char* __temp1724v) {
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* __temp613v__unsafe_ptr=0;
  uint64_t __temp613v__unsafe_size=0;
  uint64_t __temp613v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp614v__=0;
  uint64_t length=0;
  uint64_t __temp615v=0;
  uint64_t __temp616v__=0;
  uint64_t __temp617v=0;
  char* __temp618v__unsafe_ptr=0;
  uint64_t __temp618v__dat__pos=0;
  uint64_t __temp618v__dat__length=0;
  char __temp618v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp612v__unsafe_ptr,&__temp612v__unsafe_size,&__temp612v__unsafe_align);
  __temp613v__unsafe_ptr=__temp612v__unsafe_ptr;
  __temp613v__unsafe_size=__temp612v__unsafe_size;
  __temp613v__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=__temp613v__unsafe_ptr;
  buf__unsafe_size=__temp613v__unsafe_size;
  buf__unsafe_align=__temp613v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp614v__);
  buf__unsafe_ptr=__temp614v__;
  if(c){
  length=strlen(c);
  }
  __temp615v=1;
  add__temp170v(length,__temp615v,&__temp616v__);
  buf__unsafe_size=__temp616v__;
  __temp617v=0;
  __temp_errcode=str__temp605v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp617v,length,&__temp618v__unsafe_ptr,&__temp618v__dat__pos,&__temp618v__dat__length,&__temp618v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1721v=__temp618v__unsafe_ptr;
  *__temp1722v=__temp618v__dat__pos;
  *__temp1723v=__temp618v__dat__length;
  *__temp1724v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1662v(char** __temp1725v, char** __temp1726v, uint64_t* __temp1727v, uint64_t* __temp1728v, char* __temp1729v) {
  char* f__unsafe_ptr=*__temp1725v;
  char __temp1663v__=0;
  char __temp1664v__=0;
  char* de=0;
  char __temp1665v__=0;
  char __temp1666v__=0;
  const char* dirname=0;
  char* __temp1667v__unsafe_ptr=0;
  uint64_t __temp1667v__dat__pos=0;
  uint64_t __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1663v__);
  not__temp26v(__temp1663v__,&__temp1664v__);
  if(__temp1664v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1665v__);
  not__temp26v(__temp1665v__,&__temp1666v__);
  if(__temp1666v__){
  __temp_errcode=45;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp611v(dirname,&__temp1667v__unsafe_ptr,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1725v=f__unsafe_ptr;
  *__temp1726v=__temp1667v__unsafe_ptr;
  *__temp1727v=__temp1667v__dat__pos;
  *__temp1728v=__temp1667v__dat__length;
  *__temp1729v=__temp1667v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1668v() {
  char* __temp1670v__unsafe_ptr=0;
  char* __temp1672v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __temp1673v=0;
  char* __temp1674v__unsafe_ptr=0;
  uint64_t __temp1674v__unsafe_size=0;
  uint64_t __temp1674v__unsafe_align=0;
  char __temp1675v____temp544v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char __temp1676v=0;
  char* __temp1677v__unsafe_ptr=0;
  uint64_t __temp1677v__dat__pos=0;
  uint64_t __temp1677v__dat__length=0;
  char __temp1677v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1651v(__temp1669v,&__temp1670v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1672v__unsafe_ptr=__temp1670v__unsafe_ptr;
  dir__unsafe_ptr=__temp1672v__unsafe_ptr;
  __temp1673v=128;
  __temp_errcode=alloc__temp538v(__temp1673v,&__temp1674v__unsafe_ptr,&__temp1674v__unsafe_size,&__temp1674v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1674v__unsafe_ptr;
  buf__unsafe_size=__temp1674v__unsafe_size;
  buf__unsafe_align=__temp1674v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1662v(&dir__unsafe_ptr,&__temp1677v__unsafe_ptr,&__temp1677v__dat__pos,&__temp1677v__dat__length,&__temp1677v__dat__first);
  __temp1676v=__temp_complain;
  entry__unsafe_ptr=__temp1677v__unsafe_ptr;
  entry__dat__pos=__temp1677v__dat__pos;
  entry__dat__length=__temp1677v__dat__length;
  entry__dat__first=__temp1677v__dat__first;
  __temp1676v=__temp1676v==0;
  if(!__temp1676v){
  break;
  }
  print__temp714v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1674v__unsafe_ptr,&__temp1675v____temp544v____temp469v__);
  if(__temp1675v____temp544v____temp469v__){
  __temp1674v__unsafe_size=0;
  __temp1674v__unsafe_size=__temp1674v__unsafe_size;
  free__temp461v(&__temp1674v__unsafe_ptr);
  }
  if(__temp1670v__unsafe_ptr){
  closedir((DIR*)__temp1670v__unsafe_ptr);
  __temp1670v__unsafe_ptr=0;
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1668v();return 0;}