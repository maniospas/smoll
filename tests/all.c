#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp573v="";
const char* const __temp1621v="*";
const char* const __temp1610v=" ";
const char* const __temp1130v="process terminated with unhandled non-zero exit code";
const char* const __temp1604v=".s";
const char* const __temp345v="\n";
const char* const __temp406v="kilobytes to bytes";
const char* const __temp1587v="./tests/passing/";
const char* const __temp1592v="./smoll ";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp486v(void** __temp1624v, unsigned long long* __temp1625v, unsigned long long* __temp1626v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1624v=unsafe_ptr;
  *__temp1625v=unsafe_size;
  *__temp1626v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1627v) {
  int value=0;
  *__temp1627v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1628v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1628v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1629v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1629v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1630v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1630v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1631v) {
  void* allocated=*__temp1631v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1631v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1632v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1632v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1633v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1633v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1634v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1634v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1635v, unsigned long long* __temp1636v, unsigned long long* __temp1637v, unsigned long long size, void** __temp1638v, unsigned long long* __temp1639v, unsigned long long* __temp1640v) {
  void* buffer__unsafe_ptr=*__temp1635v;
  unsigned long long buffer__unsafe_size=*__temp1636v;
  unsigned long long buffer__unsafe_align=*__temp1637v;
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
  *__temp1635v=buffer__unsafe_ptr;
  *__temp1636v=buffer__unsafe_size;
  *__temp1637v=buffer__unsafe_align;
  *__temp1638v=buffer__unsafe_ptr;
  *__temp1639v=buffer__unsafe_size;
  *__temp1640v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp485v(unsigned long long size, void** __temp1645v, unsigned long long* __temp1646v, unsigned long long* __temp1647v) {
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__unsafe_align=0;
  void* __temp489v__unsafe_ptr=0;
  unsigned long long __temp489v__unsafe_size=0;
  unsigned long long __temp489v__unsafe_align=0;
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  unsigned long long __temp1643v=0;
  int __temp1644v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp486v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align);
  __temp489v__unsafe_ptr=__temp488v__unsafe_ptr;
  __temp489v__unsafe_size=__temp488v__unsafe_size;
  __temp489v__unsafe_align=__temp488v__unsafe_align;
  __temp_errcode=alloc__temp432v(&__temp489v__unsafe_ptr,&__temp489v__unsafe_size,&__temp489v__unsafe_align,size,&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1645v=__temp490v__unsafe_ptr;
  *__temp1646v=__temp490v__unsafe_size;
  *__temp1647v=__temp490v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp590v(void** __temp1648v, unsigned long long* __temp1649v, unsigned long long* __temp1650v, void** __temp1651v, unsigned long long* __temp1652v, unsigned long long* __temp1653v, unsigned long long* __temp1654v) {
  void* buf__unsafe_ptr=*__temp1648v;
  unsigned long long buf__unsafe_size=*__temp1649v;
  unsigned long long buf__unsafe_align=*__temp1650v;
  unsigned long long __temp591v=0;
  unsigned long long __temp592v=0;
  unsigned long long pos=0;
  __temp591v=0;
  __temp592v=__temp591v;
  pos=__temp592v;
  *__temp1648v=buf__unsafe_ptr;
  *__temp1649v=buf__unsafe_size;
  *__temp1650v=buf__unsafe_align;
  *__temp1651v=buf__unsafe_ptr;
  *__temp1652v=buf__unsafe_size;
  *__temp1653v=buf__unsafe_align;
  *__temp1654v=pos;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1655v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1655v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1656v) {
  *__temp1656v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1657v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1657v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1658v) {
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
  *__temp1658v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1659v, unsigned long long* __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v, unsigned long long* __temp1663v, char* __temp1664v) {
  *__temp1659v=buf__unsafe_ptr;
  *__temp1660v=buf__unsafe_size;
  *__temp1661v=buf__unsafe_align;
  *__temp1662v=dat__pos;
  *__temp1663v=dat__length;
  *__temp1664v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp526v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1665v, unsigned long long* __temp1666v, unsigned long long* __temp1667v, unsigned long long* __temp1668v, unsigned long long* __temp1669v, char* __temp1670v) {
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
  *__temp1665v=__temp531v__buf__unsafe_ptr;
  *__temp1666v=__temp531v__buf__unsafe_size;
  *__temp1667v=__temp531v__buf__unsafe_align;
  *__temp1668v=__temp531v__dat__pos;
  *__temp1669v=__temp531v__dat__length;
  *__temp1670v=__temp531v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp532v(const char* c, void** __temp1672v, unsigned long long* __temp1673v, unsigned long long* __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, char* __temp1677v) {
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
  *__temp1672v=__temp535v__buf__unsafe_ptr;
  *__temp1673v=__temp535v__buf__unsafe_size;
  *__temp1674v=__temp535v__buf__unsafe_align;
  *__temp1675v=__temp535v__dat__pos;
  *__temp1676v=__temp535v__dat__length;
  *__temp1677v=__temp535v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp536v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1678v) {
  *__temp1678v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1679v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1679v=z;
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1680v) {
  *__temp1680v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1681v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1681v=z;
}

int copy__temp657v(void** __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long* __temp1687v, const char* _other, void** __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, unsigned long long* __temp1691v, unsigned long long* __temp1692v, char* __temp1693v) {
  void* buf__unsafe_ptr=*__temp1684v;
  unsigned long long buf__unsafe_size=*__temp1685v;
  unsigned long long buf__unsafe_align=*__temp1686v;
  unsigned long long pos=*__temp1687v;
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
  *__temp1684v=buf__unsafe_ptr;
  *__temp1685v=buf__unsafe_size;
  *__temp1686v=buf__unsafe_align;
  *__temp1687v=pos;
  *__temp1688v=__temp665v__buf__unsafe_ptr;
  *__temp1689v=__temp665v__buf__unsafe_size;
  *__temp1690v=__temp665v__buf__unsafe_align;
  *__temp1691v=__temp665v__dat__pos;
  *__temp1692v=__temp665v__dat__length;
  *__temp1693v=__temp665v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp589v(const char* other, const char** __temp1694v) {
  *__temp1694v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1695v) {
  int z=0;
  z=x!=0;
  *__temp1695v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1696v) {
  int z=0;
  z=value?0:1;
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) int read__temp1551v(const char* _path, void** __temp1697v) {
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
  *__temp1697v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp405v(unsigned long long x, unsigned long long* __temp1698v) {
  unsigned long long __temp407v=0;
  unsigned long long __temp408v__=0;
  __temp407v=1024;
  mul__temp133v(x,__temp407v,&__temp408v__);
  *__temp1698v=__temp408v__;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1561v(void** __temp1699v, const char** __temp1700v) {
  void* f__unsafe_ptr=*__temp1699v;
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
  *__temp1699v=f__unsafe_ptr;
  *__temp1700v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1570v(void** __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v, void** __temp1705v, void** __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v, unsigned long long* __temp1709v, unsigned long long* __temp1710v, char* __temp1711v) {
  void* buf__unsafe_ptr=*__temp1701v;
  unsigned long long buf__unsafe_size=*__temp1702v;
  unsigned long long buf__unsafe_align=*__temp1703v;
  unsigned long long pos=*__temp1704v;
  void* f__unsafe_ptr=*__temp1705v;
  const char* __temp1572v__=0;
  void* __temp1573v__buf__unsafe_ptr=0;
  unsigned long long __temp1573v__buf__unsafe_size=0;
  unsigned long long __temp1573v__buf__unsafe_align=0;
  unsigned long long __temp1573v__dat__pos=0;
  unsigned long long __temp1573v__dat__length=0;
  char __temp1573v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_entry__temp1561v(&f__unsafe_ptr,&__temp1572v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp657v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1572v__,&__temp1573v__buf__unsafe_ptr,&__temp1573v__buf__unsafe_size,&__temp1573v__buf__unsafe_align,&__temp1573v__dat__pos,&__temp1573v__dat__length,&__temp1573v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1701v=buf__unsafe_ptr;
  *__temp1702v=buf__unsafe_size;
  *__temp1703v=buf__unsafe_align;
  *__temp1704v=pos;
  *__temp1705v=f__unsafe_ptr;
  *__temp1706v=__temp1573v__buf__unsafe_ptr;
  *__temp1707v=__temp1573v__buf__unsafe_size;
  *__temp1708v=__temp1573v__buf__unsafe_align;
  *__temp1709v=__temp1573v__dat__pos;
  *__temp1710v=__temp1573v__dat__length;
  *__temp1711v=__temp1573v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp525v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, unsigned long long* __temp1715v, unsigned long long* __temp1716v, char* __temp1717v) {
  *__temp1712v=other__buf__unsafe_ptr;
  *__temp1713v=other__buf__unsafe_size;
  *__temp1714v=other__buf__unsafe_align;
  *__temp1715v=other__dat__pos;
  *__temp1716v=other__dat__length;
  *__temp1717v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1718v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1718v=z;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1719v) {
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
  *__temp1719v=z;
  
  __temp_failure:
  return __temp_errcode;
}

int slice__temp769v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, unsigned long long from, unsigned long long to, void** __temp1724v, unsigned long long* __temp1725v, unsigned long long* __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v, char* __temp1729v) {
  void* __temp770v__buf__unsafe_ptr=0;
  unsigned long long __temp770v__buf__unsafe_size=0;
  unsigned long long __temp770v__buf__unsafe_align=0;
  unsigned long long __temp770v__dat__pos=0;
  unsigned long long __temp770v__dat__length=0;
  char __temp770v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp771v__=0;
  void* __temp772v__buf__unsafe_ptr=0;
  unsigned long long __temp772v__buf__unsafe_size=0;
  unsigned long long __temp772v__buf__unsafe_align=0;
  unsigned long long __temp772v__dat__pos=0;
  unsigned long long __temp772v__dat__length=0;
  char __temp772v__dat__first=0;
  int __temp773v__=0;
  int __temp774v__=0;
  int __temp775v=0;
  unsigned long long __temp776v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp777v__=0;
  unsigned long long new_pos=0;
  unsigned long long __temp778v=0;
  int __temp779v__=0;
  char new_first=0;
  void* __temp780v__=0;
  char __temp781v__value=0;
  void* __temp782v__buf__unsafe_ptr=0;
  unsigned long long __temp782v__buf__unsafe_size=0;
  unsigned long long __temp782v__buf__unsafe_align=0;
  unsigned long long __temp782v__dat__pos=0;
  unsigned long long __temp782v__dat__length=0;
  char __temp782v__dat__first=0;
  int __temp_errcode=0;
  str__temp525v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp770v__buf__unsafe_ptr,&__temp770v__buf__unsafe_size,&__temp770v__buf__unsafe_align,&__temp770v__dat__pos,&__temp770v__dat__length,&__temp770v__dat__first);
  s__buf__unsafe_ptr=__temp770v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp770v__buf__unsafe_size;
  s__buf__unsafe_align=__temp770v__buf__unsafe_align;
  s__dat__pos=__temp770v__dat__pos;
  s__dat__length=__temp770v__dat__length;
  s__dat__first=__temp770v__dat__first;
  eq__temp277v(from,to,&__temp771v__);
  if(__temp771v__){
  __temp_errcode=str__temp532v(__temp573v,&__temp772v__buf__unsafe_ptr,&__temp772v__buf__unsafe_size,&__temp772v__buf__unsafe_align,&__temp772v__dat__pos,&__temp772v__dat__length,&__temp772v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp181v(from,to,&__temp773v__);
  if(!__temp773v__){
  gt__temp205v(to,s__dat__length,&__temp774v__);
  __temp775v=__temp774v__;
  }
  if(__temp775v){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp329v(to,from,&__temp776v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp776v__;
  add__temp109v(s__dat__pos,from,&__temp777v__);
  new_pos=__temp777v__;
  __temp778v=0;
  neq__temp301v(from,__temp778v,&__temp779v__);
  if(__temp779v__){
  __temp_errcode=get__temp480v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,&__temp780v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp780v__){
  goto __temp_failure;
  }
  memcpy(&__temp781v__value,(char*)__temp780v__,1);
  new_first=__temp781v__value;
  }
  else{
  new_first=s__dat__first;
  }
  str__temp516v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,new_pos,new_length,new_first,&__temp782v__buf__unsafe_ptr,&__temp782v__buf__unsafe_size,&__temp782v__buf__unsafe_align,&__temp782v__dat__pos,&__temp782v__dat__length,&__temp782v__dat__first);
  __temp772v__buf__unsafe_ptr=__temp782v__buf__unsafe_ptr;
  __temp772v__buf__unsafe_size=__temp782v__buf__unsafe_size;
  __temp772v__buf__unsafe_align=__temp782v__buf__unsafe_align;
  __temp772v__dat__pos=__temp782v__dat__pos;
  __temp772v__dat__length=__temp782v__dat__length;
  __temp772v__dat__first=__temp782v__dat__first;
  __temp_return:
  *__temp1724v=__temp772v__buf__unsafe_ptr;
  *__temp1725v=__temp772v__buf__unsafe_size;
  *__temp1726v=__temp772v__buf__unsafe_align;
  *__temp1727v=__temp772v__dat__pos;
  *__temp1728v=__temp772v__dat__length;
  *__temp1729v=__temp772v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp540v(char x, char y, int* __temp1730v) {
  int z=0;
  z=(x!=y);
  *__temp1730v=z;
}

static inline __attribute__((always_inline)) void eq__temp734v(void* x__buf__unsafe_ptr, unsigned long long x__buf__unsafe_size, unsigned long long x__buf__unsafe_align, unsigned long long x__dat__pos, unsigned long long x__dat__length, char x__dat__first, void* y__buf__unsafe_ptr, unsigned long long y__buf__unsafe_size, unsigned long long y__buf__unsafe_align, unsigned long long y__dat__pos, unsigned long long y__dat__length, char y__dat__first, int* __temp1731v) {
  unsigned long long __temp735v__=0;
  unsigned long long n=0;
  unsigned long long __temp736v__=0;
  int __temp737v__=0;
  int __temp738v=0;
  int __temp739v__=0;
  int __temp740v=0;
  int z=0;
  len__temp536v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__dat__pos,x__dat__length,x__dat__first,&__temp735v__);
  n=__temp735v__;
  len__temp536v(y__buf__unsafe_ptr,y__buf__unsafe_size,y__buf__unsafe_align,y__dat__pos,y__dat__length,y__dat__first,&__temp736v__);
  neq__temp301v(n,__temp736v__,&__temp737v__);
  if(__temp737v__){
  __temp738v=0;
  goto __temp_return;
  }
  neq__temp540v(x__dat__first,y__dat__first,&__temp739v__);
  if(__temp739v__){
  __temp740v=0;
  __temp738v=__temp740v;
  goto __temp_return;
  }
  z=!memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos,((char*)y__buf__unsafe_ptr)+y__dat__pos,n);
  __temp738v=z;
  __temp_return:
  *__temp1731v=__temp738v;
}

static inline __attribute__((always_inline)) int ends_with__temp837v(void* _stack__buf__unsafe_ptr, unsigned long long _stack__buf__unsafe_size, unsigned long long _stack__buf__unsafe_align, unsigned long long _stack__dat__pos, unsigned long long _stack__dat__length, char _stack__dat__first, const char* _needle, int* __temp1738v) {
  void* __temp838v__buf__unsafe_ptr=0;
  unsigned long long __temp838v__buf__unsafe_size=0;
  unsigned long long __temp838v__buf__unsafe_align=0;
  unsigned long long __temp838v__dat__pos=0;
  unsigned long long __temp838v__dat__length=0;
  char __temp838v__dat__first=0;
  void* stack__buf__unsafe_ptr=0;
  unsigned long long stack__buf__unsafe_size=0;
  unsigned long long stack__buf__unsafe_align=0;
  unsigned long long stack__dat__pos=0;
  unsigned long long stack__dat__length=0;
  char stack__dat__first=0;
  void* __temp839v__buf__unsafe_ptr=0;
  unsigned long long __temp839v__buf__unsafe_size=0;
  unsigned long long __temp839v__buf__unsafe_align=0;
  unsigned long long __temp839v__dat__pos=0;
  unsigned long long __temp839v__dat__length=0;
  char __temp839v__dat__first=0;
  void* needle__buf__unsafe_ptr=0;
  unsigned long long needle__buf__unsafe_size=0;
  unsigned long long needle__buf__unsafe_align=0;
  unsigned long long needle__dat__pos=0;
  unsigned long long needle__dat__length=0;
  char needle__dat__first=0;
  int __temp840v__=0;
  int __temp841v=0;
  unsigned long long __temp842v__=0;
  unsigned long long n=0;
  unsigned long long __temp843v__=0;
  unsigned long long __temp844v__=0;
  void* __temp845v__buf__unsafe_ptr=0;
  unsigned long long __temp845v__buf__unsafe_size=0;
  unsigned long long __temp845v__buf__unsafe_align=0;
  unsigned long long __temp845v__dat__pos=0;
  unsigned long long __temp845v__dat__length=0;
  char __temp845v__dat__first=0;
  void* ret__buf__unsafe_ptr=0;
  unsigned long long ret__buf__unsafe_size=0;
  unsigned long long ret__buf__unsafe_align=0;
  unsigned long long ret__dat__pos=0;
  unsigned long long ret__dat__length=0;
  char ret__dat__first=0;
  int __temp846v__=0;
  int __temp_errcode=0;
  str__temp525v(_stack__buf__unsafe_ptr,_stack__buf__unsafe_size,_stack__buf__unsafe_align,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp838v__buf__unsafe_ptr,&__temp838v__buf__unsafe_size,&__temp838v__buf__unsafe_align,&__temp838v__dat__pos,&__temp838v__dat__length,&__temp838v__dat__first);
  stack__buf__unsafe_ptr=__temp838v__buf__unsafe_ptr;
  stack__buf__unsafe_size=__temp838v__buf__unsafe_size;
  stack__buf__unsafe_align=__temp838v__buf__unsafe_align;
  stack__dat__pos=__temp838v__dat__pos;
  stack__dat__length=__temp838v__dat__length;
  stack__dat__first=__temp838v__dat__first;
  __temp_errcode=str__temp532v(_needle,&__temp839v__buf__unsafe_ptr,&__temp839v__buf__unsafe_size,&__temp839v__buf__unsafe_align,&__temp839v__dat__pos,&__temp839v__dat__length,&__temp839v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__buf__unsafe_ptr=__temp839v__buf__unsafe_ptr;
  needle__buf__unsafe_size=__temp839v__buf__unsafe_size;
  needle__buf__unsafe_align=__temp839v__buf__unsafe_align;
  needle__dat__pos=__temp839v__dat__pos;
  needle__dat__length=__temp839v__dat__length;
  needle__dat__first=__temp839v__dat__first;
  lt__temp181v(stack__dat__length,needle__dat__length,&__temp840v__);
  if(__temp840v__){
  __temp841v=0;
  goto __temp_return;
  }
  len__temp536v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp842v__);
  n=__temp842v__;
  len__temp536v(needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp843v__);
  __temp_errcode=sub__temp329v(n,__temp843v__,&__temp844v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp769v(stack__buf__unsafe_ptr,stack__buf__unsafe_size,stack__buf__unsafe_align,stack__dat__pos,stack__dat__length,stack__dat__first,__temp844v__,n,&__temp845v__buf__unsafe_ptr,&__temp845v__buf__unsafe_size,&__temp845v__buf__unsafe_align,&__temp845v__dat__pos,&__temp845v__dat__length,&__temp845v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__buf__unsafe_ptr=__temp845v__buf__unsafe_ptr;
  ret__buf__unsafe_size=__temp845v__buf__unsafe_size;
  ret__buf__unsafe_align=__temp845v__buf__unsafe_align;
  ret__dat__pos=__temp845v__dat__pos;
  ret__dat__length=__temp845v__dat__length;
  ret__dat__first=__temp845v__dat__first;
  eq__temp734v(ret__buf__unsafe_ptr,ret__buf__unsafe_size,ret__buf__unsafe_align,ret__dat__pos,ret__dat__length,ret__dat__first,needle__buf__unsafe_ptr,needle__buf__unsafe_size,needle__buf__unsafe_align,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp846v__);
  __temp841v=__temp846v__;
  __temp_return:
  *__temp1738v=__temp841v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int lextend__temp639v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, void** __temp1741v, unsigned long long* __temp1742v, unsigned long long* __temp1743v, unsigned long long* __temp1744v, unsigned long long* __temp1745v, char* __temp1746v) {
  unsigned long long __temp641v=0;
  unsigned long long pos=0;
  int __temp642v__=0;
  unsigned long long __temp643v__=0;
  int __temp644v__=0;
  unsigned long long __temp645v__=0;
  unsigned long long __temp646v__=0;
  void* __temp647v__buf__unsafe_ptr=0;
  unsigned long long __temp647v__buf__unsafe_size=0;
  unsigned long long __temp647v__buf__unsafe_align=0;
  unsigned long long __temp647v__dat__pos=0;
  unsigned long long __temp647v__dat__length=0;
  char __temp647v__dat__first=0;
  int __temp_errcode=0;
  __temp641v=0;
  pos=__temp641v;
  eq__temp277v(pos,s__dat__pos,&__temp642v__);
  if(__temp642v__){
  goto __temp_return;
  }
  add__temp109v(s__dat__pos,s__dat__length,&__temp643v__);
  gt__temp205v(pos,__temp643v__,&__temp644v__);
  if(__temp644v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  add__temp109v(s__dat__pos,s__dat__length,&__temp645v__);
  __temp_errcode=sub__temp329v(__temp645v__,pos,&__temp646v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp526v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,pos,__temp646v__,&__temp647v__buf__unsafe_ptr,&__temp647v__buf__unsafe_size,&__temp647v__buf__unsafe_align,&__temp647v__dat__pos,&__temp647v__dat__length,&__temp647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp647v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp647v__buf__unsafe_size;
  s__buf__unsafe_align=__temp647v__buf__unsafe_align;
  s__dat__pos=__temp647v__dat__pos;
  s__dat__length=__temp647v__dat__length;
  s__dat__first=__temp647v__dat__first;
  __temp_return:
  *__temp1741v=s__buf__unsafe_ptr;
  *__temp1742v=s__buf__unsafe_size;
  *__temp1743v=s__buf__unsafe_align;
  *__temp1744v=s__dat__pos;
  *__temp1745v=s__dat__length;
  *__temp1746v=s__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp538v(const char* s, char* __temp1747v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1747v=c;
}

static inline __attribute__((always_inline)) void true__temp8v(int* __temp1748v) {
  int value=0;
  *__temp1748v=value;
}

static inline __attribute__((always_inline)) void not__temp28v(int __temp_anon0, int* __temp1749v) {
  int __temp29v__=0;
  true__temp8v(&__temp29v__);
  *__temp1749v=__temp29v__;
}

static inline __attribute__((always_inline)) int rextend__temp602v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long by, char character, void** __temp1750v, unsigned long long* __temp1751v, unsigned long long* __temp1752v, unsigned long long* __temp1753v, unsigned long long* __temp1754v, char* __temp1755v) {
  unsigned long long __temp604v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp605v__=0;
  unsigned long long __temp606v__=0;
  int __temp607v__=0;
  int __temp608v=0;
  int __temp609v__=0;
  void* __temp610v__buf__unsafe_ptr=0;
  unsigned long long __temp610v__buf__unsafe_size=0;
  unsigned long long __temp610v__buf__unsafe_align=0;
  unsigned long long __temp610v__dat__pos=0;
  unsigned long long __temp610v__dat__length=0;
  char __temp610v__dat__first=0;
  int __temp_errcode=0;
  add__temp109v(s__dat__length,by,&__temp604v__);
  new_length=__temp604v__;
  add__temp109v(new_length,s__dat__pos,&__temp605v__);
  len__temp484v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp606v__);
  gt__temp205v(__temp605v__,__temp606v__,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  not__temp28v(__temp608v,&__temp609v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp516v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp610v__buf__unsafe_ptr,&__temp610v__buf__unsafe_size,&__temp610v__buf__unsafe_align,&__temp610v__dat__pos,&__temp610v__dat__length,&__temp610v__dat__first);
  *__temp1750v=__temp610v__buf__unsafe_ptr;
  *__temp1751v=__temp610v__buf__unsafe_size;
  *__temp1752v=__temp610v__buf__unsafe_align;
  *__temp1753v=__temp610v__dat__pos;
  *__temp1754v=__temp610v__dat__length;
  *__temp1755v=__temp610v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp692v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, const char* endl) {
  unsigned long long __temp694v__=0;
  int __temp695v__=0;
  int __temp_errcode=0;
  add__temp109v(s__dat__length,s__dat__pos,&__temp694v__);
  gt__temp205v(__temp694v__,s__buf__unsafe_size,&__temp695v__);
  if(__temp695v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int rextend__temp621v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, char character, void** __temp1756v, unsigned long long* __temp1757v, unsigned long long* __temp1758v, unsigned long long* __temp1759v, unsigned long long* __temp1760v, char* __temp1761v) {
  unsigned long long __temp623v=0;
  unsigned long long by=0;
  unsigned long long __temp624v__=0;
  unsigned long long new_length=0;
  unsigned long long __temp625v__=0;
  unsigned long long __temp626v__=0;
  int __temp627v__=0;
  int __temp628v=0;
  int __temp629v__=0;
  void* __temp630v__buf__unsafe_ptr=0;
  unsigned long long __temp630v__buf__unsafe_size=0;
  unsigned long long __temp630v__buf__unsafe_align=0;
  unsigned long long __temp630v__dat__pos=0;
  unsigned long long __temp630v__dat__length=0;
  char __temp630v__dat__first=0;
  int __temp_errcode=0;
  __temp623v=1;
  by=__temp623v;
  add__temp109v(s__dat__length,by,&__temp624v__);
  new_length=__temp624v__;
  add__temp109v(new_length,s__dat__pos,&__temp625v__);
  len__temp484v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,&__temp626v__);
  gt__temp205v(__temp625v__,__temp626v__,&__temp627v__);
  if(__temp627v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  not__temp28v(__temp628v,&__temp629v__);
  memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length,character,by);
  str__temp516v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,new_length,s__dat__first,&__temp630v__buf__unsafe_ptr,&__temp630v__buf__unsafe_size,&__temp630v__buf__unsafe_align,&__temp630v__dat__pos,&__temp630v__dat__length,&__temp630v__dat__first);
  *__temp1756v=__temp630v__buf__unsafe_ptr;
  *__temp1757v=__temp630v__buf__unsafe_size;
  *__temp1758v=__temp630v__buf__unsafe_align;
  *__temp1759v=__temp630v__dat__pos;
  *__temp1760v=__temp630v__dat__length;
  *__temp1761v=__temp630v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void le__temp229v(unsigned long long x, unsigned long long y, int* __temp1762v) {
  int __temp230v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp230v__);
  z=x<=y?1:0;
  *__temp1762v=z;
}

static inline __attribute__((always_inline)) void eq__temp539v(char x, char y, int* __temp1763v) {
  int z=0;
  z=(x==y);
  *__temp1763v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp555v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1767v, unsigned long long* __temp1768v, unsigned long long* __temp1769v, unsigned long long* __temp1770v, unsigned long long* __temp1771v, char* __temp1772v) {
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
  unsigned long long __temp1765v=0;
  int __temp1766v=0;
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
  *__temp1767v=__temp562v__buf__unsafe_ptr;
  *__temp1768v=__temp562v__buf__unsafe_size;
  *__temp1769v=__temp562v__buf__unsafe_align;
  *__temp1770v=__temp562v__dat__pos;
  *__temp1771v=__temp562v__dat__length;
  *__temp1772v=__temp562v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp514v(const char* c, int* __temp1773v) {
  int z=0;
  z=c!=0;
  *__temp1773v=z;
}

int unsafe_temporary_cstr__temp563v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1778v) {
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
  unsigned long long __temp1776v=0;
  int __temp1777v=0;
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
  *__temp1778v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp377v(unsigned long long x, long long int* __temp1779v) {
  long long int z=0;
  z=x;
  *__temp1779v=z;
}

static inline __attribute__((always_inline)) void is_different__temp72v(long long int x, long long int y, int* __temp1780v) {
  int __temp73v=0;
  int __temp74v__=0;
  not__temp26v(__temp73v,&__temp74v__);
  *__temp1780v=__temp74v__;
}

static inline __attribute__((always_inline)) void neq__temp290v(long long int x, long long int y, int* __temp1781v) {
  int __temp291v__=0;
  int z=0;
  is_different__temp72v(x,y,&__temp291v__);
  z=x!=y?1:0;
  *__temp1781v=z;
}

static inline __attribute__((always_inline)) void print__temp343v(const char* value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int read__temp1121v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first, void** __temp1788v) {
  const char* __temp1122v__=0;
  const char* cmd=0;
  void* contents=0;
  int __temp1124v__=0;
  int __temp1125v__=0;
  int __temp1126v__=0;
  long long int status=0;
  unsigned long long __temp1127v=0;
  long long int __temp1128v__=0;
  int __temp1129v__=0;
  int __temp1782v=0;
  int __temp1783v=0;
  unsigned long long __temp1784v=0;
  unsigned long long __temp1785v=0;
  int __temp1786v=0;
  void* __temp1787v=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp563v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1122v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1122v__;
  contents=popen((const char*)cmd,"r");
  exists__temp393v(contents,&__temp1124v__);
  not__temp17v(__temp1124v__,&__temp1125v__);
  if(__temp1125v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  *__temp1788v=contents;
  
  __temp_failure:exists__temp514v(__temp1122v__,&__temp1782v);
  not__temp17v(__temp1782v,&__temp1783v);
  if(__temp1783v){
  __temp1784v=0;
  neq__temp301v(__temp1785v,__temp1784v,&__temp1786v);
  if(__temp1786v){
  __temp1785v=0;
  free__temp426v(&__temp1787v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1201v(void** __temp1789v, unsigned long long* __temp1790v, unsigned long long* __temp1791v, void** __temp1792v, void** __temp1793v, unsigned long long* __temp1794v, unsigned long long* __temp1795v, unsigned long long* __temp1796v, unsigned long long* __temp1797v, char* __temp1798v) {
  void* buf__unsafe_ptr=*__temp1789v;
  unsigned long long buf__unsafe_size=*__temp1790v;
  unsigned long long buf__unsafe_align=*__temp1791v;
  void* f__contents=*__temp1792v;
  unsigned long long __temp1203v=0;
  unsigned long long __temp1204v=0;
  unsigned long long pos=0;
  void* __temp1205v__=0;
  void* contents=0;
  unsigned long long __temp1206v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1207v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1208v__=0;
  void* __temp1209v__buf__unsafe_ptr=0;
  unsigned long long __temp1209v__buf__unsafe_size=0;
  unsigned long long __temp1209v__buf__unsafe_align=0;
  unsigned long long __temp1209v__dat__pos=0;
  unsigned long long __temp1209v__dat__length=0;
  char __temp1209v__dat__first=0;
  int __temp_errcode=0;
  __temp1203v=0;
  __temp1204v=__temp1203v;
  pos=__temp1204v;
  add__temp428v(buf__unsafe_ptr,pos,&__temp1205v__);
  contents=__temp1205v__;
  __temp_errcode=sub__temp329v(buf__unsafe_size,pos,&__temp1206v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1206v__;
  success=f__contents?fgets((char*)contents,size,(FILE*)f__contents)!=0:0;
  not__temp17v(success,&__temp1207v__);
  if(__temp1207v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp109v(pos,bytes_read,&__temp1208v__);
  pos=__temp1208v__;
  __temp_errcode=str__temp526v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1209v__buf__unsafe_ptr,&__temp1209v__buf__unsafe_size,&__temp1209v__buf__unsafe_align,&__temp1209v__dat__pos,&__temp1209v__dat__length,&__temp1209v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1789v=buf__unsafe_ptr;
  *__temp1790v=buf__unsafe_size;
  *__temp1791v=buf__unsafe_align;
  *__temp1792v=f__contents;
  *__temp1793v=__temp1209v__buf__unsafe_ptr;
  *__temp1794v=__temp1209v__buf__unsafe_size;
  *__temp1795v=__temp1209v__buf__unsafe_align;
  *__temp1796v=__temp1209v__dat__pos;
  *__temp1797v=__temp1209v__dat__length;
  *__temp1798v=__temp1209v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp346v(const char* value, const char* endl) {
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1586v() {
  const char* path=0;
  unsigned long long __temp1588v=0;
  unsigned long long max_command_length=0;
  void* __temp1589v__unsafe_ptr=0;
  unsigned long long __temp1589v__unsafe_size=0;
  unsigned long long __temp1589v__unsafe_align=0;
  void* __temp1591v__buf__unsafe_ptr=0;
  unsigned long long __temp1591v__buf__unsafe_size=0;
  unsigned long long __temp1591v__buf__unsafe_align=0;
  unsigned long long __temp1591v__pos=0;
  void* bp__buf__unsafe_ptr=0;
  unsigned long long bp__buf__unsafe_size=0;
  unsigned long long bp__buf__unsafe_align=0;
  unsigned long long bp__pos=0;
  void* __temp1593v__buf__unsafe_ptr=0;
  unsigned long long __temp1593v__buf__unsafe_size=0;
  unsigned long long __temp1593v__buf__unsafe_align=0;
  unsigned long long __temp1593v__dat__pos=0;
  unsigned long long __temp1593v__dat__length=0;
  char __temp1593v__dat__first=0;
  void* __temp1594v__buf__unsafe_ptr=0;
  unsigned long long __temp1594v__buf__unsafe_size=0;
  unsigned long long __temp1594v__buf__unsafe_align=0;
  unsigned long long __temp1594v__dat__pos=0;
  unsigned long long __temp1594v__dat__length=0;
  char __temp1594v__dat__first=0;
  void* __temp1595v__unsafe_ptr=0;
  void* test_dir__unsafe_ptr=0;
  unsigned long long __temp1597v=0;
  unsigned long long __temp1598v__=0;
  void* __temp1599v__unsafe_ptr=0;
  unsigned long long __temp1599v__unsafe_size=0;
  unsigned long long __temp1599v__unsafe_align=0;
  void* proc_buf__unsafe_ptr=0;
  unsigned long long proc_buf__unsafe_size=0;
  unsigned long long proc_buf__unsafe_align=0;
  int __temp1601v=0;
  void* __temp1602v__buf__unsafe_ptr=0;
  unsigned long long __temp1602v__buf__unsafe_size=0;
  unsigned long long __temp1602v__buf__unsafe_align=0;
  unsigned long long __temp1602v__pos=0;
  void* __temp1603v__buf__unsafe_ptr=0;
  unsigned long long __temp1603v__buf__unsafe_size=0;
  unsigned long long __temp1603v__buf__unsafe_align=0;
  unsigned long long __temp1603v__dat__pos=0;
  unsigned long long __temp1603v__dat__length=0;
  char __temp1603v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  int __temp1605v__=0;
  int __temp1606v__=0;
  void* __temp1607v__buf__unsafe_ptr=0;
  unsigned long long __temp1607v__buf__unsafe_size=0;
  unsigned long long __temp1607v__buf__unsafe_align=0;
  unsigned long long __temp1607v__dat__pos=0;
  unsigned long long __temp1607v__dat__length=0;
  char __temp1607v__dat__first=0;
  void* command__buf__unsafe_ptr=0;
  unsigned long long command__buf__unsafe_size=0;
  unsigned long long command__buf__unsafe_align=0;
  unsigned long long command__dat__pos=0;
  unsigned long long command__dat__length=0;
  char command__dat__first=0;
  unsigned long long __temp1608v__=0;
  unsigned long long __temp1609v__=0;
  char __temp1611v__=0;
  void* __temp1612v__buf__unsafe_ptr=0;
  unsigned long long __temp1612v__buf__unsafe_size=0;
  unsigned long long __temp1612v__buf__unsafe_align=0;
  unsigned long long __temp1612v__dat__pos=0;
  unsigned long long __temp1612v__dat__length=0;
  char __temp1612v__dat__first=0;
  char __temp1614v__=0;
  void* __temp1615v__buf__unsafe_ptr=0;
  unsigned long long __temp1615v__buf__unsafe_size=0;
  unsigned long long __temp1615v__buf__unsafe_align=0;
  unsigned long long __temp1615v__dat__pos=0;
  unsigned long long __temp1615v__dat__length=0;
  char __temp1615v__dat__first=0;
  void* __temp1616v__contents=0;
  long long int __temp1617v__status=0;
  void* __temp1618v__contents=0;
  void* proc__contents=0;
  int __temp1619v=0;
  void* __temp1620v__buf__unsafe_ptr=0;
  unsigned long long __temp1620v__buf__unsafe_size=0;
  unsigned long long __temp1620v__buf__unsafe_align=0;
  unsigned long long __temp1620v__dat__pos=0;
  unsigned long long __temp1620v__dat__length=0;
  char __temp1620v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1800v=0;
  int __temp1801v=0;
  unsigned long long __temp1809v=0;
  int __temp1810v=0;
  int __temp1821v=0;
  unsigned long long __temp1822v=0;
  long long int __temp1823v=0;
  int __temp1824v=0;
  int __temp_errcode=0;
  path=__temp1587v;
  __temp1588v=50;
  max_command_length=__temp1588v;
  __temp_errcode=alloc__temp485v(max_command_length,&__temp1589v__unsafe_ptr,&__temp1589v__unsafe_size,&__temp1589v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp590v(&__temp1589v__unsafe_ptr,&__temp1589v__unsafe_size,&__temp1589v__unsafe_align,&__temp1591v__buf__unsafe_ptr,&__temp1591v__buf__unsafe_size,&__temp1591v__buf__unsafe_align,&__temp1591v__pos);
  bp__buf__unsafe_ptr=__temp1591v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1591v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1591v__buf__unsafe_align;
  bp__pos=__temp1591v__pos;
  __temp_errcode=copy__temp657v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1592v,&__temp1593v__buf__unsafe_ptr,&__temp1593v__buf__unsafe_size,&__temp1593v__buf__unsafe_align,&__temp1593v__dat__pos,&__temp1593v__dat__length,&__temp1593v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp657v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1594v__buf__unsafe_ptr,&__temp1594v__buf__unsafe_size,&__temp1594v__buf__unsafe_align,&__temp1594v__dat__pos,&__temp1594v__dat__length,&__temp1594v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1551v(path,&__temp1595v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1595v__unsafe_ptr;
  __temp1597v=4;
  KB__temp405v(__temp1597v,&__temp1598v__);
  __temp_errcode=alloc__temp485v(__temp1598v__,&__temp1599v__unsafe_ptr,&__temp1599v__unsafe_size,&__temp1599v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1599v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1599v__unsafe_size;
  proc_buf__unsafe_align=__temp1599v__unsafe_align;
  while(1){
  __temp1602v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1602v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1602v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1602v__pos=bp__pos;
  __temp1601v=entry__temp1570v(&__temp1602v__buf__unsafe_ptr,&__temp1602v__buf__unsafe_size,&__temp1602v__buf__unsafe_align,&__temp1602v__pos,&test_dir__unsafe_ptr,&__temp1603v__buf__unsafe_ptr,&__temp1603v__buf__unsafe_size,&__temp1603v__buf__unsafe_align,&__temp1603v__dat__pos,&__temp1603v__dat__length,&__temp1603v__dat__first);
  entry__buf__unsafe_ptr=__temp1603v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1603v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1603v__buf__unsafe_align;
  entry__dat__pos=__temp1603v__dat__pos;
  entry__dat__length=__temp1603v__dat__length;
  entry__dat__first=__temp1603v__dat__first;
  __temp1601v=__temp1601v==0;
  if(!__temp1601v)break;
  __temp_errcode=ends_with__temp837v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1604v,&__temp1605v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp17v(__temp1605v__,&__temp1606v__);
  if(__temp1606v__){
  continue;
  }
  __temp_errcode=lextend__temp639v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1607v__buf__unsafe_ptr,&__temp1607v__buf__unsafe_size,&__temp1607v__buf__unsafe_align,&__temp1607v__dat__pos,&__temp1607v__dat__length,&__temp1607v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__buf__unsafe_ptr=__temp1607v__buf__unsafe_ptr;
  command__buf__unsafe_size=__temp1607v__buf__unsafe_size;
  command__buf__unsafe_align=__temp1607v__buf__unsafe_align;
  command__dat__pos=__temp1607v__dat__pos;
  command__dat__length=__temp1607v__dat__length;
  command__dat__first=__temp1607v__dat__first;
  len__temp536v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,&__temp1608v__);
  __temp_errcode=sub__temp329v(max_command_length,__temp1608v__,&__temp1609v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp538v(__temp1610v,&__temp1611v__);
  __temp_errcode=rextend__temp602v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1609v__,__temp1611v__,&__temp1612v__buf__unsafe_ptr,&__temp1612v__buf__unsafe_size,&__temp1612v__buf__unsafe_align,&__temp1612v__dat__pos,&__temp1612v__dat__length,&__temp1612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp692v(__temp1612v__buf__unsafe_ptr,__temp1612v__buf__unsafe_size,__temp1612v__buf__unsafe_align,__temp1612v__dat__pos,__temp1612v__dat__length,__temp1612v__dat__first,__temp1610v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  char__temp538v(__temp573v,&__temp1614v__);
  __temp_errcode=rextend__temp621v(command__buf__unsafe_ptr,command__buf__unsafe_size,command__buf__unsafe_align,command__dat__pos,command__dat__length,command__dat__first,__temp1614v__,&__temp1615v__buf__unsafe_ptr,&__temp1615v__buf__unsafe_size,&__temp1615v__buf__unsafe_align,&__temp1615v__dat__pos,&__temp1615v__dat__length,&__temp1615v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1121v(__temp1615v__buf__unsafe_ptr,__temp1615v__buf__unsafe_size,__temp1615v__buf__unsafe_align,__temp1615v__dat__pos,__temp1615v__dat__length,__temp1615v__dat__first,&__temp1616v__contents);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1618v__contents=__temp1616v__contents;
  proc__contents=__temp1618v__contents;
  while(1){
  __temp1619v=line__temp1201v(&proc_buf__unsafe_ptr,&proc_buf__unsafe_size,&proc_buf__unsafe_align,&proc__contents,&__temp1620v__buf__unsafe_ptr,&__temp1620v__buf__unsafe_size,&__temp1620v__buf__unsafe_align,&__temp1620v__dat__pos,&__temp1620v__dat__length,&__temp1620v__dat__first);
  line__buf__unsafe_ptr=__temp1620v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1620v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1620v__buf__unsafe_align;
  line__dat__pos=__temp1620v__dat__pos;
  line__dat__length=__temp1620v__dat__length;
  line__dat__first=__temp1620v__dat__first;
  __temp1619v=__temp1619v==0;
  if(!__temp1619v)break;
  print__temp346v(__temp1621v,__temp573v);
  }
  print__temp343v(__temp573v);
  exists__temp393v(__temp1616v__contents,&__temp1821v);
  if(__temp1821v){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1616v__contents)){
  }
  __temp1617v__status=pclose((FILE*)__temp1616v__contents);
  __temp1616v__contents=0;
  }
  __temp1822v=0;
  int__temp377v(__temp1822v,&__temp1823v);
  neq__temp290v(__temp1617v__status,__temp1823v,&__temp1824v);
  if(__temp1824v){
  print__temp343v(__temp1130v);
  }
  }
  
  __temp_failure:__temp1809v=0;
  neq__temp301v(__temp1599v__unsafe_size,__temp1809v,&__temp1810v);
  if(__temp1810v){
  __temp1599v__unsafe_size=0;
  free__temp426v(&__temp1599v__unsafe_ptr);
  }
  if(__temp1595v__unsafe_ptr)closedir((DIR*)__temp1595v__unsafe_ptr);
  __temp1595v__unsafe_ptr=0;
  __temp1800v=0;
  neq__temp301v(__temp1589v__unsafe_size,__temp1800v,&__temp1801v);
  if(__temp1801v){
  __temp1589v__unsafe_size=0;
  free__temp426v(&__temp1589v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}