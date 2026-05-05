#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1556v="./std";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp586v(const char* other, const char** __temp1566v) {
  *__temp1566v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1567v) {
  int z=0;
  z=x!=0;
  *__temp1567v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1568v) {
  int z=0;
  z=value?0:1;
  *__temp1568v=z;
}

static inline __attribute__((always_inline)) int read__temp1520v(const char* _path, void** __temp1569v) {
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
  *__temp1569v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp492v(void** __temp1570v, unsigned long long* __temp1571v, unsigned long long* __temp1572v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1570v=unsafe_ptr;
  *__temp1571v=unsafe_size;
  *__temp1572v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1573v) {
  int value=0;
  *__temp1573v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1574v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1574v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1575v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1575v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1576v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1576v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1577v) {
  void* allocated=*__temp1577v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1577v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1578v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1578v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1579v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1579v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1580v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1580v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1581v, unsigned long long* __temp1582v, unsigned long long* __temp1583v, unsigned long long size, void** __temp1584v, unsigned long long* __temp1585v, unsigned long long* __temp1586v) {
  void* buffer__unsafe_ptr=*__temp1581v;
  unsigned long long buffer__unsafe_size=*__temp1582v;
  unsigned long long buffer__unsafe_align=*__temp1583v;
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
  *__temp1581v=buffer__unsafe_ptr;
  *__temp1582v=buffer__unsafe_size;
  *__temp1583v=buffer__unsafe_align;
  *__temp1584v=buffer__unsafe_ptr;
  *__temp1585v=buffer__unsafe_size;
  *__temp1586v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp491v(unsigned long long size, void** __temp1591v, unsigned long long* __temp1592v, unsigned long long* __temp1593v) {
  void* __temp494v__unsafe_ptr=0;
  unsigned long long __temp494v__unsafe_size=0;
  unsigned long long __temp494v__unsafe_align=0;
  void* __temp495v__unsafe_ptr=0;
  unsigned long long __temp495v__unsafe_size=0;
  unsigned long long __temp495v__unsafe_align=0;
  void* __temp496v__unsafe_ptr=0;
  unsigned long long __temp496v__unsafe_size=0;
  unsigned long long __temp496v__unsafe_align=0;
  unsigned long long __temp1589v=0;
  int __temp1590v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp492v(&__temp494v__unsafe_ptr,&__temp494v__unsafe_size,&__temp494v__unsafe_align);
  __temp495v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp495v__unsafe_size=__temp494v__unsafe_size;
  __temp495v__unsafe_align=__temp494v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp495v__unsafe_ptr,&__temp495v__unsafe_size,&__temp495v__unsafe_align,size,&__temp496v__unsafe_ptr,&__temp496v__unsafe_size,&__temp496v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1591v=__temp496v__unsafe_ptr;
  *__temp1592v=__temp496v__unsafe_size;
  *__temp1593v=__temp496v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1530v(void** __temp1594v, const char** __temp1595v) {
  void* f__unsafe_ptr=*__temp1594v;
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
  *__temp1594v=f__unsafe_ptr;
  *__temp1595v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1596v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1596v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1597v) {
  *__temp1597v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1598v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1598v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1599v) {
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
  *__temp1599v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp523v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1600v, unsigned long long* __temp1601v, unsigned long long* __temp1602v, unsigned long long* __temp1603v, unsigned long long* __temp1604v, char* __temp1605v) {
  *__temp1600v=buf__unsafe_ptr;
  *__temp1601v=buf__unsafe_size;
  *__temp1602v=buf__unsafe_align;
  *__temp1603v=dat__pos;
  *__temp1604v=dat__length;
  *__temp1605v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp533v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1606v, unsigned long long* __temp1607v, unsigned long long* __temp1608v, unsigned long long* __temp1609v, unsigned long long* __temp1610v, char* __temp1611v) {
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
  *__temp1606v=__temp538v__buf__unsafe_ptr;
  *__temp1607v=__temp538v__buf__unsafe_size;
  *__temp1608v=__temp538v__buf__unsafe_align;
  *__temp1609v=__temp538v__dat__pos;
  *__temp1610v=__temp538v__dat__length;
  *__temp1611v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp539v(const char* c, void** __temp1613v, unsigned long long* __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v, unsigned long long* __temp1617v, char* __temp1618v) {
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
  *__temp1613v=__temp542v__buf__unsafe_ptr;
  *__temp1614v=__temp542v__buf__unsafe_size;
  *__temp1615v=__temp542v__buf__unsafe_align;
  *__temp1616v=__temp542v__dat__pos;
  *__temp1617v=__temp542v__dat__length;
  *__temp1618v=__temp542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
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

int copy_null_terminated__temp644v(void** __temp1625v, unsigned long long* __temp1626v, unsigned long long* __temp1627v, unsigned long long* __temp1628v, const char* _other, void** __temp1629v, unsigned long long* __temp1630v, unsigned long long* __temp1631v, unsigned long long* __temp1632v, unsigned long long* __temp1633v, char* __temp1634v) {
  void* buf__unsafe_ptr=*__temp1625v;
  unsigned long long buf__unsafe_size=*__temp1626v;
  unsigned long long buf__unsafe_align=*__temp1627v;
  unsigned long long pos=*__temp1628v;
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
  *__temp1625v=buf__unsafe_ptr;
  *__temp1626v=buf__unsafe_size;
  *__temp1627v=buf__unsafe_align;
  *__temp1628v=pos;
  *__temp1629v=__temp654v__buf__unsafe_ptr;
  *__temp1630v=__temp654v__buf__unsafe_size;
  *__temp1631v=__temp654v__buf__unsafe_align;
  *__temp1632v=__temp654v__dat__pos;
  *__temp1633v=__temp654v__dat__length;
  *__temp1634v=__temp654v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1549v(void** __temp1635v, unsigned long long* __temp1636v, unsigned long long* __temp1637v, void** __temp1638v, void** __temp1639v, unsigned long long* __temp1640v, unsigned long long* __temp1641v, unsigned long long* __temp1642v, unsigned long long* __temp1643v, char* __temp1644v) {
  void* buf__unsafe_ptr=*__temp1635v;
  unsigned long long buf__unsafe_size=*__temp1636v;
  unsigned long long buf__unsafe_align=*__temp1637v;
  void* f__unsafe_ptr=*__temp1638v;
  unsigned long long __temp1551v=0;
  unsigned long long __temp1552v=0;
  unsigned long long pos=0;
  const char* __temp1553v__=0;
  void* __temp1554v__buf__unsafe_ptr=0;
  unsigned long long __temp1554v__buf__unsafe_size=0;
  unsigned long long __temp1554v__buf__unsafe_align=0;
  unsigned long long __temp1554v__dat__pos=0;
  unsigned long long __temp1554v__dat__length=0;
  char __temp1554v__dat__first=0;
  int __temp_errcode=0;
  __temp1551v=0;
  __temp1552v=__temp1551v;
  pos=__temp1552v;
  __temp_errcode=unsafe_entry__temp1530v(&f__unsafe_ptr,&__temp1553v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy_null_terminated__temp644v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1553v__,&__temp1554v__buf__unsafe_ptr,&__temp1554v__buf__unsafe_size,&__temp1554v__buf__unsafe_align,&__temp1554v__dat__pos,&__temp1554v__dat__length,&__temp1554v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1635v=buf__unsafe_ptr;
  *__temp1636v=buf__unsafe_size;
  *__temp1637v=buf__unsafe_align;
  *__temp1638v=f__unsafe_ptr;
  *__temp1639v=__temp1554v__buf__unsafe_ptr;
  *__temp1640v=__temp1554v__buf__unsafe_size;
  *__temp1641v=__temp1554v__buf__unsafe_align;
  *__temp1642v=__temp1554v__dat__pos;
  *__temp1643v=__temp1554v__dat__length;
  *__temp1644v=__temp1554v__dat__first;
  
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

static inline __attribute__((always_inline)) int main__temp1555v() {
  void* __temp1557v__unsafe_ptr=0;
  void* __temp1559v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1560v=0;
  void* __temp1561v__unsafe_ptr=0;
  unsigned long long __temp1561v__unsafe_size=0;
  unsigned long long __temp1561v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1563v=0;
  void* __temp1564v__buf__unsafe_ptr=0;
  unsigned long long __temp1564v__buf__unsafe_size=0;
  unsigned long long __temp1564v__buf__unsafe_align=0;
  unsigned long long __temp1564v__dat__pos=0;
  unsigned long long __temp1564v__dat__length=0;
  char __temp1564v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1648v=0;
  int __temp1649v=0;
  int __temp_errcode=0;
  __temp_errcode=read__temp1520v(__temp1556v,&__temp1557v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1559v__unsafe_ptr=__temp1557v__unsafe_ptr;
  dir__unsafe_ptr=__temp1559v__unsafe_ptr;
  __temp1560v=128;
  __temp_errcode=alloc__temp491v(__temp1560v,&__temp1561v__unsafe_ptr,&__temp1561v__unsafe_size,&__temp1561v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1561v__unsafe_ptr;
  buf__unsafe_size=__temp1561v__unsafe_size;
  buf__unsafe_align=__temp1561v__unsafe_align;
  while(1){
  __temp1563v=entry__temp1549v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&dir__unsafe_ptr,&__temp1564v__buf__unsafe_ptr,&__temp1564v__buf__unsafe_size,&__temp1564v__buf__unsafe_align,&__temp1564v__dat__pos,&__temp1564v__dat__length,&__temp1564v__dat__first);
  entry__buf__unsafe_ptr=__temp1564v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1564v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1564v__buf__unsafe_align;
  entry__dat__pos=__temp1564v__dat__pos;
  entry__dat__length=__temp1564v__dat__length;
  entry__dat__first=__temp1564v__dat__first;
  __temp1563v=__temp1563v==0;
  if(!__temp1563v)break;
  __temp_errcode=print__temp655v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1648v=0;
  neq__temp301v(__temp1561v__unsafe_size,__temp1648v,&__temp1649v);
  if(__temp1649v){
  __temp1561v__unsafe_size=0;
  free__temp426v(&__temp1561v__unsafe_ptr);
  }
  if(__temp1557v__unsafe_ptr)closedir((DIR*)__temp1557v__unsafe_ptr);
  __temp1557v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1555v();return 0;}