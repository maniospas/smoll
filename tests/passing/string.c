#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[44] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp348v="\n";
const char* const __temp576v="";
const char* const __temp409v="kilobytes to bytes";
const char* const __temp1587v="README.md";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1602v, unsigned long long* __temp1603v, unsigned long long* __temp1604v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1602v=unsafe_ptr;
  *__temp1603v=unsafe_size;
  *__temp1604v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1605v) {
  int value=0;
  *__temp1605v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1606v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1606v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1607v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1607v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1608v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1608v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1609v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1609v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1610v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1610v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1611v) {
  *__temp1611v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1612v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1612v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1613v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1613v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v, unsigned long long* __temp1617v, unsigned long long* __temp1618v, char* __temp1619v) {
  *__temp1614v=buf__unsafe_ptr;
  *__temp1615v=buf__unsafe_size;
  *__temp1616v=buf__unsafe_align;
  *__temp1617v=dat__pos;
  *__temp1618v=dat__length;
  *__temp1619v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1620v, unsigned long long* __temp1621v, unsigned long long* __temp1622v, unsigned long long* __temp1623v, unsigned long long* __temp1624v, char* __temp1625v) {
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
  *__temp1620v=__temp534v__buf__unsafe_ptr;
  *__temp1621v=__temp534v__buf__unsafe_size;
  *__temp1622v=__temp534v__buf__unsafe_align;
  *__temp1623v=__temp534v__dat__pos;
  *__temp1624v=__temp534v__dat__length;
  *__temp1625v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1627v, unsigned long long* __temp1628v, unsigned long long* __temp1629v, unsigned long long* __temp1630v, unsigned long long* __temp1631v, char* __temp1632v) {
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
  *__temp1627v=__temp538v__buf__unsafe_ptr;
  *__temp1628v=__temp538v__buf__unsafe_size;
  *__temp1629v=__temp538v__buf__unsafe_align;
  *__temp1630v=__temp538v__dat__pos;
  *__temp1631v=__temp538v__dat__length;
  *__temp1632v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1633v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1633v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1634v) {
  *__temp1634v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1635v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1635v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1636v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1636v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1637v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1637v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp541v(const char* s, char* __temp1638v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1638v=c;
}

static inline __attribute__((always_inline)) void eq__temp542v(char x, char y, int* __temp1639v) {
  int z=0;
  z=(x==y);
  *__temp1639v=z;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1640v) {
  *__temp1640v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1641v) {
  void* allocated=*__temp1641v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1641v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1642v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1642v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1643v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1643v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1644v, unsigned long long* __temp1645v, unsigned long long* __temp1646v, unsigned long long size, void** __temp1647v, unsigned long long* __temp1648v, unsigned long long* __temp1649v) {
  void* buffer__unsafe_ptr=*__temp1644v;
  unsigned long long buffer__unsafe_size=*__temp1645v;
  unsigned long long buffer__unsafe_align=*__temp1646v;
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
  __temp_errcode=7;
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
  *__temp1644v=buffer__unsafe_ptr;
  *__temp1645v=buffer__unsafe_size;
  *__temp1646v=buffer__unsafe_align;
  *__temp1647v=buffer__unsafe_ptr;
  *__temp1648v=buffer__unsafe_size;
  *__temp1649v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1654v, unsigned long long* __temp1655v, unsigned long long* __temp1656v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1652v=0;
  int __temp1653v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp489v(&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align);
  __temp492v__unsafe_ptr=__temp491v__unsafe_ptr;
  __temp492v__unsafe_size=__temp491v__unsafe_size;
  __temp492v__unsafe_align=__temp491v__unsafe_align;
  __temp_errcode=alloc__temp435v(&__temp492v__unsafe_ptr,&__temp492v__unsafe_size,&__temp492v__unsafe_align,size,&__temp493v__unsafe_ptr,&__temp493v__unsafe_size,&__temp493v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1654v=__temp493v__unsafe_ptr;
  *__temp1655v=__temp493v__unsafe_size;
  *__temp1656v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp558v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, unsigned long long* __temp1664v, char* __temp1665v) {
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
  unsigned long long __temp1658v=0;
  int __temp1659v=0;
  int __temp_errcode=0;
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
  *__temp1660v=__temp565v__buf__unsafe_ptr;
  *__temp1661v=__temp565v__buf__unsafe_size;
  *__temp1662v=__temp565v__buf__unsafe_align;
  *__temp1663v=__temp565v__dat__pos;
  *__temp1664v=__temp565v__dat__length;
  *__temp1665v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp517v(const char* c, int* __temp1666v) {
  int z=0;
  z=c!=0;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1667v) {
  int z=0;
  z=value?0:1;
  *__temp1667v=z;
}

int unsafe_temporary_cstr__temp566v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1672v) {
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
  unsigned long long __temp1670v=0;
  int __temp1671v=0;
  int __temp_errcode=0;
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
  *__temp1672v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1673v) {
  int z=0;
  z=x!=0;
  *__temp1673v=z;
}

static inline __attribute__((always_inline)) int read__temp1230v(void* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, void** __temp1680v) {
  const char* __temp1231v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1233v__=0;
  int __temp1234v__=0;
  int __temp1674v=0;
  int __temp1675v=0;
  unsigned long long __temp1676v=0;
  unsigned long long __temp1677v=0;
  int __temp1678v=0;
  void* __temp1679v=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp566v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1231v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp396v(unsafe_ptr,&__temp1233v__);
  not__temp18v(__temp1233v__,&__temp1234v__);
  if(__temp1234v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  *__temp1680v=unsafe_ptr;
  
  __temp_failure:exists__temp517v(__temp1231v__,&__temp1674v);
  not__temp18v(__temp1674v,&__temp1675v);
  if(__temp1675v){
  __temp1676v=0;
  neq__temp302v(__temp1677v,__temp1676v,&__temp1678v);
  if(__temp1678v){
  __temp1677v=0;
  free__temp429v(&__temp1679v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp408v(unsigned long long x, unsigned long long* __temp1681v) {
  unsigned long long __temp410v=0;
  unsigned long long __temp411v__=0;
  __temp410v=1024;
  mul__temp134v(x,__temp410v,&__temp411v__);
  *__temp1681v=__temp411v__;
}

static inline __attribute__((always_inline)) int line__temp1397v(void** __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, void** __temp1686v, void** __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, unsigned long long* __temp1691v, char* __temp1692v) {
  void* buf__unsafe_ptr=*__temp1682v;
  unsigned long long buf__unsafe_size=*__temp1683v;
  unsigned long long buf__unsafe_align=*__temp1684v;
  unsigned long long pos=*__temp1685v;
  void* f__unsafe_ptr=*__temp1686v;
  int __temp1399v__=0;
  int __temp1400v__=0;
  void* __temp1401v__=0;
  void* contents=0;
  unsigned long long __temp1402v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1403v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1404v__=0;
  void* __temp1405v__buf__unsafe_ptr=0;
  unsigned long long __temp1405v__buf__unsafe_size=0;
  unsigned long long __temp1405v__buf__unsafe_align=0;
  unsigned long long __temp1405v__dat__pos=0;
  unsigned long long __temp1405v__dat__length=0;
  char __temp1405v__dat__first=0;
  int __temp_errcode=0;
  exists__temp396v(buf__unsafe_ptr,&__temp1399v__);
  not__temp18v(__temp1399v__,&__temp1400v__);
  if(__temp1400v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  add__temp431v(buf__unsafe_ptr,pos,&__temp1401v__);
  contents=__temp1401v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1402v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1402v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1403v__);
  if(__temp1403v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1404v__);
  pos=__temp1404v__;
  __temp_errcode=str__temp529v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1405v__buf__unsafe_ptr,&__temp1405v__buf__unsafe_size,&__temp1405v__buf__unsafe_align,&__temp1405v__dat__pos,&__temp1405v__dat__length,&__temp1405v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1682v=buf__unsafe_ptr;
  *__temp1683v=buf__unsafe_size;
  *__temp1684v=buf__unsafe_align;
  *__temp1685v=pos;
  *__temp1686v=f__unsafe_ptr;
  *__temp1687v=__temp1405v__buf__unsafe_ptr;
  *__temp1688v=__temp1405v__buf__unsafe_size;
  *__temp1689v=__temp1405v__buf__unsafe_align;
  *__temp1690v=__temp1405v__dat__pos;
  *__temp1691v=__temp1405v__dat__length;
  *__temp1692v=__temp1405v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1693v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) int print__temp691v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp693v__=0;
  int __temp694v__=0;
  int __temp_errcode=0;
  endl=__temp348v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp693v__);
  gt__temp206v(__temp693v__,s__buf__unsafe_size,&__temp694v__);
  if(__temp694v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1586v() {
  void* __temp1588v__buf__unsafe_ptr=0;
  unsigned long long __temp1588v__buf__unsafe_size=0;
  unsigned long long __temp1588v__buf__unsafe_align=0;
  unsigned long long __temp1588v__dat__pos=0;
  unsigned long long __temp1588v__dat__length=0;
  char __temp1588v__dat__first=0;
  void* __temp1589v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  unsigned long long __temp1591v=0;
  unsigned long long __temp1592v__=0;
  void* __temp1593v__unsafe_ptr=0;
  unsigned long long __temp1593v__unsafe_size=0;
  unsigned long long __temp1593v__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1595v=0;
  unsigned long long __temp1596v=0;
  unsigned long long pos=0;
  int __temp1597v=0;
  void* __temp1598v__buf__unsafe_ptr=0;
  unsigned long long __temp1598v__buf__unsafe_size=0;
  unsigned long long __temp1598v__buf__unsafe_align=0;
  unsigned long long __temp1598v__dat__pos=0;
  unsigned long long __temp1598v__dat__length=0;
  char __temp1598v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1599v=0;
  void* __temp1600v__buf__unsafe_ptr=0;
  unsigned long long __temp1600v__buf__unsafe_size=0;
  unsigned long long __temp1600v__buf__unsafe_align=0;
  unsigned long long __temp1600v__dat__pos=0;
  unsigned long long __temp1600v__dat__length=0;
  char __temp1600v__dat__first=0;
  unsigned long long __temp1698v=0;
  int __temp1699v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp535v(__temp1587v,&__temp1588v__buf__unsafe_ptr,&__temp1588v__buf__unsafe_size,&__temp1588v__buf__unsafe_align,&__temp1588v__dat__pos,&__temp1588v__dat__length,&__temp1588v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1230v(__temp1588v__buf__unsafe_ptr,__temp1588v__buf__unsafe_size,__temp1588v__buf__unsafe_align,__temp1588v__dat__pos,__temp1588v__dat__length,__temp1588v__dat__first,&__temp1589v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1589v__unsafe_ptr;
  __temp1591v=4;
  KB__temp408v(__temp1591v,&__temp1592v__);
  __temp_errcode=alloc__temp488v(__temp1592v__,&__temp1593v__unsafe_ptr,&__temp1593v__unsafe_size,&__temp1593v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1593v__unsafe_ptr;
  mem__unsafe_size=__temp1593v__unsafe_size;
  mem__unsafe_align=__temp1593v__unsafe_align;
  __temp1595v=0;
  __temp1596v=__temp1595v;
  pos=__temp1596v;
  while(1){
  __temp_complain=line__temp1397v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1598v__buf__unsafe_ptr,&__temp1598v__buf__unsafe_size,&__temp1598v__buf__unsafe_align,&__temp1598v__dat__pos,&__temp1598v__dat__length,&__temp1598v__dat__first);
  __temp1597v=__temp_complain;
  line__buf__unsafe_ptr=__temp1598v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1598v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1598v__buf__unsafe_align;
  line__dat__pos=__temp1598v__dat__pos;
  line__dat__length=__temp1598v__dat__length;
  line__dat__first=__temp1598v__dat__first;
  __temp1597v=__temp1597v==0;
  if(!__temp1597v)break;
  continue;
  }
  if(__temp1589v__unsafe_ptr)fclose((FILE*)__temp1589v__unsafe_ptr);
  __temp1589v__unsafe_ptr=0;
  __temp1599v=0;
  __temp_errcode=str__temp529v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1599v,pos,&__temp1600v__buf__unsafe_ptr,&__temp1600v__buf__unsafe_size,&__temp1600v__buf__unsafe_align,&__temp1600v__dat__pos,&__temp1600v__dat__length,&__temp1600v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp691v(__temp1600v__buf__unsafe_ptr,__temp1600v__buf__unsafe_size,__temp1600v__buf__unsafe_align,__temp1600v__dat__pos,__temp1600v__dat__length,__temp1600v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1698v=0;
  neq__temp302v(__temp1593v__unsafe_size,__temp1698v,&__temp1699v);
  if(__temp1699v){
  __temp1593v__unsafe_size=0;
  free__temp429v(&__temp1593v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}