#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1671v="./std";
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[47] = {"noerr",
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp653v(const char* other, const char** __temp1681v) {
  goto __temp_return;
  __temp_return:
  *__temp1681v=other;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1682v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1682v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1683v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1683v=z;
}

static inline __attribute__((always_inline)) int read__temp1653v(const char* _path, char** __temp1684v) {
  const char* __temp1654v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1655v__=0;
  char __temp1656v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp653v(_path,&__temp1654v__);
  path=__temp1654v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1655v__);
  not__temp26v(__temp1655v__,&__temp1656v__);
  if(__temp1656v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1684v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1685v, uint64_t* __temp1686v, uint64_t* __temp1687v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1685v=unsafe_ptr;
  *__temp1686v=unsafe_size;
  *__temp1687v=unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1688v) {
  char* allocated=*__temp1688v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1688v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1689v) {
  int value=0;
  *__temp1689v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1690v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1690v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1691v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1691v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1692v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1693v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1694v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1694v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1695v) {
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
  *__temp1695v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1696v, uint64_t* __temp1697v, uint64_t* __temp1698v, uint64_t size, char** __temp1699v, uint64_t* __temp1700v, uint64_t* __temp1701v) {
  char* buffer__unsafe_ptr=*__temp1696v;
  uint64_t buffer__unsafe_size=*__temp1697v;
  uint64_t buffer__unsafe_align=*__temp1698v;
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
  *__temp1696v=buffer__unsafe_ptr;
  *__temp1697v=buffer__unsafe_size;
  *__temp1698v=buffer__unsafe_align;
  *__temp1699v=buffer__unsafe_ptr;
  *__temp1700v=buffer__unsafe_size;
  *__temp1701v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1702v, uint64_t* __temp1703v, uint64_t* __temp1704v) {
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
  char____temp_buffer____buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
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
  *__temp1702v=__temp543v__unsafe_ptr;
  *__temp1703v=__temp543v__unsafe_size;
  *__temp1704v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1705v) {
  *__temp1705v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1706v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1707v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1707v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1708v) {
  *__temp1708v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1709v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1709v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1710v) {
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
  *__temp1710v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1711v, uint64_t* __temp1712v, uint64_t* __temp1713v, char* __temp1714v) {
  goto __temp_return;
  __temp_return:
  *__temp1711v=unsafe_ptr;
  *__temp1712v=dat__pos;
  *__temp1713v=dat__length;
  *__temp1714v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1715v, uint64_t* __temp1716v, uint64_t* __temp1717v, char* __temp1718v) {
  char* unsafe_ptr=0;
  uint64_t __temp580v=0;
  char __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__dat__pos=0;
  uint64_t __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  __temp580v=1;
  neq__temp142v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1715v=__temp582v__unsafe_ptr;
  *__temp1716v=__temp582v__dat__pos;
  *__temp1717v=__temp582v__dat__length;
  *__temp1718v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1719v, uint64_t* __temp1720v, uint64_t* __temp1721v, char* __temp1722v) {
  uint64_t __temp608v=0;
  char __temp609v__=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char first=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp608v=0;
  neq__temp142v(length,__temp608v,&__temp609v__);
  if(__temp609v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  first=__temp611v__value;
  }
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1719v=__temp612v__unsafe_ptr;
  *__temp1720v=__temp612v__dat__pos;
  *__temp1721v=__temp612v__dat__length;
  *__temp1722v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1723v, uint64_t* __temp1724v, uint64_t* __temp1725v, char* __temp1726v) {
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__unsafe_size=0;
  uint64_t __temp614v__unsafe_align=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__unsafe_size=0;
  uint64_t __temp615v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp616v__=0;
  uint64_t length=0;
  uint64_t __temp617v=0;
  uint64_t __temp618v__=0;
  uint64_t __temp619v=0;
  char* __temp620v__unsafe_ptr=0;
  uint64_t __temp620v__dat__pos=0;
  uint64_t __temp620v__dat__length=0;
  char __temp620v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp614v__unsafe_ptr,&__temp614v__unsafe_size,&__temp614v__unsafe_align);
  __temp615v__unsafe_ptr=__temp614v__unsafe_ptr;
  __temp615v__unsafe_size=__temp614v__unsafe_size;
  __temp615v__unsafe_align=__temp614v__unsafe_align;
  buf__unsafe_ptr=__temp615v__unsafe_ptr;
  buf__unsafe_size=__temp615v__unsafe_size;
  buf__unsafe_align=__temp615v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp616v__);
  buf__unsafe_ptr=__temp616v__;
  if(c){
  length=strlen(c);
  }
  __temp617v=1;
  add__temp170v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1723v=__temp620v__unsafe_ptr;
  *__temp1724v=__temp620v__dat__pos;
  *__temp1725v=__temp620v__dat__length;
  *__temp1726v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1664v(char** __temp1727v, char** __temp1728v, uint64_t* __temp1729v, uint64_t* __temp1730v, char* __temp1731v) {
  char* f__unsafe_ptr=*__temp1727v;
  char __temp1665v__=0;
  char __temp1666v__=0;
  char* de=0;
  char __temp1667v__=0;
  char __temp1668v__=0;
  const char* dirname=0;
  char* __temp1669v__unsafe_ptr=0;
  uint64_t __temp1669v__dat__pos=0;
  uint64_t __temp1669v__dat__length=0;
  char __temp1669v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1665v__);
  not__temp26v(__temp1665v__,&__temp1666v__);
  if(__temp1666v__){
  __temp_errcode=45;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1667v__);
  not__temp26v(__temp1667v__,&__temp1668v__);
  if(__temp1668v__){
  __temp_errcode=46;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp613v(dirname,&__temp1669v__unsafe_ptr,&__temp1669v__dat__pos,&__temp1669v__dat__length,&__temp1669v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1727v=f__unsafe_ptr;
  *__temp1728v=__temp1669v__unsafe_ptr;
  *__temp1729v=__temp1669v__dat__pos;
  *__temp1730v=__temp1669v__dat__length;
  *__temp1731v=__temp1669v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp716v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp717v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1670v() {
  char* __temp1672v__unsafe_ptr=0;
  char* __temp1674v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __temp1675v=0;
  char* __temp1676v__unsafe_ptr=0;
  uint64_t __temp1676v__unsafe_size=0;
  uint64_t __temp1676v__unsafe_align=0;
  char __temp1677v____temp544v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char __temp1678v=0;
  char* __temp1679v__unsafe_ptr=0;
  uint64_t __temp1679v__dat__pos=0;
  uint64_t __temp1679v__dat__length=0;
  char __temp1679v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1653v(__temp1671v,&__temp1672v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1674v__unsafe_ptr=__temp1672v__unsafe_ptr;
  dir__unsafe_ptr=__temp1674v__unsafe_ptr;
  __temp1675v=128;
  __temp_errcode=alloc__temp538v(__temp1675v,&__temp1676v__unsafe_ptr,&__temp1676v__unsafe_size,&__temp1676v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1676v__unsafe_ptr;
  buf__unsafe_size=__temp1676v__unsafe_size;
  buf__unsafe_align=__temp1676v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1664v(&dir__unsafe_ptr,&__temp1679v__unsafe_ptr,&__temp1679v__dat__pos,&__temp1679v__dat__length,&__temp1679v__dat__first);
  __temp1678v=__temp_complain;
  entry__unsafe_ptr=__temp1679v__unsafe_ptr;
  entry__dat__pos=__temp1679v__dat__pos;
  entry__dat__length=__temp1679v__dat__length;
  entry__dat__first=__temp1679v__dat__first;
  __temp1678v=__temp1678v==0;
  if(!__temp1678v){
  break;
  }
  print__temp716v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1676v__unsafe_ptr,&__temp1677v____temp544v____temp469v__);
  if(__temp1677v____temp544v____temp469v__){
  __temp1676v__unsafe_size=0;
  __temp1676v__unsafe_size=__temp1676v__unsafe_size;
  free__temp461v(&__temp1676v__unsafe_ptr);
  }
  if(__temp1672v__unsafe_ptr){
  closedir((DIR*)__temp1672v__unsafe_ptr);
  __temp1672v__unsafe_ptr=0;
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1670v();return 0;}