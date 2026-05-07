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
const char* const __temp1659v="./std";
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp592v(const char* other, const char** __temp1669v) {
  *__temp1669v=other;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1670v) {
  int z=0;
  z=x!=0;
  *__temp1670v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1671v) {
  int z=0;
  z=value?0:1;
  *__temp1671v=z;
}

static inline __attribute__((always_inline)) int read__temp1623v(const char* _path, void** __temp1672v) {
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
  *__temp1672v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1673v, unsigned long long* __temp1674v, unsigned long long* __temp1675v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1673v=unsafe_ptr;
  *__temp1674v=unsafe_size;
  *__temp1675v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1676v) {
  int value=0;
  *__temp1676v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1677v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1677v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1678v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1678v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1679v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1679v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1680v) {
  void* allocated=*__temp1680v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1680v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1681v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1681v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1682v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1682v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1683v) {
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
  *__temp1683v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long size, void** __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v) {
  void* buffer__unsafe_ptr=*__temp1684v;
  unsigned long long buffer__unsafe_size=*__temp1685v;
  unsigned long long buffer__unsafe_align=*__temp1686v;
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
  *__temp1684v=buffer__unsafe_ptr;
  *__temp1685v=buffer__unsafe_size;
  *__temp1686v=buffer__unsafe_align;
  *__temp1687v=buffer__unsafe_ptr;
  *__temp1688v=buffer__unsafe_size;
  *__temp1689v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1692v=0;
  int __temp1693v=0;
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
  *__temp1694v=__temp493v__unsafe_ptr;
  *__temp1695v=__temp493v__unsafe_size;
  *__temp1696v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1633v(void** __temp1697v, const char** __temp1698v) {
  void* f__unsafe_ptr=*__temp1697v;
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
  *__temp1697v=f__unsafe_ptr;
  *__temp1698v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1699v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1699v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1700v) {
  *__temp1700v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1701v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1701v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1702v) {
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
  *__temp1702v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1703v, unsigned long long* __temp1704v, unsigned long long* __temp1705v, unsigned long long* __temp1706v, unsigned long long* __temp1707v, char* __temp1708v) {
  *__temp1703v=buf__unsafe_ptr;
  *__temp1704v=buf__unsafe_size;
  *__temp1705v=buf__unsafe_align;
  *__temp1706v=dat__pos;
  *__temp1707v=dat__length;
  *__temp1708v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v, unsigned long long* __temp1712v, unsigned long long* __temp1713v, char* __temp1714v) {
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
  *__temp1709v=__temp534v__buf__unsafe_ptr;
  *__temp1710v=__temp534v__buf__unsafe_size;
  *__temp1711v=__temp534v__buf__unsafe_align;
  *__temp1712v=__temp534v__dat__pos;
  *__temp1713v=__temp534v__dat__length;
  *__temp1714v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, unsigned long long* __temp1719v, unsigned long long* __temp1720v, char* __temp1721v) {
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
  *__temp1716v=__temp538v__buf__unsafe_ptr;
  *__temp1717v=__temp538v__buf__unsafe_size;
  *__temp1718v=__temp538v__buf__unsafe_align;
  *__temp1719v=__temp538v__dat__pos;
  *__temp1720v=__temp538v__dat__length;
  *__temp1721v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1722v) {
  *__temp1722v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1723v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1723v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1724v) {
  *__temp1724v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1725v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1725v=z;
}

int copy__temp660v(void** __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, const char* _other, void** __temp1732v, unsigned long long* __temp1733v, unsigned long long* __temp1734v, unsigned long long* __temp1735v, unsigned long long* __temp1736v, char* __temp1737v) {
  void* buf__unsafe_ptr=*__temp1728v;
  unsigned long long buf__unsafe_size=*__temp1729v;
  unsigned long long buf__unsafe_align=*__temp1730v;
  unsigned long long pos=*__temp1731v;
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
  *__temp1728v=buf__unsafe_ptr;
  *__temp1729v=buf__unsafe_size;
  *__temp1730v=buf__unsafe_align;
  *__temp1731v=pos;
  *__temp1732v=__temp668v__buf__unsafe_ptr;
  *__temp1733v=__temp668v__buf__unsafe_size;
  *__temp1734v=__temp668v__buf__unsafe_align;
  *__temp1735v=__temp668v__dat__pos;
  *__temp1736v=__temp668v__dat__length;
  *__temp1737v=__temp668v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1652v(void** __temp1738v, unsigned long long* __temp1739v, unsigned long long* __temp1740v, void** __temp1741v, void** __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, unsigned long long* __temp1745v, unsigned long long* __temp1746v, char* __temp1747v) {
  void* buf__unsafe_ptr=*__temp1738v;
  unsigned long long buf__unsafe_size=*__temp1739v;
  unsigned long long buf__unsafe_align=*__temp1740v;
  void* f__unsafe_ptr=*__temp1741v;
  unsigned long long __temp1654v=0;
  unsigned long long __temp1655v=0;
  unsigned long long pos=0;
  const char* __temp1656v__=0;
  void* __temp1657v__buf__unsafe_ptr=0;
  unsigned long long __temp1657v__buf__unsafe_size=0;
  unsigned long long __temp1657v__buf__unsafe_align=0;
  unsigned long long __temp1657v__dat__pos=0;
  unsigned long long __temp1657v__dat__length=0;
  char __temp1657v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1654v=0;
  __temp1655v=__temp1654v;
  pos=__temp1655v;
  __temp_errcode=unsafe_entry__temp1633v(&f__unsafe_ptr,&__temp1656v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp660v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1656v__,&__temp1657v__buf__unsafe_ptr,&__temp1657v__buf__unsafe_size,&__temp1657v__buf__unsafe_align,&__temp1657v__dat__pos,&__temp1657v__dat__length,&__temp1657v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1738v=buf__unsafe_ptr;
  *__temp1739v=buf__unsafe_size;
  *__temp1740v=buf__unsafe_align;
  *__temp1741v=f__unsafe_ptr;
  *__temp1742v=__temp1657v__buf__unsafe_ptr;
  *__temp1743v=__temp1657v__buf__unsafe_size;
  *__temp1744v=__temp1657v__buf__unsafe_align;
  *__temp1745v=__temp1657v__dat__pos;
  *__temp1746v=__temp1657v__dat__length;
  *__temp1747v=__temp1657v__dat__first;
  
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

static inline __attribute__((always_inline)) int main__temp1658v() {
  void* __temp1660v__unsafe_ptr=0;
  void* __temp1662v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1663v=0;
  void* __temp1664v__unsafe_ptr=0;
  unsigned long long __temp1664v__unsafe_size=0;
  unsigned long long __temp1664v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1666v=0;
  void* __temp1667v__buf__unsafe_ptr=0;
  unsigned long long __temp1667v__buf__unsafe_size=0;
  unsigned long long __temp1667v__buf__unsafe_align=0;
  unsigned long long __temp1667v__dat__pos=0;
  unsigned long long __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1751v=0;
  int __temp1752v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1623v(__temp1659v,&__temp1660v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1662v__unsafe_ptr=__temp1660v__unsafe_ptr;
  dir__unsafe_ptr=__temp1662v__unsafe_ptr;
  __temp1663v=128;
  __temp_errcode=alloc__temp488v(__temp1663v,&__temp1664v__unsafe_ptr,&__temp1664v__unsafe_size,&__temp1664v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1664v__unsafe_ptr;
  buf__unsafe_size=__temp1664v__unsafe_size;
  buf__unsafe_align=__temp1664v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1652v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&dir__unsafe_ptr,&__temp1667v__buf__unsafe_ptr,&__temp1667v__buf__unsafe_size,&__temp1667v__buf__unsafe_align,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  __temp1666v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1667v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1667v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1667v__buf__unsafe_align;
  entry__dat__pos=__temp1667v__dat__pos;
  entry__dat__length=__temp1667v__dat__length;
  entry__dat__first=__temp1667v__dat__first;
  __temp1666v=__temp1666v==0;
  if(!__temp1666v)break;
  __temp_errcode=print__temp691v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1751v=0;
  neq__temp302v(__temp1664v__unsafe_size,__temp1751v,&__temp1752v);
  if(__temp1752v){
  __temp1664v__unsafe_size=0;
  free__temp429v(&__temp1664v__unsafe_ptr);
  }
  if(__temp1660v__unsafe_ptr)closedir((DIR*)__temp1660v__unsafe_ptr);
  __temp1660v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1658v();return 0;}