#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1641v="ls";
static const char* __temp_all_errcodes[44] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"string does not fit on buffer",
"character copy does not fit on buffer",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1645v, uint64_t* __temp1646v, uint64_t* __temp1647v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1645v=unsafe_ptr;
  *__temp1646v=unsafe_size;
  *__temp1647v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1648v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1648v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1649v) {
  char* allocated=*__temp1649v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1649v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1650v) {
  int value=0;
  *__temp1650v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1651v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1651v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1652v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1652v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1653v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1653v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1654v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1654v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1655v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1655v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1656v) {
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

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1657v, uint64_t* __temp1658v, uint64_t* __temp1659v, uint64_t size, char** __temp1660v, uint64_t* __temp1661v, uint64_t* __temp1662v) {
  char* buffer__unsafe_ptr=*__temp1657v;
  uint64_t buffer__unsafe_size=*__temp1658v;
  uint64_t buffer__unsafe_align=*__temp1659v;
  int __temp438v=0;
  char __temp439v__=0;
  uint64_t __temp440v=0;
  char __temp442v__=0;
  uint64_t __temp443v=0;
  char __temp444v__=0;
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  uint64_t __temp448v=0;
  char __temp449v__=0;
  uint64_t __temp450v__=0;
  uint64_t bytes=0;
  char* __temp451v__=0;
  uint64_t __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp305v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp432v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp305v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp439v__);
  if(__temp439v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1657v=buffer__unsafe_ptr;
  *__temp1658v=buffer__unsafe_size;
  *__temp1659v=buffer__unsafe_align;
  *__temp1660v=buffer__unsafe_ptr;
  *__temp1661v=buffer__unsafe_size;
  *__temp1662v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1663v, uint64_t* __temp1664v, uint64_t* __temp1665v) {
  char* __temp511v__unsafe_ptr=0;
  uint64_t __temp511v__unsafe_size=0;
  uint64_t __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  uint64_t __temp512v__unsafe_size=0;
  uint64_t __temp512v__unsafe_align=0;
  char* __temp513v__unsafe_ptr=0;
  uint64_t __temp513v__unsafe_size=0;
  uint64_t __temp513v__unsafe_align=0;
  char __temp514v____temp439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp511v__unsafe_ptr,&__temp511v__unsafe_size,&__temp511v__unsafe_align);
  __temp512v__unsafe_ptr=__temp511v__unsafe_ptr;
  __temp512v__unsafe_size=__temp511v__unsafe_size;
  __temp512v__unsafe_align=__temp511v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp512v__unsafe_ptr,&__temp512v__unsafe_size,&__temp512v__unsafe_align,size,&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp513v__unsafe_ptr,&__temp514v____temp439v__);
  if(__temp514v____temp439v__){
  __temp513v__unsafe_size=0;
  __temp513v__unsafe_size=__temp513v__unsafe_size;
  free__temp431v(&__temp513v__unsafe_ptr);
  }
  __temp_return:
  *__temp1663v=__temp513v__unsafe_ptr;
  *__temp1664v=__temp513v__unsafe_size;
  *__temp1665v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1666v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1667v) {
  *__temp1667v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1668v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1668v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1669v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1669v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1670v, uint64_t* __temp1671v, uint64_t* __temp1672v, char* __temp1673v) {
  goto __temp_return;
  __temp_return:
  *__temp1670v=unsafe_ptr;
  *__temp1671v=dat__pos;
  *__temp1672v=dat__length;
  *__temp1673v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1674v, uint64_t* __temp1675v, uint64_t* __temp1676v, char* __temp1677v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1674v=__temp550v__unsafe_ptr;
  *__temp1675v=__temp550v__dat__pos;
  *__temp1676v=__temp550v__dat__length;
  *__temp1677v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1678v, uint64_t* __temp1679v, uint64_t* __temp1680v, char* __temp1681v) {
  uint64_t __temp576v=0;
  char __temp577v__=0;
  char* __temp578v__=0;
  char __temp579v__value=0;
  char first=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp576v=0;
  neq__temp305v(length,__temp576v,&__temp577v__);
  if(__temp577v__){
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp578v__){
  goto __temp_failure;
  }
  memcpy(&__temp579v__value,__temp578v__,1);
  first=__temp579v__value;
  }
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1678v=__temp580v__unsafe_ptr;
  *__temp1679v=__temp580v__dat__pos;
  *__temp1680v=__temp580v__dat__length;
  *__temp1681v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1682v, uint64_t* __temp1683v, uint64_t* __temp1684v, char* __temp1685v) {
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__unsafe_size=0;
  uint64_t __temp582v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp583v=0;
  char* __temp584v__unsafe_ptr=0;
  uint64_t __temp584v__dat__pos=0;
  uint64_t __temp584v__dat__length=0;
  char __temp584v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp582v__unsafe_ptr,&__temp582v__unsafe_size,&__temp582v__unsafe_align);
  buf__unsafe_ptr=__temp582v__unsafe_ptr;
  buf__unsafe_size=__temp582v__unsafe_size;
  buf__unsafe_align=__temp582v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp583v=0;
  __temp_errcode=str__temp575v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp583v,length,&__temp584v__unsafe_ptr,&__temp584v__dat__pos,&__temp584v__dat__length,&__temp584v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1682v=__temp584v__unsafe_ptr;
  *__temp1683v=__temp584v__dat__pos;
  *__temp1684v=__temp584v__dat__length;
  *__temp1685v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1686v, uint64_t* __temp1687v, uint64_t* __temp1688v, char* __temp1689v) {
  goto __temp_return;
  __temp_return:
  *__temp1686v=other__unsafe_ptr;
  *__temp1687v=other__dat__pos;
  *__temp1688v=other__dat__length;
  *__temp1689v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp585v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1690v) {
  goto __temp_return;
  __temp_return:
  *__temp1690v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1691v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1692v) {
  goto __temp_return;
  __temp_return:
  *__temp1692v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1693v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) int copy__temp640v(char** __temp1694v, uint64_t* __temp1695v, uint64_t* __temp1696v, uint64_t* __temp1697v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1698v, uint64_t* __temp1699v, uint64_t* __temp1700v, char* __temp1701v) {
  char* buf__unsafe_ptr=*__temp1694v;
  uint64_t buf__unsafe_size=*__temp1695v;
  uint64_t buf__unsafe_align=*__temp1696v;
  uint64_t pos=*__temp1697v;
  char* __temp641v__unsafe_ptr=0;
  uint64_t __temp641v__dat__pos=0;
  uint64_t __temp641v__dat__length=0;
  char __temp641v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v__=0;
  uint64_t next_pos=0;
  uint64_t __temp644v__=0;
  char __temp645v__=0;
  uint64_t __temp646v=0;
  uint64_t __temp647v__=0;
  uint64_t prev_pos=0;
  char* __temp648v__unsafe_ptr=0;
  uint64_t __temp648v__dat__pos=0;
  uint64_t __temp648v__dat__length=0;
  char __temp648v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp574v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp641v__unsafe_ptr,&__temp641v__dat__pos,&__temp641v__dat__length,&__temp641v__dat__first);
  other__unsafe_ptr=__temp641v__unsafe_ptr;
  other__dat__pos=__temp641v__dat__pos;
  other__dat__length=__temp641v__dat__length;
  other__dat__first=__temp641v__dat__first;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp642v__);
  add__temp113v(pos,__temp642v__,&__temp643v__);
  next_pos=__temp643v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp644v__);
  gt__temp209v(next_pos,__temp644v__,&__temp645v__);
  if(__temp645v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp646v=0;
  add__temp113v(pos,__temp646v,&__temp647v__);
  prev_pos=__temp647v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp648v__unsafe_ptr,&__temp648v__dat__pos,&__temp648v__dat__length,&__temp648v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1694v=buf__unsafe_ptr;
  *__temp1695v=buf__unsafe_size;
  *__temp1696v=buf__unsafe_align;
  *__temp1697v=pos;
  *__temp1698v=__temp648v__unsafe_ptr;
  *__temp1699v=__temp648v__dat__pos;
  *__temp1700v=__temp648v__dat__length;
  *__temp1701v=__temp648v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp604v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1702v, uint64_t* __temp1703v, uint64_t* __temp1704v, char* __temp1705v) {
  uint64_t __temp605v=0;
  uint64_t __temp606v__=0;
  uint64_t __temp607v__=0;
  char* __temp608v__unsafe_ptr=0;
  uint64_t __temp608v__unsafe_size=0;
  uint64_t __temp608v__unsafe_align=0;
  char __temp609v____temp514v____temp439v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp610v=0;
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__dat__pos=0;
  uint64_t __temp611v__dat__length=0;
  char __temp611v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=1;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp606v__);
  add__temp113v(__temp605v,__temp606v__,&__temp607v__);
  __temp_errcode=alloc__temp508v(__temp607v__,&__temp608v__unsafe_ptr,&__temp608v__unsafe_size,&__temp608v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp608v__unsafe_ptr;
  buf__unsafe_size=__temp608v__unsafe_size;
  buf__unsafe_align=__temp608v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp610v=0;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp610v,other__dat__length,other__dat__first,&__temp611v__unsafe_ptr,&__temp611v__dat__pos,&__temp611v__dat__length,&__temp611v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp611v__unsafe_ptr,&__temp609v____temp514v____temp439v__);
  if(__temp609v____temp514v____temp439v__){
  __temp608v__unsafe_size=0;
  __temp608v__unsafe_size=__temp608v__unsafe_size;
  free__temp431v(&__temp611v__unsafe_ptr);
  }
  __temp_return:
  *__temp1702v=__temp611v__unsafe_ptr;
  *__temp1703v=__temp611v__dat__pos;
  *__temp1704v=__temp611v__dat__length;
  *__temp1705v=__temp611v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp543v(const char* c, char* __temp1706v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) void not__temp21v(char value, char* __temp1707v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1707v=z;
}

int unsafe_temporary_cstr__temp612v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1708v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp613v__unsafe_ptr=0;
  uint64_t __temp613v__dat__pos=0;
  uint64_t __temp613v__dat__length=0;
  char __temp613v__dat__first=0;
  char __temp614v____temp609v____temp514v____temp439v__=0;
  uint64_t __temp614v____temp608v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp615v__=0;
  char __temp616v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp604v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp613v__unsafe_ptr,&__temp613v__dat__pos,&__temp613v__dat__length,&__temp613v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp613v__unsafe_ptr;
  c__dat__pos=__temp613v__dat__pos;
  c__dat__length=__temp613v__dat__length;
  c__dat__first=__temp613v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp543v(ret,&__temp615v__);
  not__temp21v(__temp615v__,&__temp616v__);
  if(__temp616v__){
  exists__temp401v(__temp613v__unsafe_ptr,&__temp614v____temp609v____temp514v____temp439v__);
  if(__temp614v____temp609v____temp514v____temp439v__){
  __temp614v____temp608v__unsafe_size=0;
  __temp614v____temp608v__unsafe_size=__temp614v____temp608v__unsafe_size;
  free__temp431v(&__temp613v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1708v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1282v(const char* cmd, int64_t* __temp1709v) {
  int64_t result=0;
  result=system(cmd);
  goto __temp_return;
  __temp_return:
  *__temp1709v=result;
}

static inline __attribute__((always_inline)) void int__temp385v(uint64_t x, int64_t* __temp1710v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1710v=z;
}

static inline __attribute__((always_inline)) void is_different__temp76v(int64_t x, int64_t y, int* __temp1711v) {
  int __temp77v=0;
  int __temp78v__=0;
  not__temp30v(__temp77v,&__temp78v__);
  goto __temp_return;
  __temp_return:
  *__temp1711v=__temp78v__;
}

static inline __attribute__((always_inline)) void neq__temp294v(int64_t x, int64_t y, char* __temp1712v) {
  int __temp295v__=0;
  char z=0;
  is_different__temp76v(x,y,&__temp295v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1712v=z;
}

static inline __attribute__((always_inline)) int system__temp1283v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1284v__=0;
  char __temp1285v____temp615v__=0;
  char __temp1285v____temp616v__=0;
  char* __temp1285v____temp613v__unsafe_ptr=0;
  char __temp1285v____temp614v____temp609v____temp514v____temp439v__=0;
  uint64_t __temp1285v____temp614v____temp608v__unsafe_size=0;
  int64_t __temp1286v__=0;
  int64_t result=0;
  uint64_t __temp1287v=0;
  int64_t __temp1288v__=0;
  char __temp1289v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp612v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1284v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1282v(__temp1284v__,&__temp1286v__);
  result=__temp1286v__;
  __temp1287v=0;
  int__temp385v(__temp1287v,&__temp1288v__);
  neq__temp294v(result,__temp1288v__,&__temp1289v__);
  if(__temp1289v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp543v(__temp1284v__,&__temp1285v____temp615v__);
  not__temp21v(__temp1285v____temp615v__,&__temp1285v____temp616v__);
  if(__temp1285v____temp616v__){
  exists__temp401v(__temp1285v____temp613v__unsafe_ptr,&__temp1285v____temp614v____temp609v____temp514v____temp439v__);
  if(__temp1285v____temp614v____temp609v____temp514v____temp439v__){
  __temp1285v____temp614v____temp608v__unsafe_size=0;
  __temp1285v____temp614v____temp608v__unsafe_size=__temp1285v____temp614v____temp608v__unsafe_size;
  free__temp431v(&__temp1285v____temp613v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1634v() {
  uint64_t __temp1635v=0;
  char* __temp1636v__unsafe_ptr=0;
  uint64_t __temp1636v__unsafe_size=0;
  uint64_t __temp1636v__unsafe_align=0;
  char __temp1637v____temp514v____temp439v__=0;
  char* __temp1638v__unsafe_ptr=0;
  uint64_t __temp1638v__unsafe_size=0;
  uint64_t __temp1638v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t __temp1639v=0;
  uint64_t __temp1640v=0;
  char* __temp1642v__unsafe_ptr=0;
  uint64_t __temp1642v__dat__pos=0;
  uint64_t __temp1642v__dat__length=0;
  char __temp1642v__dat__first=0;
  char* __temp1643v__unsafe_ptr=0;
  uint64_t __temp1643v__dat__pos=0;
  uint64_t __temp1643v__dat__length=0;
  char __temp1643v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1635v=2;
  __temp_errcode=alloc__temp508v(__temp1635v,&__temp1636v__unsafe_ptr,&__temp1636v__unsafe_size,&__temp1636v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1638v__unsafe_ptr=__temp1636v__unsafe_ptr;
  __temp1638v__unsafe_size=__temp1636v__unsafe_size;
  __temp1638v__unsafe_align=__temp1636v__unsafe_align;
  buf__unsafe_ptr=__temp1638v__unsafe_ptr;
  buf__unsafe_size=__temp1638v__unsafe_size;
  buf__unsafe_align=__temp1638v__unsafe_align;
  __temp1639v=0;
  __temp1640v=__temp1639v;
  __temp_errcode=str__temp581v(__temp1641v,&__temp1642v__unsafe_ptr,&__temp1642v__dat__pos,&__temp1642v__dat__length,&__temp1642v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp640v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1640v,__temp1642v__unsafe_ptr,__temp1642v__dat__pos,__temp1642v__dat__length,__temp1642v__dat__first,&__temp1643v__unsafe_ptr,&__temp1643v__dat__pos,&__temp1643v__dat__length,&__temp1643v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__unsafe_ptr=__temp1643v__unsafe_ptr;
  s__dat__pos=__temp1643v__dat__pos;
  s__dat__length=__temp1643v__dat__length;
  s__dat__first=__temp1643v__dat__first;
  __temp_errcode=system__temp1283v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp401v(__temp1636v__unsafe_ptr,&__temp1637v____temp514v____temp439v__);
  if(__temp1637v____temp514v____temp439v__){
  __temp1636v__unsafe_size=0;
  __temp1636v__unsafe_size=__temp1636v__unsafe_size;
  free__temp431v(&__temp1636v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1634v();return 0;}