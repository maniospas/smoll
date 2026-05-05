#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1562v="ls";
const char* const __temp578v="";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp492v(void** __temp1566v, unsigned long long* __temp1567v, unsigned long long* __temp1568v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1566v=unsafe_ptr;
  *__temp1567v=unsafe_size;
  *__temp1568v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1569v) {
  int value=0;
  *__temp1569v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1570v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1570v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1571v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1571v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1572v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1572v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1573v) {
  void* allocated=*__temp1573v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1573v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1574v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1574v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1575v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1575v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1576v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1576v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1577v, unsigned long long* __temp1578v, unsigned long long* __temp1579v, unsigned long long size, void** __temp1580v, unsigned long long* __temp1581v, unsigned long long* __temp1582v) {
  void* buffer__unsafe_ptr=*__temp1577v;
  unsigned long long buffer__unsafe_size=*__temp1578v;
  unsigned long long buffer__unsafe_align=*__temp1579v;
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
  *__temp1577v=buffer__unsafe_ptr;
  *__temp1578v=buffer__unsafe_size;
  *__temp1579v=buffer__unsafe_align;
  *__temp1580v=buffer__unsafe_ptr;
  *__temp1581v=buffer__unsafe_size;
  *__temp1582v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp491v(unsigned long long size, void** __temp1587v, unsigned long long* __temp1588v, unsigned long long* __temp1589v) {
  void* __temp494v__unsafe_ptr=0;
  unsigned long long __temp494v__unsafe_size=0;
  unsigned long long __temp494v__unsafe_align=0;
  void* __temp495v__unsafe_ptr=0;
  unsigned long long __temp495v__unsafe_size=0;
  unsigned long long __temp495v__unsafe_align=0;
  void* __temp496v__unsafe_ptr=0;
  unsigned long long __temp496v__unsafe_size=0;
  unsigned long long __temp496v__unsafe_align=0;
  unsigned long long __temp1585v=0;
  int __temp1586v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp492v(&__temp494v__unsafe_ptr,&__temp494v__unsafe_size,&__temp494v__unsafe_align);
  __temp495v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp495v__unsafe_size=__temp494v__unsafe_size;
  __temp495v__unsafe_align=__temp494v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp495v__unsafe_ptr,&__temp495v__unsafe_size,&__temp495v__unsafe_align,size,&__temp496v__unsafe_ptr,&__temp496v__unsafe_size,&__temp496v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1587v=__temp496v__unsafe_ptr;
  *__temp1588v=__temp496v__unsafe_size;
  *__temp1589v=__temp496v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1590v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1590v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1591v) {
  *__temp1591v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1592v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1592v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1593v) {
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
  *__temp1593v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp523v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1594v, unsigned long long* __temp1595v, unsigned long long* __temp1596v, unsigned long long* __temp1597v, unsigned long long* __temp1598v, char* __temp1599v) {
  *__temp1594v=buf__unsafe_ptr;
  *__temp1595v=buf__unsafe_size;
  *__temp1596v=buf__unsafe_align;
  *__temp1597v=dat__pos;
  *__temp1598v=dat__length;
  *__temp1599v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp533v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1600v, unsigned long long* __temp1601v, unsigned long long* __temp1602v, unsigned long long* __temp1603v, unsigned long long* __temp1604v, char* __temp1605v) {
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
  *__temp1600v=__temp538v__buf__unsafe_ptr;
  *__temp1601v=__temp538v__buf__unsafe_size;
  *__temp1602v=__temp538v__buf__unsafe_align;
  *__temp1603v=__temp538v__dat__pos;
  *__temp1604v=__temp538v__dat__length;
  *__temp1605v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp539v(const char* c, void** __temp1607v, unsigned long long* __temp1608v, unsigned long long* __temp1609v, unsigned long long* __temp1610v, unsigned long long* __temp1611v, char* __temp1612v) {
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
  *__temp1607v=__temp542v__buf__unsafe_ptr;
  *__temp1608v=__temp542v__buf__unsafe_size;
  *__temp1609v=__temp542v__buf__unsafe_align;
  *__temp1610v=__temp542v__dat__pos;
  *__temp1611v=__temp542v__dat__length;
  *__temp1612v=__temp542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp532v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1613v, unsigned long long* __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v, unsigned long long* __temp1617v, char* __temp1618v) {
  *__temp1613v=other__buf__unsafe_ptr;
  *__temp1614v=other__buf__unsafe_size;
  *__temp1615v=other__buf__unsafe_align;
  *__temp1616v=other__dat__pos;
  *__temp1617v=other__dat__length;
  *__temp1618v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp543v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1619v) {
  *__temp1619v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1620v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1620v=z;
}

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1621v) {
  *__temp1621v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1622v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1622v=z;
}

static inline __attribute__((always_inline)) int copy__temp615v(void** __temp1625v, unsigned long long* __temp1626v, unsigned long long* __temp1627v, unsigned long long* __temp1628v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1629v, unsigned long long* __temp1630v, unsigned long long* __temp1631v, unsigned long long* __temp1632v, unsigned long long* __temp1633v, char* __temp1634v) {
  void* buf__unsafe_ptr=*__temp1625v;
  unsigned long long buf__unsafe_size=*__temp1626v;
  unsigned long long buf__unsafe_align=*__temp1627v;
  unsigned long long pos=*__temp1628v;
  void* __temp616v__buf__unsafe_ptr=0;
  unsigned long long __temp616v__buf__unsafe_size=0;
  unsigned long long __temp616v__buf__unsafe_align=0;
  unsigned long long __temp616v__dat__pos=0;
  unsigned long long __temp616v__dat__length=0;
  char __temp616v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp617v__=0;
  unsigned long long __temp618v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp619v__=0;
  int __temp620v__=0;
  unsigned long long __temp621v=0;
  unsigned long long __temp622v__=0;
  unsigned long long prev_pos=0;
  void* __temp623v__buf__unsafe_ptr=0;
  unsigned long long __temp623v__buf__unsafe_size=0;
  unsigned long long __temp623v__buf__unsafe_align=0;
  unsigned long long __temp623v__dat__pos=0;
  unsigned long long __temp623v__dat__length=0;
  char __temp623v__dat__first=0;
  int __temp_errcode=0;
  str__temp532v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp616v__buf__unsafe_ptr,&__temp616v__buf__unsafe_size,&__temp616v__buf__unsafe_align,&__temp616v__dat__pos,&__temp616v__dat__length,&__temp616v__dat__first);
  other__buf__unsafe_ptr=__temp616v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp616v__buf__unsafe_size;
  other__buf__unsafe_align=__temp616v__buf__unsafe_align;
  other__dat__pos=__temp616v__dat__pos;
  other__dat__length=__temp616v__dat__length;
  other__dat__first=__temp616v__dat__first;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp617v__);
  add__temp109v(pos,__temp617v__,&__temp618v__);
  next_pos=__temp618v__;
  len__temp490v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp619v__);
  gt__temp205v(next_pos,__temp619v__,&__temp620v__);
  if(__temp620v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp621v=0;
  add__temp109v(pos,__temp621v,&__temp622v__);
  prev_pos=__temp622v__;
  pos=next_pos;
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp623v__buf__unsafe_ptr,&__temp623v__buf__unsafe_size,&__temp623v__buf__unsafe_align,&__temp623v__dat__pos,&__temp623v__dat__length,&__temp623v__dat__first);
  *__temp1625v=buf__unsafe_ptr;
  *__temp1626v=buf__unsafe_size;
  *__temp1627v=buf__unsafe_align;
  *__temp1628v=pos;
  *__temp1629v=__temp623v__buf__unsafe_ptr;
  *__temp1630v=__temp623v__buf__unsafe_size;
  *__temp1631v=__temp623v__buf__unsafe_align;
  *__temp1632v=__temp623v__dat__pos;
  *__temp1633v=__temp623v__dat__length;
  *__temp1634v=__temp623v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1635v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1635v=z;
}

static inline __attribute__((always_inline)) void char__temp545v(const char* s, char* __temp1636v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1636v=c;
}

static inline __attribute__((always_inline)) void eq__temp546v(char x, char y, int* __temp1637v) {
  int z=0;
  z=(x==y);
  *__temp1637v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp562v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1641v, unsigned long long* __temp1642v, unsigned long long* __temp1643v, unsigned long long* __temp1644v, unsigned long long* __temp1645v, char* __temp1646v) {
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
  unsigned long long __temp1639v=0;
  int __temp1640v=0;
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
  *__temp1641v=__temp569v__buf__unsafe_ptr;
  *__temp1642v=__temp569v__buf__unsafe_size;
  *__temp1643v=__temp569v__buf__unsafe_align;
  *__temp1644v=__temp569v__dat__pos;
  *__temp1645v=__temp569v__dat__length;
  *__temp1646v=__temp569v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp521v(const char* c, int* __temp1647v) {
  int z=0;
  z=c!=0;
  *__temp1647v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1648v) {
  int z=0;
  z=value?0:1;
  *__temp1648v=z;
}

int unsafe_temporary_cstr__temp570v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1653v) {
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
  unsigned long long __temp1651v=0;
  int __temp1652v=0;
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
  *__temp1653v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp377v(unsigned long long x, long long int* __temp1654v) {
  long long int z=0;
  z=x;
  *__temp1654v=z;
}

static inline __attribute__((always_inline)) void is_different__temp72v(long long int x, long long int y, int* __temp1655v) {
  int __temp73v=0;
  int __temp74v__=0;
  not__temp26v(__temp73v,&__temp74v__);
  *__temp1655v=__temp74v__;
}

static inline __attribute__((always_inline)) void neq__temp290v(long long int x, long long int y, int* __temp1656v) {
  int __temp291v__=0;
  int z=0;
  is_different__temp72v(x,y,&__temp291v__);
  z=x!=y?1:0;
  *__temp1656v=z;
}

static inline __attribute__((always_inline)) int system__temp1188v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1189v__=0;
  const char* cmd=0;
  long long int result=0;
  unsigned long long __temp1191v=0;
  long long int __temp1192v__=0;
  int __temp1193v__=0;
  int __temp1657v=0;
  int __temp1658v=0;
  unsigned long long __temp1659v=0;
  unsigned long long __temp1660v=0;
  int __temp1661v=0;
  void* __temp1662v=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp570v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1189v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1189v__;
  result=system((const char*)cmd);
  __temp1191v=0;
  int__temp377v(__temp1191v,&__temp1192v__);
  neq__temp290v(result,__temp1192v__,&__temp1193v__);
  if(__temp1193v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp521v(__temp1189v__,&__temp1657v);
  not__temp17v(__temp1657v,&__temp1658v);
  if(__temp1658v){
  __temp1659v=0;
  neq__temp301v(__temp1660v,__temp1659v,&__temp1661v);
  if(__temp1661v){
  __temp1660v=0;
  free__temp426v(&__temp1662v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1555v() {
  unsigned long long __temp1556v=0;
  void* __temp1557v__unsafe_ptr=0;
  unsigned long long __temp1557v__unsafe_size=0;
  unsigned long long __temp1557v__unsafe_align=0;
  void* __temp1559v__unsafe_ptr=0;
  unsigned long long __temp1559v__unsafe_size=0;
  unsigned long long __temp1559v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1560v=0;
  unsigned long long __temp1561v=0;
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
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1664v=0;
  int __temp1665v=0;
  int __temp_errcode=0;
  __temp1556v=2;
  __temp_errcode=alloc__temp491v(__temp1556v,&__temp1557v__unsafe_ptr,&__temp1557v__unsafe_size,&__temp1557v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1559v__unsafe_ptr=__temp1557v__unsafe_ptr;
  __temp1559v__unsafe_size=__temp1557v__unsafe_size;
  __temp1559v__unsafe_align=__temp1557v__unsafe_align;
  buf__unsafe_ptr=__temp1559v__unsafe_ptr;
  buf__unsafe_size=__temp1559v__unsafe_size;
  buf__unsafe_align=__temp1559v__unsafe_align;
  __temp1560v=0;
  __temp1561v=__temp1560v;
  __temp_errcode=str__temp539v(__temp1562v,&__temp1563v__buf__unsafe_ptr,&__temp1563v__buf__unsafe_size,&__temp1563v__buf__unsafe_align,&__temp1563v__dat__pos,&__temp1563v__dat__length,&__temp1563v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp615v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1561v,__temp1563v__buf__unsafe_ptr,__temp1563v__buf__unsafe_size,__temp1563v__buf__unsafe_align,__temp1563v__dat__pos,__temp1563v__dat__length,__temp1563v__dat__first,&__temp1564v__buf__unsafe_ptr,&__temp1564v__buf__unsafe_size,&__temp1564v__buf__unsafe_align,&__temp1564v__dat__pos,&__temp1564v__dat__length,&__temp1564v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1564v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1564v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1564v__buf__unsafe_align;
  s__dat__pos=__temp1564v__dat__pos;
  s__dat__length=__temp1564v__dat__length;
  s__dat__first=__temp1564v__dat__first;
  __temp_errcode=system__temp1188v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1664v=0;
  neq__temp301v(__temp1557v__unsafe_size,__temp1664v,&__temp1665v);
  if(__temp1665v){
  __temp1557v__unsafe_size=0;
  free__temp426v(&__temp1557v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1555v();return 0;}