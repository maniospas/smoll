#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1640v="./std";
const char* const __temp348v="\n";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp592v(const char* other, const char** __temp1650v) {
  *__temp1650v=other;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1651v) {
  int z=0;
  z=x!=0;
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1652v) {
  int z=0;
  z=value?0:1;
  *__temp1652v=z;
}

static inline __attribute__((always_inline)) int read__temp1622v(const char* _path, void** __temp1653v) {
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
  *__temp1653v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1654v, unsigned long long* __temp1655v, unsigned long long* __temp1656v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1654v=unsafe_ptr;
  *__temp1655v=unsafe_size;
  *__temp1656v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1657v) {
  int value=0;
  *__temp1657v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1658v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1658v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1659v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1659v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1660v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1660v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1661v) {
  void* allocated=*__temp1661v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1661v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1662v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1663v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1663v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1664v) {
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
  *__temp1664v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1665v, unsigned long long* __temp1666v, unsigned long long* __temp1667v, unsigned long long size, void** __temp1668v, unsigned long long* __temp1669v, unsigned long long* __temp1670v) {
  void* buffer__unsafe_ptr=*__temp1665v;
  unsigned long long buffer__unsafe_size=*__temp1666v;
  unsigned long long buffer__unsafe_align=*__temp1667v;
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
  *__temp1665v=buffer__unsafe_ptr;
  *__temp1666v=buffer__unsafe_size;
  *__temp1667v=buffer__unsafe_align;
  *__temp1668v=buffer__unsafe_ptr;
  *__temp1669v=buffer__unsafe_size;
  *__temp1670v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1673v=0;
  int __temp1674v=0;
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
  *__temp1675v=__temp493v__unsafe_ptr;
  *__temp1676v=__temp493v__unsafe_size;
  *__temp1677v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1678v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1678v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1679v) {
  *__temp1679v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1680v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1680v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1681v) {
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
  *__temp1681v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, char* __temp1687v) {
  *__temp1682v=buf__unsafe_ptr;
  *__temp1683v=buf__unsafe_size;
  *__temp1684v=buf__unsafe_align;
  *__temp1685v=dat__pos;
  *__temp1686v=dat__length;
  *__temp1687v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, unsigned long long* __temp1691v, unsigned long long* __temp1692v, char* __temp1693v) {
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
  *__temp1688v=__temp534v__buf__unsafe_ptr;
  *__temp1689v=__temp534v__buf__unsafe_size;
  *__temp1690v=__temp534v__buf__unsafe_align;
  *__temp1691v=__temp534v__dat__pos;
  *__temp1692v=__temp534v__dat__length;
  *__temp1693v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1695v, unsigned long long* __temp1696v, unsigned long long* __temp1697v, unsigned long long* __temp1698v, unsigned long long* __temp1699v, char* __temp1700v) {
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
  *__temp1695v=__temp538v__buf__unsafe_ptr;
  *__temp1696v=__temp538v__buf__unsafe_size;
  *__temp1697v=__temp538v__buf__unsafe_align;
  *__temp1698v=__temp538v__dat__pos;
  *__temp1699v=__temp538v__dat__length;
  *__temp1700v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1633v(void** __temp1701v, void** __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v, unsigned long long* __temp1705v, unsigned long long* __temp1706v, char* __temp1707v) {
  void* f__unsafe_ptr=*__temp1701v;
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
  *__temp1701v=f__unsafe_ptr;
  *__temp1702v=__temp1638v__buf__unsafe_ptr;
  *__temp1703v=__temp1638v__buf__unsafe_size;
  *__temp1704v=__temp1638v__buf__unsafe_align;
  *__temp1705v=__temp1638v__dat__pos;
  *__temp1706v=__temp1638v__dat__length;
  *__temp1707v=__temp1638v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1708v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1708v=z;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1709v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1709v=z;
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

static inline __attribute__((always_inline)) int main__temp1639v() {
  void* __temp1641v__unsafe_ptr=0;
  void* __temp1643v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1644v=0;
  void* __temp1645v__unsafe_ptr=0;
  unsigned long long __temp1645v__unsafe_size=0;
  unsigned long long __temp1645v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1647v=0;
  void* __temp1648v__buf__unsafe_ptr=0;
  unsigned long long __temp1648v__buf__unsafe_size=0;
  unsigned long long __temp1648v__buf__unsafe_align=0;
  unsigned long long __temp1648v__dat__pos=0;
  unsigned long long __temp1648v__dat__length=0;
  char __temp1648v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1713v=0;
  int __temp1714v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1622v(__temp1640v,&__temp1641v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1643v__unsafe_ptr=__temp1641v__unsafe_ptr;
  dir__unsafe_ptr=__temp1643v__unsafe_ptr;
  __temp1644v=128;
  __temp_errcode=alloc__temp488v(__temp1644v,&__temp1645v__unsafe_ptr,&__temp1645v__unsafe_size,&__temp1645v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1645v__unsafe_ptr;
  buf__unsafe_size=__temp1645v__unsafe_size;
  buf__unsafe_align=__temp1645v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1633v(&dir__unsafe_ptr,&__temp1648v__buf__unsafe_ptr,&__temp1648v__buf__unsafe_size,&__temp1648v__buf__unsafe_align,&__temp1648v__dat__pos,&__temp1648v__dat__length,&__temp1648v__dat__first);
  __temp1647v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1648v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1648v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1648v__buf__unsafe_align;
  entry__dat__pos=__temp1648v__dat__pos;
  entry__dat__length=__temp1648v__dat__length;
  entry__dat__first=__temp1648v__dat__first;
  __temp1647v=__temp1647v==0;
  if(!__temp1647v)break;
  __temp_errcode=print__temp691v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1713v=0;
  neq__temp302v(__temp1645v__unsafe_size,__temp1713v,&__temp1714v);
  if(__temp1714v){
  __temp1645v__unsafe_size=0;
  free__temp429v(&__temp1645v__unsafe_ptr);
  }
  if(__temp1641v__unsafe_ptr)closedir((DIR*)__temp1641v__unsafe_ptr);
  __temp1641v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1639v();return 0;}