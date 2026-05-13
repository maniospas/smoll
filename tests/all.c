#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1651v="./tests/passing/";
const char* const __temp1656v="./smoll ";
const char* const __temp353v="\n";
const char* const __temp761v="";
const char* const __temp1667v=".s";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1677v, uint64_t* __temp1678v, uint64_t* __temp1679v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1677v=unsafe_ptr;
  *__temp1678v=unsafe_size;
  *__temp1679v=unsafe_align;
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1682v) {
  int value=0;
  *__temp1682v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1683v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1683v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1684v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1684v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1685v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1685v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1686v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1686v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1687v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1687v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1688v) {
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
  *__temp1688v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1689v, uint64_t* __temp1690v, uint64_t* __temp1691v, uint64_t size, char** __temp1692v, uint64_t* __temp1693v, uint64_t* __temp1694v) {
  char* buffer__unsafe_ptr=*__temp1689v;
  uint64_t buffer__unsafe_size=*__temp1690v;
  uint64_t buffer__unsafe_align=*__temp1691v;
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
  *__temp1689v=buffer__unsafe_ptr;
  *__temp1690v=buffer__unsafe_size;
  *__temp1691v=buffer__unsafe_align;
  *__temp1692v=buffer__unsafe_ptr;
  *__temp1693v=buffer__unsafe_size;
  *__temp1694v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1695v, uint64_t* __temp1696v, uint64_t* __temp1697v) {
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
  *__temp1695v=__temp513v__unsafe_ptr;
  *__temp1696v=__temp513v__unsafe_size;
  *__temp1697v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp618v(char** __temp1698v, uint64_t* __temp1699v, uint64_t* __temp1700v, char** __temp1701v, uint64_t* __temp1702v, uint64_t* __temp1703v, uint64_t* __temp1704v) {
  char* buf__unsafe_ptr=*__temp1698v;
  uint64_t buf__unsafe_size=*__temp1699v;
  uint64_t buf__unsafe_align=*__temp1700v;
  uint64_t __temp619v=0;
  uint64_t __temp620v=0;
  uint64_t pos=0;
  __temp619v=0;
  __temp620v=__temp619v;
  pos=__temp620v;
  goto __temp_return;
  __temp_return:
  *__temp1698v=buf__unsafe_ptr;
  *__temp1699v=buf__unsafe_size;
  *__temp1700v=buf__unsafe_align;
  *__temp1701v=buf__unsafe_ptr;
  *__temp1702v=buf__unsafe_size;
  *__temp1703v=buf__unsafe_align;
  *__temp1704v=pos;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1705v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1705v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1706v) {
  *__temp1706v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1707v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1707v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1708v) {
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
  *__temp1708v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1709v, uint64_t* __temp1710v, uint64_t* __temp1711v, char* __temp1712v) {
  goto __temp_return;
  __temp_return:
  *__temp1709v=unsafe_ptr;
  *__temp1710v=dat__pos;
  *__temp1711v=dat__length;
  *__temp1712v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1713v, uint64_t* __temp1714v, uint64_t* __temp1715v, char* __temp1716v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1713v=__temp550v__unsafe_ptr;
  *__temp1714v=__temp550v__dat__pos;
  *__temp1715v=__temp550v__dat__length;
  *__temp1716v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1717v, uint64_t* __temp1718v, uint64_t* __temp1719v, char* __temp1720v) {
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
  *__temp1717v=__temp580v__unsafe_ptr;
  *__temp1718v=__temp580v__dat__pos;
  *__temp1719v=__temp580v__dat__length;
  *__temp1720v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1721v, uint64_t* __temp1722v, uint64_t* __temp1723v, char* __temp1724v) {
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
  *__temp1721v=__temp584v__unsafe_ptr;
  *__temp1722v=__temp584v__dat__pos;
  *__temp1723v=__temp584v__dat__length;
  *__temp1724v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp585v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1725v) {
  goto __temp_return;
  __temp_return:
  *__temp1725v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1726v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1726v=z;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1727v) {
  goto __temp_return;
  __temp_return:
  *__temp1727v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1728v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1728v=z;
}

int copy__temp649v(char** __temp1729v, uint64_t* __temp1730v, uint64_t* __temp1731v, uint64_t* __temp1732v, const char* _other, char** __temp1733v, uint64_t* __temp1734v, uint64_t* __temp1735v, char* __temp1736v) {
  char* buf__unsafe_ptr=*__temp1729v;
  uint64_t buf__unsafe_size=*__temp1730v;
  uint64_t buf__unsafe_align=*__temp1731v;
  uint64_t pos=*__temp1732v;
  char* __temp650v__unsafe_ptr=0;
  uint64_t __temp650v__dat__pos=0;
  uint64_t __temp650v__dat__length=0;
  char __temp650v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp651v__=0;
  uint64_t __temp652v__=0;
  uint64_t next_pos=0;
  uint64_t __temp653v__=0;
  char __temp654v__=0;
  uint64_t __temp655v=0;
  uint64_t __temp656v__=0;
  uint64_t prev_pos=0;
  char* __temp657v__unsafe_ptr=0;
  uint64_t __temp657v__dat__pos=0;
  uint64_t __temp657v__dat__length=0;
  char __temp657v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp581v(_other,&__temp650v__unsafe_ptr,&__temp650v__dat__pos,&__temp650v__dat__length,&__temp650v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp650v__unsafe_ptr;
  other__dat__pos=__temp650v__dat__pos;
  other__dat__length=__temp650v__dat__length;
  other__dat__first=__temp650v__dat__first;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp651v__);
  add__temp113v(pos,__temp651v__,&__temp652v__);
  next_pos=__temp652v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp653v__);
  gt__temp209v(next_pos,__temp653v__,&__temp654v__);
  if(__temp654v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp655v=0;
  add__temp113v(pos,__temp655v,&__temp656v__);
  prev_pos=__temp656v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp657v__unsafe_ptr,&__temp657v__dat__pos,&__temp657v__dat__length,&__temp657v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1729v=buf__unsafe_ptr;
  *__temp1730v=buf__unsafe_size;
  *__temp1731v=buf__unsafe_align;
  *__temp1732v=pos;
  *__temp1733v=__temp657v__unsafe_ptr;
  *__temp1734v=__temp657v__dat__pos;
  *__temp1735v=__temp657v__dat__length;
  *__temp1736v=__temp657v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp617v(const char* other, const char** __temp1737v) {
  goto __temp_return;
  __temp_return:
  *__temp1737v=other;
}

static inline __attribute__((always_inline)) void not__temp21v(char value, char* __temp1738v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1738v=z;
}

static inline __attribute__((always_inline)) int read__temp1611v(const char* _path, char** __temp1739v) {
  const char* __temp1612v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1613v__=0;
  char __temp1614v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp617v(_path,&__temp1612v__);
  path=__temp1612v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp401v(unsafe_ptr,&__temp1613v__);
  not__temp21v(__temp1613v__,&__temp1614v__);
  if(__temp1614v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1739v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp413v(uint64_t x, uint64_t* __temp1740v) {
  uint64_t __temp414v=0;
  uint64_t __temp415v__=0;
  __temp414v=1024;
  mul__temp137v(x,__temp414v,&__temp415v__);
  goto __temp_return;
  __temp_return:
  *__temp1740v=__temp415v__;
}

static inline __attribute__((always_inline)) int entry__temp1622v(char** __temp1741v, char** __temp1742v, uint64_t* __temp1743v, uint64_t* __temp1744v, char* __temp1745v) {
  char* f__unsafe_ptr=*__temp1741v;
  char __temp1623v__=0;
  char __temp1624v__=0;
  char* de=0;
  char __temp1625v__=0;
  char __temp1626v__=0;
  const char* dirname=0;
  char* __temp1627v__unsafe_ptr=0;
  uint64_t __temp1627v__dat__pos=0;
  uint64_t __temp1627v__dat__length=0;
  char __temp1627v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp401v(f__unsafe_ptr,&__temp1623v__);
  not__temp21v(__temp1623v__,&__temp1624v__);
  if(__temp1624v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp401v(de,&__temp1625v__);
  not__temp21v(__temp1625v__,&__temp1626v__);
  if(__temp1626v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp581v(dirname,&__temp1627v__unsafe_ptr,&__temp1627v__dat__pos,&__temp1627v__dat__length,&__temp1627v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1741v=f__unsafe_ptr;
  *__temp1742v=__temp1627v__unsafe_ptr;
  *__temp1743v=__temp1627v__dat__pos;
  *__temp1744v=__temp1627v__dat__length;
  *__temp1745v=__temp1627v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1746v, uint64_t* __temp1747v, uint64_t* __temp1748v, char* __temp1749v) {
  goto __temp_return;
  __temp_return:
  *__temp1746v=other__unsafe_ptr;
  *__temp1747v=other__dat__pos;
  *__temp1748v=other__dat__length;
  *__temp1749v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1750v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1750v=z;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp1751v) {
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
  *__temp1751v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp719v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1752v) {
  uint64_t __temp720v__=0;
  char* __temp721v__=0;
  char* unsafe_ptr=0;
  add__temp113v(s__dat__pos,i,&__temp720v__);
  add__temp433v(s__unsafe_ptr,__temp720v__,&__temp721v__);
  unsafe_ptr=__temp721v__;
  goto __temp_return;
  __temp_return:
  *__temp1752v=unsafe_ptr;
}

int slice__temp758v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1753v, uint64_t* __temp1754v, uint64_t* __temp1755v, char* __temp1756v) {
  char* __temp759v__unsafe_ptr=0;
  uint64_t __temp759v__dat__pos=0;
  uint64_t __temp759v__dat__length=0;
  char __temp759v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp760v__=0;
  char* __temp762v__unsafe_ptr=0;
  uint64_t __temp762v__dat__pos=0;
  uint64_t __temp762v__dat__length=0;
  char __temp762v__dat__first=0;
  char __temp763v__=0;
  char __temp764v__=0;
  char __temp765v=0;
  uint64_t __temp766v__=0;
  uint64_t new_length=0;
  uint64_t __temp767v=0;
  char __temp768v__=0;
  char new_first=0;
  char* __temp769v__=0;
  char __temp770v__value=0;
  uint64_t __temp771v__=0;
  char* __temp772v__unsafe_ptr=0;
  uint64_t __temp772v__dat__pos=0;
  uint64_t __temp772v__dat__length=0;
  char __temp772v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp574v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp759v__unsafe_ptr,&__temp759v__dat__pos,&__temp759v__dat__length,&__temp759v__dat__first);
  s__unsafe_ptr=__temp759v__unsafe_ptr;
  s__dat__pos=__temp759v__dat__pos;
  s__dat__length=__temp759v__dat__length;
  s__dat__first=__temp759v__dat__first;
  eq__temp281v(from,to,&__temp760v__);
  if(__temp760v__){
  __temp_errcode=str__temp581v(__temp761v,&__temp762v__unsafe_ptr,&__temp762v__dat__pos,&__temp762v__dat__length,&__temp762v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp185v(from,to,&__temp763v__);
  if(!__temp763v__){
  gt__temp209v(to,s__dat__length,&__temp764v__);
  __temp765v=__temp764v__;
  }
  if(__temp765v){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp333v(to,from,&__temp766v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp766v__;
  __temp767v=0;
  neq__temp305v(from,__temp767v,&__temp768v__);
  if(__temp768v__){
  get__temp719v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp769v__);
  if(!__temp769v__){
  goto __temp_failure;
  }
  memcpy(&__temp770v__value,__temp769v__,1);
  new_first=__temp770v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp113v(s__dat__pos,from,&__temp771v__);
  str__temp545v(s__unsafe_ptr,__temp771v__,new_length,new_first,&__temp772v__unsafe_ptr,&__temp772v__dat__pos,&__temp772v__dat__length,&__temp772v__dat__first);
  __temp762v__unsafe_ptr=__temp772v__unsafe_ptr;
  __temp762v__dat__pos=__temp772v__dat__pos;
  __temp762v__dat__length=__temp772v__dat__length;
  __temp762v__dat__first=__temp772v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1753v=__temp762v__unsafe_ptr;
  *__temp1754v=__temp762v__dat__pos;
  *__temp1755v=__temp762v__dat__length;
  *__temp1756v=__temp762v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp589v(char x, char y, char* __temp1757v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) void eq__temp723v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1758v) {
  uint64_t __temp724v__=0;
  uint64_t n=0;
  uint64_t __temp725v__=0;
  char __temp726v__=0;
  char __temp727v=0;
  char __temp728v__=0;
  char __temp729v=0;
  char z=0;
  len__temp585v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp724v__);
  n=__temp724v__;
  len__temp585v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp725v__);
  neq__temp305v(n,__temp725v__,&__temp726v__);
  if(__temp726v__){
  __temp727v=0;
  goto __temp_return;
  }
  neq__temp589v(x__dat__first,y__dat__first,&__temp728v__);
  if(__temp728v__){
  __temp729v=0;
  __temp727v=__temp729v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp727v=z;
  goto __temp_return;
  __temp_return:
  *__temp1758v=__temp727v;
}

static inline __attribute__((always_inline)) int ends_with__temp827v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1759v) {
  char* __temp828v__unsafe_ptr=0;
  uint64_t __temp828v__dat__pos=0;
  uint64_t __temp828v__dat__length=0;
  char __temp828v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp829v__unsafe_ptr=0;
  uint64_t __temp829v__dat__pos=0;
  uint64_t __temp829v__dat__length=0;
  char __temp829v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp830v__=0;
  char __temp831v=0;
  uint64_t __temp832v__=0;
  uint64_t n=0;
  uint64_t __temp833v__=0;
  uint64_t __temp834v__=0;
  char* __temp835v__unsafe_ptr=0;
  uint64_t __temp835v__dat__pos=0;
  uint64_t __temp835v__dat__length=0;
  char __temp835v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp836v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp574v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp828v__unsafe_ptr,&__temp828v__dat__pos,&__temp828v__dat__length,&__temp828v__dat__first);
  stack__unsafe_ptr=__temp828v__unsafe_ptr;
  stack__dat__pos=__temp828v__dat__pos;
  stack__dat__length=__temp828v__dat__length;
  stack__dat__first=__temp828v__dat__first;
  __temp_errcode=str__temp581v(_needle,&__temp829v__unsafe_ptr,&__temp829v__dat__pos,&__temp829v__dat__length,&__temp829v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp829v__unsafe_ptr;
  needle__dat__pos=__temp829v__dat__pos;
  needle__dat__length=__temp829v__dat__length;
  needle__dat__first=__temp829v__dat__first;
  lt__temp185v(stack__dat__length,needle__dat__length,&__temp830v__);
  if(__temp830v__){
  __temp831v=0;
  goto __temp_return;
  }
  len__temp585v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp832v__);
  n=__temp832v__;
  len__temp585v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp833v__);
  __temp_errcode=sub__temp333v(n,__temp833v__,&__temp834v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp758v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp834v__,n,&__temp835v__unsafe_ptr,&__temp835v__dat__pos,&__temp835v__dat__length,&__temp835v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp835v__unsafe_ptr;
  ret__dat__pos=__temp835v__dat__pos;
  ret__dat__length=__temp835v__dat__length;
  ret__dat__first=__temp835v__dat__first;
  eq__temp723v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp836v__);
  __temp831v=__temp836v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1759v=__temp831v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp658v(char** __temp1760v, uint64_t* __temp1761v, uint64_t* __temp1762v, uint64_t* __temp1763v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1764v, uint64_t* __temp1765v, uint64_t* __temp1766v, char* __temp1767v) {
  char* buf__unsafe_ptr=*__temp1760v;
  uint64_t buf__unsafe_size=*__temp1761v;
  uint64_t buf__unsafe_align=*__temp1762v;
  uint64_t pos=*__temp1763v;
  char* __temp659v__unsafe_ptr=0;
  uint64_t __temp659v__dat__pos=0;
  uint64_t __temp659v__dat__length=0;
  char __temp659v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp660v__=0;
  uint64_t __temp661v__=0;
  uint64_t null_pos=0;
  uint64_t __temp662v=0;
  uint64_t __temp663v__=0;
  uint64_t next_pos=0;
  uint64_t __temp664v__=0;
  char __temp665v__=0;
  uint64_t __temp666v=0;
  uint64_t __temp667v__=0;
  uint64_t prev_pos=0;
  char* __temp668v__unsafe_ptr=0;
  uint64_t __temp668v__dat__pos=0;
  uint64_t __temp668v__dat__length=0;
  char __temp668v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp574v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp659v__unsafe_ptr,&__temp659v__dat__pos,&__temp659v__dat__length,&__temp659v__dat__first);
  other__unsafe_ptr=__temp659v__unsafe_ptr;
  other__dat__pos=__temp659v__dat__pos;
  other__dat__length=__temp659v__dat__length;
  other__dat__first=__temp659v__dat__first;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp660v__);
  add__temp113v(pos,__temp660v__,&__temp661v__);
  null_pos=__temp661v__;
  __temp662v=1;
  add__temp113v(null_pos,__temp662v,&__temp663v__);
  next_pos=__temp663v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp664v__);
  gt__temp209v(next_pos,__temp664v__,&__temp665v__);
  if(__temp665v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[null_pos]=0;
  __temp666v=0;
  add__temp113v(pos,__temp666v,&__temp667v__);
  prev_pos=__temp667v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp668v__unsafe_ptr,&__temp668v__dat__pos,&__temp668v__dat__length,&__temp668v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1760v=buf__unsafe_ptr;
  *__temp1761v=buf__unsafe_size;
  *__temp1762v=buf__unsafe_align;
  *__temp1763v=pos;
  *__temp1764v=__temp668v__unsafe_ptr;
  *__temp1765v=__temp668v__dat__pos;
  *__temp1766v=__temp668v__dat__length;
  *__temp1767v=__temp668v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp638v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1768v) {
  uint64_t __temp639v__=0;
  add__temp113v(s__dat__pos,s__dat__length,&__temp639v__);
  goto __temp_return;
  __temp_return:
  *__temp1768v=__temp639v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1769v) {
  int value=0;
  *__temp1769v=value;
}

static inline __attribute__((always_inline)) void not__temp32v(int __temp_anon0, int* __temp1770v) {
  int __temp33v__=0;
  true__temp11v(&__temp33v__);
  goto __temp_return;
  __temp_return:
  *__temp1770v=__temp33v__;
}

static inline __attribute__((always_inline)) int str__temp551v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t length, char** __temp1771v, uint64_t* __temp1772v, uint64_t* __temp1773v, char* __temp1774v) {
  int __temp552v=0;
  int __temp553v=0;
  int __temp554v__=0;
  uint64_t __temp555v__=0;
  char __temp556v__=0;
  uint64_t __temp557v=0;
  uint64_t __temp558v=0;
  char* __temp559v__=0;
  char __temp560v__value=0;
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__dat__pos=0;
  uint64_t __temp561v__dat__length=0;
  char __temp561v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp32v(__temp553v,&__temp554v__);
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp555v__);
  gt__temp209v(length,__temp555v__,&__temp556v__);
  if(__temp556v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  __temp557v=0;
  __temp558v=0;
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp558v,&__temp559v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp559v__){
  goto __temp_failure;
  }
  memcpy(&__temp560v__value,__temp559v__,1);
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp557v,length,__temp560v__value,&__temp561v__unsafe_ptr,&__temp561v__dat__pos,&__temp561v__dat__length,&__temp561v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1771v=__temp561v__unsafe_ptr;
  *__temp1772v=__temp561v__dat__pos;
  *__temp1773v=__temp561v__dat__length;
  *__temp1774v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp680v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp681v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp604v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1775v, uint64_t* __temp1776v, uint64_t* __temp1777v, char* __temp1778v) {
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
  *__temp1775v=__temp611v__unsafe_ptr;
  *__temp1776v=__temp611v__dat__pos;
  *__temp1777v=__temp611v__dat__length;
  *__temp1778v=__temp611v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp543v(const char* c, char* __temp1779v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1779v=z;
}

int unsafe_temporary_cstr__temp612v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1780v) {
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
  *__temp1780v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp385v(uint64_t x, int64_t* __temp1781v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1781v=z;
}

static inline __attribute__((always_inline)) void is_different__temp76v(int64_t x, int64_t y, int* __temp1782v) {
  int __temp77v=0;
  int __temp78v__=0;
  not__temp30v(__temp77v,&__temp78v__);
  goto __temp_return;
  __temp_return:
  *__temp1782v=__temp78v__;
}

static inline __attribute__((always_inline)) void neq__temp294v(int64_t x, int64_t y, char* __temp1783v) {
  int __temp295v__=0;
  char z=0;
  is_different__temp76v(x,y,&__temp295v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1783v=z;
}

static inline __attribute__((always_inline)) int read__temp1201v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first, char** __temp1784v) {
  const char* __temp1202v__=0;
  char __temp1203v____temp615v__=0;
  char __temp1203v____temp616v__=0;
  char* __temp1203v____temp613v__unsafe_ptr=0;
  char __temp1203v____temp614v____temp609v____temp514v____temp439v__=0;
  uint64_t __temp1203v____temp614v____temp608v__unsafe_size=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1204v__=0;
  char __temp1205v__=0;
  char __temp1206v__=0;
  int64_t status=0;
  uint64_t __temp1207v=0;
  int64_t __temp1208v__=0;
  char __temp1209v__=0;
  char __temp1210v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp612v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1202v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1202v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp401v(unsafe_ptr,&__temp1204v__);
  not__temp21v(__temp1204v__,&__temp1205v__);
  if(__temp1205v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(unsafe_ptr,&__temp1206v__);
  if(__temp1206v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp1207v=0;
  int__temp385v(__temp1207v,&__temp1208v__);
  neq__temp294v(status,__temp1208v__,&__temp1209v__);
  if(__temp1209v__){
  __temp_complain=28;
  __temp1210v=__temp1210v==0;
  }
  __temp_return:
  *__temp1784v=unsafe_ptr;
  exists__temp543v(__temp1202v__,&__temp1203v____temp615v__);
  not__temp21v(__temp1203v____temp615v__,&__temp1203v____temp616v__);
  if(__temp1203v____temp616v__){
  exists__temp401v(__temp1203v____temp613v__unsafe_ptr,&__temp1203v____temp614v____temp609v____temp514v____temp439v__);
  if(__temp1203v____temp614v____temp609v____temp514v____temp439v__){
  __temp1203v____temp614v____temp608v__unsafe_size=0;
  __temp1203v____temp614v____temp608v__unsafe_size=__temp1203v____temp614v____temp608v__unsafe_size;
  free__temp431v(&__temp1203v____temp613v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1183v(int64_t value, const char** __temp1785v) {
  int __temp1184v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp353v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1785v=ret;
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value) {
  int __temp352v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1642v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1643v__unsafe_ptr=0;
  char __temp1644v____temp1206v__=0;
  int64_t __temp1644v__status=0;
  uint64_t __temp1644v____temp1207v=0;
  int64_t __temp1644v____temp1208v__=0;
  char __temp1644v____temp1209v__=0;
  char __temp1644v____temp1210v=0;
  char* __temp1645v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1646v=0;
  int64_t __temp1647v=0;
  int64_t error=0;
  const char* __temp1648v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1201v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1643v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1645v__unsafe_ptr=__temp1643v__unsafe_ptr;
  proc__unsafe_ptr=__temp1645v__unsafe_ptr;
  exists__temp401v(__temp1643v__unsafe_ptr,&__temp1644v____temp1206v__);
  if(__temp1644v____temp1206v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1643v__unsafe_ptr)){
  }
  __temp1644v__status=pclose((FILE*)__temp1643v__unsafe_ptr);
  __temp1643v__unsafe_ptr=0;
  }
  __temp1644v____temp1207v=0;
  int__temp385v(__temp1644v____temp1207v,&__temp1644v____temp1208v__);
  neq__temp294v(__temp1644v__status,__temp1644v____temp1208v__,&__temp1644v____temp1209v__);
  if(__temp1644v____temp1209v__){
  __temp_complain=28;
  __temp1644v____temp1210v=__temp1644v____temp1210v==0;
  }
  __temp1647v=__temp_complain;
  __temp1646v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1647v;
  __temp1646v=__temp1646v==0;
  if(__temp1646v){
  cstr__temp1183v(error,&__temp1648v__);
  print__temp351v(__temp1648v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1650v() {
  const char* path=0;
  uint64_t __temp1652v=0;
  char* __temp1653v__unsafe_ptr=0;
  uint64_t __temp1653v__unsafe_size=0;
  uint64_t __temp1653v__unsafe_align=0;
  char __temp1654v____temp514v____temp439v__=0;
  char* __temp1655v__buf__unsafe_ptr=0;
  uint64_t __temp1655v__buf__unsafe_size=0;
  uint64_t __temp1655v__buf__unsafe_align=0;
  uint64_t __temp1655v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint64_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1657v__unsafe_ptr=0;
  uint64_t __temp1657v__dat__pos=0;
  uint64_t __temp1657v__dat__length=0;
  char __temp1657v__dat__first=0;
  char* __temp1658v__unsafe_ptr=0;
  uint64_t __temp1658v__dat__pos=0;
  uint64_t __temp1658v__dat__length=0;
  char __temp1658v__dat__first=0;
  char* __temp1659v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1661v=0;
  uint64_t __temp1662v__=0;
  char* __temp1663v__unsafe_ptr=0;
  uint64_t __temp1663v__unsafe_size=0;
  uint64_t __temp1663v__unsafe_align=0;
  char __temp1664v____temp514v____temp439v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint64_t proc_buf__unsafe_align=0;
  char __temp1665v=0;
  char* __temp1666v__unsafe_ptr=0;
  uint64_t __temp1666v__dat__pos=0;
  uint64_t __temp1666v__dat__length=0;
  char __temp1666v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1668v__=0;
  char __temp1669v__=0;
  char* __temp1670v__buf__unsafe_ptr=0;
  uint64_t __temp1670v__buf__unsafe_size=0;
  uint64_t __temp1670v__buf__unsafe_align=0;
  uint64_t __temp1670v__pos=0;
  char* __temp1671v__unsafe_ptr=0;
  uint64_t __temp1671v__dat__pos=0;
  uint64_t __temp1671v__dat__length=0;
  char __temp1671v__dat__first=0;
  char* __temp1672v__unsafe_ptr=0;
  uint64_t __temp1672v__dat__pos=0;
  uint64_t __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  uint64_t __temp1673v__=0;
  char* __temp1674v__unsafe_ptr=0;
  uint64_t __temp1674v__dat__pos=0;
  uint64_t __temp1674v__dat__length=0;
  char __temp1674v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1651v;
  __temp1652v=256;
  __temp_errcode=alloc__temp508v(__temp1652v,&__temp1653v__unsafe_ptr,&__temp1653v__unsafe_size,&__temp1653v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp618v(&__temp1653v__unsafe_ptr,&__temp1653v__unsafe_size,&__temp1653v__unsafe_align,&__temp1655v__buf__unsafe_ptr,&__temp1655v__buf__unsafe_size,&__temp1655v__buf__unsafe_align,&__temp1655v__pos);
  bp__buf__unsafe_ptr=__temp1655v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1655v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1655v__buf__unsafe_align;
  bp__pos=__temp1655v__pos;
  __temp_errcode=copy__temp649v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1656v,&__temp1657v__unsafe_ptr,&__temp1657v__dat__pos,&__temp1657v__dat__length,&__temp1657v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp649v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1658v__unsafe_ptr,&__temp1658v__dat__pos,&__temp1658v__dat__length,&__temp1658v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1611v(path,&__temp1659v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1659v__unsafe_ptr;
  __temp1661v=4;
  KB__temp413v(__temp1661v,&__temp1662v__);
  __temp_errcode=alloc__temp508v(__temp1662v__,&__temp1663v__unsafe_ptr,&__temp1663v__unsafe_size,&__temp1663v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1663v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1663v__unsafe_size;
  proc_buf__unsafe_align=__temp1663v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1622v(&test_dir__unsafe_ptr,&__temp1666v__unsafe_ptr,&__temp1666v__dat__pos,&__temp1666v__dat__length,&__temp1666v__dat__first);
  __temp1665v=__temp_complain;
  entry__unsafe_ptr=__temp1666v__unsafe_ptr;
  entry__dat__pos=__temp1666v__dat__pos;
  entry__dat__length=__temp1666v__dat__length;
  entry__dat__first=__temp1666v__dat__first;
  __temp1665v=__temp1665v==0;
  if(!__temp1665v){
  break;
  }
  __temp_errcode=ends_with__temp827v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1667v,&__temp1668v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp21v(__temp1668v__,&__temp1669v__);
  if(__temp1669v__){
  continue;
  }
  __temp1670v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1670v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1670v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1670v__pos=bp__pos;
  str__temp574v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1671v__unsafe_ptr,&__temp1671v__dat__pos,&__temp1671v__dat__length,&__temp1671v__dat__first);
  __temp_errcode=copy_null_terminated__temp658v(&__temp1670v__buf__unsafe_ptr,&__temp1670v__buf__unsafe_size,&__temp1670v__buf__unsafe_align,&__temp1670v__pos,__temp1671v__unsafe_ptr,__temp1671v__dat__pos,__temp1671v__dat__length,__temp1671v__dat__first,&__temp1672v__unsafe_ptr,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp638v(__temp1672v__unsafe_ptr,__temp1672v__dat__pos,__temp1672v__dat__length,__temp1672v__dat__first,&__temp1673v__);
  __temp_errcode=str__temp551v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_align,__temp1673v__,&__temp1674v__unsafe_ptr,&__temp1674v__dat__pos,&__temp1674v__dat__length,&__temp1674v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1674v__unsafe_ptr;
  command__dat__pos=__temp1674v__dat__pos;
  command__dat__length=__temp1674v__dat__length;
  command__dat__first=__temp1674v__dat__first;
  print__temp680v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1642v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp401v(__temp1663v__unsafe_ptr,&__temp1664v____temp514v____temp439v__);
  if(__temp1664v____temp514v____temp439v__){
  __temp1663v__unsafe_size=0;
  __temp1663v__unsafe_size=__temp1663v__unsafe_size;
  free__temp431v(&__temp1663v__unsafe_ptr);
  }
  if(__temp1659v__unsafe_ptr){
  closedir((DIR*)__temp1659v__unsafe_ptr);
  __temp1659v__unsafe_ptr=0;
  }
  exists__temp401v(__temp1653v__unsafe_ptr,&__temp1654v____temp514v____temp439v__);
  if(__temp1654v____temp514v____temp439v__){
  __temp1653v__unsafe_size=0;
  __temp1653v__unsafe_size=__temp1653v__unsafe_size;
  free__temp431v(&__temp1653v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1650v();return 0;}