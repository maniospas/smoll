#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1556v="README.md";
const char* const __temp406v="kilobytes to bytes";
const char* const __temp578v="";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp492v(void** __temp1571v, unsigned long long* __temp1572v, unsigned long long* __temp1573v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1571v=unsafe_ptr;
  *__temp1572v=unsafe_size;
  *__temp1573v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1574v) {
  int value=0;
  *__temp1574v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1575v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1575v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1576v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1576v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1577v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1577v=z;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1578v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1578v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1579v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1579v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1580v) {
  *__temp1580v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1581v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1581v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1582v) {
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
  *__temp1582v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp523v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1583v, unsigned long long* __temp1584v, unsigned long long* __temp1585v, unsigned long long* __temp1586v, unsigned long long* __temp1587v, char* __temp1588v) {
  *__temp1583v=buf__unsafe_ptr;
  *__temp1584v=buf__unsafe_size;
  *__temp1585v=buf__unsafe_align;
  *__temp1586v=dat__pos;
  *__temp1587v=dat__length;
  *__temp1588v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp533v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1589v, unsigned long long* __temp1590v, unsigned long long* __temp1591v, unsigned long long* __temp1592v, unsigned long long* __temp1593v, char* __temp1594v) {
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
  *__temp1589v=__temp538v__buf__unsafe_ptr;
  *__temp1590v=__temp538v__buf__unsafe_size;
  *__temp1591v=__temp538v__buf__unsafe_align;
  *__temp1592v=__temp538v__dat__pos;
  *__temp1593v=__temp538v__dat__length;
  *__temp1594v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp539v(const char* c, void** __temp1596v, unsigned long long* __temp1597v, unsigned long long* __temp1598v, unsigned long long* __temp1599v, unsigned long long* __temp1600v, char* __temp1601v) {
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
  *__temp1596v=__temp542v__buf__unsafe_ptr;
  *__temp1597v=__temp542v__buf__unsafe_size;
  *__temp1598v=__temp542v__buf__unsafe_align;
  *__temp1599v=__temp542v__dat__pos;
  *__temp1600v=__temp542v__dat__length;
  *__temp1601v=__temp542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp543v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1602v) {
  *__temp1602v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1603v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1603v=z;
}

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1604v) {
  *__temp1604v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1605v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1605v=z;
}

static inline __attribute__((always_inline)) void char__temp545v(const char* s, char* __temp1606v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1606v=c;
}

static inline __attribute__((always_inline)) void eq__temp546v(char x, char y, int* __temp1607v) {
  int z=0;
  z=(x==y);
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

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1610v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1610v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1611v, unsigned long long* __temp1612v, unsigned long long* __temp1613v, unsigned long long size, void** __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v) {
  void* buffer__unsafe_ptr=*__temp1611v;
  unsigned long long buffer__unsafe_size=*__temp1612v;
  unsigned long long buffer__unsafe_align=*__temp1613v;
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
  *__temp1611v=buffer__unsafe_ptr;
  *__temp1612v=buffer__unsafe_size;
  *__temp1613v=buffer__unsafe_align;
  *__temp1614v=buffer__unsafe_ptr;
  *__temp1615v=buffer__unsafe_size;
  *__temp1616v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp491v(unsigned long long size, void** __temp1621v, unsigned long long* __temp1622v, unsigned long long* __temp1623v) {
  void* __temp494v__unsafe_ptr=0;
  unsigned long long __temp494v__unsafe_size=0;
  unsigned long long __temp494v__unsafe_align=0;
  void* __temp495v__unsafe_ptr=0;
  unsigned long long __temp495v__unsafe_size=0;
  unsigned long long __temp495v__unsafe_align=0;
  void* __temp496v__unsafe_ptr=0;
  unsigned long long __temp496v__unsafe_size=0;
  unsigned long long __temp496v__unsafe_align=0;
  unsigned long long __temp1619v=0;
  int __temp1620v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp492v(&__temp494v__unsafe_ptr,&__temp494v__unsafe_size,&__temp494v__unsafe_align);
  __temp495v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp495v__unsafe_size=__temp494v__unsafe_size;
  __temp495v__unsafe_align=__temp494v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp495v__unsafe_ptr,&__temp495v__unsafe_size,&__temp495v__unsafe_align,size,&__temp496v__unsafe_ptr,&__temp496v__unsafe_size,&__temp496v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1621v=__temp496v__unsafe_ptr;
  *__temp1622v=__temp496v__unsafe_size;
  *__temp1623v=__temp496v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp562v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1627v, unsigned long long* __temp1628v, unsigned long long* __temp1629v, unsigned long long* __temp1630v, unsigned long long* __temp1631v, char* __temp1632v) {
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
  unsigned long long __temp1625v=0;
  int __temp1626v=0;
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
  *__temp1627v=__temp569v__buf__unsafe_ptr;
  *__temp1628v=__temp569v__buf__unsafe_size;
  *__temp1629v=__temp569v__buf__unsafe_align;
  *__temp1630v=__temp569v__dat__pos;
  *__temp1631v=__temp569v__dat__length;
  *__temp1632v=__temp569v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp521v(const char* c, int* __temp1633v) {
  int z=0;
  z=c!=0;
  *__temp1633v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1634v) {
  int z=0;
  z=value?0:1;
  *__temp1634v=z;
}

int unsafe_temporary_cstr__temp570v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1639v) {
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
  unsigned long long __temp1637v=0;
  int __temp1638v=0;
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
  *__temp1639v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1640v) {
  int z=0;
  z=x!=0;
  *__temp1640v=z;
}

static inline __attribute__((always_inline)) int read__temp1199v(void* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, void** __temp1647v) {
  const char* __temp1200v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1202v__=0;
  int __temp1203v__=0;
  int __temp1641v=0;
  int __temp1642v=0;
  unsigned long long __temp1643v=0;
  unsigned long long __temp1644v=0;
  int __temp1645v=0;
  void* __temp1646v=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp570v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1200v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1200v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp393v(unsafe_ptr,&__temp1202v__);
  not__temp17v(__temp1202v__,&__temp1203v__);
  if(__temp1203v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  *__temp1647v=unsafe_ptr;
  
  __temp_failure:exists__temp521v(__temp1200v__,&__temp1641v);
  not__temp17v(__temp1641v,&__temp1642v);
  if(__temp1642v){
  __temp1643v=0;
  neq__temp301v(__temp1644v,__temp1643v,&__temp1645v);
  if(__temp1645v){
  __temp1644v=0;
  free__temp426v(&__temp1646v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp405v(unsigned long long x, unsigned long long* __temp1648v) {
  unsigned long long __temp407v=0;
  unsigned long long __temp408v__=0;
  __temp407v=1024;
  mul__temp133v(x,__temp407v,&__temp408v__);
  *__temp1648v=__temp408v__;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1649v) {
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
  *__temp1649v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1366v(void** __temp1650v, unsigned long long* __temp1651v, unsigned long long* __temp1652v, unsigned long long* __temp1653v, void** __temp1654v, void** __temp1655v, unsigned long long* __temp1656v, unsigned long long* __temp1657v, unsigned long long* __temp1658v, unsigned long long* __temp1659v, char* __temp1660v) {
  void* buf__unsafe_ptr=*__temp1650v;
  unsigned long long buf__unsafe_size=*__temp1651v;
  unsigned long long buf__unsafe_align=*__temp1652v;
  unsigned long long pos=*__temp1653v;
  void* f__unsafe_ptr=*__temp1654v;
  int __temp1368v__=0;
  int __temp1369v__=0;
  void* __temp1370v__=0;
  void* contents=0;
  unsigned long long __temp1371v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1372v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1373v__=0;
  void* __temp1374v__buf__unsafe_ptr=0;
  unsigned long long __temp1374v__buf__unsafe_size=0;
  unsigned long long __temp1374v__buf__unsafe_align=0;
  unsigned long long __temp1374v__dat__pos=0;
  unsigned long long __temp1374v__dat__length=0;
  char __temp1374v__dat__first=0;
  int __temp_errcode=0;
  exists__temp393v(buf__unsafe_ptr,&__temp1368v__);
  not__temp17v(__temp1368v__,&__temp1369v__);
  if(__temp1369v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  add__temp428v(buf__unsafe_ptr,pos,&__temp1370v__);
  contents=__temp1370v__;
  __temp_errcode=sub__temp329v(buf__unsafe_size,pos,&__temp1371v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1371v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp17v(success,&__temp1372v__);
  if(__temp1372v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp109v(pos,bytes_read,&__temp1373v__);
  pos=__temp1373v__;
  __temp_errcode=str__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1374v__buf__unsafe_ptr,&__temp1374v__buf__unsafe_size,&__temp1374v__buf__unsafe_align,&__temp1374v__dat__pos,&__temp1374v__dat__length,&__temp1374v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1650v=buf__unsafe_ptr;
  *__temp1651v=buf__unsafe_size;
  *__temp1652v=buf__unsafe_align;
  *__temp1653v=pos;
  *__temp1654v=f__unsafe_ptr;
  *__temp1655v=__temp1374v__buf__unsafe_ptr;
  *__temp1656v=__temp1374v__buf__unsafe_size;
  *__temp1657v=__temp1374v__buf__unsafe_align;
  *__temp1658v=__temp1374v__dat__pos;
  *__temp1659v=__temp1374v__dat__length;
  *__temp1660v=__temp1374v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1661v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1661v=z;
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

static inline __attribute__((always_inline)) int main__temp1555v() {
  void* __temp1557v__buf__unsafe_ptr=0;
  unsigned long long __temp1557v__buf__unsafe_size=0;
  unsigned long long __temp1557v__buf__unsafe_align=0;
  unsigned long long __temp1557v__dat__pos=0;
  unsigned long long __temp1557v__dat__length=0;
  char __temp1557v__dat__first=0;
  void* __temp1558v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  unsigned long long __temp1560v=0;
  unsigned long long __temp1561v__=0;
  void* __temp1562v__unsafe_ptr=0;
  unsigned long long __temp1562v__unsafe_size=0;
  unsigned long long __temp1562v__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1564v=0;
  unsigned long long __temp1565v=0;
  unsigned long long pos=0;
  int __temp1566v=0;
  void* __temp1567v__buf__unsafe_ptr=0;
  unsigned long long __temp1567v__buf__unsafe_size=0;
  unsigned long long __temp1567v__buf__unsafe_align=0;
  unsigned long long __temp1567v__dat__pos=0;
  unsigned long long __temp1567v__dat__length=0;
  char __temp1567v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1568v=0;
  void* __temp1569v__buf__unsafe_ptr=0;
  unsigned long long __temp1569v__buf__unsafe_size=0;
  unsigned long long __temp1569v__buf__unsafe_align=0;
  unsigned long long __temp1569v__dat__pos=0;
  unsigned long long __temp1569v__dat__length=0;
  char __temp1569v__dat__first=0;
  unsigned long long __temp1666v=0;
  int __temp1667v=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp539v(__temp1556v,&__temp1557v__buf__unsafe_ptr,&__temp1557v__buf__unsafe_size,&__temp1557v__buf__unsafe_align,&__temp1557v__dat__pos,&__temp1557v__dat__length,&__temp1557v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1199v(__temp1557v__buf__unsafe_ptr,__temp1557v__buf__unsafe_size,__temp1557v__buf__unsafe_align,__temp1557v__dat__pos,__temp1557v__dat__length,__temp1557v__dat__first,&__temp1558v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1558v__unsafe_ptr;
  __temp1560v=4;
  KB__temp405v(__temp1560v,&__temp1561v__);
  __temp_errcode=alloc__temp491v(__temp1561v__,&__temp1562v__unsafe_ptr,&__temp1562v__unsafe_size,&__temp1562v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1562v__unsafe_ptr;
  mem__unsafe_size=__temp1562v__unsafe_size;
  mem__unsafe_align=__temp1562v__unsafe_align;
  __temp1564v=0;
  __temp1565v=__temp1564v;
  pos=__temp1565v;
  while(1){
  __temp1566v=line__temp1366v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1567v__buf__unsafe_ptr,&__temp1567v__buf__unsafe_size,&__temp1567v__buf__unsafe_align,&__temp1567v__dat__pos,&__temp1567v__dat__length,&__temp1567v__dat__first);
  line__buf__unsafe_ptr=__temp1567v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1567v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1567v__buf__unsafe_align;
  line__dat__pos=__temp1567v__dat__pos;
  line__dat__length=__temp1567v__dat__length;
  line__dat__first=__temp1567v__dat__first;
  __temp1566v=__temp1566v==0;
  if(!__temp1566v)break;
  continue;
  }
  if(__temp1558v__unsafe_ptr)fclose((FILE*)__temp1558v__unsafe_ptr);
  __temp1558v__unsafe_ptr=0;
  __temp1568v=0;
  __temp_errcode=str__temp533v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1568v,pos,&__temp1569v__buf__unsafe_ptr,&__temp1569v__buf__unsafe_size,&__temp1569v__buf__unsafe_align,&__temp1569v__dat__pos,&__temp1569v__dat__length,&__temp1569v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp655v(__temp1569v__buf__unsafe_ptr,__temp1569v__buf__unsafe_size,__temp1569v__buf__unsafe_align,__temp1569v__dat__pos,__temp1569v__dat__length,__temp1569v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1666v=0;
  neq__temp301v(__temp1562v__unsafe_size,__temp1666v,&__temp1667v);
  if(__temp1667v){
  __temp1562v__unsafe_size=0;
  free__temp426v(&__temp1562v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1555v();return 0;}