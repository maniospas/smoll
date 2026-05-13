#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1674v="ls";
static const char* __temp_all_errcodes[46] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1678v, uint64_t* __temp1679v, uint64_t* __temp1680v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1678v=unsafe_ptr;
  *__temp1679v=unsafe_size;
  *__temp1680v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1681v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1681v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1682v) {
  char* allocated=*__temp1682v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1682v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1683v) {
  int value=0;
  *__temp1683v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1684v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1684v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1685v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1685v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1686v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1686v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1687v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1687v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1688v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1688v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1689v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1689v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1690v, uint64_t* __temp1691v, uint64_t* __temp1692v, uint64_t size, char** __temp1693v, uint64_t* __temp1694v, uint64_t* __temp1695v) {
  char* buffer__unsafe_ptr=*__temp1690v;
  uint64_t buffer__unsafe_size=*__temp1691v;
  uint64_t buffer__unsafe_align=*__temp1692v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1690v=buffer__unsafe_ptr;
  *__temp1691v=buffer__unsafe_size;
  *__temp1692v=buffer__unsafe_align;
  *__temp1693v=buffer__unsafe_ptr;
  *__temp1694v=buffer__unsafe_size;
  *__temp1695v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp537v(uint64_t size, char** __temp1696v, uint64_t* __temp1697v, uint64_t* __temp1698v) {
  char* __temp540v__unsafe_ptr=0;
  uint64_t __temp540v__unsafe_size=0;
  uint64_t __temp540v__unsafe_align=0;
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char __temp543v____temp468v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp540v__unsafe_ptr,&__temp540v__unsafe_size,&__temp540v__unsafe_align);
  __temp541v__unsafe_ptr=__temp540v__unsafe_ptr;
  __temp541v__unsafe_size=__temp540v__unsafe_size;
  __temp541v__unsafe_align=__temp540v__unsafe_align;
  __temp_errcode=alloc__temp466v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align,size,&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp542v__unsafe_ptr,&__temp543v____temp468v__);
  if(__temp543v____temp468v__){
  __temp542v__unsafe_size=0;
  __temp542v__unsafe_size=__temp542v__unsafe_size;
  free__temp460v(&__temp542v__unsafe_ptr);
  }
  __temp_return:
  *__temp1696v=__temp542v__unsafe_ptr;
  *__temp1697v=__temp542v__unsafe_size;
  *__temp1698v=__temp542v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1699v) {
  *__temp1699v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1700v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1700v=z;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1701v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1701v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1702v) {
  *__temp1702v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1703v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1703v=__temp463v__;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1704v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1704v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1705v, uint64_t* __temp1706v, uint64_t* __temp1707v, char* __temp1708v) {
  goto __temp_return;
  __temp_return:
  *__temp1705v=unsafe_ptr;
  *__temp1706v=dat__pos;
  *__temp1707v=dat__length;
  *__temp1708v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1709v, uint64_t* __temp1710v, uint64_t* __temp1711v, char* __temp1712v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1709v=__temp579v__unsafe_ptr;
  *__temp1710v=__temp579v__dat__pos;
  *__temp1711v=__temp579v__dat__length;
  *__temp1712v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1713v, uint64_t* __temp1714v, uint64_t* __temp1715v, char* __temp1716v) {
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__=0;
  char __temp608v__value=0;
  char first=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__dat__pos=0;
  uint64_t __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=0;
  neq__temp141v(length,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp607v__){
  goto __temp_failure;
  }
  memcpy(&__temp608v__value,__temp607v__,1);
  first=__temp608v__value;
  }
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp609v__unsafe_ptr,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1713v=__temp609v__unsafe_ptr;
  *__temp1714v=__temp609v__dat__pos;
  *__temp1715v=__temp609v__dat__length;
  *__temp1716v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1717v, uint64_t* __temp1718v, uint64_t* __temp1719v, char* __temp1720v) {
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__unsafe_size=0;
  uint64_t __temp611v__unsafe_align=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp613v__=0;
  uint64_t length=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v__=0;
  uint64_t __temp616v=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp611v__unsafe_ptr,&__temp611v__unsafe_size,&__temp611v__unsafe_align);
  __temp612v__unsafe_ptr=__temp611v__unsafe_ptr;
  __temp612v__unsafe_size=__temp611v__unsafe_size;
  __temp612v__unsafe_align=__temp611v__unsafe_align;
  buf__unsafe_ptr=__temp612v__unsafe_ptr;
  buf__unsafe_size=__temp612v__unsafe_size;
  buf__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp20v(buf__unsafe_ptr,c,&__temp613v__);
  buf__unsafe_ptr=__temp613v__;
  if(c){
  length=strlen(c);
  }
  __temp614v=1;
  add__temp169v(length,__temp614v,&__temp615v__);
  buf__unsafe_size=__temp615v__;
  __temp616v=0;
  __temp_errcode=str__temp604v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp616v,length,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1717v=__temp617v__unsafe_ptr;
  *__temp1718v=__temp617v__dat__pos;
  *__temp1719v=__temp617v__dat__length;
  *__temp1720v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp603v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1721v, uint64_t* __temp1722v, uint64_t* __temp1723v, char* __temp1724v) {
  goto __temp_return;
  __temp_return:
  *__temp1721v=other__unsafe_ptr;
  *__temp1722v=other__dat__pos;
  *__temp1723v=other__dat__length;
  *__temp1724v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp618v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1725v) {
  goto __temp_return;
  __temp_return:
  *__temp1725v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1726v) {
  goto __temp_return;
  __temp_return:
  *__temp1726v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp270v(uint64_t x, uint64_t y, char* __temp1727v) {
  int __temp271v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp271v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1727v=z;
}

static inline __attribute__((always_inline)) int copy__temp673v(char** __temp1728v, uint64_t* __temp1729v, uint64_t* __temp1730v, uint64_t* __temp1731v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1732v, uint64_t* __temp1733v, uint64_t* __temp1734v, char* __temp1735v) {
  char* buf__unsafe_ptr=*__temp1728v;
  uint64_t buf__unsafe_size=*__temp1729v;
  uint64_t buf__unsafe_align=*__temp1730v;
  uint64_t pos=*__temp1731v;
  char* __temp674v__unsafe_ptr=0;
  uint64_t __temp674v__dat__pos=0;
  uint64_t __temp674v__dat__length=0;
  char __temp674v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp675v__=0;
  uint64_t __temp676v__=0;
  uint64_t next_pos=0;
  uint64_t __temp677v__=0;
  char __temp678v__=0;
  uint64_t __temp679v=0;
  uint64_t __temp680v__=0;
  uint64_t prev_pos=0;
  char* __temp681v__unsafe_ptr=0;
  uint64_t __temp681v__dat__pos=0;
  uint64_t __temp681v__dat__length=0;
  char __temp681v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp603v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp674v__unsafe_ptr,&__temp674v__dat__pos,&__temp674v__dat__length,&__temp674v__dat__first);
  other__unsafe_ptr=__temp674v__unsafe_ptr;
  other__dat__pos=__temp674v__dat__pos;
  other__dat__length=__temp674v__dat__length;
  other__dat__first=__temp674v__dat__first;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp675v__);
  add__temp169v(pos,__temp675v__,&__temp676v__);
  next_pos=__temp676v__;
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp677v__);
  gt__temp270v(next_pos,__temp677v__,&__temp678v__);
  if(__temp678v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp679v=0;
  add__temp169v(pos,__temp679v,&__temp680v__);
  prev_pos=__temp680v__;
  pos=next_pos;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp681v__unsafe_ptr,&__temp681v__dat__pos,&__temp681v__dat__length,&__temp681v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1728v=buf__unsafe_ptr;
  *__temp1729v=buf__unsafe_size;
  *__temp1730v=buf__unsafe_align;
  *__temp1731v=pos;
  *__temp1732v=__temp681v__unsafe_ptr;
  *__temp1733v=__temp681v__dat__pos;
  *__temp1734v=__temp681v__dat__length;
  *__temp1735v=__temp681v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp637v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1736v, uint64_t* __temp1737v, uint64_t* __temp1738v, char* __temp1739v) {
  uint64_t __temp638v=0;
  uint64_t __temp639v__=0;
  uint64_t __temp640v__=0;
  char* __temp641v__unsafe_ptr=0;
  uint64_t __temp641v__unsafe_size=0;
  uint64_t __temp641v__unsafe_align=0;
  char __temp642v____temp543v____temp468v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp643v=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp638v=1;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp639v__);
  add__temp169v(__temp638v,__temp639v__,&__temp640v__);
  __temp_errcode=alloc__temp537v(__temp640v__,&__temp641v__unsafe_ptr,&__temp641v__unsafe_size,&__temp641v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp641v__unsafe_ptr;
  buf__unsafe_size=__temp641v__unsafe_size;
  buf__unsafe_align=__temp641v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp643v=0;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp643v,other__dat__length,other__dat__first,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp644v__unsafe_ptr,&__temp642v____temp543v____temp468v__);
  if(__temp642v____temp543v____temp468v__){
  __temp641v__unsafe_size=0;
  __temp641v__unsafe_size=__temp641v__unsafe_size;
  free__temp460v(&__temp644v__unsafe_ptr);
  }
  __temp_return:
  *__temp1736v=__temp644v__unsafe_ptr;
  *__temp1737v=__temp644v__dat__pos;
  *__temp1738v=__temp644v__dat__length;
  *__temp1739v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp572v(const char* c, char* __temp1740v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) void not__temp25v(char value, char* __temp1741v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1741v=z;
}

int unsafe_temporary_cstr__temp645v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1742v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp646v__unsafe_ptr=0;
  uint64_t __temp646v__dat__pos=0;
  uint64_t __temp646v__dat__length=0;
  char __temp646v__dat__first=0;
  char __temp647v____temp642v____temp543v____temp468v__=0;
  uint64_t __temp647v____temp641v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp648v__=0;
  char __temp649v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp637v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp646v__unsafe_ptr,&__temp646v__dat__pos,&__temp646v__dat__length,&__temp646v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp646v__unsafe_ptr;
  c__dat__pos=__temp646v__dat__pos;
  c__dat__length=__temp646v__dat__length;
  c__dat__first=__temp646v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp572v(ret,&__temp648v__);
  not__temp25v(__temp648v__,&__temp649v__);
  if(__temp649v__){
  exists__temp411v(__temp646v__unsafe_ptr,&__temp647v____temp642v____temp543v____temp468v__);
  if(__temp647v____temp642v____temp543v____temp468v__){
  __temp647v____temp641v__unsafe_size=0;
  __temp647v____temp641v__unsafe_size=__temp647v____temp641v__unsafe_size;
  free__temp460v(&__temp646v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1742v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1315v(const char* cmd, int64_t* __temp1743v) {
  int64_t result=0;
  result=system(cmd);
  goto __temp_return;
  __temp_return:
  *__temp1743v=result;
}

static inline __attribute__((always_inline)) void int__temp394v(uint64_t x, int64_t* __temp1744v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1744v=z;
}

static inline __attribute__((always_inline)) void is_different__temp80v(int64_t x, int64_t y, int* __temp1745v) {
  int __temp81v=0;
  int __temp82v__=0;
  not__temp34v(__temp81v,&__temp82v__);
  goto __temp_return;
  __temp_return:
  *__temp1745v=__temp82v__;
}

static inline __attribute__((always_inline)) void neq__temp130v(int64_t x, int64_t y, char* __temp1746v) {
  int __temp131v__=0;
  char z=0;
  is_different__temp80v(x,y,&__temp131v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1746v=z;
}

static inline __attribute__((always_inline)) int system__temp1316v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1317v__=0;
  char __temp1318v____temp648v__=0;
  char __temp1318v____temp649v__=0;
  char* __temp1318v____temp646v__unsafe_ptr=0;
  char __temp1318v____temp647v____temp642v____temp543v____temp468v__=0;
  uint64_t __temp1318v____temp647v____temp641v__unsafe_size=0;
  int64_t __temp1319v__=0;
  int64_t result=0;
  uint64_t __temp1320v=0;
  int64_t __temp1321v__=0;
  char __temp1322v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp645v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1317v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1315v(__temp1317v__,&__temp1319v__);
  result=__temp1319v__;
  __temp1320v=0;
  int__temp394v(__temp1320v,&__temp1321v__);
  neq__temp130v(result,__temp1321v__,&__temp1322v__);
  if(__temp1322v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp572v(__temp1317v__,&__temp1318v____temp648v__);
  not__temp25v(__temp1318v____temp648v__,&__temp1318v____temp649v__);
  if(__temp1318v____temp649v__){
  exists__temp411v(__temp1318v____temp646v__unsafe_ptr,&__temp1318v____temp647v____temp642v____temp543v____temp468v__);
  if(__temp1318v____temp647v____temp642v____temp543v____temp468v__){
  __temp1318v____temp647v____temp641v__unsafe_size=0;
  __temp1318v____temp647v____temp641v__unsafe_size=__temp1318v____temp647v____temp641v__unsafe_size;
  free__temp460v(&__temp1318v____temp646v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1667v() {
  uint64_t __temp1668v=0;
  char* __temp1669v__unsafe_ptr=0;
  uint64_t __temp1669v__unsafe_size=0;
  uint64_t __temp1669v__unsafe_align=0;
  char __temp1670v____temp543v____temp468v__=0;
  char* __temp1671v__unsafe_ptr=0;
  uint64_t __temp1671v__unsafe_size=0;
  uint64_t __temp1671v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t __temp1672v=0;
  uint64_t __temp1673v=0;
  char* __temp1675v__unsafe_ptr=0;
  uint64_t __temp1675v__dat__pos=0;
  uint64_t __temp1675v__dat__length=0;
  char __temp1675v__dat__first=0;
  char* __temp1676v__unsafe_ptr=0;
  uint64_t __temp1676v__dat__pos=0;
  uint64_t __temp1676v__dat__length=0;
  char __temp1676v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1668v=2;
  __temp_errcode=alloc__temp537v(__temp1668v,&__temp1669v__unsafe_ptr,&__temp1669v__unsafe_size,&__temp1669v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1671v__unsafe_ptr=__temp1669v__unsafe_ptr;
  __temp1671v__unsafe_size=__temp1669v__unsafe_size;
  __temp1671v__unsafe_align=__temp1669v__unsafe_align;
  buf__unsafe_ptr=__temp1671v__unsafe_ptr;
  buf__unsafe_size=__temp1671v__unsafe_size;
  buf__unsafe_align=__temp1671v__unsafe_align;
  __temp1672v=0;
  __temp1673v=__temp1672v;
  __temp_errcode=str__temp610v(__temp1674v,&__temp1675v__unsafe_ptr,&__temp1675v__dat__pos,&__temp1675v__dat__length,&__temp1675v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp673v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1673v,__temp1675v__unsafe_ptr,__temp1675v__dat__pos,__temp1675v__dat__length,__temp1675v__dat__first,&__temp1676v__unsafe_ptr,&__temp1676v__dat__pos,&__temp1676v__dat__length,&__temp1676v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__unsafe_ptr=__temp1676v__unsafe_ptr;
  s__dat__pos=__temp1676v__dat__pos;
  s__dat__length=__temp1676v__dat__length;
  s__dat__first=__temp1676v__dat__first;
  __temp_errcode=system__temp1316v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp411v(__temp1669v__unsafe_ptr,&__temp1670v____temp543v____temp468v__);
  if(__temp1670v____temp543v____temp468v__){
  __temp1669v__unsafe_size=0;
  __temp1669v__unsafe_size=__temp1669v__unsafe_size;
  free__temp460v(&__temp1669v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1667v();return 0;}