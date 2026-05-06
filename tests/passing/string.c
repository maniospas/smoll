#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp406v="kilobytes to bytes";
const char* const __temp573v="";
const char* const __temp1587v="README.md";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp486v(void** __temp1602v, unsigned long long* __temp1603v, unsigned long long* __temp1604v) {
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

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1606v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1606v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1607v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1607v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1608v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1608v=z;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1609v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1609v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1610v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1610v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1611v) {
  *__temp1611v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1612v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1612v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1613v) {
  int __temp481v__=0;
  unsigned long long __temp482v__=0;
  void* __temp483v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp482v__);
  add__temp428v(buffer__unsafe_ptr,__temp482v__,&__temp483v__);
  *__temp1613v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v, unsigned long long* __temp1617v, unsigned long long* __temp1618v, char* __temp1619v) {
  *__temp1614v=buf__unsafe_ptr;
  *__temp1615v=buf__unsafe_size;
  *__temp1616v=buf__unsafe_align;
  *__temp1617v=dat__pos;
  *__temp1618v=dat__length;
  *__temp1619v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp526v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1620v, unsigned long long* __temp1621v, unsigned long long* __temp1622v, unsigned long long* __temp1623v, unsigned long long* __temp1624v, char* __temp1625v) {
  unsigned long long __temp527v=0;
  int __temp528v__=0;
  void* __temp529v__=0;
  char __temp530v__value=0;
  char first=0;
  void* __temp531v__buf__unsafe_ptr=0;
  unsigned long long __temp531v__buf__unsafe_size=0;
  unsigned long long __temp531v__buf__unsafe_align=0;
  unsigned long long __temp531v__dat__pos=0;
  unsigned long long __temp531v__dat__length=0;
  char __temp531v__dat__first=0;
  int __temp_errcode=0;
  __temp527v=0;
  neq__temp301v(length,__temp527v,&__temp528v__);
  if(__temp528v__){
  __temp_errcode=get__temp480v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp529v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp529v__){
  goto __temp_failure;
  }
  memcpy(&__temp530v__value,(char*)__temp529v__,1);
  first=__temp530v__value;
  }
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp531v__buf__unsafe_ptr,&__temp531v__buf__unsafe_size,&__temp531v__buf__unsafe_align,&__temp531v__dat__pos,&__temp531v__dat__length,&__temp531v__dat__first);
  *__temp1620v=__temp531v__buf__unsafe_ptr;
  *__temp1621v=__temp531v__buf__unsafe_size;
  *__temp1622v=__temp531v__buf__unsafe_align;
  *__temp1623v=__temp531v__dat__pos;
  *__temp1624v=__temp531v__dat__length;
  *__temp1625v=__temp531v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp532v(const char* c, void** __temp1627v, unsigned long long* __temp1628v, unsigned long long* __temp1629v, unsigned long long* __temp1630v, unsigned long long* __temp1631v, char* __temp1632v) {
  void* __temp533v__unsafe_ptr=0;
  unsigned long long __temp533v__unsafe_size=0;
  unsigned long long __temp533v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp534v=0;
  void* __temp535v__buf__unsafe_ptr=0;
  unsigned long long __temp535v__buf__unsafe_size=0;
  unsigned long long __temp535v__buf__unsafe_align=0;
  unsigned long long __temp535v__dat__pos=0;
  unsigned long long __temp535v__dat__length=0;
  char __temp535v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp486v(&__temp533v__unsafe_ptr,&__temp533v__unsafe_size,&__temp533v__unsafe_align);
  buf__unsafe_ptr=__temp533v__unsafe_ptr;
  buf__unsafe_size=__temp533v__unsafe_size;
  buf__unsafe_align=__temp533v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp534v=0;
  __temp_errcode=str__temp526v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp534v,length,&__temp535v__buf__unsafe_ptr,&__temp535v__buf__unsafe_size,&__temp535v__buf__unsafe_align,&__temp535v__dat__pos,&__temp535v__dat__length,&__temp535v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1627v=__temp535v__buf__unsafe_ptr;
  *__temp1628v=__temp535v__buf__unsafe_size;
  *__temp1629v=__temp535v__buf__unsafe_align;
  *__temp1630v=__temp535v__dat__pos;
  *__temp1631v=__temp535v__dat__length;
  *__temp1632v=__temp535v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1633v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1633v=z;
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1634v) {
  *__temp1634v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp229v(unsigned long long x, unsigned long long y, int* __temp1635v) {
  int __temp230v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp230v__);
  z=x<=y?1:0;
  *__temp1635v=z;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1636v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1636v=z;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1637v) {
  int __temp330v__=0;
  int __temp333v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp84v(x,y,&__temp330v__);
  lt__temp181v(x,y,&__temp333v__);
  if(__temp333v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1637v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp538v(const char* s, char* __temp1638v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1638v=c;
}

static inline __attribute__((always_inline)) void eq__temp539v(char x, char y, int* __temp1639v) {
  int z=0;
  z=(x==y);
  *__temp1639v=z;
}

static inline __attribute__((always_inline)) void len__temp536v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1640v) {
  *__temp1640v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1641v) {
  void* allocated=*__temp1641v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1641v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1642v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1642v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1643v) {
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

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1644v, unsigned long long* __temp1645v, unsigned long long* __temp1646v, unsigned long long size, void** __temp1647v, unsigned long long* __temp1648v, unsigned long long* __temp1649v) {
  void* buffer__unsafe_ptr=*__temp1644v;
  unsigned long long buffer__unsafe_size=*__temp1645v;
  unsigned long long buffer__unsafe_align=*__temp1646v;
  unsigned long long __temp433v=0;
  int __temp434v__=0;
  int __temp437v__=0;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  unsigned long long __temp440v=0;
  unsigned long long __temp441v__=0;
  unsigned long long __temp443v=0;
  int __temp444v__=0;
  unsigned long long __temp445v__=0;
  unsigned long long bytes=0;
  void* __temp446v__=0;
  unsigned long long __temp447v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp437v__);
  if(__temp437v__){
  __temp438v=0;
  neq__temp301v(size,__temp438v,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp441v__);
  zero__temp427v(buffer__unsafe_ptr,__temp440v,__temp441v__);
  }
  goto __temp_return;
  }
  __temp443v=0;
  neq__temp301v(buffer__unsafe_size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp445v__);
  bytes=__temp445v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp423v(bytes,&__temp446v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp446v__;
  __temp447v=0;
  zero__temp427v(buffer__unsafe_ptr,__temp447v,bytes);
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

static inline __attribute__((always_inline)) int alloc__temp485v(unsigned long long size, void** __temp1654v, unsigned long long* __temp1655v, unsigned long long* __temp1656v) {
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__unsafe_align=0;
  void* __temp489v__unsafe_ptr=0;
  unsigned long long __temp489v__unsafe_size=0;
  unsigned long long __temp489v__unsafe_align=0;
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  unsigned long long __temp1652v=0;
  int __temp1653v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp486v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align);
  __temp489v__unsafe_ptr=__temp488v__unsafe_ptr;
  __temp489v__unsafe_size=__temp488v__unsafe_size;
  __temp489v__unsafe_align=__temp488v__unsafe_align;
  __temp_errcode=alloc__temp432v(&__temp489v__unsafe_ptr,&__temp489v__unsafe_size,&__temp489v__unsafe_align,size,&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1654v=__temp490v__unsafe_ptr;
  *__temp1655v=__temp490v__unsafe_size;
  *__temp1656v=__temp490v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp555v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, unsigned long long* __temp1664v, char* __temp1665v) {
  unsigned long long __temp556v=0;
  unsigned long long __temp557v__=0;
  unsigned long long __temp558v__=0;
  void* __temp559v__unsafe_ptr=0;
  unsigned long long __temp559v__unsafe_size=0;
  unsigned long long __temp559v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp561v=0;
  void* __temp562v__buf__unsafe_ptr=0;
  unsigned long long __temp562v__buf__unsafe_size=0;
  unsigned long long __temp562v__buf__unsafe_align=0;
  unsigned long long __temp562v__dat__pos=0;
  unsigned long long __temp562v__dat__length=0;
  char __temp562v__dat__first=0;
  unsigned long long __temp1658v=0;
  int __temp1659v=0;
  int __temp_errcode=0;
  __temp556v=1;
  len__temp536v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp557v__);
  add__temp109v(__temp556v,__temp557v__,&__temp558v__);
  __temp_errcode=alloc__temp485v(__temp558v__,&__temp559v__unsafe_ptr,&__temp559v__unsafe_size,&__temp559v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp559v__unsafe_ptr;
  buf__unsafe_size=__temp559v__unsafe_size;
  buf__unsafe_align=__temp559v__unsafe_align;
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp561v=0;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp561v,other__dat__length,other__dat__first,&__temp562v__buf__unsafe_ptr,&__temp562v__buf__unsafe_size,&__temp562v__buf__unsafe_align,&__temp562v__dat__pos,&__temp562v__dat__length,&__temp562v__dat__first);
  *__temp1660v=__temp562v__buf__unsafe_ptr;
  *__temp1661v=__temp562v__buf__unsafe_size;
  *__temp1662v=__temp562v__buf__unsafe_align;
  *__temp1663v=__temp562v__dat__pos;
  *__temp1664v=__temp562v__dat__length;
  *__temp1665v=__temp562v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp514v(const char* c, int* __temp1666v) {
  int z=0;
  z=c!=0;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1667v) {
  int z=0;
  z=value?0:1;
  *__temp1667v=z;
}

int unsafe_temporary_cstr__temp563v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1672v) {
  unsigned long long __temp564v__=0;
  unsigned long long end_pos=0;
  unsigned long long __temp565v=0;
  int __temp566v__=0;
  unsigned long long __temp567v__=0;
  int __temp568v__=0;
  unsigned long long __temp569v=0;
  unsigned long long __temp570v__=0;
  void* __temp571v__=0;
  char __temp572v__value=0;
  char __temp574v__=0;
  int __temp575v__=0;
  int __temp576v=0;
  int __temp577v=0;
  unsigned long long __temp578v__=0;
  int __temp579v__=0;
  void* __temp580v__=0;
  char __temp581v__value=0;
  char __temp582v__=0;
  int __temp583v__=0;
  int __temp584v=0;
  void* __temp585v__buf__unsafe_ptr=0;
  unsigned long long __temp585v__buf__unsafe_size=0;
  unsigned long long __temp585v__buf__unsafe_align=0;
  unsigned long long __temp585v__dat__pos=0;
  unsigned long long __temp585v__dat__length=0;
  char __temp585v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  int __temp587v__=0;
  int __temp588v__=0;
  unsigned long long __temp1670v=0;
  int __temp1671v=0;
  int __temp_errcode=0;
  add__temp109v(other__dat__pos,other__dat__length,&__temp564v__);
  end_pos=__temp564v__;
  __temp565v=0;
  neq__temp301v(end_pos,__temp565v,&__temp566v__);
  if(__temp566v__){
  len__temp484v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp567v__);
  le__temp229v(end_pos,__temp567v__,&__temp568v__);
  if(__temp568v__){
  __temp569v=1;
  __temp_errcode=sub__temp329v(end_pos,__temp569v,&__temp570v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp480v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp570v__,&__temp571v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp571v__){
  goto __temp_failure;
  }
  memcpy(&__temp572v__value,(char*)__temp571v__,1);
  char__temp538v(__temp573v,&__temp574v__);
  eq__temp539v(__temp572v__value,__temp574v__,&__temp575v__);
  __temp576v=__temp575v__;
  }
  __temp577v=__temp576v;
  }
  if(__temp577v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  len__temp484v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp578v__);
  lt__temp181v(end_pos,__temp578v__,&__temp579v__);
  if(__temp579v__){
  __temp_errcode=get__temp480v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,end_pos,&__temp580v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp580v__){
  goto __temp_failure;
  }
  memcpy(&__temp581v__value,(char*)__temp580v__,1);
  char__temp538v(__temp573v,&__temp582v__);
  eq__temp539v(__temp581v__value,__temp582v__,&__temp583v__);
  __temp584v=__temp583v__;
  }
  if(__temp584v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp555v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp585v__buf__unsafe_ptr,&__temp585v__buf__unsafe_size,&__temp585v__buf__unsafe_align,&__temp585v__dat__pos,&__temp585v__dat__length,&__temp585v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp585v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp585v__buf__unsafe_size;
  c__buf__unsafe_align=__temp585v__buf__unsafe_align;
  c__dat__pos=__temp585v__dat__pos;
  c__dat__length=__temp585v__dat__length;
  c__dat__first=__temp585v__dat__first;
  }
  }
  ret=((char*)c__buf__unsafe_ptr)+c__dat__pos;
  *__temp1672v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1673v) {
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
  __temp_errcode=unsafe_temporary_cstr__temp563v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1231v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp393v(unsafe_ptr,&__temp1233v__);
  not__temp17v(__temp1233v__,&__temp1234v__);
  if(__temp1234v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  *__temp1680v=unsafe_ptr;
  
  __temp_failure:exists__temp514v(__temp1231v__,&__temp1674v);
  not__temp17v(__temp1674v,&__temp1675v);
  if(__temp1675v){
  __temp1676v=0;
  neq__temp301v(__temp1677v,__temp1676v,&__temp1678v);
  if(__temp1678v){
  __temp1677v=0;
  free__temp426v(&__temp1679v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp405v(unsigned long long x, unsigned long long* __temp1681v) {
  unsigned long long __temp407v=0;
  unsigned long long __temp408v__=0;
  __temp407v=1024;
  mul__temp133v(x,__temp407v,&__temp408v__);
  *__temp1681v=__temp408v__;
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
  exists__temp393v(buf__unsafe_ptr,&__temp1399v__);
  not__temp17v(__temp1399v__,&__temp1400v__);
  if(__temp1400v__){
  __temp_errcode=36;
  goto __temp_failure;
  }
  add__temp428v(buf__unsafe_ptr,pos,&__temp1401v__);
  contents=__temp1401v__;
  __temp_errcode=sub__temp329v(buf__unsafe_size,pos,&__temp1402v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1402v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp17v(success,&__temp1403v__);
  if(__temp1403v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp109v(pos,bytes_read,&__temp1404v__);
  pos=__temp1404v__;
  __temp_errcode=str__temp526v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1405v__buf__unsafe_ptr,&__temp1405v__buf__unsafe_size,&__temp1405v__buf__unsafe_align,&__temp1405v__dat__pos,&__temp1405v__dat__length,&__temp1405v__dat__first);
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

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1693v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) int print__temp688v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp690v__=0;
  int __temp691v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp690v__);
  gt__temp205v(__temp690v__,s__buf__unsafe_size,&__temp691v__);
  if(__temp691v__){
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
  __temp_errcode=str__temp532v(__temp1587v,&__temp1588v__buf__unsafe_ptr,&__temp1588v__buf__unsafe_size,&__temp1588v__buf__unsafe_align,&__temp1588v__dat__pos,&__temp1588v__dat__length,&__temp1588v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1230v(__temp1588v__buf__unsafe_ptr,__temp1588v__buf__unsafe_size,__temp1588v__buf__unsafe_align,__temp1588v__dat__pos,__temp1588v__dat__length,__temp1588v__dat__first,&__temp1589v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1589v__unsafe_ptr;
  __temp1591v=4;
  KB__temp405v(__temp1591v,&__temp1592v__);
  __temp_errcode=alloc__temp485v(__temp1592v__,&__temp1593v__unsafe_ptr,&__temp1593v__unsafe_size,&__temp1593v__unsafe_align);
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
  __temp1597v=line__temp1397v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1598v__buf__unsafe_ptr,&__temp1598v__buf__unsafe_size,&__temp1598v__buf__unsafe_align,&__temp1598v__dat__pos,&__temp1598v__dat__length,&__temp1598v__dat__first);
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
  __temp_errcode=str__temp526v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1599v,pos,&__temp1600v__buf__unsafe_ptr,&__temp1600v__buf__unsafe_size,&__temp1600v__buf__unsafe_align,&__temp1600v__dat__pos,&__temp1600v__dat__length,&__temp1600v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp688v(__temp1600v__buf__unsafe_ptr,__temp1600v__buf__unsafe_size,__temp1600v__buf__unsafe_align,__temp1600v__dat__pos,__temp1600v__dat__length,__temp1600v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1698v=0;
  neq__temp301v(__temp1593v__unsafe_size,__temp1698v,&__temp1699v);
  if(__temp1699v){
  __temp1593v__unsafe_size=0;
  free__temp426v(&__temp1593v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}