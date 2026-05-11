#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp601v="";
const char* const __temp1680v="ls";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp508v(char** __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1684v=unsafe_ptr;
  *__temp1685v=unsafe_size;
  *__temp1686v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1687v) {
  int value=0;
  *__temp1687v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1688v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1688v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1689v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1689v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1690v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1690v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1691v) {
  char* allocated=*__temp1691v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1691v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1692v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1693v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1694v) {
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
  *__temp1694v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp453v(char** __temp1695v, unsigned long long* __temp1696v, unsigned long long* __temp1697v, unsigned long long size, char** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v) {
  char* buffer__unsafe_ptr=*__temp1695v;
  unsigned long long buffer__unsafe_size=*__temp1696v;
  unsigned long long buffer__unsafe_align=*__temp1697v;
  unsigned long long __temp455v=0;
  char __temp456v__=0;
  char __temp459v__=0;
  unsigned long long __temp460v=0;
  char __temp461v__=0;
  unsigned long long __temp462v=0;
  unsigned long long __temp463v__=0;
  unsigned long long __temp465v=0;
  char __temp466v__=0;
  unsigned long long __temp467v__=0;
  unsigned long long bytes=0;
  char* __temp468v__=0;
  unsigned long long __temp469v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp459v__);
  if(__temp459v__){
  __temp460v=0;
  neq__temp302v(size,__temp460v,&__temp461v__);
  if(__temp461v__){
  __temp462v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp463v__);
  zero__temp429v(buffer__unsafe_ptr,__temp462v,__temp463v__);
  }
  goto __temp_return;
  }
  __temp465v=0;
  neq__temp302v(buffer__unsafe_size,__temp465v,&__temp466v__);
  if(__temp466v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp467v__);
  bytes=__temp467v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp468v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp468v__;
  __temp469v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp469v,bytes);
  *__temp1695v=buffer__unsafe_ptr;
  *__temp1696v=buffer__unsafe_size;
  *__temp1697v=buffer__unsafe_align;
  *__temp1698v=buffer__unsafe_ptr;
  *__temp1699v=buffer__unsafe_size;
  *__temp1700v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp507v(unsigned long long size, char** __temp1705v, unsigned long long* __temp1706v, unsigned long long* __temp1707v) {
  char* __temp510v__unsafe_ptr=0;
  unsigned long long __temp510v__unsafe_size=0;
  unsigned long long __temp510v__unsafe_align=0;
  char* __temp511v__unsafe_ptr=0;
  unsigned long long __temp511v__unsafe_size=0;
  unsigned long long __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  unsigned long long __temp512v__unsafe_size=0;
  unsigned long long __temp512v__unsafe_align=0;
  unsigned long long __temp1703v=0;
  char __temp1704v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp508v(&__temp510v__unsafe_ptr,&__temp510v__unsafe_size,&__temp510v__unsafe_align);
  __temp511v__unsafe_ptr=__temp510v__unsafe_ptr;
  __temp511v__unsafe_size=__temp510v__unsafe_size;
  __temp511v__unsafe_align=__temp510v__unsafe_align;
  __temp_errcode=alloc__temp453v(&__temp511v__unsafe_ptr,&__temp511v__unsafe_size,&__temp511v__unsafe_align,size,&__temp512v__unsafe_ptr,&__temp512v__unsafe_size,&__temp512v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1705v=__temp512v__unsafe_ptr;
  *__temp1706v=__temp512v__unsafe_size;
  *__temp1707v=__temp512v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1708v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1708v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1709v) {
  *__temp1709v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1710v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1710v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1711v) {
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
  *__temp1711v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp544v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, char* __temp1717v) {
  *__temp1712v=buf__unsafe_ptr;
  *__temp1713v=buf__unsafe_size;
  *__temp1714v=buf__unsafe_align;
  *__temp1715v=dat__pos;
  *__temp1716v=dat__length;
  *__temp1717v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp554v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1718v, unsigned long long* __temp1719v, unsigned long long* __temp1720v, unsigned long long* __temp1721v, unsigned long long* __temp1722v, char* __temp1723v) {
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
  *__temp1718v=__temp559v__buf__unsafe_ptr;
  *__temp1719v=__temp559v__buf__unsafe_size;
  *__temp1720v=__temp559v__buf__unsafe_align;
  *__temp1721v=__temp559v__dat__pos;
  *__temp1722v=__temp559v__dat__length;
  *__temp1723v=__temp559v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp560v(const char* c, char** __temp1725v, unsigned long long* __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, char* __temp1730v) {
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
  *__temp1725v=__temp563v__buf__unsafe_ptr;
  *__temp1726v=__temp563v__buf__unsafe_size;
  *__temp1727v=__temp563v__buf__unsafe_align;
  *__temp1728v=__temp563v__dat__pos;
  *__temp1729v=__temp563v__dat__length;
  *__temp1730v=__temp563v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp553v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1731v, unsigned long long* __temp1732v, unsigned long long* __temp1733v, unsigned long long* __temp1734v, unsigned long long* __temp1735v, char* __temp1736v) {
  *__temp1731v=other__buf__unsafe_ptr;
  *__temp1732v=other__buf__unsafe_size;
  *__temp1733v=other__buf__unsafe_align;
  *__temp1734v=other__dat__pos;
  *__temp1735v=other__dat__length;
  *__temp1736v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp564v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1737v) {
  *__temp1737v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1738v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1738v=z;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1739v) {
  *__temp1739v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1740v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1743v, unsigned long long* __temp1744v, unsigned long long* __temp1745v, unsigned long long* __temp1746v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1747v, unsigned long long* __temp1748v, unsigned long long* __temp1749v, unsigned long long* __temp1750v, unsigned long long* __temp1751v, char* __temp1752v) {
  char* buf__unsafe_ptr=*__temp1743v;
  unsigned long long buf__unsafe_size=*__temp1744v;
  unsigned long long buf__unsafe_align=*__temp1745v;
  unsigned long long pos=*__temp1746v;
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
  *__temp1743v=buf__unsafe_ptr;
  *__temp1744v=buf__unsafe_size;
  *__temp1745v=buf__unsafe_align;
  *__temp1746v=pos;
  *__temp1747v=__temp684v__buf__unsafe_ptr;
  *__temp1748v=__temp684v__buf__unsafe_size;
  *__temp1749v=__temp684v__buf__unsafe_align;
  *__temp1750v=__temp684v__dat__pos;
  *__temp1751v=__temp684v__dat__length;
  *__temp1752v=__temp684v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1753v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1753v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1754v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1754v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1755v) {
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
  *__temp1755v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp566v(const char* s, char* __temp1756v) {
  char c=0;
  if(s){
  c=*s;
  }
  *__temp1756v=c;
}

static inline __attribute__((always_inline)) void eq__temp567v(char x, char y, char* __temp1757v) {
  char z=0;
  z=(x==y);
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp583v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1761v, unsigned long long* __temp1762v, unsigned long long* __temp1763v, unsigned long long* __temp1764v, unsigned long long* __temp1765v, char* __temp1766v) {
  unsigned long long __temp584v=0;
  unsigned long long __temp585v__=0;
  unsigned long long __temp586v__=0;
  char* __temp587v__unsafe_ptr=0;
  unsigned long long __temp587v__unsafe_size=0;
  unsigned long long __temp587v__unsafe_align=0;
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
  unsigned long long __temp1759v=0;
  char __temp1760v=0;
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
  *__temp1761v=__temp590v__buf__unsafe_ptr;
  *__temp1762v=__temp590v__buf__unsafe_size;
  *__temp1763v=__temp590v__buf__unsafe_align;
  *__temp1764v=__temp590v__dat__pos;
  *__temp1765v=__temp590v__dat__length;
  *__temp1766v=__temp590v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp542v(const char* c, char* __temp1767v) {
  char z=0;
  z=c!=0;
  *__temp1767v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1768v) {
  char z=0;
  z=value?0:1;
  *__temp1768v=z;
}

int unsafe_temporary_cstr__temp591v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1773v) {
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
  char* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp615v__=0;
  char __temp616v__=0;
  unsigned long long __temp1771v=0;
  char __temp1772v=0;
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
  *__temp1773v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1321v(const char* cmd, long long int* __temp1774v) {
  long long int result=0;
  result=system(cmd);
  *__temp1774v=result;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1775v) {
  long long int z=0;
  z=x;
  *__temp1775v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1776v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1776v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1777v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  *__temp1777v=z;
}

static inline __attribute__((always_inline)) int system__temp1322v(char* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1323v__=0;
  long long int __temp1325v__=0;
  long long int result=0;
  unsigned long long __temp1326v=0;
  long long int __temp1327v__=0;
  char __temp1328v__=0;
  char __temp1778v=0;
  char __temp1779v=0;
  unsigned long long __temp1780v=0;
  unsigned long long __temp1781v=0;
  char __temp1782v=0;
  char* __temp1783v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp591v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1323v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1321v(__temp1323v__,&__temp1325v__);
  result=__temp1325v__;
  __temp1326v=0;
  int__temp382v(__temp1326v,&__temp1327v__);
  neq__temp291v(result,__temp1327v__,&__temp1328v__);
  if(__temp1328v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1673v() {
  unsigned long long __temp1674v=0;
  char* __temp1675v__unsafe_ptr=0;
  unsigned long long __temp1675v__unsafe_size=0;
  unsigned long long __temp1675v__unsafe_align=0;
  char* __temp1677v__unsafe_ptr=0;
  unsigned long long __temp1677v__unsafe_size=0;
  unsigned long long __temp1677v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1678v=0;
  unsigned long long __temp1679v=0;
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
  char* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1785v=0;
  char __temp1786v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1674v=2;
  __temp_errcode=alloc__temp507v(__temp1674v,&__temp1675v__unsafe_ptr,&__temp1675v__unsafe_size,&__temp1675v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1677v__unsafe_ptr=__temp1675v__unsafe_ptr;
  __temp1677v__unsafe_size=__temp1675v__unsafe_size;
  __temp1677v__unsafe_align=__temp1675v__unsafe_align;
  buf__unsafe_ptr=__temp1677v__unsafe_ptr;
  buf__unsafe_size=__temp1677v__unsafe_size;
  buf__unsafe_align=__temp1677v__unsafe_align;
  __temp1678v=0;
  __temp1679v=__temp1678v;
  __temp_errcode=str__temp560v(__temp1680v,&__temp1681v__buf__unsafe_ptr,&__temp1681v__buf__unsafe_size,&__temp1681v__buf__unsafe_align,&__temp1681v__dat__pos,&__temp1681v__dat__length,&__temp1681v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp676v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1679v,__temp1681v__buf__unsafe_ptr,__temp1681v__buf__unsafe_size,__temp1681v__buf__unsafe_align,__temp1681v__dat__pos,__temp1681v__dat__length,__temp1681v__dat__first,&__temp1682v__buf__unsafe_ptr,&__temp1682v__buf__unsafe_size,&__temp1682v__buf__unsafe_align,&__temp1682v__dat__pos,&__temp1682v__dat__length,&__temp1682v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1682v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1682v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1682v__buf__unsafe_align;
  s__dat__pos=__temp1682v__dat__pos;
  s__dat__length=__temp1682v__dat__length;
  s__dat__first=__temp1682v__dat__first;
  __temp_errcode=system__temp1322v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1673v();return 0;}