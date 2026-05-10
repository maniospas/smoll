#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1644v="./std";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp591v(const char* other, const char** __temp1654v) {
  *__temp1654v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1655v) {
  char z=0;
  z=x!=0;
  *__temp1655v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1656v) {
  char z=0;
  z=value?0:1;
  *__temp1656v=z;
}

static inline __attribute__((always_inline)) int read__temp1626v(const char* _path, char** __temp1657v) {
  const char* __temp1627v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1628v__=0;
  char __temp1629v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp591v(_path,&__temp1627v__);
  path=__temp1627v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1628v__);
  not__temp18v(__temp1628v__,&__temp1629v__);
  if(__temp1629v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1657v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1658v, unsigned long long* __temp1659v, unsigned long long* __temp1660v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1658v=unsafe_ptr;
  *__temp1659v=unsafe_size;
  *__temp1660v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1661v) {
  int value=0;
  *__temp1661v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1662v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1662v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1663v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1663v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1664v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1664v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1665v) {
  char* allocated=*__temp1665v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1665v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1666v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1667v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1667v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1668v) {
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
  *__temp1668v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v, unsigned long long size, char** __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v) {
  char* buffer__unsafe_ptr=*__temp1669v;
  unsigned long long buffer__unsafe_size=*__temp1670v;
  unsigned long long buffer__unsafe_align=*__temp1671v;
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
  *__temp1669v=buffer__unsafe_ptr;
  *__temp1670v=buffer__unsafe_size;
  *__temp1671v=buffer__unsafe_align;
  *__temp1672v=buffer__unsafe_ptr;
  *__temp1673v=buffer__unsafe_size;
  *__temp1674v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, char** __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v) {
  char* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  char* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  char* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1677v=0;
  char __temp1678v=0;
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
  *__temp1679v=__temp492v__unsafe_ptr;
  *__temp1680v=__temp492v__unsafe_size;
  *__temp1681v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1682v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1682v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1683v) {
  *__temp1683v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1684v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1684v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1685v) {
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
  *__temp1685v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, char* __temp1691v) {
  *__temp1686v=buf__unsafe_ptr;
  *__temp1687v=buf__unsafe_size;
  *__temp1688v=buf__unsafe_align;
  *__temp1689v=dat__pos;
  *__temp1690v=dat__length;
  *__temp1691v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, char* __temp1697v) {
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
  *__temp1692v=__temp533v__buf__unsafe_ptr;
  *__temp1693v=__temp533v__buf__unsafe_size;
  *__temp1694v=__temp533v__buf__unsafe_align;
  *__temp1695v=__temp533v__dat__pos;
  *__temp1696v=__temp533v__dat__length;
  *__temp1697v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, char** __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, char* __temp1704v) {
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
  *__temp1699v=__temp537v__buf__unsafe_ptr;
  *__temp1700v=__temp537v__buf__unsafe_size;
  *__temp1701v=__temp537v__buf__unsafe_align;
  *__temp1702v=__temp537v__dat__pos;
  *__temp1703v=__temp537v__dat__length;
  *__temp1704v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1637v(char** __temp1705v, char** __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v, unsigned long long* __temp1709v, unsigned long long* __temp1710v, char* __temp1711v) {
  char* f__unsafe_ptr=*__temp1705v;
  char __temp1638v__=0;
  char __temp1639v__=0;
  char* de=0;
  char __temp1640v__=0;
  char __temp1641v__=0;
  const char* dirname=0;
  char* __temp1642v__buf__unsafe_ptr=0;
  unsigned long long __temp1642v__buf__unsafe_size=0;
  unsigned long long __temp1642v__buf__unsafe_align=0;
  unsigned long long __temp1642v__dat__pos=0;
  unsigned long long __temp1642v__dat__length=0;
  char __temp1642v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1638v__);
  not__temp18v(__temp1638v__,&__temp1639v__);
  if(__temp1639v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1640v__);
  not__temp18v(__temp1640v__,&__temp1641v__);
  if(__temp1641v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp534v(dirname,&__temp1642v__buf__unsafe_ptr,&__temp1642v__buf__unsafe_size,&__temp1642v__buf__unsafe_align,&__temp1642v__dat__pos,&__temp1642v__dat__length,&__temp1642v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1705v=f__unsafe_ptr;
  *__temp1706v=__temp1642v__buf__unsafe_ptr;
  *__temp1707v=__temp1642v__buf__unsafe_size;
  *__temp1708v=__temp1642v__buf__unsafe_align;
  *__temp1709v=__temp1642v__dat__pos;
  *__temp1710v=__temp1642v__dat__length;
  *__temp1711v=__temp1642v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1712v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1712v=z;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1713v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1713v=z;
}

static inline __attribute__((always_inline)) int print__temp690v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp692v__=0;
  char __temp693v__=0;
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

static inline __attribute__((always_inline)) int main__temp1643v() {
  char* __temp1645v__unsafe_ptr=0;
  char* __temp1647v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  unsigned long long __temp1648v=0;
  char* __temp1649v__unsafe_ptr=0;
  unsigned long long __temp1649v__unsafe_size=0;
  unsigned long long __temp1649v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char __temp1651v=0;
  char* __temp1652v__buf__unsafe_ptr=0;
  unsigned long long __temp1652v__buf__unsafe_size=0;
  unsigned long long __temp1652v__buf__unsafe_align=0;
  unsigned long long __temp1652v__dat__pos=0;
  unsigned long long __temp1652v__dat__length=0;
  char __temp1652v__dat__first=0;
  char* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1717v=0;
  char __temp1718v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1626v(__temp1644v,&__temp1645v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1647v__unsafe_ptr=__temp1645v__unsafe_ptr;
  dir__unsafe_ptr=__temp1647v__unsafe_ptr;
  __temp1648v=128;
  __temp_errcode=alloc__temp487v(__temp1648v,&__temp1649v__unsafe_ptr,&__temp1649v__unsafe_size,&__temp1649v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1649v__unsafe_ptr;
  buf__unsafe_size=__temp1649v__unsafe_size;
  buf__unsafe_align=__temp1649v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1637v(&dir__unsafe_ptr,&__temp1652v__buf__unsafe_ptr,&__temp1652v__buf__unsafe_size,&__temp1652v__buf__unsafe_align,&__temp1652v__dat__pos,&__temp1652v__dat__length,&__temp1652v__dat__first);
  __temp1651v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1652v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1652v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1652v__buf__unsafe_align;
  entry__dat__pos=__temp1652v__dat__pos;
  entry__dat__length=__temp1652v__dat__length;
  entry__dat__first=__temp1652v__dat__first;
  __temp1651v=__temp1651v==0;
  if(!__temp1651v)break;
  __temp_errcode=print__temp690v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1717v=0;
  neq__temp302v(__temp1649v__unsafe_size,__temp1717v,&__temp1718v);
  if(__temp1718v){
  __temp1649v__unsafe_size=0;
  free__temp428v(&__temp1649v__unsafe_ptr);
  }
  if(__temp1645v__unsafe_ptr){
  closedir((DIR*)__temp1645v__unsafe_ptr);
  __temp1645v__unsafe_ptr=0;
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1643v();return 0;}