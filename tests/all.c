#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp355v="\n";
const char* const __temp760v="";
const char* const __temp1655v="./smoll ";
const char* const __temp1666v=".s";
const char* const __temp1650v="./tests/passing/";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1675v, uint64_t* __temp1676v, uint64_t* __temp1677v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1675v=unsafe_ptr;
  *__temp1676v=unsafe_size;
  *__temp1677v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1678v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1678v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1679v) {
  char* allocated=*__temp1679v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1679v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1680v) {
  int value=0;
  *__temp1680v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1681v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1681v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1682v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1682v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1683v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1683v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1684v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1684v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1685v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1685v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1686v) {
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
  *__temp1686v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1687v, uint64_t* __temp1688v, uint64_t* __temp1689v, uint64_t size, char** __temp1690v, uint64_t* __temp1691v, uint64_t* __temp1692v) {
  char* buffer__unsafe_ptr=*__temp1687v;
  uint64_t buffer__unsafe_size=*__temp1688v;
  uint64_t buffer__unsafe_align=*__temp1689v;
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
  *__temp1687v=buffer__unsafe_ptr;
  *__temp1688v=buffer__unsafe_size;
  *__temp1689v=buffer__unsafe_align;
  *__temp1690v=buffer__unsafe_ptr;
  *__temp1691v=buffer__unsafe_size;
  *__temp1692v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1693v, uint64_t* __temp1694v, uint64_t* __temp1695v) {
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
  *__temp1693v=__temp513v__unsafe_ptr;
  *__temp1694v=__temp513v__unsafe_size;
  *__temp1695v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp602v(char** __temp1696v, uint64_t* __temp1697v, uint64_t* __temp1698v, char** __temp1699v, uint64_t* __temp1700v, uint64_t* __temp1701v, uint64_t* __temp1702v) {
  char* buf__unsafe_ptr=*__temp1696v;
  uint64_t buf__unsafe_size=*__temp1697v;
  uint64_t buf__unsafe_align=*__temp1698v;
  uint64_t __temp603v=0;
  uint64_t __temp604v=0;
  uint64_t pos=0;
  __temp603v=0;
  __temp604v=__temp603v;
  pos=__temp604v;
  goto __temp_return;
  __temp_return:
  *__temp1696v=buf__unsafe_ptr;
  *__temp1697v=buf__unsafe_size;
  *__temp1698v=buf__unsafe_align;
  *__temp1699v=buf__unsafe_ptr;
  *__temp1700v=buf__unsafe_size;
  *__temp1701v=buf__unsafe_align;
  *__temp1702v=pos;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1703v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1703v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1704v) {
  *__temp1704v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1705v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1705v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1706v) {
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
  *__temp1706v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1707v, uint64_t* __temp1708v, uint64_t* __temp1709v, char* __temp1710v) {
  goto __temp_return;
  __temp_return:
  *__temp1707v=unsafe_ptr;
  *__temp1708v=dat__pos;
  *__temp1709v=dat__length;
  *__temp1710v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1711v, uint64_t* __temp1712v, uint64_t* __temp1713v, char* __temp1714v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1711v=__temp550v__unsafe_ptr;
  *__temp1712v=__temp550v__dat__pos;
  *__temp1713v=__temp550v__dat__length;
  *__temp1714v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp559v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1715v, uint64_t* __temp1716v, uint64_t* __temp1717v, char* __temp1718v) {
  uint64_t __temp560v=0;
  char __temp561v__=0;
  char* __temp562v__=0;
  char __temp563v__value=0;
  char first=0;
  char* __temp564v__unsafe_ptr=0;
  uint64_t __temp564v__dat__pos=0;
  uint64_t __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp560v=0;
  neq__temp305v(length,__temp560v,&__temp561v__);
  if(__temp561v__){
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp562v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp562v__){
  goto __temp_failure;
  }
  memcpy(&__temp563v__value,__temp562v__,1);
  first=__temp563v__value;
  }
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp564v__unsafe_ptr,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1715v=__temp564v__unsafe_ptr;
  *__temp1716v=__temp564v__dat__pos;
  *__temp1717v=__temp564v__dat__length;
  *__temp1718v=__temp564v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp565v(const char* c, char** __temp1719v, uint64_t* __temp1720v, uint64_t* __temp1721v, char* __temp1722v) {
  char* __temp566v__unsafe_ptr=0;
  uint64_t __temp566v__unsafe_size=0;
  uint64_t __temp566v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp567v=0;
  char* __temp568v__unsafe_ptr=0;
  uint64_t __temp568v__dat__pos=0;
  uint64_t __temp568v__dat__length=0;
  char __temp568v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp566v__unsafe_ptr,&__temp566v__unsafe_size,&__temp566v__unsafe_align);
  buf__unsafe_ptr=__temp566v__unsafe_ptr;
  buf__unsafe_size=__temp566v__unsafe_size;
  buf__unsafe_align=__temp566v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp567v=0;
  __temp_errcode=str__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp567v,length,&__temp568v__unsafe_ptr,&__temp568v__dat__pos,&__temp568v__dat__length,&__temp568v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1719v=__temp568v__unsafe_ptr;
  *__temp1720v=__temp568v__dat__pos;
  *__temp1721v=__temp568v__dat__length;
  *__temp1722v=__temp568v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp569v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1723v) {
  goto __temp_return;
  __temp_return:
  *__temp1723v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1724v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1724v=z;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1725v) {
  goto __temp_return;
  __temp_return:
  *__temp1725v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1726v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1726v=z;
}

int copy__temp648v(char** __temp1727v, uint64_t* __temp1728v, uint64_t* __temp1729v, uint64_t* __temp1730v, const char* _other, char** __temp1731v, uint64_t* __temp1732v, uint64_t* __temp1733v, char* __temp1734v) {
  char* buf__unsafe_ptr=*__temp1727v;
  uint64_t buf__unsafe_size=*__temp1728v;
  uint64_t buf__unsafe_align=*__temp1729v;
  uint64_t pos=*__temp1730v;
  char* __temp649v__unsafe_ptr=0;
  uint64_t __temp649v__dat__pos=0;
  uint64_t __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp650v__=0;
  uint64_t __temp651v__=0;
  uint64_t next_pos=0;
  uint64_t __temp652v__=0;
  char __temp653v__=0;
  uint64_t __temp654v=0;
  uint64_t __temp655v__=0;
  uint64_t prev_pos=0;
  char* __temp656v__unsafe_ptr=0;
  uint64_t __temp656v__dat__pos=0;
  uint64_t __temp656v__dat__length=0;
  char __temp656v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp565v(_other,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp649v__unsafe_ptr;
  other__dat__pos=__temp649v__dat__pos;
  other__dat__length=__temp649v__dat__length;
  other__dat__first=__temp649v__dat__first;
  len__temp569v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp650v__);
  add__temp113v(pos,__temp650v__,&__temp651v__);
  next_pos=__temp651v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp652v__);
  gt__temp209v(next_pos,__temp652v__,&__temp653v__);
  if(__temp653v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp654v=0;
  add__temp113v(pos,__temp654v,&__temp655v__);
  prev_pos=__temp655v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp656v__unsafe_ptr,&__temp656v__dat__pos,&__temp656v__dat__length,&__temp656v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1727v=buf__unsafe_ptr;
  *__temp1728v=buf__unsafe_size;
  *__temp1729v=buf__unsafe_align;
  *__temp1730v=pos;
  *__temp1731v=__temp656v__unsafe_ptr;
  *__temp1732v=__temp656v__dat__pos;
  *__temp1733v=__temp656v__dat__length;
  *__temp1734v=__temp656v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp601v(const char* other, const char** __temp1735v) {
  goto __temp_return;
  __temp_return:
  *__temp1735v=other;
}

static inline __attribute__((always_inline)) void not__temp21v(char value, char* __temp1736v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1736v=z;
}

static inline __attribute__((always_inline)) int read__temp1616v(const char* _path, char** __temp1737v) {
  const char* __temp1617v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1618v__=0;
  char __temp1619v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp601v(_path,&__temp1617v__);
  path=__temp1617v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp401v(unsafe_ptr,&__temp1618v__);
  not__temp21v(__temp1618v__,&__temp1619v__);
  if(__temp1619v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1737v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp413v(uint64_t x, uint64_t* __temp1738v) {
  uint64_t __temp414v=0;
  uint64_t __temp415v__=0;
  __temp414v=1024;
  mul__temp137v(x,__temp414v,&__temp415v__);
  goto __temp_return;
  __temp_return:
  *__temp1738v=__temp415v__;
}

static inline __attribute__((always_inline)) int entry__temp1627v(char** __temp1739v, char** __temp1740v, uint64_t* __temp1741v, uint64_t* __temp1742v, char* __temp1743v) {
  char* f__unsafe_ptr=*__temp1739v;
  char __temp1628v__=0;
  char __temp1629v__=0;
  char* de=0;
  char __temp1630v__=0;
  char __temp1631v__=0;
  const char* dirname=0;
  char* __temp1632v__unsafe_ptr=0;
  uint64_t __temp1632v__dat__pos=0;
  uint64_t __temp1632v__dat__length=0;
  char __temp1632v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp401v(f__unsafe_ptr,&__temp1628v__);
  not__temp21v(__temp1628v__,&__temp1629v__);
  if(__temp1629v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp401v(de,&__temp1630v__);
  not__temp21v(__temp1630v__,&__temp1631v__);
  if(__temp1631v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp565v(dirname,&__temp1632v__unsafe_ptr,&__temp1632v__dat__pos,&__temp1632v__dat__length,&__temp1632v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1739v=f__unsafe_ptr;
  *__temp1740v=__temp1632v__unsafe_ptr;
  *__temp1741v=__temp1632v__dat__pos;
  *__temp1742v=__temp1632v__dat__length;
  *__temp1743v=__temp1632v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp558v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1744v, uint64_t* __temp1745v, uint64_t* __temp1746v, char* __temp1747v) {
  goto __temp_return;
  __temp_return:
  *__temp1744v=other__unsafe_ptr;
  *__temp1745v=other__dat__pos;
  *__temp1746v=other__dat__length;
  *__temp1747v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1748v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1748v=z;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp1749v) {
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
  *__temp1749v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1750v) {
  uint64_t __temp719v__=0;
  char* __temp720v__=0;
  char* unsafe_ptr=0;
  add__temp113v(s__dat__pos,i,&__temp719v__);
  add__temp433v(s__unsafe_ptr,__temp719v__,&__temp720v__);
  unsafe_ptr=__temp720v__;
  goto __temp_return;
  __temp_return:
  *__temp1750v=unsafe_ptr;
}

int slice__temp757v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1751v, uint64_t* __temp1752v, uint64_t* __temp1753v, char* __temp1754v) {
  char* __temp758v__unsafe_ptr=0;
  uint64_t __temp758v__dat__pos=0;
  uint64_t __temp758v__dat__length=0;
  char __temp758v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp759v__=0;
  char* __temp761v__unsafe_ptr=0;
  uint64_t __temp761v__dat__pos=0;
  uint64_t __temp761v__dat__length=0;
  char __temp761v__dat__first=0;
  char __temp762v__=0;
  char __temp763v__=0;
  char __temp764v=0;
  uint64_t __temp765v__=0;
  uint64_t new_length=0;
  uint64_t __temp766v=0;
  char __temp767v__=0;
  char new_first=0;
  char* __temp768v__=0;
  char __temp769v__value=0;
  uint64_t __temp770v__=0;
  char* __temp771v__unsafe_ptr=0;
  uint64_t __temp771v__dat__pos=0;
  uint64_t __temp771v__dat__length=0;
  char __temp771v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp558v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp758v__unsafe_ptr,&__temp758v__dat__pos,&__temp758v__dat__length,&__temp758v__dat__first);
  s__unsafe_ptr=__temp758v__unsafe_ptr;
  s__dat__pos=__temp758v__dat__pos;
  s__dat__length=__temp758v__dat__length;
  s__dat__first=__temp758v__dat__first;
  eq__temp281v(from,to,&__temp759v__);
  if(__temp759v__){
  __temp_errcode=str__temp565v(__temp760v,&__temp761v__unsafe_ptr,&__temp761v__dat__pos,&__temp761v__dat__length,&__temp761v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp185v(from,to,&__temp762v__);
  if(!__temp762v__){
  gt__temp209v(to,s__dat__length,&__temp763v__);
  __temp764v=__temp763v__;
  }
  if(__temp764v){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp333v(to,from,&__temp765v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp765v__;
  __temp766v=0;
  neq__temp305v(from,__temp766v,&__temp767v__);
  if(__temp767v__){
  get__temp718v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp768v__);
  if(!__temp768v__){
  goto __temp_failure;
  }
  memcpy(&__temp769v__value,__temp768v__,1);
  new_first=__temp769v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp113v(s__dat__pos,from,&__temp770v__);
  str__temp545v(s__unsafe_ptr,__temp770v__,new_length,new_first,&__temp771v__unsafe_ptr,&__temp771v__dat__pos,&__temp771v__dat__length,&__temp771v__dat__first);
  __temp761v__unsafe_ptr=__temp771v__unsafe_ptr;
  __temp761v__dat__pos=__temp771v__dat__pos;
  __temp761v__dat__length=__temp771v__dat__length;
  __temp761v__dat__first=__temp771v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1751v=__temp761v__unsafe_ptr;
  *__temp1752v=__temp761v__dat__pos;
  *__temp1753v=__temp761v__dat__length;
  *__temp1754v=__temp761v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp573v(char x, char y, char* __temp1755v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1755v=z;
}

static inline __attribute__((always_inline)) void eq__temp722v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1756v) {
  uint64_t __temp723v__=0;
  uint64_t n=0;
  uint64_t __temp724v__=0;
  char __temp725v__=0;
  char __temp726v=0;
  char __temp727v__=0;
  char __temp728v=0;
  char z=0;
  len__temp569v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp723v__);
  n=__temp723v__;
  len__temp569v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp724v__);
  neq__temp305v(n,__temp724v__,&__temp725v__);
  if(__temp725v__){
  __temp726v=0;
  goto __temp_return;
  }
  neq__temp573v(x__dat__first,y__dat__first,&__temp727v__);
  if(__temp727v__){
  __temp728v=0;
  __temp726v=__temp728v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp726v=z;
  goto __temp_return;
  __temp_return:
  *__temp1756v=__temp726v;
}

static inline __attribute__((always_inline)) int ends_with__temp826v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1757v) {
  char* __temp827v__unsafe_ptr=0;
  uint64_t __temp827v__dat__pos=0;
  uint64_t __temp827v__dat__length=0;
  char __temp827v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp828v__unsafe_ptr=0;
  uint64_t __temp828v__dat__pos=0;
  uint64_t __temp828v__dat__length=0;
  char __temp828v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp829v__=0;
  char __temp830v=0;
  uint64_t __temp831v__=0;
  uint64_t n=0;
  uint64_t __temp832v__=0;
  uint64_t __temp833v__=0;
  char* __temp834v__unsafe_ptr=0;
  uint64_t __temp834v__dat__pos=0;
  uint64_t __temp834v__dat__length=0;
  char __temp834v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp835v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp558v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp827v__unsafe_ptr,&__temp827v__dat__pos,&__temp827v__dat__length,&__temp827v__dat__first);
  stack__unsafe_ptr=__temp827v__unsafe_ptr;
  stack__dat__pos=__temp827v__dat__pos;
  stack__dat__length=__temp827v__dat__length;
  stack__dat__first=__temp827v__dat__first;
  __temp_errcode=str__temp565v(_needle,&__temp828v__unsafe_ptr,&__temp828v__dat__pos,&__temp828v__dat__length,&__temp828v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp828v__unsafe_ptr;
  needle__dat__pos=__temp828v__dat__pos;
  needle__dat__length=__temp828v__dat__length;
  needle__dat__first=__temp828v__dat__first;
  lt__temp185v(stack__dat__length,needle__dat__length,&__temp829v__);
  if(__temp829v__){
  __temp830v=0;
  goto __temp_return;
  }
  len__temp569v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp831v__);
  n=__temp831v__;
  len__temp569v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp832v__);
  __temp_errcode=sub__temp333v(n,__temp832v__,&__temp833v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp757v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp833v__,n,&__temp834v__unsafe_ptr,&__temp834v__dat__pos,&__temp834v__dat__length,&__temp834v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp834v__unsafe_ptr;
  ret__dat__pos=__temp834v__dat__pos;
  ret__dat__length=__temp834v__dat__length;
  ret__dat__first=__temp834v__dat__first;
  eq__temp722v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp835v__);
  __temp830v=__temp835v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1757v=__temp830v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp657v(char** __temp1758v, uint64_t* __temp1759v, uint64_t* __temp1760v, uint64_t* __temp1761v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1762v, uint64_t* __temp1763v, uint64_t* __temp1764v, char* __temp1765v) {
  char* buf__unsafe_ptr=*__temp1758v;
  uint64_t buf__unsafe_size=*__temp1759v;
  uint64_t buf__unsafe_align=*__temp1760v;
  uint64_t pos=*__temp1761v;
  char* __temp658v__unsafe_ptr=0;
  uint64_t __temp658v__dat__pos=0;
  uint64_t __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp659v__=0;
  uint64_t __temp660v__=0;
  uint64_t null_pos=0;
  uint64_t __temp661v=0;
  uint64_t __temp662v__=0;
  uint64_t next_pos=0;
  uint64_t __temp663v__=0;
  char __temp664v__=0;
  uint64_t __temp665v=0;
  uint64_t __temp666v__=0;
  uint64_t prev_pos=0;
  char* __temp667v__unsafe_ptr=0;
  uint64_t __temp667v__dat__pos=0;
  uint64_t __temp667v__dat__length=0;
  char __temp667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp558v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp658v__unsafe_ptr,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  other__unsafe_ptr=__temp658v__unsafe_ptr;
  other__dat__pos=__temp658v__dat__pos;
  other__dat__length=__temp658v__dat__length;
  other__dat__first=__temp658v__dat__first;
  len__temp569v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp659v__);
  add__temp113v(pos,__temp659v__,&__temp660v__);
  null_pos=__temp660v__;
  __temp661v=1;
  add__temp113v(null_pos,__temp661v,&__temp662v__);
  next_pos=__temp662v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp663v__);
  gt__temp209v(next_pos,__temp663v__,&__temp664v__);
  if(__temp664v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[null_pos]=0;
  __temp665v=0;
  add__temp113v(pos,__temp665v,&__temp666v__);
  prev_pos=__temp666v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp667v__unsafe_ptr,&__temp667v__dat__pos,&__temp667v__dat__length,&__temp667v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1758v=buf__unsafe_ptr;
  *__temp1759v=buf__unsafe_size;
  *__temp1760v=buf__unsafe_align;
  *__temp1761v=pos;
  *__temp1762v=__temp667v__unsafe_ptr;
  *__temp1763v=__temp667v__dat__pos;
  *__temp1764v=__temp667v__dat__length;
  *__temp1765v=__temp667v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1766v, uint64_t* __temp1767v, uint64_t* __temp1768v, char* __temp1769v) {
  char* first_pos=0;
  char first=0;
  char* __temp548v__unsafe_ptr=0;
  uint64_t __temp548v__dat__pos=0;
  uint64_t __temp548v__dat__length=0;
  char __temp548v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp545v(unsafe_ptr,pos,length,first,&__temp548v__unsafe_ptr,&__temp548v__dat__pos,&__temp548v__dat__length,&__temp548v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1766v=__temp548v__unsafe_ptr;
  *__temp1767v=__temp548v__dat__pos;
  *__temp1768v=__temp548v__dat__length;
  *__temp1769v=__temp548v__dat__first;
}

static inline __attribute__((always_inline)) int lextend__temp630v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1770v, uint64_t* __temp1771v, uint64_t* __temp1772v, char* __temp1773v) {
  int __temp631v=0;
  uint64_t __temp632v=0;
  uint64_t pos=0;
  char __temp633v__=0;
  uint64_t __temp634v__=0;
  char __temp635v__=0;
  uint64_t __temp636v__=0;
  uint64_t __temp637v__=0;
  char* __temp638v__unsafe_ptr=0;
  uint64_t __temp638v__dat__pos=0;
  uint64_t __temp638v__dat__length=0;
  char __temp638v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp632v=0;
  pos=__temp632v;
  eq__temp281v(pos,s__dat__pos,&__temp633v__);
  if(__temp633v__){
  goto __temp_return;
  }
  add__temp113v(s__dat__pos,s__dat__length,&__temp634v__);
  gt__temp209v(pos,__temp634v__,&__temp635v__);
  if(__temp635v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  add__temp113v(s__dat__pos,s__dat__length,&__temp636v__);
  __temp_errcode=sub__temp333v(__temp636v__,pos,&__temp637v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__temp547v(s__unsafe_ptr,pos,__temp637v__,&__temp638v__unsafe_ptr,&__temp638v__dat__pos,&__temp638v__dat__length,&__temp638v__dat__first);
  s__unsafe_ptr=__temp638v__unsafe_ptr;
  s__dat__pos=__temp638v__dat__pos;
  s__dat__length=__temp638v__dat__length;
  s__dat__first=__temp638v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1770v=s__unsafe_ptr;
  *__temp1771v=s__dat__pos;
  *__temp1772v=s__dat__length;
  *__temp1773v=s__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp681v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp682v=0;
  const char* endl=0;
  endl=__temp355v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp588v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1774v, uint64_t* __temp1775v, uint64_t* __temp1776v, char* __temp1777v) {
  uint64_t __temp589v=0;
  uint64_t __temp590v__=0;
  uint64_t __temp591v__=0;
  char* __temp592v__unsafe_ptr=0;
  uint64_t __temp592v__unsafe_size=0;
  uint64_t __temp592v__unsafe_align=0;
  char __temp593v____temp514v____temp439v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp594v=0;
  char* __temp595v__unsafe_ptr=0;
  uint64_t __temp595v__dat__pos=0;
  uint64_t __temp595v__dat__length=0;
  char __temp595v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp589v=1;
  len__temp569v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp590v__);
  add__temp113v(__temp589v,__temp590v__,&__temp591v__);
  __temp_errcode=alloc__temp508v(__temp591v__,&__temp592v__unsafe_ptr,&__temp592v__unsafe_size,&__temp592v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp592v__unsafe_ptr;
  buf__unsafe_size=__temp592v__unsafe_size;
  buf__unsafe_align=__temp592v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp594v=0;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp594v,other__dat__length,other__dat__first,&__temp595v__unsafe_ptr,&__temp595v__dat__pos,&__temp595v__dat__length,&__temp595v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp595v__unsafe_ptr,&__temp593v____temp514v____temp439v__);
  if(__temp593v____temp514v____temp439v__){
  __temp592v__unsafe_size=0;
  __temp592v__unsafe_size=__temp592v__unsafe_size;
  free__temp431v(&__temp595v__unsafe_ptr);
  }
  __temp_return:
  *__temp1774v=__temp595v__unsafe_ptr;
  *__temp1775v=__temp595v__dat__pos;
  *__temp1776v=__temp595v__dat__length;
  *__temp1777v=__temp595v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp543v(const char* c, char* __temp1778v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1778v=z;
}

int unsafe_temporary_cstr__temp596v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1779v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp597v__unsafe_ptr=0;
  uint64_t __temp597v__dat__pos=0;
  uint64_t __temp597v__dat__length=0;
  char __temp597v__dat__first=0;
  char __temp598v____temp593v____temp514v____temp439v__=0;
  uint64_t __temp598v____temp592v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp599v__=0;
  char __temp600v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp588v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp597v__unsafe_ptr,&__temp597v__dat__pos,&__temp597v__dat__length,&__temp597v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp597v__unsafe_ptr;
  c__dat__pos=__temp597v__dat__pos;
  c__dat__length=__temp597v__dat__length;
  c__dat__first=__temp597v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp543v(ret,&__temp599v__);
  not__temp21v(__temp599v__,&__temp600v__);
  if(__temp600v__){
  exists__temp401v(__temp597v__unsafe_ptr,&__temp598v____temp593v____temp514v____temp439v__);
  if(__temp598v____temp593v____temp514v____temp439v__){
  __temp598v____temp592v__unsafe_size=0;
  __temp598v____temp592v__unsafe_size=__temp598v____temp592v__unsafe_size;
  free__temp431v(&__temp597v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1779v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp385v(uint64_t x, int64_t* __temp1780v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1780v=z;
}

static inline __attribute__((always_inline)) void is_different__temp76v(int64_t x, int64_t y, int* __temp1781v) {
  int __temp77v=0;
  int __temp78v__=0;
  not__temp30v(__temp77v,&__temp78v__);
  goto __temp_return;
  __temp_return:
  *__temp1781v=__temp78v__;
}

static inline __attribute__((always_inline)) void neq__temp294v(int64_t x, int64_t y, char* __temp1782v) {
  int __temp295v__=0;
  char z=0;
  is_different__temp76v(x,y,&__temp295v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1782v=z;
}

static inline __attribute__((always_inline)) int read__temp1190v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first, char** __temp1783v) {
  const char* __temp1191v__=0;
  char __temp1192v____temp599v__=0;
  char __temp1192v____temp600v__=0;
  char* __temp1192v____temp597v__unsafe_ptr=0;
  char __temp1192v____temp598v____temp593v____temp514v____temp439v__=0;
  uint64_t __temp1192v____temp598v____temp592v__unsafe_size=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1193v__=0;
  char __temp1194v__=0;
  char __temp1195v__=0;
  int64_t status=0;
  uint64_t __temp1196v=0;
  int64_t __temp1197v__=0;
  char __temp1198v__=0;
  char __temp1199v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp596v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1191v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1191v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp401v(unsafe_ptr,&__temp1193v__);
  not__temp21v(__temp1193v__,&__temp1194v__);
  if(__temp1194v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(unsafe_ptr,&__temp1195v__);
  if(__temp1195v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp1196v=0;
  int__temp385v(__temp1196v,&__temp1197v__);
  neq__temp294v(status,__temp1197v__,&__temp1198v__);
  if(__temp1198v__){
  __temp_complain=28;
  __temp1199v=__temp1199v==0;
  }
  __temp_return:
  *__temp1783v=unsafe_ptr;
  exists__temp543v(__temp1191v__,&__temp1192v____temp599v__);
  not__temp21v(__temp1192v____temp599v__,&__temp1192v____temp600v__);
  if(__temp1192v____temp600v__){
  exists__temp401v(__temp1192v____temp597v__unsafe_ptr,&__temp1192v____temp598v____temp593v____temp514v____temp439v__);
  if(__temp1192v____temp598v____temp593v____temp514v____temp439v__){
  __temp1192v____temp598v____temp592v__unsafe_size=0;
  __temp1192v____temp598v____temp592v__unsafe_size=__temp1192v____temp598v____temp592v__unsafe_size;
  free__temp431v(&__temp1192v____temp597v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1182v(int64_t value, const char** __temp1784v) {
  int __temp1183v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp355v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1784v=ret;
}

static inline __attribute__((always_inline)) void print__temp353v(const char* value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp355v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1633v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1634v__unsafe_ptr=0;
  char __temp1635v____temp1195v__=0;
  int64_t __temp1635v__status=0;
  uint64_t __temp1635v____temp1196v=0;
  int64_t __temp1635v____temp1197v__=0;
  char __temp1635v____temp1198v__=0;
  char __temp1635v____temp1199v=0;
  char* __temp1636v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1637v=0;
  int64_t __temp1638v=0;
  int64_t error=0;
  const char* __temp1639v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1190v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1634v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1636v__unsafe_ptr=__temp1634v__unsafe_ptr;
  proc__unsafe_ptr=__temp1636v__unsafe_ptr;
  exists__temp401v(__temp1634v__unsafe_ptr,&__temp1635v____temp1195v__);
  if(__temp1635v____temp1195v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1634v__unsafe_ptr)){
  }
  __temp1635v__status=pclose((FILE*)__temp1634v__unsafe_ptr);
  __temp1634v__unsafe_ptr=0;
  }
  __temp1635v____temp1196v=0;
  int__temp385v(__temp1635v____temp1196v,&__temp1635v____temp1197v__);
  neq__temp294v(__temp1635v__status,__temp1635v____temp1197v__,&__temp1635v____temp1198v__);
  if(__temp1635v____temp1198v__){
  __temp_complain=28;
  __temp1635v____temp1199v=__temp1635v____temp1199v==0;
  }
  __temp1638v=__temp_complain;
  __temp1637v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1638v;
  __temp1637v=__temp1637v==0;
  if(__temp1637v){
  cstr__temp1182v(error,&__temp1639v__);
  print__temp353v(__temp1639v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1649v() {
  const char* path=0;
  uint64_t __temp1651v=0;
  uint64_t max_command_length=0;
  char* __temp1652v__unsafe_ptr=0;
  uint64_t __temp1652v__unsafe_size=0;
  uint64_t __temp1652v__unsafe_align=0;
  char __temp1653v____temp514v____temp439v__=0;
  char* __temp1654v__buf__unsafe_ptr=0;
  uint64_t __temp1654v__buf__unsafe_size=0;
  uint64_t __temp1654v__buf__unsafe_align=0;
  uint64_t __temp1654v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint64_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1656v__unsafe_ptr=0;
  uint64_t __temp1656v__dat__pos=0;
  uint64_t __temp1656v__dat__length=0;
  char __temp1656v__dat__first=0;
  char* __temp1657v__unsafe_ptr=0;
  uint64_t __temp1657v__dat__pos=0;
  uint64_t __temp1657v__dat__length=0;
  char __temp1657v__dat__first=0;
  char* __temp1658v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1660v=0;
  uint64_t __temp1661v__=0;
  char* __temp1662v__unsafe_ptr=0;
  uint64_t __temp1662v__unsafe_size=0;
  uint64_t __temp1662v__unsafe_align=0;
  char __temp1663v____temp514v____temp439v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint64_t proc_buf__unsafe_align=0;
  char __temp1664v=0;
  char* __temp1665v__unsafe_ptr=0;
  uint64_t __temp1665v__dat__pos=0;
  uint64_t __temp1665v__dat__length=0;
  char __temp1665v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1667v__=0;
  char __temp1668v__=0;
  char* __temp1669v__buf__unsafe_ptr=0;
  uint64_t __temp1669v__buf__unsafe_size=0;
  uint64_t __temp1669v__buf__unsafe_align=0;
  uint64_t __temp1669v__pos=0;
  char* __temp1670v__unsafe_ptr=0;
  uint64_t __temp1670v__dat__pos=0;
  uint64_t __temp1670v__dat__length=0;
  char __temp1670v__dat__first=0;
  char* __temp1671v__unsafe_ptr=0;
  uint64_t __temp1671v__dat__pos=0;
  uint64_t __temp1671v__dat__length=0;
  char __temp1671v__dat__first=0;
  char* __temp1672v__unsafe_ptr=0;
  uint64_t __temp1672v__dat__pos=0;
  uint64_t __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1650v;
  __temp1651v=50;
  max_command_length=__temp1651v;
  __temp_errcode=alloc__temp508v(max_command_length,&__temp1652v__unsafe_ptr,&__temp1652v__unsafe_size,&__temp1652v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp602v(&__temp1652v__unsafe_ptr,&__temp1652v__unsafe_size,&__temp1652v__unsafe_align,&__temp1654v__buf__unsafe_ptr,&__temp1654v__buf__unsafe_size,&__temp1654v__buf__unsafe_align,&__temp1654v__pos);
  bp__buf__unsafe_ptr=__temp1654v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1654v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1654v__buf__unsafe_align;
  bp__pos=__temp1654v__pos;
  __temp_errcode=copy__temp648v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1655v,&__temp1656v__unsafe_ptr,&__temp1656v__dat__pos,&__temp1656v__dat__length,&__temp1656v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp648v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1657v__unsafe_ptr,&__temp1657v__dat__pos,&__temp1657v__dat__length,&__temp1657v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1616v(path,&__temp1658v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1658v__unsafe_ptr;
  __temp1660v=4;
  KB__temp413v(__temp1660v,&__temp1661v__);
  __temp_errcode=alloc__temp508v(__temp1661v__,&__temp1662v__unsafe_ptr,&__temp1662v__unsafe_size,&__temp1662v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1662v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1662v__unsafe_size;
  proc_buf__unsafe_align=__temp1662v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1627v(&test_dir__unsafe_ptr,&__temp1665v__unsafe_ptr,&__temp1665v__dat__pos,&__temp1665v__dat__length,&__temp1665v__dat__first);
  __temp1664v=__temp_complain;
  entry__unsafe_ptr=__temp1665v__unsafe_ptr;
  entry__dat__pos=__temp1665v__dat__pos;
  entry__dat__length=__temp1665v__dat__length;
  entry__dat__first=__temp1665v__dat__first;
  __temp1664v=__temp1664v==0;
  if(!__temp1664v){
  break;
  }
  __temp_errcode=ends_with__temp826v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1666v,&__temp1667v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp21v(__temp1667v__,&__temp1668v__);
  if(__temp1668v__){
  continue;
  }
  __temp1669v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1669v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1669v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1669v__pos=bp__pos;
  str__temp558v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1670v__unsafe_ptr,&__temp1670v__dat__pos,&__temp1670v__dat__length,&__temp1670v__dat__first);
  __temp_errcode=copy_null_terminated__temp657v(&__temp1669v__buf__unsafe_ptr,&__temp1669v__buf__unsafe_size,&__temp1669v__buf__unsafe_align,&__temp1669v__pos,__temp1670v__unsafe_ptr,__temp1670v__dat__pos,__temp1670v__dat__length,__temp1670v__dat__first,&__temp1671v__unsafe_ptr,&__temp1671v__dat__pos,&__temp1671v__dat__length,&__temp1671v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=lextend__temp630v(__temp1671v__unsafe_ptr,__temp1671v__dat__pos,__temp1671v__dat__length,__temp1671v__dat__first,&__temp1672v__unsafe_ptr,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1672v__unsafe_ptr;
  command__dat__pos=__temp1672v__dat__pos;
  command__dat__length=__temp1672v__dat__length;
  command__dat__first=__temp1672v__dat__first;
  print__temp681v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1633v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp401v(__temp1662v__unsafe_ptr,&__temp1663v____temp514v____temp439v__);
  if(__temp1663v____temp514v____temp439v__){
  __temp1662v__unsafe_size=0;
  __temp1662v__unsafe_size=__temp1662v__unsafe_size;
  free__temp431v(&__temp1662v__unsafe_ptr);
  }
  if(__temp1658v__unsafe_ptr){
  closedir((DIR*)__temp1658v__unsafe_ptr);
  __temp1658v__unsafe_ptr=0;
  }
  exists__temp401v(__temp1652v__unsafe_ptr,&__temp1653v____temp514v____temp439v__);
  if(__temp1653v____temp514v____temp439v__){
  __temp1652v__unsafe_size=0;
  __temp1652v__unsafe_size=__temp1652v__unsafe_size;
  free__temp431v(&__temp1652v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1649v();return 0;}