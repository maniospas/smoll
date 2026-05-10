#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp350v="\n";
const char* const __temp575v="";
const char* const __temp1639v="README.md";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1654v, unsigned long long* __temp1655v, unsigned long long* __temp1656v) {
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
  z=x!=y;
  *__temp1660v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1661v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1661v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1662v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1663v) {
  *__temp1663v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1664v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1664v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1665v) {
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
  *__temp1665v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1666v, unsigned long long* __temp1667v, unsigned long long* __temp1668v, unsigned long long* __temp1669v, unsigned long long* __temp1670v, char* __temp1671v) {
  *__temp1666v=buf__unsafe_ptr;
  *__temp1667v=buf__unsafe_size;
  *__temp1668v=buf__unsafe_align;
  *__temp1669v=dat__pos;
  *__temp1670v=dat__length;
  *__temp1671v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, char* __temp1677v) {
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
  *__temp1672v=__temp533v__buf__unsafe_ptr;
  *__temp1673v=__temp533v__buf__unsafe_size;
  *__temp1674v=__temp533v__buf__unsafe_align;
  *__temp1675v=__temp533v__dat__pos;
  *__temp1676v=__temp533v__dat__length;
  *__temp1677v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, void** __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v, unsigned long long* __temp1682v, unsigned long long* __temp1683v, char* __temp1684v) {
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
  *__temp1679v=__temp537v__buf__unsafe_ptr;
  *__temp1680v=__temp537v__buf__unsafe_size;
  *__temp1681v=__temp537v__buf__unsafe_align;
  *__temp1682v=__temp537v__dat__pos;
  *__temp1683v=__temp537v__dat__length;
  *__temp1684v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1685v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1685v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1686v) {
  *__temp1686v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1687v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1687v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1688v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1688v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1689v) {
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
  *__temp1689v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp540v(const char* s, char* __temp1690v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1690v=c;
}

static inline __attribute__((always_inline)) void eq__temp541v(char x, char y, int* __temp1691v) {
  int z=0;
  z=(x==y);
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) void len__temp538v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1692v) {
  *__temp1692v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1693v) {
  void* allocated=*__temp1693v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1693v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1694v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1694v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1695v) {
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
  *__temp1695v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1696v, unsigned long long* __temp1697v, unsigned long long* __temp1698v, unsigned long long size, void** __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v) {
  void* buffer__unsafe_ptr=*__temp1696v;
  unsigned long long buffer__unsafe_size=*__temp1697v;
  unsigned long long buffer__unsafe_align=*__temp1698v;
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
  *__temp1696v=buffer__unsafe_ptr;
  *__temp1697v=buffer__unsafe_size;
  *__temp1698v=buffer__unsafe_align;
  *__temp1699v=buffer__unsafe_ptr;
  *__temp1700v=buffer__unsafe_size;
  *__temp1701v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1704v=0;
  int __temp1705v=0;
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
  *__temp1706v=__temp492v__unsafe_ptr;
  *__temp1707v=__temp492v__unsafe_size;
  *__temp1708v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp557v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, char* __temp1717v) {
  unsigned long long __temp558v=0;
  unsigned long long __temp559v__=0;
  unsigned long long __temp560v__=0;
  void* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__unsafe_size=0;
  unsigned long long __temp561v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp563v=0;
  void* __temp564v__buf__unsafe_ptr=0;
  unsigned long long __temp564v__buf__unsafe_size=0;
  unsigned long long __temp564v__buf__unsafe_align=0;
  unsigned long long __temp564v__dat__pos=0;
  unsigned long long __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  unsigned long long __temp1710v=0;
  int __temp1711v=0;
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
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp563v=0;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp563v,other__dat__length,other__dat__first,&__temp564v__buf__unsafe_ptr,&__temp564v__buf__unsafe_size,&__temp564v__buf__unsafe_align,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  *__temp1712v=__temp564v__buf__unsafe_ptr;
  *__temp1713v=__temp564v__buf__unsafe_size;
  *__temp1714v=__temp564v__buf__unsafe_align;
  *__temp1715v=__temp564v__dat__pos;
  *__temp1716v=__temp564v__dat__length;
  *__temp1717v=__temp564v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp516v(const char* c, int* __temp1718v) {
  int z=0;
  z=c!=0;
  *__temp1718v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1719v) {
  int z=0;
  z=value?0:1;
  *__temp1719v=z;
}

int unsafe_temporary_cstr__temp565v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1724v) {
  unsigned long long __temp566v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp567v=0;
  int __temp568v__=0;
  unsigned long long __temp569v__=0;
  int __temp570v__=0;
  unsigned long long __temp571v=0;
  unsigned long long __temp572v__=0;
  void* __temp573v__=0;
  char __temp574v__value=0;
  char __temp576v__=0;
  int __temp577v__=0;
  int __temp578v=0;
  int __temp579v=0;
  unsigned long long __temp580v__=0;
  int __temp581v__=0;
  void* __temp582v__=0;
  char __temp583v__value=0;
  char __temp584v__=0;
  int __temp585v__=0;
  int __temp586v=0;
  void* __temp587v__buf__unsafe_ptr=0;
  unsigned long long __temp587v__buf__unsafe_size=0;
  unsigned long long __temp587v__buf__unsafe_align=0;
  unsigned long long __temp587v__dat__pos=0;
  unsigned long long __temp587v__dat__length=0;
  char __temp587v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  int __temp589v__=0;
  int __temp590v__=0;
  unsigned long long __temp1722v=0;
  int __temp1723v=0;
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
  memcpy(&__temp574v__value,(char*)__temp573v__,1);
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
  memcpy(&__temp583v__value,(char*)__temp582v__,1);
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
  *__temp1724v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp398v(void* x, int* __temp1725v) {
  int z=0;
  z=x!=0;
  *__temp1725v=z;
}

static inline __attribute__((always_inline)) int read__temp1300v(void* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, void** __temp1732v) {
  const char* __temp1301v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1303v__=0;
  int __temp1304v__=0;
  int __temp1726v=0;
  int __temp1727v=0;
  unsigned long long __temp1728v=0;
  unsigned long long __temp1729v=0;
  int __temp1730v=0;
  void* __temp1731v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp565v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1301v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1301v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1303v__);
  not__temp18v(__temp1303v__,&__temp1304v__);
  if(__temp1304v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1732v=unsafe_ptr;
  
  __temp_failure:exists__temp516v(__temp1301v__,&__temp1726v);
  not__temp18v(__temp1726v,&__temp1727v);
  if(__temp1727v){
  __temp1728v=0;
  neq__temp302v(__temp1729v,__temp1728v,&__temp1730v);
  if(__temp1730v){
  __temp1729v=0;
  free__temp428v(&__temp1731v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1733v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1733v=__temp412v__;
}

static inline __attribute__((always_inline)) int line__temp1467v(void** __temp1734v, unsigned long long* __temp1735v, unsigned long long* __temp1736v, unsigned long long* __temp1737v, void** __temp1738v, void** __temp1739v, unsigned long long* __temp1740v, unsigned long long* __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v, char* __temp1744v) {
  void* buf__unsafe_ptr=*__temp1734v;
  unsigned long long buf__unsafe_size=*__temp1735v;
  unsigned long long buf__unsafe_align=*__temp1736v;
  unsigned long long pos=*__temp1737v;
  void* f__unsafe_ptr=*__temp1738v;
  int __temp1469v__=0;
  int __temp1470v__=0;
  void* __temp1471v__=0;
  void* contents=0;
  unsigned long long __temp1472v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1473v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1474v__=0;
  void* __temp1475v__buf__unsafe_ptr=0;
  unsigned long long __temp1475v__buf__unsafe_size=0;
  unsigned long long __temp1475v__buf__unsafe_align=0;
  unsigned long long __temp1475v__dat__pos=0;
  unsigned long long __temp1475v__dat__length=0;
  char __temp1475v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1469v__);
  not__temp18v(__temp1469v__,&__temp1470v__);
  if(__temp1470v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1471v__);
  contents=__temp1471v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1472v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1472v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1473v__);
  if(__temp1473v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1474v__);
  pos=__temp1474v__;
  __temp_errcode=str__temp528v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1475v__buf__unsafe_ptr,&__temp1475v__buf__unsafe_size,&__temp1475v__buf__unsafe_align,&__temp1475v__dat__pos,&__temp1475v__dat__length,&__temp1475v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1734v=buf__unsafe_ptr;
  *__temp1735v=buf__unsafe_size;
  *__temp1736v=buf__unsafe_align;
  *__temp1737v=pos;
  *__temp1738v=f__unsafe_ptr;
  *__temp1739v=__temp1475v__buf__unsafe_ptr;
  *__temp1740v=__temp1475v__buf__unsafe_size;
  *__temp1741v=__temp1475v__buf__unsafe_align;
  *__temp1742v=__temp1475v__dat__pos;
  *__temp1743v=__temp1475v__dat__length;
  *__temp1744v=__temp1475v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1745v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1745v=z;
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
  void* __temp1640v__buf__unsafe_ptr=0;
  unsigned long long __temp1640v__buf__unsafe_size=0;
  unsigned long long __temp1640v__buf__unsafe_align=0;
  unsigned long long __temp1640v__dat__pos=0;
  unsigned long long __temp1640v__dat__length=0;
  char __temp1640v__dat__first=0;
  void* __temp1641v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  unsigned long long __temp1643v=0;
  unsigned long long __temp1644v__=0;
  void* __temp1645v__unsafe_ptr=0;
  unsigned long long __temp1645v__unsafe_size=0;
  unsigned long long __temp1645v__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1647v=0;
  unsigned long long __temp1648v=0;
  unsigned long long pos=0;
  int __temp1649v=0;
  void* __temp1650v__buf__unsafe_ptr=0;
  unsigned long long __temp1650v__buf__unsafe_size=0;
  unsigned long long __temp1650v__buf__unsafe_align=0;
  unsigned long long __temp1650v__dat__pos=0;
  unsigned long long __temp1650v__dat__length=0;
  char __temp1650v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1651v=0;
  void* __temp1652v__buf__unsafe_ptr=0;
  unsigned long long __temp1652v__buf__unsafe_size=0;
  unsigned long long __temp1652v__buf__unsafe_align=0;
  unsigned long long __temp1652v__dat__pos=0;
  unsigned long long __temp1652v__dat__length=0;
  char __temp1652v__dat__first=0;
  unsigned long long __temp1750v=0;
  int __temp1751v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp534v(__temp1639v,&__temp1640v__buf__unsafe_ptr,&__temp1640v__buf__unsafe_size,&__temp1640v__buf__unsafe_align,&__temp1640v__dat__pos,&__temp1640v__dat__length,&__temp1640v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1300v(__temp1640v__buf__unsafe_ptr,__temp1640v__buf__unsafe_size,__temp1640v__buf__unsafe_align,__temp1640v__dat__pos,__temp1640v__dat__length,__temp1640v__dat__first,&__temp1641v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1641v__unsafe_ptr;
  __temp1643v=4;
  KB__temp410v(__temp1643v,&__temp1644v__);
  __temp_errcode=alloc__temp487v(__temp1644v__,&__temp1645v__unsafe_ptr,&__temp1645v__unsafe_size,&__temp1645v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1645v__unsafe_ptr;
  mem__unsafe_size=__temp1645v__unsafe_size;
  mem__unsafe_align=__temp1645v__unsafe_align;
  __temp1647v=0;
  __temp1648v=__temp1647v;
  pos=__temp1648v;
  while(1){
  __temp_complain=line__temp1467v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1650v__buf__unsafe_ptr,&__temp1650v__buf__unsafe_size,&__temp1650v__buf__unsafe_align,&__temp1650v__dat__pos,&__temp1650v__dat__length,&__temp1650v__dat__first);
  __temp1649v=__temp_complain;
  line__buf__unsafe_ptr=__temp1650v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1650v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1650v__buf__unsafe_align;
  line__dat__pos=__temp1650v__dat__pos;
  line__dat__length=__temp1650v__dat__length;
  line__dat__first=__temp1650v__dat__first;
  __temp1649v=__temp1649v==0;
  if(!__temp1649v)break;
  continue;
  }
  if(__temp1641v__unsafe_ptr)fclose((FILE*)__temp1641v__unsafe_ptr);
  __temp1641v__unsafe_ptr=0;
  __temp1651v=0;
  __temp_errcode=str__temp528v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1651v,pos,&__temp1652v__buf__unsafe_ptr,&__temp1652v__buf__unsafe_size,&__temp1652v__buf__unsafe_align,&__temp1652v__dat__pos,&__temp1652v__dat__length,&__temp1652v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp690v(__temp1652v__buf__unsafe_ptr,__temp1652v__buf__unsafe_size,__temp1652v__buf__unsafe_align,__temp1652v__dat__pos,__temp1652v__dat__length,__temp1652v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1750v=0;
  neq__temp302v(__temp1645v__unsafe_size,__temp1750v,&__temp1751v);
  if(__temp1751v){
  __temp1645v__unsafe_size=0;
  free__temp428v(&__temp1645v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1638v();return 0;}