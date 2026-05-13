#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1635v="README.md";
const char* const __temp353v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1650v, uint64_t* __temp1651v, uint64_t* __temp1652v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1650v=unsafe_ptr;
  *__temp1651v=unsafe_size;
  *__temp1652v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1653v) {
  int value=0;
  *__temp1653v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1654v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1654v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1655v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1655v=__temp90v__;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1656v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1656v=z;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1657v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1657v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1658v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1658v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1659v) {
  *__temp1659v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1660v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1660v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1661v) {
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
  *__temp1661v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1662v, uint64_t* __temp1663v, uint64_t* __temp1664v, char* __temp1665v) {
  goto __temp_return;
  __temp_return:
  *__temp1662v=unsafe_ptr;
  *__temp1663v=dat__pos;
  *__temp1664v=dat__length;
  *__temp1665v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1666v, uint64_t* __temp1667v, uint64_t* __temp1668v, char* __temp1669v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1666v=__temp550v__unsafe_ptr;
  *__temp1667v=__temp550v__dat__pos;
  *__temp1668v=__temp550v__dat__length;
  *__temp1669v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1670v, uint64_t* __temp1671v, uint64_t* __temp1672v, char* __temp1673v) {
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
  *__temp1670v=__temp580v__unsafe_ptr;
  *__temp1671v=__temp580v__dat__pos;
  *__temp1672v=__temp580v__dat__length;
  *__temp1673v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1674v, uint64_t* __temp1675v, uint64_t* __temp1676v, char* __temp1677v) {
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
  *__temp1674v=__temp584v__unsafe_ptr;
  *__temp1675v=__temp584v__dat__pos;
  *__temp1676v=__temp584v__dat__length;
  *__temp1677v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp585v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1678v) {
  goto __temp_return;
  __temp_return:
  *__temp1678v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1679v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1679v=z;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1680v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1680v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1681v) {
  char* allocated=*__temp1681v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1681v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1682v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1682v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1683v) {
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

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1684v, uint64_t* __temp1685v, uint64_t* __temp1686v, uint64_t size, char** __temp1687v, uint64_t* __temp1688v, uint64_t* __temp1689v) {
  char* buffer__unsafe_ptr=*__temp1684v;
  uint64_t buffer__unsafe_size=*__temp1685v;
  uint64_t buffer__unsafe_align=*__temp1686v;
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
  *__temp1684v=buffer__unsafe_ptr;
  *__temp1685v=buffer__unsafe_size;
  *__temp1686v=buffer__unsafe_align;
  *__temp1687v=buffer__unsafe_ptr;
  *__temp1688v=buffer__unsafe_size;
  *__temp1689v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1690v, uint64_t* __temp1691v, uint64_t* __temp1692v) {
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
  *__temp1690v=__temp513v__unsafe_ptr;
  *__temp1691v=__temp513v__unsafe_size;
  *__temp1692v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp604v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1693v, uint64_t* __temp1694v, uint64_t* __temp1695v, char* __temp1696v) {
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
  *__temp1693v=__temp611v__unsafe_ptr;
  *__temp1694v=__temp611v__dat__pos;
  *__temp1695v=__temp611v__dat__length;
  *__temp1696v=__temp611v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp543v(const char* c, char* __temp1697v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1697v=z;
}

static inline __attribute__((always_inline)) void not__temp21v(char value, char* __temp1698v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1698v=z;
}

int unsafe_temporary_cstr__temp612v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1699v) {
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
  *__temp1699v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1301v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __temp1700v) {
  const char* __temp1302v__=0;
  char __temp1303v____temp615v__=0;
  char __temp1303v____temp616v__=0;
  char* __temp1303v____temp613v__unsafe_ptr=0;
  char __temp1303v____temp614v____temp609v____temp514v____temp439v__=0;
  uint64_t __temp1303v____temp614v____temp608v__unsafe_size=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1304v__=0;
  char __temp1305v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp612v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1302v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1302v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp401v(unsafe_ptr,&__temp1304v__);
  not__temp21v(__temp1304v__,&__temp1305v__);
  if(__temp1305v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1700v=unsafe_ptr;
  exists__temp543v(__temp1302v__,&__temp1303v____temp615v__);
  not__temp21v(__temp1303v____temp615v__,&__temp1303v____temp616v__);
  if(__temp1303v____temp616v__){
  exists__temp401v(__temp1303v____temp613v__unsafe_ptr,&__temp1303v____temp614v____temp609v____temp514v____temp439v__);
  if(__temp1303v____temp614v____temp609v____temp514v____temp439v__){
  __temp1303v____temp614v____temp608v__unsafe_size=0;
  __temp1303v____temp614v____temp608v__unsafe_size=__temp1303v____temp614v____temp608v__unsafe_size;
  free__temp431v(&__temp1303v____temp613v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp413v(uint64_t x, uint64_t* __temp1701v) {
  uint64_t __temp414v=0;
  uint64_t __temp415v__=0;
  __temp414v=1024;
  mul__temp137v(x,__temp414v,&__temp415v__);
  goto __temp_return;
  __temp_return:
  *__temp1701v=__temp415v__;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1702v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1702v=z;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp1703v) {
  int __temp334v__=0;
  int __temp335v=0;
  int __temp336v=0;
  char __temp337v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp88v(x,y,&__temp334v__);
  lt__temp185v(x,y,&__temp337v__);
  if(__temp337v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1703v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1472v(char** __temp1704v, uint64_t* __temp1705v, uint64_t* __temp1706v, uint64_t* __temp1707v, char** __temp1708v, char** __temp1709v, uint64_t* __temp1710v, uint64_t* __temp1711v, char* __temp1712v) {
  char* buf__unsafe_ptr=*__temp1704v;
  uint64_t buf__unsafe_size=*__temp1705v;
  uint64_t buf__unsafe_align=*__temp1706v;
  uint64_t pos=*__temp1707v;
  char* f__unsafe_ptr=*__temp1708v;
  int __temp1473v=0;
  char __temp1474v__=0;
  char __temp1475v__=0;
  char* __temp1476v__=0;
  char* contents=0;
  uint64_t __temp1477v__=0;
  uint64_t size=0;
  char success=0;
  char __temp1478v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1479v__=0;
  char* __temp1480v__unsafe_ptr=0;
  uint64_t __temp1480v__dat__pos=0;
  uint64_t __temp1480v__dat__length=0;
  char __temp1480v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp401v(buf__unsafe_ptr,&__temp1474v__);
  not__temp21v(__temp1474v__,&__temp1475v__);
  if(__temp1475v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  add__temp433v(buf__unsafe_ptr,pos,&__temp1476v__);
  contents=__temp1476v__;
  __temp_errcode=sub__temp333v(buf__unsafe_size,pos,&__temp1477v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1477v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp21v(success,&__temp1478v__);
  if(__temp1478v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp113v(pos,bytes_read,&__temp1479v__);
  pos=__temp1479v__;
  __temp_errcode=str__temp575v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1480v__unsafe_ptr,&__temp1480v__dat__pos,&__temp1480v__dat__length,&__temp1480v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1704v=buf__unsafe_ptr;
  *__temp1705v=buf__unsafe_size;
  *__temp1706v=buf__unsafe_align;
  *__temp1707v=pos;
  *__temp1708v=f__unsafe_ptr;
  *__temp1709v=__temp1480v__unsafe_ptr;
  *__temp1710v=__temp1480v__dat__pos;
  *__temp1711v=__temp1480v__dat__length;
  *__temp1712v=__temp1480v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp680v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp681v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1634v() {
  char* __temp1636v__unsafe_ptr=0;
  uint64_t __temp1636v__dat__pos=0;
  uint64_t __temp1636v__dat__length=0;
  char __temp1636v__dat__first=0;
  char* __temp1637v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __temp1639v=0;
  uint64_t __temp1640v__=0;
  char* __temp1641v__unsafe_ptr=0;
  uint64_t __temp1641v__unsafe_size=0;
  uint64_t __temp1641v__unsafe_align=0;
  char __temp1642v____temp514v____temp439v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint64_t mem__unsafe_align=0;
  uint64_t __temp1643v=0;
  uint64_t __temp1644v=0;
  uint64_t pos=0;
  char __temp1645v=0;
  char* __temp1646v__unsafe_ptr=0;
  uint64_t __temp1646v__dat__pos=0;
  uint64_t __temp1646v__dat__length=0;
  char __temp1646v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __temp1647v=0;
  char* __temp1648v__unsafe_ptr=0;
  uint64_t __temp1648v__dat__pos=0;
  uint64_t __temp1648v__dat__length=0;
  char __temp1648v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp581v(__temp1635v,&__temp1636v__unsafe_ptr,&__temp1636v__dat__pos,&__temp1636v__dat__length,&__temp1636v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1301v(__temp1636v__unsafe_ptr,__temp1636v__dat__pos,__temp1636v__dat__length,__temp1636v__dat__first,&__temp1637v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1637v__unsafe_ptr;
  __temp1639v=4;
  KB__temp413v(__temp1639v,&__temp1640v__);
  __temp_errcode=alloc__temp508v(__temp1640v__,&__temp1641v__unsafe_ptr,&__temp1641v__unsafe_size,&__temp1641v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1641v__unsafe_ptr;
  mem__unsafe_size=__temp1641v__unsafe_size;
  mem__unsafe_align=__temp1641v__unsafe_align;
  __temp1643v=0;
  __temp1644v=__temp1643v;
  pos=__temp1644v;
  while(1){
  __temp_complain=line__temp1472v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1646v__unsafe_ptr,&__temp1646v__dat__pos,&__temp1646v__dat__length,&__temp1646v__dat__first);
  __temp1645v=__temp_complain;
  line__unsafe_ptr=__temp1646v__unsafe_ptr;
  line__dat__pos=__temp1646v__dat__pos;
  line__dat__length=__temp1646v__dat__length;
  line__dat__first=__temp1646v__dat__first;
  __temp1645v=__temp1645v==0;
  if(!__temp1645v){
  break;
  }
  continue;
  }
  if(__temp1637v__unsafe_ptr)fclose((FILE*)__temp1637v__unsafe_ptr);
  __temp1637v__unsafe_ptr=0;
  __temp1647v=0;
  __temp_errcode=str__temp575v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1647v,pos,&__temp1648v__unsafe_ptr,&__temp1648v__dat__pos,&__temp1648v__dat__length,&__temp1648v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp680v(__temp1648v__unsafe_ptr,__temp1648v__dat__pos,__temp1648v__dat__length,__temp1648v__dat__first);
  
  __temp_failure:exists__temp401v(__temp1641v__unsafe_ptr,&__temp1642v____temp514v____temp439v__);
  if(__temp1642v____temp514v____temp439v__){
  __temp1641v__unsafe_size=0;
  __temp1641v__unsafe_size=__temp1641v__unsafe_size;
  free__temp431v(&__temp1641v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1634v();return 0;}