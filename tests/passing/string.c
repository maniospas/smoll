#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1669v="README.md";
const char* const __temp363v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1684v, uint64_t* __temp1685v, uint64_t* __temp1686v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1684v=unsafe_ptr;
  *__temp1685v=unsafe_size;
  *__temp1686v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1687v) {
  *__temp1687v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1688v) {
  int value=0;
  *__temp1688v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1689v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1689v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1690v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1690v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1691v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1692v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1692v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1693v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1694v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1694v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1695v) {
  *__temp1695v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1696v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1696v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1697v) {
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
  *__temp1697v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1698v, uint64_t* __temp1699v, uint64_t* __temp1700v, char* __temp1701v) {
  goto __temp_return;
  __temp_return:
  *__temp1698v=unsafe_ptr;
  *__temp1699v=dat__pos;
  *__temp1700v=dat__length;
  *__temp1701v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1702v, uint64_t* __temp1703v, uint64_t* __temp1704v, char* __temp1705v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1702v=__temp580v__unsafe_ptr;
  *__temp1703v=__temp580v__dat__pos;
  *__temp1704v=__temp580v__dat__length;
  *__temp1705v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1706v, uint64_t* __temp1707v, uint64_t* __temp1708v, char* __temp1709v) {
  uint64_t __temp606v=0;
  char __temp607v__=0;
  char* __temp608v__=0;
  char __temp609v__value=0;
  char first=0;
  char* __temp610v__unsafe_ptr=0;
  uint64_t __temp610v__dat__pos=0;
  uint64_t __temp610v__dat__length=0;
  char __temp610v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp606v=0;
  neq__temp142v(length,__temp606v,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp608v__){
  goto __temp_failure;
  }
  memcpy(&__temp609v__value,__temp608v__,1);
  first=__temp609v__value;
  }
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp610v__unsafe_ptr,&__temp610v__dat__pos,&__temp610v__dat__length,&__temp610v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1706v=__temp610v__unsafe_ptr;
  *__temp1707v=__temp610v__dat__pos;
  *__temp1708v=__temp610v__dat__length;
  *__temp1709v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1710v, uint64_t* __temp1711v, uint64_t* __temp1712v, char* __temp1713v) {
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* __temp613v__unsafe_ptr=0;
  uint64_t __temp613v__unsafe_size=0;
  uint64_t __temp613v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp614v__=0;
  uint64_t length=0;
  uint64_t __temp615v=0;
  uint64_t __temp616v__=0;
  uint64_t __temp617v=0;
  char* __temp618v__unsafe_ptr=0;
  uint64_t __temp618v__dat__pos=0;
  uint64_t __temp618v__dat__length=0;
  char __temp618v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp612v__unsafe_ptr,&__temp612v__unsafe_size,&__temp612v__unsafe_align);
  __temp613v__unsafe_ptr=__temp612v__unsafe_ptr;
  __temp613v__unsafe_size=__temp612v__unsafe_size;
  __temp613v__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=__temp613v__unsafe_ptr;
  buf__unsafe_size=__temp613v__unsafe_size;
  buf__unsafe_align=__temp613v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp614v__);
  buf__unsafe_ptr=__temp614v__;
  if(c){
  length=strlen(c);
  }
  __temp615v=1;
  add__temp170v(length,__temp615v,&__temp616v__);
  buf__unsafe_size=__temp616v__;
  __temp617v=0;
  __temp_errcode=str__temp605v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp617v,length,&__temp618v__unsafe_ptr,&__temp618v__dat__pos,&__temp618v__dat__length,&__temp618v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1710v=__temp618v__unsafe_ptr;
  *__temp1711v=__temp618v__dat__pos;
  *__temp1712v=__temp618v__dat__length;
  *__temp1713v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp619v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1714v) {
  goto __temp_return;
  __temp_return:
  *__temp1714v=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1715v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1715v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1716v) {
  char* allocated=*__temp1716v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1716v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1717v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1717v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1718v) {
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
  *__temp1718v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1719v, uint64_t* __temp1720v, uint64_t* __temp1721v, uint64_t size, char** __temp1722v, uint64_t* __temp1723v, uint64_t* __temp1724v) {
  char* buffer__unsafe_ptr=*__temp1719v;
  uint64_t buffer__unsafe_size=*__temp1720v;
  uint64_t buffer__unsafe_align=*__temp1721v;
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
  *__temp1719v=buffer__unsafe_ptr;
  *__temp1720v=buffer__unsafe_size;
  *__temp1721v=buffer__unsafe_align;
  *__temp1722v=buffer__unsafe_ptr;
  *__temp1723v=buffer__unsafe_size;
  *__temp1724v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1725v, uint64_t* __temp1726v, uint64_t* __temp1727v) {
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
  char__temp_buffer__buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
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
  *__temp1725v=__temp543v__unsafe_ptr;
  *__temp1726v=__temp543v__unsafe_size;
  *__temp1727v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp638v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1728v, uint64_t* __temp1729v, uint64_t* __temp1730v, char* __temp1731v) {
  uint64_t __temp639v=0;
  uint64_t __temp640v__=0;
  uint64_t __temp641v__=0;
  char* __temp642v__unsafe_ptr=0;
  uint64_t __temp642v__unsafe_size=0;
  uint64_t __temp642v__unsafe_align=0;
  char __temp643v____temp544v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp644v=0;
  char* __temp645v__unsafe_ptr=0;
  uint64_t __temp645v__dat__pos=0;
  uint64_t __temp645v__dat__length=0;
  char __temp645v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp639v=1;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp640v__);
  add__temp170v(__temp639v,__temp640v__,&__temp641v__);
  __temp_errcode=alloc__temp538v(__temp641v__,&__temp642v__unsafe_ptr,&__temp642v__unsafe_size,&__temp642v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp642v__unsafe_ptr;
  buf__unsafe_size=__temp642v__unsafe_size;
  buf__unsafe_align=__temp642v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp644v=0;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp644v,other__dat__length,other__dat__first,&__temp645v__unsafe_ptr,&__temp645v__dat__pos,&__temp645v__dat__length,&__temp645v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp645v__unsafe_ptr,&__temp643v____temp544v____temp469v__);
  if(__temp643v____temp544v____temp469v__){
  __temp642v__unsafe_size=0;
  __temp642v__unsafe_size=__temp642v__unsafe_size;
  free__temp461v(&__temp645v__unsafe_ptr);
  }
  __temp_return:
  *__temp1728v=__temp645v__unsafe_ptr;
  *__temp1729v=__temp645v__dat__pos;
  *__temp1730v=__temp645v__dat__length;
  *__temp1731v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp573v(const char* c, char* __temp1732v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1732v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1733v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1733v=z;
}

int unsafe_temporary_cstr__temp646v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1734v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp647v__unsafe_ptr=0;
  uint64_t __temp647v__dat__pos=0;
  uint64_t __temp647v__dat__length=0;
  char __temp647v__dat__first=0;
  char __temp648v____temp643v____temp544v____temp469v__=0;
  uint64_t __temp648v____temp642v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp649v__=0;
  char __temp650v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp638v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp647v__unsafe_ptr,&__temp647v__dat__pos,&__temp647v__dat__length,&__temp647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp647v__unsafe_ptr;
  c__dat__pos=__temp647v__dat__pos;
  c__dat__length=__temp647v__dat__length;
  c__dat__first=__temp647v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp573v(ret,&__temp649v__);
  not__temp26v(__temp649v__,&__temp650v__);
  if(__temp650v__){
  exists__temp412v(__temp647v__unsafe_ptr,&__temp648v____temp643v____temp544v____temp469v__);
  if(__temp648v____temp643v____temp544v____temp469v__){
  __temp648v____temp642v__unsafe_size=0;
  __temp648v____temp642v__unsafe_size=__temp648v____temp642v__unsafe_size;
  free__temp461v(&__temp647v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1734v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1330v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __temp1735v) {
  const char* __temp1331v__=0;
  char __temp1332v____temp649v__=0;
  char __temp1332v____temp650v__=0;
  char* __temp1332v____temp647v__unsafe_ptr=0;
  char __temp1332v____temp648v____temp643v____temp544v____temp469v__=0;
  uint64_t __temp1332v____temp648v____temp642v__unsafe_size=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1333v__=0;
  char __temp1334v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp646v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1331v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1331v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp412v(unsafe_ptr,&__temp1333v__);
  not__temp26v(__temp1333v__,&__temp1334v__);
  if(__temp1334v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1735v=unsafe_ptr;
  exists__temp573v(__temp1331v__,&__temp1332v____temp649v__);
  not__temp26v(__temp1332v____temp649v__,&__temp1332v____temp650v__);
  if(__temp1332v____temp650v__){
  exists__temp412v(__temp1332v____temp647v__unsafe_ptr,&__temp1332v____temp648v____temp643v____temp544v____temp469v__);
  if(__temp1332v____temp648v____temp643v____temp544v____temp469v__){
  __temp1332v____temp648v____temp642v__unsafe_size=0;
  __temp1332v____temp648v____temp642v__unsafe_size=__temp1332v____temp648v____temp642v__unsafe_size;
  free__temp461v(&__temp1332v____temp647v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1736v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1736v=__temp445v__;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1737v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1737v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1738v) {
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
  *__temp1738v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1497v(char** __temp1739v, uint64_t* __temp1740v, uint64_t* __temp1741v, uint64_t* __temp1742v, char** __temp1743v, char** __temp1744v, uint64_t* __temp1745v, uint64_t* __temp1746v, char* __temp1747v) {
  char* buf__unsafe_ptr=*__temp1739v;
  uint64_t buf__unsafe_size=*__temp1740v;
  uint64_t buf__unsafe_align=*__temp1741v;
  uint64_t pos=*__temp1742v;
  char* f__unsafe_ptr=*__temp1743v;
  int __temp1498v=0;
  char __temp1499v__=0;
  char __temp1500v__=0;
  char* __temp1501v__=0;
  char* contents=0;
  uint64_t __temp1502v__=0;
  uint64_t size=0;
  char success=0;
  char __temp1503v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1504v__=0;
  char* __temp1505v__unsafe_ptr=0;
  uint64_t __temp1505v__dat__pos=0;
  uint64_t __temp1505v__dat__length=0;
  char __temp1505v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(buf__unsafe_ptr,&__temp1499v__);
  not__temp26v(__temp1499v__,&__temp1500v__);
  if(__temp1500v__){
  __temp_errcode=39;
  goto __temp_failure;
  }
  add__temp463v(buf__unsafe_ptr,pos,&__temp1501v__);
  contents=__temp1501v__;
  __temp_errcode=sub__temp347v(buf__unsafe_size,pos,&__temp1502v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1502v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp26v(success,&__temp1503v__);
  if(__temp1503v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp170v(pos,bytes_read,&__temp1504v__);
  pos=__temp1504v__;
  __temp_errcode=str__temp605v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1505v__unsafe_ptr,&__temp1505v__dat__pos,&__temp1505v__dat__length,&__temp1505v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1739v=buf__unsafe_ptr;
  *__temp1740v=buf__unsafe_size;
  *__temp1741v=buf__unsafe_align;
  *__temp1742v=pos;
  *__temp1743v=f__unsafe_ptr;
  *__temp1744v=__temp1505v__unsafe_ptr;
  *__temp1745v=__temp1505v__dat__pos;
  *__temp1746v=__temp1505v__dat__length;
  *__temp1747v=__temp1505v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1668v() {
  char* __temp1670v__unsafe_ptr=0;
  uint64_t __temp1670v__dat__pos=0;
  uint64_t __temp1670v__dat__length=0;
  char __temp1670v__dat__first=0;
  char* __temp1671v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __temp1673v=0;
  uint64_t __temp1674v__=0;
  char* __temp1675v__unsafe_ptr=0;
  uint64_t __temp1675v__unsafe_size=0;
  uint64_t __temp1675v__unsafe_align=0;
  char __temp1676v____temp544v____temp469v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint64_t mem__unsafe_align=0;
  uint64_t __temp1677v=0;
  uint64_t __temp1678v=0;
  uint64_t pos=0;
  char __temp1679v=0;
  char* __temp1680v__unsafe_ptr=0;
  uint64_t __temp1680v__dat__pos=0;
  uint64_t __temp1680v__dat__length=0;
  char __temp1680v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __temp1681v=0;
  char* __temp1682v__unsafe_ptr=0;
  uint64_t __temp1682v__dat__pos=0;
  uint64_t __temp1682v__dat__length=0;
  char __temp1682v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(__temp1669v,&__temp1670v__unsafe_ptr,&__temp1670v__dat__pos,&__temp1670v__dat__length,&__temp1670v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1330v(__temp1670v__unsafe_ptr,__temp1670v__dat__pos,__temp1670v__dat__length,__temp1670v__dat__first,&__temp1671v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1671v__unsafe_ptr;
  __temp1673v=4;
  KB__temp443v(__temp1673v,&__temp1674v__);
  __temp_errcode=alloc__temp538v(__temp1674v__,&__temp1675v__unsafe_ptr,&__temp1675v__unsafe_size,&__temp1675v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1675v__unsafe_ptr;
  mem__unsafe_size=__temp1675v__unsafe_size;
  mem__unsafe_align=__temp1675v__unsafe_align;
  __temp1677v=0;
  __temp1678v=__temp1677v;
  pos=__temp1678v;
  while(1){
  __temp_complain=line__temp1497v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1680v__unsafe_ptr,&__temp1680v__dat__pos,&__temp1680v__dat__length,&__temp1680v__dat__first);
  __temp1679v=__temp_complain;
  line__unsafe_ptr=__temp1680v__unsafe_ptr;
  line__dat__pos=__temp1680v__dat__pos;
  line__dat__length=__temp1680v__dat__length;
  line__dat__first=__temp1680v__dat__first;
  __temp1679v=__temp1679v==0;
  if(!__temp1679v){
  break;
  }
  continue;
  }
  if(__temp1671v__unsafe_ptr)fclose((FILE*)__temp1671v__unsafe_ptr);
  __temp1671v__unsafe_ptr=0;
  __temp1681v=0;
  __temp_errcode=str__temp605v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1681v,pos,&__temp1682v__unsafe_ptr,&__temp1682v__dat__pos,&__temp1682v__dat__length,&__temp1682v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp714v(__temp1682v__unsafe_ptr,__temp1682v__dat__pos,__temp1682v__dat__length,__temp1682v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1675v__unsafe_ptr,&__temp1676v____temp544v____temp469v__);
  if(__temp1676v____temp544v____temp469v__){
  __temp1675v__unsafe_size=0;
  __temp1675v__unsafe_size=__temp1675v__unsafe_size;
  free__temp461v(&__temp1675v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1668v();return 0;}