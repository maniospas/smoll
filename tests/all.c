#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp578v="";
const char* const __temp1099v="process terminated with unhandled non-zero exit code";
const char* const __temp345v="\n";
const char* const __temp406v="kilobytes to bytes";
const char* const __temp1570v=".s";
const char* const __temp1562v="./smoll ";
const char* const __temp1556v="./tests/passing/";

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1578v) {
  int value=0;
  *__temp1578v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1579v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1579v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1580v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1580v=__temp86v__;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1581v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1581v=z;
}

static inline __attribute__((always_inline)) void KB__temp405v(unsigned long long x, unsigned long long* __temp1582v) {
  unsigned long long __temp407v=0;
  unsigned long long __temp408v__=0;
  __temp407v=1024;
  mul__temp133v(x,__temp407v,&__temp408v__);
  *__temp1582v=__temp408v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp492v(void** __temp1583v, unsigned long long* __temp1584v, unsigned long long* __temp1585v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1583v=unsafe_ptr;
  *__temp1584v=unsafe_size;
  *__temp1585v=unsafe_align;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1586v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1586v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1587v) {
  void* allocated=*__temp1587v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1587v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1588v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1588v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1589v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1589v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1590v, unsigned long long* __temp1591v, unsigned long long* __temp1592v, unsigned long long size, void** __temp1593v, unsigned long long* __temp1594v, unsigned long long* __temp1595v) {
  void* buffer__unsafe_ptr=*__temp1590v;
  unsigned long long buffer__unsafe_size=*__temp1591v;
  unsigned long long buffer__unsafe_align=*__temp1592v;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  int __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  int __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  void* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp301v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp427v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp301v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp423v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp427v(buffer__unsafe_ptr,__temp452v,bytes);
  __temp_return:
  *__temp1590v=buffer__unsafe_ptr;
  *__temp1591v=buffer__unsafe_size;
  *__temp1592v=buffer__unsafe_align;
  *__temp1593v=buffer__unsafe_ptr;
  *__temp1594v=buffer__unsafe_size;
  *__temp1595v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp491v(unsigned long long size, void** __temp1600v, unsigned long long* __temp1601v, unsigned long long* __temp1602v) {
  void* __temp494v__unsafe_ptr=0;
  unsigned long long __temp494v__unsafe_size=0;
  unsigned long long __temp494v__unsafe_align=0;
  void* __temp495v__unsafe_ptr=0;
  unsigned long long __temp495v__unsafe_size=0;
  unsigned long long __temp495v__unsafe_align=0;
  void* __temp496v__unsafe_ptr=0;
  unsigned long long __temp496v__unsafe_size=0;
  unsigned long long __temp496v__unsafe_align=0;
  unsigned long long __temp1598v=0;
  int __temp1599v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp492v(&__temp494v__unsafe_ptr,&__temp494v__unsafe_size,&__temp494v__unsafe_align);
  __temp495v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp495v__unsafe_size=__temp494v__unsafe_size;
  __temp495v__unsafe_align=__temp494v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp495v__unsafe_ptr,&__temp495v__unsafe_size,&__temp495v__unsafe_align,size,&__temp496v__unsafe_ptr,&__temp496v__unsafe_size,&__temp496v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1600v=__temp496v__unsafe_ptr;
  *__temp1601v=__temp496v__unsafe_size;
  *__temp1602v=__temp496v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp587v(void** __temp1603v, unsigned long long* __temp1604v, unsigned long long* __temp1605v, void** __temp1606v, unsigned long long* __temp1607v, unsigned long long* __temp1608v, unsigned long long* __temp1609v) {
  void* buf__unsafe_ptr=*__temp1603v;
  unsigned long long buf__unsafe_size=*__temp1604v;
  unsigned long long buf__unsafe_align=*__temp1605v;
  unsigned long long __temp588v=0;
  unsigned long long __temp589v=0;
  unsigned long long pos=0;
  __temp588v=0;
  __temp589v=__temp588v;
  pos=__temp589v;
  *__temp1603v=buf__unsafe_ptr;
  *__temp1604v=buf__unsafe_size;
  *__temp1605v=buf__unsafe_align;
  *__temp1606v=buf__unsafe_ptr;
  *__temp1607v=buf__unsafe_size;
  *__temp1608v=buf__unsafe_align;
  *__temp1609v=pos;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1610v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
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

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1613v) {
  int __temp487v__=0;
  unsigned long long __temp488v__=0;
  void* __temp489v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp488v__);
  add__temp428v(buffer__unsafe_ptr,__temp488v__,&__temp489v__);
  *__temp1613v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp523v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v, unsigned long long* __temp1617v, unsigned long long* __temp1618v, char* __temp1619v) {
  *__temp1614v=buf__unsafe_ptr;
  *__temp1615v=buf__unsafe_size;
  *__temp1616v=buf__unsafe_align;
  *__temp1617v=dat__pos;
  *__temp1618v=dat__length;
  *__temp1619v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp533v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1620v, unsigned long long* __temp1621v, unsigned long long* __temp1622v, unsigned long long* __temp1623v, unsigned long long* __temp1624v, char* __temp1625v) {
  unsigned long long __temp534v=0;
  int __temp535v__=0;
  void* __temp536v__=0;
  char __temp537v__value=0;
  char first=0;
  void* __temp538v__buf__unsafe_ptr=0;
  unsigned long long __temp538v__buf__unsafe_size=0;
  unsigned long long __temp538v__buf__unsafe_align=0;
  unsigned long long __temp538v__dat__pos=0;
  unsigned long long __temp538v__dat__length=0;
  char __temp538v__dat__first=0;
  int __temp_errcode=0;
  __temp534v=0;
  neq__temp301v(length,__temp534v,&__temp535v__);
  if(__temp535v__){
  __temp_errcode=get__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp536v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp536v__){
  goto __temp_failure;
  }
  memcpy(&__temp537v__value,(char*)__temp536v__,1);
  first=__temp537v__value;
  }
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp538v__buf__unsafe_ptr,&__temp538v__buf__unsafe_size,&__temp538v__buf__unsafe_align,&__temp538v__dat__pos,&__temp538v__dat__length,&__temp538v__dat__first);
  *__temp1620v=__temp538v__buf__unsafe_ptr;
  *__temp1621v=__temp538v__buf__unsafe_size;
  *__temp1622v=__temp538v__buf__unsafe_align;
  *__temp1623v=__temp538v__dat__pos;
  *__temp1624v=__temp538v__dat__length;
  *__temp1625v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp539v(const char* c, void** __temp1627v, unsigned long long* __temp1628v, unsigned long long* __temp1629v, unsigned long long* __temp1630v, unsigned long long* __temp1631v, char* __temp1632v) {
  void* __temp540v__unsafe_ptr=0;
  unsigned long long __temp540v__unsafe_size=0;
  unsigned long long __temp540v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp541v=0;
  void* __temp542v__buf__unsafe_ptr=0;
  unsigned long long __temp542v__buf__unsafe_size=0;
  unsigned long long __temp542v__buf__unsafe_align=0;
  unsigned long long __temp542v__dat__pos=0;
  unsigned long long __temp542v__dat__length=0;
  char __temp542v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp492v(&__temp540v__unsafe_ptr,&__temp540v__unsafe_size,&__temp540v__unsafe_align);
  buf__unsafe_ptr=__temp540v__unsafe_ptr;
  buf__unsafe_size=__temp540v__unsafe_size;
  buf__unsafe_align=__temp540v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp541v=0;
  __temp_errcode=str__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp541v,length,&__temp542v__buf__unsafe_ptr,&__temp542v__buf__unsafe_size,&__temp542v__buf__unsafe_align,&__temp542v__dat__pos,&__temp542v__dat__length,&__temp542v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1627v=__temp542v__buf__unsafe_ptr;
  *__temp1628v=__temp542v__buf__unsafe_size;
  *__temp1629v=__temp542v__buf__unsafe_align;
  *__temp1630v=__temp542v__dat__pos;
  *__temp1631v=__temp542v__dat__length;
  *__temp1632v=__temp542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp543v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1633v) {
  *__temp1633v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1634v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1634v=z;
}

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1635v) {
  *__temp1635v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1636v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1636v=z;
}

int copy__temp624v(void** __temp1639v, unsigned long long* __temp1640v, unsigned long long* __temp1641v, unsigned long long* __temp1642v, const char* _other, void** __temp1643v, unsigned long long* __temp1644v, unsigned long long* __temp1645v, unsigned long long* __temp1646v, unsigned long long* __temp1647v, char* __temp1648v) {
  void* buf__unsafe_ptr=*__temp1639v;
  unsigned long long buf__unsafe_size=*__temp1640v;
  unsigned long long buf__unsafe_align=*__temp1641v;
  unsigned long long pos=*__temp1642v;
  void* __temp625v__buf__unsafe_ptr=0;
  unsigned long long __temp625v__buf__unsafe_size=0;
  unsigned long long __temp625v__buf__unsafe_align=0;
  unsigned long long __temp625v__dat__pos=0;
  unsigned long long __temp625v__dat__length=0;
  char __temp625v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp626v__=0;
  unsigned long long __temp627v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp628v__=0;
  int __temp629v__=0;
  unsigned long long __temp630v=0;
  unsigned long long __temp631v__=0;
  unsigned long long prev_pos=0;
  void* __temp632v__buf__unsafe_ptr=0;
  unsigned long long __temp632v__buf__unsafe_size=0;
  unsigned long long __temp632v__buf__unsafe_align=0;
  unsigned long long __temp632v__dat__pos=0;
  unsigned long long __temp632v__dat__length=0;
  char __temp632v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp539v(_other,&__temp625v__buf__unsafe_ptr,&__temp625v__buf__unsafe_size,&__temp625v__buf__unsafe_align,&__temp625v__dat__pos,&__temp625v__dat__length,&__temp625v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp625v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp625v__buf__unsafe_size;
  other__buf__unsafe_align=__temp625v__buf__unsafe_align;
  other__dat__pos=__temp625v__dat__pos;
  other__dat__length=__temp625v__dat__length;
  other__dat__first=__temp625v__dat__first;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp626v__);
  add__temp109v(pos,__temp626v__,&__temp627v__);
  next_pos=__temp627v__;
  len__temp490v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp628v__);
  gt__temp205v(next_pos,__temp628v__,&__temp629v__);
  if(__temp629v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp630v=0;
  add__temp109v(pos,__temp630v,&__temp631v__);
  prev_pos=__temp631v__;
  pos=next_pos;
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp632v__buf__unsafe_ptr,&__temp632v__buf__unsafe_size,&__temp632v__buf__unsafe_align,&__temp632v__dat__pos,&__temp632v__dat__length,&__temp632v__dat__first);
  *__temp1639v=buf__unsafe_ptr;
  *__temp1640v=buf__unsafe_size;
  *__temp1641v=buf__unsafe_align;
  *__temp1642v=pos;
  *__temp1643v=__temp632v__buf__unsafe_ptr;
  *__temp1644v=__temp632v__buf__unsafe_size;
  *__temp1645v=__temp632v__buf__unsafe_align;
  *__temp1646v=__temp632v__dat__pos;
  *__temp1647v=__temp632v__dat__length;
  *__temp1648v=__temp632v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp586v(const char* other, const char** __temp1649v) {
  *__temp1649v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1650v) {
  int z=0;
  z=x!=0;
  *__temp1650v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1651v) {
  int z=0;
  z=value?0:1;
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) int read__temp1520v(const char* _path, void** __temp1652v) {
  const char* __temp1521v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1522v__=0;
  int __temp1523v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp586v(_path,&__temp1521v__);
  path=__temp1521v__;
  unsafe_ptr=opendir(path);
  exists__temp393v(unsafe_ptr,&__temp1522v__);
  not__temp17v(__temp1522v__,&__temp1523v__);
  if(__temp1523v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  *__temp1652v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp590v(void** __temp1653v, unsigned long long* __temp1654v, unsigned long long* __temp1655v, unsigned long long* __temp1656v, void** __temp1657v, unsigned long long* __temp1658v, unsigned long long* __temp1659v, unsigned long long* __temp1660v) {
  void* other__buf__unsafe_ptr=*__temp1653v;
  unsigned long long other__buf__unsafe_size=*__temp1654v;
  unsigned long long other__buf__unsafe_align=*__temp1655v;
  unsigned long long other__pos=*__temp1656v;
  unsigned long long __temp591v=0;
  unsigned long long pos=0;
  __temp591v=other__pos;
  pos=__temp591v;
  *__temp1653v=other__buf__unsafe_ptr;
  *__temp1654v=other__buf__unsafe_size;
  *__temp1655v=other__buf__unsafe_align;
  *__temp1656v=other__pos;
  *__temp1657v=other__buf__unsafe_ptr;
  *__temp1658v=other__buf__unsafe_size;
  *__temp1659v=other__buf__unsafe_align;
  *__temp1660v=pos;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1530v(void** __temp1661v, const char** __temp1662v) {
  void* f__unsafe_ptr=*__temp1661v;
  int __temp1531v__=0;
  int __temp1532v__=0;
  void* de=0;
  int __temp1533v__=0;
  int __temp1534v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  exists__temp393v(f__unsafe_ptr,&__temp1531v__);
  not__temp17v(__temp1531v__,&__temp1532v__);
  if(__temp1532v__){
  __temp_errcode=40;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp393v(de,&__temp1533v__);
  not__temp17v(__temp1533v__,&__temp1534v__);
  if(__temp1534v__){
  __temp_errcode=41;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  *__temp1661v=f__unsafe_ptr;
  *__temp1662v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

int copy_null_terminated__temp644v(void** __temp1665v, unsigned long long* __temp1666v, unsigned long long* __temp1667v, unsigned long long* __temp1668v, const char* _other, void** __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v, unsigned long long* __temp1672v, unsigned long long* __temp1673v, char* __temp1674v) {
  void* buf__unsafe_ptr=*__temp1665v;
  unsigned long long buf__unsafe_size=*__temp1666v;
  unsigned long long buf__unsafe_align=*__temp1667v;
  unsigned long long pos=*__temp1668v;
  void* __temp645v__buf__unsafe_ptr=0;
  unsigned long long __temp645v__buf__unsafe_size=0;
  unsigned long long __temp645v__buf__unsafe_align=0;
  unsigned long long __temp645v__dat__pos=0;
  unsigned long long __temp645v__dat__length=0;
  char __temp645v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp646v__=0;
  unsigned long long __temp647v__=0;
  unsigned long long null_pos=0;
  unsigned long long __temp648v=0;
  unsigned long long __temp649v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp650v__=0;
  int __temp651v__=0;
  unsigned long long __temp652v=0;
  unsigned long long __temp653v__=0;
  unsigned long long prev_pos=0;
  void* __temp654v__buf__unsafe_ptr=0;
  unsigned long long __temp654v__buf__unsafe_size=0;
  unsigned long long __temp654v__buf__unsafe_align=0;
  unsigned long long __temp654v__dat__pos=0;
  unsigned long long __temp654v__dat__length=0;
  char __temp654v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp539v(_other,&__temp645v__buf__unsafe_ptr,&__temp645v__buf__unsafe_size,&__temp645v__buf__unsafe_align,&__temp645v__dat__pos,&__temp645v__dat__length,&__temp645v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp645v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp645v__buf__unsafe_size;
  other__buf__unsafe_align=__temp645v__buf__unsafe_align;
  other__dat__pos=__temp645v__dat__pos;
  other__dat__length=__temp645v__dat__length;
  other__dat__first=__temp645v__dat__first;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp646v__);
  add__temp109v(pos,__temp646v__,&__temp647v__);
  null_pos=__temp647v__;
  __temp648v=1;
  add__temp109v(null_pos,__temp648v,&__temp649v__);
  next_pos=__temp649v__;
  len__temp490v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp650v__);
  gt__temp205v(next_pos,__temp650v__,&__temp651v__);
  if(__temp651v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[null_pos]=0;
  __temp652v=0;
  add__temp109v(pos,__temp652v,&__temp653v__);
  prev_pos=__temp653v__;
  pos=next_pos;
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp654v__buf__unsafe_ptr,&__temp654v__buf__unsafe_size,&__temp654v__buf__unsafe_align,&__temp654v__dat__pos,&__temp654v__dat__length,&__temp654v__dat__first);
  *__temp1665v=buf__unsafe_ptr;
  *__temp1666v=buf__unsafe_size;
  *__temp1667v=buf__unsafe_align;
  *__temp1668v=pos;
  *__temp1669v=__temp654v__buf__unsafe_ptr;
  *__temp1670v=__temp654v__buf__unsafe_size;
  *__temp1671v=__temp654v__buf__unsafe_align;
  *__temp1672v=__temp654v__dat__pos;
  *__temp1673v=__temp654v__dat__length;
  *__temp1674v=__temp654v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1539v(void** __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v, unsigned long long* __temp1678v, void** __temp1679v, void** __temp1680v, unsigned long long* __temp1681v, unsigned long long* __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, char* __temp1685v) {
  void* buf__unsafe_ptr=*__temp1675v;
  unsigned long long buf__unsafe_size=*__temp1676v;
  unsigned long long buf__unsafe_align=*__temp1677v;
  unsigned long long pos=*__temp1678v;
  void* f__unsafe_ptr=*__temp1679v;
  const char* __temp1541v__=0;
  void* __temp1542v__buf__unsafe_ptr=0;
  unsigned long long __temp1542v__buf__unsafe_size=0;
  unsigned long long __temp1542v__buf__unsafe_align=0;
  unsigned long long __temp1542v__dat__pos=0;
  unsigned long long __temp1542v__dat__length=0;
  char __temp1542v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_entry__temp1530v(&f__unsafe_ptr,&__temp1541v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy_null_terminated__temp644v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1541v__,&__temp1542v__buf__unsafe_ptr,&__temp1542v__buf__unsafe_size,&__temp1542v__buf__unsafe_align,&__temp1542v__dat__pos,&__temp1542v__dat__length,&__temp1542v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1675v=buf__unsafe_ptr;
  *__temp1676v=buf__unsafe_size;
  *__temp1677v=buf__unsafe_align;
  *__temp1678v=pos;
  *__temp1679v=f__unsafe_ptr;
  *__temp1680v=__temp1542v__buf__unsafe_ptr;
  *__temp1681v=__temp1542v__buf__unsafe_size;
  *__temp1682v=__temp1542v__buf__unsafe_align;
  *__temp1683v=__temp1542v__dat__pos;
  *__temp1684v=__temp1542v__dat__length;
  *__temp1685v=__temp1542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp532v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, char* __temp1691v) {
  *__temp1686v=other__buf__unsafe_ptr;
  *__temp1687v=other__buf__unsafe_size;
  *__temp1688v=other__buf__unsafe_align;
  *__temp1689v=other__dat__pos;
  *__temp1690v=other__dat__length;
  *__temp1691v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1692v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1693v) {
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
  *__temp1693v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp738v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, void** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v, char* __temp1703v) {
  void* __temp739v__buf__unsafe_ptr=0;
  unsigned long long __temp739v__buf__unsafe_size=0;
  unsigned long long __temp739v__buf__unsafe_align=0;
  unsigned long long __temp739v__dat__pos=0;
  unsigned long long __temp739v__dat__length=0;
  char __temp739v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp740v__=0;
  void* __temp741v__buf__unsafe_ptr=0;
  unsigned long long __temp741v__buf__unsafe_size=0;
  unsigned long long __temp741v__buf__unsafe_align=0;
  unsigned long long __temp741v__dat__pos=0;
  unsigned long long __temp741v__dat__length=0;
  char __temp741v__dat__first=0;
  int __temp742v__=0;
  int __temp743v__=0;
  int __temp744v=0;
  unsigned long long __temp745v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp746v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp747v=0;
  int __temp748v__=0;
  char new_first=0;
  void* __temp749v__=0;
  char __temp750v__value=0;
  void* __temp751v__buf__unsafe_ptr=0;
  unsigned long long __temp751v__buf__unsafe_size=0;
  unsigned long long __temp751v__buf__unsafe_align=0;
  unsigned long long __temp751v__dat__pos=0;
  unsigned long long __temp751v__dat__length=0;
  char __temp751v__dat__first=0;
  int __temp_errcode=0;
  str__temp532v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp739v__buf__unsafe_ptr,&__temp739v__buf__unsafe_size,&__temp739v__buf__unsafe_align,&__temp739v__dat__pos,&__temp739v__dat__length,&__temp739v__dat__first);
  s__buf__unsafe_ptr=__temp739v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp739v__buf__unsafe_size;
  s__buf__unsafe_align=__temp739v__buf__unsafe_align;
  s__dat__pos=__temp739v__dat__pos;
  s__dat__length=__temp739v__dat__length;
  s__dat__first=__temp739v__dat__first;
  eq__temp277v(from,to,&__temp740v__);
  if(__temp740v__){
  __temp_errcode=str__temp539v(__temp578v,&__temp741v__buf__unsafe_ptr,&__temp741v__buf__unsafe_size,&__temp741v__buf__unsafe_align,&__temp741v__dat__pos,&__temp741v__dat__length,&__temp741v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp181v(from,to,&__temp742v__);
  if(!__temp742v__){
  gt__temp205v(to,s__dat__length,&__temp743v__);
  __temp744v=__temp743v__;
  }
  if(__temp744v){
  __temp_errcode=13;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp329v(to,from,&__temp745v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp745v__;
  add__temp109v(s__dat__pos,from,&__temp746v__);
  new_pos=__temp746v__;
  __temp747v=0;
  neq__temp301v(from,__temp747v,&__temp748v__);
  if(__temp748v__){
  __temp_errcode=get__temp486v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,&__temp749v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp749v__){
  goto __temp_failure;
  }
  memcpy(&__temp750v__value,(char*)__temp749v__,1);
  new_first=__temp750v__value;
  }
  else{
  new_first=s__dat__first;
  }
  str__temp523v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,new_length,new_first,&__temp751v__buf__unsafe_ptr,&__temp751v__buf__unsafe_size,&__temp751v__buf__unsafe_align,&__temp751v__dat__pos,&__temp751v__dat__length,&__temp751v__dat__first);
  __temp741v__buf__unsafe_ptr=__temp751v__buf__unsafe_ptr;
  __temp741v__buf__unsafe_size=__temp751v__buf__unsafe_size;
  __temp741v__buf__unsafe_align=__temp751v__buf__unsafe_align;
  __temp741v__dat__pos=__temp751v__dat__pos;
  __temp741v__dat__length=__temp751v__dat__length;
  __temp741v__dat__first=__temp751v__dat__first;
  __temp_return:
  *__temp1698v=__temp741v__buf__unsafe_ptr;
  *__temp1699v=__temp741v__buf__unsafe_size;
  *__temp1700v=__temp741v__buf__unsafe_align;
  *__temp1701v=__temp741v__dat__pos;
  *__temp1702v=__temp741v__dat__length;
  *__temp1703v=__temp741v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp547v(char x, char y, int* __temp1704v) {
  int z=0;
  z=(x!=y);
  *__temp1704v=z;
}

static inline __attribute__((always_inline)) void eq__temp703v(void* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, void* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, int* __temp1705v) {
  unsigned long long __temp704v__=0;
  unsigned long long n=0;
  unsigned long long __temp705v__=0;
  int __temp706v__=0;
  int __temp707v=0;
  int __temp708v__=0;
  int __temp709v=0;
  int z=0;
  len__temp543v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__dat__pos,x__dat__length,x__dat__first,&__temp704v__);
  n=__temp704v__;
  len__temp543v(y__buf__unsafe_ptr,y__buf__unsafe_size,y__buf__unsafe_align,y__dat__pos,y__dat__length,y__dat__first,&__temp705v__);
  neq__temp301v(n,__temp705v__,&__temp706v__);
  if(__temp706v__){
  __temp707v=0;
  goto __temp_return;
  }
  neq__temp547v(x__dat__first,y__dat__first,&__temp708v__);
  if(__temp708v__){
  __temp709v=0;
  __temp707v=__temp709v;
  goto __temp_return;
  }
  z=!memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos,((char*)y__buf__unsafe_ptr)+y__dat__pos,n);
  __temp707v=z;
  __temp_return:
  *__temp1705v=__temp707v;
}

static inline __attribute__((always_inline)) int ends_with__temp806v(void* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, int* __temp1712v) {
  void* __temp807v__buf__unsafe_ptr=0;
  unsigned long long __temp807v__buf__unsafe_size=0;
  unsigned long long __temp807v__buf__unsafe_align=0;
  unsigned long long __temp807v__dat__pos=0;
  unsigned long long __temp807v__dat__length=0;
  char __temp807v__dat__first=0;
  void* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  void* __temp808v__buf__unsafe_ptr=0;
  unsigned long long __temp808v__buf__unsafe_size=0;
  unsigned long long __temp808v__buf__unsafe_align=0;
  unsigned long long __temp808v__dat__pos=0;
  unsigned long long __temp808v__dat__length=0;
  char __temp808v__dat__first=0;
  void* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  int __temp809v__=0;
  int __temp810v=0;
  unsigned long long __temp811v__=0;
  unsigned long long n=0;
  unsigned long long __temp812v__=0;
  unsigned long long __temp813v__=0;
  void* __temp814v__buf__unsafe_ptr=0;
  unsigned long long __temp814v__buf__unsafe_size=0;
  unsigned long long __temp814v__buf__unsafe_align=0;
  unsigned long long __temp814v__dat__pos=0;
  unsigned long long __temp814v__dat__length=0;
  char __temp814v__dat__first=0;
  void* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  int __temp815v__=0;
  int __temp_errcode=0;
  str__temp532v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp807v__buf__unsafe_ptr,&__temp807v__buf__unsafe_size,&__temp807v__buf__unsafe_align,&__temp807v__dat__pos,&__temp807v__dat__length,&__temp807v__dat__first);
  stack__buf__unsafe_ptr=__temp807v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp807v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp807v__buf__unsafe_align;
  stack__dat__pos=__temp807v__dat__pos;
  stack__dat__length=__temp807v__dat__length;
  stack__dat__first=__temp807v__dat__first;
  __temp_errcode=str__temp539v(_needle,&__temp808v__buf__unsafe_ptr,&__temp808v__buf__unsafe_size,&__temp808v__buf__unsafe_align,&__temp808v__dat__pos,&__temp808v__dat__length,&__temp808v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp808v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp808v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp808v__buf__unsafe_align;
  needle__dat__pos=__temp808v__dat__pos;
  needle__dat__length=__temp808v__dat__length;
  needle__dat__first=__temp808v__dat__first;
  lt__temp181v(stack__dat__length,needle__dat__length,&__temp809v__);
  if(__temp809v__){
  __temp810v=0;
  goto __temp_return;
  }
  len__temp543v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp811v__);
  n=__temp811v__;
  len__temp543v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp812v__);
  __temp_errcode=sub__temp329v(n,__temp812v__,&__temp813v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp738v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp813v__,n,&__temp814v__buf__unsafe_ptr,&__temp814v__buf__unsafe_size,&__temp814v__buf__unsafe_align,&__temp814v__dat__pos,&__temp814v__dat__length,&__temp814v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp814v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp814v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp814v__buf__unsafe_align;
  ret__dat__pos=__temp814v__dat__pos;
  ret__dat__length=__temp814v__dat__length;
  ret__dat__first=__temp814v__dat__first;
  eq__temp703v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp815v__);
  __temp810v=__temp815v__;
  __temp_return:
  *__temp1712v=__temp810v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int extend_left__temp606v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, void** __temp1715v, unsigned long long* __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, unsigned long long* __temp1719v, char* __temp1720v) {
  unsigned long long __temp608v=0;
  unsigned long long pos=0;
  int __temp609v__=0;
  unsigned long long __temp610v__=0;
  int __temp611v__=0;
  unsigned long long __temp612v__=0;
  unsigned long long __temp613v__=0;
  void* __temp614v__buf__unsafe_ptr=0;
  unsigned long long __temp614v__buf__unsafe_size=0;
  unsigned long long __temp614v__buf__unsafe_align=0;
  unsigned long long __temp614v__dat__pos=0;
  unsigned long long __temp614v__dat__length=0;
  char __temp614v__dat__first=0;
  int __temp_errcode=0;
  __temp608v=0;
  pos=__temp608v;
  eq__temp277v(pos,s__dat__pos,&__temp609v__);
  if(__temp609v__){
  goto __temp_return;
  }
  add__temp109v(s__dat__pos,s__dat__length,&__temp610v__);
  gt__temp205v(pos,__temp610v__,&__temp611v__);
  if(__temp611v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  add__temp109v(s__dat__pos,s__dat__length,&__temp612v__);
  __temp_errcode=sub__temp329v(__temp612v__,pos,&__temp613v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp533v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,pos,__temp613v__,&__temp614v__buf__unsafe_ptr,&__temp614v__buf__unsafe_size,&__temp614v__buf__unsafe_align,&__temp614v__dat__pos,&__temp614v__dat__length,&__temp614v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp614v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp614v__buf__unsafe_size;
  s__buf__unsafe_align=__temp614v__buf__unsafe_align;
  s__dat__pos=__temp614v__dat__pos;
  s__dat__length=__temp614v__dat__length;
  s__dat__first=__temp614v__dat__first;
  __temp_return:
  *__temp1715v=s__buf__unsafe_ptr;
  *__temp1716v=s__buf__unsafe_size;
  *__temp1717v=s__buf__unsafe_align;
  *__temp1718v=s__dat__pos;
  *__temp1719v=s__dat__length;
  *__temp1720v=s__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp655v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp657v__=0;
  int __temp658v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp657v__);
  gt__temp205v(__temp657v__,s__buf__unsafe_size,&__temp658v__);
  if(__temp658v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp545v(const char* s, char* __temp1721v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1721v=c;
}

static inline __attribute__((always_inline)) void eq__temp546v(char x, char y, int* __temp1722v) {
  int z=0;
  z=(x==y);
  *__temp1722v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp562v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v, unsigned long long* __temp1729v, unsigned long long* __temp1730v, char* __temp1731v) {
  unsigned long long __temp563v=0;
  unsigned long long __temp564v__=0;
  unsigned long long __temp565v__=0;
  void* __temp566v__unsafe_ptr=0;
  unsigned long long __temp566v__unsafe_size=0;
  unsigned long long __temp566v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp568v=0;
  void* __temp569v__buf__unsafe_ptr=0;
  unsigned long long __temp569v__buf__unsafe_size=0;
  unsigned long long __temp569v__buf__unsafe_align=0;
  unsigned long long __temp569v__dat__pos=0;
  unsigned long long __temp569v__dat__length=0;
  char __temp569v__dat__first=0;
  unsigned long long __temp1724v=0;
  int __temp1725v=0;
  int __temp_errcode=0;
  __temp563v=1;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp564v__);
  add__temp109v(__temp563v,__temp564v__,&__temp565v__);
  __temp_errcode=alloc__temp491v(__temp565v__,&__temp566v__unsafe_ptr,&__temp566v__unsafe_size,&__temp566v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp566v__unsafe_ptr;
  buf__unsafe_size=__temp566v__unsafe_size;
  buf__unsafe_align=__temp566v__unsafe_align;
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp568v=0;
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp568v,other__dat__length,other__dat__first,&__temp569v__buf__unsafe_ptr,&__temp569v__buf__unsafe_size,&__temp569v__buf__unsafe_align,&__temp569v__dat__pos,&__temp569v__dat__length,&__temp569v__dat__first);
  *__temp1726v=__temp569v__buf__unsafe_ptr;
  *__temp1727v=__temp569v__buf__unsafe_size;
  *__temp1728v=__temp569v__buf__unsafe_align;
  *__temp1729v=__temp569v__dat__pos;
  *__temp1730v=__temp569v__dat__length;
  *__temp1731v=__temp569v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp521v(const char* c, int* __temp1732v) {
  int z=0;
  z=c!=0;
  *__temp1732v=z;
}

int unsafe_temporary_cstr__temp570v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1737v) {
  unsigned long long __temp571v__=0;
  unsigned long long __temp572v__=0;
  unsigned long long __temp573v__=0;
  int __temp574v__=0;
  unsigned long long __temp575v__=0;
  void* __temp576v__=0;
  char __temp577v__value=0;
  char __temp579v__=0;
  int __temp580v__=0;
  int __temp581v=0;
  void* __temp582v__buf__unsafe_ptr=0;
  unsigned long long __temp582v__buf__unsafe_size=0;
  unsigned long long __temp582v__buf__unsafe_align=0;
  unsigned long long __temp582v__dat__pos=0;
  unsigned long long __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  int __temp584v__=0;
  int __temp585v__=0;
  unsigned long long __temp1735v=0;
  int __temp1736v=0;
  int __temp_errcode=0;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp571v__);
  add__temp109v(__temp571v__,other__dat__pos,&__temp572v__);
  len__temp490v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp573v__);
  lt__temp181v(__temp572v__,__temp573v__,&__temp574v__);
  if(__temp574v__){
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp575v__);
  __temp_errcode=get__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp575v__,&__temp576v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp576v__){
  goto __temp_failure;
  }
  memcpy(&__temp577v__value,(char*)__temp576v__,1);
  char__temp545v(__temp578v,&__temp579v__);
  eq__temp546v(__temp577v__value,__temp579v__,&__temp580v__);
  __temp581v=__temp580v__;
  }
  if(__temp581v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp562v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp582v__buf__unsafe_ptr,&__temp582v__buf__unsafe_size,&__temp582v__buf__unsafe_align,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp582v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp582v__buf__unsafe_size;
  c__buf__unsafe_align=__temp582v__buf__unsafe_align;
  c__dat__pos=__temp582v__dat__pos;
  c__dat__length=__temp582v__dat__length;
  c__dat__first=__temp582v__dat__first;
  }
  ret=c__buf__unsafe_ptr+c__dat__pos;
  *__temp1737v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp377v(unsigned long long x, long long int* __temp1738v) {
  long long int z=0;
  z=x;
  *__temp1738v=z;
}

static inline __attribute__((always_inline)) void is_different__temp72v(long long int x, long long int y, int* __temp1739v) {
  int __temp73v=0;
  int __temp74v__=0;
  not__temp26v(__temp73v,&__temp74v__);
  *__temp1739v=__temp74v__;
}

static inline __attribute__((always_inline)) void neq__temp290v(long long int x, long long int y, int* __temp1740v) {
  int __temp291v__=0;
  int z=0;
  is_different__temp72v(x,y,&__temp291v__);
  z=x!=y?1:0;
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) void print__temp343v(const char* value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int process__temp1090v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, void** __temp1747v) {
  const char* __temp1091v__=0;
  const char* cmd=0;
  void* contents=0;
  int __temp1093v__=0;
  int __temp1094v__=0;
  int __temp1095v__=0;
  long long int status=0;
  unsigned long long __temp1096v=0;
  long long int __temp1097v__=0;
  int __temp1098v__=0;
  int __temp1741v=0;
  int __temp1742v=0;
  unsigned long long __temp1743v=0;
  unsigned long long __temp1744v=0;
  int __temp1745v=0;
  void* __temp1746v=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp570v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1091v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1091v__;
  contents=popen((const char*)cmd,"r");
  exists__temp393v(contents,&__temp1093v__);
  not__temp17v(__temp1093v__,&__temp1094v__);
  if(__temp1094v__){
  __temp_errcode=26;
  goto __temp_failure;
  }
  *__temp1747v=contents;
  
  __temp_failure:exists__temp521v(__temp1091v__,&__temp1741v);
  not__temp17v(__temp1741v,&__temp1742v);
  if(__temp1742v){
  __temp1743v=0;
  neq__temp301v(__temp1744v,__temp1743v,&__temp1745v);
  if(__temp1745v){
  __temp1744v=0;
  free__temp426v(&__temp1746v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1555v() {
  const char* path=0;
  unsigned long long __temp1557v=0;
  unsigned long long __temp1558v__=0;
  void* __temp1559v__unsafe_ptr=0;
  unsigned long long __temp1559v__unsafe_size=0;
  unsigned long long __temp1559v__unsafe_align=0;
  void* __temp1561v__buf__unsafe_ptr=0;
  unsigned long long __temp1561v__buf__unsafe_size=0;
  unsigned long long __temp1561v__buf__unsafe_align=0;
  unsigned long long __temp1561v__pos=0;
  void* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  void* __temp1563v__buf__unsafe_ptr=0;
  unsigned long long __temp1563v__buf__unsafe_size=0;
  unsigned long long __temp1563v__buf__unsafe_align=0;
  unsigned long long __temp1563v__dat__pos=0;
  unsigned long long __temp1563v__dat__length=0;
  char __temp1563v__dat__first=0;
  void* __temp1564v__buf__unsafe_ptr=0;
  unsigned long long __temp1564v__buf__unsafe_size=0;
  unsigned long long __temp1564v__buf__unsafe_align=0;
  unsigned long long __temp1564v__dat__pos=0;
  unsigned long long __temp1564v__dat__length=0;
  char __temp1564v__dat__first=0;
  void* __temp1565v__unsafe_ptr=0;
  void* test_dir__unsafe_ptr=0;
  int __temp1567v=0;
  void* __temp1568v__other__buf__unsafe_ptr=0;
  unsigned long long __temp1568v__other__buf__unsafe_size=0;
  unsigned long long __temp1568v__other__buf__unsafe_align=0;
  unsigned long long __temp1568v__pos=0;
  void* __temp1569v__buf__unsafe_ptr=0;
  unsigned long long __temp1569v__buf__unsafe_size=0;
  unsigned long long __temp1569v__buf__unsafe_align=0;
  unsigned long long __temp1569v__dat__pos=0;
  unsigned long long __temp1569v__dat__length=0;
  char __temp1569v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  int __temp1571v__=0;
  int __temp1572v__=0;
  void* __temp1573v__buf__unsafe_ptr=0;
  unsigned long long __temp1573v__buf__unsafe_size=0;
  unsigned long long __temp1573v__buf__unsafe_align=0;
  unsigned long long __temp1573v__dat__pos=0;
  unsigned long long __temp1573v__dat__length=0;
  char __temp1573v__dat__first=0;
  void* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  void* __temp1575v__contents=0;
  long long int __temp1576v__status=0;
  void* __temp1577v__contents=0;
  unsigned long long __temp1749v=0;
  int __temp1750v=0;
  int __temp1763v=0;
  unsigned long long __temp1764v=0;
  long long int __temp1765v=0;
  int __temp1766v=0;
  int __temp_errcode=0;
  path=__temp1556v;
  __temp1557v=4;
  KB__temp405v(__temp1557v,&__temp1558v__);
  __temp_errcode=alloc__temp491v(__temp1558v__,&__temp1559v__unsafe_ptr,&__temp1559v__unsafe_size,&__temp1559v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp587v(&__temp1559v__unsafe_ptr,&__temp1559v__unsafe_size,&__temp1559v__unsafe_align,&__temp1561v__buf__unsafe_ptr,&__temp1561v__buf__unsafe_size,&__temp1561v__buf__unsafe_align,&__temp1561v__pos);
  bp__buf__unsafe_ptr=__temp1561v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1561v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1561v__buf__unsafe_align;
  bp__pos=__temp1561v__pos;
  __temp_errcode=copy__temp624v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1562v,&__temp1563v__buf__unsafe_ptr,&__temp1563v__buf__unsafe_size,&__temp1563v__buf__unsafe_align,&__temp1563v__dat__pos,&__temp1563v__dat__length,&__temp1563v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp624v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1564v__buf__unsafe_ptr,&__temp1564v__buf__unsafe_size,&__temp1564v__buf__unsafe_align,&__temp1564v__dat__pos,&__temp1564v__dat__length,&__temp1564v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1520v(path,&__temp1565v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1565v__unsafe_ptr;
  while(1){
  bufpos__temp590v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,&__temp1568v__other__buf__unsafe_ptr,&__temp1568v__other__buf__unsafe_size,&__temp1568v__other__buf__unsafe_align,&__temp1568v__pos);
  __temp1567v=entry__temp1539v(&__temp1568v__other__buf__unsafe_ptr,&__temp1568v__other__buf__unsafe_size,&__temp1568v__other__buf__unsafe_align,&__temp1568v__pos,&test_dir__unsafe_ptr,&__temp1569v__buf__unsafe_ptr,&__temp1569v__buf__unsafe_size,&__temp1569v__buf__unsafe_align,&__temp1569v__dat__pos,&__temp1569v__dat__length,&__temp1569v__dat__first);
  entry__buf__unsafe_ptr=__temp1569v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1569v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1569v__buf__unsafe_align;
  entry__dat__pos=__temp1569v__dat__pos;
  entry__dat__length=__temp1569v__dat__length;
  entry__dat__first=__temp1569v__dat__first;
  __temp1567v=__temp1567v==0;
  if(!__temp1567v)break;
  __temp_errcode=ends_with__temp806v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1570v,&__temp1571v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp17v(__temp1571v__,&__temp1572v__);
  if(__temp1572v__){
  continue;
  }
  __temp_errcode=extend_left__temp606v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1573v__buf__unsafe_ptr,&__temp1573v__buf__unsafe_size,&__temp1573v__buf__unsafe_align,&__temp1573v__dat__pos,&__temp1573v__dat__length,&__temp1573v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1573v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1573v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1573v__buf__unsafe_align;
  command__dat__pos=__temp1573v__dat__pos;
  command__dat__length=__temp1573v__dat__length;
  command__dat__first=__temp1573v__dat__first;
  __temp_errcode=print__temp655v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=process__temp1090v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1575v__contents);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1577v__contents=__temp1575v__contents;
  exists__temp393v(__temp1575v__contents,&__temp1763v);
  if(__temp1763v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1575v__contents)){
  }
  __temp1576v__status=pclose((FILE*)__temp1575v__contents);
  __temp1575v__contents=0;
  }
  __temp1764v=0;
  int__temp377v(__temp1764v,&__temp1765v);
  neq__temp290v(__temp1576v__status,__temp1765v,&__temp1766v);
  if(__temp1766v){
  print__temp343v(__temp1099v);
  }
  }
  
  __temp_failure:if(__temp1565v__unsafe_ptr)closedir((DIR*)__temp1565v__unsafe_ptr);
  __temp1565v__unsafe_ptr=0;
  __temp1749v=0;
  neq__temp301v(__temp1559v__unsafe_size,__temp1749v,&__temp1750v);
  if(__temp1750v){
  __temp1559v__unsafe_size=0;
  free__temp426v(&__temp1559v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1555v();return 0;}