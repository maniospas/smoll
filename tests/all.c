#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp1655v="./tests/passing/";
const char* const __temp350v="\n";
const char* const __temp1671v=".s";
const char* const __temp1660v="./smoll ";
const char* const __temp575v="";
const char* const __temp1680v=" ";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1687v=unsafe_ptr;
  *__temp1688v=unsafe_size;
  *__temp1689v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1690v) {
  int value=0;
  *__temp1690v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1691v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1691v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1692v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1692v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1693v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1694v) {
  void* allocated=*__temp1694v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1694v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1695v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1695v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1696v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1697v) {
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
  *__temp1697v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, unsigned long long size, void** __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v) {
  void* buffer__unsafe_ptr=*__temp1698v;
  unsigned long long buffer__unsafe_size=*__temp1699v;
  unsigned long long buffer__unsafe_align=*__temp1700v;
  unsigned long long __temp435v=0;
  int __temp436v__=0;
  int __temp439v__=0;
  unsigned long long __temp440v=0;
  int __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  int __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  void* __temp448v__=0;
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
  *__temp1698v=buffer__unsafe_ptr;
  *__temp1699v=buffer__unsafe_size;
  *__temp1700v=buffer__unsafe_align;
  *__temp1701v=buffer__unsafe_ptr;
  *__temp1702v=buffer__unsafe_size;
  *__temp1703v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1708v, unsigned long long* __temp1709v, unsigned long long* __temp1710v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1706v=0;
  int __temp1707v=0;
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
  *__temp1708v=__temp492v__unsafe_ptr;
  *__temp1709v=__temp492v__unsafe_size;
  *__temp1710v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp592v(void** __temp1711v, unsigned long long* __temp1712v, unsigned long long* __temp1713v, void** __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, unsigned long long* __temp1717v) {
  void* buf__unsafe_ptr=*__temp1711v;
  unsigned long long buf__unsafe_size=*__temp1712v;
  unsigned long long buf__unsafe_align=*__temp1713v;
  unsigned long long __temp593v=0;
  unsigned long long __temp594v=0;
  unsigned long long pos=0;
  __temp593v=0;
  __temp594v=__temp593v;
  pos=__temp594v;
  *__temp1711v=buf__unsafe_ptr;
  *__temp1712v=buf__unsafe_size;
  *__temp1713v=buf__unsafe_align;
  *__temp1714v=buf__unsafe_ptr;
  *__temp1715v=buf__unsafe_size;
  *__temp1716v=buf__unsafe_align;
  *__temp1717v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1718v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1718v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1719v) {
  *__temp1719v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1720v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1720v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1721v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1721v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1722v, unsigned long long* __temp1723v, unsigned long long* __temp1724v, unsigned long long* __temp1725v, unsigned long long* __temp1726v, char* __temp1727v) {
  *__temp1722v=buf__unsafe_ptr;
  *__temp1723v=buf__unsafe_size;
  *__temp1724v=buf__unsafe_align;
  *__temp1725v=dat__pos;
  *__temp1726v=dat__length;
  *__temp1727v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, unsigned long long* __temp1732v, char* __temp1733v) {
  unsigned long long __temp529v=0;
  int __temp530v__=0;
  void* __temp531v__=0;
  char __temp532v__value=0;
  char first=0;
  void* __temp533v__buf__unsafe_ptr=0;
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
  memcpy(&__temp532v__value,(char*)__temp531v__,1);
  first=__temp532v__value;
  }
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp533v__buf__unsafe_ptr,&__temp533v__buf__unsafe_size,&__temp533v__buf__unsafe_align,&__temp533v__dat__pos,&__temp533v__dat__length,&__temp533v__dat__first);
  *__temp1728v=__temp533v__buf__unsafe_ptr;
  *__temp1729v=__temp533v__buf__unsafe_size;
  *__temp1730v=__temp533v__buf__unsafe_align;
  *__temp1731v=__temp533v__dat__pos;
  *__temp1732v=__temp533v__dat__length;
  *__temp1733v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, void** __temp1735v, unsigned long long* __temp1736v, unsigned long long* __temp1737v, unsigned long long* __temp1738v, unsigned long long* __temp1739v, char* __temp1740v) {
  void* __temp535v__unsafe_ptr=0;
  unsigned long long __temp535v__unsafe_size=0;
  unsigned long long __temp535v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp536v=0;
  void* __temp537v__buf__unsafe_ptr=0;
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
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp536v=0;
  __temp_errcode=str__temp528v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp536v,length,&__temp537v__buf__unsafe_ptr,&__temp537v__buf__unsafe_size,&__temp537v__buf__unsafe_align,&__temp537v__dat__pos,&__temp537v__dat__length,&__temp537v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1735v=__temp537v__buf__unsafe_ptr;
  *__temp1736v=__temp537v__buf__unsafe_size;
  *__temp1737v=__temp537v__buf__unsafe_align;
  *__temp1738v=__temp537v__dat__pos;
  *__temp1739v=__temp537v__dat__length;
  *__temp1740v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp538v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1741v) {
  *__temp1741v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1742v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1743v) {
  *__temp1743v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1744v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1744v=z;
}

int copy__temp659v(void** __temp1747v, unsigned long long* __temp1748v, unsigned long long* __temp1749v, unsigned long long* __temp1750v, const char* _other, void** __temp1751v, unsigned long long* __temp1752v, unsigned long long* __temp1753v, unsigned long long* __temp1754v, unsigned long long* __temp1755v, char* __temp1756v) {
  void* buf__unsafe_ptr=*__temp1747v;
  unsigned long long buf__unsafe_size=*__temp1748v;
  unsigned long long buf__unsafe_align=*__temp1749v;
  unsigned long long pos=*__temp1750v;
  void* __temp660v__buf__unsafe_ptr=0;
  unsigned long long __temp660v__buf__unsafe_size=0;
  unsigned long long __temp660v__buf__unsafe_align=0;
  unsigned long long __temp660v__dat__pos=0;
  unsigned long long __temp660v__dat__length=0;
  char __temp660v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp661v__=0;
  unsigned long long __temp662v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp663v__=0;
  int __temp664v__=0;
  unsigned long long __temp665v=0;
  unsigned long long __temp666v__=0;
  unsigned long long prev_pos=0;
  void* __temp667v__buf__unsafe_ptr=0;
  unsigned long long __temp667v__buf__unsafe_size=0;
  unsigned long long __temp667v__buf__unsafe_align=0;
  unsigned long long __temp667v__dat__pos=0;
  unsigned long long __temp667v__dat__length=0;
  char __temp667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp534v(_other,&__temp660v__buf__unsafe_ptr,&__temp660v__buf__unsafe_size,&__temp660v__buf__unsafe_align,&__temp660v__dat__pos,&__temp660v__dat__length,&__temp660v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
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
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp665v=0;
  add__temp110v(pos,__temp665v,&__temp666v__);
  prev_pos=__temp666v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp667v__buf__unsafe_ptr,&__temp667v__buf__unsafe_size,&__temp667v__buf__unsafe_align,&__temp667v__dat__pos,&__temp667v__dat__length,&__temp667v__dat__first);
  *__temp1747v=buf__unsafe_ptr;
  *__temp1748v=buf__unsafe_size;
  *__temp1749v=buf__unsafe_align;
  *__temp1750v=pos;
  *__temp1751v=__temp667v__buf__unsafe_ptr;
  *__temp1752v=__temp667v__buf__unsafe_size;
  *__temp1753v=__temp667v__buf__unsafe_align;
  *__temp1754v=__temp667v__dat__pos;
  *__temp1755v=__temp667v__dat__length;
  *__temp1756v=__temp667v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp591v(const char* other, const char** __temp1757v) {
  *__temp1757v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(void* x, int* __temp1758v) {
  int z=0;
  z=x!=0;
  *__temp1758v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1759v) {
  int z=0;
  z=value?0:1;
  *__temp1759v=z;
}

static inline __attribute__((always_inline)) int read__temp1621v(const char* _path, void** __temp1760v) {
  const char* __temp1622v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1623v__=0;
  int __temp1624v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp591v(_path,&__temp1622v__);
  path=__temp1622v__;
  unsafe_ptr=opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1623v__);
  not__temp18v(__temp1623v__,&__temp1624v__);
  if(__temp1624v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1760v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1761v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1761v=__temp412v__;
}

static inline __attribute__((always_inline)) int entry__temp1632v(void** __temp1762v, void** __temp1763v, unsigned long long* __temp1764v, unsigned long long* __temp1765v, unsigned long long* __temp1766v, unsigned long long* __temp1767v, char* __temp1768v) {
  void* f__unsafe_ptr=*__temp1762v;
  int __temp1633v__=0;
  int __temp1634v__=0;
  void* de=0;
  int __temp1635v__=0;
  int __temp1636v__=0;
  const char* dirname=0;
  void* __temp1637v__buf__unsafe_ptr=0;
  unsigned long long __temp1637v__buf__unsafe_size=0;
  unsigned long long __temp1637v__buf__unsafe_align=0;
  unsigned long long __temp1637v__dat__pos=0;
  unsigned long long __temp1637v__dat__length=0;
  char __temp1637v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1633v__);
  not__temp18v(__temp1633v__,&__temp1634v__);
  if(__temp1634v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1635v__);
  not__temp18v(__temp1635v__,&__temp1636v__);
  if(__temp1636v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp534v(dirname,&__temp1637v__buf__unsafe_ptr,&__temp1637v__buf__unsafe_size,&__temp1637v__buf__unsafe_align,&__temp1637v__dat__pos,&__temp1637v__dat__length,&__temp1637v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1762v=f__unsafe_ptr;
  *__temp1763v=__temp1637v__buf__unsafe_ptr;
  *__temp1764v=__temp1637v__buf__unsafe_size;
  *__temp1765v=__temp1637v__buf__unsafe_align;
  *__temp1766v=__temp1637v__dat__pos;
  *__temp1767v=__temp1637v__dat__length;
  *__temp1768v=__temp1637v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp527v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1769v, unsigned long long* __temp1770v, unsigned long long* __temp1771v, unsigned long long* __temp1772v, unsigned long long* __temp1773v, char* __temp1774v) {
  *__temp1769v=other__buf__unsafe_ptr;
  *__temp1770v=other__buf__unsafe_size;
  *__temp1771v=other__buf__unsafe_align;
  *__temp1772v=other__dat__pos;
  *__temp1773v=other__dat__length;
  *__temp1774v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1775v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1775v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1776v) {
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
  *__temp1776v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp771v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, void** __temp1781v, unsigned long long* __temp1782v, unsigned long long* __temp1783v, unsigned long long* __temp1784v, unsigned long long* __temp1785v, char* __temp1786v) {
  void* __temp772v__buf__unsafe_ptr=0;
  unsigned long long __temp772v__buf__unsafe_size=0;
  unsigned long long __temp772v__buf__unsafe_align=0;
  unsigned long long __temp772v__dat__pos=0;
  unsigned long long __temp772v__dat__length=0;
  char __temp772v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp773v__=0;
  void* __temp774v__buf__unsafe_ptr=0;
  unsigned long long __temp774v__buf__unsafe_size=0;
  unsigned long long __temp774v__buf__unsafe_align=0;
  unsigned long long __temp774v__dat__pos=0;
  unsigned long long __temp774v__dat__length=0;
  char __temp774v__dat__first=0;
  int __temp775v__=0;
  int __temp776v__=0;
  int __temp777v=0;
  unsigned long long __temp778v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp779v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp780v=0;
  int __temp781v__=0;
  char new_first=0;
  void* __temp782v__=0;
  char __temp783v__value=0;
  void* __temp784v__buf__unsafe_ptr=0;
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
  memcpy(&__temp783v__value,(char*)__temp782v__,1);
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
  *__temp1781v=__temp774v__buf__unsafe_ptr;
  *__temp1782v=__temp774v__buf__unsafe_size;
  *__temp1783v=__temp774v__buf__unsafe_align;
  *__temp1784v=__temp774v__dat__pos;
  *__temp1785v=__temp774v__dat__length;
  *__temp1786v=__temp774v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp542v(char x, char y, int* __temp1787v) {
  int z=0;
  z=(x!=y);
  *__temp1787v=z;
}

static inline __attribute__((always_inline)) void eq__temp736v(void* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, void* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, int* __temp1788v) {
  unsigned long long __temp737v__=0;
  unsigned long long n=0;
  unsigned long long __temp738v__=0;
  int __temp739v__=0;
  int __temp740v=0;
  int __temp741v__=0;
  int __temp742v=0;
  int z=0;
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
  *__temp1788v=__temp740v;
}

static inline __attribute__((always_inline)) int ends_with__temp839v(void* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, int* __temp1795v) {
  void* __temp840v__buf__unsafe_ptr=0;
  unsigned long long __temp840v__buf__unsafe_size=0;
  unsigned long long __temp840v__buf__unsafe_align=0;
  unsigned long long __temp840v__dat__pos=0;
  unsigned long long __temp840v__dat__length=0;
  char __temp840v__dat__first=0;
  void* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  void* __temp841v__buf__unsafe_ptr=0;
  unsigned long long __temp841v__buf__unsafe_size=0;
  unsigned long long __temp841v__buf__unsafe_align=0;
  unsigned long long __temp841v__dat__pos=0;
  unsigned long long __temp841v__dat__length=0;
  char __temp841v__dat__first=0;
  void* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  int __temp842v__=0;
  int __temp843v=0;
  unsigned long long __temp844v__=0;
  unsigned long long n=0;
  unsigned long long __temp845v__=0;
  unsigned long long __temp846v__=0;
  void* __temp847v__buf__unsafe_ptr=0;
  unsigned long long __temp847v__buf__unsafe_size=0;
  unsigned long long __temp847v__buf__unsafe_align=0;
  unsigned long long __temp847v__dat__pos=0;
  unsigned long long __temp847v__dat__length=0;
  char __temp847v__dat__first=0;
  void* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  int __temp848v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp840v__buf__unsafe_ptr,&__temp840v__buf__unsafe_size,&__temp840v__buf__unsafe_align,&__temp840v__dat__pos,&__temp840v__dat__length,&__temp840v__dat__first);
  stack__buf__unsafe_ptr=__temp840v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp840v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp840v__buf__unsafe_align;
  stack__dat__pos=__temp840v__dat__pos;
  stack__dat__length=__temp840v__dat__length;
  stack__dat__first=__temp840v__dat__first;
  __temp_errcode=str__temp534v(_needle,&__temp841v__buf__unsafe_ptr,&__temp841v__buf__unsafe_size,&__temp841v__buf__unsafe_align,&__temp841v__dat__pos,&__temp841v__dat__length,&__temp841v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp841v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp841v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp841v__buf__unsafe_align;
  needle__dat__pos=__temp841v__dat__pos;
  needle__dat__length=__temp841v__dat__length;
  needle__dat__first=__temp841v__dat__first;
  lt__temp182v(stack__dat__length,needle__dat__length,&__temp842v__);
  if(__temp842v__){
  __temp843v=0;
  goto __temp_return;
  }
  len__temp538v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp844v__);
  n=__temp844v__;
  len__temp538v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp845v__);
  __temp_errcode=sub__temp330v(n,__temp845v__,&__temp846v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp771v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp846v__,n,&__temp847v__buf__unsafe_ptr,&__temp847v__buf__unsafe_size,&__temp847v__buf__unsafe_align,&__temp847v__dat__pos,&__temp847v__dat__length,&__temp847v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp847v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp847v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp847v__buf__unsafe_align;
  ret__dat__pos=__temp847v__dat__pos;
  ret__dat__length=__temp847v__dat__length;
  ret__dat__first=__temp847v__dat__first;
  eq__temp736v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp848v__);
  __temp843v=__temp848v__;
  __temp_return:
  *__temp1795v=__temp843v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp650v(void** __temp1798v, unsigned long long* __temp1799v, unsigned long long* __temp1800v, unsigned long long* __temp1801v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1802v, unsigned long long* __temp1803v, unsigned long long* __temp1804v, unsigned long long* __temp1805v, unsigned long long* __temp1806v, char* __temp1807v) {
  void* buf__unsafe_ptr=*__temp1798v;
  unsigned long long buf__unsafe_size=*__temp1799v;
  unsigned long long buf__unsafe_align=*__temp1800v;
  unsigned long long pos=*__temp1801v;
  void* __temp651v__buf__unsafe_ptr=0;
  unsigned long long __temp651v__buf__unsafe_size=0;
  unsigned long long __temp651v__buf__unsafe_align=0;
  unsigned long long __temp651v__dat__pos=0;
  unsigned long long __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp652v__=0;
  unsigned long long __temp653v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp654v__=0;
  int __temp655v__=0;
  unsigned long long __temp656v=0;
  unsigned long long __temp657v__=0;
  unsigned long long prev_pos=0;
  void* __temp658v__buf__unsafe_ptr=0;
  unsigned long long __temp658v__buf__unsafe_size=0;
  unsigned long long __temp658v__buf__unsafe_align=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp651v__buf__unsafe_ptr,&__temp651v__buf__unsafe_size,&__temp651v__buf__unsafe_align,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
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
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp656v=0;
  add__temp110v(pos,__temp656v,&__temp657v__);
  prev_pos=__temp657v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp658v__buf__unsafe_ptr,&__temp658v__buf__unsafe_size,&__temp658v__buf__unsafe_align,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  *__temp1798v=buf__unsafe_ptr;
  *__temp1799v=buf__unsafe_size;
  *__temp1800v=buf__unsafe_align;
  *__temp1801v=pos;
  *__temp1802v=__temp658v__buf__unsafe_ptr;
  *__temp1803v=__temp658v__buf__unsafe_size;
  *__temp1804v=__temp658v__buf__unsafe_align;
  *__temp1805v=__temp658v__dat__pos;
  *__temp1806v=__temp658v__dat__length;
  *__temp1807v=__temp658v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp641v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, void** __temp1810v, unsigned long long* __temp1811v, unsigned long long* __temp1812v, unsigned long long* __temp1813v, unsigned long long* __temp1814v, char* __temp1815v) {
  unsigned long long __temp643v=0;
  unsigned long long pos=0;
  int __temp644v__=0;
  unsigned long long __temp645v__=0;
  int __temp646v__=0;
  unsigned long long __temp647v__=0;
  unsigned long long __temp648v__=0;
  void* __temp649v__buf__unsafe_ptr=0;
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
  *__temp1810v=s__buf__unsafe_ptr;
  *__temp1811v=s__buf__unsafe_size;
  *__temp1812v=s__buf__unsafe_align;
  *__temp1813v=s__dat__pos;
  *__temp1814v=s__dat__length;
  *__temp1815v=s__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp540v(const char* s, char* __temp1816v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1816v=c;
}

static inline __attribute__((always_inline)) void true__temp8v(int* __temp1817v) {
  int value=0;
  *__temp1817v=value;
}

static inline __attribute__((always_inline)) void not__temp29v(int __temp_anon0, int* __temp1818v) {
  int __temp30v__=0;
  true__temp8v(&__temp30v__);
  *__temp1818v=__temp30v__;
}

static inline __attribute__((always_inline)) int rextend__temp595v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, void** __temp1819v, unsigned long long* __temp1820v, unsigned long long* __temp1821v, unsigned long long* __temp1822v, unsigned long long* __temp1823v, char* __temp1824v) {
  unsigned long long __temp597v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp598v__=0;
  unsigned long long __temp599v__=0;
  int __temp600v__=0;
  int __temp601v=0;
  int __temp602v__=0;
  void* __temp603v__buf__unsafe_ptr=0;
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
  *__temp1819v=__temp603v__buf__unsafe_ptr;
  *__temp1820v=__temp603v__buf__unsafe_size;
  *__temp1821v=__temp603v__buf__unsafe_align;
  *__temp1822v=__temp603v__dat__pos;
  *__temp1823v=__temp603v__dat__length;
  *__temp1824v=__temp603v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp690v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp692v__=0;
  int __temp693v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp350v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp692v__);
  gt__temp206v(__temp692v__,s__buf__unsafe_size,&__temp693v__);
  if(__temp693v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp613v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, void** __temp1825v, unsigned long long* __temp1826v, unsigned long long* __temp1827v, unsigned long long* __temp1828v, unsigned long long* __temp1829v, char* __temp1830v) {
  unsigned long long __temp615v=0;
  unsigned long long by=0;
  unsigned long long __temp616v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp617v__=0;
  unsigned long long __temp618v__=0;
  int __temp619v__=0;
  int __temp620v=0;
  int __temp621v__=0;
  void* __temp622v__buf__unsafe_ptr=0;
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
  *__temp1825v=__temp622v__buf__unsafe_ptr;
  *__temp1826v=__temp622v__buf__unsafe_size;
  *__temp1827v=__temp622v__buf__unsafe_align;
  *__temp1828v=__temp622v__dat__pos;
  *__temp1829v=__temp622v__dat__length;
  *__temp1830v=__temp622v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1831v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1831v=z;
}

static inline __attribute__((always_inline)) void eq__temp541v(char x, char y, int* __temp1832v) {
  int z=0;
  z=(x==y);
  *__temp1832v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp557v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1836v, unsigned long long* __temp1837v, unsigned long long* __temp1838v, unsigned long long* __temp1839v, unsigned long long* __temp1840v, char* __temp1841v) {
  unsigned long long __temp558v=0;
  unsigned long long __temp559v__=0;
  unsigned long long __temp560v__=0;
  void* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__unsafe_size=0;
  unsigned long long __temp561v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp563v=0;
  void* __temp564v__buf__unsafe_ptr=0;
  unsigned long long __temp564v__buf__unsafe_size=0;
  unsigned long long __temp564v__buf__unsafe_align=0;
  unsigned long long __temp564v__dat__pos=0;
  unsigned long long __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  unsigned long long __temp1834v=0;
  int __temp1835v=0;
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
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp563v=0;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp563v,other__dat__length,other__dat__first,&__temp564v__buf__unsafe_ptr,&__temp564v__buf__unsafe_size,&__temp564v__buf__unsafe_align,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  *__temp1836v=__temp564v__buf__unsafe_ptr;
  *__temp1837v=__temp564v__buf__unsafe_size;
  *__temp1838v=__temp564v__buf__unsafe_align;
  *__temp1839v=__temp564v__dat__pos;
  *__temp1840v=__temp564v__dat__length;
  *__temp1841v=__temp564v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp516v(const char* c, int* __temp1842v) {
  int z=0;
  z=c!=0;
  *__temp1842v=z;
}

int unsafe_temporary_cstr__temp565v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1847v) {
  unsigned long long __temp566v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp567v=0;
  int __temp568v__=0;
  unsigned long long __temp569v__=0;
  int __temp570v__=0;
  unsigned long long __temp571v=0;
  unsigned long long __temp572v__=0;
  void* __temp573v__=0;
  char __temp574v__value=0;
  char __temp576v__=0;
  int __temp577v__=0;
  int __temp578v=0;
  int __temp579v=0;
  unsigned long long __temp580v__=0;
  int __temp581v__=0;
  void* __temp582v__=0;
  char __temp583v__value=0;
  char __temp584v__=0;
  int __temp585v__=0;
  int __temp586v=0;
  void* __temp587v__buf__unsafe_ptr=0;
  unsigned long long __temp587v__buf__unsafe_size=0;
  unsigned long long __temp587v__buf__unsafe_align=0;
  unsigned long long __temp587v__dat__pos=0;
  unsigned long long __temp587v__dat__length=0;
  char __temp587v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  int __temp589v__=0;
  int __temp590v__=0;
  unsigned long long __temp1845v=0;
  int __temp1846v=0;
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
  memcpy(&__temp574v__value,(char*)__temp573v__,1);
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
  memcpy(&__temp583v__value,(char*)__temp582v__,1);
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
  *__temp1847v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1848v) {
  long long int z=0;
  z=x;
  *__temp1848v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1849v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1849v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, int* __temp1850v) {
  int __temp292v__=0;
  int z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y?1:0;
  *__temp1850v=z;
}

static inline __attribute__((always_inline)) int read__temp1198v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, void** __temp1857v) {
  const char* __temp1199v__=0;
  const char* cmd=0;
  void* unsafe_ptr=0;
  int __temp1201v__=0;
  int __temp1202v__=0;
  int __temp1203v__=0;
  long long int status=0;
  unsigned long long __temp1204v=0;
  long long int __temp1205v__=0;
  int __temp1206v__=0;
  int __temp1207v=0;
  int __temp1851v=0;
  int __temp1852v=0;
  unsigned long long __temp1853v=0;
  unsigned long long __temp1854v=0;
  int __temp1855v=0;
  void* __temp1856v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp565v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1199v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1199v__;
  unsafe_ptr=popen((const char*)cmd,"r");
  exists__temp398v(unsafe_ptr,&__temp1201v__);
  not__temp18v(__temp1201v__,&__temp1202v__);
  if(__temp1202v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  *__temp1857v=unsafe_ptr;
  
  __temp_failure:exists__temp516v(__temp1199v__,&__temp1851v);
  not__temp18v(__temp1851v,&__temp1852v);
  if(__temp1852v){
  __temp1853v=0;
  neq__temp302v(__temp1854v,__temp1853v,&__temp1855v);
  if(__temp1855v){
  __temp1854v=0;
  free__temp428v(&__temp1856v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1195v(long long int value, const char** __temp1858v) {
  const char* endl=0;
  const char* ret=0;
  endl=__temp350v;
  ret=__temp_all_errcodes[value];
  *__temp1858v=ret;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1638v(void* command__buf__unsafe_ptr, unsigned long long command__buf__unsafe_size, unsigned long long command__buf__unsafe_align, unsigned long long command__dat__pos, unsigned long long command__dat__length, char command__dat__first) {
  void* __temp1639v__unsafe_ptr=0;
  long long int __temp1640v__status=0;
  void* __temp1641v__unsafe_ptr=0;
  void* proc__unsafe_ptr=0;
  int __temp1642v=0;
  long long int __temp1643v=0;
  long long int error=0;
  const char* __temp1644v__=0;
  int __temp1860v=0;
  unsigned long long __temp1861v=0;
  long long int __temp1862v=0;
  int __temp1863v=0;
  int __temp1864v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1198v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1639v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1641v__unsafe_ptr=__temp1639v__unsafe_ptr;
  proc__unsafe_ptr=__temp1641v__unsafe_ptr;
  exists__temp398v(__temp1639v__unsafe_ptr,&__temp1860v);
  if(__temp1860v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1639v__unsafe_ptr)){
  }
  __temp1640v__status=pclose((FILE*)__temp1639v__unsafe_ptr);
  __temp1639v__unsafe_ptr=0;
  }
  __temp1861v=0;
  int__temp382v(__temp1861v,&__temp1862v);
  neq__temp291v(__temp1640v__status,__temp1862v,&__temp1863v);
  if(__temp1863v){
  __temp_complain=29;
  __temp1864v=__temp1864v==0;
  }
  __temp1643v=__temp_complain;
  __temp1642v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1643v;
  __temp1642v=__temp1642v==0;
  if(__temp1642v){
  cstr__temp1195v(error,&__temp1644v__);
  print__temp348v(__temp1644v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1654v() {
  const char* path=0;
  unsigned long long __temp1656v=0;
  unsigned long long max_command_length=0;
  void* __temp1657v__unsafe_ptr=0;
  unsigned long long __temp1657v__unsafe_size=0;
  unsigned long long __temp1657v__unsafe_align=0;
  void* __temp1659v__buf__unsafe_ptr=0;
  unsigned long long __temp1659v__buf__unsafe_size=0;
  unsigned long long __temp1659v__buf__unsafe_align=0;
  unsigned long long __temp1659v__pos=0;
  void* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  void* __temp1661v__buf__unsafe_ptr=0;
  unsigned long long __temp1661v__buf__unsafe_size=0;
  unsigned long long __temp1661v__buf__unsafe_align=0;
  unsigned long long __temp1661v__dat__pos=0;
  unsigned long long __temp1661v__dat__length=0;
  char __temp1661v__dat__first=0;
  void* __temp1662v__buf__unsafe_ptr=0;
  unsigned long long __temp1662v__buf__unsafe_size=0;
  unsigned long long __temp1662v__buf__unsafe_align=0;
  unsigned long long __temp1662v__dat__pos=0;
  unsigned long long __temp1662v__dat__length=0;
  char __temp1662v__dat__first=0;
  void* __temp1663v__unsafe_ptr=0;
  void* test_dir__unsafe_ptr=0;
  unsigned long long __temp1665v=0;
  unsigned long long __temp1666v__=0;
  void* __temp1667v__unsafe_ptr=0;
  unsigned long long __temp1667v__unsafe_size=0;
  unsigned long long __temp1667v__unsafe_align=0;
  void* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  int __temp1669v=0;
  void* __temp1670v__buf__unsafe_ptr=0;
  unsigned long long __temp1670v__buf__unsafe_size=0;
  unsigned long long __temp1670v__buf__unsafe_align=0;
  unsigned long long __temp1670v__dat__pos=0;
  unsigned long long __temp1670v__dat__length=0;
  char __temp1670v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  int __temp1672v__=0;
  int __temp1673v__=0;
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
  void* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1678v__=0;
  unsigned long long __temp1679v__=0;
  char __temp1681v__=0;
  void* __temp1682v__buf__unsafe_ptr=0;
  unsigned long long __temp1682v__buf__unsafe_size=0;
  unsigned long long __temp1682v__buf__unsafe_align=0;
  unsigned long long __temp1682v__dat__pos=0;
  unsigned long long __temp1682v__dat__length=0;
  char __temp1682v__dat__first=0;
  char __temp1684v__=0;
  void* __temp1685v__buf__unsafe_ptr=0;
  unsigned long long __temp1685v__buf__unsafe_size=0;
  unsigned long long __temp1685v__buf__unsafe_align=0;
  unsigned long long __temp1685v__dat__pos=0;
  unsigned long long __temp1685v__dat__length=0;
  char __temp1685v__dat__first=0;
  unsigned long long __temp1867v=0;
  int __temp1868v=0;
  unsigned long long __temp1876v=0;
  int __temp1877v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1655v;
  __temp1656v=50;
  max_command_length=__temp1656v;
  __temp_errcode=alloc__temp487v(max_command_length,&__temp1657v__unsafe_ptr,&__temp1657v__unsafe_size,&__temp1657v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp592v(&__temp1657v__unsafe_ptr,&__temp1657v__unsafe_size,&__temp1657v__unsafe_align,&__temp1659v__buf__unsafe_ptr,&__temp1659v__buf__unsafe_size,&__temp1659v__buf__unsafe_align,&__temp1659v__pos);
  bp__buf__unsafe_ptr=__temp1659v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1659v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1659v__buf__unsafe_align;
  bp__pos=__temp1659v__pos;
  __temp_errcode=copy__temp659v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1660v,&__temp1661v__buf__unsafe_ptr,&__temp1661v__buf__unsafe_size,&__temp1661v__buf__unsafe_align,&__temp1661v__dat__pos,&__temp1661v__dat__length,&__temp1661v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp659v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1662v__buf__unsafe_ptr,&__temp1662v__buf__unsafe_size,&__temp1662v__buf__unsafe_align,&__temp1662v__dat__pos,&__temp1662v__dat__length,&__temp1662v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1621v(path,&__temp1663v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1663v__unsafe_ptr;
  __temp1665v=4;
  KB__temp410v(__temp1665v,&__temp1666v__);
  __temp_errcode=alloc__temp487v(__temp1666v__,&__temp1667v__unsafe_ptr,&__temp1667v__unsafe_size,&__temp1667v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1667v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1667v__unsafe_size;
  proc_buf__unsafe_align=__temp1667v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1632v(&test_dir__unsafe_ptr,&__temp1670v__buf__unsafe_ptr,&__temp1670v__buf__unsafe_size,&__temp1670v__buf__unsafe_align,&__temp1670v__dat__pos,&__temp1670v__dat__length,&__temp1670v__dat__first);
  __temp1669v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1670v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1670v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1670v__buf__unsafe_align;
  entry__dat__pos=__temp1670v__dat__pos;
  entry__dat__length=__temp1670v__dat__length;
  entry__dat__first=__temp1670v__dat__first;
  __temp1669v=__temp1669v==0;
  if(!__temp1669v)break;
  __temp_errcode=ends_with__temp839v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1671v,&__temp1672v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1672v__,&__temp1673v__);
  if(__temp1673v__){
  continue;
  }
  __temp1674v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1674v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1674v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1674v__pos=bp__pos;
  str__temp527v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1675v__buf__unsafe_ptr,&__temp1675v__buf__unsafe_size,&__temp1675v__buf__unsafe_align,&__temp1675v__dat__pos,&__temp1675v__dat__length,&__temp1675v__dat__first);
  __temp_errcode=copy__temp650v(&__temp1674v__buf__unsafe_ptr,&__temp1674v__buf__unsafe_size,&__temp1674v__buf__unsafe_align,&__temp1674v__pos,__temp1675v__buf__unsafe_ptr,__temp1675v__buf__unsafe_size,__temp1675v__buf__unsafe_align,__temp1675v__dat__pos,__temp1675v__dat__length,__temp1675v__dat__first,&__temp1676v__buf__unsafe_ptr,&__temp1676v__buf__unsafe_size,&__temp1676v__buf__unsafe_align,&__temp1676v__dat__pos,&__temp1676v__dat__length,&__temp1676v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp641v(__temp1676v__buf__unsafe_ptr,__temp1676v__buf__unsafe_size,__temp1676v__buf__unsafe_align,__temp1676v__dat__pos,__temp1676v__dat__length,__temp1676v__dat__first,&__temp1677v__buf__unsafe_ptr,&__temp1677v__buf__unsafe_size,&__temp1677v__buf__unsafe_align,&__temp1677v__dat__pos,&__temp1677v__dat__length,&__temp1677v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1677v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1677v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1677v__buf__unsafe_align;
  command__dat__pos=__temp1677v__dat__pos;
  command__dat__length=__temp1677v__dat__length;
  command__dat__first=__temp1677v__dat__first;
  len__temp538v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1678v__);
  __temp_errcode=sub__temp330v(max_command_length,__temp1678v__,&__temp1679v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp540v(__temp1680v,&__temp1681v__);
  __temp_errcode=rextend__temp595v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1679v__,__temp1681v__,&__temp1682v__buf__unsafe_ptr,&__temp1682v__buf__unsafe_size,&__temp1682v__buf__unsafe_align,&__temp1682v__dat__pos,&__temp1682v__dat__length,&__temp1682v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp690v(__temp1682v__buf__unsafe_ptr,__temp1682v__buf__unsafe_size,__temp1682v__buf__unsafe_align,__temp1682v__dat__pos,__temp1682v__dat__length,__temp1682v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp540v(__temp575v,&__temp1684v__);
  __temp_errcode=rextend__temp613v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1684v__,&__temp1685v__buf__unsafe_ptr,&__temp1685v__buf__unsafe_size,&__temp1685v__buf__unsafe_align,&__temp1685v__dat__pos,&__temp1685v__dat__length,&__temp1685v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=run__temp1638v(__temp1685v__buf__unsafe_ptr,__temp1685v__buf__unsafe_size,__temp1685v__buf__unsafe_align,__temp1685v__dat__pos,__temp1685v__dat__length,__temp1685v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1876v=0;
  neq__temp302v(__temp1667v__unsafe_size,__temp1876v,&__temp1877v);
  if(__temp1877v){
  __temp1667v__unsafe_size=0;
  free__temp428v(&__temp1667v__unsafe_ptr);
  }
  if(__temp1663v__unsafe_ptr)closedir((DIR*)__temp1663v__unsafe_ptr);
  __temp1663v__unsafe_ptr=0;
  __temp1867v=0;
  neq__temp302v(__temp1657v__unsafe_size,__temp1867v,&__temp1868v);
  if(__temp1868v){
  __temp1657v__unsafe_size=0;
  free__temp428v(&__temp1657v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1654v();return 0;}