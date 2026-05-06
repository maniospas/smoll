#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp441v="freeing alloc";
const char* const __temp1600v="./std";
const char* const __temp445v="already alloced";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp600v(const char* other, const char** __temp1610v) {
  *__temp1610v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1611v) {
  int z=0;
  z=x!=0;
  *__temp1611v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1612v) {
  int z=0;
  z=value?0:1;
  *__temp1612v=z;
}

static inline __attribute__((always_inline)) int read__temp1564v(const char* _path, void** __temp1613v) {
  const char* __temp1565v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1566v__=0;
  int __temp1567v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp600v(_path,&__temp1565v__);
  path=__temp1565v__;
  unsafe_ptr=opendir(path);
  exists__temp393v(unsafe_ptr,&__temp1566v__);
  not__temp17v(__temp1566v__,&__temp1567v__);
  if(__temp1567v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  *__temp1613v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp496v(void** __temp1614v, unsigned long long* __temp1615v, unsigned long long* __temp1616v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1614v=unsafe_ptr;
  *__temp1615v=unsafe_size;
  *__temp1616v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1617v) {
  int value=0;
  *__temp1617v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1618v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1618v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1619v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1619v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1620v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1620v=z;
}

static inline __attribute__((always_inline)) void print__temp343v(const char* value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1621v) {
  void* allocated=*__temp1621v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1621v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1622v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1622v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1623v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1623v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1624v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1624v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1625v, unsigned long long* __temp1626v, unsigned long long* __temp1627v, unsigned long long size, void** __temp1628v, unsigned long long* __temp1629v, unsigned long long* __temp1630v) {
  void* buffer__unsafe_ptr=*__temp1625v;
  unsigned long long buffer__unsafe_size=*__temp1626v;
  unsigned long long buffer__unsafe_align=*__temp1627v;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  int __temp444v__=0;
  unsigned long long __temp447v=0;
  int __temp448v__=0;
  unsigned long long __temp449v=0;
  unsigned long long __temp450v__=0;
  unsigned long long __temp452v=0;
  int __temp453v__=0;
  unsigned long long __temp454v__=0;
  unsigned long long bytes=0;
  void* __temp455v__=0;
  unsigned long long __temp456v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp444v__);
  if(__temp444v__){
  print__temp343v(__temp445v);
  __temp447v=0;
  neq__temp301v(size,__temp447v,&__temp448v__);
  if(__temp448v__){
  __temp449v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp450v__);
  zero__temp427v(buffer__unsafe_ptr,__temp449v,__temp450v__);
  }
  goto __temp_return;
  }
  __temp452v=0;
  neq__temp301v(buffer__unsafe_size,__temp452v,&__temp453v__);
  if(__temp453v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp454v__);
  bytes=__temp454v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp423v(bytes,&__temp455v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp455v__;
  __temp456v=0;
  zero__temp427v(buffer__unsafe_ptr,__temp456v,bytes);
  __temp_return:
  *__temp1625v=buffer__unsafe_ptr;
  *__temp1626v=buffer__unsafe_size;
  *__temp1627v=buffer__unsafe_align;
  *__temp1628v=buffer__unsafe_ptr;
  *__temp1629v=buffer__unsafe_size;
  *__temp1630v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

int alloc__temp495v(unsigned long long size, void** __temp1635v, unsigned long long* __temp1636v, unsigned long long* __temp1637v) {
  void* __temp498v__unsafe_ptr=0;
  unsigned long long __temp498v__unsafe_size=0;
  unsigned long long __temp498v__unsafe_align=0;
  void* __temp499v__unsafe_ptr=0;
  unsigned long long __temp499v__unsafe_size=0;
  unsigned long long __temp499v__unsafe_align=0;
  void* __temp500v__unsafe_ptr=0;
  unsigned long long __temp500v__unsafe_size=0;
  unsigned long long __temp500v__unsafe_align=0;
  unsigned long long __temp1633v=0;
  int __temp1634v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp496v(&__temp498v__unsafe_ptr,&__temp498v__unsafe_size,&__temp498v__unsafe_align);
  __temp499v__unsafe_ptr=__temp498v__unsafe_ptr;
  __temp499v__unsafe_size=__temp498v__unsafe_size;
  __temp499v__unsafe_align=__temp498v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp499v__unsafe_ptr,&__temp499v__unsafe_size,&__temp499v__unsafe_align,size,&__temp500v__unsafe_ptr,&__temp500v__unsafe_size,&__temp500v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1635v=__temp500v__unsafe_ptr;
  *__temp1636v=__temp500v__unsafe_size;
  *__temp1637v=__temp500v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int unsafe_entry__temp1574v(void** __temp1638v, const char** __temp1639v) {
  void* f__unsafe_ptr=*__temp1638v;
  int __temp1575v__=0;
  int __temp1576v__=0;
  void* de=0;
  int __temp1577v__=0;
  int __temp1578v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  exists__temp393v(f__unsafe_ptr,&__temp1575v__);
  not__temp17v(__temp1575v__,&__temp1576v__);
  if(__temp1576v__){
  __temp_errcode=40;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp393v(de,&__temp1577v__);
  not__temp17v(__temp1577v__,&__temp1578v__);
  if(__temp1578v__){
  __temp_errcode=41;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  *__temp1638v=f__unsafe_ptr;
  *__temp1639v=dirname;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1640v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1640v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1641v) {
  *__temp1641v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1642v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1642v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1643v) {
  int __temp491v__=0;
  unsigned long long __temp492v__=0;
  void* __temp493v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp491v__);
  if(__temp491v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp492v__);
  add__temp428v(buffer__unsafe_ptr,__temp492v__,&__temp493v__);
  *__temp1643v=__temp493v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp527v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1644v, unsigned long long* __temp1645v, unsigned long long* __temp1646v, unsigned long long* __temp1647v, unsigned long long* __temp1648v, char* __temp1649v) {
  *__temp1644v=buf__unsafe_ptr;
  *__temp1645v=buf__unsafe_size;
  *__temp1646v=buf__unsafe_align;
  *__temp1647v=dat__pos;
  *__temp1648v=dat__length;
  *__temp1649v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp537v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1650v, unsigned long long* __temp1651v, unsigned long long* __temp1652v, unsigned long long* __temp1653v, unsigned long long* __temp1654v, char* __temp1655v) {
  unsigned long long __temp538v=0;
  int __temp539v__=0;
  void* __temp540v__=0;
  char __temp541v__value=0;
  char first=0;
  void* __temp542v__buf__unsafe_ptr=0;
  unsigned long long __temp542v__buf__unsafe_size=0;
  unsigned long long __temp542v__buf__unsafe_align=0;
  unsigned long long __temp542v__dat__pos=0;
  unsigned long long __temp542v__dat__length=0;
  char __temp542v__dat__first=0;
  int __temp_errcode=0;
  __temp538v=0;
  neq__temp301v(length,__temp538v,&__temp539v__);
  if(__temp539v__){
  __temp_errcode=get__temp490v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp540v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp540v__){
  goto __temp_failure;
  }
  memcpy(&__temp541v__value,(char*)__temp540v__,1);
  first=__temp541v__value;
  }
  str__temp527v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp542v__buf__unsafe_ptr,&__temp542v__buf__unsafe_size,&__temp542v__buf__unsafe_align,&__temp542v__dat__pos,&__temp542v__dat__length,&__temp542v__dat__first);
  *__temp1650v=__temp542v__buf__unsafe_ptr;
  *__temp1651v=__temp542v__buf__unsafe_size;
  *__temp1652v=__temp542v__buf__unsafe_align;
  *__temp1653v=__temp542v__dat__pos;
  *__temp1654v=__temp542v__dat__length;
  *__temp1655v=__temp542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp543v(const char* c, void** __temp1657v, unsigned long long* __temp1658v, unsigned long long* __temp1659v, unsigned long long* __temp1660v, unsigned long long* __temp1661v, char* __temp1662v) {
  void* __temp544v__unsafe_ptr=0;
  unsigned long long __temp544v__unsafe_size=0;
  unsigned long long __temp544v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp545v=0;
  void* __temp546v__buf__unsafe_ptr=0;
  unsigned long long __temp546v__buf__unsafe_size=0;
  unsigned long long __temp546v__buf__unsafe_align=0;
  unsigned long long __temp546v__dat__pos=0;
  unsigned long long __temp546v__dat__length=0;
  char __temp546v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp496v(&__temp544v__unsafe_ptr,&__temp544v__unsafe_size,&__temp544v__unsafe_align);
  buf__unsafe_ptr=__temp544v__unsafe_ptr;
  buf__unsafe_size=__temp544v__unsafe_size;
  buf__unsafe_align=__temp544v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp545v=0;
  __temp_errcode=str__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp545v,length,&__temp546v__buf__unsafe_ptr,&__temp546v__buf__unsafe_size,&__temp546v__buf__unsafe_align,&__temp546v__dat__pos,&__temp546v__dat__length,&__temp546v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1657v=__temp546v__buf__unsafe_ptr;
  *__temp1658v=__temp546v__buf__unsafe_size;
  *__temp1659v=__temp546v__buf__unsafe_align;
  *__temp1660v=__temp546v__dat__pos;
  *__temp1661v=__temp546v__dat__length;
  *__temp1662v=__temp546v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp547v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1663v) {
  *__temp1663v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1664v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1664v=z;
}

static inline __attribute__((always_inline)) void len__temp494v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1665v) {
  *__temp1665v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1666v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1666v=z;
}

int copy__temp668v(void** __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v, unsigned long long* __temp1672v, const char* _other, void** __temp1673v, unsigned long long* __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v, char* __temp1678v) {
  void* buf__unsafe_ptr=*__temp1669v;
  unsigned long long buf__unsafe_size=*__temp1670v;
  unsigned long long buf__unsafe_align=*__temp1671v;
  unsigned long long pos=*__temp1672v;
  void* __temp669v__buf__unsafe_ptr=0;
  unsigned long long __temp669v__buf__unsafe_size=0;
  unsigned long long __temp669v__buf__unsafe_align=0;
  unsigned long long __temp669v__dat__pos=0;
  unsigned long long __temp669v__dat__length=0;
  char __temp669v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp670v__=0;
  unsigned long long __temp671v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp672v__=0;
  int __temp673v__=0;
  unsigned long long __temp674v=0;
  unsigned long long __temp675v__=0;
  unsigned long long prev_pos=0;
  void* __temp676v__buf__unsafe_ptr=0;
  unsigned long long __temp676v__buf__unsafe_size=0;
  unsigned long long __temp676v__buf__unsafe_align=0;
  unsigned long long __temp676v__dat__pos=0;
  unsigned long long __temp676v__dat__length=0;
  char __temp676v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp543v(_other,&__temp669v__buf__unsafe_ptr,&__temp669v__buf__unsafe_size,&__temp669v__buf__unsafe_align,&__temp669v__dat__pos,&__temp669v__dat__length,&__temp669v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp669v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp669v__buf__unsafe_size;
  other__buf__unsafe_align=__temp669v__buf__unsafe_align;
  other__dat__pos=__temp669v__dat__pos;
  other__dat__length=__temp669v__dat__length;
  other__dat__first=__temp669v__dat__first;
  len__temp547v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp670v__);
  add__temp109v(pos,__temp670v__,&__temp671v__);
  next_pos=__temp671v__;
  len__temp494v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp672v__);
  gt__temp205v(next_pos,__temp672v__,&__temp673v__);
  if(__temp673v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp674v=0;
  add__temp109v(pos,__temp674v,&__temp675v__);
  prev_pos=__temp675v__;
  pos=next_pos;
  str__temp527v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp676v__buf__unsafe_ptr,&__temp676v__buf__unsafe_size,&__temp676v__buf__unsafe_align,&__temp676v__dat__pos,&__temp676v__dat__length,&__temp676v__dat__first);
  *__temp1669v=buf__unsafe_ptr;
  *__temp1670v=buf__unsafe_size;
  *__temp1671v=buf__unsafe_align;
  *__temp1672v=pos;
  *__temp1673v=__temp676v__buf__unsafe_ptr;
  *__temp1674v=__temp676v__buf__unsafe_size;
  *__temp1675v=__temp676v__buf__unsafe_align;
  *__temp1676v=__temp676v__dat__pos;
  *__temp1677v=__temp676v__dat__length;
  *__temp1678v=__temp676v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1593v(void** __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v, void** __temp1682v, void** __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long* __temp1687v, char* __temp1688v) {
  void* buf__unsafe_ptr=*__temp1679v;
  unsigned long long buf__unsafe_size=*__temp1680v;
  unsigned long long buf__unsafe_align=*__temp1681v;
  void* f__unsafe_ptr=*__temp1682v;
  unsigned long long __temp1595v=0;
  unsigned long long __temp1596v=0;
  unsigned long long pos=0;
  const char* __temp1597v__=0;
  void* __temp1598v__buf__unsafe_ptr=0;
  unsigned long long __temp1598v__buf__unsafe_size=0;
  unsigned long long __temp1598v__buf__unsafe_align=0;
  unsigned long long __temp1598v__dat__pos=0;
  unsigned long long __temp1598v__dat__length=0;
  char __temp1598v__dat__first=0;
  int __temp_errcode=0;
  __temp1595v=0;
  __temp1596v=__temp1595v;
  pos=__temp1596v;
  __temp_errcode=unsafe_entry__temp1574v(&f__unsafe_ptr,&__temp1597v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp668v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp1597v__,&__temp1598v__buf__unsafe_ptr,&__temp1598v__buf__unsafe_size,&__temp1598v__buf__unsafe_align,&__temp1598v__dat__pos,&__temp1598v__dat__length,&__temp1598v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1679v=buf__unsafe_ptr;
  *__temp1680v=buf__unsafe_size;
  *__temp1681v=buf__unsafe_align;
  *__temp1682v=f__unsafe_ptr;
  *__temp1683v=__temp1598v__buf__unsafe_ptr;
  *__temp1684v=__temp1598v__buf__unsafe_size;
  *__temp1685v=__temp1598v__buf__unsafe_align;
  *__temp1686v=__temp1598v__dat__pos;
  *__temp1687v=__temp1598v__dat__length;
  *__temp1688v=__temp1598v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp699v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp701v__=0;
  int __temp702v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp701v__);
  gt__temp205v(__temp701v__,s__buf__unsafe_size,&__temp702v__);
  if(__temp702v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1599v() {
  void* __temp1601v__unsafe_ptr=0;
  void* __temp1603v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1604v=0;
  void* __temp1605v__unsafe_ptr=0;
  unsigned long long __temp1605v__unsafe_size=0;
  unsigned long long __temp1605v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1607v=0;
  void* __temp1608v__buf__unsafe_ptr=0;
  unsigned long long __temp1608v__buf__unsafe_size=0;
  unsigned long long __temp1608v__buf__unsafe_align=0;
  unsigned long long __temp1608v__dat__pos=0;
  unsigned long long __temp1608v__dat__length=0;
  char __temp1608v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1692v=0;
  int __temp1693v=0;
  int __temp_errcode=0;
  __temp_errcode=read__temp1564v(__temp1600v,&__temp1601v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1603v__unsafe_ptr=__temp1601v__unsafe_ptr;
  dir__unsafe_ptr=__temp1603v__unsafe_ptr;
  __temp1604v=128;
  __temp_errcode=alloc__temp495v(__temp1604v,&__temp1605v__unsafe_ptr,&__temp1605v__unsafe_size,&__temp1605v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1605v__unsafe_ptr;
  buf__unsafe_size=__temp1605v__unsafe_size;
  buf__unsafe_align=__temp1605v__unsafe_align;
  while(1){
  __temp1607v=entry__temp1593v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&dir__unsafe_ptr,&__temp1608v__buf__unsafe_ptr,&__temp1608v__buf__unsafe_size,&__temp1608v__buf__unsafe_align,&__temp1608v__dat__pos,&__temp1608v__dat__length,&__temp1608v__dat__first);
  entry__buf__unsafe_ptr=__temp1608v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1608v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1608v__buf__unsafe_align;
  entry__dat__pos=__temp1608v__dat__pos;
  entry__dat__length=__temp1608v__dat__length;
  entry__dat__first=__temp1608v__dat__first;
  __temp1607v=__temp1607v==0;
  if(!__temp1607v)break;
  __temp_errcode=print__temp699v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1692v=0;
  neq__temp301v(__temp1605v__unsafe_size,__temp1692v,&__temp1693v);
  if(__temp1693v){
  __temp1605v__unsafe_size=0;
  print__temp343v(__temp441v);
  free__temp426v(&__temp1605v__unsafe_ptr);
  }
  if(__temp1601v__unsafe_ptr)closedir((DIR*)__temp1601v__unsafe_ptr);
  __temp1601v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1599v();return 0;}