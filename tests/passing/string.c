#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp581v="";
const char* const __temp1654v="README.md";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1669v=unsafe_ptr;
  *__temp1670v=unsafe_size;
  *__temp1671v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1672v) {
  int value=0;
  *__temp1672v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1673v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1673v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1674v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1674v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1675v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1675v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1676v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1676v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1677v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1677v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1678v) {
  *__temp1678v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1679v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1679v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1680v) {
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
  *__temp1680v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp524v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1681v, unsigned long long* __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, char* __temp1686v) {
  *__temp1681v=buf__unsafe_ptr;
  *__temp1682v=buf__unsafe_size;
  *__temp1683v=buf__unsafe_align;
  *__temp1684v=dat__pos;
  *__temp1685v=dat__length;
  *__temp1686v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp534v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, unsigned long long* __temp1691v, char* __temp1692v) {
  unsigned long long __temp535v=0;
  char __temp536v__=0;
  char* __temp537v__=0;
  char __temp538v__value=0;
  char first=0;
  char* __temp539v__buf__unsafe_ptr=0;
  unsigned long long __temp539v__buf__unsafe_size=0;
  unsigned long long __temp539v__buf__unsafe_align=0;
  unsigned long long __temp539v__dat__pos=0;
  unsigned long long __temp539v__dat__length=0;
  char __temp539v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp535v=0;
  neq__temp302v(length,__temp535v,&__temp536v__);
  if(__temp536v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp537v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp537v__){
  goto __temp_failure;
  }
  memcpy(&__temp538v__value,__temp537v__,1);
  first=__temp538v__value;
  }
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp539v__buf__unsafe_ptr,&__temp539v__buf__unsafe_size,&__temp539v__buf__unsafe_align,&__temp539v__dat__pos,&__temp539v__dat__length,&__temp539v__dat__first);
  *__temp1687v=__temp539v__buf__unsafe_ptr;
  *__temp1688v=__temp539v__buf__unsafe_size;
  *__temp1689v=__temp539v__buf__unsafe_align;
  *__temp1690v=__temp539v__dat__pos;
  *__temp1691v=__temp539v__dat__length;
  *__temp1692v=__temp539v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp540v(const char* c, char** __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, unsigned long long* __temp1697v, unsigned long long* __temp1698v, char* __temp1699v) {
  char* __temp541v__unsafe_ptr=0;
  unsigned long long __temp541v__unsafe_size=0;
  unsigned long long __temp541v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp542v=0;
  char* __temp543v__buf__unsafe_ptr=0;
  unsigned long long __temp543v__buf__unsafe_size=0;
  unsigned long long __temp543v__buf__unsafe_align=0;
  unsigned long long __temp543v__dat__pos=0;
  unsigned long long __temp543v__dat__length=0;
  char __temp543v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  buf__unsafe_ptr=__temp541v__unsafe_ptr;
  buf__unsafe_size=__temp541v__unsafe_size;
  buf__unsafe_align=__temp541v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp542v=0;
  __temp_errcode=str__temp534v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp542v,length,&__temp543v__buf__unsafe_ptr,&__temp543v__buf__unsafe_size,&__temp543v__buf__unsafe_align,&__temp543v__dat__pos,&__temp543v__dat__length,&__temp543v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1694v=__temp543v__buf__unsafe_ptr;
  *__temp1695v=__temp543v__buf__unsafe_size;
  *__temp1696v=__temp543v__buf__unsafe_align;
  *__temp1697v=__temp543v__dat__pos;
  *__temp1698v=__temp543v__dat__length;
  *__temp1699v=__temp543v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1700v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1700v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1701v) {
  *__temp1701v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1702v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1702v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1703v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1703v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1704v) {
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
  *__temp1704v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp546v(const char* s, char* __temp1705v) {
  char c=0;
  if(s){
  c=*s;
  }
  *__temp1705v=c;
}

static inline __attribute__((always_inline)) void eq__temp547v(char x, char y, char* __temp1706v) {
  char z=0;
  z=(x==y);
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) void len__temp544v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1707v) {
  *__temp1707v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1708v) {
  char* allocated=*__temp1708v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1708v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1709v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1709v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1710v) {
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
  *__temp1710v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1711v, unsigned long long* __temp1712v, unsigned long long* __temp1713v, unsigned long long size, char** __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v) {
  char* buffer__unsafe_ptr=*__temp1711v;
  unsigned long long buffer__unsafe_size=*__temp1712v;
  unsigned long long buffer__unsafe_align=*__temp1713v;
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
  *__temp1711v=buffer__unsafe_ptr;
  *__temp1712v=buffer__unsafe_size;
  *__temp1713v=buffer__unsafe_align;
  *__temp1714v=buffer__unsafe_ptr;
  *__temp1715v=buffer__unsafe_size;
  *__temp1716v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, char** __temp1721v, unsigned long long* __temp1722v, unsigned long long* __temp1723v) {
  char* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  char* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  char* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1719v=0;
  char __temp1720v=0;
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
  *__temp1721v=__temp492v__unsafe_ptr;
  *__temp1722v=__temp492v__unsafe_size;
  *__temp1723v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp563v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, char* __temp1732v) {
  unsigned long long __temp564v=0;
  unsigned long long __temp565v__=0;
  unsigned long long __temp566v__=0;
  char* __temp567v__unsafe_ptr=0;
  unsigned long long __temp567v__unsafe_size=0;
  unsigned long long __temp567v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char* endpos=0;
  unsigned long long __temp569v=0;
  char* __temp570v__buf__unsafe_ptr=0;
  unsigned long long __temp570v__buf__unsafe_size=0;
  unsigned long long __temp570v__buf__unsafe_align=0;
  unsigned long long __temp570v__dat__pos=0;
  unsigned long long __temp570v__dat__length=0;
  char __temp570v__dat__first=0;
  unsigned long long __temp1725v=0;
  char __temp1726v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp564v=1;
  len__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp565v__);
  add__temp110v(__temp564v,__temp565v__,&__temp566v__);
  __temp_errcode=alloc__temp487v(__temp566v__,&__temp567v__unsafe_ptr,&__temp567v__unsafe_size,&__temp567v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp567v__unsafe_ptr;
  buf__unsafe_size=__temp567v__unsafe_size;
  buf__unsafe_align=__temp567v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp569v=0;
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp569v,other__dat__length,other__dat__first,&__temp570v__buf__unsafe_ptr,&__temp570v__buf__unsafe_size,&__temp570v__buf__unsafe_align,&__temp570v__dat__pos,&__temp570v__dat__length,&__temp570v__dat__first);
  *__temp1727v=__temp570v__buf__unsafe_ptr;
  *__temp1728v=__temp570v__buf__unsafe_size;
  *__temp1729v=__temp570v__buf__unsafe_align;
  *__temp1730v=__temp570v__dat__pos;
  *__temp1731v=__temp570v__dat__length;
  *__temp1732v=__temp570v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp522v(const char* c, char* __temp1733v) {
  char z=0;
  z=c!=0;
  *__temp1733v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1734v) {
  char z=0;
  z=value?0:1;
  *__temp1734v=z;
}

int unsafe_temporary_cstr__temp571v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1739v) {
  unsigned long long __temp572v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp573v=0;
  char __temp574v__=0;
  unsigned long long __temp575v__=0;
  char __temp576v__=0;
  unsigned long long __temp577v=0;
  unsigned long long __temp578v__=0;
  char* __temp579v__=0;
  char __temp580v__value=0;
  char __temp582v__=0;
  char __temp583v__=0;
  char __temp584v=0;
  char __temp585v=0;
  unsigned long long __temp586v__=0;
  char __temp587v__=0;
  char* __temp588v__=0;
  char __temp589v__value=0;
  char __temp590v__=0;
  char __temp591v__=0;
  char __temp592v=0;
  char* __temp593v__buf__unsafe_ptr=0;
  unsigned long long __temp593v__buf__unsafe_size=0;
  unsigned long long __temp593v__buf__unsafe_align=0;
  unsigned long long __temp593v__dat__pos=0;
  unsigned long long __temp593v__dat__length=0;
  char __temp593v__dat__first=0;
  char* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp595v__=0;
  char __temp596v__=0;
  unsigned long long __temp1737v=0;
  char __temp1738v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(other__dat__pos,other__dat__length,&__temp572v__);
  end_pos=__temp572v__;
  __temp573v=0;
  neq__temp302v(end_pos,__temp573v,&__temp574v__);
  if(__temp574v__){
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp575v__);
  le__temp230v(end_pos,__temp575v__,&__temp576v__);
  if(__temp576v__){
  __temp577v=1;
  __temp_errcode=sub__temp330v(end_pos,__temp577v,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp578v__,&__temp579v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp579v__){
  goto __temp_failure;
  }
  memcpy(&__temp580v__value,__temp579v__,1);
  char__temp546v(__temp581v,&__temp582v__);
  eq__temp547v(__temp580v__value,__temp582v__,&__temp583v__);
  __temp584v=__temp583v__;
  }
  __temp585v=__temp584v;
  }
  if(__temp585v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp586v__);
  lt__temp182v(end_pos,__temp586v__,&__temp587v__);
  if(__temp587v__){
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp588v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp588v__){
  goto __temp_failure;
  }
  memcpy(&__temp589v__value,__temp588v__,1);
  char__temp546v(__temp581v,&__temp590v__);
  eq__temp547v(__temp589v__value,__temp590v__,&__temp591v__);
  __temp592v=__temp591v__;
  }
  if(__temp592v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp563v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp593v__buf__unsafe_ptr,&__temp593v__buf__unsafe_size,&__temp593v__buf__unsafe_align,&__temp593v__dat__pos,&__temp593v__dat__length,&__temp593v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp593v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp593v__buf__unsafe_size;
  c__buf__unsafe_align=__temp593v__buf__unsafe_align;
  c__dat__pos=__temp593v__dat__pos;
  c__dat__length=__temp593v__dat__length;
  c__dat__first=__temp593v__dat__first;
  }
  }
  ret=c__buf__unsafe_ptr+c__dat__pos;
  *__temp1739v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1740v) {
  char z=0;
  z=x!=0;
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) int read__temp1315v(char* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, char** __temp1747v) {
  const char* __temp1316v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1318v__=0;
  char __temp1319v__=0;
  char __temp1741v=0;
  char __temp1742v=0;
  unsigned long long __temp1743v=0;
  unsigned long long __temp1744v=0;
  char __temp1745v=0;
  char* __temp1746v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp571v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1316v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1316v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1318v__);
  not__temp18v(__temp1318v__,&__temp1319v__);
  if(__temp1319v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1747v=unsafe_ptr;
  
  __temp_failure:exists__temp522v(__temp1316v__,&__temp1741v);
  not__temp18v(__temp1741v,&__temp1742v);
  if(__temp1742v){
  __temp1743v=0;
  neq__temp302v(__temp1744v,__temp1743v,&__temp1745v);
  if(__temp1745v){
  __temp1744v=0;
  free__temp428v(&__temp1746v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1748v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1748v=__temp412v__;
}

static inline __attribute__((always_inline)) int line__temp1482v(char** __temp1749v, unsigned long long* __temp1750v, unsigned long long* __temp1751v, unsigned long long* __temp1752v, char** __temp1753v, char** __temp1754v, unsigned long long* __temp1755v, unsigned long long* __temp1756v, unsigned long long* __temp1757v, unsigned long long* __temp1758v, char* __temp1759v) {
  char* buf__unsafe_ptr=*__temp1749v;
  unsigned long long buf__unsafe_size=*__temp1750v;
  unsigned long long buf__unsafe_align=*__temp1751v;
  unsigned long long pos=*__temp1752v;
  char* f__unsafe_ptr=*__temp1753v;
  char __temp1484v__=0;
  char __temp1485v__=0;
  char* __temp1486v__=0;
  char* contents=0;
  unsigned long long __temp1487v__=0;
  unsigned long long size=0;
  char success=0;
  char __temp1488v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1489v__=0;
  char* __temp1490v__buf__unsafe_ptr=0;
  unsigned long long __temp1490v__buf__unsafe_size=0;
  unsigned long long __temp1490v__buf__unsafe_align=0;
  unsigned long long __temp1490v__dat__pos=0;
  unsigned long long __temp1490v__dat__length=0;
  char __temp1490v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1484v__);
  not__temp18v(__temp1484v__,&__temp1485v__);
  if(__temp1485v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1486v__);
  contents=__temp1486v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1487v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1487v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1488v__);
  if(__temp1488v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1489v__);
  pos=__temp1489v__;
  __temp_errcode=str__temp534v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1490v__buf__unsafe_ptr,&__temp1490v__buf__unsafe_size,&__temp1490v__buf__unsafe_align,&__temp1490v__dat__pos,&__temp1490v__dat__length,&__temp1490v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1749v=buf__unsafe_ptr;
  *__temp1750v=buf__unsafe_size;
  *__temp1751v=buf__unsafe_align;
  *__temp1752v=pos;
  *__temp1753v=f__unsafe_ptr;
  *__temp1754v=__temp1490v__buf__unsafe_ptr;
  *__temp1755v=__temp1490v__buf__unsafe_size;
  *__temp1756v=__temp1490v__buf__unsafe_align;
  *__temp1757v=__temp1490v__dat__pos;
  *__temp1758v=__temp1490v__dat__length;
  *__temp1759v=__temp1490v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1760v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1760v=z;
}

static inline __attribute__((always_inline)) int print__temp696v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp698v__=0;
  char __temp699v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp350v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp698v__);
  gt__temp206v(__temp698v__,s__buf__unsafe_size,&__temp699v__);
  if(__temp699v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1653v() {
  char* __temp1655v__buf__unsafe_ptr=0;
  unsigned long long __temp1655v__buf__unsafe_size=0;
  unsigned long long __temp1655v__buf__unsafe_align=0;
  unsigned long long __temp1655v__dat__pos=0;
  unsigned long long __temp1655v__dat__length=0;
  char __temp1655v__dat__first=0;
  char* __temp1656v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  unsigned long long __temp1658v=0;
  unsigned long long __temp1659v__=0;
  char* __temp1660v__unsafe_ptr=0;
  unsigned long long __temp1660v__unsafe_size=0;
  unsigned long long __temp1660v__unsafe_align=0;
  char* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1662v=0;
  unsigned long long __temp1663v=0;
  unsigned long long pos=0;
  char __temp1664v=0;
  char* __temp1665v__buf__unsafe_ptr=0;
  unsigned long long __temp1665v__buf__unsafe_size=0;
  unsigned long long __temp1665v__buf__unsafe_align=0;
  unsigned long long __temp1665v__dat__pos=0;
  unsigned long long __temp1665v__dat__length=0;
  char __temp1665v__dat__first=0;
  char* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1666v=0;
  char* __temp1667v__buf__unsafe_ptr=0;
  unsigned long long __temp1667v__buf__unsafe_size=0;
  unsigned long long __temp1667v__buf__unsafe_align=0;
  unsigned long long __temp1667v__dat__pos=0;
  unsigned long long __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  unsigned long long __temp1765v=0;
  char __temp1766v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp540v(__temp1654v,&__temp1655v__buf__unsafe_ptr,&__temp1655v__buf__unsafe_size,&__temp1655v__buf__unsafe_align,&__temp1655v__dat__pos,&__temp1655v__dat__length,&__temp1655v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1315v(__temp1655v__buf__unsafe_ptr,__temp1655v__buf__unsafe_size,__temp1655v__buf__unsafe_align,__temp1655v__dat__pos,__temp1655v__dat__length,__temp1655v__dat__first,&__temp1656v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1656v__unsafe_ptr;
  __temp1658v=4;
  KB__temp410v(__temp1658v,&__temp1659v__);
  __temp_errcode=alloc__temp487v(__temp1659v__,&__temp1660v__unsafe_ptr,&__temp1660v__unsafe_size,&__temp1660v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1660v__unsafe_ptr;
  mem__unsafe_size=__temp1660v__unsafe_size;
  mem__unsafe_align=__temp1660v__unsafe_align;
  __temp1662v=0;
  __temp1663v=__temp1662v;
  pos=__temp1663v;
  while(1){
  __temp_complain=line__temp1482v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1665v__buf__unsafe_ptr,&__temp1665v__buf__unsafe_size,&__temp1665v__buf__unsafe_align,&__temp1665v__dat__pos,&__temp1665v__dat__length,&__temp1665v__dat__first);
  __temp1664v=__temp_complain;
  line__buf__unsafe_ptr=__temp1665v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1665v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1665v__buf__unsafe_align;
  line__dat__pos=__temp1665v__dat__pos;
  line__dat__length=__temp1665v__dat__length;
  line__dat__first=__temp1665v__dat__first;
  __temp1664v=__temp1664v==0;
  if(!__temp1664v){
  break;
  }
  continue;
  }
  if(__temp1656v__unsafe_ptr)fclose((FILE*)__temp1656v__unsafe_ptr);
  __temp1656v__unsafe_ptr=0;
  __temp1666v=0;
  __temp_errcode=str__temp534v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1666v,pos,&__temp1667v__buf__unsafe_ptr,&__temp1667v__buf__unsafe_size,&__temp1667v__buf__unsafe_align,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp696v(__temp1667v__buf__unsafe_ptr,__temp1667v__buf__unsafe_size,__temp1667v__buf__unsafe_align,__temp1667v__dat__pos,__temp1667v__dat__length,__temp1667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1765v=0;
  neq__temp302v(__temp1660v__unsafe_size,__temp1765v,&__temp1766v);
  if(__temp1766v){
  __temp1660v__unsafe_size=0;
  free__temp428v(&__temp1660v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1653v();return 0;}