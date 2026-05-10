#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1686v=".s";
const char* const __temp581v="";
const char* const __temp1675v="./smoll ";
const char* const __temp1695v=" ";
const char* const __temp1670v="./tests/passing/";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1702v=unsafe_ptr;
  *__temp1703v=unsafe_size;
  *__temp1704v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1705v) {
  int value=0;
  *__temp1705v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1706v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1706v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1707v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1707v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1708v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1708v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1709v) {
  char* allocated=*__temp1709v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1709v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1710v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1710v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1711v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1711v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1712v) {
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
  *__temp1712v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long size, char** __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v) {
  char* buffer__unsafe_ptr=*__temp1713v;
  unsigned long long buffer__unsafe_size=*__temp1714v;
  unsigned long long buffer__unsafe_align=*__temp1715v;
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
  *__temp1713v=buffer__unsafe_ptr;
  *__temp1714v=buffer__unsafe_size;
  *__temp1715v=buffer__unsafe_align;
  *__temp1716v=buffer__unsafe_ptr;
  *__temp1717v=buffer__unsafe_size;
  *__temp1718v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, char** __temp1723v, unsigned long long* __temp1724v, unsigned long long* __temp1725v) {
  char* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  char* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  char* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1721v=0;
  char __temp1722v=0;
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
  *__temp1723v=__temp492v__unsafe_ptr;
  *__temp1724v=__temp492v__unsafe_size;
  *__temp1725v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp598v(char** __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v, char** __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, unsigned long long* __temp1732v) {
  char* buf__unsafe_ptr=*__temp1726v;
  unsigned long long buf__unsafe_size=*__temp1727v;
  unsigned long long buf__unsafe_align=*__temp1728v;
  unsigned long long __temp599v=0;
  unsigned long long __temp600v=0;
  unsigned long long pos=0;
  __temp599v=0;
  __temp600v=__temp599v;
  pos=__temp600v;
  *__temp1726v=buf__unsafe_ptr;
  *__temp1727v=buf__unsafe_size;
  *__temp1728v=buf__unsafe_align;
  *__temp1729v=buf__unsafe_ptr;
  *__temp1730v=buf__unsafe_size;
  *__temp1731v=buf__unsafe_align;
  *__temp1732v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1733v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1733v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1734v) {
  *__temp1734v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1735v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1735v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1736v) {
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
  *__temp1736v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp524v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1737v, unsigned long long* __temp1738v, unsigned long long* __temp1739v, unsigned long long* __temp1740v, unsigned long long* __temp1741v, char* __temp1742v) {
  *__temp1737v=buf__unsafe_ptr;
  *__temp1738v=buf__unsafe_size;
  *__temp1739v=buf__unsafe_align;
  *__temp1740v=dat__pos;
  *__temp1741v=dat__length;
  *__temp1742v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp534v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1743v, unsigned long long* __temp1744v, unsigned long long* __temp1745v, unsigned long long* __temp1746v, unsigned long long* __temp1747v, char* __temp1748v) {
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
  *__temp1743v=__temp539v__buf__unsafe_ptr;
  *__temp1744v=__temp539v__buf__unsafe_size;
  *__temp1745v=__temp539v__buf__unsafe_align;
  *__temp1746v=__temp539v__dat__pos;
  *__temp1747v=__temp539v__dat__length;
  *__temp1748v=__temp539v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp540v(const char* c, char** __temp1750v, unsigned long long* __temp1751v, unsigned long long* __temp1752v, unsigned long long* __temp1753v, unsigned long long* __temp1754v, char* __temp1755v) {
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
  *__temp1750v=__temp543v__buf__unsafe_ptr;
  *__temp1751v=__temp543v__buf__unsafe_size;
  *__temp1752v=__temp543v__buf__unsafe_align;
  *__temp1753v=__temp543v__dat__pos;
  *__temp1754v=__temp543v__dat__length;
  *__temp1755v=__temp543v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp544v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1756v) {
  *__temp1756v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1757v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1758v) {
  *__temp1758v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1759v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1759v=z;
}

int copy__temp656v(char** __temp1762v, unsigned long long* __temp1763v, unsigned long long* __temp1764v, unsigned long long* __temp1765v, const char* _other, char** __temp1766v, unsigned long long* __temp1767v, unsigned long long* __temp1768v, unsigned long long* __temp1769v, unsigned long long* __temp1770v, char* __temp1771v) {
  char* buf__unsafe_ptr=*__temp1762v;
  unsigned long long buf__unsafe_size=*__temp1763v;
  unsigned long long buf__unsafe_align=*__temp1764v;
  unsigned long long pos=*__temp1765v;
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
  __temp_errcode=str__temp540v(_other,&__temp657v__buf__unsafe_ptr,&__temp657v__buf__unsafe_size,&__temp657v__buf__unsafe_align,&__temp657v__dat__pos,&__temp657v__dat__length,&__temp657v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
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
  *__temp1762v=buf__unsafe_ptr;
  *__temp1763v=buf__unsafe_size;
  *__temp1764v=buf__unsafe_align;
  *__temp1765v=pos;
  *__temp1766v=__temp664v__buf__unsafe_ptr;
  *__temp1767v=__temp664v__buf__unsafe_size;
  *__temp1768v=__temp664v__buf__unsafe_align;
  *__temp1769v=__temp664v__dat__pos;
  *__temp1770v=__temp664v__dat__length;
  *__temp1771v=__temp664v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp597v(const char* other, const char** __temp1772v) {
  *__temp1772v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1773v) {
  char z=0;
  z=x!=0;
  *__temp1773v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1774v) {
  char z=0;
  z=value?0:1;
  *__temp1774v=z;
}

static inline __attribute__((always_inline)) int read__temp1630v(const char* _path, char** __temp1775v) {
  const char* __temp1631v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1632v__=0;
  char __temp1633v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp597v(_path,&__temp1631v__);
  path=__temp1631v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1632v__);
  not__temp18v(__temp1632v__,&__temp1633v__);
  if(__temp1633v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1775v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1776v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1776v=__temp412v__;
}

static inline __attribute__((always_inline)) int entry__temp1641v(char** __temp1777v, char** __temp1778v, unsigned long long* __temp1779v, unsigned long long* __temp1780v, unsigned long long* __temp1781v, unsigned long long* __temp1782v, char* __temp1783v) {
  char* f__unsafe_ptr=*__temp1777v;
  char __temp1642v__=0;
  char __temp1643v__=0;
  char* de=0;
  char __temp1644v__=0;
  char __temp1645v__=0;
  const char* dirname=0;
  char* __temp1646v__buf__unsafe_ptr=0;
  unsigned long long __temp1646v__buf__unsafe_size=0;
  unsigned long long __temp1646v__buf__unsafe_align=0;
  unsigned long long __temp1646v__dat__pos=0;
  unsigned long long __temp1646v__dat__length=0;
  char __temp1646v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1642v__);
  not__temp18v(__temp1642v__,&__temp1643v__);
  if(__temp1643v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1644v__);
  not__temp18v(__temp1644v__,&__temp1645v__);
  if(__temp1645v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp540v(dirname,&__temp1646v__buf__unsafe_ptr,&__temp1646v__buf__unsafe_size,&__temp1646v__buf__unsafe_align,&__temp1646v__dat__pos,&__temp1646v__dat__length,&__temp1646v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1777v=f__unsafe_ptr;
  *__temp1778v=__temp1646v__buf__unsafe_ptr;
  *__temp1779v=__temp1646v__buf__unsafe_size;
  *__temp1780v=__temp1646v__buf__unsafe_align;
  *__temp1781v=__temp1646v__dat__pos;
  *__temp1782v=__temp1646v__dat__length;
  *__temp1783v=__temp1646v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp533v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1784v, unsigned long long* __temp1785v, unsigned long long* __temp1786v, unsigned long long* __temp1787v, unsigned long long* __temp1788v, char* __temp1789v) {
  *__temp1784v=other__buf__unsafe_ptr;
  *__temp1785v=other__buf__unsafe_size;
  *__temp1786v=other__buf__unsafe_align;
  *__temp1787v=other__dat__pos;
  *__temp1788v=other__dat__length;
  *__temp1789v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1790v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1790v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1791v) {
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
  *__temp1791v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp778v(char* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, char** __temp1796v, unsigned long long* __temp1797v, unsigned long long* __temp1798v, unsigned long long* __temp1799v, unsigned long long* __temp1800v, char* __temp1801v) {
  char* __temp779v__buf__unsafe_ptr=0;
  unsigned long long __temp779v__buf__unsafe_size=0;
  unsigned long long __temp779v__buf__unsafe_align=0;
  unsigned long long __temp779v__dat__pos=0;
  unsigned long long __temp779v__dat__length=0;
  char __temp779v__dat__first=0;
  char* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  char __temp780v__=0;
  char* __temp781v__buf__unsafe_ptr=0;
  unsigned long long __temp781v__buf__unsafe_size=0;
  unsigned long long __temp781v__buf__unsafe_align=0;
  unsigned long long __temp781v__dat__pos=0;
  unsigned long long __temp781v__dat__length=0;
  char __temp781v__dat__first=0;
  char __temp782v__=0;
  char __temp783v__=0;
  char __temp784v=0;
  unsigned long long __temp785v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp786v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp787v=0;
  char __temp788v__=0;
  char new_first=0;
  char* __temp789v__=0;
  char __temp790v__value=0;
  char* __temp791v__buf__unsafe_ptr=0;
  unsigned long long __temp791v__buf__unsafe_size=0;
  unsigned long long __temp791v__buf__unsafe_align=0;
  unsigned long long __temp791v__dat__pos=0;
  unsigned long long __temp791v__dat__length=0;
  char __temp791v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp533v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp779v__buf__unsafe_ptr,&__temp779v__buf__unsafe_size,&__temp779v__buf__unsafe_align,&__temp779v__dat__pos,&__temp779v__dat__length,&__temp779v__dat__first);
  s__buf__unsafe_ptr=__temp779v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp779v__buf__unsafe_size;
  s__buf__unsafe_align=__temp779v__buf__unsafe_align;
  s__dat__pos=__temp779v__dat__pos;
  s__dat__length=__temp779v__dat__length;
  s__dat__first=__temp779v__dat__first;
  eq__temp278v(from,to,&__temp780v__);
  if(__temp780v__){
  __temp_errcode=str__temp540v(__temp581v,&__temp781v__buf__unsafe_ptr,&__temp781v__buf__unsafe_size,&__temp781v__buf__unsafe_align,&__temp781v__dat__pos,&__temp781v__dat__length,&__temp781v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp182v(from,to,&__temp782v__);
  if(!__temp782v__){
  gt__temp206v(to,s__dat__length,&__temp783v__);
  __temp784v=__temp783v__;
  }
  if(__temp784v){
  __temp_errcode=15;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp330v(to,from,&__temp785v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp785v__;
  add__temp110v(s__dat__pos,from,&__temp786v__);
  new_pos=__temp786v__;
  __temp787v=0;
  neq__temp302v(from,__temp787v,&__temp788v__);
  if(__temp788v__){
  __temp_errcode=get__temp482v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,&__temp789v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp789v__){
  goto __temp_failure;
  }
  memcpy(&__temp790v__value,__temp789v__,1);
  new_first=__temp790v__value;
  }
  else{
  new_first=s__dat__first;
  }
  str__temp524v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,new_length,new_first,&__temp791v__buf__unsafe_ptr,&__temp791v__buf__unsafe_size,&__temp791v__buf__unsafe_align,&__temp791v__dat__pos,&__temp791v__dat__length,&__temp791v__dat__first);
  __temp781v__buf__unsafe_ptr=__temp791v__buf__unsafe_ptr;
  __temp781v__buf__unsafe_size=__temp791v__buf__unsafe_size;
  __temp781v__buf__unsafe_align=__temp791v__buf__unsafe_align;
  __temp781v__dat__pos=__temp791v__dat__pos;
  __temp781v__dat__length=__temp791v__dat__length;
  __temp781v__dat__first=__temp791v__dat__first;
  __temp_return:
  *__temp1796v=__temp781v__buf__unsafe_ptr;
  *__temp1797v=__temp781v__buf__unsafe_size;
  *__temp1798v=__temp781v__buf__unsafe_align;
  *__temp1799v=__temp781v__dat__pos;
  *__temp1800v=__temp781v__dat__length;
  *__temp1801v=__temp781v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp548v(char x, char y, char* __temp1802v) {
  char z=0;
  z=(x!=y);
  *__temp1802v=z;
}

static inline __attribute__((always_inline)) void eq__temp743v(char* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, char* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, char* __temp1803v) {
  unsigned long long __temp744v__=0;
  unsigned long long n=0;
  unsigned long long __temp745v__=0;
  char __temp746v__=0;
  char __temp747v=0;
  char __temp748v__=0;
  char __temp749v=0;
  char z=0;
  len__temp544v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__dat__pos,x__dat__length,x__dat__first,&__temp744v__);
  n=__temp744v__;
  len__temp544v(y__buf__unsafe_ptr,y__buf__unsafe_size,y__buf__unsafe_align,y__dat__pos,y__dat__length,y__dat__first,&__temp745v__);
  neq__temp302v(n,__temp745v__,&__temp746v__);
  if(__temp746v__){
  __temp747v=0;
  goto __temp_return;
  }
  neq__temp548v(x__dat__first,y__dat__first,&__temp748v__);
  if(__temp748v__){
  __temp749v=0;
  __temp747v=__temp749v;
  goto __temp_return;
  }
  z=!memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos,((char*)y__buf__unsafe_ptr)+y__dat__pos,n);
  __temp747v=z;
  __temp_return:
  *__temp1803v=__temp747v;
}

static inline __attribute__((always_inline)) int ends_with__temp856v(char* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1810v) {
  char* __temp857v__buf__unsafe_ptr=0;
  unsigned long long __temp857v__buf__unsafe_size=0;
  unsigned long long __temp857v__buf__unsafe_align=0;
  unsigned long long __temp857v__dat__pos=0;
  unsigned long long __temp857v__dat__length=0;
  char __temp857v__dat__first=0;
  char* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp858v__buf__unsafe_ptr=0;
  unsigned long long __temp858v__buf__unsafe_size=0;
  unsigned long long __temp858v__buf__unsafe_align=0;
  unsigned long long __temp858v__dat__pos=0;
  unsigned long long __temp858v__dat__length=0;
  char __temp858v__dat__first=0;
  char* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  char __temp859v__=0;
  char __temp860v=0;
  unsigned long long __temp861v__=0;
  unsigned long long n=0;
  unsigned long long __temp862v__=0;
  unsigned long long __temp863v__=0;
  char* __temp864v__buf__unsafe_ptr=0;
  unsigned long long __temp864v__buf__unsafe_size=0;
  unsigned long long __temp864v__buf__unsafe_align=0;
  unsigned long long __temp864v__dat__pos=0;
  unsigned long long __temp864v__dat__length=0;
  char __temp864v__dat__first=0;
  char* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  char __temp865v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp533v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp857v__buf__unsafe_ptr,&__temp857v__buf__unsafe_size,&__temp857v__buf__unsafe_align,&__temp857v__dat__pos,&__temp857v__dat__length,&__temp857v__dat__first);
  stack__buf__unsafe_ptr=__temp857v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp857v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp857v__buf__unsafe_align;
  stack__dat__pos=__temp857v__dat__pos;
  stack__dat__length=__temp857v__dat__length;
  stack__dat__first=__temp857v__dat__first;
  __temp_errcode=str__temp540v(_needle,&__temp858v__buf__unsafe_ptr,&__temp858v__buf__unsafe_size,&__temp858v__buf__unsafe_align,&__temp858v__dat__pos,&__temp858v__dat__length,&__temp858v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp858v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp858v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp858v__buf__unsafe_align;
  needle__dat__pos=__temp858v__dat__pos;
  needle__dat__length=__temp858v__dat__length;
  needle__dat__first=__temp858v__dat__first;
  lt__temp182v(stack__dat__length,needle__dat__length,&__temp859v__);
  if(__temp859v__){
  __temp860v=0;
  goto __temp_return;
  }
  len__temp544v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp861v__);
  n=__temp861v__;
  len__temp544v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp862v__);
  __temp_errcode=sub__temp330v(n,__temp862v__,&__temp863v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp778v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp863v__,n,&__temp864v__buf__unsafe_ptr,&__temp864v__buf__unsafe_size,&__temp864v__buf__unsafe_align,&__temp864v__dat__pos,&__temp864v__dat__length,&__temp864v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp864v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp864v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp864v__buf__unsafe_align;
  ret__dat__pos=__temp864v__dat__pos;
  ret__dat__length=__temp864v__dat__length;
  ret__dat__first=__temp864v__dat__first;
  eq__temp743v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp865v__);
  __temp860v=__temp865v__;
  __temp_return:
  *__temp1810v=__temp860v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp665v(char** __temp1813v, unsigned long long* __temp1814v, unsigned long long* __temp1815v, unsigned long long* __temp1816v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1817v, unsigned long long* __temp1818v, unsigned long long* __temp1819v, unsigned long long* __temp1820v, unsigned long long* __temp1821v, char* __temp1822v) {
  char* buf__unsafe_ptr=*__temp1813v;
  unsigned long long buf__unsafe_size=*__temp1814v;
  unsigned long long buf__unsafe_align=*__temp1815v;
  unsigned long long pos=*__temp1816v;
  char* __temp666v__buf__unsafe_ptr=0;
  unsigned long long __temp666v__buf__unsafe_size=0;
  unsigned long long __temp666v__buf__unsafe_align=0;
  unsigned long long __temp666v__dat__pos=0;
  unsigned long long __temp666v__dat__length=0;
  char __temp666v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp667v__=0;
  unsigned long long __temp668v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp669v__=0;
  char __temp670v__=0;
  unsigned long long __temp671v=0;
  unsigned long long __temp672v__=0;
  unsigned long long prev_pos=0;
  char* __temp673v__buf__unsafe_ptr=0;
  unsigned long long __temp673v__buf__unsafe_size=0;
  unsigned long long __temp673v__buf__unsafe_align=0;
  unsigned long long __temp673v__dat__pos=0;
  unsigned long long __temp673v__dat__length=0;
  char __temp673v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp533v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp666v__buf__unsafe_ptr,&__temp666v__buf__unsafe_size,&__temp666v__buf__unsafe_align,&__temp666v__dat__pos,&__temp666v__dat__length,&__temp666v__dat__first);
  other__buf__unsafe_ptr=__temp666v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp666v__buf__unsafe_size;
  other__buf__unsafe_align=__temp666v__buf__unsafe_align;
  other__dat__pos=__temp666v__dat__pos;
  other__dat__length=__temp666v__dat__length;
  other__dat__first=__temp666v__dat__first;
  len__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp667v__);
  add__temp110v(pos,__temp667v__,&__temp668v__);
  next_pos=__temp668v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp669v__);
  gt__temp206v(next_pos,__temp669v__,&__temp670v__);
  if(__temp670v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp671v=0;
  add__temp110v(pos,__temp671v,&__temp672v__);
  prev_pos=__temp672v__;
  pos=next_pos;
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp673v__buf__unsafe_ptr,&__temp673v__buf__unsafe_size,&__temp673v__buf__unsafe_align,&__temp673v__dat__pos,&__temp673v__dat__length,&__temp673v__dat__first);
  *__temp1813v=buf__unsafe_ptr;
  *__temp1814v=buf__unsafe_size;
  *__temp1815v=buf__unsafe_align;
  *__temp1816v=pos;
  *__temp1817v=__temp673v__buf__unsafe_ptr;
  *__temp1818v=__temp673v__buf__unsafe_size;
  *__temp1819v=__temp673v__buf__unsafe_align;
  *__temp1820v=__temp673v__dat__pos;
  *__temp1821v=__temp673v__dat__length;
  *__temp1822v=__temp673v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp647v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char** __temp1825v, unsigned long long* __temp1826v, unsigned long long* __temp1827v, unsigned long long* __temp1828v, unsigned long long* __temp1829v, char* __temp1830v) {
  unsigned long long __temp649v=0;
  unsigned long long pos=0;
  char __temp650v__=0;
  unsigned long long __temp651v__=0;
  char __temp652v__=0;
  unsigned long long __temp653v__=0;
  unsigned long long __temp654v__=0;
  char* __temp655v__buf__unsafe_ptr=0;
  unsigned long long __temp655v__buf__unsafe_size=0;
  unsigned long long __temp655v__buf__unsafe_align=0;
  unsigned long long __temp655v__dat__pos=0;
  unsigned long long __temp655v__dat__length=0;
  char __temp655v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp649v=0;
  pos=__temp649v;
  eq__temp278v(pos,s__dat__pos,&__temp650v__);
  if(__temp650v__){
  goto __temp_return;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp651v__);
  gt__temp206v(pos,__temp651v__,&__temp652v__);
  if(__temp652v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp653v__);
  __temp_errcode=sub__temp330v(__temp653v__,pos,&__temp654v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp534v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,pos,__temp654v__,&__temp655v__buf__unsafe_ptr,&__temp655v__buf__unsafe_size,&__temp655v__buf__unsafe_align,&__temp655v__dat__pos,&__temp655v__dat__length,&__temp655v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp655v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp655v__buf__unsafe_size;
  s__buf__unsafe_align=__temp655v__buf__unsafe_align;
  s__dat__pos=__temp655v__dat__pos;
  s__dat__length=__temp655v__dat__length;
  s__dat__first=__temp655v__dat__first;
  __temp_return:
  *__temp1825v=s__buf__unsafe_ptr;
  *__temp1826v=s__buf__unsafe_size;
  *__temp1827v=s__buf__unsafe_align;
  *__temp1828v=s__dat__pos;
  *__temp1829v=s__dat__length;
  *__temp1830v=s__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp546v(const char* s, char* __temp1831v) {
  char c=0;
  if(s){
  c=*s;
  }
  *__temp1831v=c;
}

static inline __attribute__((always_inline)) void true__temp8v(int* __temp1832v) {
  int value=0;
  *__temp1832v=value;
}

static inline __attribute__((always_inline)) void not__temp29v(int __temp_anon0, int* __temp1833v) {
  int __temp30v__=0;
  true__temp8v(&__temp30v__);
  *__temp1833v=__temp30v__;
}

static inline __attribute__((always_inline)) int rextend__temp601v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, char** __temp1834v, unsigned long long* __temp1835v, unsigned long long* __temp1836v, unsigned long long* __temp1837v, unsigned long long* __temp1838v, char* __temp1839v) {
  unsigned long long __temp603v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp604v__=0;
  unsigned long long __temp605v__=0;
  char __temp606v__=0;
  int __temp607v=0;
  int __temp608v__=0;
  char* __temp609v__buf__unsafe_ptr=0;
  unsigned long long __temp609v__buf__unsafe_size=0;
  unsigned long long __temp609v__buf__unsafe_align=0;
  unsigned long long __temp609v__dat__pos=0;
  unsigned long long __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(s__dat__length,by,&__temp603v__);
  new_length=__temp603v__;
  add__temp110v(new_length,s__dat__pos,&__temp604v__);
  len__temp486v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp605v__);
  gt__temp206v(__temp604v__,__temp605v__,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp607v,&__temp608v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp524v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp609v__buf__unsafe_ptr,&__temp609v__buf__unsafe_size,&__temp609v__buf__unsafe_align,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  *__temp1834v=__temp609v__buf__unsafe_ptr;
  *__temp1835v=__temp609v__buf__unsafe_size;
  *__temp1836v=__temp609v__buf__unsafe_align;
  *__temp1837v=__temp609v__dat__pos;
  *__temp1838v=__temp609v__dat__length;
  *__temp1839v=__temp609v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp700v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp702v__=0;
  char __temp703v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp352v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp702v__);
  gt__temp206v(__temp702v__,s__buf__unsafe_size,&__temp703v__);
  if(__temp703v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp619v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, char** __temp1840v, unsigned long long* __temp1841v, unsigned long long* __temp1842v, unsigned long long* __temp1843v, unsigned long long* __temp1844v, char* __temp1845v) {
  unsigned long long __temp621v=0;
  unsigned long long by=0;
  unsigned long long __temp622v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp623v__=0;
  unsigned long long __temp624v__=0;
  char __temp625v__=0;
  int __temp626v=0;
  int __temp627v__=0;
  char* __temp628v__buf__unsafe_ptr=0;
  unsigned long long __temp628v__buf__unsafe_size=0;
  unsigned long long __temp628v__buf__unsafe_align=0;
  unsigned long long __temp628v__dat__pos=0;
  unsigned long long __temp628v__dat__length=0;
  char __temp628v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp621v=1;
  by=__temp621v;
  add__temp110v(s__dat__length,by,&__temp622v__);
  new_length=__temp622v__;
  add__temp110v(new_length,s__dat__pos,&__temp623v__);
  len__temp486v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp624v__);
  gt__temp206v(__temp623v__,__temp624v__,&__temp625v__);
  if(__temp625v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp626v,&__temp627v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp524v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp628v__buf__unsafe_ptr,&__temp628v__buf__unsafe_size,&__temp628v__buf__unsafe_align,&__temp628v__dat__pos,&__temp628v__dat__length,&__temp628v__dat__first);
  *__temp1840v=__temp628v__buf__unsafe_ptr;
  *__temp1841v=__temp628v__buf__unsafe_size;
  *__temp1842v=__temp628v__buf__unsafe_align;
  *__temp1843v=__temp628v__dat__pos;
  *__temp1844v=__temp628v__dat__length;
  *__temp1845v=__temp628v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1846v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1846v=z;
}

static inline __attribute__((always_inline)) void eq__temp547v(char x, char y, char* __temp1847v) {
  char z=0;
  z=(x==y);
  *__temp1847v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp563v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1851v, unsigned long long* __temp1852v, unsigned long long* __temp1853v, unsigned long long* __temp1854v, unsigned long long* __temp1855v, char* __temp1856v) {
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
  unsigned long long __temp1849v=0;
  char __temp1850v=0;
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
  *__temp1851v=__temp570v__buf__unsafe_ptr;
  *__temp1852v=__temp570v__buf__unsafe_size;
  *__temp1853v=__temp570v__buf__unsafe_align;
  *__temp1854v=__temp570v__dat__pos;
  *__temp1855v=__temp570v__dat__length;
  *__temp1856v=__temp570v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp522v(const char* c, char* __temp1857v) {
  char z=0;
  z=c!=0;
  *__temp1857v=z;
}

int unsafe_temporary_cstr__temp571v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1862v) {
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
  unsigned long long __temp1860v=0;
  char __temp1861v=0;
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
  *__temp1862v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1863v) {
  long long int z=0;
  z=x;
  *__temp1863v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1864v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1864v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1865v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  *__temp1865v=z;
}

static inline __attribute__((always_inline)) int read__temp1220v(char* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, char** __temp1872v) {
  const char* __temp1221v__=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1223v__=0;
  char __temp1224v__=0;
  char __temp1225v__=0;
  long long int status=0;
  unsigned long long __temp1226v=0;
  long long int __temp1227v__=0;
  char __temp1228v__=0;
  char __temp1229v=0;
  char __temp1866v=0;
  char __temp1867v=0;
  unsigned long long __temp1868v=0;
  unsigned long long __temp1869v=0;
  char __temp1870v=0;
  char* __temp1871v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp571v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1221v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1221v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp398v(unsafe_ptr,&__temp1223v__);
  not__temp18v(__temp1223v__,&__temp1224v__);
  if(__temp1224v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  *__temp1872v=unsafe_ptr;
  
  __temp_failure:exists__temp522v(__temp1221v__,&__temp1866v);
  not__temp18v(__temp1866v,&__temp1867v);
  if(__temp1867v){
  __temp1868v=0;
  neq__temp302v(__temp1869v,__temp1868v,&__temp1870v);
  if(__temp1870v){
  __temp1869v=0;
  free__temp428v(&__temp1871v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1202v(long long int value, const char** __temp1873v) {
  const char* endl=0;
  const char* ret=0;
  endl=__temp352v;
  ret=__temp_all_errcodes[value];
  *__temp1873v=ret;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1661v(char* command__buf__unsafe_ptr, unsigned long long command__buf__unsafe_size, unsigned long long command__buf__unsafe_align, unsigned long long command__dat__pos, unsigned long long command__dat__length, char command__dat__first) {
  char* __temp1662v__unsafe_ptr=0;
  long long int __temp1663v__status=0;
  char* __temp1664v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1665v=0;
  long long int __temp1666v=0;
  long long int error=0;
  const char* __temp1667v__=0;
  char __temp1875v=0;
  unsigned long long __temp1876v=0;
  long long int __temp1877v=0;
  char __temp1878v=0;
  char __temp1879v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1220v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1662v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1664v__unsafe_ptr=__temp1662v__unsafe_ptr;
  proc__unsafe_ptr=__temp1664v__unsafe_ptr;
  exists__temp398v(__temp1662v__unsafe_ptr,&__temp1875v);
  if(__temp1875v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1662v__unsafe_ptr)){
  }
  __temp1663v__status=pclose((FILE*)__temp1662v__unsafe_ptr);
  __temp1662v__unsafe_ptr=0;
  }
  __temp1876v=0;
  int__temp382v(__temp1876v,&__temp1877v);
  neq__temp291v(__temp1663v__status,__temp1877v,&__temp1878v);
  if(__temp1878v){
  __temp_complain=29;
  __temp1879v=__temp1879v==0;
  }
  __temp1666v=__temp_complain;
  __temp1665v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1666v;
  __temp1665v=__temp1665v==0;
  if(__temp1665v){
  cstr__temp1202v(error,&__temp1667v__);
  print__temp350v(__temp1667v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1669v() {
  const char* path=0;
  unsigned long long __temp1671v=0;
  unsigned long long max_command_length=0;
  char* __temp1672v__unsafe_ptr=0;
  unsigned long long __temp1672v__unsafe_size=0;
  unsigned long long __temp1672v__unsafe_align=0;
  char* __temp1674v__buf__unsafe_ptr=0;
  unsigned long long __temp1674v__buf__unsafe_size=0;
  unsigned long long __temp1674v__buf__unsafe_align=0;
  unsigned long long __temp1674v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  char* __temp1676v__buf__unsafe_ptr=0;
  unsigned long long __temp1676v__buf__unsafe_size=0;
  unsigned long long __temp1676v__buf__unsafe_align=0;
  unsigned long long __temp1676v__dat__pos=0;
  unsigned long long __temp1676v__dat__length=0;
  char __temp1676v__dat__first=0;
  char* __temp1677v__buf__unsafe_ptr=0;
  unsigned long long __temp1677v__buf__unsafe_size=0;
  unsigned long long __temp1677v__buf__unsafe_align=0;
  unsigned long long __temp1677v__dat__pos=0;
  unsigned long long __temp1677v__dat__length=0;
  char __temp1677v__dat__first=0;
  char* __temp1678v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  unsigned long long __temp1680v=0;
  unsigned long long __temp1681v__=0;
  char* __temp1682v__unsafe_ptr=0;
  unsigned long long __temp1682v__unsafe_size=0;
  unsigned long long __temp1682v__unsafe_align=0;
  char* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  char __temp1684v=0;
  char* __temp1685v__buf__unsafe_ptr=0;
  unsigned long long __temp1685v__buf__unsafe_size=0;
  unsigned long long __temp1685v__buf__unsafe_align=0;
  unsigned long long __temp1685v__dat__pos=0;
  unsigned long long __temp1685v__dat__length=0;
  char __temp1685v__dat__first=0;
  char* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1687v__=0;
  char __temp1688v__=0;
  char* __temp1689v__buf__unsafe_ptr=0;
  unsigned long long __temp1689v__buf__unsafe_size=0;
  unsigned long long __temp1689v__buf__unsafe_align=0;
  unsigned long long __temp1689v__pos=0;
  char* __temp1690v__buf__unsafe_ptr=0;
  unsigned long long __temp1690v__buf__unsafe_size=0;
  unsigned long long __temp1690v__buf__unsafe_align=0;
  unsigned long long __temp1690v__dat__pos=0;
  unsigned long long __temp1690v__dat__length=0;
  char __temp1690v__dat__first=0;
  char* __temp1691v__buf__unsafe_ptr=0;
  unsigned long long __temp1691v__buf__unsafe_size=0;
  unsigned long long __temp1691v__buf__unsafe_align=0;
  unsigned long long __temp1691v__dat__pos=0;
  unsigned long long __temp1691v__dat__length=0;
  char __temp1691v__dat__first=0;
  char* __temp1692v__buf__unsafe_ptr=0;
  unsigned long long __temp1692v__buf__unsafe_size=0;
  unsigned long long __temp1692v__buf__unsafe_align=0;
  unsigned long long __temp1692v__dat__pos=0;
  unsigned long long __temp1692v__dat__length=0;
  char __temp1692v__dat__first=0;
  char* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1693v__=0;
  unsigned long long __temp1694v__=0;
  char __temp1696v__=0;
  char* __temp1697v__buf__unsafe_ptr=0;
  unsigned long long __temp1697v__buf__unsafe_size=0;
  unsigned long long __temp1697v__buf__unsafe_align=0;
  unsigned long long __temp1697v__dat__pos=0;
  unsigned long long __temp1697v__dat__length=0;
  char __temp1697v__dat__first=0;
  char __temp1699v__=0;
  char* __temp1700v__buf__unsafe_ptr=0;
  unsigned long long __temp1700v__buf__unsafe_size=0;
  unsigned long long __temp1700v__buf__unsafe_align=0;
  unsigned long long __temp1700v__dat__pos=0;
  unsigned long long __temp1700v__dat__length=0;
  char __temp1700v__dat__first=0;
  unsigned long long __temp1882v=0;
  char __temp1883v=0;
  unsigned long long __temp1891v=0;
  char __temp1892v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1670v;
  __temp1671v=50;
  max_command_length=__temp1671v;
  __temp_errcode=alloc__temp487v(max_command_length,&__temp1672v__unsafe_ptr,&__temp1672v__unsafe_size,&__temp1672v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp598v(&__temp1672v__unsafe_ptr,&__temp1672v__unsafe_size,&__temp1672v__unsafe_align,&__temp1674v__buf__unsafe_ptr,&__temp1674v__buf__unsafe_size,&__temp1674v__buf__unsafe_align,&__temp1674v__pos);
  bp__buf__unsafe_ptr=__temp1674v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1674v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1674v__buf__unsafe_align;
  bp__pos=__temp1674v__pos;
  __temp_errcode=copy__temp656v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1675v,&__temp1676v__buf__unsafe_ptr,&__temp1676v__buf__unsafe_size,&__temp1676v__buf__unsafe_align,&__temp1676v__dat__pos,&__temp1676v__dat__length,&__temp1676v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp656v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1677v__buf__unsafe_ptr,&__temp1677v__buf__unsafe_size,&__temp1677v__buf__unsafe_align,&__temp1677v__dat__pos,&__temp1677v__dat__length,&__temp1677v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1630v(path,&__temp1678v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1678v__unsafe_ptr;
  __temp1680v=4;
  KB__temp410v(__temp1680v,&__temp1681v__);
  __temp_errcode=alloc__temp487v(__temp1681v__,&__temp1682v__unsafe_ptr,&__temp1682v__unsafe_size,&__temp1682v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1682v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1682v__unsafe_size;
  proc_buf__unsafe_align=__temp1682v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1641v(&test_dir__unsafe_ptr,&__temp1685v__buf__unsafe_ptr,&__temp1685v__buf__unsafe_size,&__temp1685v__buf__unsafe_align,&__temp1685v__dat__pos,&__temp1685v__dat__length,&__temp1685v__dat__first);
  __temp1684v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1685v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1685v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1685v__buf__unsafe_align;
  entry__dat__pos=__temp1685v__dat__pos;
  entry__dat__length=__temp1685v__dat__length;
  entry__dat__first=__temp1685v__dat__first;
  __temp1684v=__temp1684v==0;
  if(!__temp1684v){
  break;
  }
  __temp_errcode=ends_with__temp856v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1686v,&__temp1687v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1687v__,&__temp1688v__);
  if(__temp1688v__){
  continue;
  }
  __temp1689v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1689v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1689v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1689v__pos=bp__pos;
  str__temp533v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1690v__buf__unsafe_ptr,&__temp1690v__buf__unsafe_size,&__temp1690v__buf__unsafe_align,&__temp1690v__dat__pos,&__temp1690v__dat__length,&__temp1690v__dat__first);
  __temp_errcode=copy__temp665v(&__temp1689v__buf__unsafe_ptr,&__temp1689v__buf__unsafe_size,&__temp1689v__buf__unsafe_align,&__temp1689v__pos,__temp1690v__buf__unsafe_ptr,__temp1690v__buf__unsafe_size,__temp1690v__buf__unsafe_align,__temp1690v__dat__pos,__temp1690v__dat__length,__temp1690v__dat__first,&__temp1691v__buf__unsafe_ptr,&__temp1691v__buf__unsafe_size,&__temp1691v__buf__unsafe_align,&__temp1691v__dat__pos,&__temp1691v__dat__length,&__temp1691v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp647v(__temp1691v__buf__unsafe_ptr,__temp1691v__buf__unsafe_size,__temp1691v__buf__unsafe_align,__temp1691v__dat__pos,__temp1691v__dat__length,__temp1691v__dat__first,&__temp1692v__buf__unsafe_ptr,&__temp1692v__buf__unsafe_size,&__temp1692v__buf__unsafe_align,&__temp1692v__dat__pos,&__temp1692v__dat__length,&__temp1692v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1692v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1692v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1692v__buf__unsafe_align;
  command__dat__pos=__temp1692v__dat__pos;
  command__dat__length=__temp1692v__dat__length;
  command__dat__first=__temp1692v__dat__first;
  len__temp544v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1693v__);
  __temp_errcode=sub__temp330v(max_command_length,__temp1693v__,&__temp1694v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp546v(__temp1695v,&__temp1696v__);
  __temp_errcode=rextend__temp601v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1694v__,__temp1696v__,&__temp1697v__buf__unsafe_ptr,&__temp1697v__buf__unsafe_size,&__temp1697v__buf__unsafe_align,&__temp1697v__dat__pos,&__temp1697v__dat__length,&__temp1697v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp700v(__temp1697v__buf__unsafe_ptr,__temp1697v__buf__unsafe_size,__temp1697v__buf__unsafe_align,__temp1697v__dat__pos,__temp1697v__dat__length,__temp1697v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp546v(__temp581v,&__temp1699v__);
  __temp_errcode=rextend__temp619v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1699v__,&__temp1700v__buf__unsafe_ptr,&__temp1700v__buf__unsafe_size,&__temp1700v__buf__unsafe_align,&__temp1700v__dat__pos,&__temp1700v__dat__length,&__temp1700v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=run__temp1661v(__temp1700v__buf__unsafe_ptr,__temp1700v__buf__unsafe_size,__temp1700v__buf__unsafe_align,__temp1700v__dat__pos,__temp1700v__dat__length,__temp1700v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1891v=0;
  neq__temp302v(__temp1682v__unsafe_size,__temp1891v,&__temp1892v);
  if(__temp1892v){
  __temp1682v__unsafe_size=0;
  free__temp428v(&__temp1682v__unsafe_ptr);
  }
  if(__temp1678v__unsafe_ptr){
  closedir((DIR*)__temp1678v__unsafe_ptr);
  __temp1678v__unsafe_ptr=0;
  }
  __temp1882v=0;
  neq__temp302v(__temp1672v__unsafe_size,__temp1882v,&__temp1883v);
  if(__temp1883v){
  __temp1672v__unsafe_size=0;
  free__temp428v(&__temp1672v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1669v();return 0;}