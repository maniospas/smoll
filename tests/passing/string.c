#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1671v="README.md";
static const char* __temp_all_errcodes[48] = {"noerr",
"error",
"null pointer",
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
"can only define strings on contiguous buffers",
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1686v, uint64_t* __temp1687v, uint64_t* __temp1688v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1686v=unsafe_ptr;
  *__temp1687v=unsafe_size;
  *__temp1688v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1689v) {
  *__temp1689v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1690v) {
  int value=0;
  *__temp1690v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1691v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1691v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1692v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1692v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1693v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1694v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1694v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1695v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1695v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1696v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1696v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1697v) {
  *__temp1697v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1698v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1698v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1699v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1699v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1700v, uint64_t* __temp1701v, uint64_t* __temp1702v, char* __temp1703v) {
  goto __temp_return;
  __temp_return:
  *__temp1700v=unsafe_ptr;
  *__temp1701v=dat__pos;
  *__temp1702v=dat__length;
  *__temp1703v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1704v, uint64_t* __temp1705v, uint64_t* __temp1706v, char* __temp1707v) {
  char* unsafe_ptr=0;
  uint64_t __temp580v=0;
  char __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__dat__pos=0;
  uint64_t __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  __temp580v=1;
  neq__temp142v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1704v=__temp582v__unsafe_ptr;
  *__temp1705v=__temp582v__dat__pos;
  *__temp1706v=__temp582v__dat__length;
  *__temp1707v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1708v, uint64_t* __temp1709v, uint64_t* __temp1710v, char* __temp1711v) {
  uint64_t __temp608v=0;
  char __temp609v__=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char first=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp608v=0;
  neq__temp142v(length,__temp608v,&__temp609v__);
  if(__temp609v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  first=__temp611v__value;
  }
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1708v=__temp612v__unsafe_ptr;
  *__temp1709v=__temp612v__dat__pos;
  *__temp1710v=__temp612v__dat__length;
  *__temp1711v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1712v, uint64_t* __temp1713v, uint64_t* __temp1714v, char* __temp1715v) {
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__unsafe_size=0;
  uint64_t __temp614v__unsafe_align=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__unsafe_size=0;
  uint64_t __temp615v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp616v__=0;
  uint64_t length=0;
  uint64_t __temp617v=0;
  uint64_t __temp618v__=0;
  uint64_t __temp619v=0;
  char* __temp620v__unsafe_ptr=0;
  uint64_t __temp620v__dat__pos=0;
  uint64_t __temp620v__dat__length=0;
  char __temp620v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp614v__unsafe_ptr,&__temp614v__unsafe_size,&__temp614v__unsafe_align);
  __temp615v__unsafe_ptr=__temp614v__unsafe_ptr;
  __temp615v__unsafe_size=__temp614v__unsafe_size;
  __temp615v__unsafe_align=__temp614v__unsafe_align;
  buf__unsafe_ptr=__temp615v__unsafe_ptr;
  buf__unsafe_size=__temp615v__unsafe_size;
  buf__unsafe_align=__temp615v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp616v__);
  buf__unsafe_ptr=__temp616v__;
  if(c){
  length=strlen(c);
  }
  __temp617v=1;
  add__temp170v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1712v=__temp620v__unsafe_ptr;
  *__temp1713v=__temp620v__dat__pos;
  *__temp1714v=__temp620v__dat__length;
  *__temp1715v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1716v) {
  goto __temp_return;
  __temp_return:
  *__temp1716v=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1717v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1717v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1718v) {
  char* allocated=*__temp1718v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1718v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1719v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1720v) {
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
  *__temp1720v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1721v, uint64_t* __temp1722v, uint64_t* __temp1723v, uint64_t size, char** __temp1724v, uint64_t* __temp1725v, uint64_t* __temp1726v) {
  char* buffer__unsafe_ptr=*__temp1721v;
  uint64_t buffer__unsafe_size=*__temp1722v;
  uint64_t buffer__unsafe_align=*__temp1723v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1721v=buffer__unsafe_ptr;
  *__temp1722v=buffer__unsafe_size;
  *__temp1723v=buffer__unsafe_align;
  *__temp1724v=buffer__unsafe_ptr;
  *__temp1725v=buffer__unsafe_size;
  *__temp1726v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1727v, uint64_t* __temp1728v, uint64_t* __temp1729v) {
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char* __temp543v__unsafe_ptr=0;
  uint64_t __temp543v__unsafe_size=0;
  uint64_t __temp543v__unsafe_align=0;
  char __temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  __temp542v__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp542v__unsafe_size=__temp541v__unsafe_size;
  __temp542v__unsafe_align=__temp541v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align,size,&__temp543v__unsafe_ptr,&__temp543v__unsafe_size,&__temp543v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp543v__unsafe_ptr,&__temp544v____temp469v__);
  if(__temp544v____temp469v__){
  __temp543v__unsafe_size=0;
  __temp543v__unsafe_size=__temp543v__unsafe_size;
  free__temp461v(&__temp543v__unsafe_ptr);
  }
  __temp_return:
  *__temp1727v=__temp543v__unsafe_ptr;
  *__temp1728v=__temp543v__unsafe_size;
  *__temp1729v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp640v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1730v, uint64_t* __temp1731v, uint64_t* __temp1732v, char* __temp1733v) {
  uint64_t __temp641v=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v__=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__unsafe_size=0;
  uint64_t __temp644v__unsafe_align=0;
  char __temp645v____temp544v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp646v=0;
  char* __temp647v__unsafe_ptr=0;
  uint64_t __temp647v__dat__pos=0;
  uint64_t __temp647v__dat__length=0;
  char __temp647v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp641v=1;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp642v__);
  add__temp170v(__temp641v,__temp642v__,&__temp643v__);
  __temp_errcode=alloc__temp538v(__temp643v__,&__temp644v__unsafe_ptr,&__temp644v__unsafe_size,&__temp644v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp644v__unsafe_ptr;
  buf__unsafe_size=__temp644v__unsafe_size;
  buf__unsafe_align=__temp644v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp646v=0;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp646v,other__dat__length,other__dat__first,&__temp647v__unsafe_ptr,&__temp647v__dat__pos,&__temp647v__dat__length,&__temp647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp647v__unsafe_ptr,&__temp645v____temp544v____temp469v__);
  if(__temp645v____temp544v____temp469v__){
  __temp644v__unsafe_size=0;
  __temp644v__unsafe_size=__temp644v__unsafe_size;
  free__temp461v(&__temp647v__unsafe_ptr);
  }
  __temp_return:
  *__temp1730v=__temp647v__unsafe_ptr;
  *__temp1731v=__temp647v__dat__pos;
  *__temp1732v=__temp647v__dat__length;
  *__temp1733v=__temp647v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp573v(const char* c, char* __temp1734v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1734v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1735v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1735v=z;
}

int unsafe_temporary_cstr__temp648v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1736v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp649v__unsafe_ptr=0;
  uint64_t __temp649v__dat__pos=0;
  uint64_t __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  char __temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp650v____temp644v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp651v__=0;
  char __temp652v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp649v__unsafe_ptr;
  c__dat__pos=__temp649v__dat__pos;
  c__dat__length=__temp649v__dat__length;
  c__dat__first=__temp649v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp573v(ret,&__temp651v__);
  not__temp26v(__temp651v__,&__temp652v__);
  if(__temp652v__){
  exists__temp412v(__temp649v__unsafe_ptr,&__temp650v____temp645v____temp544v____temp469v__);
  if(__temp650v____temp645v____temp544v____temp469v__){
  __temp650v____temp644v__unsafe_size=0;
  __temp650v____temp644v__unsafe_size=__temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp649v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1736v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1332v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __temp1737v) {
  const char* __temp1333v__=0;
  char __temp1334v____temp651v__=0;
  char __temp1334v____temp652v__=0;
  char* __temp1334v____temp649v__unsafe_ptr=0;
  char __temp1334v____temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp1334v____temp650v____temp644v__unsafe_size=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1335v__=0;
  char __temp1336v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp648v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1333v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1333v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp412v(unsafe_ptr,&__temp1335v__);
  not__temp26v(__temp1335v__,&__temp1336v__);
  if(__temp1336v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1737v=unsafe_ptr;
  exists__temp573v(__temp1333v__,&__temp1334v____temp651v__);
  not__temp26v(__temp1334v____temp651v__,&__temp1334v____temp652v__);
  if(__temp1334v____temp652v__){
  exists__temp412v(__temp1334v____temp649v__unsafe_ptr,&__temp1334v____temp650v____temp645v____temp544v____temp469v__);
  if(__temp1334v____temp650v____temp645v____temp544v____temp469v__){
  __temp1334v____temp650v____temp644v__unsafe_size=0;
  __temp1334v____temp650v____temp644v__unsafe_size=__temp1334v____temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp1334v____temp649v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1738v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1738v=__temp445v__;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1739v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1739v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1740v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1740v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1499v(char** __temp1741v, uint64_t* __temp1742v, uint64_t* __temp1743v, uint64_t* __temp1744v, char** __temp1745v, char** __temp1746v, uint64_t* __temp1747v, uint64_t* __temp1748v, char* __temp1749v) {
  char* buf__unsafe_ptr=*__temp1741v;
  uint64_t buf__unsafe_size=*__temp1742v;
  uint64_t buf__unsafe_align=*__temp1743v;
  uint64_t pos=*__temp1744v;
  char* f__unsafe_ptr=*__temp1745v;
  int __temp1500v=0;
  char __temp1501v__=0;
  char __temp1502v__=0;
  char* __temp1503v__=0;
  char* contents=0;
  uint64_t __temp1504v__=0;
  uint64_t size=0;
  char success=0;
  char __temp1505v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1506v__=0;
  char* __temp1507v__unsafe_ptr=0;
  uint64_t __temp1507v__dat__pos=0;
  uint64_t __temp1507v__dat__length=0;
  char __temp1507v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(buf__unsafe_ptr,&__temp1501v__);
  not__temp26v(__temp1501v__,&__temp1502v__);
  if(__temp1502v__){
  __temp_errcode=40;
  goto __temp_failure;
  }
  add__temp463v(buf__unsafe_ptr,pos,&__temp1503v__);
  contents=__temp1503v__;
  __temp_errcode=sub__temp347v(buf__unsafe_size,pos,&__temp1504v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1504v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp26v(success,&__temp1505v__);
  if(__temp1505v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp170v(pos,bytes_read,&__temp1506v__);
  pos=__temp1506v__;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1507v__unsafe_ptr,&__temp1507v__dat__pos,&__temp1507v__dat__length,&__temp1507v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1741v=buf__unsafe_ptr;
  *__temp1742v=buf__unsafe_size;
  *__temp1743v=buf__unsafe_align;
  *__temp1744v=pos;
  *__temp1745v=f__unsafe_ptr;
  *__temp1746v=__temp1507v__unsafe_ptr;
  *__temp1747v=__temp1507v__dat__pos;
  *__temp1748v=__temp1507v__dat__length;
  *__temp1749v=__temp1507v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp719v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1670v() {
  char* __temp1672v__unsafe_ptr=0;
  uint64_t __temp1672v__dat__pos=0;
  uint64_t __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  char* __temp1673v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __temp1675v=0;
  uint64_t __temp1676v__=0;
  char* __temp1677v__unsafe_ptr=0;
  uint64_t __temp1677v__unsafe_size=0;
  uint64_t __temp1677v__unsafe_align=0;
  char __temp1678v____temp544v____temp469v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint64_t mem__unsafe_align=0;
  uint64_t __temp1679v=0;
  uint64_t __temp1680v=0;
  uint64_t pos=0;
  char __temp1681v=0;
  char* __temp1682v__unsafe_ptr=0;
  uint64_t __temp1682v__dat__pos=0;
  uint64_t __temp1682v__dat__length=0;
  char __temp1682v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __temp1683v=0;
  char* __temp1684v__unsafe_ptr=0;
  uint64_t __temp1684v__dat__pos=0;
  uint64_t __temp1684v__dat__length=0;
  char __temp1684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(__temp1671v,&__temp1672v__unsafe_ptr,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1332v(__temp1672v__unsafe_ptr,__temp1672v__dat__pos,__temp1672v__dat__length,__temp1672v__dat__first,&__temp1673v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1673v__unsafe_ptr;
  __temp1675v=4;
  KB__temp443v(__temp1675v,&__temp1676v__);
  __temp_errcode=alloc__temp538v(__temp1676v__,&__temp1677v__unsafe_ptr,&__temp1677v__unsafe_size,&__temp1677v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1677v__unsafe_ptr;
  mem__unsafe_size=__temp1677v__unsafe_size;
  mem__unsafe_align=__temp1677v__unsafe_align;
  __temp1679v=0;
  __temp1680v=__temp1679v;
  pos=__temp1680v;
  while(1){
  __temp_complain=line__temp1499v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1682v__unsafe_ptr,&__temp1682v__dat__pos,&__temp1682v__dat__length,&__temp1682v__dat__first);
  __temp1681v=__temp_complain;
  line__unsafe_ptr=__temp1682v__unsafe_ptr;
  line__dat__pos=__temp1682v__dat__pos;
  line__dat__length=__temp1682v__dat__length;
  line__dat__first=__temp1682v__dat__first;
  __temp1681v=__temp1681v==0;
  if(!__temp1681v){
  break;
  }
  continue;
  }
  if(__temp1673v__unsafe_ptr)fclose((FILE*)__temp1673v__unsafe_ptr);
  __temp1673v__unsafe_ptr=0;
  __temp1683v=0;
  __temp_errcode=str__temp607v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1683v,pos,&__temp1684v__unsafe_ptr,&__temp1684v__dat__pos,&__temp1684v__dat__length,&__temp1684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp718v(__temp1684v__unsafe_ptr,__temp1684v__dat__pos,__temp1684v__dat__length,__temp1684v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1677v__unsafe_ptr,&__temp1678v____temp544v____temp469v__);
  if(__temp1678v____temp544v____temp469v__){
  __temp1677v__unsafe_size=0;
  __temp1677v__unsafe_size=__temp1677v__unsafe_size;
  free__temp461v(&__temp1677v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1670v();return 0;}