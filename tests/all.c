#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1657v="./smoll ";
const char* const __temp762v="";
const char* const __temp352v="\n";
const char* const __temp1668v=".s";
const char* const __temp1652v="./tests/passing/";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1677v, unsigned long long* __temp1678v, unsigned long long* __temp1679v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1677v=unsafe_ptr;
  *__temp1678v=unsafe_size;
  *__temp1679v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  int __temp351v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1680v) {
  int value=0;
  *__temp1680v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1681v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1681v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1682v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1682v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1683v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1683v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1684v) {
  char* allocated=*__temp1684v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1684v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1685v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1685v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1686v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1686v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1687v) {
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
  *__temp1687v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, unsigned long long size, char** __temp1691v, unsigned long long* __temp1692v, unsigned long long* __temp1693v) {
  char* buffer__unsafe_ptr=*__temp1688v;
  unsigned long long buffer__unsafe_size=*__temp1689v;
  unsigned long long buffer__unsafe_align=*__temp1690v;
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
  *__temp1688v=buffer__unsafe_ptr;
  *__temp1689v=buffer__unsafe_size;
  *__temp1690v=buffer__unsafe_align;
  *__temp1691v=buffer__unsafe_ptr;
  *__temp1692v=buffer__unsafe_size;
  *__temp1693v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v) {
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
  *__temp1694v=__temp515v__unsafe_ptr;
  *__temp1695v=__temp515v__unsafe_size;
  *__temp1696v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp604v(char** __temp1697v, unsigned long long* __temp1698v, unsigned long long* __temp1699v, char** __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v) {
  char* buf__unsafe_ptr=*__temp1697v;
  unsigned long long buf__unsafe_size=*__temp1698v;
  unsigned long long buf__unsafe_align=*__temp1699v;
  unsigned long long __temp605v=0;
  unsigned long long __temp606v=0;
  unsigned long long pos=0;
  __temp605v=0;
  __temp606v=__temp605v;
  pos=__temp606v;
  goto __temp_return;
  __temp_return:
  *__temp1697v=buf__unsafe_ptr;
  *__temp1698v=buf__unsafe_size;
  *__temp1699v=buf__unsafe_align;
  *__temp1700v=buf__unsafe_ptr;
  *__temp1701v=buf__unsafe_size;
  *__temp1702v=buf__unsafe_align;
  *__temp1703v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1704v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1704v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1705v) {
  *__temp1705v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1706v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1706v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1707v) {
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
  *__temp1707v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1708v, unsigned long long* __temp1709v, unsigned long long* __temp1710v, char* __temp1711v) {
  goto __temp_return;
  __temp_return:
  *__temp1708v=unsafe_ptr;
  *__temp1709v=dat__pos;
  *__temp1710v=dat__length;
  *__temp1711v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, char* __temp1715v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1712v=__temp552v__unsafe_ptr;
  *__temp1713v=__temp552v__dat__pos;
  *__temp1714v=__temp552v__dat__length;
  *__temp1715v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, char* __temp1719v) {
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
  *__temp1716v=__temp566v__unsafe_ptr;
  *__temp1717v=__temp566v__dat__pos;
  *__temp1718v=__temp566v__dat__length;
  *__temp1719v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1720v, unsigned long long* __temp1721v, unsigned long long* __temp1722v, char* __temp1723v) {
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
  *__temp1720v=__temp570v__unsafe_ptr;
  *__temp1721v=__temp570v__dat__pos;
  *__temp1722v=__temp570v__dat__length;
  *__temp1723v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp571v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1724v) {
  goto __temp_return;
  __temp_return:
  *__temp1724v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1725v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1725v=z;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1726v) {
  goto __temp_return;
  __temp_return:
  *__temp1726v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1727v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1727v=z;
}

int copy__temp650v(char** __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, const char* _other, char** __temp1732v, unsigned long long* __temp1733v, unsigned long long* __temp1734v, char* __temp1735v) {
  char* buf__unsafe_ptr=*__temp1728v;
  unsigned long long buf__unsafe_size=*__temp1729v;
  unsigned long long buf__unsafe_align=*__temp1730v;
  unsigned long long pos=*__temp1731v;
  char* __temp651v__unsafe_ptr=0;
  unsigned long long __temp651v__dat__pos=0;
  unsigned long long __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp652v__=0;
  unsigned long long __temp653v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp654v__=0;
  char __temp655v__=0;
  unsigned long long __temp656v=0;
  unsigned long long __temp657v__=0;
  unsigned long long prev_pos=0;
  char* __temp658v__unsafe_ptr=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp567v(_other,&__temp651v__unsafe_ptr,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp651v__unsafe_ptr;
  other__dat__pos=__temp651v__dat__pos;
  other__dat__length=__temp651v__dat__length;
  other__dat__first=__temp651v__dat__first;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp652v__);
  add__temp110v(pos,__temp652v__,&__temp653v__);
  next_pos=__temp653v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp654v__);
  gt__temp206v(next_pos,__temp654v__,&__temp655v__);
  if(__temp655v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp656v=0;
  add__temp110v(pos,__temp656v,&__temp657v__);
  prev_pos=__temp657v__;
  pos=next_pos;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp658v__unsafe_ptr,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1728v=buf__unsafe_ptr;
  *__temp1729v=buf__unsafe_size;
  *__temp1730v=buf__unsafe_align;
  *__temp1731v=pos;
  *__temp1732v=__temp658v__unsafe_ptr;
  *__temp1733v=__temp658v__dat__pos;
  *__temp1734v=__temp658v__dat__length;
  *__temp1735v=__temp658v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp603v(const char* other, const char** __temp1736v) {
  goto __temp_return;
  __temp_return:
  *__temp1736v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1737v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1737v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1738v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1738v=z;
}

static inline __attribute__((always_inline)) int read__temp1618v(const char* _path, char** __temp1739v) {
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
  *__temp1739v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1740v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1740v=__temp412v__;
}

static inline __attribute__((always_inline)) int entry__temp1629v(char** __temp1741v, char** __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, char* __temp1745v) {
  char* f__unsafe_ptr=*__temp1741v;
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
  *__temp1741v=f__unsafe_ptr;
  *__temp1742v=__temp1634v__unsafe_ptr;
  *__temp1743v=__temp1634v__dat__pos;
  *__temp1744v=__temp1634v__dat__length;
  *__temp1745v=__temp1634v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp560v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1746v, unsigned long long* __temp1747v, unsigned long long* __temp1748v, char* __temp1749v) {
  goto __temp_return;
  __temp_return:
  *__temp1746v=other__unsafe_ptr;
  *__temp1747v=other__dat__pos;
  *__temp1748v=other__dat__length;
  *__temp1749v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1750v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1750v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1751v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  char __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1751v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp720v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long i, char** __temp1752v) {
  unsigned long long __temp721v__=0;
  char* __temp722v__=0;
  char* unsafe_ptr=0;
  add__temp110v(s__dat__pos,i,&__temp721v__);
  add__temp430v(s__unsafe_ptr,__temp721v__,&__temp722v__);
  unsafe_ptr=__temp722v__;
  goto __temp_return;
  __temp_return:
  *__temp1752v=unsafe_ptr;
}

int slice__temp759v(char* _s__unsafe_ptr, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, char** __temp1753v, unsigned long long* __temp1754v, unsigned long long* __temp1755v, char* __temp1756v) {
  char* __temp760v__unsafe_ptr=0;
  unsigned long long __temp760v__dat__pos=0;
  unsigned long long __temp760v__dat__length=0;
  char __temp760v__dat__first=0;
  char* s__unsafe_ptr=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  char __temp761v__=0;
  char* __temp763v__unsafe_ptr=0;
  unsigned long long __temp763v__dat__pos=0;
  unsigned long long __temp763v__dat__length=0;
  char __temp763v__dat__first=0;
  char __temp764v__=0;
  char __temp765v__=0;
  char __temp766v=0;
  unsigned long long __temp767v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp768v=0;
  char __temp769v__=0;
  char new_first=0;
  char* __temp770v__=0;
  char __temp771v__value=0;
  unsigned long long __temp772v__=0;
  char* __temp773v__unsafe_ptr=0;
  unsigned long long __temp773v__dat__pos=0;
  unsigned long long __temp773v__dat__length=0;
  char __temp773v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp560v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp760v__unsafe_ptr,&__temp760v__dat__pos,&__temp760v__dat__length,&__temp760v__dat__first);
  s__unsafe_ptr=__temp760v__unsafe_ptr;
  s__dat__pos=__temp760v__dat__pos;
  s__dat__length=__temp760v__dat__length;
  s__dat__first=__temp760v__dat__first;
  eq__temp278v(from,to,&__temp761v__);
  if(__temp761v__){
  __temp_errcode=str__temp567v(__temp762v,&__temp763v__unsafe_ptr,&__temp763v__dat__pos,&__temp763v__dat__length,&__temp763v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp182v(from,to,&__temp764v__);
  if(!__temp764v__){
  gt__temp206v(to,s__dat__length,&__temp765v__);
  __temp766v=__temp765v__;
  }
  if(__temp766v){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp330v(to,from,&__temp767v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp767v__;
  __temp768v=0;
  neq__temp302v(from,__temp768v,&__temp769v__);
  if(__temp769v__){
  get__temp720v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp770v__);
  if(!__temp770v__){
  goto __temp_failure;
  }
  memcpy(&__temp771v__value,__temp770v__,1);
  new_first=__temp771v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp110v(s__dat__pos,from,&__temp772v__);
  str__temp547v(s__unsafe_ptr,__temp772v__,new_length,new_first,&__temp773v__unsafe_ptr,&__temp773v__dat__pos,&__temp773v__dat__length,&__temp773v__dat__first);
  __temp763v__unsafe_ptr=__temp773v__unsafe_ptr;
  __temp763v__dat__pos=__temp773v__dat__pos;
  __temp763v__dat__length=__temp773v__dat__length;
  __temp763v__dat__first=__temp773v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1753v=__temp763v__unsafe_ptr;
  *__temp1754v=__temp763v__dat__pos;
  *__temp1755v=__temp763v__dat__length;
  *__temp1756v=__temp763v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp575v(char x, char y, char* __temp1757v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) void eq__temp724v(char* x__unsafe_ptr, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, char* y__unsafe_ptr, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, char* __temp1758v) {
  unsigned long long __temp725v__=0;
  unsigned long long n=0;
  unsigned long long __temp726v__=0;
  char __temp727v__=0;
  char __temp728v=0;
  char __temp729v__=0;
  char __temp730v=0;
  char z=0;
  len__temp571v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp725v__);
  n=__temp725v__;
  len__temp571v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp726v__);
  neq__temp302v(n,__temp726v__,&__temp727v__);
  if(__temp727v__){
  __temp728v=0;
  goto __temp_return;
  }
  neq__temp575v(x__dat__first,y__dat__first,&__temp729v__);
  if(__temp729v__){
  __temp730v=0;
  __temp728v=__temp730v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp728v=z;
  goto __temp_return;
  __temp_return:
  *__temp1758v=__temp728v;
}

static inline __attribute__((always_inline)) int ends_with__temp838v(char* _stack__unsafe_ptr, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1759v) {
  char* __temp839v__unsafe_ptr=0;
  unsigned long long __temp839v__dat__pos=0;
  unsigned long long __temp839v__dat__length=0;
  char __temp839v__dat__first=0;
  char* stack__unsafe_ptr=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp840v__unsafe_ptr=0;
  unsigned long long __temp840v__dat__pos=0;
  unsigned long long __temp840v__dat__length=0;
  char __temp840v__dat__first=0;
  char* needle__unsafe_ptr=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  char __temp841v__=0;
  char __temp842v=0;
  unsigned long long __temp843v__=0;
  unsigned long long n=0;
  unsigned long long __temp844v__=0;
  unsigned long long __temp845v__=0;
  char* __temp846v__unsafe_ptr=0;
  unsigned long long __temp846v__dat__pos=0;
  unsigned long long __temp846v__dat__length=0;
  char __temp846v__dat__first=0;
  char* ret__unsafe_ptr=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  char __temp847v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp560v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp839v__unsafe_ptr,&__temp839v__dat__pos,&__temp839v__dat__length,&__temp839v__dat__first);
  stack__unsafe_ptr=__temp839v__unsafe_ptr;
  stack__dat__pos=__temp839v__dat__pos;
  stack__dat__length=__temp839v__dat__length;
  stack__dat__first=__temp839v__dat__first;
  __temp_errcode=str__temp567v(_needle,&__temp840v__unsafe_ptr,&__temp840v__dat__pos,&__temp840v__dat__length,&__temp840v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp840v__unsafe_ptr;
  needle__dat__pos=__temp840v__dat__pos;
  needle__dat__length=__temp840v__dat__length;
  needle__dat__first=__temp840v__dat__first;
  lt__temp182v(stack__dat__length,needle__dat__length,&__temp841v__);
  if(__temp841v__){
  __temp842v=0;
  goto __temp_return;
  }
  len__temp571v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp843v__);
  n=__temp843v__;
  len__temp571v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp844v__);
  __temp_errcode=sub__temp330v(n,__temp844v__,&__temp845v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp759v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp845v__,n,&__temp846v__unsafe_ptr,&__temp846v__dat__pos,&__temp846v__dat__length,&__temp846v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp846v__unsafe_ptr;
  ret__dat__pos=__temp846v__dat__pos;
  ret__dat__length=__temp846v__dat__length;
  ret__dat__first=__temp846v__dat__first;
  eq__temp724v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp847v__);
  __temp842v=__temp847v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1759v=__temp842v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp659v(char** __temp1760v, unsigned long long* __temp1761v, unsigned long long* __temp1762v, unsigned long long* __temp1763v, char* _other__unsafe_ptr, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1764v, unsigned long long* __temp1765v, unsigned long long* __temp1766v, char* __temp1767v) {
  char* buf__unsafe_ptr=*__temp1760v;
  unsigned long long buf__unsafe_size=*__temp1761v;
  unsigned long long buf__unsafe_align=*__temp1762v;
  unsigned long long pos=*__temp1763v;
  char* __temp660v__unsafe_ptr=0;
  unsigned long long __temp660v__dat__pos=0;
  unsigned long long __temp660v__dat__length=0;
  char __temp660v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp661v__=0;
  unsigned long long __temp662v__=0;
  unsigned long long null_pos=0;
  unsigned long long __temp663v=0;
  unsigned long long __temp664v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp665v__=0;
  char __temp666v__=0;
  unsigned long long __temp667v=0;
  unsigned long long __temp668v__=0;
  unsigned long long prev_pos=0;
  char* __temp669v__unsafe_ptr=0;
  unsigned long long __temp669v__dat__pos=0;
  unsigned long long __temp669v__dat__length=0;
  char __temp669v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp560v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp660v__unsafe_ptr,&__temp660v__dat__pos,&__temp660v__dat__length,&__temp660v__dat__first);
  other__unsafe_ptr=__temp660v__unsafe_ptr;
  other__dat__pos=__temp660v__dat__pos;
  other__dat__length=__temp660v__dat__length;
  other__dat__first=__temp660v__dat__first;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp661v__);
  add__temp110v(pos,__temp661v__,&__temp662v__);
  null_pos=__temp662v__;
  __temp663v=1;
  add__temp110v(null_pos,__temp663v,&__temp664v__);
  next_pos=__temp664v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp665v__);
  gt__temp206v(next_pos,__temp665v__,&__temp666v__);
  if(__temp666v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[null_pos]=0;
  __temp667v=0;
  add__temp110v(pos,__temp667v,&__temp668v__);
  prev_pos=__temp668v__;
  pos=next_pos;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp669v__unsafe_ptr,&__temp669v__dat__pos,&__temp669v__dat__length,&__temp669v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1760v=buf__unsafe_ptr;
  *__temp1761v=buf__unsafe_size;
  *__temp1762v=buf__unsafe_align;
  *__temp1763v=pos;
  *__temp1764v=__temp669v__unsafe_ptr;
  *__temp1765v=__temp669v__dat__pos;
  *__temp1766v=__temp669v__dat__length;
  *__temp1767v=__temp669v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp549v(char* unsafe_ptr, unsigned long long pos, unsigned long long length, char** __temp1768v, unsigned long long* __temp1769v, unsigned long long* __temp1770v, char* __temp1771v) {
  char* first_pos=0;
  char first=0;
  char* __temp550v__unsafe_ptr=0;
  unsigned long long __temp550v__dat__pos=0;
  unsigned long long __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp547v(unsafe_ptr,pos,length,first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1768v=__temp550v__unsafe_ptr;
  *__temp1769v=__temp550v__dat__pos;
  *__temp1770v=__temp550v__dat__length;
  *__temp1771v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int lextend__temp632v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char** __temp1772v, unsigned long long* __temp1773v, unsigned long long* __temp1774v, char* __temp1775v) {
  int __temp633v=0;
  unsigned long long __temp634v=0;
  unsigned long long pos=0;
  char __temp635v__=0;
  unsigned long long __temp636v__=0;
  char __temp637v__=0;
  unsigned long long __temp638v__=0;
  unsigned long long __temp639v__=0;
  char* __temp640v__unsafe_ptr=0;
  unsigned long long __temp640v__dat__pos=0;
  unsigned long long __temp640v__dat__length=0;
  char __temp640v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp634v=0;
  pos=__temp634v;
  eq__temp278v(pos,s__dat__pos,&__temp635v__);
  if(__temp635v__){
  goto __temp_return;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp636v__);
  gt__temp206v(pos,__temp636v__,&__temp637v__);
  if(__temp637v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp638v__);
  __temp_errcode=sub__temp330v(__temp638v__,pos,&__temp639v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__temp549v(s__unsafe_ptr,pos,__temp639v__,&__temp640v__unsafe_ptr,&__temp640v__dat__pos,&__temp640v__dat__length,&__temp640v__dat__first);
  s__unsafe_ptr=__temp640v__unsafe_ptr;
  s__dat__pos=__temp640v__dat__pos;
  s__dat__length=__temp640v__dat__length;
  s__dat__first=__temp640v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1772v=s__unsafe_ptr;
  *__temp1773v=s__dat__pos;
  *__temp1774v=s__dat__length;
  *__temp1775v=s__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp683v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp684v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp590v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1776v, unsigned long long* __temp1777v, unsigned long long* __temp1778v, char* __temp1779v) {
  unsigned long long __temp591v=0;
  unsigned long long __temp592v__=0;
  unsigned long long __temp593v__=0;
  char* __temp594v__unsafe_ptr=0;
  unsigned long long __temp594v__unsafe_size=0;
  unsigned long long __temp594v__unsafe_align=0;
  unsigned long long __temp595v____temp516v____temp438v=0;
  char __temp595v____temp516v____temp439v__=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char* endpos=0;
  unsigned long long __temp596v=0;
  char* __temp597v__unsafe_ptr=0;
  unsigned long long __temp597v__dat__pos=0;
  unsigned long long __temp597v__dat__length=0;
  char __temp597v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp591v=1;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp592v__);
  add__temp110v(__temp591v,__temp592v__,&__temp593v__);
  __temp_errcode=alloc__temp510v(__temp593v__,&__temp594v__unsafe_ptr,&__temp594v__unsafe_size,&__temp594v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp594v__unsafe_ptr;
  buf__unsafe_size=__temp594v__unsafe_size;
  buf__unsafe_align=__temp594v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp596v=0;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp596v,other__dat__length,other__dat__first,&__temp597v__unsafe_ptr,&__temp597v__dat__pos,&__temp597v__dat__length,&__temp597v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1776v=__temp597v__unsafe_ptr;
  *__temp1777v=__temp597v__dat__pos;
  *__temp1778v=__temp597v__dat__length;
  *__temp1779v=__temp597v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp545v(const char* c, char* __temp1780v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1780v=z;
}

int unsafe_temporary_cstr__temp598v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1781v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp599v__unsafe_ptr=0;
  unsigned long long __temp599v__dat__pos=0;
  unsigned long long __temp599v__dat__length=0;
  char __temp599v__dat__first=0;
  unsigned long long __temp600v____temp595v____temp516v____temp438v=0;
  unsigned long long __temp600v____temp594v__unsafe_size=0;
  char __temp600v____temp595v____temp516v____temp439v__=0;
  char* c__unsafe_ptr=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp601v__=0;
  char __temp602v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp590v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp599v__unsafe_ptr,&__temp599v__dat__pos,&__temp599v__dat__length,&__temp599v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp599v__unsafe_ptr;
  c__dat__pos=__temp599v__dat__pos;
  c__dat__length=__temp599v__dat__length;
  c__dat__first=__temp599v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1781v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1782v) {
  long long int z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1782v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1783v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  goto __temp_return;
  __temp_return:
  *__temp1783v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1784v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) int read__temp1192v(char* _cmd__unsafe_ptr, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, char** __temp1785v) {
  const char* __temp1193v__=0;
  char __temp1194v____temp601v__=0;
  char __temp1194v____temp602v__=0;
  unsigned long long __temp1194v____temp600v____temp595v____temp516v____temp438v=0;
  unsigned long long __temp1194v____temp600v____temp594v__unsafe_size=0;
  char __temp1194v____temp600v____temp595v____temp516v____temp439v__=0;
  char* __temp1194v____temp599v__unsafe_ptr=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1195v__=0;
  char __temp1196v__=0;
  char __temp1197v__=0;
  long long int status=0;
  unsigned long long __temp1198v=0;
  long long int __temp1199v__=0;
  char __temp1200v__=0;
  char __temp1201v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp598v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1193v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1193v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp398v(unsafe_ptr,&__temp1195v__);
  not__temp18v(__temp1195v__,&__temp1196v__);
  if(__temp1196v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1785v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1184v(long long int value, const char** __temp1786v) {
  int __temp1185v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp352v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1786v=ret;
}

static inline __attribute__((always_inline)) int run__temp1643v(char* command__unsafe_ptr, unsigned long long command__dat__pos, unsigned long long command__dat__length, char command__dat__first) {
  char* __temp1644v__unsafe_ptr=0;
  char __temp1645v____temp1197v__=0;
  long long int __temp1645v__status=0;
  unsigned long long __temp1645v____temp1198v=0;
  long long int __temp1645v____temp1199v__=0;
  char __temp1645v____temp1200v__=0;
  char __temp1645v____temp1201v=0;
  char* __temp1646v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1647v=0;
  long long int __temp1648v=0;
  long long int error=0;
  const char* __temp1649v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1192v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1644v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1646v__unsafe_ptr=__temp1644v__unsafe_ptr;
  proc__unsafe_ptr=__temp1646v__unsafe_ptr;
  exists__temp398v(__temp1644v__unsafe_ptr,&__temp1645v____temp1197v__);
  if(__temp1645v____temp1197v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1644v__unsafe_ptr)){
  }
  __temp1645v__status=pclose((FILE*)__temp1644v__unsafe_ptr);
  __temp1644v__unsafe_ptr=0;
  }
  __temp1645v____temp1198v=0;
  int__temp382v(__temp1645v____temp1198v,&__temp1645v____temp1199v__);
  neq__temp291v(__temp1645v__status,__temp1645v____temp1199v__,&__temp1645v____temp1200v__);
  if(__temp1645v____temp1200v__){
  __temp_complain=28;
  __temp1645v____temp1201v=__temp1645v____temp1201v==0;
  }
  __temp1648v=__temp_complain;
  __temp1647v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1648v;
  __temp1647v=__temp1647v==0;
  if(__temp1647v){
  cstr__temp1184v(error,&__temp1649v__);
  print__temp350v(__temp1649v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1651v() {
  const char* path=0;
  unsigned long long __temp1653v=0;
  unsigned long long max_command_length=0;
  char* __temp1654v__unsafe_ptr=0;
  unsigned long long __temp1654v__unsafe_size=0;
  unsigned long long __temp1654v__unsafe_align=0;
  unsigned long long __temp1655v____temp516v____temp438v=0;
  char __temp1655v____temp516v____temp439v__=0;
  char* __temp1656v__buf__unsafe_ptr=0;
  unsigned long long __temp1656v__buf__unsafe_size=0;
  unsigned long long __temp1656v__buf__unsafe_align=0;
  unsigned long long __temp1656v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  char* __temp1658v__unsafe_ptr=0;
  unsigned long long __temp1658v__dat__pos=0;
  unsigned long long __temp1658v__dat__length=0;
  char __temp1658v__dat__first=0;
  char* __temp1659v__unsafe_ptr=0;
  unsigned long long __temp1659v__dat__pos=0;
  unsigned long long __temp1659v__dat__length=0;
  char __temp1659v__dat__first=0;
  char* __temp1660v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  unsigned long long __temp1662v=0;
  unsigned long long __temp1663v__=0;
  char* __temp1664v__unsafe_ptr=0;
  unsigned long long __temp1664v__unsafe_size=0;
  unsigned long long __temp1664v__unsafe_align=0;
  unsigned long long __temp1665v____temp516v____temp438v=0;
  char __temp1665v____temp516v____temp439v__=0;
  char* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  char __temp1666v=0;
  char* __temp1667v__unsafe_ptr=0;
  unsigned long long __temp1667v__dat__pos=0;
  unsigned long long __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  char* entry__unsafe_ptr=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1669v__=0;
  char __temp1670v__=0;
  char* __temp1671v__buf__unsafe_ptr=0;
  unsigned long long __temp1671v__buf__unsafe_size=0;
  unsigned long long __temp1671v__buf__unsafe_align=0;
  unsigned long long __temp1671v__pos=0;
  char* __temp1672v__unsafe_ptr=0;
  unsigned long long __temp1672v__dat__pos=0;
  unsigned long long __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  char* __temp1673v__unsafe_ptr=0;
  unsigned long long __temp1673v__dat__pos=0;
  unsigned long long __temp1673v__dat__length=0;
  char __temp1673v__dat__first=0;
  char* __temp1674v__unsafe_ptr=0;
  unsigned long long __temp1674v__dat__pos=0;
  unsigned long long __temp1674v__dat__length=0;
  char __temp1674v__dat__first=0;
  char* command__unsafe_ptr=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1652v;
  __temp1653v=50;
  max_command_length=__temp1653v;
  __temp_errcode=alloc__temp510v(max_command_length,&__temp1654v__unsafe_ptr,&__temp1654v__unsafe_size,&__temp1654v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp604v(&__temp1654v__unsafe_ptr,&__temp1654v__unsafe_size,&__temp1654v__unsafe_align,&__temp1656v__buf__unsafe_ptr,&__temp1656v__buf__unsafe_size,&__temp1656v__buf__unsafe_align,&__temp1656v__pos);
  bp__buf__unsafe_ptr=__temp1656v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1656v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1656v__buf__unsafe_align;
  bp__pos=__temp1656v__pos;
  __temp_errcode=copy__temp650v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1657v,&__temp1658v__unsafe_ptr,&__temp1658v__dat__pos,&__temp1658v__dat__length,&__temp1658v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp650v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1659v__unsafe_ptr,&__temp1659v__dat__pos,&__temp1659v__dat__length,&__temp1659v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1618v(path,&__temp1660v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1660v__unsafe_ptr;
  __temp1662v=4;
  KB__temp410v(__temp1662v,&__temp1663v__);
  __temp_errcode=alloc__temp510v(__temp1663v__,&__temp1664v__unsafe_ptr,&__temp1664v__unsafe_size,&__temp1664v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1664v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1664v__unsafe_size;
  proc_buf__unsafe_align=__temp1664v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1629v(&test_dir__unsafe_ptr,&__temp1667v__unsafe_ptr,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  __temp1666v=__temp_complain;
  entry__unsafe_ptr=__temp1667v__unsafe_ptr;
  entry__dat__pos=__temp1667v__dat__pos;
  entry__dat__length=__temp1667v__dat__length;
  entry__dat__first=__temp1667v__dat__first;
  __temp1666v=__temp1666v==0;
  if(!__temp1666v){
  break;
  }
  __temp_errcode=ends_with__temp838v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1668v,&__temp1669v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1669v__,&__temp1670v__);
  if(__temp1670v__){
  continue;
  }
  __temp1671v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1671v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1671v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1671v__pos=bp__pos;
  str__temp560v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1672v__unsafe_ptr,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  __temp_errcode=copy_null_terminated__temp659v(&__temp1671v__buf__unsafe_ptr,&__temp1671v__buf__unsafe_size,&__temp1671v__buf__unsafe_align,&__temp1671v__pos,__temp1672v__unsafe_ptr,__temp1672v__dat__pos,__temp1672v__dat__length,__temp1672v__dat__first,&__temp1673v__unsafe_ptr,&__temp1673v__dat__pos,&__temp1673v__dat__length,&__temp1673v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp632v(__temp1673v__unsafe_ptr,__temp1673v__dat__pos,__temp1673v__dat__length,__temp1673v__dat__first,&__temp1674v__unsafe_ptr,&__temp1674v__dat__pos,&__temp1674v__dat__length,&__temp1674v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1674v__unsafe_ptr;
  command__dat__pos=__temp1674v__dat__pos;
  command__dat__length=__temp1674v__dat__length;
  command__dat__first=__temp1674v__dat__first;
  print__temp683v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1643v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1651v();return 0;}