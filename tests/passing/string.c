#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp601v="";
const char* const __temp1674v="README.md";
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp508v(char** __temp1689v, unsigned long long* __temp1690v, unsigned long long* __temp1691v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1689v=unsafe_ptr;
  *__temp1690v=unsafe_size;
  *__temp1691v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1692v) {
  int value=0;
  *__temp1692v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1693v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1693v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1694v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1694v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1695v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1695v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1696v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1697v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1697v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1698v) {
  *__temp1698v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1699v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1699v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1700v) {
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
  *__temp1700v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp544v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v, unsigned long long* __temp1705v, char* __temp1706v) {
  *__temp1701v=buf__unsafe_ptr;
  *__temp1702v=buf__unsafe_size;
  *__temp1703v=buf__unsafe_align;
  *__temp1704v=dat__pos;
  *__temp1705v=dat__length;
  *__temp1706v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp554v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1707v, unsigned long long* __temp1708v, unsigned long long* __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v, char* __temp1712v) {
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
  *__temp1707v=__temp559v__buf__unsafe_ptr;
  *__temp1708v=__temp559v__buf__unsafe_size;
  *__temp1709v=__temp559v__buf__unsafe_align;
  *__temp1710v=__temp559v__dat__pos;
  *__temp1711v=__temp559v__dat__length;
  *__temp1712v=__temp559v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp560v(const char* c, char** __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, char* __temp1719v) {
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
  *__temp1714v=__temp563v__buf__unsafe_ptr;
  *__temp1715v=__temp563v__buf__unsafe_size;
  *__temp1716v=__temp563v__buf__unsafe_align;
  *__temp1717v=__temp563v__dat__pos;
  *__temp1718v=__temp563v__dat__length;
  *__temp1719v=__temp563v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1720v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1720v=z;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1721v) {
  *__temp1721v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1722v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1722v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1723v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1723v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1724v) {
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
  *__temp1724v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp566v(const char* s, char* __temp1725v) {
  char c=0;
  if(s){
  c=*s;
  }
  *__temp1725v=c;
}

static inline __attribute__((always_inline)) void eq__temp567v(char x, char y, char* __temp1726v) {
  char z=0;
  z=(x==y);
  *__temp1726v=z;
}

static inline __attribute__((always_inline)) void len__temp564v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1727v) {
  *__temp1727v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1728v) {
  char* allocated=*__temp1728v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1728v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1729v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1729v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1730v) {
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
  *__temp1730v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1731v, unsigned long long* __temp1732v, unsigned long long* __temp1733v, unsigned long long size, char** __temp1734v, unsigned long long* __temp1735v, unsigned long long* __temp1736v) {
  char* buffer__unsafe_ptr=*__temp1731v;
  unsigned long long buffer__unsafe_size=*__temp1732v;
  unsigned long long buffer__unsafe_align=*__temp1733v;
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
  *__temp1731v=buffer__unsafe_ptr;
  *__temp1732v=buffer__unsafe_size;
  *__temp1733v=buffer__unsafe_align;
  *__temp1734v=buffer__unsafe_ptr;
  *__temp1735v=buffer__unsafe_size;
  *__temp1736v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp507v(unsigned long long size, char** __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v) {
  char* __temp510v__unsafe_ptr=0;
  unsigned long long __temp510v__unsafe_size=0;
  unsigned long long __temp510v__unsafe_align=0;
  char* __temp511v__unsafe_ptr=0;
  unsigned long long __temp511v__unsafe_size=0;
  unsigned long long __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  unsigned long long __temp512v__unsafe_size=0;
  unsigned long long __temp512v__unsafe_align=0;
  unsigned long long __temp1739v=0;
  char __temp1740v=0;
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
  *__temp1741v=__temp512v__unsafe_ptr;
  *__temp1742v=__temp512v__unsafe_size;
  *__temp1743v=__temp512v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp583v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1747v, unsigned long long* __temp1748v, unsigned long long* __temp1749v, unsigned long long* __temp1750v, unsigned long long* __temp1751v, char* __temp1752v) {
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
  unsigned long long __temp1745v=0;
  char __temp1746v=0;
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
  *__temp1747v=__temp590v__buf__unsafe_ptr;
  *__temp1748v=__temp590v__buf__unsafe_size;
  *__temp1749v=__temp590v__buf__unsafe_align;
  *__temp1750v=__temp590v__dat__pos;
  *__temp1751v=__temp590v__dat__length;
  *__temp1752v=__temp590v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp542v(const char* c, char* __temp1753v) {
  char z=0;
  z=c!=0;
  *__temp1753v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1754v) {
  char z=0;
  z=value?0:1;
  *__temp1754v=z;
}

int unsafe_temporary_cstr__temp591v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1759v) {
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
  unsigned long long __temp1757v=0;
  char __temp1758v=0;
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
  *__temp1759v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1760v) {
  char z=0;
  z=x!=0;
  *__temp1760v=z;
}

static inline __attribute__((always_inline)) int read__temp1335v(char* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, char** __temp1767v) {
  const char* __temp1336v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1338v__=0;
  char __temp1339v__=0;
  char __temp1761v=0;
  char __temp1762v=0;
  unsigned long long __temp1763v=0;
  unsigned long long __temp1764v=0;
  char __temp1765v=0;
  char* __temp1766v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp591v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1336v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1336v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1338v__);
  not__temp18v(__temp1338v__,&__temp1339v__);
  if(__temp1339v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1767v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1768v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1768v=__temp412v__;
}

static inline __attribute__((always_inline)) int line__temp1502v(char** __temp1769v, unsigned long long* __temp1770v, unsigned long long* __temp1771v, unsigned long long* __temp1772v, char** __temp1773v, char** __temp1774v, unsigned long long* __temp1775v, unsigned long long* __temp1776v, unsigned long long* __temp1777v, unsigned long long* __temp1778v, char* __temp1779v) {
  char* buf__unsafe_ptr=*__temp1769v;
  unsigned long long buf__unsafe_size=*__temp1770v;
  unsigned long long buf__unsafe_align=*__temp1771v;
  unsigned long long pos=*__temp1772v;
  char* f__unsafe_ptr=*__temp1773v;
  char __temp1504v__=0;
  char __temp1505v__=0;
  char* __temp1506v__=0;
  char* contents=0;
  unsigned long long __temp1507v__=0;
  unsigned long long size=0;
  char success=0;
  char __temp1508v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1509v__=0;
  char* __temp1510v__buf__unsafe_ptr=0;
  unsigned long long __temp1510v__buf__unsafe_size=0;
  unsigned long long __temp1510v__buf__unsafe_align=0;
  unsigned long long __temp1510v__dat__pos=0;
  unsigned long long __temp1510v__dat__length=0;
  char __temp1510v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1504v__);
  not__temp18v(__temp1504v__,&__temp1505v__);
  if(__temp1505v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1506v__);
  contents=__temp1506v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1507v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1507v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1508v__);
  if(__temp1508v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1509v__);
  pos=__temp1509v__;
  __temp_errcode=str__temp554v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1510v__buf__unsafe_ptr,&__temp1510v__buf__unsafe_size,&__temp1510v__buf__unsafe_align,&__temp1510v__dat__pos,&__temp1510v__dat__length,&__temp1510v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1769v=buf__unsafe_ptr;
  *__temp1770v=buf__unsafe_size;
  *__temp1771v=buf__unsafe_align;
  *__temp1772v=pos;
  *__temp1773v=f__unsafe_ptr;
  *__temp1774v=__temp1510v__buf__unsafe_ptr;
  *__temp1775v=__temp1510v__buf__unsafe_size;
  *__temp1776v=__temp1510v__buf__unsafe_align;
  *__temp1777v=__temp1510v__dat__pos;
  *__temp1778v=__temp1510v__dat__length;
  *__temp1779v=__temp1510v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1780v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1780v=z;
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
  char* __temp1675v__buf__unsafe_ptr=0;
  unsigned long long __temp1675v__buf__unsafe_size=0;
  unsigned long long __temp1675v__buf__unsafe_align=0;
  unsigned long long __temp1675v__dat__pos=0;
  unsigned long long __temp1675v__dat__length=0;
  char __temp1675v__dat__first=0;
  char* __temp1676v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  unsigned long long __temp1678v=0;
  unsigned long long __temp1679v__=0;
  char* __temp1680v__unsafe_ptr=0;
  unsigned long long __temp1680v__unsafe_size=0;
  unsigned long long __temp1680v__unsafe_align=0;
  char* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1682v=0;
  unsigned long long __temp1683v=0;
  unsigned long long pos=0;
  char __temp1684v=0;
  char* __temp1685v__buf__unsafe_ptr=0;
  unsigned long long __temp1685v__buf__unsafe_size=0;
  unsigned long long __temp1685v__buf__unsafe_align=0;
  unsigned long long __temp1685v__dat__pos=0;
  unsigned long long __temp1685v__dat__length=0;
  char __temp1685v__dat__first=0;
  char* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1686v=0;
  char* __temp1687v__buf__unsafe_ptr=0;
  unsigned long long __temp1687v__buf__unsafe_size=0;
  unsigned long long __temp1687v__buf__unsafe_align=0;
  unsigned long long __temp1687v__dat__pos=0;
  unsigned long long __temp1687v__dat__length=0;
  char __temp1687v__dat__first=0;
  unsigned long long __temp1785v=0;
  char __temp1786v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp560v(__temp1674v,&__temp1675v__buf__unsafe_ptr,&__temp1675v__buf__unsafe_size,&__temp1675v__buf__unsafe_align,&__temp1675v__dat__pos,&__temp1675v__dat__length,&__temp1675v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1335v(__temp1675v__buf__unsafe_ptr,__temp1675v__buf__unsafe_size,__temp1675v__buf__unsafe_align,__temp1675v__dat__pos,__temp1675v__dat__length,__temp1675v__dat__first,&__temp1676v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1676v__unsafe_ptr;
  __temp1678v=4;
  KB__temp410v(__temp1678v,&__temp1679v__);
  __temp_errcode=alloc__temp507v(__temp1679v__,&__temp1680v__unsafe_ptr,&__temp1680v__unsafe_size,&__temp1680v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1680v__unsafe_ptr;
  mem__unsafe_size=__temp1680v__unsafe_size;
  mem__unsafe_align=__temp1680v__unsafe_align;
  __temp1682v=0;
  __temp1683v=__temp1682v;
  pos=__temp1683v;
  while(1){
  __temp_complain=line__temp1502v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1685v__buf__unsafe_ptr,&__temp1685v__buf__unsafe_size,&__temp1685v__buf__unsafe_align,&__temp1685v__dat__pos,&__temp1685v__dat__length,&__temp1685v__dat__first);
  __temp1684v=__temp_complain;
  line__buf__unsafe_ptr=__temp1685v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1685v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1685v__buf__unsafe_align;
  line__dat__pos=__temp1685v__dat__pos;
  line__dat__length=__temp1685v__dat__length;
  line__dat__first=__temp1685v__dat__first;
  __temp1684v=__temp1684v==0;
  if(!__temp1684v){
  break;
  }
  continue;
  }
  if(__temp1676v__unsafe_ptr)fclose((FILE*)__temp1676v__unsafe_ptr);
  __temp1676v__unsafe_ptr=0;
  __temp1686v=0;
  __temp_errcode=str__temp554v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1686v,pos,&__temp1687v__buf__unsafe_ptr,&__temp1687v__buf__unsafe_size,&__temp1687v__buf__unsafe_align,&__temp1687v__dat__pos,&__temp1687v__dat__length,&__temp1687v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp716v(__temp1687v__buf__unsafe_ptr,__temp1687v__buf__unsafe_size,__temp1687v__buf__unsafe_align,__temp1687v__dat__pos,__temp1687v__dat__length,__temp1687v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1673v();return 0;}