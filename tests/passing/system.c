#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1593v="ls";
const char* const __temp573v="";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp486v(void** __temp1597v, unsigned long long* __temp1598v, unsigned long long* __temp1599v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1597v=unsafe_ptr;
  *__temp1598v=unsafe_size;
  *__temp1599v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1600v) {
  int value=0;
  *__temp1600v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1601v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1601v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1602v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1602v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1603v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1603v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1604v) {
  void* allocated=*__temp1604v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1604v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1605v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1605v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1606v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1606v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1607v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1607v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1608v, unsigned long long* __temp1609v, unsigned long long* __temp1610v, unsigned long long size, void** __temp1611v, unsigned long long* __temp1612v, unsigned long long* __temp1613v) {
  void* buffer__unsafe_ptr=*__temp1608v;
  unsigned long long buffer__unsafe_size=*__temp1609v;
  unsigned long long buffer__unsafe_align=*__temp1610v;
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
  *__temp1608v=buffer__unsafe_ptr;
  *__temp1609v=buffer__unsafe_size;
  *__temp1610v=buffer__unsafe_align;
  *__temp1611v=buffer__unsafe_ptr;
  *__temp1612v=buffer__unsafe_size;
  *__temp1613v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp485v(unsigned long long size, void** __temp1618v, unsigned long long* __temp1619v, unsigned long long* __temp1620v) {
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__unsafe_align=0;
  void* __temp489v__unsafe_ptr=0;
  unsigned long long __temp489v__unsafe_size=0;
  unsigned long long __temp489v__unsafe_align=0;
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  unsigned long long __temp1616v=0;
  int __temp1617v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp486v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align);
  __temp489v__unsafe_ptr=__temp488v__unsafe_ptr;
  __temp489v__unsafe_size=__temp488v__unsafe_size;
  __temp489v__unsafe_align=__temp488v__unsafe_align;
  __temp_errcode=alloc__temp432v(&__temp489v__unsafe_ptr,&__temp489v__unsafe_size,&__temp489v__unsafe_align,size,&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1618v=__temp490v__unsafe_ptr;
  *__temp1619v=__temp490v__unsafe_size;
  *__temp1620v=__temp490v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1621v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1621v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1622v) {
  *__temp1622v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1623v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1623v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1624v) {
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
  *__temp1624v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1625v, unsigned long long* __temp1626v, unsigned long long* __temp1627v, unsigned long long* __temp1628v, unsigned long long* __temp1629v, char* __temp1630v) {
  *__temp1625v=buf__unsafe_ptr;
  *__temp1626v=buf__unsafe_size;
  *__temp1627v=buf__unsafe_align;
  *__temp1628v=dat__pos;
  *__temp1629v=dat__length;
  *__temp1630v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp526v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1631v, unsigned long long* __temp1632v, unsigned long long* __temp1633v, unsigned long long* __temp1634v, unsigned long long* __temp1635v, char* __temp1636v) {
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
  *__temp1631v=__temp531v__buf__unsafe_ptr;
  *__temp1632v=__temp531v__buf__unsafe_size;
  *__temp1633v=__temp531v__buf__unsafe_align;
  *__temp1634v=__temp531v__dat__pos;
  *__temp1635v=__temp531v__dat__length;
  *__temp1636v=__temp531v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp532v(const char* c, void** __temp1638v, unsigned long long* __temp1639v, unsigned long long* __temp1640v, unsigned long long* __temp1641v, unsigned long long* __temp1642v, char* __temp1643v) {
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
  *__temp1638v=__temp535v__buf__unsafe_ptr;
  *__temp1639v=__temp535v__buf__unsafe_size;
  *__temp1640v=__temp535v__buf__unsafe_align;
  *__temp1641v=__temp535v__dat__pos;
  *__temp1642v=__temp535v__dat__length;
  *__temp1643v=__temp535v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp525v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1644v, unsigned long long* __temp1645v, unsigned long long* __temp1646v, unsigned long long* __temp1647v, unsigned long long* __temp1648v, char* __temp1649v) {
  *__temp1644v=other__buf__unsafe_ptr;
  *__temp1645v=other__buf__unsafe_size;
  *__temp1646v=other__buf__unsafe_align;
  *__temp1647v=other__dat__pos;
  *__temp1648v=other__dat__length;
  *__temp1649v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp536v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1650v) {
  *__temp1650v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1651v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1652v) {
  *__temp1652v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1653v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1653v=z;
}

static inline __attribute__((always_inline)) int copy__temp648v(void** __temp1656v, unsigned long long* __temp1657v, unsigned long long* __temp1658v, unsigned long long* __temp1659v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, unsigned long long* __temp1664v, char* __temp1665v) {
  void* buf__unsafe_ptr=*__temp1656v;
  unsigned long long buf__unsafe_size=*__temp1657v;
  unsigned long long buf__unsafe_align=*__temp1658v;
  unsigned long long pos=*__temp1659v;
  void* __temp649v__buf__unsafe_ptr=0;
  unsigned long long __temp649v__buf__unsafe_size=0;
  unsigned long long __temp649v__buf__unsafe_align=0;
  unsigned long long __temp649v__dat__pos=0;
  unsigned long long __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp650v__=0;
  unsigned long long __temp651v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp652v__=0;
  int __temp653v__=0;
  unsigned long long __temp654v=0;
  unsigned long long __temp655v__=0;
  unsigned long long prev_pos=0;
  void* __temp656v__buf__unsafe_ptr=0;
  unsigned long long __temp656v__buf__unsafe_size=0;
  unsigned long long __temp656v__buf__unsafe_align=0;
  unsigned long long __temp656v__dat__pos=0;
  unsigned long long __temp656v__dat__length=0;
  char __temp656v__dat__first=0;
  int __temp_errcode=0;
  str__temp525v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp649v__buf__unsafe_ptr,&__temp649v__buf__unsafe_size,&__temp649v__buf__unsafe_align,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  other__buf__unsafe_ptr=__temp649v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp649v__buf__unsafe_size;
  other__buf__unsafe_align=__temp649v__buf__unsafe_align;
  other__dat__pos=__temp649v__dat__pos;
  other__dat__length=__temp649v__dat__length;
  other__dat__first=__temp649v__dat__first;
  len__temp536v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp650v__);
  add__temp109v(pos,__temp650v__,&__temp651v__);
  next_pos=__temp651v__;
  len__temp484v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp652v__);
  gt__temp205v(next_pos,__temp652v__,&__temp653v__);
  if(__temp653v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp654v=0;
  add__temp109v(pos,__temp654v,&__temp655v__);
  prev_pos=__temp655v__;
  pos=next_pos;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp656v__buf__unsafe_ptr,&__temp656v__buf__unsafe_size,&__temp656v__buf__unsafe_align,&__temp656v__dat__pos,&__temp656v__dat__length,&__temp656v__dat__first);
  *__temp1656v=buf__unsafe_ptr;
  *__temp1657v=buf__unsafe_size;
  *__temp1658v=buf__unsafe_align;
  *__temp1659v=pos;
  *__temp1660v=__temp656v__buf__unsafe_ptr;
  *__temp1661v=__temp656v__buf__unsafe_size;
  *__temp1662v=__temp656v__buf__unsafe_align;
  *__temp1663v=__temp656v__dat__pos;
  *__temp1664v=__temp656v__dat__length;
  *__temp1665v=__temp656v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp229v(unsigned long long x, unsigned long long y, int* __temp1666v) {
  int __temp230v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp230v__);
  z=x<=y?1:0;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1667v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1667v=z;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1668v) {
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
  *__temp1668v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp538v(const char* s, char* __temp1669v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1669v=c;
}

static inline __attribute__((always_inline)) void eq__temp539v(char x, char y, int* __temp1670v) {
  int z=0;
  z=(x==y);
  *__temp1670v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp555v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v, unsigned long long* __temp1678v, char* __temp1679v) {
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
  unsigned long long __temp1672v=0;
  int __temp1673v=0;
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
  *__temp1674v=__temp562v__buf__unsafe_ptr;
  *__temp1675v=__temp562v__buf__unsafe_size;
  *__temp1676v=__temp562v__buf__unsafe_align;
  *__temp1677v=__temp562v__dat__pos;
  *__temp1678v=__temp562v__dat__length;
  *__temp1679v=__temp562v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp514v(const char* c, int* __temp1680v) {
  int z=0;
  z=c!=0;
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1681v) {
  int z=0;
  z=value?0:1;
  *__temp1681v=z;
}

int unsafe_temporary_cstr__temp563v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1686v) {
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
  unsigned long long __temp1684v=0;
  int __temp1685v=0;
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
  *__temp1686v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp377v(unsigned long long x, long long int* __temp1687v) {
  long long int z=0;
  z=x;
  *__temp1687v=z;
}

static inline __attribute__((always_inline)) void is_different__temp72v(long long int x, long long int y, int* __temp1688v) {
  int __temp73v=0;
  int __temp74v__=0;
  not__temp26v(__temp73v,&__temp74v__);
  *__temp1688v=__temp74v__;
}

static inline __attribute__((always_inline)) void neq__temp290v(long long int x, long long int y, int* __temp1689v) {
  int __temp291v__=0;
  int z=0;
  is_different__temp72v(x,y,&__temp291v__);
  z=x!=y?1:0;
  *__temp1689v=z;
}

static inline __attribute__((always_inline)) int system__temp1219v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1220v__=0;
  const char* cmd=0;
  long long int result=0;
  unsigned long long __temp1222v=0;
  long long int __temp1223v__=0;
  int __temp1224v__=0;
  int __temp1690v=0;
  int __temp1691v=0;
  unsigned long long __temp1692v=0;
  unsigned long long __temp1693v=0;
  int __temp1694v=0;
  void* __temp1695v=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp563v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1220v__;
  result=system((const char*)cmd);
  __temp1222v=0;
  int__temp377v(__temp1222v,&__temp1223v__);
  neq__temp290v(result,__temp1223v__,&__temp1224v__);
  if(__temp1224v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp514v(__temp1220v__,&__temp1690v);
  not__temp17v(__temp1690v,&__temp1691v);
  if(__temp1691v){
  __temp1692v=0;
  neq__temp301v(__temp1693v,__temp1692v,&__temp1694v);
  if(__temp1694v){
  __temp1693v=0;
  free__temp426v(&__temp1695v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1586v() {
  unsigned long long __temp1587v=0;
  void* __temp1588v__unsafe_ptr=0;
  unsigned long long __temp1588v__unsafe_size=0;
  unsigned long long __temp1588v__unsafe_align=0;
  void* __temp1590v__unsafe_ptr=0;
  unsigned long long __temp1590v__unsafe_size=0;
  unsigned long long __temp1590v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1591v=0;
  unsigned long long __temp1592v=0;
  void* __temp1594v__buf__unsafe_ptr=0;
  unsigned long long __temp1594v__buf__unsafe_size=0;
  unsigned long long __temp1594v__buf__unsafe_align=0;
  unsigned long long __temp1594v__dat__pos=0;
  unsigned long long __temp1594v__dat__length=0;
  char __temp1594v__dat__first=0;
  void* __temp1595v__buf__unsafe_ptr=0;
  unsigned long long __temp1595v__buf__unsafe_size=0;
  unsigned long long __temp1595v__buf__unsafe_align=0;
  unsigned long long __temp1595v__dat__pos=0;
  unsigned long long __temp1595v__dat__length=0;
  char __temp1595v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1697v=0;
  int __temp1698v=0;
  int __temp_errcode=0;
  __temp1587v=2;
  __temp_errcode=alloc__temp485v(__temp1587v,&__temp1588v__unsafe_ptr,&__temp1588v__unsafe_size,&__temp1588v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1590v__unsafe_ptr=__temp1588v__unsafe_ptr;
  __temp1590v__unsafe_size=__temp1588v__unsafe_size;
  __temp1590v__unsafe_align=__temp1588v__unsafe_align;
  buf__unsafe_ptr=__temp1590v__unsafe_ptr;
  buf__unsafe_size=__temp1590v__unsafe_size;
  buf__unsafe_align=__temp1590v__unsafe_align;
  __temp1591v=0;
  __temp1592v=__temp1591v;
  __temp_errcode=str__temp532v(__temp1593v,&__temp1594v__buf__unsafe_ptr,&__temp1594v__buf__unsafe_size,&__temp1594v__buf__unsafe_align,&__temp1594v__dat__pos,&__temp1594v__dat__length,&__temp1594v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp648v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1592v,__temp1594v__buf__unsafe_ptr,__temp1594v__buf__unsafe_size,__temp1594v__buf__unsafe_align,__temp1594v__dat__pos,__temp1594v__dat__length,__temp1594v__dat__first,&__temp1595v__buf__unsafe_ptr,&__temp1595v__buf__unsafe_size,&__temp1595v__buf__unsafe_align,&__temp1595v__dat__pos,&__temp1595v__dat__length,&__temp1595v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1595v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1595v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1595v__buf__unsafe_align;
  s__dat__pos=__temp1595v__dat__pos;
  s__dat__length=__temp1595v__dat__length;
  s__dat__first=__temp1595v__dat__first;
  __temp_errcode=system__temp1219v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1697v=0;
  neq__temp301v(__temp1588v__unsafe_size,__temp1697v,&__temp1698v);
  if(__temp1698v){
  __temp1588v__unsafe_size=0;
  free__temp426v(&__temp1588v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}