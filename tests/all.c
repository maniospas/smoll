#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1676v=".s";
const char* const __temp575v="";
const char* const __temp352v="\n";
const char* const __temp1665v="./smoll ";
const char* const __temp1685v=" ";
const char* const __temp1660v="./tests/passing/";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1692v=unsafe_ptr;
  *__temp1693v=unsafe_size;
  *__temp1694v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1695v) {
  int value=0;
  *__temp1695v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1696v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1696v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1697v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1697v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1698v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1698v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1699v) {
  char* allocated=*__temp1699v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1699v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1700v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1700v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1701v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1701v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1702v) {
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
  *__temp1702v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1703v, unsigned long long* __temp1704v, unsigned long long* __temp1705v, unsigned long long size, char** __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v) {
  char* buffer__unsafe_ptr=*__temp1703v;
  unsigned long long buffer__unsafe_size=*__temp1704v;
  unsigned long long buffer__unsafe_align=*__temp1705v;
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
  *__temp1703v=buffer__unsafe_ptr;
  *__temp1704v=buffer__unsafe_size;
  *__temp1705v=buffer__unsafe_align;
  *__temp1706v=buffer__unsafe_ptr;
  *__temp1707v=buffer__unsafe_size;
  *__temp1708v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, char** __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v) {
  char* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  char* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  char* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1711v=0;
  char __temp1712v=0;
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
  *__temp1713v=__temp492v__unsafe_ptr;
  *__temp1714v=__temp492v__unsafe_size;
  *__temp1715v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp592v(char** __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, char** __temp1719v, unsigned long long* __temp1720v, unsigned long long* __temp1721v, unsigned long long* __temp1722v) {
  char* buf__unsafe_ptr=*__temp1716v;
  unsigned long long buf__unsafe_size=*__temp1717v;
  unsigned long long buf__unsafe_align=*__temp1718v;
  unsigned long long __temp593v=0;
  unsigned long long __temp594v=0;
  unsigned long long pos=0;
  __temp593v=0;
  __temp594v=__temp593v;
  pos=__temp594v;
  *__temp1716v=buf__unsafe_ptr;
  *__temp1717v=buf__unsafe_size;
  *__temp1718v=buf__unsafe_align;
  *__temp1719v=buf__unsafe_ptr;
  *__temp1720v=buf__unsafe_size;
  *__temp1721v=buf__unsafe_align;
  *__temp1722v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1723v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1723v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1724v) {
  *__temp1724v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1725v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1725v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1726v) {
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
  *__temp1726v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, char* __temp1732v) {
  *__temp1727v=buf__unsafe_ptr;
  *__temp1728v=buf__unsafe_size;
  *__temp1729v=buf__unsafe_align;
  *__temp1730v=dat__pos;
  *__temp1731v=dat__length;
  *__temp1732v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1733v, unsigned long long* __temp1734v, unsigned long long* __temp1735v, unsigned long long* __temp1736v, unsigned long long* __temp1737v, char* __temp1738v) {
  unsigned long long __temp529v=0;
  char __temp530v__=0;
  char* __temp531v__=0;
  char __temp532v__value=0;
  char first=0;
  char* __temp533v__buf__unsafe_ptr=0;
  unsigned long long __temp533v__buf__unsafe_size=0;
  unsigned long long __temp533v__buf__unsafe_align=0;
  unsigned long long __temp533v__dat__pos=0;
  unsigned long long __temp533v__dat__length=0;
  char __temp533v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp529v=0;
  neq__temp302v(length,__temp529v,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp531v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp531v__){
  goto __temp_failure;
  }
  memcpy(&__temp532v__value,__temp531v__,1);
  first=__temp532v__value;
  }
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp533v__buf__unsafe_ptr,&__temp533v__buf__unsafe_size,&__temp533v__buf__unsafe_align,&__temp533v__dat__pos,&__temp533v__dat__length,&__temp533v__dat__first);
  *__temp1733v=__temp533v__buf__unsafe_ptr;
  *__temp1734v=__temp533v__buf__unsafe_size;
  *__temp1735v=__temp533v__buf__unsafe_align;
  *__temp1736v=__temp533v__dat__pos;
  *__temp1737v=__temp533v__dat__length;
  *__temp1738v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, char** __temp1740v, unsigned long long* __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, char* __temp1745v) {
  char* __temp535v__unsafe_ptr=0;
  unsigned long long __temp535v__unsafe_size=0;
  unsigned long long __temp535v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp536v=0;
  char* __temp537v__buf__unsafe_ptr=0;
  unsigned long long __temp537v__buf__unsafe_size=0;
  unsigned long long __temp537v__buf__unsafe_align=0;
  unsigned long long __temp537v__dat__pos=0;
  unsigned long long __temp537v__dat__length=0;
  char __temp537v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp535v__unsafe_ptr,&__temp535v__unsafe_size,&__temp535v__unsafe_align);
  buf__unsafe_ptr=__temp535v__unsafe_ptr;
  buf__unsafe_size=__temp535v__unsafe_size;
  buf__unsafe_align=__temp535v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp536v=0;
  __temp_errcode=str__temp528v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp536v,length,&__temp537v__buf__unsafe_ptr,&__temp537v__buf__unsafe_size,&__temp537v__buf__unsafe_align,&__temp537v__dat__pos,&__temp537v__dat__length,&__temp537v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1740v=__temp537v__buf__unsafe_ptr;
  *__temp1741v=__temp537v__buf__unsafe_size;
  *__temp1742v=__temp537v__buf__unsafe_align;
  *__temp1743v=__temp537v__dat__pos;
  *__temp1744v=__temp537v__dat__length;
  *__temp1745v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp538v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1746v) {
  *__temp1746v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1747v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1747v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1748v) {
  *__temp1748v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1749v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1749v=z;
}

int copy__temp650v(char** __temp1752v, unsigned long long* __temp1753v, unsigned long long* __temp1754v, unsigned long long* __temp1755v, const char* _other, char** __temp1756v, unsigned long long* __temp1757v, unsigned long long* __temp1758v, unsigned long long* __temp1759v, unsigned long long* __temp1760v, char* __temp1761v) {
  char* buf__unsafe_ptr=*__temp1752v;
  unsigned long long buf__unsafe_size=*__temp1753v;
  unsigned long long buf__unsafe_align=*__temp1754v;
  unsigned long long pos=*__temp1755v;
  char* __temp651v__buf__unsafe_ptr=0;
  unsigned long long __temp651v__buf__unsafe_size=0;
  unsigned long long __temp651v__buf__unsafe_align=0;
  unsigned long long __temp651v__dat__pos=0;
  unsigned long long __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
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
  char* __temp658v__buf__unsafe_ptr=0;
  unsigned long long __temp658v__buf__unsafe_size=0;
  unsigned long long __temp658v__buf__unsafe_align=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp534v(_other,&__temp651v__buf__unsafe_ptr,&__temp651v__buf__unsafe_size,&__temp651v__buf__unsafe_align,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp651v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp651v__buf__unsafe_size;
  other__buf__unsafe_align=__temp651v__buf__unsafe_align;
  other__dat__pos=__temp651v__dat__pos;
  other__dat__length=__temp651v__dat__length;
  other__dat__first=__temp651v__dat__first;
  len__temp538v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp652v__);
  add__temp110v(pos,__temp652v__,&__temp653v__);
  next_pos=__temp653v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp654v__);
  gt__temp206v(next_pos,__temp654v__,&__temp655v__);
  if(__temp655v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp656v=0;
  add__temp110v(pos,__temp656v,&__temp657v__);
  prev_pos=__temp657v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp658v__buf__unsafe_ptr,&__temp658v__buf__unsafe_size,&__temp658v__buf__unsafe_align,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  *__temp1752v=buf__unsafe_ptr;
  *__temp1753v=buf__unsafe_size;
  *__temp1754v=buf__unsafe_align;
  *__temp1755v=pos;
  *__temp1756v=__temp658v__buf__unsafe_ptr;
  *__temp1757v=__temp658v__buf__unsafe_size;
  *__temp1758v=__temp658v__buf__unsafe_align;
  *__temp1759v=__temp658v__dat__pos;
  *__temp1760v=__temp658v__dat__length;
  *__temp1761v=__temp658v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp591v(const char* other, const char** __temp1762v) {
  *__temp1762v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1763v) {
  char z=0;
  z=x!=0;
  *__temp1763v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1764v) {
  char z=0;
  z=value?0:1;
  *__temp1764v=z;
}

static inline __attribute__((always_inline)) int read__temp1620v(const char* _path, char** __temp1765v) {
  const char* __temp1621v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1622v__=0;
  char __temp1623v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp591v(_path,&__temp1621v__);
  path=__temp1621v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1622v__);
  not__temp18v(__temp1622v__,&__temp1623v__);
  if(__temp1623v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1765v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1766v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1766v=__temp412v__;
}

static inline __attribute__((always_inline)) int entry__temp1631v(char** __temp1767v, char** __temp1768v, unsigned long long* __temp1769v, unsigned long long* __temp1770v, unsigned long long* __temp1771v, unsigned long long* __temp1772v, char* __temp1773v) {
  char* f__unsafe_ptr=*__temp1767v;
  char __temp1632v__=0;
  char __temp1633v__=0;
  char* de=0;
  char __temp1634v__=0;
  char __temp1635v__=0;
  const char* dirname=0;
  char* __temp1636v__buf__unsafe_ptr=0;
  unsigned long long __temp1636v__buf__unsafe_size=0;
  unsigned long long __temp1636v__buf__unsafe_align=0;
  unsigned long long __temp1636v__dat__pos=0;
  unsigned long long __temp1636v__dat__length=0;
  char __temp1636v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1632v__);
  not__temp18v(__temp1632v__,&__temp1633v__);
  if(__temp1633v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1634v__);
  not__temp18v(__temp1634v__,&__temp1635v__);
  if(__temp1635v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp534v(dirname,&__temp1636v__buf__unsafe_ptr,&__temp1636v__buf__unsafe_size,&__temp1636v__buf__unsafe_align,&__temp1636v__dat__pos,&__temp1636v__dat__length,&__temp1636v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1767v=f__unsafe_ptr;
  *__temp1768v=__temp1636v__buf__unsafe_ptr;
  *__temp1769v=__temp1636v__buf__unsafe_size;
  *__temp1770v=__temp1636v__buf__unsafe_align;
  *__temp1771v=__temp1636v__dat__pos;
  *__temp1772v=__temp1636v__dat__length;
  *__temp1773v=__temp1636v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp527v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1774v, unsigned long long* __temp1775v, unsigned long long* __temp1776v, unsigned long long* __temp1777v, unsigned long long* __temp1778v, char* __temp1779v) {
  *__temp1774v=other__buf__unsafe_ptr;
  *__temp1775v=other__buf__unsafe_size;
  *__temp1776v=other__buf__unsafe_align;
  *__temp1777v=other__dat__pos;
  *__temp1778v=other__dat__length;
  *__temp1779v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1780v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1780v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1781v) {
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
  *__temp1781v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp771v(char* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, char** __temp1786v, unsigned long long* __temp1787v, unsigned long long* __temp1788v, unsigned long long* __temp1789v, unsigned long long* __temp1790v, char* __temp1791v) {
  char* __temp772v__buf__unsafe_ptr=0;
  unsigned long long __temp772v__buf__unsafe_size=0;
  unsigned long long __temp772v__buf__unsafe_align=0;
  unsigned long long __temp772v__dat__pos=0;
  unsigned long long __temp772v__dat__length=0;
  char __temp772v__dat__first=0;
  char* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  char __temp773v__=0;
  char* __temp774v__buf__unsafe_ptr=0;
  unsigned long long __temp774v__buf__unsafe_size=0;
  unsigned long long __temp774v__buf__unsafe_align=0;
  unsigned long long __temp774v__dat__pos=0;
  unsigned long long __temp774v__dat__length=0;
  char __temp774v__dat__first=0;
  char __temp775v__=0;
  char __temp776v__=0;
  char __temp777v=0;
  unsigned long long __temp778v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp779v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp780v=0;
  char __temp781v__=0;
  char new_first=0;
  char* __temp782v__=0;
  char __temp783v__value=0;
  char* __temp784v__buf__unsafe_ptr=0;
  unsigned long long __temp784v__buf__unsafe_size=0;
  unsigned long long __temp784v__buf__unsafe_align=0;
  unsigned long long __temp784v__dat__pos=0;
  unsigned long long __temp784v__dat__length=0;
  char __temp784v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp772v__buf__unsafe_ptr,&__temp772v__buf__unsafe_size,&__temp772v__buf__unsafe_align,&__temp772v__dat__pos,&__temp772v__dat__length,&__temp772v__dat__first);
  s__buf__unsafe_ptr=__temp772v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp772v__buf__unsafe_size;
  s__buf__unsafe_align=__temp772v__buf__unsafe_align;
  s__dat__pos=__temp772v__dat__pos;
  s__dat__length=__temp772v__dat__length;
  s__dat__first=__temp772v__dat__first;
  eq__temp278v(from,to,&__temp773v__);
  if(__temp773v__){
  __temp_errcode=str__temp534v(__temp575v,&__temp774v__buf__unsafe_ptr,&__temp774v__buf__unsafe_size,&__temp774v__buf__unsafe_align,&__temp774v__dat__pos,&__temp774v__dat__length,&__temp774v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp182v(from,to,&__temp775v__);
  if(!__temp775v__){
  gt__temp206v(to,s__dat__length,&__temp776v__);
  __temp777v=__temp776v__;
  }
  if(__temp777v){
  __temp_errcode=15;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp330v(to,from,&__temp778v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp778v__;
  add__temp110v(s__dat__pos,from,&__temp779v__);
  new_pos=__temp779v__;
  __temp780v=0;
  neq__temp302v(from,__temp780v,&__temp781v__);
  if(__temp781v__){
  __temp_errcode=get__temp482v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,&__temp782v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp782v__){
  goto __temp_failure;
  }
  memcpy(&__temp783v__value,__temp782v__,1);
  new_first=__temp783v__value;
  }
  else{
  new_first=s__dat__first;
  }
  str__temp518v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,new_length,new_first,&__temp784v__buf__unsafe_ptr,&__temp784v__buf__unsafe_size,&__temp784v__buf__unsafe_align,&__temp784v__dat__pos,&__temp784v__dat__length,&__temp784v__dat__first);
  __temp774v__buf__unsafe_ptr=__temp784v__buf__unsafe_ptr;
  __temp774v__buf__unsafe_size=__temp784v__buf__unsafe_size;
  __temp774v__buf__unsafe_align=__temp784v__buf__unsafe_align;
  __temp774v__dat__pos=__temp784v__dat__pos;
  __temp774v__dat__length=__temp784v__dat__length;
  __temp774v__dat__first=__temp784v__dat__first;
  __temp_return:
  *__temp1786v=__temp774v__buf__unsafe_ptr;
  *__temp1787v=__temp774v__buf__unsafe_size;
  *__temp1788v=__temp774v__buf__unsafe_align;
  *__temp1789v=__temp774v__dat__pos;
  *__temp1790v=__temp774v__dat__length;
  *__temp1791v=__temp774v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp542v(char x, char y, char* __temp1792v) {
  char z=0;
  z=(x!=y);
  *__temp1792v=z;
}

static inline __attribute__((always_inline)) void eq__temp736v(char* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, char* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, char* __temp1793v) {
  unsigned long long __temp737v__=0;
  unsigned long long n=0;
  unsigned long long __temp738v__=0;
  char __temp739v__=0;
  char __temp740v=0;
  char __temp741v__=0;
  char __temp742v=0;
  char z=0;
  len__temp538v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__dat__pos,x__dat__length,x__dat__first,&__temp737v__);
  n=__temp737v__;
  len__temp538v(y__buf__unsafe_ptr,y__buf__unsafe_size,y__buf__unsafe_align,y__dat__pos,y__dat__length,y__dat__first,&__temp738v__);
  neq__temp302v(n,__temp738v__,&__temp739v__);
  if(__temp739v__){
  __temp740v=0;
  goto __temp_return;
  }
  neq__temp542v(x__dat__first,y__dat__first,&__temp741v__);
  if(__temp741v__){
  __temp742v=0;
  __temp740v=__temp742v;
  goto __temp_return;
  }
  z=!memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos,((char*)y__buf__unsafe_ptr)+y__dat__pos,n);
  __temp740v=z;
  __temp_return:
  *__temp1793v=__temp740v;
}

static inline __attribute__((always_inline)) int ends_with__temp849v(char* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1800v) {
  char* __temp850v__buf__unsafe_ptr=0;
  unsigned long long __temp850v__buf__unsafe_size=0;
  unsigned long long __temp850v__buf__unsafe_align=0;
  unsigned long long __temp850v__dat__pos=0;
  unsigned long long __temp850v__dat__length=0;
  char __temp850v__dat__first=0;
  char* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp851v__buf__unsafe_ptr=0;
  unsigned long long __temp851v__buf__unsafe_size=0;
  unsigned long long __temp851v__buf__unsafe_align=0;
  unsigned long long __temp851v__dat__pos=0;
  unsigned long long __temp851v__dat__length=0;
  char __temp851v__dat__first=0;
  char* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  char __temp852v__=0;
  char __temp853v=0;
  unsigned long long __temp854v__=0;
  unsigned long long n=0;
  unsigned long long __temp855v__=0;
  unsigned long long __temp856v__=0;
  char* __temp857v__buf__unsafe_ptr=0;
  unsigned long long __temp857v__buf__unsafe_size=0;
  unsigned long long __temp857v__buf__unsafe_align=0;
  unsigned long long __temp857v__dat__pos=0;
  unsigned long long __temp857v__dat__length=0;
  char __temp857v__dat__first=0;
  char* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  char __temp858v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp850v__buf__unsafe_ptr,&__temp850v__buf__unsafe_size,&__temp850v__buf__unsafe_align,&__temp850v__dat__pos,&__temp850v__dat__length,&__temp850v__dat__first);
  stack__buf__unsafe_ptr=__temp850v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp850v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp850v__buf__unsafe_align;
  stack__dat__pos=__temp850v__dat__pos;
  stack__dat__length=__temp850v__dat__length;
  stack__dat__first=__temp850v__dat__first;
  __temp_errcode=str__temp534v(_needle,&__temp851v__buf__unsafe_ptr,&__temp851v__buf__unsafe_size,&__temp851v__buf__unsafe_align,&__temp851v__dat__pos,&__temp851v__dat__length,&__temp851v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp851v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp851v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp851v__buf__unsafe_align;
  needle__dat__pos=__temp851v__dat__pos;
  needle__dat__length=__temp851v__dat__length;
  needle__dat__first=__temp851v__dat__first;
  lt__temp182v(stack__dat__length,needle__dat__length,&__temp852v__);
  if(__temp852v__){
  __temp853v=0;
  goto __temp_return;
  }
  len__temp538v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp854v__);
  n=__temp854v__;
  len__temp538v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp855v__);
  __temp_errcode=sub__temp330v(n,__temp855v__,&__temp856v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp771v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp856v__,n,&__temp857v__buf__unsafe_ptr,&__temp857v__buf__unsafe_size,&__temp857v__buf__unsafe_align,&__temp857v__dat__pos,&__temp857v__dat__length,&__temp857v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp857v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp857v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp857v__buf__unsafe_align;
  ret__dat__pos=__temp857v__dat__pos;
  ret__dat__length=__temp857v__dat__length;
  ret__dat__first=__temp857v__dat__first;
  eq__temp736v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp858v__);
  __temp853v=__temp858v__;
  __temp_return:
  *__temp1800v=__temp853v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp659v(char** __temp1803v, unsigned long long* __temp1804v, unsigned long long* __temp1805v, unsigned long long* __temp1806v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1807v, unsigned long long* __temp1808v, unsigned long long* __temp1809v, unsigned long long* __temp1810v, unsigned long long* __temp1811v, char* __temp1812v) {
  char* buf__unsafe_ptr=*__temp1803v;
  unsigned long long buf__unsafe_size=*__temp1804v;
  unsigned long long buf__unsafe_align=*__temp1805v;
  unsigned long long pos=*__temp1806v;
  char* __temp660v__buf__unsafe_ptr=0;
  unsigned long long __temp660v__buf__unsafe_size=0;
  unsigned long long __temp660v__buf__unsafe_align=0;
  unsigned long long __temp660v__dat__pos=0;
  unsigned long long __temp660v__dat__length=0;
  char __temp660v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp661v__=0;
  unsigned long long __temp662v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp663v__=0;
  char __temp664v__=0;
  unsigned long long __temp665v=0;
  unsigned long long __temp666v__=0;
  unsigned long long prev_pos=0;
  char* __temp667v__buf__unsafe_ptr=0;
  unsigned long long __temp667v__buf__unsafe_size=0;
  unsigned long long __temp667v__buf__unsafe_align=0;
  unsigned long long __temp667v__dat__pos=0;
  unsigned long long __temp667v__dat__length=0;
  char __temp667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp660v__buf__unsafe_ptr,&__temp660v__buf__unsafe_size,&__temp660v__buf__unsafe_align,&__temp660v__dat__pos,&__temp660v__dat__length,&__temp660v__dat__first);
  other__buf__unsafe_ptr=__temp660v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp660v__buf__unsafe_size;
  other__buf__unsafe_align=__temp660v__buf__unsafe_align;
  other__dat__pos=__temp660v__dat__pos;
  other__dat__length=__temp660v__dat__length;
  other__dat__first=__temp660v__dat__first;
  len__temp538v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp661v__);
  add__temp110v(pos,__temp661v__,&__temp662v__);
  next_pos=__temp662v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp663v__);
  gt__temp206v(next_pos,__temp663v__,&__temp664v__);
  if(__temp664v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp665v=0;
  add__temp110v(pos,__temp665v,&__temp666v__);
  prev_pos=__temp666v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp667v__buf__unsafe_ptr,&__temp667v__buf__unsafe_size,&__temp667v__buf__unsafe_align,&__temp667v__dat__pos,&__temp667v__dat__length,&__temp667v__dat__first);
  *__temp1803v=buf__unsafe_ptr;
  *__temp1804v=buf__unsafe_size;
  *__temp1805v=buf__unsafe_align;
  *__temp1806v=pos;
  *__temp1807v=__temp667v__buf__unsafe_ptr;
  *__temp1808v=__temp667v__buf__unsafe_size;
  *__temp1809v=__temp667v__buf__unsafe_align;
  *__temp1810v=__temp667v__dat__pos;
  *__temp1811v=__temp667v__dat__length;
  *__temp1812v=__temp667v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp641v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char** __temp1815v, unsigned long long* __temp1816v, unsigned long long* __temp1817v, unsigned long long* __temp1818v, unsigned long long* __temp1819v, char* __temp1820v) {
  unsigned long long __temp643v=0;
  unsigned long long pos=0;
  char __temp644v__=0;
  unsigned long long __temp645v__=0;
  char __temp646v__=0;
  unsigned long long __temp647v__=0;
  unsigned long long __temp648v__=0;
  char* __temp649v__buf__unsafe_ptr=0;
  unsigned long long __temp649v__buf__unsafe_size=0;
  unsigned long long __temp649v__buf__unsafe_align=0;
  unsigned long long __temp649v__dat__pos=0;
  unsigned long long __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp643v=0;
  pos=__temp643v;
  eq__temp278v(pos,s__dat__pos,&__temp644v__);
  if(__temp644v__){
  goto __temp_return;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp645v__);
  gt__temp206v(pos,__temp645v__,&__temp646v__);
  if(__temp646v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp647v__);
  __temp_errcode=sub__temp330v(__temp647v__,pos,&__temp648v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp528v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,pos,__temp648v__,&__temp649v__buf__unsafe_ptr,&__temp649v__buf__unsafe_size,&__temp649v__buf__unsafe_align,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp649v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp649v__buf__unsafe_size;
  s__buf__unsafe_align=__temp649v__buf__unsafe_align;
  s__dat__pos=__temp649v__dat__pos;
  s__dat__length=__temp649v__dat__length;
  s__dat__first=__temp649v__dat__first;
  __temp_return:
  *__temp1815v=s__buf__unsafe_ptr;
  *__temp1816v=s__buf__unsafe_size;
  *__temp1817v=s__buf__unsafe_align;
  *__temp1818v=s__dat__pos;
  *__temp1819v=s__dat__length;
  *__temp1820v=s__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp540v(const char* s, char* __temp1821v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1821v=c;
}

static inline __attribute__((always_inline)) void true__temp8v(int* __temp1822v) {
  int value=0;
  *__temp1822v=value;
}

static inline __attribute__((always_inline)) void not__temp29v(int __temp_anon0, int* __temp1823v) {
  int __temp30v__=0;
  true__temp8v(&__temp30v__);
  *__temp1823v=__temp30v__;
}

static inline __attribute__((always_inline)) int rextend__temp595v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, char** __temp1824v, unsigned long long* __temp1825v, unsigned long long* __temp1826v, unsigned long long* __temp1827v, unsigned long long* __temp1828v, char* __temp1829v) {
  unsigned long long __temp597v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp598v__=0;
  unsigned long long __temp599v__=0;
  char __temp600v__=0;
  int __temp601v=0;
  int __temp602v__=0;
  char* __temp603v__buf__unsafe_ptr=0;
  unsigned long long __temp603v__buf__unsafe_size=0;
  unsigned long long __temp603v__buf__unsafe_align=0;
  unsigned long long __temp603v__dat__pos=0;
  unsigned long long __temp603v__dat__length=0;
  char __temp603v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(s__dat__length,by,&__temp597v__);
  new_length=__temp597v__;
  add__temp110v(new_length,s__dat__pos,&__temp598v__);
  len__temp486v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp599v__);
  gt__temp206v(__temp598v__,__temp599v__,&__temp600v__);
  if(__temp600v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp601v,&__temp602v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp518v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp603v__buf__unsafe_ptr,&__temp603v__buf__unsafe_size,&__temp603v__buf__unsafe_align,&__temp603v__dat__pos,&__temp603v__dat__length,&__temp603v__dat__first);
  *__temp1824v=__temp603v__buf__unsafe_ptr;
  *__temp1825v=__temp603v__buf__unsafe_size;
  *__temp1826v=__temp603v__buf__unsafe_align;
  *__temp1827v=__temp603v__dat__pos;
  *__temp1828v=__temp603v__dat__length;
  *__temp1829v=__temp603v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp694v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp696v__=0;
  char __temp697v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp352v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp696v__);
  gt__temp206v(__temp696v__,s__buf__unsafe_size,&__temp697v__);
  if(__temp697v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp613v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, char** __temp1830v, unsigned long long* __temp1831v, unsigned long long* __temp1832v, unsigned long long* __temp1833v, unsigned long long* __temp1834v, char* __temp1835v) {
  unsigned long long __temp615v=0;
  unsigned long long by=0;
  unsigned long long __temp616v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp617v__=0;
  unsigned long long __temp618v__=0;
  char __temp619v__=0;
  int __temp620v=0;
  int __temp621v__=0;
  char* __temp622v__buf__unsafe_ptr=0;
  unsigned long long __temp622v__buf__unsafe_size=0;
  unsigned long long __temp622v__buf__unsafe_align=0;
  unsigned long long __temp622v__dat__pos=0;
  unsigned long long __temp622v__dat__length=0;
  char __temp622v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp615v=1;
  by=__temp615v;
  add__temp110v(s__dat__length,by,&__temp616v__);
  new_length=__temp616v__;
  add__temp110v(new_length,s__dat__pos,&__temp617v__);
  len__temp486v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp618v__);
  gt__temp206v(__temp617v__,__temp618v__,&__temp619v__);
  if(__temp619v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp620v,&__temp621v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp518v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp622v__buf__unsafe_ptr,&__temp622v__buf__unsafe_size,&__temp622v__buf__unsafe_align,&__temp622v__dat__pos,&__temp622v__dat__length,&__temp622v__dat__first);
  *__temp1830v=__temp622v__buf__unsafe_ptr;
  *__temp1831v=__temp622v__buf__unsafe_size;
  *__temp1832v=__temp622v__buf__unsafe_align;
  *__temp1833v=__temp622v__dat__pos;
  *__temp1834v=__temp622v__dat__length;
  *__temp1835v=__temp622v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1836v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1836v=z;
}

static inline __attribute__((always_inline)) void eq__temp541v(char x, char y, char* __temp1837v) {
  char z=0;
  z=(x==y);
  *__temp1837v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp557v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1841v, unsigned long long* __temp1842v, unsigned long long* __temp1843v, unsigned long long* __temp1844v, unsigned long long* __temp1845v, char* __temp1846v) {
  unsigned long long __temp558v=0;
  unsigned long long __temp559v__=0;
  unsigned long long __temp560v__=0;
  char* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__unsafe_size=0;
  unsigned long long __temp561v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp563v=0;
  char* __temp564v__buf__unsafe_ptr=0;
  unsigned long long __temp564v__buf__unsafe_size=0;
  unsigned long long __temp564v__buf__unsafe_align=0;
  unsigned long long __temp564v__dat__pos=0;
  unsigned long long __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  unsigned long long __temp1839v=0;
  char __temp1840v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp558v=1;
  len__temp538v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp559v__);
  add__temp110v(__temp558v,__temp559v__,&__temp560v__);
  __temp_errcode=alloc__temp487v(__temp560v__,&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp561v__unsafe_ptr;
  buf__unsafe_size=__temp561v__unsafe_size;
  buf__unsafe_align=__temp561v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[other__dat__length]=0;
  __temp563v=0;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp563v,other__dat__length,other__dat__first,&__temp564v__buf__unsafe_ptr,&__temp564v__buf__unsafe_size,&__temp564v__buf__unsafe_align,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  *__temp1841v=__temp564v__buf__unsafe_ptr;
  *__temp1842v=__temp564v__buf__unsafe_size;
  *__temp1843v=__temp564v__buf__unsafe_align;
  *__temp1844v=__temp564v__dat__pos;
  *__temp1845v=__temp564v__dat__length;
  *__temp1846v=__temp564v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp516v(const char* c, char* __temp1847v) {
  char z=0;
  z=c!=0;
  *__temp1847v=z;
}

int unsafe_temporary_cstr__temp565v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1852v) {
  unsigned long long __temp566v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp567v=0;
  char __temp568v__=0;
  unsigned long long __temp569v__=0;
  char __temp570v__=0;
  unsigned long long __temp571v=0;
  unsigned long long __temp572v__=0;
  char* __temp573v__=0;
  char __temp574v__value=0;
  char __temp576v__=0;
  char __temp577v__=0;
  char __temp578v=0;
  char __temp579v=0;
  unsigned long long __temp580v__=0;
  char __temp581v__=0;
  char* __temp582v__=0;
  char __temp583v__value=0;
  char __temp584v__=0;
  char __temp585v__=0;
  char __temp586v=0;
  char* __temp587v__buf__unsafe_ptr=0;
  unsigned long long __temp587v__buf__unsafe_size=0;
  unsigned long long __temp587v__buf__unsafe_align=0;
  unsigned long long __temp587v__dat__pos=0;
  unsigned long long __temp587v__dat__length=0;
  char __temp587v__dat__first=0;
  char* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp589v__=0;
  char __temp590v__=0;
  unsigned long long __temp1850v=0;
  char __temp1851v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(other__dat__pos,other__dat__length,&__temp566v__);
  end_pos=__temp566v__;
  __temp567v=0;
  neq__temp302v(end_pos,__temp567v,&__temp568v__);
  if(__temp568v__){
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp569v__);
  le__temp230v(end_pos,__temp569v__,&__temp570v__);
  if(__temp570v__){
  __temp571v=1;
  __temp_errcode=sub__temp330v(end_pos,__temp571v,&__temp572v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp572v__,&__temp573v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp573v__){
  goto __temp_failure;
  }
  memcpy(&__temp574v__value,__temp573v__,1);
  char__temp540v(__temp575v,&__temp576v__);
  eq__temp541v(__temp574v__value,__temp576v__,&__temp577v__);
  __temp578v=__temp577v__;
  }
  __temp579v=__temp578v;
  }
  if(__temp579v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp580v__);
  lt__temp182v(end_pos,__temp580v__,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp582v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp582v__){
  goto __temp_failure;
  }
  memcpy(&__temp583v__value,__temp582v__,1);
  char__temp540v(__temp575v,&__temp584v__);
  eq__temp541v(__temp583v__value,__temp584v__,&__temp585v__);
  __temp586v=__temp585v__;
  }
  if(__temp586v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp557v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp587v__buf__unsafe_ptr,&__temp587v__buf__unsafe_size,&__temp587v__buf__unsafe_align,&__temp587v__dat__pos,&__temp587v__dat__length,&__temp587v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp587v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp587v__buf__unsafe_size;
  c__buf__unsafe_align=__temp587v__buf__unsafe_align;
  c__dat__pos=__temp587v__dat__pos;
  c__dat__length=__temp587v__dat__length;
  c__dat__first=__temp587v__dat__first;
  }
  }
  ret=((char*)c__buf__unsafe_ptr)+c__dat__pos;
  *__temp1852v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1853v) {
  long long int z=0;
  z=x;
  *__temp1853v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1854v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1854v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1855v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  *__temp1855v=z;
}

static inline __attribute__((always_inline)) int read__temp1213v(char* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, char** __temp1862v) {
  const char* __temp1214v__=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1216v__=0;
  char __temp1217v__=0;
  char __temp1218v__=0;
  long long int status=0;
  unsigned long long __temp1219v=0;
  long long int __temp1220v__=0;
  char __temp1221v__=0;
  char __temp1222v=0;
  char __temp1856v=0;
  char __temp1857v=0;
  unsigned long long __temp1858v=0;
  unsigned long long __temp1859v=0;
  char __temp1860v=0;
  char* __temp1861v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp565v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1214v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp398v(unsafe_ptr,&__temp1216v__);
  not__temp18v(__temp1216v__,&__temp1217v__);
  if(__temp1217v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  *__temp1862v=unsafe_ptr;
  
  __temp_failure:exists__temp516v(__temp1214v__,&__temp1856v);
  not__temp18v(__temp1856v,&__temp1857v);
  if(__temp1857v){
  __temp1858v=0;
  neq__temp302v(__temp1859v,__temp1858v,&__temp1860v);
  if(__temp1860v){
  __temp1859v=0;
  free__temp428v(&__temp1861v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1195v(long long int value, const char** __temp1863v) {
  const char* endl=0;
  const char* ret=0;
  endl=__temp352v;
  ret=__temp_all_errcodes[value];
  *__temp1863v=ret;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1651v(char* command__buf__unsafe_ptr, unsigned long long command__buf__unsafe_size, unsigned long long command__buf__unsafe_align, unsigned long long command__dat__pos, unsigned long long command__dat__length, char command__dat__first) {
  char* __temp1652v__unsafe_ptr=0;
  long long int __temp1653v__status=0;
  char* __temp1654v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1655v=0;
  long long int __temp1656v=0;
  long long int error=0;
  const char* __temp1657v__=0;
  char __temp1865v=0;
  unsigned long long __temp1866v=0;
  long long int __temp1867v=0;
  char __temp1868v=0;
  char __temp1869v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1213v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1652v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1654v__unsafe_ptr=__temp1652v__unsafe_ptr;
  proc__unsafe_ptr=__temp1654v__unsafe_ptr;
  exists__temp398v(__temp1652v__unsafe_ptr,&__temp1865v);
  if(__temp1865v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1652v__unsafe_ptr)){
  }
  __temp1653v__status=pclose((FILE*)__temp1652v__unsafe_ptr);
  __temp1652v__unsafe_ptr=0;
  }
  __temp1866v=0;
  int__temp382v(__temp1866v,&__temp1867v);
  neq__temp291v(__temp1653v__status,__temp1867v,&__temp1868v);
  if(__temp1868v){
  __temp_complain=29;
  __temp1869v=__temp1869v==0;
  }
  __temp1656v=__temp_complain;
  __temp1655v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1656v;
  __temp1655v=__temp1655v==0;
  if(__temp1655v){
  cstr__temp1195v(error,&__temp1657v__);
  print__temp350v(__temp1657v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1659v() {
  const char* path=0;
  unsigned long long __temp1661v=0;
  unsigned long long max_command_length=0;
  char* __temp1662v__unsafe_ptr=0;
  unsigned long long __temp1662v__unsafe_size=0;
  unsigned long long __temp1662v__unsafe_align=0;
  char* __temp1664v__buf__unsafe_ptr=0;
  unsigned long long __temp1664v__buf__unsafe_size=0;
  unsigned long long __temp1664v__buf__unsafe_align=0;
  unsigned long long __temp1664v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  char* __temp1666v__buf__unsafe_ptr=0;
  unsigned long long __temp1666v__buf__unsafe_size=0;
  unsigned long long __temp1666v__buf__unsafe_align=0;
  unsigned long long __temp1666v__dat__pos=0;
  unsigned long long __temp1666v__dat__length=0;
  char __temp1666v__dat__first=0;
  char* __temp1667v__buf__unsafe_ptr=0;
  unsigned long long __temp1667v__buf__unsafe_size=0;
  unsigned long long __temp1667v__buf__unsafe_align=0;
  unsigned long long __temp1667v__dat__pos=0;
  unsigned long long __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  char* __temp1668v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  unsigned long long __temp1670v=0;
  unsigned long long __temp1671v__=0;
  char* __temp1672v__unsafe_ptr=0;
  unsigned long long __temp1672v__unsafe_size=0;
  unsigned long long __temp1672v__unsafe_align=0;
  char* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  char __temp1674v=0;
  char* __temp1675v__buf__unsafe_ptr=0;
  unsigned long long __temp1675v__buf__unsafe_size=0;
  unsigned long long __temp1675v__buf__unsafe_align=0;
  unsigned long long __temp1675v__dat__pos=0;
  unsigned long long __temp1675v__dat__length=0;
  char __temp1675v__dat__first=0;
  char* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1677v__=0;
  char __temp1678v__=0;
  char* __temp1679v__buf__unsafe_ptr=0;
  unsigned long long __temp1679v__buf__unsafe_size=0;
  unsigned long long __temp1679v__buf__unsafe_align=0;
  unsigned long long __temp1679v__pos=0;
  char* __temp1680v__buf__unsafe_ptr=0;
  unsigned long long __temp1680v__buf__unsafe_size=0;
  unsigned long long __temp1680v__buf__unsafe_align=0;
  unsigned long long __temp1680v__dat__pos=0;
  unsigned long long __temp1680v__dat__length=0;
  char __temp1680v__dat__first=0;
  char* __temp1681v__buf__unsafe_ptr=0;
  unsigned long long __temp1681v__buf__unsafe_size=0;
  unsigned long long __temp1681v__buf__unsafe_align=0;
  unsigned long long __temp1681v__dat__pos=0;
  unsigned long long __temp1681v__dat__length=0;
  char __temp1681v__dat__first=0;
  char* __temp1682v__buf__unsafe_ptr=0;
  unsigned long long __temp1682v__buf__unsafe_size=0;
  unsigned long long __temp1682v__buf__unsafe_align=0;
  unsigned long long __temp1682v__dat__pos=0;
  unsigned long long __temp1682v__dat__length=0;
  char __temp1682v__dat__first=0;
  char* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1683v__=0;
  unsigned long long __temp1684v__=0;
  char __temp1686v__=0;
  char* __temp1687v__buf__unsafe_ptr=0;
  unsigned long long __temp1687v__buf__unsafe_size=0;
  unsigned long long __temp1687v__buf__unsafe_align=0;
  unsigned long long __temp1687v__dat__pos=0;
  unsigned long long __temp1687v__dat__length=0;
  char __temp1687v__dat__first=0;
  char __temp1689v__=0;
  char* __temp1690v__buf__unsafe_ptr=0;
  unsigned long long __temp1690v__buf__unsafe_size=0;
  unsigned long long __temp1690v__buf__unsafe_align=0;
  unsigned long long __temp1690v__dat__pos=0;
  unsigned long long __temp1690v__dat__length=0;
  char __temp1690v__dat__first=0;
  unsigned long long __temp1872v=0;
  char __temp1873v=0;
  unsigned long long __temp1881v=0;
  char __temp1882v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1660v;
  __temp1661v=50;
  max_command_length=__temp1661v;
  __temp_errcode=alloc__temp487v(max_command_length,&__temp1662v__unsafe_ptr,&__temp1662v__unsafe_size,&__temp1662v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp592v(&__temp1662v__unsafe_ptr,&__temp1662v__unsafe_size,&__temp1662v__unsafe_align,&__temp1664v__buf__unsafe_ptr,&__temp1664v__buf__unsafe_size,&__temp1664v__buf__unsafe_align,&__temp1664v__pos);
  bp__buf__unsafe_ptr=__temp1664v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1664v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1664v__buf__unsafe_align;
  bp__pos=__temp1664v__pos;
  __temp_errcode=copy__temp650v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1665v,&__temp1666v__buf__unsafe_ptr,&__temp1666v__buf__unsafe_size,&__temp1666v__buf__unsafe_align,&__temp1666v__dat__pos,&__temp1666v__dat__length,&__temp1666v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp650v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1667v__buf__unsafe_ptr,&__temp1667v__buf__unsafe_size,&__temp1667v__buf__unsafe_align,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1620v(path,&__temp1668v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1668v__unsafe_ptr;
  __temp1670v=4;
  KB__temp410v(__temp1670v,&__temp1671v__);
  __temp_errcode=alloc__temp487v(__temp1671v__,&__temp1672v__unsafe_ptr,&__temp1672v__unsafe_size,&__temp1672v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1672v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1672v__unsafe_size;
  proc_buf__unsafe_align=__temp1672v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1631v(&test_dir__unsafe_ptr,&__temp1675v__buf__unsafe_ptr,&__temp1675v__buf__unsafe_size,&__temp1675v__buf__unsafe_align,&__temp1675v__dat__pos,&__temp1675v__dat__length,&__temp1675v__dat__first);
  __temp1674v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1675v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1675v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1675v__buf__unsafe_align;
  entry__dat__pos=__temp1675v__dat__pos;
  entry__dat__length=__temp1675v__dat__length;
  entry__dat__first=__temp1675v__dat__first;
  __temp1674v=__temp1674v==0;
  if(!__temp1674v)break;
  __temp_errcode=ends_with__temp849v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1676v,&__temp1677v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1677v__,&__temp1678v__);
  if(__temp1678v__){
  continue;
  }
  __temp1679v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1679v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1679v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1679v__pos=bp__pos;
  str__temp527v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1680v__buf__unsafe_ptr,&__temp1680v__buf__unsafe_size,&__temp1680v__buf__unsafe_align,&__temp1680v__dat__pos,&__temp1680v__dat__length,&__temp1680v__dat__first);
  __temp_errcode=copy__temp659v(&__temp1679v__buf__unsafe_ptr,&__temp1679v__buf__unsafe_size,&__temp1679v__buf__unsafe_align,&__temp1679v__pos,__temp1680v__buf__unsafe_ptr,__temp1680v__buf__unsafe_size,__temp1680v__buf__unsafe_align,__temp1680v__dat__pos,__temp1680v__dat__length,__temp1680v__dat__first,&__temp1681v__buf__unsafe_ptr,&__temp1681v__buf__unsafe_size,&__temp1681v__buf__unsafe_align,&__temp1681v__dat__pos,&__temp1681v__dat__length,&__temp1681v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp641v(__temp1681v__buf__unsafe_ptr,__temp1681v__buf__unsafe_size,__temp1681v__buf__unsafe_align,__temp1681v__dat__pos,__temp1681v__dat__length,__temp1681v__dat__first,&__temp1682v__buf__unsafe_ptr,&__temp1682v__buf__unsafe_size,&__temp1682v__buf__unsafe_align,&__temp1682v__dat__pos,&__temp1682v__dat__length,&__temp1682v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1682v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1682v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1682v__buf__unsafe_align;
  command__dat__pos=__temp1682v__dat__pos;
  command__dat__length=__temp1682v__dat__length;
  command__dat__first=__temp1682v__dat__first;
  len__temp538v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1683v__);
  __temp_errcode=sub__temp330v(max_command_length,__temp1683v__,&__temp1684v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp540v(__temp1685v,&__temp1686v__);
  __temp_errcode=rextend__temp595v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1684v__,__temp1686v__,&__temp1687v__buf__unsafe_ptr,&__temp1687v__buf__unsafe_size,&__temp1687v__buf__unsafe_align,&__temp1687v__dat__pos,&__temp1687v__dat__length,&__temp1687v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp694v(__temp1687v__buf__unsafe_ptr,__temp1687v__buf__unsafe_size,__temp1687v__buf__unsafe_align,__temp1687v__dat__pos,__temp1687v__dat__length,__temp1687v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp540v(__temp575v,&__temp1689v__);
  __temp_errcode=rextend__temp613v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1689v__,&__temp1690v__buf__unsafe_ptr,&__temp1690v__buf__unsafe_size,&__temp1690v__buf__unsafe_align,&__temp1690v__dat__pos,&__temp1690v__dat__length,&__temp1690v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=run__temp1651v(__temp1690v__buf__unsafe_ptr,__temp1690v__buf__unsafe_size,__temp1690v__buf__unsafe_align,__temp1690v__dat__pos,__temp1690v__dat__length,__temp1690v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1881v=0;
  neq__temp302v(__temp1672v__unsafe_size,__temp1881v,&__temp1882v);
  if(__temp1882v){
  __temp1672v__unsafe_size=0;
  free__temp428v(&__temp1672v__unsafe_ptr);
  }
  if(__temp1668v__unsafe_ptr){
  closedir((DIR*)__temp1668v__unsafe_ptr);
  __temp1668v__unsafe_ptr=0;
  }
  __temp1872v=0;
  neq__temp302v(__temp1662v__unsafe_size,__temp1872v,&__temp1873v);
  if(__temp1873v){
  __temp1662v__unsafe_size=0;
  free__temp428v(&__temp1662v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1659v();return 0;}