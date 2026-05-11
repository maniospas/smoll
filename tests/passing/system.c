#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1642v="ls";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1646v, unsigned long long* __temp1647v, unsigned long long* __temp1648v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1646v=unsafe_ptr;
  *__temp1647v=unsafe_size;
  *__temp1648v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1649v) {
  int value=0;
  *__temp1649v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1650v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1650v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1651v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1651v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1652v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1652v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1653v) {
  char* allocated=*__temp1653v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1653v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1654v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1654v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1655v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1655v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1656v) {
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
  *__temp1656v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1657v, unsigned long long* __temp1658v, unsigned long long* __temp1659v, unsigned long long size, char** __temp1660v, unsigned long long* __temp1661v, unsigned long long* __temp1662v) {
  char* buffer__unsafe_ptr=*__temp1657v;
  unsigned long long buffer__unsafe_size=*__temp1658v;
  unsigned long long buffer__unsafe_align=*__temp1659v;
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
  *__temp1657v=buffer__unsafe_ptr;
  *__temp1658v=buffer__unsafe_size;
  *__temp1659v=buffer__unsafe_align;
  *__temp1660v=buffer__unsafe_ptr;
  *__temp1661v=buffer__unsafe_size;
  *__temp1662v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1663v, unsigned long long* __temp1664v, unsigned long long* __temp1665v) {
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
  *__temp1663v=__temp515v__unsafe_ptr;
  *__temp1664v=__temp515v__unsafe_size;
  *__temp1665v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1666v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1667v) {
  *__temp1667v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1668v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1668v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1669v) {
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
  *__temp1669v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1670v, unsigned long long* __temp1671v, unsigned long long* __temp1672v, char* __temp1673v) {
  goto __temp_return;
  __temp_return:
  *__temp1670v=unsafe_ptr;
  *__temp1671v=dat__pos;
  *__temp1672v=dat__length;
  *__temp1673v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1674v, unsigned long long* __temp1675v, unsigned long long* __temp1676v, char* __temp1677v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1674v=__temp552v__unsafe_ptr;
  *__temp1675v=__temp552v__dat__pos;
  *__temp1676v=__temp552v__dat__length;
  *__temp1677v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1678v, unsigned long long* __temp1679v, unsigned long long* __temp1680v, char* __temp1681v) {
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
  *__temp1678v=__temp566v__unsafe_ptr;
  *__temp1679v=__temp566v__dat__pos;
  *__temp1680v=__temp566v__dat__length;
  *__temp1681v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, char* __temp1685v) {
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
  *__temp1682v=__temp570v__unsafe_ptr;
  *__temp1683v=__temp570v__dat__pos;
  *__temp1684v=__temp570v__dat__length;
  *__temp1685v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp560v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1686v, unsigned long long* __temp1687v, unsigned long long* __temp1688v, char* __temp1689v) {
  goto __temp_return;
  __temp_return:
  *__temp1686v=other__unsafe_ptr;
  *__temp1687v=other__dat__pos;
  *__temp1688v=other__dat__length;
  *__temp1689v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp571v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1690v) {
  goto __temp_return;
  __temp_return:
  *__temp1690v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1691v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1692v) {
  goto __temp_return;
  __temp_return:
  *__temp1692v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1693v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) int copy__temp641v(char** __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, unsigned long long* __temp1697v, char* _other__unsafe_ptr, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1698v, unsigned long long* __temp1699v, unsigned long long* __temp1700v, char* __temp1701v) {
  char* buf__unsafe_ptr=*__temp1694v;
  unsigned long long buf__unsafe_size=*__temp1695v;
  unsigned long long buf__unsafe_align=*__temp1696v;
  unsigned long long pos=*__temp1697v;
  char* __temp642v__unsafe_ptr=0;
  unsigned long long __temp642v__dat__pos=0;
  unsigned long long __temp642v__dat__length=0;
  char __temp642v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp643v__=0;
  unsigned long long __temp644v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp645v__=0;
  char __temp646v__=0;
  unsigned long long __temp647v=0;
  unsigned long long __temp648v__=0;
  unsigned long long prev_pos=0;
  char* __temp649v__unsafe_ptr=0;
  unsigned long long __temp649v__dat__pos=0;
  unsigned long long __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp560v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp642v__unsafe_ptr,&__temp642v__dat__pos,&__temp642v__dat__length,&__temp642v__dat__first);
  other__unsafe_ptr=__temp642v__unsafe_ptr;
  other__dat__pos=__temp642v__dat__pos;
  other__dat__length=__temp642v__dat__length;
  other__dat__first=__temp642v__dat__first;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp643v__);
  add__temp110v(pos,__temp643v__,&__temp644v__);
  next_pos=__temp644v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp645v__);
  gt__temp206v(next_pos,__temp645v__,&__temp646v__);
  if(__temp646v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp647v=0;
  add__temp110v(pos,__temp647v,&__temp648v__);
  prev_pos=__temp648v__;
  pos=next_pos;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1694v=buf__unsafe_ptr;
  *__temp1695v=buf__unsafe_size;
  *__temp1696v=buf__unsafe_align;
  *__temp1697v=pos;
  *__temp1698v=__temp649v__unsafe_ptr;
  *__temp1699v=__temp649v__dat__pos;
  *__temp1700v=__temp649v__dat__length;
  *__temp1701v=__temp649v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp590v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1702v, unsigned long long* __temp1703v, unsigned long long* __temp1704v, char* __temp1705v) {
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
  *__temp1702v=__temp597v__unsafe_ptr;
  *__temp1703v=__temp597v__dat__pos;
  *__temp1704v=__temp597v__dat__length;
  *__temp1705v=__temp597v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp545v(const char* c, char* __temp1706v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1707v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1707v=z;
}

int unsafe_temporary_cstr__temp598v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1708v) {
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
  *__temp1708v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1283v(const char* cmd, long long int* __temp1709v) {
  long long int result=0;
  result=system(cmd);
  goto __temp_return;
  __temp_return:
  *__temp1709v=result;
}

static inline __attribute__((always_inline)) void int__temp382v(unsigned long long x, long long int* __temp1710v) {
  long long int z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1710v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(long long int x, long long int y, int* __temp1711v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  goto __temp_return;
  __temp_return:
  *__temp1711v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(long long int x, long long int y, char* __temp1712v) {
  int __temp292v__=0;
  char z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1712v=z;
}

static inline __attribute__((always_inline)) int system__temp1284v(char* _cmd__unsafe_ptr, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1285v__=0;
  char __temp1286v____temp601v__=0;
  char __temp1286v____temp602v__=0;
  unsigned long long __temp1286v____temp600v____temp595v____temp516v____temp438v=0;
  unsigned long long __temp1286v____temp600v____temp594v__unsafe_size=0;
  char __temp1286v____temp600v____temp595v____temp516v____temp439v__=0;
  char* __temp1286v____temp599v__unsafe_ptr=0;
  long long int __temp1287v__=0;
  long long int result=0;
  unsigned long long __temp1288v=0;
  long long int __temp1289v__=0;
  char __temp1290v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp598v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1285v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1283v(__temp1285v__,&__temp1287v__);
  result=__temp1287v__;
  __temp1288v=0;
  int__temp382v(__temp1288v,&__temp1289v__);
  neq__temp291v(result,__temp1289v__,&__temp1290v__);
  if(__temp1290v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1635v() {
  unsigned long long __temp1636v=0;
  char* __temp1637v__unsafe_ptr=0;
  unsigned long long __temp1637v__unsafe_size=0;
  unsigned long long __temp1637v__unsafe_align=0;
  unsigned long long __temp1638v____temp516v____temp438v=0;
  char __temp1638v____temp516v____temp439v__=0;
  char* __temp1639v__unsafe_ptr=0;
  unsigned long long __temp1639v__unsafe_size=0;
  unsigned long long __temp1639v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1640v=0;
  unsigned long long __temp1641v=0;
  char* __temp1643v__unsafe_ptr=0;
  unsigned long long __temp1643v__dat__pos=0;
  unsigned long long __temp1643v__dat__length=0;
  char __temp1643v__dat__first=0;
  char* __temp1644v__unsafe_ptr=0;
  unsigned long long __temp1644v__dat__pos=0;
  unsigned long long __temp1644v__dat__length=0;
  char __temp1644v__dat__first=0;
  char* s__unsafe_ptr=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1636v=2;
  __temp_errcode=alloc__temp510v(__temp1636v,&__temp1637v__unsafe_ptr,&__temp1637v__unsafe_size,&__temp1637v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1639v__unsafe_ptr=__temp1637v__unsafe_ptr;
  __temp1639v__unsafe_size=__temp1637v__unsafe_size;
  __temp1639v__unsafe_align=__temp1637v__unsafe_align;
  buf__unsafe_ptr=__temp1639v__unsafe_ptr;
  buf__unsafe_size=__temp1639v__unsafe_size;
  buf__unsafe_align=__temp1639v__unsafe_align;
  __temp1640v=0;
  __temp1641v=__temp1640v;
  __temp_errcode=str__temp567v(__temp1642v,&__temp1643v__unsafe_ptr,&__temp1643v__dat__pos,&__temp1643v__dat__length,&__temp1643v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp641v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1641v,__temp1643v__unsafe_ptr,__temp1643v__dat__pos,__temp1643v__dat__length,__temp1643v__dat__first,&__temp1644v__unsafe_ptr,&__temp1644v__dat__pos,&__temp1644v__dat__length,&__temp1644v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__unsafe_ptr=__temp1644v__unsafe_ptr;
  s__dat__pos=__temp1644v__dat__pos;
  s__dat__length=__temp1644v__dat__length;
  s__dat__first=__temp1644v__dat__first;
  __temp_errcode=system__temp1284v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1635v();return 0;}