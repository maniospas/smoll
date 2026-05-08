#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp576v="";
const char* const __temp1659v="README.md";
const char* const __temp348v="\n";
const char* const __temp409v="kilobytes to bytes";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1674v=unsafe_ptr;
  *__temp1675v=unsafe_size;
  *__temp1676v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1677v) {
  int value=0;
  *__temp1677v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1678v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1678v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1679v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1679v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1680v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1681v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1681v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1682v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1682v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1683v) {
  *__temp1683v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1684v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1684v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1685v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1685v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v, unsigned long long* __temp1690v, char* __temp1691v) {
  *__temp1686v=buf__unsafe_ptr;
  *__temp1687v=buf__unsafe_size;
  *__temp1688v=buf__unsafe_align;
  *__temp1689v=dat__pos;
  *__temp1690v=dat__length;
  *__temp1691v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1692v, unsigned long long* __temp1693v, unsigned long long* __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, char* __temp1697v) {
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
  int __temp_complain=0;
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
  *__temp1692v=__temp534v__buf__unsafe_ptr;
  *__temp1693v=__temp534v__buf__unsafe_size;
  *__temp1694v=__temp534v__buf__unsafe_align;
  *__temp1695v=__temp534v__dat__pos;
  *__temp1696v=__temp534v__dat__length;
  *__temp1697v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, char* __temp1704v) {
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
  int __temp_complain=0;
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
  *__temp1699v=__temp538v__buf__unsafe_ptr;
  *__temp1700v=__temp538v__buf__unsafe_size;
  *__temp1701v=__temp538v__buf__unsafe_align;
  *__temp1702v=__temp538v__dat__pos;
  *__temp1703v=__temp538v__dat__length;
  *__temp1704v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1705v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1705v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1706v) {
  *__temp1706v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1707v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1707v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1708v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1708v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1709v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1709v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp541v(const char* s, char* __temp1710v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1710v=c;
}

static inline __attribute__((always_inline)) void eq__temp542v(char x, char y, int* __temp1711v) {
  int z=0;
  z=(x==y);
  *__temp1711v=z;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1712v) {
  *__temp1712v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1713v) {
  void* allocated=*__temp1713v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1713v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1714v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1714v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1715v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1715v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1716v, unsigned long long* __temp1717v, unsigned long long* __temp1718v, unsigned long long size, void** __temp1719v, unsigned long long* __temp1720v, unsigned long long* __temp1721v) {
  void* buffer__unsafe_ptr=*__temp1716v;
  unsigned long long buffer__unsafe_size=*__temp1717v;
  unsigned long long buffer__unsafe_align=*__temp1718v;
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
  int __temp_complain=0;
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
  __temp_errcode=8;
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
  *__temp1716v=buffer__unsafe_ptr;
  *__temp1717v=buffer__unsafe_size;
  *__temp1718v=buffer__unsafe_align;
  *__temp1719v=buffer__unsafe_ptr;
  *__temp1720v=buffer__unsafe_size;
  *__temp1721v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp488v(unsigned long long size, void** __temp1726v, unsigned long long* __temp1727v, unsigned long long* __temp1728v) {
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  void* __temp493v__unsafe_ptr=0;
  unsigned long long __temp493v__unsafe_size=0;
  unsigned long long __temp493v__unsafe_align=0;
  unsigned long long __temp1724v=0;
  int __temp1725v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp489v(&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align);
  __temp492v__unsafe_ptr=__temp491v__unsafe_ptr;
  __temp492v__unsafe_size=__temp491v__unsafe_size;
  __temp492v__unsafe_align=__temp491v__unsafe_align;
  __temp_errcode=alloc__temp435v(&__temp492v__unsafe_ptr,&__temp492v__unsafe_size,&__temp492v__unsafe_align,size,&__temp493v__unsafe_ptr,&__temp493v__unsafe_size,&__temp493v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1726v=__temp493v__unsafe_ptr;
  *__temp1727v=__temp493v__unsafe_size;
  *__temp1728v=__temp493v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp558v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1732v, unsigned long long* __temp1733v, unsigned long long* __temp1734v, unsigned long long* __temp1735v, unsigned long long* __temp1736v, char* __temp1737v) {
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
  unsigned long long __temp1730v=0;
  int __temp1731v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
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
  *__temp1732v=__temp565v__buf__unsafe_ptr;
  *__temp1733v=__temp565v__buf__unsafe_size;
  *__temp1734v=__temp565v__buf__unsafe_align;
  *__temp1735v=__temp565v__dat__pos;
  *__temp1736v=__temp565v__dat__length;
  *__temp1737v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp517v(const char* c, int* __temp1738v) {
  int z=0;
  z=c!=0;
  *__temp1738v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1739v) {
  int z=0;
  z=value?0:1;
  *__temp1739v=z;
}

int unsafe_temporary_cstr__temp566v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1744v) {
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
  unsigned long long __temp1742v=0;
  int __temp1743v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
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
  *__temp1744v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1745v) {
  int z=0;
  z=x!=0;
  *__temp1745v=z;
}

static inline __attribute__((always_inline)) int read__temp1302v(void* _path__buf__unsafe_ptr, unsigned long long _path__buf__unsafe_size, unsigned long long _path__buf__unsafe_align, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, void** __temp1752v) {
  const char* __temp1303v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1305v__=0;
  int __temp1306v__=0;
  int __temp1746v=0;
  int __temp1747v=0;
  unsigned long long __temp1748v=0;
  unsigned long long __temp1749v=0;
  int __temp1750v=0;
  void* __temp1751v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp566v(_path__buf__unsafe_ptr,_path__buf__unsafe_size,_path__buf__unsafe_align,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1303v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1303v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp396v(unsafe_ptr,&__temp1305v__);
  not__temp18v(__temp1305v__,&__temp1306v__);
  if(__temp1306v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1752v=unsafe_ptr;
  
  __temp_failure:exists__temp517v(__temp1303v__,&__temp1746v);
  not__temp18v(__temp1746v,&__temp1747v);
  if(__temp1747v){
  __temp1748v=0;
  neq__temp302v(__temp1749v,__temp1748v,&__temp1750v);
  if(__temp1750v){
  __temp1749v=0;
  free__temp429v(&__temp1751v);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp408v(unsigned long long x, unsigned long long* __temp1753v) {
  unsigned long long __temp410v=0;
  unsigned long long __temp411v__=0;
  __temp410v=1024;
  mul__temp134v(x,__temp410v,&__temp411v__);
  *__temp1753v=__temp411v__;
}

static inline __attribute__((always_inline)) int line__temp1469v(void** __temp1754v, unsigned long long* __temp1755v, unsigned long long* __temp1756v, unsigned long long* __temp1757v, void** __temp1758v, void** __temp1759v, unsigned long long* __temp1760v, unsigned long long* __temp1761v, unsigned long long* __temp1762v, unsigned long long* __temp1763v, char* __temp1764v) {
  void* buf__unsafe_ptr=*__temp1754v;
  unsigned long long buf__unsafe_size=*__temp1755v;
  unsigned long long buf__unsafe_align=*__temp1756v;
  unsigned long long pos=*__temp1757v;
  void* f__unsafe_ptr=*__temp1758v;
  int __temp1471v__=0;
  int __temp1472v__=0;
  void* __temp1473v__=0;
  void* contents=0;
  unsigned long long __temp1474v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1475v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1476v__=0;
  void* __temp1477v__buf__unsafe_ptr=0;
  unsigned long long __temp1477v__buf__unsafe_size=0;
  unsigned long long __temp1477v__buf__unsafe_align=0;
  unsigned long long __temp1477v__dat__pos=0;
  unsigned long long __temp1477v__dat__length=0;
  char __temp1477v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp396v(buf__unsafe_ptr,&__temp1471v__);
  not__temp18v(__temp1471v__,&__temp1472v__);
  if(__temp1472v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp431v(buf__unsafe_ptr,pos,&__temp1473v__);
  contents=__temp1473v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1474v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1474v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1475v__);
  if(__temp1475v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1476v__);
  pos=__temp1476v__;
  __temp_errcode=str__temp529v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1477v__buf__unsafe_ptr,&__temp1477v__buf__unsafe_size,&__temp1477v__buf__unsafe_align,&__temp1477v__dat__pos,&__temp1477v__dat__length,&__temp1477v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1754v=buf__unsafe_ptr;
  *__temp1755v=buf__unsafe_size;
  *__temp1756v=buf__unsafe_align;
  *__temp1757v=pos;
  *__temp1758v=f__unsafe_ptr;
  *__temp1759v=__temp1477v__buf__unsafe_ptr;
  *__temp1760v=__temp1477v__buf__unsafe_size;
  *__temp1761v=__temp1477v__buf__unsafe_align;
  *__temp1762v=__temp1477v__dat__pos;
  *__temp1763v=__temp1477v__dat__length;
  *__temp1764v=__temp1477v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1765v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1765v=z;
}

static inline __attribute__((always_inline)) int print__temp691v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp693v__=0;
  int __temp694v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp348v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp693v__);
  gt__temp206v(__temp693v__,s__buf__unsafe_size,&__temp694v__);
  if(__temp694v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1658v() {
  void* __temp1660v__buf__unsafe_ptr=0;
  unsigned long long __temp1660v__buf__unsafe_size=0;
  unsigned long long __temp1660v__buf__unsafe_align=0;
  unsigned long long __temp1660v__dat__pos=0;
  unsigned long long __temp1660v__dat__length=0;
  char __temp1660v__dat__first=0;
  void* __temp1661v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  unsigned long long __temp1663v=0;
  unsigned long long __temp1664v__=0;
  void* __temp1665v__unsafe_ptr=0;
  unsigned long long __temp1665v__unsafe_size=0;
  unsigned long long __temp1665v__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1667v=0;
  unsigned long long __temp1668v=0;
  unsigned long long pos=0;
  int __temp1669v=0;
  void* __temp1670v__buf__unsafe_ptr=0;
  unsigned long long __temp1670v__buf__unsafe_size=0;
  unsigned long long __temp1670v__buf__unsafe_align=0;
  unsigned long long __temp1670v__dat__pos=0;
  unsigned long long __temp1670v__dat__length=0;
  char __temp1670v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1671v=0;
  void* __temp1672v__buf__unsafe_ptr=0;
  unsigned long long __temp1672v__buf__unsafe_size=0;
  unsigned long long __temp1672v__buf__unsafe_align=0;
  unsigned long long __temp1672v__dat__pos=0;
  unsigned long long __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  unsigned long long __temp1770v=0;
  int __temp1771v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp535v(__temp1659v,&__temp1660v__buf__unsafe_ptr,&__temp1660v__buf__unsafe_size,&__temp1660v__buf__unsafe_align,&__temp1660v__dat__pos,&__temp1660v__dat__length,&__temp1660v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1302v(__temp1660v__buf__unsafe_ptr,__temp1660v__buf__unsafe_size,__temp1660v__buf__unsafe_align,__temp1660v__dat__pos,__temp1660v__dat__length,__temp1660v__dat__first,&__temp1661v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1661v__unsafe_ptr;
  __temp1663v=4;
  KB__temp408v(__temp1663v,&__temp1664v__);
  __temp_errcode=alloc__temp488v(__temp1664v__,&__temp1665v__unsafe_ptr,&__temp1665v__unsafe_size,&__temp1665v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1665v__unsafe_ptr;
  mem__unsafe_size=__temp1665v__unsafe_size;
  mem__unsafe_align=__temp1665v__unsafe_align;
  __temp1667v=0;
  __temp1668v=__temp1667v;
  pos=__temp1668v;
  while(1){
  __temp_complain=line__temp1469v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1670v__buf__unsafe_ptr,&__temp1670v__buf__unsafe_size,&__temp1670v__buf__unsafe_align,&__temp1670v__dat__pos,&__temp1670v__dat__length,&__temp1670v__dat__first);
  __temp1669v=__temp_complain;
  line__buf__unsafe_ptr=__temp1670v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1670v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1670v__buf__unsafe_align;
  line__dat__pos=__temp1670v__dat__pos;
  line__dat__length=__temp1670v__dat__length;
  line__dat__first=__temp1670v__dat__first;
  __temp1669v=__temp1669v==0;
  if(!__temp1669v)break;
  continue;
  }
  if(__temp1661v__unsafe_ptr)fclose((FILE*)__temp1661v__unsafe_ptr);
  __temp1661v__unsafe_ptr=0;
  __temp1671v=0;
  __temp_errcode=str__temp529v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1671v,pos,&__temp1672v__buf__unsafe_ptr,&__temp1672v__buf__unsafe_size,&__temp1672v__buf__unsafe_align,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp691v(__temp1672v__buf__unsafe_ptr,__temp1672v__buf__unsafe_size,__temp1672v__buf__unsafe_align,__temp1672v__dat__pos,__temp1672v__dat__length,__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1770v=0;
  neq__temp302v(__temp1665v__unsafe_size,__temp1770v,&__temp1771v);
  if(__temp1771v){
  __temp1665v__unsafe_size=0;
  free__temp429v(&__temp1665v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1658v();return 0;}