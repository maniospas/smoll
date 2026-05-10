#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp575v="";
const char* const __temp1644v="README.md";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1659v, unsigned long long* __temp1660v, unsigned long long* __temp1661v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1659v=unsafe_ptr;
  *__temp1660v=unsafe_size;
  *__temp1661v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1662v) {
  int value=0;
  *__temp1662v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1663v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1663v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1664v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1664v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1665v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1665v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1666v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1667v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1667v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1668v) {
  *__temp1668v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1669v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1669v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1670v) {
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
  *__temp1670v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1671v, unsigned long long* __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v, unsigned long long* __temp1675v, char* __temp1676v) {
  *__temp1671v=buf__unsafe_ptr;
  *__temp1672v=buf__unsafe_size;
  *__temp1673v=buf__unsafe_align;
  *__temp1674v=dat__pos;
  *__temp1675v=dat__length;
  *__temp1676v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1677v, unsigned long long* __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v, char* __temp1682v) {
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
  *__temp1677v=__temp533v__buf__unsafe_ptr;
  *__temp1678v=__temp533v__buf__unsafe_size;
  *__temp1679v=__temp533v__buf__unsafe_align;
  *__temp1680v=__temp533v__dat__pos;
  *__temp1681v=__temp533v__dat__length;
  *__temp1682v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, char** __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, char* __temp1689v) {
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
  *__temp1684v=__temp537v__buf__unsafe_ptr;
  *__temp1685v=__temp537v__buf__unsafe_size;
  *__temp1686v=__temp537v__buf__unsafe_align;
  *__temp1687v=__temp537v__dat__pos;
  *__temp1688v=__temp537v__dat__length;
  *__temp1689v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1690v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1690v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1691v) {
  *__temp1691v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1692v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1693v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1694v) {
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
  *__temp1694v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp540v(const char* s, char* __temp1695v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1695v=c;
}

static inline __attribute__((always_inline)) void eq__temp541v(char x, char y, char* __temp1696v) {
  char z=0;
  z=(x==y);
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) void len__temp538v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1697v) {
  *__temp1697v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1698v) {
  char* allocated=*__temp1698v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1698v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1699v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1699v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1700v) {
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
  *__temp1700v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, unsigned long long size, char** __temp1704v, unsigned long long* __temp1705v, unsigned long long* __temp1706v) {
  char* buffer__unsafe_ptr=*__temp1701v;
  unsigned long long buffer__unsafe_size=*__temp1702v;
  unsigned long long buffer__unsafe_align=*__temp1703v;
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
  *__temp1701v=buffer__unsafe_ptr;
  *__temp1702v=buffer__unsafe_size;
  *__temp1703v=buffer__unsafe_align;
  *__temp1704v=buffer__unsafe_ptr;
  *__temp1705v=buffer__unsafe_size;
  *__temp1706v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, char** __temp1711v, unsigned long long* __temp1712v, unsigned long long* __temp1713v) {
  char* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  char* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  char* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1709v=0;
  char __temp1710v=0;
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
  *__temp1711v=__temp492v__unsafe_ptr;
  *__temp1712v=__temp492v__unsafe_size;
  *__temp1713v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp557v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1717v, unsigned long long* __temp1718v, unsigned long long* __temp1719v, unsigned long long* __temp1720v, unsigned long long* __temp1721v, char* __temp1722v) {
  unsigned long long __temp558v=0;
  unsigned long long __temp559v__=0;
  unsigned long long __temp560v__=0;
  char* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__unsafe_size=0;
  unsigned long long __temp561v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp563v=0;
  char* __temp564v__buf__unsafe_ptr=0;
  unsigned long long __temp564v__buf__unsafe_size=0;
  unsigned long long __temp564v__buf__unsafe_align=0;
  unsigned long long __temp564v__dat__pos=0;
  unsigned long long __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  unsigned long long __temp1715v=0;
  char __temp1716v=0;
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
  memcpy(buf__unsafe_ptr,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[other__dat__length]=0;
  __temp563v=0;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp563v,other__dat__length,other__dat__first,&__temp564v__buf__unsafe_ptr,&__temp564v__buf__unsafe_size,&__temp564v__buf__unsafe_align,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  *__temp1717v=__temp564v__buf__unsafe_ptr;
  *__temp1718v=__temp564v__buf__unsafe_size;
  *__temp1719v=__temp564v__buf__unsafe_align;
  *__temp1720v=__temp564v__dat__pos;
  *__temp1721v=__temp564v__dat__length;
  *__temp1722v=__temp564v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp516v(const char* c, char* __temp1723v) {
  char z=0;
  z=c!=0;
  *__temp1723v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1724v) {
  char z=0;
  z=value?0:1;
  *__temp1724v=z;
}

int unsafe_temporary_cstr__temp565v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1729v) {
  unsigned long long __temp566v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp567v=0;
  char __temp568v__=0;
  unsigned long long __temp569v__=0;
  char __temp570v__=0;
  unsigned long long __temp571v=0;
  unsigned long long __temp572v__=0;
  char* __temp573v__=0;
  char __temp574v__value=0;
  char __temp576v__=0;
  char __temp577v__=0;
  char __temp578v=0;
  char __temp579v=0;
  unsigned long long __temp580v__=0;
  char __temp581v__=0;
  char* __temp582v__=0;
  char __temp583v__value=0;
  char __temp584v__=0;
  char __temp585v__=0;
  char __temp586v=0;
  char* __temp587v__buf__unsafe_ptr=0;
  unsigned long long __temp587v__buf__unsafe_size=0;
  unsigned long long __temp587v__buf__unsafe_align=0;
  unsigned long long __temp587v__dat__pos=0;
  unsigned long long __temp587v__dat__length=0;
  char __temp587v__dat__first=0;
  char* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp589v__=0;
  char __temp590v__=0;
  unsigned long long __temp1727v=0;
  char __temp1728v=0;
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
  memcpy(&__temp574v__value,__temp573v__,1);
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
  memcpy(&__temp583v__value,__temp582v__,1);
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
  *__temp1729v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1730v) {
  char z=0;
  z=x!=0;
  *__temp1730v=z;
}

static inline __attribute__((always_inline)) int read__temp1305v(char* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, char** __temp1737v) {
  const char* __temp1306v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1308v__=0;
  char __temp1309v__=0;
  char __temp1731v=0;
  char __temp1732v=0;
  unsigned long long __temp1733v=0;
  unsigned long long __temp1734v=0;
  char __temp1735v=0;
  char* __temp1736v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp565v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1306v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1306v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1308v__);
  not__temp18v(__temp1308v__,&__temp1309v__);
  if(__temp1309v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1737v=unsafe_ptr;
  
  __temp_failure:exists__temp516v(__temp1306v__,&__temp1731v);
  not__temp18v(__temp1731v,&__temp1732v);
  if(__temp1732v){
  __temp1733v=0;
  neq__temp302v(__temp1734v,__temp1733v,&__temp1735v);
  if(__temp1735v){
  __temp1734v=0;
  free__temp428v(&__temp1736v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1738v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1738v=__temp412v__;
}

static inline __attribute__((always_inline)) int line__temp1472v(char** __temp1739v, unsigned long long* __temp1740v, unsigned long long* __temp1741v, unsigned long long* __temp1742v, char** __temp1743v, char** __temp1744v, unsigned long long* __temp1745v, unsigned long long* __temp1746v, unsigned long long* __temp1747v, unsigned long long* __temp1748v, char* __temp1749v) {
  char* buf__unsafe_ptr=*__temp1739v;
  unsigned long long buf__unsafe_size=*__temp1740v;
  unsigned long long buf__unsafe_align=*__temp1741v;
  unsigned long long pos=*__temp1742v;
  char* f__unsafe_ptr=*__temp1743v;
  char __temp1474v__=0;
  char __temp1475v__=0;
  char* __temp1476v__=0;
  char* contents=0;
  unsigned long long __temp1477v__=0;
  unsigned long long size=0;
  char success=0;
  char __temp1478v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1479v__=0;
  char* __temp1480v__buf__unsafe_ptr=0;
  unsigned long long __temp1480v__buf__unsafe_size=0;
  unsigned long long __temp1480v__buf__unsafe_align=0;
  unsigned long long __temp1480v__dat__pos=0;
  unsigned long long __temp1480v__dat__length=0;
  char __temp1480v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1474v__);
  not__temp18v(__temp1474v__,&__temp1475v__);
  if(__temp1475v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1476v__);
  contents=__temp1476v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1477v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1477v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1478v__);
  if(__temp1478v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1479v__);
  pos=__temp1479v__;
  __temp_errcode=str__temp528v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1480v__buf__unsafe_ptr,&__temp1480v__buf__unsafe_size,&__temp1480v__buf__unsafe_align,&__temp1480v__dat__pos,&__temp1480v__dat__length,&__temp1480v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1739v=buf__unsafe_ptr;
  *__temp1740v=buf__unsafe_size;
  *__temp1741v=buf__unsafe_align;
  *__temp1742v=pos;
  *__temp1743v=f__unsafe_ptr;
  *__temp1744v=__temp1480v__buf__unsafe_ptr;
  *__temp1745v=__temp1480v__buf__unsafe_size;
  *__temp1746v=__temp1480v__buf__unsafe_align;
  *__temp1747v=__temp1480v__dat__pos;
  *__temp1748v=__temp1480v__dat__length;
  *__temp1749v=__temp1480v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1750v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1750v=z;
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
  char* __temp1645v__buf__unsafe_ptr=0;
  unsigned long long __temp1645v__buf__unsafe_size=0;
  unsigned long long __temp1645v__buf__unsafe_align=0;
  unsigned long long __temp1645v__dat__pos=0;
  unsigned long long __temp1645v__dat__length=0;
  char __temp1645v__dat__first=0;
  char* __temp1646v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  unsigned long long __temp1648v=0;
  unsigned long long __temp1649v__=0;
  char* __temp1650v__unsafe_ptr=0;
  unsigned long long __temp1650v__unsafe_size=0;
  unsigned long long __temp1650v__unsafe_align=0;
  char* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1652v=0;
  unsigned long long __temp1653v=0;
  unsigned long long pos=0;
  char __temp1654v=0;
  char* __temp1655v__buf__unsafe_ptr=0;
  unsigned long long __temp1655v__buf__unsafe_size=0;
  unsigned long long __temp1655v__buf__unsafe_align=0;
  unsigned long long __temp1655v__dat__pos=0;
  unsigned long long __temp1655v__dat__length=0;
  char __temp1655v__dat__first=0;
  char* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1656v=0;
  char* __temp1657v__buf__unsafe_ptr=0;
  unsigned long long __temp1657v__buf__unsafe_size=0;
  unsigned long long __temp1657v__buf__unsafe_align=0;
  unsigned long long __temp1657v__dat__pos=0;
  unsigned long long __temp1657v__dat__length=0;
  char __temp1657v__dat__first=0;
  unsigned long long __temp1755v=0;
  char __temp1756v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp534v(__temp1644v,&__temp1645v__buf__unsafe_ptr,&__temp1645v__buf__unsafe_size,&__temp1645v__buf__unsafe_align,&__temp1645v__dat__pos,&__temp1645v__dat__length,&__temp1645v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1305v(__temp1645v__buf__unsafe_ptr,__temp1645v__buf__unsafe_size,__temp1645v__buf__unsafe_align,__temp1645v__dat__pos,__temp1645v__dat__length,__temp1645v__dat__first,&__temp1646v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1646v__unsafe_ptr;
  __temp1648v=4;
  KB__temp410v(__temp1648v,&__temp1649v__);
  __temp_errcode=alloc__temp487v(__temp1649v__,&__temp1650v__unsafe_ptr,&__temp1650v__unsafe_size,&__temp1650v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1650v__unsafe_ptr;
  mem__unsafe_size=__temp1650v__unsafe_size;
  mem__unsafe_align=__temp1650v__unsafe_align;
  __temp1652v=0;
  __temp1653v=__temp1652v;
  pos=__temp1653v;
  while(1){
  __temp_complain=line__temp1472v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1655v__buf__unsafe_ptr,&__temp1655v__buf__unsafe_size,&__temp1655v__buf__unsafe_align,&__temp1655v__dat__pos,&__temp1655v__dat__length,&__temp1655v__dat__first);
  __temp1654v=__temp_complain;
  line__buf__unsafe_ptr=__temp1655v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1655v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1655v__buf__unsafe_align;
  line__dat__pos=__temp1655v__dat__pos;
  line__dat__length=__temp1655v__dat__length;
  line__dat__first=__temp1655v__dat__first;
  __temp1654v=__temp1654v==0;
  if(!__temp1654v)break;
  continue;
  }
  if(__temp1646v__unsafe_ptr)fclose((FILE*)__temp1646v__unsafe_ptr);
  __temp1646v__unsafe_ptr=0;
  __temp1656v=0;
  __temp_errcode=str__temp528v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1656v,pos,&__temp1657v__buf__unsafe_ptr,&__temp1657v__buf__unsafe_size,&__temp1657v__buf__unsafe_align,&__temp1657v__dat__pos,&__temp1657v__dat__length,&__temp1657v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp690v(__temp1657v__buf__unsafe_ptr,__temp1657v__buf__unsafe_size,__temp1657v__buf__unsafe_align,__temp1657v__dat__pos,__temp1657v__dat__length,__temp1657v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1755v=0;
  neq__temp302v(__temp1650v__unsafe_size,__temp1755v,&__temp1756v);
  if(__temp1756v){
  __temp1650v__unsafe_size=0;
  free__temp428v(&__temp1650v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1643v();return 0;}