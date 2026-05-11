#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1674v="./std";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp617v(const char* other, const char** __temp1684v) {
  *__temp1684v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1685v) {
  char z=0;
  z=x!=0;
  *__temp1685v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1686v) {
  char z=0;
  z=value?0:1;
  *__temp1686v=z;
}

static inline __attribute__((always_inline)) int read__temp1656v(const char* _path, char** __temp1687v) {
  const char* __temp1657v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1658v__=0;
  char __temp1659v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp617v(_path,&__temp1657v__);
  path=__temp1657v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1658v__);
  not__temp18v(__temp1658v__,&__temp1659v__);
  if(__temp1659v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1687v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp508v(char** __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v) {
  char* unsafe_ptr=0;
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

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1694v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1694v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1695v) {
  char* allocated=*__temp1695v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1695v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1696v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1697v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1697v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1698v) {
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
  *__temp1698v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long size, char** __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v) {
  char* buffer__unsafe_ptr=*__temp1699v;
  unsigned long long buffer__unsafe_size=*__temp1700v;
  unsigned long long buffer__unsafe_align=*__temp1701v;
  unsigned long long __temp436v=0;
  char __temp437v__=0;
  char __temp440v__=0;
  unsigned long long __temp441v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  char __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  char* __temp449v__=0;
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
  zero__temp429v(buffer__unsafe_ptr,__temp443v,__temp444v__);
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
  __temp_errcode=alloc__temp425v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp450v,bytes);
  *__temp1699v=buffer__unsafe_ptr;
  *__temp1700v=buffer__unsafe_size;
  *__temp1701v=buffer__unsafe_align;
  *__temp1702v=buffer__unsafe_ptr;
  *__temp1703v=buffer__unsafe_size;
  *__temp1704v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp507v(unsigned long long size, char** __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v) {
  char* __temp510v__unsafe_ptr=0;
  unsigned long long __temp510v__unsafe_size=0;
  unsigned long long __temp510v__unsafe_align=0;
  char* __temp511v__unsafe_ptr=0;
  unsigned long long __temp511v__unsafe_size=0;
  unsigned long long __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  unsigned long long __temp512v__unsafe_size=0;
  unsigned long long __temp512v__unsafe_align=0;
  unsigned long long __temp1707v=0;
  char __temp1708v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp508v(&__temp510v__unsafe_ptr,&__temp510v__unsafe_size,&__temp510v__unsafe_align);
  __temp511v__unsafe_ptr=__temp510v__unsafe_ptr;
  __temp511v__unsafe_size=__temp510v__unsafe_size;
  __temp511v__unsafe_align=__temp510v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp511v__unsafe_ptr,&__temp511v__unsafe_size,&__temp511v__unsafe_align,size,&__temp512v__unsafe_ptr,&__temp512v__unsafe_size,&__temp512v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1709v=__temp512v__unsafe_ptr;
  *__temp1710v=__temp512v__unsafe_size;
  *__temp1711v=__temp512v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1712v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1712v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1713v) {
  *__temp1713v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1714v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1714v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1715v) {
  char __temp503v__=0;
  unsigned long long __temp504v__=0;
  char* __temp505v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp503v__);
  if(__temp503v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp504v__);
  add__temp430v(buffer__unsafe_ptr,__temp504v__,&__temp505v__);
  *__temp1715v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp544v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, unsigned long long* __temp1719v, unsigned long long* __temp1720v, char* __temp1721v) {
  *__temp1716v=buf__unsafe_ptr;
  *__temp1717v=buf__unsafe_size;
  *__temp1718v=buf__unsafe_align;
  *__temp1719v=dat__pos;
  *__temp1720v=dat__length;
  *__temp1721v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp554v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1722v, unsigned long long* __temp1723v, unsigned long long* __temp1724v, unsigned long long* __temp1725v, unsigned long long* __temp1726v, char* __temp1727v) {
  unsigned long long __temp555v=0;
  char __temp556v__=0;
  char* __temp557v__=0;
  char __temp558v__value=0;
  char first=0;
  char* __temp559v__buf__unsafe_ptr=0;
  unsigned long long __temp559v__buf__unsafe_size=0;
  unsigned long long __temp559v__buf__unsafe_align=0;
  unsigned long long __temp559v__dat__pos=0;
  unsigned long long __temp559v__dat__length=0;
  char __temp559v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp555v=0;
  neq__temp302v(length,__temp555v,&__temp556v__);
  if(__temp556v__){
  __temp_errcode=get__temp502v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp557v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp557v__){
  goto __temp_failure;
  }
  memcpy(&__temp558v__value,__temp557v__,1);
  first=__temp558v__value;
  }
  str__temp544v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp559v__buf__unsafe_ptr,&__temp559v__buf__unsafe_size,&__temp559v__buf__unsafe_align,&__temp559v__dat__pos,&__temp559v__dat__length,&__temp559v__dat__first);
  *__temp1722v=__temp559v__buf__unsafe_ptr;
  *__temp1723v=__temp559v__buf__unsafe_size;
  *__temp1724v=__temp559v__buf__unsafe_align;
  *__temp1725v=__temp559v__dat__pos;
  *__temp1726v=__temp559v__dat__length;
  *__temp1727v=__temp559v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp560v(const char* c, char** __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, unsigned long long* __temp1732v, unsigned long long* __temp1733v, char* __temp1734v) {
  char* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__unsafe_size=0;
  unsigned long long __temp561v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp562v=0;
  char* __temp563v__buf__unsafe_ptr=0;
  unsigned long long __temp563v__buf__unsafe_size=0;
  unsigned long long __temp563v__buf__unsafe_align=0;
  unsigned long long __temp563v__dat__pos=0;
  unsigned long long __temp563v__dat__length=0;
  char __temp563v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp508v(&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_align);
  buf__unsafe_ptr=__temp561v__unsafe_ptr;
  buf__unsafe_size=__temp561v__unsafe_size;
  buf__unsafe_align=__temp561v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp562v=0;
  __temp_errcode=str__temp554v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp562v,length,&__temp563v__buf__unsafe_ptr,&__temp563v__buf__unsafe_size,&__temp563v__buf__unsafe_align,&__temp563v__dat__pos,&__temp563v__dat__length,&__temp563v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1729v=__temp563v__buf__unsafe_ptr;
  *__temp1730v=__temp563v__buf__unsafe_size;
  *__temp1731v=__temp563v__buf__unsafe_align;
  *__temp1732v=__temp563v__dat__pos;
  *__temp1733v=__temp563v__dat__length;
  *__temp1734v=__temp563v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1667v(char** __temp1735v, char** __temp1736v, unsigned long long* __temp1737v, unsigned long long* __temp1738v, unsigned long long* __temp1739v, unsigned long long* __temp1740v, char* __temp1741v) {
  char* f__unsafe_ptr=*__temp1735v;
  char __temp1668v__=0;
  char __temp1669v__=0;
  char* de=0;
  char __temp1670v__=0;
  char __temp1671v__=0;
  const char* dirname=0;
  char* __temp1672v__buf__unsafe_ptr=0;
  unsigned long long __temp1672v__buf__unsafe_size=0;
  unsigned long long __temp1672v__buf__unsafe_align=0;
  unsigned long long __temp1672v__dat__pos=0;
  unsigned long long __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1668v__);
  not__temp18v(__temp1668v__,&__temp1669v__);
  if(__temp1669v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1670v__);
  not__temp18v(__temp1670v__,&__temp1671v__);
  if(__temp1671v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp560v(dirname,&__temp1672v__buf__unsafe_ptr,&__temp1672v__buf__unsafe_size,&__temp1672v__buf__unsafe_align,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1735v=f__unsafe_ptr;
  *__temp1736v=__temp1672v__buf__unsafe_ptr;
  *__temp1737v=__temp1672v__buf__unsafe_size;
  *__temp1738v=__temp1672v__buf__unsafe_align;
  *__temp1739v=__temp1672v__dat__pos;
  *__temp1740v=__temp1672v__dat__length;
  *__temp1741v=__temp1672v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1742v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1743v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1743v=z;
}

static inline __attribute__((always_inline)) int print__temp716v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp718v__=0;
  char __temp719v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp350v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp718v__);
  gt__temp206v(__temp718v__,s__buf__unsafe_size,&__temp719v__);
  if(__temp719v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1673v() {
  char* __temp1675v__unsafe_ptr=0;
  char* __temp1677v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  unsigned long long __temp1678v=0;
  char* __temp1679v__unsafe_ptr=0;
  unsigned long long __temp1679v__unsafe_size=0;
  unsigned long long __temp1679v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char __temp1681v=0;
  char* __temp1682v__buf__unsafe_ptr=0;
  unsigned long long __temp1682v__buf__unsafe_size=0;
  unsigned long long __temp1682v__buf__unsafe_align=0;
  unsigned long long __temp1682v__dat__pos=0;
  unsigned long long __temp1682v__dat__length=0;
  char __temp1682v__dat__first=0;
  char* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1747v=0;
  char __temp1748v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1656v(__temp1674v,&__temp1675v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1677v__unsafe_ptr=__temp1675v__unsafe_ptr;
  dir__unsafe_ptr=__temp1677v__unsafe_ptr;
  __temp1678v=128;
  __temp_errcode=alloc__temp507v(__temp1678v,&__temp1679v__unsafe_ptr,&__temp1679v__unsafe_size,&__temp1679v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1679v__unsafe_ptr;
  buf__unsafe_size=__temp1679v__unsafe_size;
  buf__unsafe_align=__temp1679v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1667v(&dir__unsafe_ptr,&__temp1682v__buf__unsafe_ptr,&__temp1682v__buf__unsafe_size,&__temp1682v__buf__unsafe_align,&__temp1682v__dat__pos,&__temp1682v__dat__length,&__temp1682v__dat__first);
  __temp1681v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1682v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1682v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1682v__buf__unsafe_align;
  entry__dat__pos=__temp1682v__dat__pos;
  entry__dat__length=__temp1682v__dat__length;
  entry__dat__first=__temp1682v__dat__first;
  __temp1681v=__temp1681v==0;
  if(!__temp1681v){
  break;
  }
  __temp_errcode=print__temp716v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1673v();return 0;}