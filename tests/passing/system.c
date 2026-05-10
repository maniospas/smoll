#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1660v="ls";
const char* const __temp581v="";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1664v, unsigned long long* __temp1665v, unsigned long long* __temp1666v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1664v=unsafe_ptr;
  *__temp1665v=unsafe_size;
  *__temp1666v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1667v) {
  int value=0;
  *__temp1667v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1668v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1668v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1669v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1669v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1670v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1670v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1671v) {
  char* allocated=*__temp1671v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1671v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1672v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1672v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1673v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1673v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1674v) {
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
  *__temp1674v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v, unsigned long long size, char** __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v) {
  char* buffer__unsafe_ptr=*__temp1675v;
  unsigned long long buffer__unsafe_size=*__temp1676v;
  unsigned long long buffer__unsafe_align=*__temp1677v;
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
  *__temp1675v=buffer__unsafe_ptr;
  *__temp1676v=buffer__unsafe_size;
  *__temp1677v=buffer__unsafe_align;
  *__temp1678v=buffer__unsafe_ptr;
  *__temp1679v=buffer__unsafe_size;
  *__temp1680v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, char** __temp1685v, unsigned long long* __temp1686v, unsigned long long* __temp1687v) {
  char* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  char* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  char* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1683v=0;
  char __temp1684v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  __temp491v__unsafe_ptr=__temp490v__unsafe_ptr;
  __temp491v__unsafe_size=__temp490v__unsafe_size;
  __temp491v__unsafe_align=__temp490v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align,size,&__temp492v__unsafe_ptr,&__temp492v__unsafe_size,&__temp492v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1685v=__temp492v__unsafe_ptr;
  *__temp1686v=__temp492v__unsafe_size;
  *__temp1687v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1688v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1688v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1689v) {
  *__temp1689v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1690v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1690v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1691v) {
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
  *__temp1691v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp524v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, char* __temp1697v) {
  *__temp1692v=buf__unsafe_ptr;
  *__temp1693v=buf__unsafe_size;
  *__temp1694v=buf__unsafe_align;
  *__temp1695v=dat__pos;
  *__temp1696v=dat__length;
  *__temp1697v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp534v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v, char* __temp1703v) {
  unsigned long long __temp535v=0;
  char __temp536v__=0;
  char* __temp537v__=0;
  char __temp538v__value=0;
  char first=0;
  char* __temp539v__buf__unsafe_ptr=0;
  unsigned long long __temp539v__buf__unsafe_size=0;
  unsigned long long __temp539v__buf__unsafe_align=0;
  unsigned long long __temp539v__dat__pos=0;
  unsigned long long __temp539v__dat__length=0;
  char __temp539v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp535v=0;
  neq__temp302v(length,__temp535v,&__temp536v__);
  if(__temp536v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp537v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp537v__){
  goto __temp_failure;
  }
  memcpy(&__temp538v__value,__temp537v__,1);
  first=__temp538v__value;
  }
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp539v__buf__unsafe_ptr,&__temp539v__buf__unsafe_size,&__temp539v__buf__unsafe_align,&__temp539v__dat__pos,&__temp539v__dat__length,&__temp539v__dat__first);
  *__temp1698v=__temp539v__buf__unsafe_ptr;
  *__temp1699v=__temp539v__buf__unsafe_size;
  *__temp1700v=__temp539v__buf__unsafe_align;
  *__temp1701v=__temp539v__dat__pos;
  *__temp1702v=__temp539v__dat__length;
  *__temp1703v=__temp539v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp540v(const char* c, char** __temp1705v, unsigned long long* __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v, unsigned long long* __temp1709v, char* __temp1710v) {
  char* __temp541v__unsafe_ptr=0;
  unsigned long long __temp541v__unsafe_size=0;
  unsigned long long __temp541v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp542v=0;
  char* __temp543v__buf__unsafe_ptr=0;
  unsigned long long __temp543v__buf__unsafe_size=0;
  unsigned long long __temp543v__buf__unsafe_align=0;
  unsigned long long __temp543v__dat__pos=0;
  unsigned long long __temp543v__dat__length=0;
  char __temp543v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  buf__unsafe_ptr=__temp541v__unsafe_ptr;
  buf__unsafe_size=__temp541v__unsafe_size;
  buf__unsafe_align=__temp541v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp542v=0;
  __temp_errcode=str__temp534v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp542v,length,&__temp543v__buf__unsafe_ptr,&__temp543v__buf__unsafe_size,&__temp543v__buf__unsafe_align,&__temp543v__dat__pos,&__temp543v__dat__length,&__temp543v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1705v=__temp543v__buf__unsafe_ptr;
  *__temp1706v=__temp543v__buf__unsafe_size;
  *__temp1707v=__temp543v__buf__unsafe_align;
  *__temp1708v=__temp543v__dat__pos;
  *__temp1709v=__temp543v__dat__length;
  *__temp1710v=__temp543v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp533v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1711v, unsigned long long* __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, char* __temp1716v) {
  *__temp1711v=other__buf__unsafe_ptr;
  *__temp1712v=other__buf__unsafe_size;
  *__temp1713v=other__buf__unsafe_align;
  *__temp1714v=other__dat__pos;
  *__temp1715v=other__dat__length;
  *__temp1716v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp544v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1717v) {
  *__temp1717v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1718v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1718v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1719v) {
  *__temp1719v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1720v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1720v=z;
}

static inline __attribute__((always_inline)) int copy__temp656v(char** __temp1723v, unsigned long long* __temp1724v, unsigned long long* __temp1725v, unsigned long long* __temp1726v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, char* __temp1732v) {
  char* buf__unsafe_ptr=*__temp1723v;
  unsigned long long buf__unsafe_size=*__temp1724v;
  unsigned long long buf__unsafe_align=*__temp1725v;
  unsigned long long pos=*__temp1726v;
  char* __temp657v__buf__unsafe_ptr=0;
  unsigned long long __temp657v__buf__unsafe_size=0;
  unsigned long long __temp657v__buf__unsafe_align=0;
  unsigned long long __temp657v__dat__pos=0;
  unsigned long long __temp657v__dat__length=0;
  char __temp657v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp658v__=0;
  unsigned long long __temp659v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp660v__=0;
  char __temp661v__=0;
  unsigned long long __temp662v=0;
  unsigned long long __temp663v__=0;
  unsigned long long prev_pos=0;
  char* __temp664v__buf__unsafe_ptr=0;
  unsigned long long __temp664v__buf__unsafe_size=0;
  unsigned long long __temp664v__buf__unsafe_align=0;
  unsigned long long __temp664v__dat__pos=0;
  unsigned long long __temp664v__dat__length=0;
  char __temp664v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp533v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp657v__buf__unsafe_ptr,&__temp657v__buf__unsafe_size,&__temp657v__buf__unsafe_align,&__temp657v__dat__pos,&__temp657v__dat__length,&__temp657v__dat__first);
  other__buf__unsafe_ptr=__temp657v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp657v__buf__unsafe_size;
  other__buf__unsafe_align=__temp657v__buf__unsafe_align;
  other__dat__pos=__temp657v__dat__pos;
  other__dat__length=__temp657v__dat__length;
  other__dat__first=__temp657v__dat__first;
  len__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp658v__);
  add__temp110v(pos,__temp658v__,&__temp659v__);
  next_pos=__temp659v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp660v__);
  gt__temp206v(next_pos,__temp660v__,&__temp661v__);
  if(__temp661v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp662v=0;
  add__temp110v(pos,__temp662v,&__temp663v__);
  prev_pos=__temp663v__;
  pos=next_pos;
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp664v__buf__unsafe_ptr,&__temp664v__buf__unsafe_size,&__temp664v__buf__unsafe_align,&__temp664v__dat__pos,&__temp664v__dat__length,&__temp664v__dat__first);
  *__temp1723v=buf__unsafe_ptr;
  *__temp1724v=buf__unsafe_size;
  *__temp1725v=buf__unsafe_align;
  *__temp1726v=pos;
  *__temp1727v=__temp664v__buf__unsafe_ptr;
  *__temp1728v=__temp664v__buf__unsafe_size;
  *__temp1729v=__temp664v__buf__unsafe_align;
  *__temp1730v=__temp664v__dat__pos;
  *__temp1731v=__temp664v__dat__length;
  *__temp1732v=__temp664v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1733v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1733v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1734v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1734v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1735v) {
  int __temp331v__=0;
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
  *__temp1735v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp546v(const char* s, char* __temp1736v) {
  char c=0;
  if(s){
  c=*s;
  }
  *__temp1736v=c;
}

static inline __attribute__((always_inline)) void eq__temp547v(char x, char y, char* __temp1737v) {
  char z=0;
  z=(x==y);
  *__temp1737v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp563v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, unsigned long long* __temp1745v, char* __temp1746v) {
  unsigned long long __temp564v=0;
  unsigned long long __temp565v__=0;
  unsigned long long __temp566v__=0;
  char* __temp567v__unsafe_ptr=0;
  unsigned long long __temp567v__unsafe_size=0;
  unsigned long long __temp567v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char* endpos=0;
  unsigned long long __temp569v=0;
  char* __temp570v__buf__unsafe_ptr=0;
  unsigned long long __temp570v__buf__unsafe_size=0;
  unsigned long long __temp570v__buf__unsafe_align=0;
  unsigned long long __temp570v__dat__pos=0;
  unsigned long long __temp570v__dat__length=0;
  char __temp570v__dat__first=0;
  unsigned long long __temp1739v=0;
  char __temp1740v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp564v=1;
  len__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp565v__);
  add__temp110v(__temp564v,__temp565v__,&__temp566v__);
  __temp_errcode=alloc__temp487v(__temp566v__,&__temp567v__unsafe_ptr,&__temp567v__unsafe_size,&__temp567v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp567v__unsafe_ptr;
  buf__unsafe_size=__temp567v__unsafe_size;
  buf__unsafe_align=__temp567v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp569v=0;
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp569v,other__dat__length,other__dat__first,&__temp570v__buf__unsafe_ptr,&__temp570v__buf__unsafe_size,&__temp570v__buf__unsafe_align,&__temp570v__dat__pos,&__temp570v__dat__length,&__temp570v__dat__first);
  *__temp1741v=__temp570v__buf__unsafe_ptr;
  *__temp1742v=__temp570v__buf__unsafe_size;
  *__temp1743v=__temp570v__buf__unsafe_align;
  *__temp1744v=__temp570v__dat__pos;
  *__temp1745v=__temp570v__dat__length;
  *__temp1746v=__temp570v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp522v(const char* c, char* __temp1747v) {
  char z=0;
  z=c!=0;
  *__temp1747v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1748v) {
  char z=0;
  z=value?0:1;
  *__temp1748v=z;
}

int unsafe_temporary_cstr__temp571v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1753v) {
  unsigned long long __temp572v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp573v=0;
  char __temp574v__=0;
  unsigned long long __temp575v__=0;
  char __temp576v__=0;
  unsigned long long __temp577v=0;
  unsigned long long __temp578v__=0;
  char* __temp579v__=0;
  char __temp580v__value=0;
  char __temp582v__=0;
  char __temp583v__=0;
  char __temp584v=0;
  char __temp585v=0;
  unsigned long long __temp586v__=0;
  char __temp587v__=0;
  char* __temp588v__=0;
  char __temp589v__value=0;
  char __temp590v__=0;
  char __temp591v__=0;
  char __temp592v=0;
  char* __temp593v__buf__unsafe_ptr=0;
  unsigned long long __temp593v__buf__unsafe_size=0;
  unsigned long long __temp593v__buf__unsafe_align=0;
  unsigned long long __temp593v__dat__pos=0;
  unsigned long long __temp593v__dat__length=0;
  char __temp593v__dat__first=0;
  char* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp595v__=0;
  char __temp596v__=0;
  unsigned long long __temp1751v=0;
  char __temp1752v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(other__dat__pos,other__dat__length,&__temp572v__);
  end_pos=__temp572v__;
  __temp573v=0;
  neq__temp302v(end_pos,__temp573v,&__temp574v__);
  if(__temp574v__){
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp575v__);
  le__temp230v(end_pos,__temp575v__,&__temp576v__);
  if(__temp576v__){
  __temp577v=1;
  __temp_errcode=sub__temp330v(end_pos,__temp577v,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp578v__,&__temp579v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp579v__){
  goto __temp_failure;
  }
  memcpy(&__temp580v__value,__temp579v__,1);
  char__temp546v(__temp581v,&__temp582v__);
  eq__temp547v(__temp580v__value,__temp582v__,&__temp583v__);
  __temp584v=__temp583v__;
  }
  __temp585v=__temp584v;
  }
  if(__temp585v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp586v__);
  lt__temp182v(end_pos,__temp586v__,&__temp587v__);
  if(__temp587v__){
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp588v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp588v__){
  goto __temp_failure;
  }
  memcpy(&__temp589v__value,__temp588v__,1);
  char__temp546v(__temp581v,&__temp590v__);
  eq__temp547v(__temp589v__value,__temp590v__,&__temp591v__);
  __temp592v=__temp591v__;
  }
  if(__temp592v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp563v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp593v__buf__unsafe_ptr,&__temp593v__buf__unsafe_size,&__temp593v__buf__unsafe_align,&__temp593v__dat__pos,&__temp593v__dat__length,&__temp593v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp593v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp593v__buf__unsafe_size;
  c__buf__unsafe_align=__temp593v__buf__unsafe_align;
  c__dat__pos=__temp593v__dat__pos;
  c__dat__length=__temp593v__dat__length;
  c__dat__first=__temp593v__dat__first;
  }
  }
  ret=c__buf__unsafe_ptr+c__dat__pos;
  *__temp1753v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1301v(const char* cmd, long long int* __temp1754v) {
  long long int result=0;
  result=system(cmd);
  *__temp1754v=result;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1755v) {
  long long int z=0;
  z=x;
  *__temp1755v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1756v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1756v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1757v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) int system__temp1308v(char* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1309v__=0;
  long long int __temp1311v__=0;
  long long int result=0;
  unsigned long long __temp1312v=0;
  long long int __temp1313v__=0;
  char __temp1314v__=0;
  char __temp1758v=0;
  char __temp1759v=0;
  unsigned long long __temp1760v=0;
  unsigned long long __temp1761v=0;
  char __temp1762v=0;
  char* __temp1763v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp571v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1309v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1301v(__temp1309v__,&__temp1311v__);
  result=__temp1311v__;
  __temp1312v=0;
  int__temp382v(__temp1312v,&__temp1313v__);
  neq__temp291v(result,__temp1313v__,&__temp1314v__);
  if(__temp1314v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp522v(__temp1309v__,&__temp1758v);
  not__temp18v(__temp1758v,&__temp1759v);
  if(__temp1759v){
  __temp1760v=0;
  neq__temp302v(__temp1761v,__temp1760v,&__temp1762v);
  if(__temp1762v){
  __temp1761v=0;
  free__temp428v(&__temp1763v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1653v() {
  unsigned long long __temp1654v=0;
  char* __temp1655v__unsafe_ptr=0;
  unsigned long long __temp1655v__unsafe_size=0;
  unsigned long long __temp1655v__unsafe_align=0;
  char* __temp1657v__unsafe_ptr=0;
  unsigned long long __temp1657v__unsafe_size=0;
  unsigned long long __temp1657v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1658v=0;
  unsigned long long __temp1659v=0;
  char* __temp1661v__buf__unsafe_ptr=0;
  unsigned long long __temp1661v__buf__unsafe_size=0;
  unsigned long long __temp1661v__buf__unsafe_align=0;
  unsigned long long __temp1661v__dat__pos=0;
  unsigned long long __temp1661v__dat__length=0;
  char __temp1661v__dat__first=0;
  char* __temp1662v__buf__unsafe_ptr=0;
  unsigned long long __temp1662v__buf__unsafe_size=0;
  unsigned long long __temp1662v__buf__unsafe_align=0;
  unsigned long long __temp1662v__dat__pos=0;
  unsigned long long __temp1662v__dat__length=0;
  char __temp1662v__dat__first=0;
  char* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1765v=0;
  char __temp1766v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1654v=2;
  __temp_errcode=alloc__temp487v(__temp1654v,&__temp1655v__unsafe_ptr,&__temp1655v__unsafe_size,&__temp1655v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1657v__unsafe_ptr=__temp1655v__unsafe_ptr;
  __temp1657v__unsafe_size=__temp1655v__unsafe_size;
  __temp1657v__unsafe_align=__temp1655v__unsafe_align;
  buf__unsafe_ptr=__temp1657v__unsafe_ptr;
  buf__unsafe_size=__temp1657v__unsafe_size;
  buf__unsafe_align=__temp1657v__unsafe_align;
  __temp1658v=0;
  __temp1659v=__temp1658v;
  __temp_errcode=str__temp540v(__temp1660v,&__temp1661v__buf__unsafe_ptr,&__temp1661v__buf__unsafe_size,&__temp1661v__buf__unsafe_align,&__temp1661v__dat__pos,&__temp1661v__dat__length,&__temp1661v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp656v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1659v,__temp1661v__buf__unsafe_ptr,__temp1661v__buf__unsafe_size,__temp1661v__buf__unsafe_align,__temp1661v__dat__pos,__temp1661v__dat__length,__temp1661v__dat__first,&__temp1662v__buf__unsafe_ptr,&__temp1662v__buf__unsafe_size,&__temp1662v__buf__unsafe_align,&__temp1662v__dat__pos,&__temp1662v__dat__length,&__temp1662v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1662v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1662v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1662v__buf__unsafe_align;
  s__dat__pos=__temp1662v__dat__pos;
  s__dat__length=__temp1662v__dat__length;
  s__dat__first=__temp1662v__dat__first;
  __temp_errcode=system__temp1308v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1765v=0;
  neq__temp302v(__temp1655v__unsafe_size,__temp1765v,&__temp1766v);
  if(__temp1766v){
  __temp1655v__unsafe_size=0;
  free__temp428v(&__temp1655v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1653v();return 0;}