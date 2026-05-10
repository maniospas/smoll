#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp1645v="ls";
const char* const __temp575v="";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1649v, unsigned long long* __temp1650v, unsigned long long* __temp1651v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1649v=unsafe_ptr;
  *__temp1650v=unsafe_size;
  *__temp1651v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1652v) {
  int value=0;
  *__temp1652v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1653v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1653v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1654v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1654v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1655v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1655v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1656v) {
  void* allocated=*__temp1656v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1656v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1657v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1657v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1658v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1658v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1659v) {
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
  *__temp1659v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v, unsigned long long size, void** __temp1663v, unsigned long long* __temp1664v, unsigned long long* __temp1665v) {
  void* buffer__unsafe_ptr=*__temp1660v;
  unsigned long long buffer__unsafe_size=*__temp1661v;
  unsigned long long buffer__unsafe_align=*__temp1662v;
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
  *__temp1660v=buffer__unsafe_ptr;
  *__temp1661v=buffer__unsafe_size;
  *__temp1662v=buffer__unsafe_align;
  *__temp1663v=buffer__unsafe_ptr;
  *__temp1664v=buffer__unsafe_size;
  *__temp1665v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1670v, unsigned long long* __temp1671v, unsigned long long* __temp1672v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1668v=0;
  int __temp1669v=0;
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
  *__temp1670v=__temp492v__unsafe_ptr;
  *__temp1671v=__temp492v__unsafe_size;
  *__temp1672v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1673v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1673v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1674v) {
  *__temp1674v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1675v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1675v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1676v) {
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
  *__temp1676v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1677v, unsigned long long* __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v, char* __temp1682v) {
  *__temp1677v=buf__unsafe_ptr;
  *__temp1678v=buf__unsafe_size;
  *__temp1679v=buf__unsafe_align;
  *__temp1680v=dat__pos;
  *__temp1681v=dat__length;
  *__temp1682v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long* __temp1687v, char* __temp1688v) {
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
  *__temp1683v=__temp533v__buf__unsafe_ptr;
  *__temp1684v=__temp533v__buf__unsafe_size;
  *__temp1685v=__temp533v__buf__unsafe_align;
  *__temp1686v=__temp533v__dat__pos;
  *__temp1687v=__temp533v__dat__length;
  *__temp1688v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, void** __temp1690v, unsigned long long* __temp1691v, unsigned long long* __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v, char* __temp1695v) {
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
  *__temp1690v=__temp537v__buf__unsafe_ptr;
  *__temp1691v=__temp537v__buf__unsafe_size;
  *__temp1692v=__temp537v__buf__unsafe_align;
  *__temp1693v=__temp537v__dat__pos;
  *__temp1694v=__temp537v__dat__length;
  *__temp1695v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp527v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1696v, unsigned long long* __temp1697v, unsigned long long* __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, char* __temp1701v) {
  *__temp1696v=other__buf__unsafe_ptr;
  *__temp1697v=other__buf__unsafe_size;
  *__temp1698v=other__buf__unsafe_align;
  *__temp1699v=other__dat__pos;
  *__temp1700v=other__dat__length;
  *__temp1701v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp538v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1702v) {
  *__temp1702v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1703v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1703v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1704v) {
  *__temp1704v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1705v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1705v=z;
}

static inline __attribute__((always_inline)) int copy__temp650v(void** __temp1708v, unsigned long long* __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, char* __temp1717v) {
  void* buf__unsafe_ptr=*__temp1708v;
  unsigned long long buf__unsafe_size=*__temp1709v;
  unsigned long long buf__unsafe_align=*__temp1710v;
  unsigned long long pos=*__temp1711v;
  void* __temp651v__buf__unsafe_ptr=0;
  unsigned long long __temp651v__buf__unsafe_size=0;
  unsigned long long __temp651v__buf__unsafe_align=0;
  unsigned long long __temp651v__dat__pos=0;
  unsigned long long __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp652v__=0;
  unsigned long long __temp653v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp654v__=0;
  int __temp655v__=0;
  unsigned long long __temp656v=0;
  unsigned long long __temp657v__=0;
  unsigned long long prev_pos=0;
  void* __temp658v__buf__unsafe_ptr=0;
  unsigned long long __temp658v__buf__unsafe_size=0;
  unsigned long long __temp658v__buf__unsafe_align=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp651v__buf__unsafe_ptr,&__temp651v__buf__unsafe_size,&__temp651v__buf__unsafe_align,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
  other__buf__unsafe_ptr=__temp651v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp651v__buf__unsafe_size;
  other__buf__unsafe_align=__temp651v__buf__unsafe_align;
  other__dat__pos=__temp651v__dat__pos;
  other__dat__length=__temp651v__dat__length;
  other__dat__first=__temp651v__dat__first;
  len__temp538v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp652v__);
  add__temp110v(pos,__temp652v__,&__temp653v__);
  next_pos=__temp653v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp654v__);
  gt__temp206v(next_pos,__temp654v__,&__temp655v__);
  if(__temp655v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp656v=0;
  add__temp110v(pos,__temp656v,&__temp657v__);
  prev_pos=__temp657v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp658v__buf__unsafe_ptr,&__temp658v__buf__unsafe_size,&__temp658v__buf__unsafe_align,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  *__temp1708v=buf__unsafe_ptr;
  *__temp1709v=buf__unsafe_size;
  *__temp1710v=buf__unsafe_align;
  *__temp1711v=pos;
  *__temp1712v=__temp658v__buf__unsafe_ptr;
  *__temp1713v=__temp658v__buf__unsafe_size;
  *__temp1714v=__temp658v__buf__unsafe_align;
  *__temp1715v=__temp658v__dat__pos;
  *__temp1716v=__temp658v__dat__length;
  *__temp1717v=__temp658v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1718v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1718v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1719v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1720v) {
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
  *__temp1720v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp540v(const char* s, char* __temp1721v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1721v=c;
}

static inline __attribute__((always_inline)) void eq__temp541v(char x, char y, int* __temp1722v) {
  int z=0;
  z=(x==y);
  *__temp1722v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp557v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, char* __temp1731v) {
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
  unsigned long long __temp1724v=0;
  int __temp1725v=0;
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
  *__temp1726v=__temp564v__buf__unsafe_ptr;
  *__temp1727v=__temp564v__buf__unsafe_size;
  *__temp1728v=__temp564v__buf__unsafe_align;
  *__temp1729v=__temp564v__dat__pos;
  *__temp1730v=__temp564v__dat__length;
  *__temp1731v=__temp564v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp516v(const char* c, int* __temp1732v) {
  int z=0;
  z=c!=0;
  *__temp1732v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1733v) {
  int z=0;
  z=value?0:1;
  *__temp1733v=z;
}

int unsafe_temporary_cstr__temp565v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1738v) {
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
  unsigned long long __temp1736v=0;
  int __temp1737v=0;
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
  *__temp1738v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1739v) {
  long long int z=0;
  z=x;
  *__temp1739v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1740v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1740v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, int* __temp1741v) {
  int __temp292v__=0;
  int z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  *__temp1741v=z;
}

static inline __attribute__((always_inline)) int system__temp1289v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1290v__=0;
  const char* cmd=0;
  long long int result=0;
  unsigned long long __temp1292v=0;
  long long int __temp1293v__=0;
  int __temp1294v__=0;
  int __temp1742v=0;
  int __temp1743v=0;
  unsigned long long __temp1744v=0;
  unsigned long long __temp1745v=0;
  int __temp1746v=0;
  void* __temp1747v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp565v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1290v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1290v__;
  result=system((const char*)cmd);
  __temp1292v=0;
  int__temp382v(__temp1292v,&__temp1293v__);
  neq__temp291v(result,__temp1293v__,&__temp1294v__);
  if(__temp1294v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp516v(__temp1290v__,&__temp1742v);
  not__temp18v(__temp1742v,&__temp1743v);
  if(__temp1743v){
  __temp1744v=0;
  neq__temp302v(__temp1745v,__temp1744v,&__temp1746v);
  if(__temp1746v){
  __temp1745v=0;
  free__temp428v(&__temp1747v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1638v() {
  unsigned long long __temp1639v=0;
  void* __temp1640v__unsafe_ptr=0;
  unsigned long long __temp1640v__unsafe_size=0;
  unsigned long long __temp1640v__unsafe_align=0;
  void* __temp1642v__unsafe_ptr=0;
  unsigned long long __temp1642v__unsafe_size=0;
  unsigned long long __temp1642v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1643v=0;
  unsigned long long __temp1644v=0;
  void* __temp1646v__buf__unsafe_ptr=0;
  unsigned long long __temp1646v__buf__unsafe_size=0;
  unsigned long long __temp1646v__buf__unsafe_align=0;
  unsigned long long __temp1646v__dat__pos=0;
  unsigned long long __temp1646v__dat__length=0;
  char __temp1646v__dat__first=0;
  void* __temp1647v__buf__unsafe_ptr=0;
  unsigned long long __temp1647v__buf__unsafe_size=0;
  unsigned long long __temp1647v__buf__unsafe_align=0;
  unsigned long long __temp1647v__dat__pos=0;
  unsigned long long __temp1647v__dat__length=0;
  char __temp1647v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1749v=0;
  int __temp1750v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1639v=2;
  __temp_errcode=alloc__temp487v(__temp1639v,&__temp1640v__unsafe_ptr,&__temp1640v__unsafe_size,&__temp1640v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1642v__unsafe_ptr=__temp1640v__unsafe_ptr;
  __temp1642v__unsafe_size=__temp1640v__unsafe_size;
  __temp1642v__unsafe_align=__temp1640v__unsafe_align;
  buf__unsafe_ptr=__temp1642v__unsafe_ptr;
  buf__unsafe_size=__temp1642v__unsafe_size;
  buf__unsafe_align=__temp1642v__unsafe_align;
  __temp1643v=0;
  __temp1644v=__temp1643v;
  __temp_errcode=str__temp534v(__temp1645v,&__temp1646v__buf__unsafe_ptr,&__temp1646v__buf__unsafe_size,&__temp1646v__buf__unsafe_align,&__temp1646v__dat__pos,&__temp1646v__dat__length,&__temp1646v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp650v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1644v,__temp1646v__buf__unsafe_ptr,__temp1646v__buf__unsafe_size,__temp1646v__buf__unsafe_align,__temp1646v__dat__pos,__temp1646v__dat__length,__temp1646v__dat__first,&__temp1647v__buf__unsafe_ptr,&__temp1647v__buf__unsafe_size,&__temp1647v__buf__unsafe_align,&__temp1647v__dat__pos,&__temp1647v__dat__length,&__temp1647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1647v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1647v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1647v__buf__unsafe_align;
  s__dat__pos=__temp1647v__dat__pos;
  s__dat__length=__temp1647v__dat__length;
  s__dat__first=__temp1647v__dat__first;
  __temp_errcode=system__temp1289v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1749v=0;
  neq__temp302v(__temp1640v__unsafe_size,__temp1749v,&__temp1750v);
  if(__temp1750v){
  __temp1640v__unsafe_size=0;
  free__temp428v(&__temp1640v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1638v();return 0;}