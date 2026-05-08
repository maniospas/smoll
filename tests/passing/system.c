#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp576v="";
const char* const __temp1646v="ls";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1650v, unsigned long long* __temp1651v, unsigned long long* __temp1652v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1650v=unsafe_ptr;
  *__temp1651v=unsafe_size;
  *__temp1652v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1653v) {
  int value=0;
  *__temp1653v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1654v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1654v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1655v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1655v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1656v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1656v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1657v) {
  void* allocated=*__temp1657v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1657v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1658v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1658v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1659v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1659v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1660v) {
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
  *__temp1660v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, unsigned long long size, void** __temp1664v, unsigned long long* __temp1665v, unsigned long long* __temp1666v) {
  void* buffer__unsafe_ptr=*__temp1661v;
  unsigned long long buffer__unsafe_size=*__temp1662v;
  unsigned long long buffer__unsafe_align=*__temp1663v;
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
  *__temp1661v=buffer__unsafe_ptr;
  *__temp1662v=buffer__unsafe_size;
  *__temp1663v=buffer__unsafe_align;
  *__temp1664v=buffer__unsafe_ptr;
  *__temp1665v=buffer__unsafe_size;
  *__temp1666v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1671v, unsigned long long* __temp1672v, unsigned long long* __temp1673v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1669v=0;
  int __temp1670v=0;
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
  *__temp1671v=__temp493v__unsafe_ptr;
  *__temp1672v=__temp493v__unsafe_size;
  *__temp1673v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1674v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1674v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1675v) {
  *__temp1675v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1676v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1676v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1677v) {
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
  *__temp1677v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v, unsigned long long* __temp1682v, char* __temp1683v) {
  *__temp1678v=buf__unsafe_ptr;
  *__temp1679v=buf__unsafe_size;
  *__temp1680v=buf__unsafe_align;
  *__temp1681v=dat__pos;
  *__temp1682v=dat__length;
  *__temp1683v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, char* __temp1689v) {
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
  *__temp1684v=__temp534v__buf__unsafe_ptr;
  *__temp1685v=__temp534v__buf__unsafe_size;
  *__temp1686v=__temp534v__buf__unsafe_align;
  *__temp1687v=__temp534v__dat__pos;
  *__temp1688v=__temp534v__dat__length;
  *__temp1689v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1691v, unsigned long long* __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v, unsigned long long* __temp1695v, char* __temp1696v) {
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
  *__temp1691v=__temp538v__buf__unsafe_ptr;
  *__temp1692v=__temp538v__buf__unsafe_size;
  *__temp1693v=__temp538v__buf__unsafe_align;
  *__temp1694v=__temp538v__dat__pos;
  *__temp1695v=__temp538v__dat__length;
  *__temp1696v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp528v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1697v, unsigned long long* __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, char* __temp1702v) {
  *__temp1697v=other__buf__unsafe_ptr;
  *__temp1698v=other__buf__unsafe_size;
  *__temp1699v=other__buf__unsafe_align;
  *__temp1700v=other__dat__pos;
  *__temp1701v=other__dat__length;
  *__temp1702v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1703v) {
  *__temp1703v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1704v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1704v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1705v) {
  *__temp1705v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1706v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) int copy__temp651v(void** __temp1709v, unsigned long long* __temp1710v, unsigned long long* __temp1711v, unsigned long long* __temp1712v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, unsigned long long* __temp1717v, char* __temp1718v) {
  void* buf__unsafe_ptr=*__temp1709v;
  unsigned long long buf__unsafe_size=*__temp1710v;
  unsigned long long buf__unsafe_align=*__temp1711v;
  unsigned long long pos=*__temp1712v;
  void* __temp652v__buf__unsafe_ptr=0;
  unsigned long long __temp652v__buf__unsafe_size=0;
  unsigned long long __temp652v__buf__unsafe_align=0;
  unsigned long long __temp652v__dat__pos=0;
  unsigned long long __temp652v__dat__length=0;
  char __temp652v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp653v__=0;
  unsigned long long __temp654v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp655v__=0;
  int __temp656v__=0;
  unsigned long long __temp657v=0;
  unsigned long long __temp658v__=0;
  unsigned long long prev_pos=0;
  void* __temp659v__buf__unsafe_ptr=0;
  unsigned long long __temp659v__buf__unsafe_size=0;
  unsigned long long __temp659v__buf__unsafe_align=0;
  unsigned long long __temp659v__dat__pos=0;
  unsigned long long __temp659v__dat__length=0;
  char __temp659v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp528v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp652v__buf__unsafe_ptr,&__temp652v__buf__unsafe_size,&__temp652v__buf__unsafe_align,&__temp652v__dat__pos,&__temp652v__dat__length,&__temp652v__dat__first);
  other__buf__unsafe_ptr=__temp652v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp652v__buf__unsafe_size;
  other__buf__unsafe_align=__temp652v__buf__unsafe_align;
  other__dat__pos=__temp652v__dat__pos;
  other__dat__length=__temp652v__dat__length;
  other__dat__first=__temp652v__dat__first;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp653v__);
  add__temp110v(pos,__temp653v__,&__temp654v__);
  next_pos=__temp654v__;
  len__temp487v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp655v__);
  gt__temp206v(next_pos,__temp655v__,&__temp656v__);
  if(__temp656v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp657v=0;
  add__temp110v(pos,__temp657v,&__temp658v__);
  prev_pos=__temp658v__;
  pos=next_pos;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp659v__buf__unsafe_ptr,&__temp659v__buf__unsafe_size,&__temp659v__buf__unsafe_align,&__temp659v__dat__pos,&__temp659v__dat__length,&__temp659v__dat__first);
  *__temp1709v=buf__unsafe_ptr;
  *__temp1710v=buf__unsafe_size;
  *__temp1711v=buf__unsafe_align;
  *__temp1712v=pos;
  *__temp1713v=__temp659v__buf__unsafe_ptr;
  *__temp1714v=__temp659v__buf__unsafe_size;
  *__temp1715v=__temp659v__buf__unsafe_align;
  *__temp1716v=__temp659v__dat__pos;
  *__temp1717v=__temp659v__dat__length;
  *__temp1718v=__temp659v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1719v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1720v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1720v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1721v) {
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
  *__temp1721v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp541v(const char* s, char* __temp1722v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1722v=c;
}

static inline __attribute__((always_inline)) void eq__temp542v(char x, char y, int* __temp1723v) {
  int z=0;
  z=(x==y);
  *__temp1723v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp558v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, unsigned long long* __temp1731v, char* __temp1732v) {
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
  unsigned long long __temp1725v=0;
  int __temp1726v=0;
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
  *__temp1727v=__temp565v__buf__unsafe_ptr;
  *__temp1728v=__temp565v__buf__unsafe_size;
  *__temp1729v=__temp565v__buf__unsafe_align;
  *__temp1730v=__temp565v__dat__pos;
  *__temp1731v=__temp565v__dat__length;
  *__temp1732v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp517v(const char* c, int* __temp1733v) {
  int z=0;
  z=c!=0;
  *__temp1733v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1734v) {
  int z=0;
  z=value?0:1;
  *__temp1734v=z;
}

int unsafe_temporary_cstr__temp566v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1739v) {
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
  unsigned long long __temp1737v=0;
  int __temp1738v=0;
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
  *__temp1739v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp380v(unsigned long long x, long long int* __temp1740v) {
  long long int z=0;
  z=x;
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1741v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  *__temp1741v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, int* __temp1742v) {
  int __temp292v__=0;
  int z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y?1:0;
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) int system__temp1290v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1291v__=0;
  const char* cmd=0;
  long long int result=0;
  unsigned long long __temp1293v=0;
  long long int __temp1294v__=0;
  int __temp1295v__=0;
  int __temp1743v=0;
  int __temp1744v=0;
  unsigned long long __temp1745v=0;
  unsigned long long __temp1746v=0;
  int __temp1747v=0;
  void* __temp1748v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp566v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1291v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1291v__;
  result=system((const char*)cmd);
  __temp1293v=0;
  int__temp380v(__temp1293v,&__temp1294v__);
  neq__temp291v(result,__temp1294v__,&__temp1295v__);
  if(__temp1295v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp517v(__temp1291v__,&__temp1743v);
  not__temp18v(__temp1743v,&__temp1744v);
  if(__temp1744v){
  __temp1745v=0;
  neq__temp302v(__temp1746v,__temp1745v,&__temp1747v);
  if(__temp1747v){
  __temp1746v=0;
  free__temp429v(&__temp1748v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1639v() {
  unsigned long long __temp1640v=0;
  void* __temp1641v__unsafe_ptr=0;
  unsigned long long __temp1641v__unsafe_size=0;
  unsigned long long __temp1641v__unsafe_align=0;
  void* __temp1643v__unsafe_ptr=0;
  unsigned long long __temp1643v__unsafe_size=0;
  unsigned long long __temp1643v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1644v=0;
  unsigned long long __temp1645v=0;
  void* __temp1647v__buf__unsafe_ptr=0;
  unsigned long long __temp1647v__buf__unsafe_size=0;
  unsigned long long __temp1647v__buf__unsafe_align=0;
  unsigned long long __temp1647v__dat__pos=0;
  unsigned long long __temp1647v__dat__length=0;
  char __temp1647v__dat__first=0;
  void* __temp1648v__buf__unsafe_ptr=0;
  unsigned long long __temp1648v__buf__unsafe_size=0;
  unsigned long long __temp1648v__buf__unsafe_align=0;
  unsigned long long __temp1648v__dat__pos=0;
  unsigned long long __temp1648v__dat__length=0;
  char __temp1648v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1750v=0;
  int __temp1751v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1640v=2;
  __temp_errcode=alloc__temp488v(__temp1640v,&__temp1641v__unsafe_ptr,&__temp1641v__unsafe_size,&__temp1641v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1643v__unsafe_ptr=__temp1641v__unsafe_ptr;
  __temp1643v__unsafe_size=__temp1641v__unsafe_size;
  __temp1643v__unsafe_align=__temp1641v__unsafe_align;
  buf__unsafe_ptr=__temp1643v__unsafe_ptr;
  buf__unsafe_size=__temp1643v__unsafe_size;
  buf__unsafe_align=__temp1643v__unsafe_align;
  __temp1644v=0;
  __temp1645v=__temp1644v;
  __temp_errcode=str__temp535v(__temp1646v,&__temp1647v__buf__unsafe_ptr,&__temp1647v__buf__unsafe_size,&__temp1647v__buf__unsafe_align,&__temp1647v__dat__pos,&__temp1647v__dat__length,&__temp1647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp651v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1645v,__temp1647v__buf__unsafe_ptr,__temp1647v__buf__unsafe_size,__temp1647v__buf__unsafe_align,__temp1647v__dat__pos,__temp1647v__dat__length,__temp1647v__dat__first,&__temp1648v__buf__unsafe_ptr,&__temp1648v__buf__unsafe_size,&__temp1648v__buf__unsafe_align,&__temp1648v__dat__pos,&__temp1648v__dat__length,&__temp1648v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1648v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1648v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1648v__buf__unsafe_align;
  s__dat__pos=__temp1648v__dat__pos;
  s__dat__length=__temp1648v__dat__length;
  s__dat__first=__temp1648v__dat__first;
  __temp_errcode=system__temp1290v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1750v=0;
  neq__temp302v(__temp1641v__unsafe_size,__temp1750v,&__temp1751v);
  if(__temp1751v){
  __temp1641v__unsafe_size=0;
  free__temp429v(&__temp1641v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1639v();return 0;}