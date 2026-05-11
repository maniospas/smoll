#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1636v="README.md";
const char* const __temp436v="free";
static const char* __temp_all_errcodes[44] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1651v, unsigned long long* __temp1652v, unsigned long long* __temp1653v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1651v=unsafe_ptr;
  *__temp1652v=unsafe_size;
  *__temp1653v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1654v) {
  int value=0;
  *__temp1654v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1655v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1655v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1656v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1656v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1657v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1657v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1658v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1658v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1659v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1659v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1660v) {
  *__temp1660v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1661v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1661v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1662v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1662v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1663v, unsigned long long* __temp1664v, unsigned long long* __temp1665v, char* __temp1666v) {
  goto __temp_return;
  __temp_return:
  *__temp1663v=unsafe_ptr;
  *__temp1664v=dat__pos;
  *__temp1665v=dat__length;
  *__temp1666v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1667v, unsigned long long* __temp1668v, unsigned long long* __temp1669v, char* __temp1670v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1667v=__temp552v__unsafe_ptr;
  *__temp1668v=__temp552v__dat__pos;
  *__temp1669v=__temp552v__dat__length;
  *__temp1670v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1671v, unsigned long long* __temp1672v, unsigned long long* __temp1673v, char* __temp1674v) {
  unsigned long long __temp562v=0;
  char __temp563v__=0;
  char* __temp564v__=0;
  char __temp565v__value=0;
  char first=0;
  char* __temp566v__unsafe_ptr=0;
  unsigned long long __temp566v__dat__pos=0;
  unsigned long long __temp566v__dat__length=0;
  char __temp566v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp562v=0;
  neq__temp302v(length,__temp562v,&__temp563v__);
  if(__temp563v__){
  __temp_errcode=get__temp505v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp564v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp564v__){
  goto __temp_failure;
  }
  memcpy(&__temp565v__value,__temp564v__,1);
  first=__temp565v__value;
  }
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp566v__unsafe_ptr,&__temp566v__dat__pos,&__temp566v__dat__length,&__temp566v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1671v=__temp566v__unsafe_ptr;
  *__temp1672v=__temp566v__dat__pos;
  *__temp1673v=__temp566v__dat__length;
  *__temp1674v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1675v, unsigned long long* __temp1676v, unsigned long long* __temp1677v, char* __temp1678v) {
  char* __temp568v__unsafe_ptr=0;
  unsigned long long __temp568v__unsafe_size=0;
  unsigned long long __temp568v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp569v=0;
  char* __temp570v__unsafe_ptr=0;
  unsigned long long __temp570v__dat__pos=0;
  unsigned long long __temp570v__dat__length=0;
  char __temp570v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp568v__unsafe_ptr,&__temp568v__unsafe_size,&__temp568v__unsafe_align);
  buf__unsafe_ptr=__temp568v__unsafe_ptr;
  buf__unsafe_size=__temp568v__unsafe_size;
  buf__unsafe_align=__temp568v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp569v=0;
  __temp_errcode=str__temp561v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp569v,length,&__temp570v__unsafe_ptr,&__temp570v__dat__pos,&__temp570v__dat__length,&__temp570v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1675v=__temp570v__unsafe_ptr;
  *__temp1676v=__temp570v__dat__pos;
  *__temp1677v=__temp570v__dat__length;
  *__temp1678v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp571v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1679v) {
  goto __temp_return;
  __temp_return:
  *__temp1679v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1680v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1681v) {
  char* allocated=*__temp1681v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1681v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1682v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1682v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1683v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1683v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1684v, unsigned long long* __temp1685v, unsigned long long* __temp1686v, unsigned long long size, char** __temp1687v, unsigned long long* __temp1688v, unsigned long long* __temp1689v) {
  char* buffer__unsafe_ptr=*__temp1684v;
  unsigned long long buffer__unsafe_size=*__temp1685v;
  unsigned long long buffer__unsafe_align=*__temp1686v;
  int __temp435v=0;
  unsigned long long __temp438v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  char __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  char __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  char* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp302v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp429v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp302v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1684v=buffer__unsafe_ptr;
  *__temp1685v=buffer__unsafe_size;
  *__temp1686v=buffer__unsafe_align;
  *__temp1687v=buffer__unsafe_ptr;
  *__temp1688v=buffer__unsafe_size;
  *__temp1689v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1690v, unsigned long long* __temp1691v, unsigned long long* __temp1692v) {
  char* __temp513v__unsafe_ptr=0;
  unsigned long long __temp513v__unsafe_size=0;
  unsigned long long __temp513v__unsafe_align=0;
  char* __temp514v__unsafe_ptr=0;
  unsigned long long __temp514v__unsafe_size=0;
  unsigned long long __temp514v__unsafe_align=0;
  char* __temp515v__unsafe_ptr=0;
  unsigned long long __temp515v__unsafe_size=0;
  unsigned long long __temp515v__unsafe_align=0;
  unsigned long long __temp516v____temp438v=0;
  char __temp516v____temp439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  __temp514v__unsafe_ptr=__temp513v__unsafe_ptr;
  __temp514v__unsafe_size=__temp513v__unsafe_size;
  __temp514v__unsafe_align=__temp513v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp514v__unsafe_ptr,&__temp514v__unsafe_size,&__temp514v__unsafe_align,size,&__temp515v__unsafe_ptr,&__temp515v__unsafe_size,&__temp515v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1690v=__temp515v__unsafe_ptr;
  *__temp1691v=__temp515v__unsafe_size;
  *__temp1692v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp590v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1693v, unsigned long long* __temp1694v, unsigned long long* __temp1695v, char* __temp1696v) {
  unsigned long long __temp591v=0;
  unsigned long long __temp592v__=0;
  unsigned long long __temp593v__=0;
  char* __temp594v__unsafe_ptr=0;
  unsigned long long __temp594v__unsafe_size=0;
  unsigned long long __temp594v__unsafe_align=0;
  unsigned long long __temp595v____temp516v____temp438v=0;
  char __temp595v____temp516v____temp439v__=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  char* endpos=0;
  unsigned long long __temp596v=0;
  char* __temp597v__unsafe_ptr=0;
  unsigned long long __temp597v__dat__pos=0;
  unsigned long long __temp597v__dat__length=0;
  char __temp597v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp591v=1;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp592v__);
  add__temp110v(__temp591v,__temp592v__,&__temp593v__);
  __temp_errcode=alloc__temp510v(__temp593v__,&__temp594v__unsafe_ptr,&__temp594v__unsafe_size,&__temp594v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp594v__unsafe_ptr;
  buf__unsafe_size=__temp594v__unsafe_size;
  buf__unsafe_align=__temp594v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp596v=0;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp596v,other__dat__length,other__dat__first,&__temp597v__unsafe_ptr,&__temp597v__dat__pos,&__temp597v__dat__length,&__temp597v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1693v=__temp597v__unsafe_ptr;
  *__temp1694v=__temp597v__dat__pos;
  *__temp1695v=__temp597v__dat__length;
  *__temp1696v=__temp597v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp545v(const char* c, char* __temp1697v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1697v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1698v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1698v=z;
}

int unsafe_temporary_cstr__temp598v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1699v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp599v__unsafe_ptr=0;
  unsigned long long __temp599v__dat__pos=0;
  unsigned long long __temp599v__dat__length=0;
  char __temp599v__dat__first=0;
  unsigned long long __temp600v____temp595v____temp516v____temp438v=0;
  unsigned long long __temp600v____temp594v__unsafe_size=0;
  char __temp600v____temp595v____temp516v____temp439v__=0;
  char* c__unsafe_ptr=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp601v__=0;
  char __temp602v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp590v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp599v__unsafe_ptr,&__temp599v__dat__pos,&__temp599v__dat__length,&__temp599v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp599v__unsafe_ptr;
  c__dat__pos=__temp599v__dat__pos;
  c__dat__length=__temp599v__dat__length;
  c__dat__first=__temp599v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1699v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1700v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1700v=z;
}

static inline __attribute__((always_inline)) int read__temp1297v(char* _path__unsafe_ptr, unsigned long long _path__dat__pos, unsigned long long _path__dat__length, char _path__dat__first, char** __temp1701v) {
  const char* __temp1298v__=0;
  char __temp1299v____temp601v__=0;
  char __temp1299v____temp602v__=0;
  unsigned long long __temp1299v____temp600v____temp595v____temp516v____temp438v=0;
  unsigned long long __temp1299v____temp600v____temp594v__unsafe_size=0;
  char __temp1299v____temp600v____temp595v____temp516v____temp439v__=0;
  char* __temp1299v____temp599v__unsafe_ptr=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1300v__=0;
  char __temp1301v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp598v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1298v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1298v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1300v__);
  not__temp18v(__temp1300v__,&__temp1301v__);
  if(__temp1301v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1701v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1702v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1702v=__temp412v__;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1703v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1703v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1704v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  char __temp334v__=0;
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1704v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1464v(char** __temp1705v, unsigned long long* __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v, char** __temp1709v, char** __temp1710v, unsigned long long* __temp1711v, unsigned long long* __temp1712v, char* __temp1713v) {
  char* buf__unsafe_ptr=*__temp1705v;
  unsigned long long buf__unsafe_size=*__temp1706v;
  unsigned long long buf__unsafe_align=*__temp1707v;
  unsigned long long pos=*__temp1708v;
  char* f__unsafe_ptr=*__temp1709v;
  int __temp1465v=0;
  char __temp1466v__=0;
  char __temp1467v__=0;
  char* __temp1468v__=0;
  char* contents=0;
  unsigned long long __temp1469v__=0;
  unsigned long long size=0;
  char success=0;
  char __temp1470v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1471v__=0;
  char* __temp1472v__unsafe_ptr=0;
  unsigned long long __temp1472v__dat__pos=0;
  unsigned long long __temp1472v__dat__length=0;
  char __temp1472v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1466v__);
  not__temp18v(__temp1466v__,&__temp1467v__);
  if(__temp1467v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1468v__);
  contents=__temp1468v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1469v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1469v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1470v__);
  if(__temp1470v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1471v__);
  pos=__temp1471v__;
  __temp_errcode=str__temp561v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1472v__unsafe_ptr,&__temp1472v__dat__pos,&__temp1472v__dat__length,&__temp1472v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1705v=buf__unsafe_ptr;
  *__temp1706v=buf__unsafe_size;
  *__temp1707v=buf__unsafe_align;
  *__temp1708v=pos;
  *__temp1709v=f__unsafe_ptr;
  *__temp1710v=__temp1472v__unsafe_ptr;
  *__temp1711v=__temp1472v__dat__pos;
  *__temp1712v=__temp1472v__dat__length;
  *__temp1713v=__temp1472v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp681v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp682v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1635v() {
  char* __temp1637v__unsafe_ptr=0;
  unsigned long long __temp1637v__dat__pos=0;
  unsigned long long __temp1637v__dat__length=0;
  char __temp1637v__dat__first=0;
  char* __temp1638v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  unsigned long long __temp1640v=0;
  unsigned long long __temp1641v__=0;
  char* __temp1642v__unsafe_ptr=0;
  unsigned long long __temp1642v__unsafe_size=0;
  unsigned long long __temp1642v__unsafe_align=0;
  unsigned long long __temp1643v____temp516v____temp438v=0;
  char __temp1643v____temp516v____temp439v__=0;
  char* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  unsigned long long __temp1644v=0;
  unsigned long long __temp1645v=0;
  unsigned long long pos=0;
  char __temp1646v=0;
  char* __temp1647v__unsafe_ptr=0;
  unsigned long long __temp1647v__dat__pos=0;
  unsigned long long __temp1647v__dat__length=0;
  char __temp1647v__dat__first=0;
  char* line__unsafe_ptr=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1648v=0;
  char* __temp1649v__unsafe_ptr=0;
  unsigned long long __temp1649v__dat__pos=0;
  unsigned long long __temp1649v__dat__length=0;
  char __temp1649v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp567v(__temp1636v,&__temp1637v__unsafe_ptr,&__temp1637v__dat__pos,&__temp1637v__dat__length,&__temp1637v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1297v(__temp1637v__unsafe_ptr,__temp1637v__dat__pos,__temp1637v__dat__length,__temp1637v__dat__first,&__temp1638v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1638v__unsafe_ptr;
  __temp1640v=4;
  KB__temp410v(__temp1640v,&__temp1641v__);
  __temp_errcode=alloc__temp510v(__temp1641v__,&__temp1642v__unsafe_ptr,&__temp1642v__unsafe_size,&__temp1642v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1642v__unsafe_ptr;
  mem__unsafe_size=__temp1642v__unsafe_size;
  mem__unsafe_align=__temp1642v__unsafe_align;
  __temp1644v=0;
  __temp1645v=__temp1644v;
  pos=__temp1645v;
  while(1){
  __temp_complain=line__temp1464v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1647v__unsafe_ptr,&__temp1647v__dat__pos,&__temp1647v__dat__length,&__temp1647v__dat__first);
  __temp1646v=__temp_complain;
  line__unsafe_ptr=__temp1647v__unsafe_ptr;
  line__dat__pos=__temp1647v__dat__pos;
  line__dat__length=__temp1647v__dat__length;
  line__dat__first=__temp1647v__dat__first;
  __temp1646v=__temp1646v==0;
  if(!__temp1646v){
  break;
  }
  continue;
  }
  if(__temp1638v__unsafe_ptr)fclose((FILE*)__temp1638v__unsafe_ptr);
  __temp1638v__unsafe_ptr=0;
  __temp1648v=0;
  __temp_errcode=str__temp561v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1648v,pos,&__temp1649v__unsafe_ptr,&__temp1649v__dat__pos,&__temp1649v__dat__length,&__temp1649v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp681v(__temp1649v__unsafe_ptr,__temp1649v__dat__pos,__temp1649v__dat__length,__temp1649v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1635v();return 0;}