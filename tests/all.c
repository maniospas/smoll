#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1656v="./tests/passing/";
const char* const __temp576v="";
const char* const __temp348v="\n";
const char* const __temp1681v=" ";
const char* const __temp1661v="./smoll ";
const char* const __temp409v="kilobytes to bytes";
const char* const __temp1672v=".s";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1688v=unsafe_ptr;
  *__temp1689v=unsafe_size;
  *__temp1690v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1691v) {
  int value=0;
  *__temp1691v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1692v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1692v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1693v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1693v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1694v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1694v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1695v) {
  void* allocated=*__temp1695v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1695v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1696v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1697v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1697v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1698v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1698v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long size, void** __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v) {
  void* buffer__unsafe_ptr=*__temp1699v;
  unsigned long long buffer__unsafe_size=*__temp1700v;
  unsigned long long buffer__unsafe_align=*__temp1701v;
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
  __temp_errcode=8;
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
  *__temp1699v=buffer__unsafe_ptr;
  *__temp1700v=buffer__unsafe_size;
  *__temp1701v=buffer__unsafe_align;
  *__temp1702v=buffer__unsafe_ptr;
  *__temp1703v=buffer__unsafe_size;
  *__temp1704v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1707v=0;
  int __temp1708v=0;
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
  *__temp1709v=__temp493v__unsafe_ptr;
  *__temp1710v=__temp493v__unsafe_size;
  *__temp1711v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp593v(void** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, void** __temp1715v, unsigned long long* __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v) {
  void* buf__unsafe_ptr=*__temp1712v;
  unsigned long long buf__unsafe_size=*__temp1713v;
  unsigned long long buf__unsafe_align=*__temp1714v;
  unsigned long long __temp594v=0;
  unsigned long long __temp595v=0;
  unsigned long long pos=0;
  __temp594v=0;
  __temp595v=__temp594v;
  pos=__temp595v;
  *__temp1712v=buf__unsafe_ptr;
  *__temp1713v=buf__unsafe_size;
  *__temp1714v=buf__unsafe_align;
  *__temp1715v=buf__unsafe_ptr;
  *__temp1716v=buf__unsafe_size;
  *__temp1717v=buf__unsafe_align;
  *__temp1718v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1719v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1720v) {
  *__temp1720v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1721v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1721v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1722v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1722v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1723v, unsigned long long* __temp1724v, unsigned long long* __temp1725v, unsigned long long* __temp1726v, unsigned long long* __temp1727v, char* __temp1728v) {
  *__temp1723v=buf__unsafe_ptr;
  *__temp1724v=buf__unsafe_size;
  *__temp1725v=buf__unsafe_align;
  *__temp1726v=dat__pos;
  *__temp1727v=dat__length;
  *__temp1728v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, unsigned long long* __temp1732v, unsigned long long* __temp1733v, char* __temp1734v) {
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
  *__temp1729v=__temp534v__buf__unsafe_ptr;
  *__temp1730v=__temp534v__buf__unsafe_size;
  *__temp1731v=__temp534v__buf__unsafe_align;
  *__temp1732v=__temp534v__dat__pos;
  *__temp1733v=__temp534v__dat__length;
  *__temp1734v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1736v, unsigned long long* __temp1737v, unsigned long long* __temp1738v, unsigned long long* __temp1739v, unsigned long long* __temp1740v, char* __temp1741v) {
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
  *__temp1736v=__temp538v__buf__unsafe_ptr;
  *__temp1737v=__temp538v__buf__unsafe_size;
  *__temp1738v=__temp538v__buf__unsafe_align;
  *__temp1739v=__temp538v__dat__pos;
  *__temp1740v=__temp538v__dat__length;
  *__temp1741v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1742v) {
  *__temp1742v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1743v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1743v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1744v) {
  *__temp1744v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1745v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1745v=z;
}

int copy__temp660v(void** __temp1748v, unsigned long long* __temp1749v, unsigned long long* __temp1750v, unsigned long long* __temp1751v, const char* _other, void** __temp1752v, unsigned long long* __temp1753v, unsigned long long* __temp1754v, unsigned long long* __temp1755v, unsigned long long* __temp1756v, char* __temp1757v) {
  void* buf__unsafe_ptr=*__temp1748v;
  unsigned long long buf__unsafe_size=*__temp1749v;
  unsigned long long buf__unsafe_align=*__temp1750v;
  unsigned long long pos=*__temp1751v;
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
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp666v=0;
  add__temp110v(pos,__temp666v,&__temp667v__);
  prev_pos=__temp667v__;
  pos=next_pos;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp668v__buf__unsafe_ptr,&__temp668v__buf__unsafe_size,&__temp668v__buf__unsafe_align,&__temp668v__dat__pos,&__temp668v__dat__length,&__temp668v__dat__first);
  *__temp1748v=buf__unsafe_ptr;
  *__temp1749v=buf__unsafe_size;
  *__temp1750v=buf__unsafe_align;
  *__temp1751v=pos;
  *__temp1752v=__temp668v__buf__unsafe_ptr;
  *__temp1753v=__temp668v__buf__unsafe_size;
  *__temp1754v=__temp668v__buf__unsafe_align;
  *__temp1755v=__temp668v__dat__pos;
  *__temp1756v=__temp668v__dat__length;
  *__temp1757v=__temp668v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp592v(const char* other, const char** __temp1758v) {
  *__temp1758v=other;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1759v) {
  int z=0;
  z=x!=0;
  *__temp1759v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1760v) {
  int z=0;
  z=value?0:1;
  *__temp1760v=z;
}

static inline __attribute__((always_inline)) int read__temp1622v(const char* _path, void** __temp1761v) {
  const char* __temp1623v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1624v__=0;
  int __temp1625v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp592v(_path,&__temp1623v__);
  path=__temp1623v__;
  unsafe_ptr=opendir(path);
  exists__temp396v(unsafe_ptr,&__temp1624v__);
  not__temp18v(__temp1624v__,&__temp1625v__);
  if(__temp1625v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1761v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp408v(unsigned long long x, unsigned long long* __temp1762v) {
  unsigned long long __temp410v=0;
  unsigned long long __temp411v__=0;
  __temp410v=1024;
  mul__temp134v(x,__temp410v,&__temp411v__);
  *__temp1762v=__temp411v__;
}

static inline __attribute__((always_inline)) int entry__temp1633v(void** __temp1763v, void** __temp1764v, unsigned long long* __temp1765v, unsigned long long* __temp1766v, unsigned long long* __temp1767v, unsigned long long* __temp1768v, char* __temp1769v) {
  void* f__unsafe_ptr=*__temp1763v;
  int __temp1634v__=0;
  int __temp1635v__=0;
  void* de=0;
  int __temp1636v__=0;
  int __temp1637v__=0;
  const char* dirname=0;
  void* __temp1638v__buf__unsafe_ptr=0;
  unsigned long long __temp1638v__buf__unsafe_size=0;
  unsigned long long __temp1638v__buf__unsafe_align=0;
  unsigned long long __temp1638v__dat__pos=0;
  unsigned long long __temp1638v__dat__length=0;
  char __temp1638v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp396v(f__unsafe_ptr,&__temp1634v__);
  not__temp18v(__temp1634v__,&__temp1635v__);
  if(__temp1635v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp396v(de,&__temp1636v__);
  not__temp18v(__temp1636v__,&__temp1637v__);
  if(__temp1637v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp535v(dirname,&__temp1638v__buf__unsafe_ptr,&__temp1638v__buf__unsafe_size,&__temp1638v__buf__unsafe_align,&__temp1638v__dat__pos,&__temp1638v__dat__length,&__temp1638v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1763v=f__unsafe_ptr;
  *__temp1764v=__temp1638v__buf__unsafe_ptr;
  *__temp1765v=__temp1638v__buf__unsafe_size;
  *__temp1766v=__temp1638v__buf__unsafe_align;
  *__temp1767v=__temp1638v__dat__pos;
  *__temp1768v=__temp1638v__dat__length;
  *__temp1769v=__temp1638v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp528v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1770v, unsigned long long* __temp1771v, unsigned long long* __temp1772v, unsigned long long* __temp1773v, unsigned long long* __temp1774v, char* __temp1775v) {
  *__temp1770v=other__buf__unsafe_ptr;
  *__temp1771v=other__buf__unsafe_size;
  *__temp1772v=other__buf__unsafe_align;
  *__temp1773v=other__dat__pos;
  *__temp1774v=other__dat__length;
  *__temp1775v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1776v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1776v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1777v) {
  int __temp331v__=0;
  int __temp334v__=0;
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
  *__temp1777v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp772v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, void** __temp1782v, unsigned long long* __temp1783v, unsigned long long* __temp1784v, unsigned long long* __temp1785v, unsigned long long* __temp1786v, char* __temp1787v) {
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
  __temp_errcode=15;
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
  *__temp1782v=__temp775v__buf__unsafe_ptr;
  *__temp1783v=__temp775v__buf__unsafe_size;
  *__temp1784v=__temp775v__buf__unsafe_align;
  *__temp1785v=__temp775v__dat__pos;
  *__temp1786v=__temp775v__dat__length;
  *__temp1787v=__temp775v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp543v(char x, char y, int* __temp1788v) {
  int z=0;
  z=(x!=y);
  *__temp1788v=z;
}

static inline __attribute__((always_inline)) void eq__temp737v(void* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, void* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, int* __temp1789v) {
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
  *__temp1789v=__temp741v;
}

static inline __attribute__((always_inline)) int ends_with__temp840v(void* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, int* __temp1796v) {
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
  *__temp1796v=__temp844v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp651v(void** __temp1799v, unsigned long long* __temp1800v, unsigned long long* __temp1801v, unsigned long long* __temp1802v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1803v, unsigned long long* __temp1804v, unsigned long long* __temp1805v, unsigned long long* __temp1806v, unsigned long long* __temp1807v, char* __temp1808v) {
  void* buf__unsafe_ptr=*__temp1799v;
  unsigned long long buf__unsafe_size=*__temp1800v;
  unsigned long long buf__unsafe_align=*__temp1801v;
  unsigned long long pos=*__temp1802v;
  void* __temp652v__buf__unsafe_ptr=0;
  unsigned long long __temp652v__buf__unsafe_size=0;
  unsigned long long __temp652v__buf__unsafe_align=0;
  unsigned long long __temp652v__dat__pos=0;
  unsigned long long __temp652v__dat__length=0;
  char __temp652v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp653v__=0;
  unsigned long long __temp654v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp655v__=0;
  int __temp656v__=0;
  unsigned long long __temp657v=0;
  unsigned long long __temp658v__=0;
  unsigned long long prev_pos=0;
  void* __temp659v__buf__unsafe_ptr=0;
  unsigned long long __temp659v__buf__unsafe_size=0;
  unsigned long long __temp659v__buf__unsafe_align=0;
  unsigned long long __temp659v__dat__pos=0;
  unsigned long long __temp659v__dat__length=0;
  char __temp659v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp528v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp652v__buf__unsafe_ptr,&__temp652v__buf__unsafe_size,&__temp652v__buf__unsafe_align,&__temp652v__dat__pos,&__temp652v__dat__length,&__temp652v__dat__first);
  other__buf__unsafe_ptr=__temp652v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp652v__buf__unsafe_size;
  other__buf__unsafe_align=__temp652v__buf__unsafe_align;
  other__dat__pos=__temp652v__dat__pos;
  other__dat__length=__temp652v__dat__length;
  other__dat__first=__temp652v__dat__first;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp653v__);
  add__temp110v(pos,__temp653v__,&__temp654v__);
  next_pos=__temp654v__;
  len__temp487v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp655v__);
  gt__temp206v(next_pos,__temp655v__,&__temp656v__);
  if(__temp656v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp657v=0;
  add__temp110v(pos,__temp657v,&__temp658v__);
  prev_pos=__temp658v__;
  pos=next_pos;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp659v__buf__unsafe_ptr,&__temp659v__buf__unsafe_size,&__temp659v__buf__unsafe_align,&__temp659v__dat__pos,&__temp659v__dat__length,&__temp659v__dat__first);
  *__temp1799v=buf__unsafe_ptr;
  *__temp1800v=buf__unsafe_size;
  *__temp1801v=buf__unsafe_align;
  *__temp1802v=pos;
  *__temp1803v=__temp659v__buf__unsafe_ptr;
  *__temp1804v=__temp659v__buf__unsafe_size;
  *__temp1805v=__temp659v__buf__unsafe_align;
  *__temp1806v=__temp659v__dat__pos;
  *__temp1807v=__temp659v__dat__length;
  *__temp1808v=__temp659v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp642v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, void** __temp1811v, unsigned long long* __temp1812v, unsigned long long* __temp1813v, unsigned long long* __temp1814v, unsigned long long* __temp1815v, char* __temp1816v) {
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
  __temp_errcode=12;
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
  *__temp1811v=s__buf__unsafe_ptr;
  *__temp1812v=s__buf__unsafe_size;
  *__temp1813v=s__buf__unsafe_align;
  *__temp1814v=s__dat__pos;
  *__temp1815v=s__dat__length;
  *__temp1816v=s__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp541v(const char* s, char* __temp1817v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1817v=c;
}

static inline __attribute__((always_inline)) void true__temp8v(int* __temp1818v) {
  int value=0;
  *__temp1818v=value;
}

static inline __attribute__((always_inline)) void not__temp29v(int __temp_anon0, int* __temp1819v) {
  int __temp30v__=0;
  true__temp8v(&__temp30v__);
  *__temp1819v=__temp30v__;
}

static inline __attribute__((always_inline)) int rextend__temp596v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, void** __temp1820v, unsigned long long* __temp1821v, unsigned long long* __temp1822v, unsigned long long* __temp1823v, unsigned long long* __temp1824v, char* __temp1825v) {
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
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp602v,&__temp603v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp519v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp604v__buf__unsafe_ptr,&__temp604v__buf__unsafe_size,&__temp604v__buf__unsafe_align,&__temp604v__dat__pos,&__temp604v__dat__length,&__temp604v__dat__first);
  *__temp1820v=__temp604v__buf__unsafe_ptr;
  *__temp1821v=__temp604v__buf__unsafe_size;
  *__temp1822v=__temp604v__buf__unsafe_align;
  *__temp1823v=__temp604v__dat__pos;
  *__temp1824v=__temp604v__dat__length;
  *__temp1825v=__temp604v__dat__first;
  
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
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp614v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, void** __temp1826v, unsigned long long* __temp1827v, unsigned long long* __temp1828v, unsigned long long* __temp1829v, unsigned long long* __temp1830v, char* __temp1831v) {
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
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp621v,&__temp622v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp519v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp623v__buf__unsafe_ptr,&__temp623v__buf__unsafe_size,&__temp623v__buf__unsafe_align,&__temp623v__dat__pos,&__temp623v__dat__length,&__temp623v__dat__first);
  *__temp1826v=__temp623v__buf__unsafe_ptr;
  *__temp1827v=__temp623v__buf__unsafe_size;
  *__temp1828v=__temp623v__buf__unsafe_align;
  *__temp1829v=__temp623v__dat__pos;
  *__temp1830v=__temp623v__dat__length;
  *__temp1831v=__temp623v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1832v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1832v=z;
}

static inline __attribute__((always_inline)) void eq__temp542v(char x, char y, int* __temp1833v) {
  int z=0;
  z=(x==y);
  *__temp1833v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp558v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1837v, unsigned long long* __temp1838v, unsigned long long* __temp1839v, unsigned long long* __temp1840v, unsigned long long* __temp1841v, char* __temp1842v) {
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
  unsigned long long __temp1835v=0;
  int __temp1836v=0;
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
  *__temp1837v=__temp565v__buf__unsafe_ptr;
  *__temp1838v=__temp565v__buf__unsafe_size;
  *__temp1839v=__temp565v__buf__unsafe_align;
  *__temp1840v=__temp565v__dat__pos;
  *__temp1841v=__temp565v__dat__length;
  *__temp1842v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp517v(const char* c, int* __temp1843v) {
  int z=0;
  z=c!=0;
  *__temp1843v=z;
}

int unsafe_temporary_cstr__temp566v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1848v) {
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
  unsigned long long __temp1846v=0;
  int __temp1847v=0;
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
  *__temp1848v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp380v(unsigned long long x, long long int* __temp1849v) {
  long long int z=0;
  z=x;
  *__temp1849v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1850v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1850v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, int* __temp1851v) {
  int __temp292v__=0;
  int z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y?1:0;
  *__temp1851v=z;
}

static inline __attribute__((always_inline)) int read__temp1199v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, void** __temp1858v) {
  const char* __temp1200v__=0;
  const char* cmd=0;
  void* unsafe_ptr=0;
  int __temp1202v__=0;
  int __temp1203v__=0;
  int __temp1204v__=0;
  long long int status=0;
  unsigned long long __temp1205v=0;
  long long int __temp1206v__=0;
  int __temp1207v__=0;
  int __temp1208v=0;
  int __temp1852v=0;
  int __temp1853v=0;
  unsigned long long __temp1854v=0;
  unsigned long long __temp1855v=0;
  int __temp1856v=0;
  void* __temp1857v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp566v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1200v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1200v__;
  unsafe_ptr=popen((const char*)cmd,"r");
  exists__temp396v(unsafe_ptr,&__temp1202v__);
  not__temp18v(__temp1202v__,&__temp1203v__);
  if(__temp1203v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  *__temp1858v=unsafe_ptr;
  
  __temp_failure:exists__temp517v(__temp1200v__,&__temp1852v);
  not__temp18v(__temp1852v,&__temp1853v);
  if(__temp1853v){
  __temp1854v=0;
  neq__temp302v(__temp1855v,__temp1854v,&__temp1856v);
  if(__temp1856v){
  __temp1855v=0;
  free__temp429v(&__temp1857v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1196v(long long int value, const char** __temp1859v) {
  const char* endl=0;
  const char* ret=0;
  endl=__temp348v;
  ret=__temp_all_errcodes[value];
  *__temp1859v=ret;
}

static inline __attribute__((always_inline)) void print__temp346v(const char* value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1639v(void* command__buf__unsafe_ptr, unsigned long long command__buf__unsafe_size, unsigned long long command__buf__unsafe_align, unsigned long long command__dat__pos, unsigned long long command__dat__length, char command__dat__first) {
  void* __temp1640v__unsafe_ptr=0;
  long long int __temp1641v__status=0;
  void* __temp1642v__unsafe_ptr=0;
  void* proc__unsafe_ptr=0;
  int __temp1643v=0;
  long long int __temp1644v=0;
  long long int error=0;
  const char* __temp1645v__=0;
  int __temp1861v=0;
  unsigned long long __temp1862v=0;
  long long int __temp1863v=0;
  int __temp1864v=0;
  int __temp1865v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1199v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1640v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1642v__unsafe_ptr=__temp1640v__unsafe_ptr;
  proc__unsafe_ptr=__temp1642v__unsafe_ptr;
  exists__temp396v(__temp1640v__unsafe_ptr,&__temp1861v);
  if(__temp1861v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1640v__unsafe_ptr)){
  }
  __temp1641v__status=pclose((FILE*)__temp1640v__unsafe_ptr);
  __temp1640v__unsafe_ptr=0;
  }
  __temp1862v=0;
  int__temp380v(__temp1862v,&__temp1863v);
  neq__temp291v(__temp1641v__status,__temp1863v,&__temp1864v);
  if(__temp1864v){
  __temp_complain=29;
  __temp1865v=__temp1865v==0;
  }
  __temp1644v=__temp_complain;
  __temp1643v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1644v;
  __temp1643v=__temp1643v==0;
  if(__temp1643v){
  cstr__temp1196v(error,&__temp1645v__);
  print__temp346v(__temp1645v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1655v() {
  const char* path=0;
  unsigned long long __temp1657v=0;
  unsigned long long max_command_length=0;
  void* __temp1658v__unsafe_ptr=0;
  unsigned long long __temp1658v__unsafe_size=0;
  unsigned long long __temp1658v__unsafe_align=0;
  void* __temp1660v__buf__unsafe_ptr=0;
  unsigned long long __temp1660v__buf__unsafe_size=0;
  unsigned long long __temp1660v__buf__unsafe_align=0;
  unsigned long long __temp1660v__pos=0;
  void* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  void* __temp1662v__buf__unsafe_ptr=0;
  unsigned long long __temp1662v__buf__unsafe_size=0;
  unsigned long long __temp1662v__buf__unsafe_align=0;
  unsigned long long __temp1662v__dat__pos=0;
  unsigned long long __temp1662v__dat__length=0;
  char __temp1662v__dat__first=0;
  void* __temp1663v__buf__unsafe_ptr=0;
  unsigned long long __temp1663v__buf__unsafe_size=0;
  unsigned long long __temp1663v__buf__unsafe_align=0;
  unsigned long long __temp1663v__dat__pos=0;
  unsigned long long __temp1663v__dat__length=0;
  char __temp1663v__dat__first=0;
  void* __temp1664v__unsafe_ptr=0;
  void* test_dir__unsafe_ptr=0;
  unsigned long long __temp1666v=0;
  unsigned long long __temp1667v__=0;
  void* __temp1668v__unsafe_ptr=0;
  unsigned long long __temp1668v__unsafe_size=0;
  unsigned long long __temp1668v__unsafe_align=0;
  void* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  int __temp1670v=0;
  void* __temp1671v__buf__unsafe_ptr=0;
  unsigned long long __temp1671v__buf__unsafe_size=0;
  unsigned long long __temp1671v__buf__unsafe_align=0;
  unsigned long long __temp1671v__dat__pos=0;
  unsigned long long __temp1671v__dat__length=0;
  char __temp1671v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  int __temp1673v__=0;
  int __temp1674v__=0;
  void* __temp1675v__buf__unsafe_ptr=0;
  unsigned long long __temp1675v__buf__unsafe_size=0;
  unsigned long long __temp1675v__buf__unsafe_align=0;
  unsigned long long __temp1675v__pos=0;
  void* __temp1676v__buf__unsafe_ptr=0;
  unsigned long long __temp1676v__buf__unsafe_size=0;
  unsigned long long __temp1676v__buf__unsafe_align=0;
  unsigned long long __temp1676v__dat__pos=0;
  unsigned long long __temp1676v__dat__length=0;
  char __temp1676v__dat__first=0;
  void* __temp1677v__buf__unsafe_ptr=0;
  unsigned long long __temp1677v__buf__unsafe_size=0;
  unsigned long long __temp1677v__buf__unsafe_align=0;
  unsigned long long __temp1677v__dat__pos=0;
  unsigned long long __temp1677v__dat__length=0;
  char __temp1677v__dat__first=0;
  void* __temp1678v__buf__unsafe_ptr=0;
  unsigned long long __temp1678v__buf__unsafe_size=0;
  unsigned long long __temp1678v__buf__unsafe_align=0;
  unsigned long long __temp1678v__dat__pos=0;
  unsigned long long __temp1678v__dat__length=0;
  char __temp1678v__dat__first=0;
  void* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1679v__=0;
  unsigned long long __temp1680v__=0;
  char __temp1682v__=0;
  void* __temp1683v__buf__unsafe_ptr=0;
  unsigned long long __temp1683v__buf__unsafe_size=0;
  unsigned long long __temp1683v__buf__unsafe_align=0;
  unsigned long long __temp1683v__dat__pos=0;
  unsigned long long __temp1683v__dat__length=0;
  char __temp1683v__dat__first=0;
  char __temp1685v__=0;
  void* __temp1686v__buf__unsafe_ptr=0;
  unsigned long long __temp1686v__buf__unsafe_size=0;
  unsigned long long __temp1686v__buf__unsafe_align=0;
  unsigned long long __temp1686v__dat__pos=0;
  unsigned long long __temp1686v__dat__length=0;
  char __temp1686v__dat__first=0;
  unsigned long long __temp1868v=0;
  int __temp1869v=0;
  unsigned long long __temp1877v=0;
  int __temp1878v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1656v;
  __temp1657v=50;
  max_command_length=__temp1657v;
  __temp_errcode=alloc__temp488v(max_command_length,&__temp1658v__unsafe_ptr,&__temp1658v__unsafe_size,&__temp1658v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp593v(&__temp1658v__unsafe_ptr,&__temp1658v__unsafe_size,&__temp1658v__unsafe_align,&__temp1660v__buf__unsafe_ptr,&__temp1660v__buf__unsafe_size,&__temp1660v__buf__unsafe_align,&__temp1660v__pos);
  bp__buf__unsafe_ptr=__temp1660v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1660v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1660v__buf__unsafe_align;
  bp__pos=__temp1660v__pos;
  __temp_errcode=copy__temp660v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1661v,&__temp1662v__buf__unsafe_ptr,&__temp1662v__buf__unsafe_size,&__temp1662v__buf__unsafe_align,&__temp1662v__dat__pos,&__temp1662v__dat__length,&__temp1662v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp660v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1663v__buf__unsafe_ptr,&__temp1663v__buf__unsafe_size,&__temp1663v__buf__unsafe_align,&__temp1663v__dat__pos,&__temp1663v__dat__length,&__temp1663v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1622v(path,&__temp1664v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1664v__unsafe_ptr;
  __temp1666v=4;
  KB__temp408v(__temp1666v,&__temp1667v__);
  __temp_errcode=alloc__temp488v(__temp1667v__,&__temp1668v__unsafe_ptr,&__temp1668v__unsafe_size,&__temp1668v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1668v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1668v__unsafe_size;
  proc_buf__unsafe_align=__temp1668v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1633v(&test_dir__unsafe_ptr,&__temp1671v__buf__unsafe_ptr,&__temp1671v__buf__unsafe_size,&__temp1671v__buf__unsafe_align,&__temp1671v__dat__pos,&__temp1671v__dat__length,&__temp1671v__dat__first);
  __temp1670v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1671v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1671v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1671v__buf__unsafe_align;
  entry__dat__pos=__temp1671v__dat__pos;
  entry__dat__length=__temp1671v__dat__length;
  entry__dat__first=__temp1671v__dat__first;
  __temp1670v=__temp1670v==0;
  if(!__temp1670v)break;
  __temp_errcode=ends_with__temp840v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1672v,&__temp1673v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1673v__,&__temp1674v__);
  if(__temp1674v__){
  continue;
  }
  __temp1675v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1675v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1675v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1675v__pos=bp__pos;
  str__temp528v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1676v__buf__unsafe_ptr,&__temp1676v__buf__unsafe_size,&__temp1676v__buf__unsafe_align,&__temp1676v__dat__pos,&__temp1676v__dat__length,&__temp1676v__dat__first);
  __temp_errcode=copy__temp651v(&__temp1675v__buf__unsafe_ptr,&__temp1675v__buf__unsafe_size,&__temp1675v__buf__unsafe_align,&__temp1675v__pos,__temp1676v__buf__unsafe_ptr,__temp1676v__buf__unsafe_size,__temp1676v__buf__unsafe_align,__temp1676v__dat__pos,__temp1676v__dat__length,__temp1676v__dat__first,&__temp1677v__buf__unsafe_ptr,&__temp1677v__buf__unsafe_size,&__temp1677v__buf__unsafe_align,&__temp1677v__dat__pos,&__temp1677v__dat__length,&__temp1677v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp642v(__temp1677v__buf__unsafe_ptr,__temp1677v__buf__unsafe_size,__temp1677v__buf__unsafe_align,__temp1677v__dat__pos,__temp1677v__dat__length,__temp1677v__dat__first,&__temp1678v__buf__unsafe_ptr,&__temp1678v__buf__unsafe_size,&__temp1678v__buf__unsafe_align,&__temp1678v__dat__pos,&__temp1678v__dat__length,&__temp1678v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1678v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1678v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1678v__buf__unsafe_align;
  command__dat__pos=__temp1678v__dat__pos;
  command__dat__length=__temp1678v__dat__length;
  command__dat__first=__temp1678v__dat__first;
  len__temp539v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1679v__);
  __temp_errcode=sub__temp330v(max_command_length,__temp1679v__,&__temp1680v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp541v(__temp1681v,&__temp1682v__);
  __temp_errcode=rextend__temp596v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1680v__,__temp1682v__,&__temp1683v__buf__unsafe_ptr,&__temp1683v__buf__unsafe_size,&__temp1683v__buf__unsafe_align,&__temp1683v__dat__pos,&__temp1683v__dat__length,&__temp1683v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp691v(__temp1683v__buf__unsafe_ptr,__temp1683v__buf__unsafe_size,__temp1683v__buf__unsafe_align,__temp1683v__dat__pos,__temp1683v__dat__length,__temp1683v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp541v(__temp576v,&__temp1685v__);
  __temp_errcode=rextend__temp614v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1685v__,&__temp1686v__buf__unsafe_ptr,&__temp1686v__buf__unsafe_size,&__temp1686v__buf__unsafe_align,&__temp1686v__dat__pos,&__temp1686v__dat__length,&__temp1686v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=run__temp1639v(__temp1686v__buf__unsafe_ptr,__temp1686v__buf__unsafe_size,__temp1686v__buf__unsafe_align,__temp1686v__dat__pos,__temp1686v__dat__length,__temp1686v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1877v=0;
  neq__temp302v(__temp1668v__unsafe_size,__temp1877v,&__temp1878v);
  if(__temp1878v){
  __temp1668v__unsafe_size=0;
  free__temp429v(&__temp1668v__unsafe_ptr);
  }
  if(__temp1664v__unsafe_ptr)closedir((DIR*)__temp1664v__unsafe_ptr);
  __temp1664v__unsafe_ptr=0;
  __temp1868v=0;
  neq__temp302v(__temp1658v__unsafe_size,__temp1868v,&__temp1869v);
  if(__temp1869v){
  __temp1658v__unsafe_size=0;
  free__temp429v(&__temp1658v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1655v();return 0;}