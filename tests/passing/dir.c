#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1587v="./std";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp589v(const char* other, const char** __temp1597v) {
  *__temp1597v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1598v) {
  int z=0;
  z=x!=0;
  *__temp1598v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1599v) {
  int z=0;
  z=value?0:1;
  *__temp1599v=z;
}

static inline __attribute__((always_inline)) int read__temp1551v(const char* _path, void** __temp1600v) {
  const char* __temp1552v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1553v__=0;
  int __temp1554v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp589v(_path,&__temp1552v__);
  path=__temp1552v__;
  unsafe_ptr=opendir(path);
  exists__temp393v(unsafe_ptr,&__temp1553v__);
  not__temp17v(__temp1553v__,&__temp1554v__);
  if(__temp1554v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  *__temp1600v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp486v(void** __temp1601v, unsigned long long* __temp1602v, unsigned long long* __temp1603v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1601v=unsafe_ptr;
  *__temp1602v=unsafe_size;
  *__temp1603v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1604v) {
  int value=0;
  *__temp1604v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1605v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1605v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1606v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1606v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1607v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1607v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1608v) {
  void* allocated=*__temp1608v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1608v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1609v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1609v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1610v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1610v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1611v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1611v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1612v, unsigned long long* __temp1613v, unsigned long long* __temp1614v, unsigned long long size, void** __temp1615v, unsigned long long* __temp1616v, unsigned long long* __temp1617v) {
  void* buffer__unsafe_ptr=*__temp1612v;
  unsigned long long buffer__unsafe_size=*__temp1613v;
  unsigned long long buffer__unsafe_align=*__temp1614v;
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
  *__temp1612v=buffer__unsafe_ptr;
  *__temp1613v=buffer__unsafe_size;
  *__temp1614v=buffer__unsafe_align;
  *__temp1615v=buffer__unsafe_ptr;
  *__temp1616v=buffer__unsafe_size;
  *__temp1617v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp485v(unsigned long long size, void** __temp1622v, unsigned long long* __temp1623v, unsigned long long* __temp1624v) {
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__unsafe_align=0;
  void* __temp489v__unsafe_ptr=0;
  unsigned long long __temp489v__unsafe_size=0;
  unsigned long long __temp489v__unsafe_align=0;
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  unsigned long long __temp1620v=0;
  int __temp1621v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp486v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align);
  __temp489v__unsafe_ptr=__temp488v__unsafe_ptr;
  __temp489v__unsafe_size=__temp488v__unsafe_size;
  __temp489v__unsafe_align=__temp488v__unsafe_align;
  __temp_errcode=alloc__temp432v(&__temp489v__unsafe_ptr,&__temp489v__unsafe_size,&__temp489v__unsafe_align,size,&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1622v=__temp490v__unsafe_ptr;
  *__temp1623v=__temp490v__unsafe_size;
  *__temp1624v=__temp490v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1561v(void** __temp1625v, const char** __temp1626v) {
  void* f__unsafe_ptr=*__temp1625v;
  int __temp1562v__=0;
  int __temp1563v__=0;
  void* de=0;
  int __temp1564v__=0;
  int __temp1565v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  exists__temp393v(f__unsafe_ptr,&__temp1562v__);
  not__temp17v(__temp1562v__,&__temp1563v__);
  if(__temp1563v__){
  __temp_errcode=41;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp393v(de,&__temp1564v__);
  not__temp17v(__temp1564v__,&__temp1565v__);
  if(__temp1565v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  *__temp1625v=f__unsafe_ptr;
  *__temp1626v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1627v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1627v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1628v) {
  *__temp1628v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1629v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1629v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1630v) {
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
  *__temp1630v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1631v, unsigned long long* __temp1632v, unsigned long long* __temp1633v, unsigned long long* __temp1634v, unsigned long long* __temp1635v, char* __temp1636v) {
  *__temp1631v=buf__unsafe_ptr;
  *__temp1632v=buf__unsafe_size;
  *__temp1633v=buf__unsafe_align;
  *__temp1634v=dat__pos;
  *__temp1635v=dat__length;
  *__temp1636v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp526v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1637v, unsigned long long* __temp1638v, unsigned long long* __temp1639v, unsigned long long* __temp1640v, unsigned long long* __temp1641v, char* __temp1642v) {
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
  *__temp1637v=__temp531v__buf__unsafe_ptr;
  *__temp1638v=__temp531v__buf__unsafe_size;
  *__temp1639v=__temp531v__buf__unsafe_align;
  *__temp1640v=__temp531v__dat__pos;
  *__temp1641v=__temp531v__dat__length;
  *__temp1642v=__temp531v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp532v(const char* c, void** __temp1644v, unsigned long long* __temp1645v, unsigned long long* __temp1646v, unsigned long long* __temp1647v, unsigned long long* __temp1648v, char* __temp1649v) {
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
  *__temp1644v=__temp535v__buf__unsafe_ptr;
  *__temp1645v=__temp535v__buf__unsafe_size;
  *__temp1646v=__temp535v__buf__unsafe_align;
  *__temp1647v=__temp535v__dat__pos;
  *__temp1648v=__temp535v__dat__length;
  *__temp1649v=__temp535v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
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

int copy__temp657v(void** __temp1656v, unsigned long long* __temp1657v, unsigned long long* __temp1658v, unsigned long long* __temp1659v, const char* _other, void** __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, unsigned long long* __temp1664v, char* __temp1665v) {
  void* buf__unsafe_ptr=*__temp1656v;
  unsigned long long buf__unsafe_size=*__temp1657v;
  unsigned long long buf__unsafe_align=*__temp1658v;
  unsigned long long pos=*__temp1659v;
  void* __temp658v__buf__unsafe_ptr=0;
  unsigned long long __temp658v__buf__unsafe_size=0;
  unsigned long long __temp658v__buf__unsafe_align=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp659v__=0;
  unsigned long long __temp660v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp661v__=0;
  int __temp662v__=0;
  unsigned long long __temp663v=0;
  unsigned long long __temp664v__=0;
  unsigned long long prev_pos=0;
  void* __temp665v__buf__unsafe_ptr=0;
  unsigned long long __temp665v__buf__unsafe_size=0;
  unsigned long long __temp665v__buf__unsafe_align=0;
  unsigned long long __temp665v__dat__pos=0;
  unsigned long long __temp665v__dat__length=0;
  char __temp665v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp532v(_other,&__temp658v__buf__unsafe_ptr,&__temp658v__buf__unsafe_size,&__temp658v__buf__unsafe_align,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp658v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp658v__buf__unsafe_size;
  other__buf__unsafe_align=__temp658v__buf__unsafe_align;
  other__dat__pos=__temp658v__dat__pos;
  other__dat__length=__temp658v__dat__length;
  other__dat__first=__temp658v__dat__first;
  len__temp536v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp659v__);
  add__temp109v(pos,__temp659v__,&__temp660v__);
  next_pos=__temp660v__;
  len__temp484v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp661v__);
  gt__temp205v(next_pos,__temp661v__,&__temp662v__);
  if(__temp662v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp663v=0;
  add__temp109v(pos,__temp663v,&__temp664v__);
  prev_pos=__temp664v__;
  pos=next_pos;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp665v__buf__unsafe_ptr,&__temp665v__buf__unsafe_size,&__temp665v__buf__unsafe_align,&__temp665v__dat__pos,&__temp665v__dat__length,&__temp665v__dat__first);
  *__temp1656v=buf__unsafe_ptr;
  *__temp1657v=buf__unsafe_size;
  *__temp1658v=buf__unsafe_align;
  *__temp1659v=pos;
  *__temp1660v=__temp665v__buf__unsafe_ptr;
  *__temp1661v=__temp665v__buf__unsafe_size;
  *__temp1662v=__temp665v__buf__unsafe_align;
  *__temp1663v=__temp665v__dat__pos;
  *__temp1664v=__temp665v__dat__length;
  *__temp1665v=__temp665v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1580v(void** __temp1666v, unsigned long long* __temp1667v, unsigned long long* __temp1668v, void** __temp1669v, void** __temp1670v, unsigned long long* __temp1671v, unsigned long long* __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v, char* __temp1675v) {
  void* buf__unsafe_ptr=*__temp1666v;
  unsigned long long buf__unsafe_size=*__temp1667v;
  unsigned long long buf__unsafe_align=*__temp1668v;
  void* f__unsafe_ptr=*__temp1669v;
  unsigned long long __temp1582v=0;
  unsigned long long __temp1583v=0;
  unsigned long long pos=0;
  const char* __temp1584v__=0;
  void* __temp1585v__buf__unsafe_ptr=0;
  unsigned long long __temp1585v__buf__unsafe_size=0;
  unsigned long long __temp1585v__buf__unsafe_align=0;
  unsigned long long __temp1585v__dat__pos=0;
  unsigned long long __temp1585v__dat__length=0;
  char __temp1585v__dat__first=0;
  int __temp_errcode=0;
  __temp1582v=0;
  __temp1583v=__temp1582v;
  pos=__temp1583v;
  __temp_errcode=unsafe_entry__temp1561v(&f__unsafe_ptr,&__temp1584v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp657v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1584v__,&__temp1585v__buf__unsafe_ptr,&__temp1585v__buf__unsafe_size,&__temp1585v__buf__unsafe_align,&__temp1585v__dat__pos,&__temp1585v__dat__length,&__temp1585v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1666v=buf__unsafe_ptr;
  *__temp1667v=buf__unsafe_size;
  *__temp1668v=buf__unsafe_align;
  *__temp1669v=f__unsafe_ptr;
  *__temp1670v=__temp1585v__buf__unsafe_ptr;
  *__temp1671v=__temp1585v__buf__unsafe_size;
  *__temp1672v=__temp1585v__buf__unsafe_align;
  *__temp1673v=__temp1585v__dat__pos;
  *__temp1674v=__temp1585v__dat__length;
  *__temp1675v=__temp1585v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
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
  void* __temp1588v__unsafe_ptr=0;
  void* __temp1590v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1591v=0;
  void* __temp1592v__unsafe_ptr=0;
  unsigned long long __temp1592v__unsafe_size=0;
  unsigned long long __temp1592v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1594v=0;
  void* __temp1595v__buf__unsafe_ptr=0;
  unsigned long long __temp1595v__buf__unsafe_size=0;
  unsigned long long __temp1595v__buf__unsafe_align=0;
  unsigned long long __temp1595v__dat__pos=0;
  unsigned long long __temp1595v__dat__length=0;
  char __temp1595v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1679v=0;
  int __temp1680v=0;
  int __temp_errcode=0;
  __temp_errcode=read__temp1551v(__temp1587v,&__temp1588v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1590v__unsafe_ptr=__temp1588v__unsafe_ptr;
  dir__unsafe_ptr=__temp1590v__unsafe_ptr;
  __temp1591v=128;
  __temp_errcode=alloc__temp485v(__temp1591v,&__temp1592v__unsafe_ptr,&__temp1592v__unsafe_size,&__temp1592v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1592v__unsafe_ptr;
  buf__unsafe_size=__temp1592v__unsafe_size;
  buf__unsafe_align=__temp1592v__unsafe_align;
  while(1){
  __temp1594v=entry__temp1580v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&dir__unsafe_ptr,&__temp1595v__buf__unsafe_ptr,&__temp1595v__buf__unsafe_size,&__temp1595v__buf__unsafe_align,&__temp1595v__dat__pos,&__temp1595v__dat__length,&__temp1595v__dat__first);
  entry__buf__unsafe_ptr=__temp1595v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1595v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1595v__buf__unsafe_align;
  entry__dat__pos=__temp1595v__dat__pos;
  entry__dat__length=__temp1595v__dat__length;
  entry__dat__first=__temp1595v__dat__first;
  __temp1594v=__temp1594v==0;
  if(!__temp1594v)break;
  __temp_errcode=print__temp688v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1679v=0;
  neq__temp301v(__temp1592v__unsafe_size,__temp1679v,&__temp1680v);
  if(__temp1680v){
  __temp1592v__unsafe_size=0;
  free__temp426v(&__temp1592v__unsafe_ptr);
  }
  if(__temp1588v__unsafe_ptr)closedir((DIR*)__temp1588v__unsafe_ptr);
  __temp1588v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}