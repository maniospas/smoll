#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1695v="./smoll ";
const char* const __temp1690v="./tests/passing/";
const char* const __temp601v="";
const char* const __temp1715v=" ";
const char* const __temp352v="\n";
const char* const __temp1706v=".s";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp508v(char** __temp1722v, unsigned long long* __temp1723v, unsigned long long* __temp1724v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1722v=unsafe_ptr;
  *__temp1723v=unsafe_size;
  *__temp1724v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1725v) {
  int value=0;
  *__temp1725v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1726v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1726v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1727v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1727v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1728v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1728v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1729v) {
  char* allocated=*__temp1729v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1729v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1730v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1730v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1731v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1731v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1732v) {
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1732v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1733v, unsigned long long* __temp1734v, unsigned long long* __temp1735v, unsigned long long size, char** __temp1736v, unsigned long long* __temp1737v, unsigned long long* __temp1738v) {
  char* buffer__unsafe_ptr=*__temp1733v;
  unsigned long long buffer__unsafe_size=*__temp1734v;
  unsigned long long buffer__unsafe_align=*__temp1735v;
  int __temp435v=0;
  unsigned long long __temp436v=0;
  char __temp437v__=0;
  unsigned long long __temp438v=0;
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
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1733v=buffer__unsafe_ptr;
  *__temp1734v=buffer__unsafe_size;
  *__temp1735v=buffer__unsafe_align;
  *__temp1736v=buffer__unsafe_ptr;
  *__temp1737v=buffer__unsafe_size;
  *__temp1738v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp507v(unsigned long long size, char** __temp1739v, unsigned long long* __temp1740v, unsigned long long* __temp1741v) {
  char* __temp510v__unsafe_ptr=0;
  unsigned long long __temp510v__unsafe_size=0;
  unsigned long long __temp510v__unsafe_align=0;
  char* __temp511v__unsafe_ptr=0;
  unsigned long long __temp511v__unsafe_size=0;
  unsigned long long __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  unsigned long long __temp512v__unsafe_size=0;
  unsigned long long __temp512v__unsafe_align=0;
  unsigned long long __temp513v____temp436v=0;
  char __temp513v____temp437v__=0;
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1739v=__temp512v__unsafe_ptr;
  *__temp1740v=__temp512v__unsafe_size;
  *__temp1741v=__temp512v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp618v(char** __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, char** __temp1745v, unsigned long long* __temp1746v, unsigned long long* __temp1747v, unsigned long long* __temp1748v) {
  char* buf__unsafe_ptr=*__temp1742v;
  unsigned long long buf__unsafe_size=*__temp1743v;
  unsigned long long buf__unsafe_align=*__temp1744v;
  unsigned long long __temp619v=0;
  unsigned long long __temp620v=0;
  unsigned long long pos=0;
  __temp619v=0;
  __temp620v=__temp619v;
  pos=__temp620v;
  goto __temp_return;
  __temp_return:
  *__temp1742v=buf__unsafe_ptr;
  *__temp1743v=buf__unsafe_size;
  *__temp1744v=buf__unsafe_align;
  *__temp1745v=buf__unsafe_ptr;
  *__temp1746v=buf__unsafe_size;
  *__temp1747v=buf__unsafe_align;
  *__temp1748v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1749v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1749v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1750v) {
  *__temp1750v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1751v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  goto __temp_return;
  __temp_return:
  *__temp1751v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1752v) {
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1752v=__temp505v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp544v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1753v, unsigned long long* __temp1754v, unsigned long long* __temp1755v, unsigned long long* __temp1756v, unsigned long long* __temp1757v, char* __temp1758v) {
  goto __temp_return;
  __temp_return:
  *__temp1753v=buf__unsafe_ptr;
  *__temp1754v=buf__unsafe_size;
  *__temp1755v=buf__unsafe_align;
  *__temp1756v=dat__pos;
  *__temp1757v=dat__length;
  *__temp1758v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp554v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1759v, unsigned long long* __temp1760v, unsigned long long* __temp1761v, unsigned long long* __temp1762v, unsigned long long* __temp1763v, char* __temp1764v) {
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1759v=__temp559v__buf__unsafe_ptr;
  *__temp1760v=__temp559v__buf__unsafe_size;
  *__temp1761v=__temp559v__buf__unsafe_align;
  *__temp1762v=__temp559v__dat__pos;
  *__temp1763v=__temp559v__dat__length;
  *__temp1764v=__temp559v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp560v(const char* c, char** __temp1765v, unsigned long long* __temp1766v, unsigned long long* __temp1767v, unsigned long long* __temp1768v, unsigned long long* __temp1769v, char* __temp1770v) {
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1765v=__temp563v__buf__unsafe_ptr;
  *__temp1766v=__temp563v__buf__unsafe_size;
  *__temp1767v=__temp563v__buf__unsafe_align;
  *__temp1768v=__temp563v__dat__pos;
  *__temp1769v=__temp563v__dat__length;
  *__temp1770v=__temp563v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp564v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1771v) {
  goto __temp_return;
  __temp_return:
  *__temp1771v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1772v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1772v=z;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1773v) {
  goto __temp_return;
  __temp_return:
  *__temp1773v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1774v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1774v=z;
}

int copy__temp685v(char** __temp1775v, unsigned long long* __temp1776v, unsigned long long* __temp1777v, unsigned long long* __temp1778v, const char* _other, char** __temp1779v, unsigned long long* __temp1780v, unsigned long long* __temp1781v, unsigned long long* __temp1782v, unsigned long long* __temp1783v, char* __temp1784v) {
  char* buf__unsafe_ptr=*__temp1775v;
  unsigned long long buf__unsafe_size=*__temp1776v;
  unsigned long long buf__unsafe_align=*__temp1777v;
  unsigned long long pos=*__temp1778v;
  char* __temp686v__buf__unsafe_ptr=0;
  unsigned long long __temp686v__buf__unsafe_size=0;
  unsigned long long __temp686v__buf__unsafe_align=0;
  unsigned long long __temp686v__dat__pos=0;
  unsigned long long __temp686v__dat__length=0;
  char __temp686v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp687v__=0;
  unsigned long long __temp688v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp689v__=0;
  char __temp690v__=0;
  unsigned long long __temp691v=0;
  unsigned long long __temp692v__=0;
  unsigned long long prev_pos=0;
  char* __temp693v__buf__unsafe_ptr=0;
  unsigned long long __temp693v__buf__unsafe_size=0;
  unsigned long long __temp693v__buf__unsafe_align=0;
  unsigned long long __temp693v__dat__pos=0;
  unsigned long long __temp693v__dat__length=0;
  char __temp693v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp560v(_other,&__temp686v__buf__unsafe_ptr,&__temp686v__buf__unsafe_size,&__temp686v__buf__unsafe_align,&__temp686v__dat__pos,&__temp686v__dat__length,&__temp686v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp686v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp686v__buf__unsafe_size;
  other__buf__unsafe_align=__temp686v__buf__unsafe_align;
  other__dat__pos=__temp686v__dat__pos;
  other__dat__length=__temp686v__dat__length;
  other__dat__first=__temp686v__dat__first;
  len__temp564v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp687v__);
  add__temp110v(pos,__temp687v__,&__temp688v__);
  next_pos=__temp688v__;
  len__temp506v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp689v__);
  gt__temp206v(next_pos,__temp689v__,&__temp690v__);
  if(__temp690v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp691v=0;
  add__temp110v(pos,__temp691v,&__temp692v__);
  prev_pos=__temp692v__;
  pos=next_pos;
  str__temp544v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp693v__buf__unsafe_ptr,&__temp693v__buf__unsafe_size,&__temp693v__buf__unsafe_align,&__temp693v__dat__pos,&__temp693v__dat__length,&__temp693v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1775v=buf__unsafe_ptr;
  *__temp1776v=buf__unsafe_size;
  *__temp1777v=buf__unsafe_align;
  *__temp1778v=pos;
  *__temp1779v=__temp693v__buf__unsafe_ptr;
  *__temp1780v=__temp693v__buf__unsafe_size;
  *__temp1781v=__temp693v__buf__unsafe_align;
  *__temp1782v=__temp693v__dat__pos;
  *__temp1783v=__temp693v__dat__length;
  *__temp1784v=__temp693v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp617v(const char* other, const char** __temp1785v) {
  goto __temp_return;
  __temp_return:
  *__temp1785v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1786v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1786v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1787v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1787v=z;
}

static inline __attribute__((always_inline)) int read__temp1656v(const char* _path, char** __temp1788v) {
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1788v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1789v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1789v=__temp412v__;
}

static inline __attribute__((always_inline)) int entry__temp1667v(char** __temp1790v, char** __temp1791v, unsigned long long* __temp1792v, unsigned long long* __temp1793v, unsigned long long* __temp1794v, unsigned long long* __temp1795v, char* __temp1796v) {
  char* f__unsafe_ptr=*__temp1790v;
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1790v=f__unsafe_ptr;
  *__temp1791v=__temp1672v__buf__unsafe_ptr;
  *__temp1792v=__temp1672v__buf__unsafe_size;
  *__temp1793v=__temp1672v__buf__unsafe_align;
  *__temp1794v=__temp1672v__dat__pos;
  *__temp1795v=__temp1672v__dat__length;
  *__temp1796v=__temp1672v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp553v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1797v, unsigned long long* __temp1798v, unsigned long long* __temp1799v, unsigned long long* __temp1800v, unsigned long long* __temp1801v, char* __temp1802v) {
  goto __temp_return;
  __temp_return:
  *__temp1797v=other__buf__unsafe_ptr;
  *__temp1798v=other__buf__unsafe_size;
  *__temp1799v=other__buf__unsafe_align;
  *__temp1800v=other__dat__pos;
  *__temp1801v=other__dat__length;
  *__temp1802v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1803v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1803v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1804v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1804v=z;
  
  return __temp_errcode;
}

int slice__temp798v(char* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, char** __temp1805v, unsigned long long* __temp1806v, unsigned long long* __temp1807v, unsigned long long* __temp1808v, unsigned long long* __temp1809v, char* __temp1810v) {
  char* __temp799v__buf__unsafe_ptr=0;
  unsigned long long __temp799v__buf__unsafe_size=0;
  unsigned long long __temp799v__buf__unsafe_align=0;
  unsigned long long __temp799v__dat__pos=0;
  unsigned long long __temp799v__dat__length=0;
  char __temp799v__dat__first=0;
  char* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  char __temp800v__=0;
  char* __temp801v__buf__unsafe_ptr=0;
  unsigned long long __temp801v__buf__unsafe_size=0;
  unsigned long long __temp801v__buf__unsafe_align=0;
  unsigned long long __temp801v__dat__pos=0;
  unsigned long long __temp801v__dat__length=0;
  char __temp801v__dat__first=0;
  char __temp802v__=0;
  char __temp803v__=0;
  char __temp804v=0;
  unsigned long long __temp805v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp806v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp807v=0;
  char __temp808v__=0;
  char new_first=0;
  char* __temp809v__=0;
  char __temp810v__value=0;
  char* __temp811v__buf__unsafe_ptr=0;
  unsigned long long __temp811v__buf__unsafe_size=0;
  unsigned long long __temp811v__buf__unsafe_align=0;
  unsigned long long __temp811v__dat__pos=0;
  unsigned long long __temp811v__dat__length=0;
  char __temp811v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp553v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp799v__buf__unsafe_ptr,&__temp799v__buf__unsafe_size,&__temp799v__buf__unsafe_align,&__temp799v__dat__pos,&__temp799v__dat__length,&__temp799v__dat__first);
  s__buf__unsafe_ptr=__temp799v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp799v__buf__unsafe_size;
  s__buf__unsafe_align=__temp799v__buf__unsafe_align;
  s__dat__pos=__temp799v__dat__pos;
  s__dat__length=__temp799v__dat__length;
  s__dat__first=__temp799v__dat__first;
  eq__temp278v(from,to,&__temp800v__);
  if(__temp800v__){
  __temp_errcode=str__temp560v(__temp601v,&__temp801v__buf__unsafe_ptr,&__temp801v__buf__unsafe_size,&__temp801v__buf__unsafe_align,&__temp801v__dat__pos,&__temp801v__dat__length,&__temp801v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp182v(from,to,&__temp802v__);
  if(!__temp802v__){
  gt__temp206v(to,s__dat__length,&__temp803v__);
  __temp804v=__temp803v__;
  }
  if(__temp804v){
  __temp_errcode=15;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp330v(to,from,&__temp805v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp805v__;
  add__temp110v(s__dat__pos,from,&__temp806v__);
  new_pos=__temp806v__;
  __temp807v=0;
  neq__temp302v(from,__temp807v,&__temp808v__);
  if(__temp808v__){
  __temp_errcode=get__temp502v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,&__temp809v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp809v__){
  goto __temp_failure;
  }
  memcpy(&__temp810v__value,__temp809v__,1);
  new_first=__temp810v__value;
  }
  else{
  new_first=s__dat__first;
  }
  str__temp544v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,new_length,new_first,&__temp811v__buf__unsafe_ptr,&__temp811v__buf__unsafe_size,&__temp811v__buf__unsafe_align,&__temp811v__dat__pos,&__temp811v__dat__length,&__temp811v__dat__first);
  __temp801v__buf__unsafe_ptr=__temp811v__buf__unsafe_ptr;
  __temp801v__buf__unsafe_size=__temp811v__buf__unsafe_size;
  __temp801v__buf__unsafe_align=__temp811v__buf__unsafe_align;
  __temp801v__dat__pos=__temp811v__dat__pos;
  __temp801v__dat__length=__temp811v__dat__length;
  __temp801v__dat__first=__temp811v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1805v=__temp801v__buf__unsafe_ptr;
  *__temp1806v=__temp801v__buf__unsafe_size;
  *__temp1807v=__temp801v__buf__unsafe_align;
  *__temp1808v=__temp801v__dat__pos;
  *__temp1809v=__temp801v__dat__length;
  *__temp1810v=__temp801v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp568v(char x, char y, char* __temp1811v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1811v=z;
}

static inline __attribute__((always_inline)) void eq__temp763v(char* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, char* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, char* __temp1812v) {
  unsigned long long __temp764v__=0;
  unsigned long long n=0;
  unsigned long long __temp765v__=0;
  char __temp766v__=0;
  char __temp767v=0;
  char __temp768v__=0;
  char __temp769v=0;
  char z=0;
  len__temp564v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__dat__pos,x__dat__length,x__dat__first,&__temp764v__);
  n=__temp764v__;
  len__temp564v(y__buf__unsafe_ptr,y__buf__unsafe_size,y__buf__unsafe_align,y__dat__pos,y__dat__length,y__dat__first,&__temp765v__);
  neq__temp302v(n,__temp765v__,&__temp766v__);
  if(__temp766v__){
  __temp767v=0;
  goto __temp_return;
  }
  neq__temp568v(x__dat__first,y__dat__first,&__temp768v__);
  if(__temp768v__){
  __temp769v=0;
  __temp767v=__temp769v;
  goto __temp_return;
  }
  z=!memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos,((char*)y__buf__unsafe_ptr)+y__dat__pos,n);
  __temp767v=z;
  goto __temp_return;
  __temp_return:
  *__temp1812v=__temp767v;
}

static inline __attribute__((always_inline)) int ends_with__temp876v(char* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1813v) {
  char* __temp877v__buf__unsafe_ptr=0;
  unsigned long long __temp877v__buf__unsafe_size=0;
  unsigned long long __temp877v__buf__unsafe_align=0;
  unsigned long long __temp877v__dat__pos=0;
  unsigned long long __temp877v__dat__length=0;
  char __temp877v__dat__first=0;
  char* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp878v__buf__unsafe_ptr=0;
  unsigned long long __temp878v__buf__unsafe_size=0;
  unsigned long long __temp878v__buf__unsafe_align=0;
  unsigned long long __temp878v__dat__pos=0;
  unsigned long long __temp878v__dat__length=0;
  char __temp878v__dat__first=0;
  char* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  char __temp879v__=0;
  char __temp880v=0;
  unsigned long long __temp881v__=0;
  unsigned long long n=0;
  unsigned long long __temp882v__=0;
  unsigned long long __temp883v__=0;
  char* __temp884v__buf__unsafe_ptr=0;
  unsigned long long __temp884v__buf__unsafe_size=0;
  unsigned long long __temp884v__buf__unsafe_align=0;
  unsigned long long __temp884v__dat__pos=0;
  unsigned long long __temp884v__dat__length=0;
  char __temp884v__dat__first=0;
  char* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  char __temp885v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp553v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp877v__buf__unsafe_ptr,&__temp877v__buf__unsafe_size,&__temp877v__buf__unsafe_align,&__temp877v__dat__pos,&__temp877v__dat__length,&__temp877v__dat__first);
  stack__buf__unsafe_ptr=__temp877v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp877v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp877v__buf__unsafe_align;
  stack__dat__pos=__temp877v__dat__pos;
  stack__dat__length=__temp877v__dat__length;
  stack__dat__first=__temp877v__dat__first;
  __temp_errcode=str__temp560v(_needle,&__temp878v__buf__unsafe_ptr,&__temp878v__buf__unsafe_size,&__temp878v__buf__unsafe_align,&__temp878v__dat__pos,&__temp878v__dat__length,&__temp878v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp878v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp878v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp878v__buf__unsafe_align;
  needle__dat__pos=__temp878v__dat__pos;
  needle__dat__length=__temp878v__dat__length;
  needle__dat__first=__temp878v__dat__first;
  lt__temp182v(stack__dat__length,needle__dat__length,&__temp879v__);
  if(__temp879v__){
  __temp880v=0;
  goto __temp_return;
  }
  len__temp564v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp881v__);
  n=__temp881v__;
  len__temp564v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp882v__);
  __temp_errcode=sub__temp330v(n,__temp882v__,&__temp883v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp798v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp883v__,n,&__temp884v__buf__unsafe_ptr,&__temp884v__buf__unsafe_size,&__temp884v__buf__unsafe_align,&__temp884v__dat__pos,&__temp884v__dat__length,&__temp884v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp884v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp884v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp884v__buf__unsafe_align;
  ret__dat__pos=__temp884v__dat__pos;
  ret__dat__length=__temp884v__dat__length;
  ret__dat__first=__temp884v__dat__first;
  eq__temp763v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp885v__);
  __temp880v=__temp885v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1813v=__temp880v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1814v, unsigned long long* __temp1815v, unsigned long long* __temp1816v, unsigned long long* __temp1817v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1818v, unsigned long long* __temp1819v, unsigned long long* __temp1820v, unsigned long long* __temp1821v, unsigned long long* __temp1822v, char* __temp1823v) {
  char* buf__unsafe_ptr=*__temp1814v;
  unsigned long long buf__unsafe_size=*__temp1815v;
  unsigned long long buf__unsafe_align=*__temp1816v;
  unsigned long long pos=*__temp1817v;
  char* __temp677v__buf__unsafe_ptr=0;
  unsigned long long __temp677v__buf__unsafe_size=0;
  unsigned long long __temp677v__buf__unsafe_align=0;
  unsigned long long __temp677v__dat__pos=0;
  unsigned long long __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp678v__=0;
  unsigned long long __temp679v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp680v__=0;
  char __temp681v__=0;
  unsigned long long __temp682v=0;
  unsigned long long __temp683v__=0;
  unsigned long long prev_pos=0;
  char* __temp684v__buf__unsafe_ptr=0;
  unsigned long long __temp684v__buf__unsafe_size=0;
  unsigned long long __temp684v__buf__unsafe_align=0;
  unsigned long long __temp684v__dat__pos=0;
  unsigned long long __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp553v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp677v__buf__unsafe_ptr,&__temp677v__buf__unsafe_size,&__temp677v__buf__unsafe_align,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  other__buf__unsafe_ptr=__temp677v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp677v__buf__unsafe_size;
  other__buf__unsafe_align=__temp677v__buf__unsafe_align;
  other__dat__pos=__temp677v__dat__pos;
  other__dat__length=__temp677v__dat__length;
  other__dat__first=__temp677v__dat__first;
  len__temp564v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp678v__);
  add__temp110v(pos,__temp678v__,&__temp679v__);
  next_pos=__temp679v__;
  len__temp506v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp680v__);
  gt__temp206v(next_pos,__temp680v__,&__temp681v__);
  if(__temp681v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp682v=0;
  add__temp110v(pos,__temp682v,&__temp683v__);
  prev_pos=__temp683v__;
  pos=next_pos;
  str__temp544v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp684v__buf__unsafe_ptr,&__temp684v__buf__unsafe_size,&__temp684v__buf__unsafe_align,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1814v=buf__unsafe_ptr;
  *__temp1815v=buf__unsafe_size;
  *__temp1816v=buf__unsafe_align;
  *__temp1817v=pos;
  *__temp1818v=__temp684v__buf__unsafe_ptr;
  *__temp1819v=__temp684v__buf__unsafe_size;
  *__temp1820v=__temp684v__buf__unsafe_align;
  *__temp1821v=__temp684v__dat__pos;
  *__temp1822v=__temp684v__dat__length;
  *__temp1823v=__temp684v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp667v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char** __temp1824v, unsigned long long* __temp1825v, unsigned long long* __temp1826v, unsigned long long* __temp1827v, unsigned long long* __temp1828v, char* __temp1829v) {
  int __temp668v=0;
  unsigned long long __temp669v=0;
  unsigned long long pos=0;
  char __temp670v__=0;
  unsigned long long __temp671v__=0;
  char __temp672v__=0;
  unsigned long long __temp673v__=0;
  unsigned long long __temp674v__=0;
  char* __temp675v__buf__unsafe_ptr=0;
  unsigned long long __temp675v__buf__unsafe_size=0;
  unsigned long long __temp675v__buf__unsafe_align=0;
  unsigned long long __temp675v__dat__pos=0;
  unsigned long long __temp675v__dat__length=0;
  char __temp675v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp669v=0;
  pos=__temp669v;
  eq__temp278v(pos,s__dat__pos,&__temp670v__);
  if(__temp670v__){
  goto __temp_return;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp671v__);
  gt__temp206v(pos,__temp671v__,&__temp672v__);
  if(__temp672v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  add__temp110v(s__dat__pos,s__dat__length,&__temp673v__);
  __temp_errcode=sub__temp330v(__temp673v__,pos,&__temp674v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp554v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,pos,__temp674v__,&__temp675v__buf__unsafe_ptr,&__temp675v__buf__unsafe_size,&__temp675v__buf__unsafe_align,&__temp675v__dat__pos,&__temp675v__dat__length,&__temp675v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp675v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp675v__buf__unsafe_size;
  s__buf__unsafe_align=__temp675v__buf__unsafe_align;
  s__dat__pos=__temp675v__dat__pos;
  s__dat__length=__temp675v__dat__length;
  s__dat__first=__temp675v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1824v=s__buf__unsafe_ptr;
  *__temp1825v=s__buf__unsafe_size;
  *__temp1826v=s__buf__unsafe_align;
  *__temp1827v=s__dat__pos;
  *__temp1828v=s__dat__length;
  *__temp1829v=s__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp566v(const char* s, char* __temp1830v) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __temp_return;
  __temp_return:
  *__temp1830v=c;
}

static inline __attribute__((always_inline)) void true__temp8v(int* __temp1831v) {
  int value=0;
  *__temp1831v=value;
}

static inline __attribute__((always_inline)) void not__temp29v(int __temp_anon0, int* __temp1832v) {
  int __temp30v__=0;
  true__temp8v(&__temp30v__);
  goto __temp_return;
  __temp_return:
  *__temp1832v=__temp30v__;
}

static inline __attribute__((always_inline)) int rextend__temp630v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, char** __temp1833v, unsigned long long* __temp1834v, unsigned long long* __temp1835v, unsigned long long* __temp1836v, unsigned long long* __temp1837v, char* __temp1838v) {
  int __temp631v=0;
  unsigned long long __temp632v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp633v__=0;
  unsigned long long __temp634v__=0;
  char __temp635v__=0;
  int __temp636v=0;
  int __temp637v__=0;
  char* __temp638v__buf__unsafe_ptr=0;
  unsigned long long __temp638v__buf__unsafe_size=0;
  unsigned long long __temp638v__buf__unsafe_align=0;
  unsigned long long __temp638v__dat__pos=0;
  unsigned long long __temp638v__dat__length=0;
  char __temp638v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(s__dat__length,by,&__temp632v__);
  new_length=__temp632v__;
  add__temp110v(new_length,s__dat__pos,&__temp633v__);
  len__temp506v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp634v__);
  gt__temp206v(__temp633v__,__temp634v__,&__temp635v__);
  if(__temp635v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp636v,&__temp637v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp544v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp638v__buf__unsafe_ptr,&__temp638v__buf__unsafe_size,&__temp638v__buf__unsafe_align,&__temp638v__dat__pos,&__temp638v__dat__length,&__temp638v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1833v=__temp638v__buf__unsafe_ptr;
  *__temp1834v=__temp638v__buf__unsafe_size;
  *__temp1835v=__temp638v__buf__unsafe_align;
  *__temp1836v=__temp638v__dat__pos;
  *__temp1837v=__temp638v__dat__length;
  *__temp1838v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp720v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp721v=0;
  const char* endl=0;
  unsigned long long __temp722v__=0;
  char __temp723v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp352v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp722v__);
  gt__temp206v(__temp722v__,s__buf__unsafe_size,&__temp723v__);
  if(__temp723v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp649v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, char** __temp1839v, unsigned long long* __temp1840v, unsigned long long* __temp1841v, unsigned long long* __temp1842v, unsigned long long* __temp1843v, char* __temp1844v) {
  int __temp650v=0;
  unsigned long long __temp651v=0;
  unsigned long long by=0;
  unsigned long long __temp652v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp653v__=0;
  unsigned long long __temp654v__=0;
  char __temp655v__=0;
  int __temp656v=0;
  int __temp657v__=0;
  char* __temp658v__buf__unsafe_ptr=0;
  unsigned long long __temp658v__buf__unsafe_size=0;
  unsigned long long __temp658v__buf__unsafe_align=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp651v=1;
  by=__temp651v;
  add__temp110v(s__dat__length,by,&__temp652v__);
  new_length=__temp652v__;
  add__temp110v(new_length,s__dat__pos,&__temp653v__);
  len__temp506v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp654v__);
  gt__temp206v(__temp653v__,__temp654v__,&__temp655v__);
  if(__temp655v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  not__temp29v(__temp656v,&__temp657v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp544v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp658v__buf__unsafe_ptr,&__temp658v__buf__unsafe_size,&__temp658v__buf__unsafe_align,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1839v=__temp658v__buf__unsafe_ptr;
  *__temp1840v=__temp658v__buf__unsafe_size;
  *__temp1841v=__temp658v__buf__unsafe_align;
  *__temp1842v=__temp658v__dat__pos;
  *__temp1843v=__temp658v__dat__length;
  *__temp1844v=__temp658v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1845v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1845v=z;
}

static inline __attribute__((always_inline)) void eq__temp567v(char x, char y, char* __temp1846v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1846v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp583v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1847v, unsigned long long* __temp1848v, unsigned long long* __temp1849v, unsigned long long* __temp1850v, unsigned long long* __temp1851v, char* __temp1852v) {
  unsigned long long __temp584v=0;
  unsigned long long __temp585v__=0;
  unsigned long long __temp586v__=0;
  char* __temp587v__unsafe_ptr=0;
  unsigned long long __temp587v__unsafe_size=0;
  unsigned long long __temp587v__unsafe_align=0;
  unsigned long long __temp588v____temp513v____temp436v=0;
  char __temp588v____temp513v____temp437v__=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char* endpos=0;
  unsigned long long __temp589v=0;
  char* __temp590v__buf__unsafe_ptr=0;
  unsigned long long __temp590v__buf__unsafe_size=0;
  unsigned long long __temp590v__buf__unsafe_align=0;
  unsigned long long __temp590v__dat__pos=0;
  unsigned long long __temp590v__dat__length=0;
  char __temp590v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp584v=1;
  len__temp564v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp585v__);
  add__temp110v(__temp584v,__temp585v__,&__temp586v__);
  __temp_errcode=alloc__temp507v(__temp586v__,&__temp587v__unsafe_ptr,&__temp587v__unsafe_size,&__temp587v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp587v__unsafe_ptr;
  buf__unsafe_size=__temp587v__unsafe_size;
  buf__unsafe_align=__temp587v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp589v=0;
  str__temp544v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp589v,other__dat__length,other__dat__first,&__temp590v__buf__unsafe_ptr,&__temp590v__buf__unsafe_size,&__temp590v__buf__unsafe_align,&__temp590v__dat__pos,&__temp590v__dat__length,&__temp590v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1847v=__temp590v__buf__unsafe_ptr;
  *__temp1848v=__temp590v__buf__unsafe_size;
  *__temp1849v=__temp590v__buf__unsafe_align;
  *__temp1850v=__temp590v__dat__pos;
  *__temp1851v=__temp590v__dat__length;
  *__temp1852v=__temp590v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp542v(const char* c, char* __temp1853v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1853v=z;
}

int unsafe_temporary_cstr__temp591v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1854v) {
  unsigned long long __temp592v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp593v=0;
  char __temp594v__=0;
  unsigned long long __temp595v__=0;
  char __temp596v__=0;
  unsigned long long __temp597v=0;
  unsigned long long __temp598v__=0;
  char* __temp599v__=0;
  char __temp600v__value=0;
  char __temp602v__=0;
  char __temp603v__=0;
  char __temp604v=0;
  char __temp605v=0;
  unsigned long long __temp606v__=0;
  char __temp607v__=0;
  char* __temp608v__=0;
  char __temp609v__value=0;
  char __temp610v__=0;
  char __temp611v__=0;
  char __temp612v=0;
  char* __temp613v__buf__unsafe_ptr=0;
  unsigned long long __temp613v__buf__unsafe_size=0;
  unsigned long long __temp613v__buf__unsafe_align=0;
  unsigned long long __temp613v__dat__pos=0;
  unsigned long long __temp613v__dat__length=0;
  char __temp613v__dat__first=0;
  unsigned long long __temp614v____temp588v____temp513v____temp436v=0;
  char __temp614v____temp588v____temp513v____temp437v__=0;
  char* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp615v__=0;
  char __temp616v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(other__dat__pos,other__dat__length,&__temp592v__);
  end_pos=__temp592v__;
  __temp593v=0;
  neq__temp302v(end_pos,__temp593v,&__temp594v__);
  if(__temp594v__){
  len__temp506v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp595v__);
  le__temp230v(end_pos,__temp595v__,&__temp596v__);
  if(__temp596v__){
  __temp597v=1;
  __temp_errcode=sub__temp330v(end_pos,__temp597v,&__temp598v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp502v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp598v__,&__temp599v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp599v__){
  goto __temp_failure;
  }
  memcpy(&__temp600v__value,__temp599v__,1);
  char__temp566v(__temp601v,&__temp602v__);
  eq__temp567v(__temp600v__value,__temp602v__,&__temp603v__);
  __temp604v=__temp603v__;
  }
  __temp605v=__temp604v;
  }
  if(__temp605v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp506v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp606v__);
  lt__temp182v(end_pos,__temp606v__,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=get__temp502v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp608v__){
  goto __temp_failure;
  }
  memcpy(&__temp609v__value,__temp608v__,1);
  char__temp566v(__temp601v,&__temp610v__);
  eq__temp567v(__temp609v__value,__temp610v__,&__temp611v__);
  __temp612v=__temp611v__;
  }
  if(__temp612v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp583v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp613v__buf__unsafe_ptr,&__temp613v__buf__unsafe_size,&__temp613v__buf__unsafe_align,&__temp613v__dat__pos,&__temp613v__dat__length,&__temp613v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp613v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp613v__buf__unsafe_size;
  c__buf__unsafe_align=__temp613v__buf__unsafe_align;
  c__dat__pos=__temp613v__dat__pos;
  c__dat__length=__temp613v__dat__length;
  c__dat__first=__temp613v__dat__first;
  }
  }
  ret=c__buf__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1854v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1855v) {
  long long int z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1855v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1856v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  goto __temp_return;
  __temp_return:
  *__temp1856v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1857v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1857v=z;
}

static inline __attribute__((always_inline)) int read__temp1230v(char* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, char** __temp1858v) {
  const char* __temp1231v__=0;
  char __temp1232v____temp615v__=0;
  char __temp1232v____temp616v__=0;
  unsigned long long __temp1232v____temp614v____temp588v____temp513v____temp436v=0;
  unsigned long long __temp1232v____temp613v__buf__unsafe_size=0;
  char __temp1232v____temp614v____temp588v____temp513v____temp437v__=0;
  char* __temp1232v____temp613v__buf__unsafe_ptr=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1233v__=0;
  char __temp1234v__=0;
  char __temp1235v__=0;
  long long int status=0;
  unsigned long long __temp1236v=0;
  long long int __temp1237v__=0;
  char __temp1238v__=0;
  char __temp1239v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp591v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1231v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp398v(unsafe_ptr,&__temp1233v__);
  not__temp18v(__temp1233v__,&__temp1234v__);
  if(__temp1234v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1858v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1222v(long long int value, const char** __temp1859v) {
  int __temp1223v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp352v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1859v=ret;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  int __temp351v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1681v(char* command__buf__unsafe_ptr, unsigned long long command__buf__unsafe_size, unsigned long long command__buf__unsafe_align, unsigned long long command__dat__pos, unsigned long long command__dat__length, char command__dat__first) {
  char* __temp1682v__unsafe_ptr=0;
  char __temp1683v____temp1235v__=0;
  long long int __temp1683v__status=0;
  unsigned long long __temp1683v____temp1236v=0;
  long long int __temp1683v____temp1237v__=0;
  char __temp1683v____temp1238v__=0;
  char __temp1683v____temp1239v=0;
  char* __temp1684v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1685v=0;
  long long int __temp1686v=0;
  long long int error=0;
  const char* __temp1687v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1230v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1682v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1684v__unsafe_ptr=__temp1682v__unsafe_ptr;
  proc__unsafe_ptr=__temp1684v__unsafe_ptr;
  exists__temp398v(__temp1682v__unsafe_ptr,&__temp1683v____temp1235v__);
  if(__temp1683v____temp1235v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1682v__unsafe_ptr)){
  }
  __temp1683v__status=pclose((FILE*)__temp1682v__unsafe_ptr);
  __temp1682v__unsafe_ptr=0;
  }
  __temp1683v____temp1236v=0;
  int__temp382v(__temp1683v____temp1236v,&__temp1683v____temp1237v__);
  neq__temp291v(__temp1683v__status,__temp1683v____temp1237v__,&__temp1683v____temp1238v__);
  if(__temp1683v____temp1238v__){
  __temp_complain=29;
  __temp1683v____temp1239v=__temp1683v____temp1239v==0;
  }
  __temp1686v=__temp_complain;
  __temp1685v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1686v;
  __temp1685v=__temp1685v==0;
  if(__temp1685v){
  cstr__temp1222v(error,&__temp1687v__);
  print__temp350v(__temp1687v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1689v() {
  const char* path=0;
  unsigned long long __temp1691v=0;
  unsigned long long max_command_length=0;
  char* __temp1692v__unsafe_ptr=0;
  unsigned long long __temp1692v__unsafe_size=0;
  unsigned long long __temp1692v__unsafe_align=0;
  unsigned long long __temp1693v____temp513v____temp436v=0;
  char __temp1693v____temp513v____temp437v__=0;
  char* __temp1694v__buf__unsafe_ptr=0;
  unsigned long long __temp1694v__buf__unsafe_size=0;
  unsigned long long __temp1694v__buf__unsafe_align=0;
  unsigned long long __temp1694v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  char* __temp1696v__buf__unsafe_ptr=0;
  unsigned long long __temp1696v__buf__unsafe_size=0;
  unsigned long long __temp1696v__buf__unsafe_align=0;
  unsigned long long __temp1696v__dat__pos=0;
  unsigned long long __temp1696v__dat__length=0;
  char __temp1696v__dat__first=0;
  char* __temp1697v__buf__unsafe_ptr=0;
  unsigned long long __temp1697v__buf__unsafe_size=0;
  unsigned long long __temp1697v__buf__unsafe_align=0;
  unsigned long long __temp1697v__dat__pos=0;
  unsigned long long __temp1697v__dat__length=0;
  char __temp1697v__dat__first=0;
  char* __temp1698v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  unsigned long long __temp1700v=0;
  unsigned long long __temp1701v__=0;
  char* __temp1702v__unsafe_ptr=0;
  unsigned long long __temp1702v__unsafe_size=0;
  unsigned long long __temp1702v__unsafe_align=0;
  unsigned long long __temp1703v____temp513v____temp436v=0;
  char __temp1703v____temp513v____temp437v__=0;
  char* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  char __temp1704v=0;
  char* __temp1705v__buf__unsafe_ptr=0;
  unsigned long long __temp1705v__buf__unsafe_size=0;
  unsigned long long __temp1705v__buf__unsafe_align=0;
  unsigned long long __temp1705v__dat__pos=0;
  unsigned long long __temp1705v__dat__length=0;
  char __temp1705v__dat__first=0;
  char* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1707v__=0;
  char __temp1708v__=0;
  char* __temp1709v__buf__unsafe_ptr=0;
  unsigned long long __temp1709v__buf__unsafe_size=0;
  unsigned long long __temp1709v__buf__unsafe_align=0;
  unsigned long long __temp1709v__pos=0;
  char* __temp1710v__buf__unsafe_ptr=0;
  unsigned long long __temp1710v__buf__unsafe_size=0;
  unsigned long long __temp1710v__buf__unsafe_align=0;
  unsigned long long __temp1710v__dat__pos=0;
  unsigned long long __temp1710v__dat__length=0;
  char __temp1710v__dat__first=0;
  char* __temp1711v__buf__unsafe_ptr=0;
  unsigned long long __temp1711v__buf__unsafe_size=0;
  unsigned long long __temp1711v__buf__unsafe_align=0;
  unsigned long long __temp1711v__dat__pos=0;
  unsigned long long __temp1711v__dat__length=0;
  char __temp1711v__dat__first=0;
  char* __temp1712v__buf__unsafe_ptr=0;
  unsigned long long __temp1712v__buf__unsafe_size=0;
  unsigned long long __temp1712v__buf__unsafe_align=0;
  unsigned long long __temp1712v__dat__pos=0;
  unsigned long long __temp1712v__dat__length=0;
  char __temp1712v__dat__first=0;
  char* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1713v__=0;
  unsigned long long __temp1714v__=0;
  char __temp1716v__=0;
  char* __temp1717v__buf__unsafe_ptr=0;
  unsigned long long __temp1717v__buf__unsafe_size=0;
  unsigned long long __temp1717v__buf__unsafe_align=0;
  unsigned long long __temp1717v__dat__pos=0;
  unsigned long long __temp1717v__dat__length=0;
  char __temp1717v__dat__first=0;
  char __temp1719v__=0;
  char* __temp1720v__buf__unsafe_ptr=0;
  unsigned long long __temp1720v__buf__unsafe_size=0;
  unsigned long long __temp1720v__buf__unsafe_align=0;
  unsigned long long __temp1720v__dat__pos=0;
  unsigned long long __temp1720v__dat__length=0;
  char __temp1720v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1690v;
  __temp1691v=50;
  max_command_length=__temp1691v;
  __temp_errcode=alloc__temp507v(max_command_length,&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp618v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_align,&__temp1694v__buf__unsafe_ptr,&__temp1694v__buf__unsafe_size,&__temp1694v__buf__unsafe_align,&__temp1694v__pos);
  bp__buf__unsafe_ptr=__temp1694v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1694v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1694v__buf__unsafe_align;
  bp__pos=__temp1694v__pos;
  __temp_errcode=copy__temp685v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1695v,&__temp1696v__buf__unsafe_ptr,&__temp1696v__buf__unsafe_size,&__temp1696v__buf__unsafe_align,&__temp1696v__dat__pos,&__temp1696v__dat__length,&__temp1696v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp685v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1697v__buf__unsafe_ptr,&__temp1697v__buf__unsafe_size,&__temp1697v__buf__unsafe_align,&__temp1697v__dat__pos,&__temp1697v__dat__length,&__temp1697v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1656v(path,&__temp1698v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1698v__unsafe_ptr;
  __temp1700v=4;
  KB__temp410v(__temp1700v,&__temp1701v__);
  __temp_errcode=alloc__temp507v(__temp1701v__,&__temp1702v__unsafe_ptr,&__temp1702v__unsafe_size,&__temp1702v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1702v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1702v__unsafe_size;
  proc_buf__unsafe_align=__temp1702v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1667v(&test_dir__unsafe_ptr,&__temp1705v__buf__unsafe_ptr,&__temp1705v__buf__unsafe_size,&__temp1705v__buf__unsafe_align,&__temp1705v__dat__pos,&__temp1705v__dat__length,&__temp1705v__dat__first);
  __temp1704v=__temp_complain;
  entry__buf__unsafe_ptr=__temp1705v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1705v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1705v__buf__unsafe_align;
  entry__dat__pos=__temp1705v__dat__pos;
  entry__dat__length=__temp1705v__dat__length;
  entry__dat__first=__temp1705v__dat__first;
  __temp1704v=__temp1704v==0;
  if(!__temp1704v){
  break;
  }
  __temp_errcode=ends_with__temp876v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1706v,&__temp1707v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp18v(__temp1707v__,&__temp1708v__);
  if(__temp1708v__){
  continue;
  }
  __temp1709v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1709v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1709v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1709v__pos=bp__pos;
  str__temp553v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1710v__buf__unsafe_ptr,&__temp1710v__buf__unsafe_size,&__temp1710v__buf__unsafe_align,&__temp1710v__dat__pos,&__temp1710v__dat__length,&__temp1710v__dat__first);
  __temp_errcode=copy__temp676v(&__temp1709v__buf__unsafe_ptr,&__temp1709v__buf__unsafe_size,&__temp1709v__buf__unsafe_align,&__temp1709v__pos,__temp1710v__buf__unsafe_ptr,__temp1710v__buf__unsafe_size,__temp1710v__buf__unsafe_align,__temp1710v__dat__pos,__temp1710v__dat__length,__temp1710v__dat__first,&__temp1711v__buf__unsafe_ptr,&__temp1711v__buf__unsafe_size,&__temp1711v__buf__unsafe_align,&__temp1711v__dat__pos,&__temp1711v__dat__length,&__temp1711v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp667v(__temp1711v__buf__unsafe_ptr,__temp1711v__buf__unsafe_size,__temp1711v__buf__unsafe_align,__temp1711v__dat__pos,__temp1711v__dat__length,__temp1711v__dat__first,&__temp1712v__buf__unsafe_ptr,&__temp1712v__buf__unsafe_size,&__temp1712v__buf__unsafe_align,&__temp1712v__dat__pos,&__temp1712v__dat__length,&__temp1712v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1712v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1712v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1712v__buf__unsafe_align;
  command__dat__pos=__temp1712v__dat__pos;
  command__dat__length=__temp1712v__dat__length;
  command__dat__first=__temp1712v__dat__first;
  len__temp564v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1713v__);
  __temp_errcode=sub__temp330v(max_command_length,__temp1713v__,&__temp1714v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp566v(__temp1715v,&__temp1716v__);
  __temp_errcode=rextend__temp630v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1714v__,__temp1716v__,&__temp1717v__buf__unsafe_ptr,&__temp1717v__buf__unsafe_size,&__temp1717v__buf__unsafe_align,&__temp1717v__dat__pos,&__temp1717v__dat__length,&__temp1717v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp720v(__temp1717v__buf__unsafe_ptr,__temp1717v__buf__unsafe_size,__temp1717v__buf__unsafe_align,__temp1717v__dat__pos,__temp1717v__dat__length,__temp1717v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp566v(__temp601v,&__temp1719v__);
  __temp_errcode=rextend__temp649v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1719v__,&__temp1720v__buf__unsafe_ptr,&__temp1720v__buf__unsafe_size,&__temp1720v__buf__unsafe_align,&__temp1720v__dat__pos,&__temp1720v__dat__length,&__temp1720v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=run__temp1681v(__temp1720v__buf__unsafe_ptr,__temp1720v__buf__unsafe_size,__temp1720v__buf__unsafe_align,__temp1720v__dat__pos,__temp1720v__dat__length,__temp1720v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1689v();return 0;}