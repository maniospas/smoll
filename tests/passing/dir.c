#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp350v="\n";
const char* const __temp1639v="./std";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp591v(const char* other, const char** __temp1649v) {
  *__temp1649v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(void* x, int* __temp1650v) {
  int z=0;
  z=x!=0;
  *__temp1650v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1651v) {
  int z=0;
  z=value?0:1;
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) int read__temp1621v(const char* _path, void** __temp1652v) {
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
  *__temp1652v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1653v, unsigned long long* __temp1654v, unsigned long long* __temp1655v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1653v=unsafe_ptr;
  *__temp1654v=unsafe_size;
  *__temp1655v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1656v) {
  int value=0;
  *__temp1656v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1657v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1657v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1658v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1658v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1659v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1659v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1660v) {
  void* allocated=*__temp1660v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1660v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1661v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1661v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1662v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1663v) {
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
  *__temp1663v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1664v, unsigned long long* __temp1665v, unsigned long long* __temp1666v, unsigned long long size, void** __temp1667v, unsigned long long* __temp1668v, unsigned long long* __temp1669v) {
  void* buffer__unsafe_ptr=*__temp1664v;
  unsigned long long buffer__unsafe_size=*__temp1665v;
  unsigned long long buffer__unsafe_align=*__temp1666v;
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
  *__temp1664v=buffer__unsafe_ptr;
  *__temp1665v=buffer__unsafe_size;
  *__temp1666v=buffer__unsafe_align;
  *__temp1667v=buffer__unsafe_ptr;
  *__temp1668v=buffer__unsafe_size;
  *__temp1669v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1672v=0;
  int __temp1673v=0;
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
  *__temp1674v=__temp492v__unsafe_ptr;
  *__temp1675v=__temp492v__unsafe_size;
  *__temp1676v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1677v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1677v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1678v) {
  *__temp1678v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1679v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1679v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1680v) {
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
  *__temp1680v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1681v, unsigned long long* __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, char* __temp1686v) {
  *__temp1681v=buf__unsafe_ptr;
  *__temp1682v=buf__unsafe_size;
  *__temp1683v=buf__unsafe_align;
  *__temp1684v=dat__pos;
  *__temp1685v=dat__length;
  *__temp1686v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, unsigned long long* __temp1691v, char* __temp1692v) {
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
  *__temp1687v=__temp533v__buf__unsafe_ptr;
  *__temp1688v=__temp533v__buf__unsafe_size;
  *__temp1689v=__temp533v__buf__unsafe_align;
  *__temp1690v=__temp533v__dat__pos;
  *__temp1691v=__temp533v__dat__length;
  *__temp1692v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, void** __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, unsigned long long* __temp1697v, unsigned long long* __temp1698v, char* __temp1699v) {
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
  *__temp1694v=__temp537v__buf__unsafe_ptr;
  *__temp1695v=__temp537v__buf__unsafe_size;
  *__temp1696v=__temp537v__buf__unsafe_align;
  *__temp1697v=__temp537v__dat__pos;
  *__temp1698v=__temp537v__dat__length;
  *__temp1699v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1632v(void** __temp1700v, void** __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v, unsigned long long* __temp1705v, char* __temp1706v) {
  void* f__unsafe_ptr=*__temp1700v;
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
  *__temp1700v=f__unsafe_ptr;
  *__temp1701v=__temp1637v__buf__unsafe_ptr;
  *__temp1702v=__temp1637v__buf__unsafe_size;
  *__temp1703v=__temp1637v__buf__unsafe_align;
  *__temp1704v=__temp1637v__dat__pos;
  *__temp1705v=__temp1637v__dat__length;
  *__temp1706v=__temp1637v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1707v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1707v=z;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1708v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1708v=z;
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

static inline __attribute__((always_inline)) int main__temp1638v() {
  void* __temp1640v__unsafe_ptr=0;
  void* __temp1642v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1643v=0;
  void* __temp1644v__unsafe_ptr=0;
  unsigned long long __temp1644v__unsafe_size=0;
  unsigned long long __temp1644v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1646v=0;
  void* __temp1647v__buf__unsafe_ptr=0;
  unsigned long long __temp1647v__buf__unsafe_size=0;
  unsigned long long __temp1647v__buf__unsafe_align=0;
  unsigned long long __temp1647v__dat__pos=0;
  unsigned long long __temp1647v__dat__length=0;
  char __temp1647v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1712v=0;
  int __temp1713v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1621v(__temp1639v,&__temp1640v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1642v__unsafe_ptr=__temp1640v__unsafe_ptr;
  dir__unsafe_ptr=__temp1642v__unsafe_ptr;
  __temp1643v=128;
  __temp_errcode=alloc__temp487v(__temp1643v,&__temp1644v__unsafe_ptr,&__temp1644v__unsafe_size,&__temp1644v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1644v__unsafe_ptr;
  buf__unsafe_size=__temp1644v__unsafe_size;
  buf__unsafe_align=__temp1644v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1632v(&dir__unsafe_ptr,&__temp1647v__buf__unsafe_ptr,&__temp1647v__buf__unsafe_size,&__temp1647v__buf__unsafe_align,&__temp1647v__dat__pos,&__temp1647v__dat__length,&__temp1647v__dat__first);
  __temp1646v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1647v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1647v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1647v__buf__unsafe_align;
  entry__dat__pos=__temp1647v__dat__pos;
  entry__dat__length=__temp1647v__dat__length;
  entry__dat__first=__temp1647v__dat__first;
  __temp1646v=__temp1646v==0;
  if(!__temp1646v)break;
  __temp_errcode=print__temp690v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1712v=0;
  neq__temp302v(__temp1644v__unsafe_size,__temp1712v,&__temp1713v);
  if(__temp1713v){
  __temp1644v__unsafe_size=0;
  free__temp428v(&__temp1644v__unsafe_ptr);
  }
  if(__temp1640v__unsafe_ptr)closedir((DIR*)__temp1640v__unsafe_ptr);
  __temp1640v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1638v();return 0;}