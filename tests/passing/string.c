#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp576v="";
const char* const __temp1640v="README.md";
const char* const __temp348v="\n";
const char* const __temp409v="kilobytes to bytes";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1655v, unsigned long long* __temp1656v, unsigned long long* __temp1657v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1655v=unsafe_ptr;
  *__temp1656v=unsafe_size;
  *__temp1657v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1658v) {
  int value=0;
  *__temp1658v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1659v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1659v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1660v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1660v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1661v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1661v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1662v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1663v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1663v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1664v) {
  *__temp1664v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1665v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1665v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1666v) {
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
  *__temp1666v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1667v, unsigned long long* __temp1668v, unsigned long long* __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v, char* __temp1672v) {
  *__temp1667v=buf__unsafe_ptr;
  *__temp1668v=buf__unsafe_size;
  *__temp1669v=buf__unsafe_align;
  *__temp1670v=dat__pos;
  *__temp1671v=dat__length;
  *__temp1672v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1673v, unsigned long long* __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v, char* __temp1678v) {
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
  *__temp1673v=__temp534v__buf__unsafe_ptr;
  *__temp1674v=__temp534v__buf__unsafe_size;
  *__temp1675v=__temp534v__buf__unsafe_align;
  *__temp1676v=__temp534v__dat__pos;
  *__temp1677v=__temp534v__dat__length;
  *__temp1678v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1680v, unsigned long long* __temp1681v, unsigned long long* __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, char* __temp1685v) {
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
  *__temp1680v=__temp538v__buf__unsafe_ptr;
  *__temp1681v=__temp538v__buf__unsafe_size;
  *__temp1682v=__temp538v__buf__unsafe_align;
  *__temp1683v=__temp538v__dat__pos;
  *__temp1684v=__temp538v__dat__length;
  *__temp1685v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1686v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1686v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1687v) {
  *__temp1687v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1688v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1688v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1689v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1689v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1690v) {
  int __temp331v__=0;
  int __temp334v__=0;
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
  *__temp1690v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp541v(const char* s, char* __temp1691v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1691v=c;
}

static inline __attribute__((always_inline)) void eq__temp542v(char x, char y, int* __temp1692v) {
  int z=0;
  z=(x==y);
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1693v) {
  *__temp1693v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1694v) {
  void* allocated=*__temp1694v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1694v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1695v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1695v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1696v) {
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
  *__temp1696v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1697v, unsigned long long* __temp1698v, unsigned long long* __temp1699v, unsigned long long size, void** __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v) {
  void* buffer__unsafe_ptr=*__temp1697v;
  unsigned long long buffer__unsafe_size=*__temp1698v;
  unsigned long long buffer__unsafe_align=*__temp1699v;
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
  *__temp1697v=buffer__unsafe_ptr;
  *__temp1698v=buffer__unsafe_size;
  *__temp1699v=buffer__unsafe_align;
  *__temp1700v=buffer__unsafe_ptr;
  *__temp1701v=buffer__unsafe_size;
  *__temp1702v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1707v, unsigned long long* __temp1708v, unsigned long long* __temp1709v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1705v=0;
  int __temp1706v=0;
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
  *__temp1707v=__temp493v__unsafe_ptr;
  *__temp1708v=__temp493v__unsafe_size;
  *__temp1709v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp558v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, unsigned long long* __temp1717v, char* __temp1718v) {
  unsigned long long __temp559v=0;
  unsigned long long __temp560v__=0;
  unsigned long long __temp561v__=0;
  void* __temp562v__unsafe_ptr=0;
  unsigned long long __temp562v__unsafe_size=0;
  unsigned long long __temp562v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp564v=0;
  void* __temp565v__buf__unsafe_ptr=0;
  unsigned long long __temp565v__buf__unsafe_size=0;
  unsigned long long __temp565v__buf__unsafe_align=0;
  unsigned long long __temp565v__dat__pos=0;
  unsigned long long __temp565v__dat__length=0;
  char __temp565v__dat__first=0;
  unsigned long long __temp1711v=0;
  int __temp1712v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp559v=1;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp560v__);
  add__temp110v(__temp559v,__temp560v__,&__temp561v__);
  __temp_errcode=alloc__temp488v(__temp561v__,&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp562v__unsafe_ptr;
  buf__unsafe_size=__temp562v__unsafe_size;
  buf__unsafe_align=__temp562v__unsafe_align;
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp564v=0;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp564v,other__dat__length,other__dat__first,&__temp565v__buf__unsafe_ptr,&__temp565v__buf__unsafe_size,&__temp565v__buf__unsafe_align,&__temp565v__dat__pos,&__temp565v__dat__length,&__temp565v__dat__first);
  *__temp1713v=__temp565v__buf__unsafe_ptr;
  *__temp1714v=__temp565v__buf__unsafe_size;
  *__temp1715v=__temp565v__buf__unsafe_align;
  *__temp1716v=__temp565v__dat__pos;
  *__temp1717v=__temp565v__dat__length;
  *__temp1718v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp517v(const char* c, int* __temp1719v) {
  int z=0;
  z=c!=0;
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1720v) {
  int z=0;
  z=value?0:1;
  *__temp1720v=z;
}

int unsafe_temporary_cstr__temp566v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1725v) {
  unsigned long long __temp567v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp568v=0;
  int __temp569v__=0;
  unsigned long long __temp570v__=0;
  int __temp571v__=0;
  unsigned long long __temp572v=0;
  unsigned long long __temp573v__=0;
  void* __temp574v__=0;
  char __temp575v__value=0;
  char __temp577v__=0;
  int __temp578v__=0;
  int __temp579v=0;
  int __temp580v=0;
  unsigned long long __temp581v__=0;
  int __temp582v__=0;
  void* __temp583v__=0;
  char __temp584v__value=0;
  char __temp585v__=0;
  int __temp586v__=0;
  int __temp587v=0;
  void* __temp588v__buf__unsafe_ptr=0;
  unsigned long long __temp588v__buf__unsafe_size=0;
  unsigned long long __temp588v__buf__unsafe_align=0;
  unsigned long long __temp588v__dat__pos=0;
  unsigned long long __temp588v__dat__length=0;
  char __temp588v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  int __temp590v__=0;
  int __temp591v__=0;
  unsigned long long __temp1723v=0;
  int __temp1724v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  add__temp110v(other__dat__pos,other__dat__length,&__temp567v__);
  end_pos=__temp567v__;
  __temp568v=0;
  neq__temp302v(end_pos,__temp568v,&__temp569v__);
  if(__temp569v__){
  len__temp487v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp570v__);
  le__temp230v(end_pos,__temp570v__,&__temp571v__);
  if(__temp571v__){
  __temp572v=1;
  __temp_errcode=sub__temp330v(end_pos,__temp572v,&__temp573v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp483v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp573v__,&__temp574v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp574v__){
  goto __temp_failure;
  }
  memcpy(&__temp575v__value,(char*)__temp574v__,1);
  char__temp541v(__temp576v,&__temp577v__);
  eq__temp542v(__temp575v__value,__temp577v__,&__temp578v__);
  __temp579v=__temp578v__;
  }
  __temp580v=__temp579v;
  }
  if(__temp580v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp487v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp581v__);
  lt__temp182v(end_pos,__temp581v__,&__temp582v__);
  if(__temp582v__){
  __temp_errcode=get__temp483v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp583v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp583v__){
  goto __temp_failure;
  }
  memcpy(&__temp584v__value,(char*)__temp583v__,1);
  char__temp541v(__temp576v,&__temp585v__);
  eq__temp542v(__temp584v__value,__temp585v__,&__temp586v__);
  __temp587v=__temp586v__;
  }
  if(__temp587v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp558v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp588v__buf__unsafe_ptr,&__temp588v__buf__unsafe_size,&__temp588v__buf__unsafe_align,&__temp588v__dat__pos,&__temp588v__dat__length,&__temp588v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp588v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp588v__buf__unsafe_size;
  c__buf__unsafe_align=__temp588v__buf__unsafe_align;
  c__dat__pos=__temp588v__dat__pos;
  c__dat__length=__temp588v__dat__length;
  c__dat__first=__temp588v__dat__first;
  }
  }
  ret=((char*)c__buf__unsafe_ptr)+c__dat__pos;
  *__temp1725v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1726v) {
  int z=0;
  z=x!=0;
  *__temp1726v=z;
}

static inline __attribute__((always_inline)) int read__temp1301v(void* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, void** __temp1733v) {
  const char* __temp1302v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1304v__=0;
  int __temp1305v__=0;
  int __temp1727v=0;
  int __temp1728v=0;
  unsigned long long __temp1729v=0;
  unsigned long long __temp1730v=0;
  int __temp1731v=0;
  void* __temp1732v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp566v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1302v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1302v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp396v(unsafe_ptr,&__temp1304v__);
  not__temp18v(__temp1304v__,&__temp1305v__);
  if(__temp1305v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1733v=unsafe_ptr;
  
  __temp_failure:exists__temp517v(__temp1302v__,&__temp1727v);
  not__temp18v(__temp1727v,&__temp1728v);
  if(__temp1728v){
  __temp1729v=0;
  neq__temp302v(__temp1730v,__temp1729v,&__temp1731v);
  if(__temp1731v){
  __temp1730v=0;
  free__temp429v(&__temp1732v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp408v(unsigned long long x, unsigned long long* __temp1734v) {
  unsigned long long __temp410v=0;
  unsigned long long __temp411v__=0;
  __temp410v=1024;
  mul__temp134v(x,__temp410v,&__temp411v__);
  *__temp1734v=__temp411v__;
}

static inline __attribute__((always_inline)) int line__temp1468v(void** __temp1735v, unsigned long long* __temp1736v, unsigned long long* __temp1737v, unsigned long long* __temp1738v, void** __temp1739v, void** __temp1740v, unsigned long long* __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, char* __temp1745v) {
  void* buf__unsafe_ptr=*__temp1735v;
  unsigned long long buf__unsafe_size=*__temp1736v;
  unsigned long long buf__unsafe_align=*__temp1737v;
  unsigned long long pos=*__temp1738v;
  void* f__unsafe_ptr=*__temp1739v;
  int __temp1470v__=0;
  int __temp1471v__=0;
  void* __temp1472v__=0;
  void* contents=0;
  unsigned long long __temp1473v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1474v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1475v__=0;
  void* __temp1476v__buf__unsafe_ptr=0;
  unsigned long long __temp1476v__buf__unsafe_size=0;
  unsigned long long __temp1476v__buf__unsafe_align=0;
  unsigned long long __temp1476v__dat__pos=0;
  unsigned long long __temp1476v__dat__length=0;
  char __temp1476v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp396v(buf__unsafe_ptr,&__temp1470v__);
  not__temp18v(__temp1470v__,&__temp1471v__);
  if(__temp1471v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp431v(buf__unsafe_ptr,pos,&__temp1472v__);
  contents=__temp1472v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1473v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1473v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1474v__);
  if(__temp1474v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1475v__);
  pos=__temp1475v__;
  __temp_errcode=str__temp529v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1476v__buf__unsafe_ptr,&__temp1476v__buf__unsafe_size,&__temp1476v__buf__unsafe_align,&__temp1476v__dat__pos,&__temp1476v__dat__length,&__temp1476v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1735v=buf__unsafe_ptr;
  *__temp1736v=buf__unsafe_size;
  *__temp1737v=buf__unsafe_align;
  *__temp1738v=pos;
  *__temp1739v=f__unsafe_ptr;
  *__temp1740v=__temp1476v__buf__unsafe_ptr;
  *__temp1741v=__temp1476v__buf__unsafe_size;
  *__temp1742v=__temp1476v__buf__unsafe_align;
  *__temp1743v=__temp1476v__dat__pos;
  *__temp1744v=__temp1476v__dat__length;
  *__temp1745v=__temp1476v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1746v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1746v=z;
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
  void* __temp1641v__buf__unsafe_ptr=0;
  unsigned long long __temp1641v__buf__unsafe_size=0;
  unsigned long long __temp1641v__buf__unsafe_align=0;
  unsigned long long __temp1641v__dat__pos=0;
  unsigned long long __temp1641v__dat__length=0;
  char __temp1641v__dat__first=0;
  void* __temp1642v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  unsigned long long __temp1644v=0;
  unsigned long long __temp1645v__=0;
  void* __temp1646v__unsafe_ptr=0;
  unsigned long long __temp1646v__unsafe_size=0;
  unsigned long long __temp1646v__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1648v=0;
  unsigned long long __temp1649v=0;
  unsigned long long pos=0;
  int __temp1650v=0;
  void* __temp1651v__buf__unsafe_ptr=0;
  unsigned long long __temp1651v__buf__unsafe_size=0;
  unsigned long long __temp1651v__buf__unsafe_align=0;
  unsigned long long __temp1651v__dat__pos=0;
  unsigned long long __temp1651v__dat__length=0;
  char __temp1651v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1652v=0;
  void* __temp1653v__buf__unsafe_ptr=0;
  unsigned long long __temp1653v__buf__unsafe_size=0;
  unsigned long long __temp1653v__buf__unsafe_align=0;
  unsigned long long __temp1653v__dat__pos=0;
  unsigned long long __temp1653v__dat__length=0;
  char __temp1653v__dat__first=0;
  unsigned long long __temp1751v=0;
  int __temp1752v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp535v(__temp1640v,&__temp1641v__buf__unsafe_ptr,&__temp1641v__buf__unsafe_size,&__temp1641v__buf__unsafe_align,&__temp1641v__dat__pos,&__temp1641v__dat__length,&__temp1641v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1301v(__temp1641v__buf__unsafe_ptr,__temp1641v__buf__unsafe_size,__temp1641v__buf__unsafe_align,__temp1641v__dat__pos,__temp1641v__dat__length,__temp1641v__dat__first,&__temp1642v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1642v__unsafe_ptr;
  __temp1644v=4;
  KB__temp408v(__temp1644v,&__temp1645v__);
  __temp_errcode=alloc__temp488v(__temp1645v__,&__temp1646v__unsafe_ptr,&__temp1646v__unsafe_size,&__temp1646v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1646v__unsafe_ptr;
  mem__unsafe_size=__temp1646v__unsafe_size;
  mem__unsafe_align=__temp1646v__unsafe_align;
  __temp1648v=0;
  __temp1649v=__temp1648v;
  pos=__temp1649v;
  while(1){
  __temp_complain=line__temp1468v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1651v__buf__unsafe_ptr,&__temp1651v__buf__unsafe_size,&__temp1651v__buf__unsafe_align,&__temp1651v__dat__pos,&__temp1651v__dat__length,&__temp1651v__dat__first);
  __temp1650v=__temp_complain;
  line__buf__unsafe_ptr=__temp1651v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1651v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1651v__buf__unsafe_align;
  line__dat__pos=__temp1651v__dat__pos;
  line__dat__length=__temp1651v__dat__length;
  line__dat__first=__temp1651v__dat__first;
  __temp1650v=__temp1650v==0;
  if(!__temp1650v)break;
  continue;
  }
  if(__temp1642v__unsafe_ptr)fclose((FILE*)__temp1642v__unsafe_ptr);
  __temp1642v__unsafe_ptr=0;
  __temp1652v=0;
  __temp_errcode=str__temp529v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1652v,pos,&__temp1653v__buf__unsafe_ptr,&__temp1653v__buf__unsafe_size,&__temp1653v__buf__unsafe_align,&__temp1653v__dat__pos,&__temp1653v__dat__length,&__temp1653v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp691v(__temp1653v__buf__unsafe_ptr,__temp1653v__buf__unsafe_size,__temp1653v__buf__unsafe_align,__temp1653v__dat__pos,__temp1653v__dat__length,__temp1653v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1751v=0;
  neq__temp302v(__temp1646v__unsafe_size,__temp1751v,&__temp1752v);
  if(__temp1752v){
  __temp1646v__unsafe_size=0;
  free__temp429v(&__temp1646v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1639v();return 0;}