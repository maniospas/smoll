#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[44] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp576v="";
const char* const __temp348v="\n";
const char* const __temp1659v="./tests/passing/";
const char* const __temp409v="kilobytes to bytes";
const char* const __temp1664v="./smoll ";
const char* const __temp1682v=" ";
const char* const __temp1676v=".s";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1698v=unsafe_ptr;
  *__temp1699v=unsafe_size;
  *__temp1700v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1701v) {
  int value=0;
  *__temp1701v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1702v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1702v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1703v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1703v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1704v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1704v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1705v) {
  void* allocated=*__temp1705v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1705v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1706v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1707v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1707v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1708v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1708v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v, unsigned long long size, void** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v) {
  void* buffer__unsafe_ptr=*__temp1709v;
  unsigned long long buffer__unsafe_size=*__temp1710v;
  unsigned long long buffer__unsafe_align=*__temp1711v;
  unsigned long long __temp436v=0;
  int __temp437v__=0;
  int __temp440v__=0;
  unsigned long long __temp441v=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  int __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  void* __temp449v__=0;
  unsigned long long __temp450v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  neq__temp302v(size,__temp441v,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp444v__);
  zero__temp430v(buffer__unsafe_ptr,__temp443v,__temp444v__);
  }
  goto __temp_return;
  }
  __temp446v=0;
  neq__temp302v(buffer__unsafe_size,__temp446v,&__temp447v__);
  if(__temp447v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp448v__);
  bytes=__temp448v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp426v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp430v(buffer__unsafe_ptr,__temp450v,bytes);
  __temp_return:
  *__temp1709v=buffer__unsafe_ptr;
  *__temp1710v=buffer__unsafe_size;
  *__temp1711v=buffer__unsafe_align;
  *__temp1712v=buffer__unsafe_ptr;
  *__temp1713v=buffer__unsafe_size;
  *__temp1714v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1719v, unsigned long long* __temp1720v, unsigned long long* __temp1721v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1717v=0;
  int __temp1718v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp489v(&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align);
  __temp492v__unsafe_ptr=__temp491v__unsafe_ptr;
  __temp492v__unsafe_size=__temp491v__unsafe_size;
  __temp492v__unsafe_align=__temp491v__unsafe_align;
  __temp_errcode=alloc__temp435v(&__temp492v__unsafe_ptr,&__temp492v__unsafe_size,&__temp492v__unsafe_align,size,&__temp493v__unsafe_ptr,&__temp493v__unsafe_size,&__temp493v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1719v=__temp493v__unsafe_ptr;
  *__temp1720v=__temp493v__unsafe_size;
  *__temp1721v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp593v(void** __temp1722v, unsigned long long* __temp1723v, unsigned long long* __temp1724v, void** __temp1725v, unsigned long long* __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v) {
  void* buf__unsafe_ptr=*__temp1722v;
  unsigned long long buf__unsafe_size=*__temp1723v;
  unsigned long long buf__unsafe_align=*__temp1724v;
  unsigned long long __temp594v=0;
  unsigned long long __temp595v=0;
  unsigned long long pos=0;
  __temp594v=0;
  __temp595v=__temp594v;
  pos=__temp595v;
  *__temp1722v=buf__unsafe_ptr;
  *__temp1723v=buf__unsafe_size;
  *__temp1724v=buf__unsafe_align;
  *__temp1725v=buf__unsafe_ptr;
  *__temp1726v=buf__unsafe_size;
  *__temp1727v=buf__unsafe_align;
  *__temp1728v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1729v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1729v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1730v) {
  *__temp1730v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1731v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1731v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1732v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1732v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1733v, unsigned long long* __temp1734v, unsigned long long* __temp1735v, unsigned long long* __temp1736v, unsigned long long* __temp1737v, char* __temp1738v) {
  *__temp1733v=buf__unsafe_ptr;
  *__temp1734v=buf__unsafe_size;
  *__temp1735v=buf__unsafe_align;
  *__temp1736v=dat__pos;
  *__temp1737v=dat__length;
  *__temp1738v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1739v, unsigned long long* __temp1740v, unsigned long long* __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v, char* __temp1744v) {
  unsigned long long __temp530v=0;
  int __temp531v__=0;
  void* __temp532v__=0;
  char __temp533v__value=0;
  char first=0;
  void* __temp534v__buf__unsafe_ptr=0;
  unsigned long long __temp534v__buf__unsafe_size=0;
  unsigned long long __temp534v__buf__unsafe_align=0;
  unsigned long long __temp534v__dat__pos=0;
  unsigned long long __temp534v__dat__length=0;
  char __temp534v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp530v=0;
  neq__temp302v(length,__temp530v,&__temp531v__);
  if(__temp531v__){
  __temp_errcode=get__temp483v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp532v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp532v__){
  goto __temp_failure;
  }
  memcpy(&__temp533v__value,(char*)__temp532v__,1);
  first=__temp533v__value;
  }
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp534v__buf__unsafe_ptr,&__temp534v__buf__unsafe_size,&__temp534v__buf__unsafe_align,&__temp534v__dat__pos,&__temp534v__dat__length,&__temp534v__dat__first);
  *__temp1739v=__temp534v__buf__unsafe_ptr;
  *__temp1740v=__temp534v__buf__unsafe_size;
  *__temp1741v=__temp534v__buf__unsafe_align;
  *__temp1742v=__temp534v__dat__pos;
  *__temp1743v=__temp534v__dat__length;
  *__temp1744v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1746v, unsigned long long* __temp1747v, unsigned long long* __temp1748v, unsigned long long* __temp1749v, unsigned long long* __temp1750v, char* __temp1751v) {
  void* __temp536v__unsafe_ptr=0;
  unsigned long long __temp536v__unsafe_size=0;
  unsigned long long __temp536v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp537v=0;
  void* __temp538v__buf__unsafe_ptr=0;
  unsigned long long __temp538v__buf__unsafe_size=0;
  unsigned long long __temp538v__buf__unsafe_align=0;
  unsigned long long __temp538v__dat__pos=0;
  unsigned long long __temp538v__dat__length=0;
  char __temp538v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp489v(&__temp536v__unsafe_ptr,&__temp536v__unsafe_size,&__temp536v__unsafe_align);
  buf__unsafe_ptr=__temp536v__unsafe_ptr;
  buf__unsafe_size=__temp536v__unsafe_size;
  buf__unsafe_align=__temp536v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp537v=0;
  __temp_errcode=str__temp529v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp537v,length,&__temp538v__buf__unsafe_ptr,&__temp538v__buf__unsafe_size,&__temp538v__buf__unsafe_align,&__temp538v__dat__pos,&__temp538v__dat__length,&__temp538v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1746v=__temp538v__buf__unsafe_ptr;
  *__temp1747v=__temp538v__buf__unsafe_size;
  *__temp1748v=__temp538v__buf__unsafe_align;
  *__temp1749v=__temp538v__dat__pos;
  *__temp1750v=__temp538v__dat__length;
  *__temp1751v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1752v) {
  *__temp1752v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1753v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1753v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1754v) {
  *__temp1754v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1755v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1755v=z;
}

int copy__temp660v(void** __temp1758v, unsigned long long* __temp1759v, unsigned long long* __temp1760v, unsigned long long* __temp1761v, const char* _other, void** __temp1762v, unsigned long long* __temp1763v, unsigned long long* __temp1764v, unsigned long long* __temp1765v, unsigned long long* __temp1766v, char* __temp1767v) {
  void* buf__unsafe_ptr=*__temp1758v;
  unsigned long long buf__unsafe_size=*__temp1759v;
  unsigned long long buf__unsafe_align=*__temp1760v;
  unsigned long long pos=*__temp1761v;
  void* __temp661v__buf__unsafe_ptr=0;
  unsigned long long __temp661v__buf__unsafe_size=0;
  unsigned long long __temp661v__buf__unsafe_align=0;
  unsigned long long __temp661v__dat__pos=0;
  unsigned long long __temp661v__dat__length=0;
  char __temp661v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp662v__=0;
  unsigned long long __temp663v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp664v__=0;
  int __temp665v__=0;
  unsigned long long __temp666v=0;
  unsigned long long __temp667v__=0;
  unsigned long long prev_pos=0;
  void* __temp668v__buf__unsafe_ptr=0;
  unsigned long long __temp668v__buf__unsafe_size=0;
  unsigned long long __temp668v__buf__unsafe_align=0;
  unsigned long long __temp668v__dat__pos=0;
  unsigned long long __temp668v__dat__length=0;
  char __temp668v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp535v(_other,&__temp661v__buf__unsafe_ptr,&__temp661v__buf__unsafe_size,&__temp661v__buf__unsafe_align,&__temp661v__dat__pos,&__temp661v__dat__length,&__temp661v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp661v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp661v__buf__unsafe_size;
  other__buf__unsafe_align=__temp661v__buf__unsafe_align;
  other__dat__pos=__temp661v__dat__pos;
  other__dat__length=__temp661v__dat__length;
  other__dat__first=__temp661v__dat__first;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp662v__);
  add__temp110v(pos,__temp662v__,&__temp663v__);
  next_pos=__temp663v__;
  len__temp487v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp664v__);
  gt__temp206v(next_pos,__temp664v__,&__temp665v__);
  if(__temp665v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp666v=0;
  add__temp110v(pos,__temp666v,&__temp667v__);
  prev_pos=__temp667v__;
  pos=next_pos;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp668v__buf__unsafe_ptr,&__temp668v__buf__unsafe_size,&__temp668v__buf__unsafe_align,&__temp668v__dat__pos,&__temp668v__dat__length,&__temp668v__dat__first);
  *__temp1758v=buf__unsafe_ptr;
  *__temp1759v=buf__unsafe_size;
  *__temp1760v=buf__unsafe_align;
  *__temp1761v=pos;
  *__temp1762v=__temp668v__buf__unsafe_ptr;
  *__temp1763v=__temp668v__buf__unsafe_size;
  *__temp1764v=__temp668v__buf__unsafe_align;
  *__temp1765v=__temp668v__dat__pos;
  *__temp1766v=__temp668v__dat__length;
  *__temp1767v=__temp668v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp592v(const char* other, const char** __temp1768v) {
  *__temp1768v=other;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1769v) {
  int z=0;
  z=x!=0;
  *__temp1769v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1770v) {
  int z=0;
  z=value?0:1;
  *__temp1770v=z;
}

static inline __attribute__((always_inline)) int read__temp1623v(const char* _path, void** __temp1771v) {
  const char* __temp1624v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1625v__=0;
  int __temp1626v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp592v(_path,&__temp1624v__);
  path=__temp1624v__;
  unsafe_ptr=opendir(path);
  exists__temp396v(unsafe_ptr,&__temp1625v__);
  not__temp18v(__temp1625v__,&__temp1626v__);
  if(__temp1626v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  *__temp1771v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp408v(unsigned long long x, unsigned long long* __temp1772v) {
  unsigned long long __temp410v=0;
  unsigned long long __temp411v__=0;
  __temp410v=1024;
  mul__temp134v(x,__temp410v,&__temp411v__);
  *__temp1772v=__temp411v__;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1633v(void** __temp1773v, const char** __temp1774v) {
  void* f__unsafe_ptr=*__temp1773v;
  int __temp1634v__=0;
  int __temp1635v__=0;
  void* de=0;
  int __temp1636v__=0;
  int __temp1637v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp396v(f__unsafe_ptr,&__temp1634v__);
  not__temp18v(__temp1634v__,&__temp1635v__);
  if(__temp1635v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp396v(de,&__temp1636v__);
  not__temp18v(__temp1636v__,&__temp1637v__);
  if(__temp1637v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  *__temp1773v=f__unsafe_ptr;
  *__temp1774v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1642v(void** __temp1775v, unsigned long long* __temp1776v, unsigned long long* __temp1777v, unsigned long long* __temp1778v, void** __temp1779v, void** __temp1780v, unsigned long long* __temp1781v, unsigned long long* __temp1782v, unsigned long long* __temp1783v, unsigned long long* __temp1784v, char* __temp1785v) {
  void* buf__unsafe_ptr=*__temp1775v;
  unsigned long long buf__unsafe_size=*__temp1776v;
  unsigned long long buf__unsafe_align=*__temp1777v;
  unsigned long long pos=*__temp1778v;
  void* f__unsafe_ptr=*__temp1779v;
  const char* __temp1644v__=0;
  void* __temp1645v__buf__unsafe_ptr=0;
  unsigned long long __temp1645v__buf__unsafe_size=0;
  unsigned long long __temp1645v__buf__unsafe_align=0;
  unsigned long long __temp1645v__dat__pos=0;
  unsigned long long __temp1645v__dat__length=0;
  char __temp1645v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_entry__temp1633v(&f__unsafe_ptr,&__temp1644v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp660v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1644v__,&__temp1645v__buf__unsafe_ptr,&__temp1645v__buf__unsafe_size,&__temp1645v__buf__unsafe_align,&__temp1645v__dat__pos,&__temp1645v__dat__length,&__temp1645v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1775v=buf__unsafe_ptr;
  *__temp1776v=buf__unsafe_size;
  *__temp1777v=buf__unsafe_align;
  *__temp1778v=pos;
  *__temp1779v=f__unsafe_ptr;
  *__temp1780v=__temp1645v__buf__unsafe_ptr;
  *__temp1781v=__temp1645v__buf__unsafe_size;
  *__temp1782v=__temp1645v__buf__unsafe_align;
  *__temp1783v=__temp1645v__dat__pos;
  *__temp1784v=__temp1645v__dat__length;
  *__temp1785v=__temp1645v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp528v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1786v, unsigned long long* __temp1787v, unsigned long long* __temp1788v, unsigned long long* __temp1789v, unsigned long long* __temp1790v, char* __temp1791v) {
  *__temp1786v=other__buf__unsafe_ptr;
  *__temp1787v=other__buf__unsafe_size;
  *__temp1788v=other__buf__unsafe_align;
  *__temp1789v=other__dat__pos;
  *__temp1790v=other__dat__length;
  *__temp1791v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1792v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1792v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1793v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1793v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp772v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, void** __temp1798v, unsigned long long* __temp1799v, unsigned long long* __temp1800v, unsigned long long* __temp1801v, unsigned long long* __temp1802v, char* __temp1803v) {
  void* __temp773v__buf__unsafe_ptr=0;
  unsigned long long __temp773v__buf__unsafe_size=0;
  unsigned long long __temp773v__buf__unsafe_align=0;
  unsigned long long __temp773v__dat__pos=0;
  unsigned long long __temp773v__dat__length=0;
  char __temp773v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp774v__=0;
  void* __temp775v__buf__unsafe_ptr=0;
  unsigned long long __temp775v__buf__unsafe_size=0;
  unsigned long long __temp775v__buf__unsafe_align=0;
  unsigned long long __temp775v__dat__pos=0;
  unsigned long long __temp775v__dat__length=0;
  char __temp775v__dat__first=0;
  int __temp776v__=0;
  int __temp777v__=0;
  int __temp778v=0;
  unsigned long long __temp779v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp780v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp781v=0;
  int __temp782v__=0;
  char new_first=0;
  void* __temp783v__=0;
  char __temp784v__value=0;
  void* __temp785v__buf__unsafe_ptr=0;
  unsigned long long __temp785v__buf__unsafe_size=0;
  unsigned long long __temp785v__buf__unsafe_align=0;
  unsigned long long __temp785v__dat__pos=0;
  unsigned long long __temp785v__dat__length=0;
  char __temp785v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp528v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp773v__buf__unsafe_ptr,&__temp773v__buf__unsafe_size,&__temp773v__buf__unsafe_align,&__temp773v__dat__pos,&__temp773v__dat__length,&__temp773v__dat__first);
  s__buf__unsafe_ptr=__temp773v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp773v__buf__unsafe_size;
  s__buf__unsafe_align=__temp773v__buf__unsafe_align;
  s__dat__pos=__temp773v__dat__pos;
  s__dat__length=__temp773v__dat__length;
  s__dat__first=__temp773v__dat__first;
  eq__temp278v(from,to,&__temp774v__);
  if(__temp774v__){
  __temp_errcode=str__temp535v(__temp576v,&__temp775v__buf__unsafe_ptr,&__temp775v__buf__unsafe_size,&__temp775v__buf__unsafe_align,&__temp775v__dat__pos,&__temp775v__dat__length,&__temp775v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp182v(from,to,&__temp776v__);
  if(!__temp776v__){
  gt__temp206v(to,s__dat__length,&__temp777v__);
  __temp778v=__temp777v__;
  }
  if(__temp778v){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp330v(to,from,&__temp779v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp779v__;
  add__temp110v(s__dat__pos,from,&__temp780v__);
  new_pos=__temp780v__;
  __temp781v=0;
  neq__temp302v(from,__temp781v,&__temp782v__);
  if(__temp782v__){
  __temp_errcode=get__temp483v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,&__temp783v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp783v__){
  goto __temp_failure;
  }
  memcpy(&__temp784v__value,(char*)__temp783v__,1);
  new_first=__temp784v__value;
  }
  else{
  new_first=s__dat__first;
  }
  str__temp519v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,new_length,new_first,&__temp785v__buf__unsafe_ptr,&__temp785v__buf__unsafe_size,&__temp785v__buf__unsafe_align,&__temp785v__dat__pos,&__temp785v__dat__length,&__temp785v__dat__first);
  __temp775v__buf__unsafe_ptr=__temp785v__buf__unsafe_ptr;
  __temp775v__buf__unsafe_size=__temp785v__buf__unsafe_size;
  __temp775v__buf__unsafe_align=__temp785v__buf__unsafe_align;
  __temp775v__dat__pos=__temp785v__dat__pos;
  __temp775v__dat__length=__temp785v__dat__length;
  __temp775v__dat__first=__temp785v__dat__first;
  __temp_return:
  *__temp1798v=__temp775v__buf__unsafe_ptr;
  *__temp1799v=__temp775v__buf__unsafe_size;
  *__temp1800v=__temp775v__buf__unsafe_align;
  *__temp1801v=__temp775v__dat__pos;
  *__temp1802v=__temp775v__dat__length;
  *__temp1803v=__temp775v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp543v(char x, char y, int* __temp1804v) {
  int z=0;
  z=(x!=y);
  *__temp1804v=z;
}

static inline __attribute__((always_inline)) void eq__temp737v(void* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, void* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, int* __temp1805v) {
  unsigned long long __temp738v__=0;
  unsigned long long n=0;
  unsigned long long __temp739v__=0;
  int __temp740v__=0;
  int __temp741v=0;
  int __temp742v__=0;
  int __temp743v=0;
  int z=0;
  len__temp539v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__dat__pos,x__dat__length,x__dat__first,&__temp738v__);
  n=__temp738v__;
  len__temp539v(y__buf__unsafe_ptr,y__buf__unsafe_size,y__buf__unsafe_align,y__dat__pos,y__dat__length,y__dat__first,&__temp739v__);
  neq__temp302v(n,__temp739v__,&__temp740v__);
  if(__temp740v__){
  __temp741v=0;
  goto __temp_return;
  }
  neq__temp543v(x__dat__first,y__dat__first,&__temp742v__);
  if(__temp742v__){
  __temp743v=0;
  __temp741v=__temp743v;
  goto __temp_return;
  }
  z=!memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos,((char*)y__buf__unsafe_ptr)+y__dat__pos,n);
  __temp741v=z;
  __temp_return:
  *__temp1805v=__temp741v;
}

static inline __attribute__((always_inline)) int ends_with__temp840v(void* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, int* __temp1812v) {
  void* __temp841v__buf__unsafe_ptr=0;
  unsigned long long __temp841v__buf__unsafe_size=0;
  unsigned long long __temp841v__buf__unsafe_align=0;
  unsigned long long __temp841v__dat__pos=0;
  unsigned long long __temp841v__dat__length=0;
  char __temp841v__dat__first=0;
  void* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  void* __temp842v__buf__unsafe_ptr=0;
  unsigned long long __temp842v__buf__unsafe_size=0;
  unsigned long long __temp842v__buf__unsafe_align=0;
  unsigned long long __temp842v__dat__pos=0;
  unsigned long long __temp842v__dat__length=0;
  char __temp842v__dat__first=0;
  void* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  int __temp843v__=0;
  int __temp844v=0;
  unsigned long long __temp845v__=0;
  unsigned long long n=0;
  unsigned long long __temp846v__=0;
  unsigned long long __temp847v__=0;
  void* __temp848v__buf__unsafe_ptr=0;
  unsigned long long __temp848v__buf__unsafe_size=0;
  unsigned long long __temp848v__buf__unsafe_align=0;
  unsigned long long __temp848v__dat__pos=0;
  unsigned long long __temp848v__dat__length=0;
  char __temp848v__dat__first=0;
  void* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  int __temp849v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp528v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp841v__buf__unsafe_ptr,&__temp841v__buf__unsafe_size,&__temp841v__buf__unsafe_align,&__temp841v__dat__pos,&__temp841v__dat__length,&__temp841v__dat__first);
  stack__buf__unsafe_ptr=__temp841v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp841v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp841v__buf__unsafe_align;
  stack__dat__pos=__temp841v__dat__pos;
  stack__dat__length=__temp841v__dat__length;
  stack__dat__first=__temp841v__dat__first;
  __temp_errcode=str__temp535v(_needle,&__temp842v__buf__unsafe_ptr,&__temp842v__buf__unsafe_size,&__temp842v__buf__unsafe_align,&__temp842v__dat__pos,&__temp842v__dat__length,&__temp842v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp842v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp842v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp842v__buf__unsafe_align;
  needle__dat__pos=__temp842v__dat__pos;
  needle__dat__length=__temp842v__dat__length;
  needle__dat__first=__temp842v__dat__first;
  lt__temp182v(stack__dat__length,needle__dat__length,&__temp843v__);
  if(__temp843v__){
  __temp844v=0;
  goto __temp_return;
  }
  len__temp539v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp845v__);
  n=__temp845v__;
  len__temp539v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp846v__);
  __temp_errcode=sub__temp330v(n,__temp846v__,&__temp847v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp772v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp847v__,n,&__temp848v__buf__unsafe_ptr,&__temp848v__buf__unsafe_size,&__temp848v__buf__unsafe_align,&__temp848v__dat__pos,&__temp848v__dat__length,&__temp848v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp848v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp848v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp848v__buf__unsafe_align;
  ret__dat__pos=__temp848v__dat__pos;
  ret__dat__length=__temp848v__dat__length;
  ret__dat__first=__temp848v__dat__first;
  eq__temp737v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp849v__);
  __temp844v=__temp849v__;
  __temp_return:
  *__temp1812v=__temp844v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp642v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, void** __temp1815v, unsigned long long* __temp1816v, unsigned long long* __temp1817v, unsigned long long* __temp1818v, unsigned long long* __temp1819v, char* __temp1820v) {
  unsigned long long __temp644v=0;
  unsigned long long pos=0;
  int __temp645v__=0;
  unsigned long long __temp646v__=0;
  int __temp647v__=0;
  unsigned long long __temp648v__=0;
  unsigned long long __temp649v__=0;
  void* __temp650v__buf__unsafe_ptr=0;
  unsigned long long __temp650v__buf__unsafe_size=0;
  unsigned long long __temp650v__buf__unsafe_align=0;
  unsigned long long __temp650v__dat__pos=0;
  unsigned long long __temp650v__dat__length=0;
  char __temp650v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp644v=0;
  pos=__temp644v;
  eq__temp278v(pos,s__dat__pos,&__temp645v__);
  if(__temp645v__){
  goto __temp_return;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp646v__);
  gt__temp206v(pos,__temp646v__,&__temp647v__);
  if(__temp647v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp648v__);
  __temp_errcode=sub__temp330v(__temp648v__,pos,&__temp649v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp529v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,pos,__temp649v__,&__temp650v__buf__unsafe_ptr,&__temp650v__buf__unsafe_size,&__temp650v__buf__unsafe_align,&__temp650v__dat__pos,&__temp650v__dat__length,&__temp650v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp650v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp650v__buf__unsafe_size;
  s__buf__unsafe_align=__temp650v__buf__unsafe_align;
  s__dat__pos=__temp650v__dat__pos;
  s__dat__length=__temp650v__dat__length;
  s__dat__first=__temp650v__dat__first;
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

static inline __attribute__((always_inline)) void char__temp541v(const char* s, char* __temp1821v) {
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

static inline __attribute__((always_inline)) int rextend__temp596v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, void** __temp1824v, unsigned long long* __temp1825v, unsigned long long* __temp1826v, unsigned long long* __temp1827v, unsigned long long* __temp1828v, char* __temp1829v) {
  unsigned long long __temp598v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp599v__=0;
  unsigned long long __temp600v__=0;
  int __temp601v__=0;
  int __temp602v=0;
  int __temp603v__=0;
  void* __temp604v__buf__unsafe_ptr=0;
  unsigned long long __temp604v__buf__unsafe_size=0;
  unsigned long long __temp604v__buf__unsafe_align=0;
  unsigned long long __temp604v__dat__pos=0;
  unsigned long long __temp604v__dat__length=0;
  char __temp604v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(s__dat__length,by,&__temp598v__);
  new_length=__temp598v__;
  add__temp110v(new_length,s__dat__pos,&__temp599v__);
  len__temp487v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp600v__);
  gt__temp206v(__temp599v__,__temp600v__,&__temp601v__);
  if(__temp601v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  not__temp29v(__temp602v,&__temp603v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp519v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp604v__buf__unsafe_ptr,&__temp604v__buf__unsafe_size,&__temp604v__buf__unsafe_align,&__temp604v__dat__pos,&__temp604v__dat__length,&__temp604v__dat__first);
  *__temp1824v=__temp604v__buf__unsafe_ptr;
  *__temp1825v=__temp604v__buf__unsafe_size;
  *__temp1826v=__temp604v__buf__unsafe_align;
  *__temp1827v=__temp604v__dat__pos;
  *__temp1828v=__temp604v__dat__length;
  *__temp1829v=__temp604v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp691v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp693v__=0;
  int __temp694v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp348v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp693v__);
  gt__temp206v(__temp693v__,s__buf__unsafe_size,&__temp694v__);
  if(__temp694v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp614v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, void** __temp1830v, unsigned long long* __temp1831v, unsigned long long* __temp1832v, unsigned long long* __temp1833v, unsigned long long* __temp1834v, char* __temp1835v) {
  unsigned long long __temp616v=0;
  unsigned long long by=0;
  unsigned long long __temp617v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp618v__=0;
  unsigned long long __temp619v__=0;
  int __temp620v__=0;
  int __temp621v=0;
  int __temp622v__=0;
  void* __temp623v__buf__unsafe_ptr=0;
  unsigned long long __temp623v__buf__unsafe_size=0;
  unsigned long long __temp623v__buf__unsafe_align=0;
  unsigned long long __temp623v__dat__pos=0;
  unsigned long long __temp623v__dat__length=0;
  char __temp623v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp616v=1;
  by=__temp616v;
  add__temp110v(s__dat__length,by,&__temp617v__);
  new_length=__temp617v__;
  add__temp110v(new_length,s__dat__pos,&__temp618v__);
  len__temp487v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp619v__);
  gt__temp206v(__temp618v__,__temp619v__,&__temp620v__);
  if(__temp620v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  not__temp29v(__temp621v,&__temp622v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp519v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp623v__buf__unsafe_ptr,&__temp623v__buf__unsafe_size,&__temp623v__buf__unsafe_align,&__temp623v__dat__pos,&__temp623v__dat__length,&__temp623v__dat__first);
  *__temp1830v=__temp623v__buf__unsafe_ptr;
  *__temp1831v=__temp623v__buf__unsafe_size;
  *__temp1832v=__temp623v__buf__unsafe_align;
  *__temp1833v=__temp623v__dat__pos;
  *__temp1834v=__temp623v__dat__length;
  *__temp1835v=__temp623v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1836v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1836v=z;
}

static inline __attribute__((always_inline)) void eq__temp542v(char x, char y, int* __temp1837v) {
  int z=0;
  z=(x==y);
  *__temp1837v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp558v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1841v, unsigned long long* __temp1842v, unsigned long long* __temp1843v, unsigned long long* __temp1844v, unsigned long long* __temp1845v, char* __temp1846v) {
  unsigned long long __temp559v=0;
  unsigned long long __temp560v__=0;
  unsigned long long __temp561v__=0;
  void* __temp562v__unsafe_ptr=0;
  unsigned long long __temp562v__unsafe_size=0;
  unsigned long long __temp562v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp564v=0;
  void* __temp565v__buf__unsafe_ptr=0;
  unsigned long long __temp565v__buf__unsafe_size=0;
  unsigned long long __temp565v__buf__unsafe_align=0;
  unsigned long long __temp565v__dat__pos=0;
  unsigned long long __temp565v__dat__length=0;
  char __temp565v__dat__first=0;
  unsigned long long __temp1839v=0;
  int __temp1840v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp559v=1;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp560v__);
  add__temp110v(__temp559v,__temp560v__,&__temp561v__);
  __temp_errcode=alloc__temp488v(__temp561v__,&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp562v__unsafe_ptr;
  buf__unsafe_size=__temp562v__unsafe_size;
  buf__unsafe_align=__temp562v__unsafe_align;
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp564v=0;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp564v,other__dat__length,other__dat__first,&__temp565v__buf__unsafe_ptr,&__temp565v__buf__unsafe_size,&__temp565v__buf__unsafe_align,&__temp565v__dat__pos,&__temp565v__dat__length,&__temp565v__dat__first);
  *__temp1841v=__temp565v__buf__unsafe_ptr;
  *__temp1842v=__temp565v__buf__unsafe_size;
  *__temp1843v=__temp565v__buf__unsafe_align;
  *__temp1844v=__temp565v__dat__pos;
  *__temp1845v=__temp565v__dat__length;
  *__temp1846v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp517v(const char* c, int* __temp1847v) {
  int z=0;
  z=c!=0;
  *__temp1847v=z;
}

int unsafe_temporary_cstr__temp566v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1852v) {
  unsigned long long __temp567v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp568v=0;
  int __temp569v__=0;
  unsigned long long __temp570v__=0;
  int __temp571v__=0;
  unsigned long long __temp572v=0;
  unsigned long long __temp573v__=0;
  void* __temp574v__=0;
  char __temp575v__value=0;
  char __temp577v__=0;
  int __temp578v__=0;
  int __temp579v=0;
  int __temp580v=0;
  unsigned long long __temp581v__=0;
  int __temp582v__=0;
  void* __temp583v__=0;
  char __temp584v__value=0;
  char __temp585v__=0;
  int __temp586v__=0;
  int __temp587v=0;
  void* __temp588v__buf__unsafe_ptr=0;
  unsigned long long __temp588v__buf__unsafe_size=0;
  unsigned long long __temp588v__buf__unsafe_align=0;
  unsigned long long __temp588v__dat__pos=0;
  unsigned long long __temp588v__dat__length=0;
  char __temp588v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  int __temp590v__=0;
  int __temp591v__=0;
  unsigned long long __temp1850v=0;
  int __temp1851v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(other__dat__pos,other__dat__length,&__temp567v__);
  end_pos=__temp567v__;
  __temp568v=0;
  neq__temp302v(end_pos,__temp568v,&__temp569v__);
  if(__temp569v__){
  len__temp487v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp570v__);
  le__temp230v(end_pos,__temp570v__,&__temp571v__);
  if(__temp571v__){
  __temp572v=1;
  __temp_errcode=sub__temp330v(end_pos,__temp572v,&__temp573v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp483v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp573v__,&__temp574v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp574v__){
  goto __temp_failure;
  }
  memcpy(&__temp575v__value,(char*)__temp574v__,1);
  char__temp541v(__temp576v,&__temp577v__);
  eq__temp542v(__temp575v__value,__temp577v__,&__temp578v__);
  __temp579v=__temp578v__;
  }
  __temp580v=__temp579v;
  }
  if(__temp580v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp487v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp581v__);
  lt__temp182v(end_pos,__temp581v__,&__temp582v__);
  if(__temp582v__){
  __temp_errcode=get__temp483v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp583v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp583v__){
  goto __temp_failure;
  }
  memcpy(&__temp584v__value,(char*)__temp583v__,1);
  char__temp541v(__temp576v,&__temp585v__);
  eq__temp542v(__temp584v__value,__temp585v__,&__temp586v__);
  __temp587v=__temp586v__;
  }
  if(__temp587v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp558v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp588v__buf__unsafe_ptr,&__temp588v__buf__unsafe_size,&__temp588v__buf__unsafe_align,&__temp588v__dat__pos,&__temp588v__dat__length,&__temp588v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp588v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp588v__buf__unsafe_size;
  c__buf__unsafe_align=__temp588v__buf__unsafe_align;
  c__dat__pos=__temp588v__dat__pos;
  c__dat__length=__temp588v__dat__length;
  c__dat__first=__temp588v__dat__first;
  }
  }
  ret=((char*)c__buf__unsafe_ptr)+c__dat__pos;
  *__temp1852v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp380v(unsigned long long x, long long int* __temp1853v) {
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

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, int* __temp1855v) {
  int __temp292v__=0;
  int z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y?1:0;
  *__temp1855v=z;
}

static inline __attribute__((always_inline)) int read__temp1200v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, void** __temp1862v) {
  const char* __temp1201v__=0;
  const char* cmd=0;
  void* unsafe_ptr=0;
  int __temp1203v__=0;
  int __temp1204v__=0;
  int __temp1205v__=0;
  long long int status=0;
  unsigned long long __temp1206v=0;
  long long int __temp1207v__=0;
  int __temp1208v__=0;
  int __temp1209v=0;
  int __temp1856v=0;
  int __temp1857v=0;
  unsigned long long __temp1858v=0;
  unsigned long long __temp1859v=0;
  int __temp1860v=0;
  void* __temp1861v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp566v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1201v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1201v__;
  unsafe_ptr=popen((const char*)cmd,"r");
  exists__temp396v(unsafe_ptr,&__temp1203v__);
  not__temp18v(__temp1203v__,&__temp1204v__);
  if(__temp1204v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  *__temp1862v=unsafe_ptr;
  
  __temp_failure:exists__temp517v(__temp1201v__,&__temp1856v);
  not__temp18v(__temp1856v,&__temp1857v);
  if(__temp1857v){
  __temp1858v=0;
  neq__temp302v(__temp1859v,__temp1858v,&__temp1860v);
  if(__temp1860v){
  __temp1859v=0;
  free__temp429v(&__temp1861v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int noerr__temp1199v() {
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=0;
  goto __temp_failure;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp1198v(long long int value, int* __temp1863v) {
  int ret=0;
  ret=(value!=0);
  *__temp1863v=ret;
}

static inline __attribute__((always_inline)) void cstr__temp1196v(long long int value, const char** __temp1864v) {
  const char* endl=0;
  const char* ret=0;
  endl=__temp348v;
  ret=__temp_all_errcodes[value];
  *__temp1864v=ret;
}

static inline __attribute__((always_inline)) void print__temp346v(const char* value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1658v() {
  const char* path=0;
  unsigned long long __temp1660v=0;
  unsigned long long max_command_length=0;
  void* __temp1661v__unsafe_ptr=0;
  unsigned long long __temp1661v__unsafe_size=0;
  unsigned long long __temp1661v__unsafe_align=0;
  void* __temp1663v__buf__unsafe_ptr=0;
  unsigned long long __temp1663v__buf__unsafe_size=0;
  unsigned long long __temp1663v__buf__unsafe_align=0;
  unsigned long long __temp1663v__pos=0;
  void* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  void* __temp1665v__buf__unsafe_ptr=0;
  unsigned long long __temp1665v__buf__unsafe_size=0;
  unsigned long long __temp1665v__buf__unsafe_align=0;
  unsigned long long __temp1665v__dat__pos=0;
  unsigned long long __temp1665v__dat__length=0;
  char __temp1665v__dat__first=0;
  void* __temp1666v__buf__unsafe_ptr=0;
  unsigned long long __temp1666v__buf__unsafe_size=0;
  unsigned long long __temp1666v__buf__unsafe_align=0;
  unsigned long long __temp1666v__dat__pos=0;
  unsigned long long __temp1666v__dat__length=0;
  char __temp1666v__dat__first=0;
  void* __temp1667v__unsafe_ptr=0;
  void* test_dir__unsafe_ptr=0;
  unsigned long long __temp1669v=0;
  unsigned long long __temp1670v__=0;
  void* __temp1671v__unsafe_ptr=0;
  unsigned long long __temp1671v__unsafe_size=0;
  unsigned long long __temp1671v__unsafe_align=0;
  void* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  int __temp1673v=0;
  void* __temp1674v__buf__unsafe_ptr=0;
  unsigned long long __temp1674v__buf__unsafe_size=0;
  unsigned long long __temp1674v__buf__unsafe_align=0;
  unsigned long long __temp1674v__pos=0;
  void* __temp1675v__buf__unsafe_ptr=0;
  unsigned long long __temp1675v__buf__unsafe_size=0;
  unsigned long long __temp1675v__buf__unsafe_align=0;
  unsigned long long __temp1675v__dat__pos=0;
  unsigned long long __temp1675v__dat__length=0;
  char __temp1675v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  int __temp1677v__=0;
  int __temp1678v__=0;
  void* __temp1679v__buf__unsafe_ptr=0;
  unsigned long long __temp1679v__buf__unsafe_size=0;
  unsigned long long __temp1679v__buf__unsafe_align=0;
  unsigned long long __temp1679v__dat__pos=0;
  unsigned long long __temp1679v__dat__length=0;
  char __temp1679v__dat__first=0;
  void* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1680v__=0;
  unsigned long long __temp1681v__=0;
  char __temp1683v__=0;
  void* __temp1684v__buf__unsafe_ptr=0;
  unsigned long long __temp1684v__buf__unsafe_size=0;
  unsigned long long __temp1684v__buf__unsafe_align=0;
  unsigned long long __temp1684v__dat__pos=0;
  unsigned long long __temp1684v__dat__length=0;
  char __temp1684v__dat__first=0;
  char __temp1686v__=0;
  void* __temp1687v__buf__unsafe_ptr=0;
  unsigned long long __temp1687v__buf__unsafe_size=0;
  unsigned long long __temp1687v__buf__unsafe_align=0;
  unsigned long long __temp1687v__dat__pos=0;
  unsigned long long __temp1687v__dat__length=0;
  char __temp1687v__dat__first=0;
  void* __temp1688v__unsafe_ptr=0;
  long long int __temp1689v__status=0;
  void* __temp1690v__unsafe_ptr=0;
  void* proc__unsafe_ptr=0;
  int __temp1691v=0;
  long long int __temp1693v=0;
  int __temp1694v__=0;
  long long int __temp1695v=0;
  const char* __temp1696v__=0;
  unsigned long long __temp1866v=0;
  int __temp1867v=0;
  unsigned long long __temp1875v=0;
  int __temp1876v=0;
  int __temp1887v=0;
  unsigned long long __temp1888v=0;
  long long int __temp1889v=0;
  int __temp1890v=0;
  int __temp1891v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1659v;
  __temp1660v=50;
  max_command_length=__temp1660v;
  __temp_errcode=alloc__temp488v(max_command_length,&__temp1661v__unsafe_ptr,&__temp1661v__unsafe_size,&__temp1661v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp593v(&__temp1661v__unsafe_ptr,&__temp1661v__unsafe_size,&__temp1661v__unsafe_align,&__temp1663v__buf__unsafe_ptr,&__temp1663v__buf__unsafe_size,&__temp1663v__buf__unsafe_align,&__temp1663v__pos);
  bp__buf__unsafe_ptr=__temp1663v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1663v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1663v__buf__unsafe_align;
  bp__pos=__temp1663v__pos;
  __temp_errcode=copy__temp660v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1664v,&__temp1665v__buf__unsafe_ptr,&__temp1665v__buf__unsafe_size,&__temp1665v__buf__unsafe_align,&__temp1665v__dat__pos,&__temp1665v__dat__length,&__temp1665v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp660v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1666v__buf__unsafe_ptr,&__temp1666v__buf__unsafe_size,&__temp1666v__buf__unsafe_align,&__temp1666v__dat__pos,&__temp1666v__dat__length,&__temp1666v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1623v(path,&__temp1667v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1667v__unsafe_ptr;
  __temp1669v=4;
  KB__temp408v(__temp1669v,&__temp1670v__);
  __temp_errcode=alloc__temp488v(__temp1670v__,&__temp1671v__unsafe_ptr,&__temp1671v__unsafe_size,&__temp1671v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1671v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1671v__unsafe_size;
  proc_buf__unsafe_align=__temp1671v__unsafe_align;
  while(1){
  __temp1674v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1674v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1674v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1674v__pos=bp__pos;
  __temp_complain=entry__temp1642v(&__temp1674v__buf__unsafe_ptr,&__temp1674v__buf__unsafe_size,&__temp1674v__buf__unsafe_align,&__temp1674v__pos,&test_dir__unsafe_ptr,&__temp1675v__buf__unsafe_ptr,&__temp1675v__buf__unsafe_size,&__temp1675v__buf__unsafe_align,&__temp1675v__dat__pos,&__temp1675v__dat__length,&__temp1675v__dat__first);
  __temp1673v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1675v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1675v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1675v__buf__unsafe_align;
  entry__dat__pos=__temp1675v__dat__pos;
  entry__dat__length=__temp1675v__dat__length;
  entry__dat__first=__temp1675v__dat__first;
  __temp1673v=__temp1673v==0;
  if(!__temp1673v)break;
  __temp_errcode=ends_with__temp840v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1676v,&__temp1677v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1677v__,&__temp1678v__);
  if(__temp1678v__){
  continue;
  }
  __temp_errcode=lextend__temp642v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1679v__buf__unsafe_ptr,&__temp1679v__buf__unsafe_size,&__temp1679v__buf__unsafe_align,&__temp1679v__dat__pos,&__temp1679v__dat__length,&__temp1679v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1679v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1679v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1679v__buf__unsafe_align;
  command__dat__pos=__temp1679v__dat__pos;
  command__dat__length=__temp1679v__dat__length;
  command__dat__first=__temp1679v__dat__first;
  len__temp539v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1680v__);
  __temp_errcode=sub__temp330v(max_command_length,__temp1680v__,&__temp1681v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp541v(__temp1682v,&__temp1683v__);
  __temp_errcode=rextend__temp596v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1681v__,__temp1683v__,&__temp1684v__buf__unsafe_ptr,&__temp1684v__buf__unsafe_size,&__temp1684v__buf__unsafe_align,&__temp1684v__dat__pos,&__temp1684v__dat__length,&__temp1684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp691v(__temp1684v__buf__unsafe_ptr,__temp1684v__buf__unsafe_size,__temp1684v__buf__unsafe_align,__temp1684v__dat__pos,__temp1684v__dat__length,__temp1684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp541v(__temp576v,&__temp1686v__);
  __temp_errcode=rextend__temp614v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1686v__,&__temp1687v__buf__unsafe_ptr,&__temp1687v__buf__unsafe_size,&__temp1687v__buf__unsafe_align,&__temp1687v__dat__pos,&__temp1687v__dat__length,&__temp1687v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1200v(__temp1687v__buf__unsafe_ptr,__temp1687v__buf__unsafe_size,__temp1687v__buf__unsafe_align,__temp1687v__dat__pos,__temp1687v__dat__length,__temp1687v__dat__first,&__temp1688v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1690v__unsafe_ptr=__temp1688v__unsafe_ptr;
  proc__unsafe_ptr=__temp1690v__unsafe_ptr;
  __temp_complain=noerr__temp1199v();
  __temp1691v=__temp_complain;
  __temp1691v=__temp1691v==0;
  exists__temp396v(__temp1688v__unsafe_ptr,&__temp1887v);
  if(__temp1887v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1688v__unsafe_ptr)){
  }
  __temp1689v__status=pclose((FILE*)__temp1688v__unsafe_ptr);
  __temp1688v__unsafe_ptr=0;
  }
  __temp1888v=0;
  int__temp380v(__temp1888v,&__temp1889v);
  neq__temp291v(__temp1689v__status,__temp1889v,&__temp1890v);
  if(__temp1890v){
  __temp_complain=28;
  __temp1891v=__temp1891v==0;
  }
  __temp1693v=__temp_complain;
  exists__temp1198v(__temp1693v,&__temp1694v__);
  if(__temp1694v__){
  __temp1695v=__temp_complain;
  cstr__temp1196v(__temp1695v,&__temp1696v__);
  print__temp346v(__temp1696v__);
  }
  }
  
  __temp_failure:__temp1875v=0;
  neq__temp302v(__temp1671v__unsafe_size,__temp1875v,&__temp1876v);
  if(__temp1876v){
  __temp1671v__unsafe_size=0;
  free__temp429v(&__temp1671v__unsafe_ptr);
  }
  if(__temp1667v__unsafe_ptr)closedir((DIR*)__temp1667v__unsafe_ptr);
  __temp1667v__unsafe_ptr=0;
  __temp1866v=0;
  neq__temp302v(__temp1661v__unsafe_size,__temp1866v,&__temp1867v);
  if(__temp1867v){
  __temp1661v__unsafe_size=0;
  free__temp429v(&__temp1661v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1658v();return 0;}