#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1637v="ls";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp506v(char** __temp1641v, uint64_t* __temp1642v, uint64_t* __temp1643v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1641v=unsafe_ptr;
  *__temp1642v=unsafe_size;
  *__temp1643v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1644v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1644v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1645v) {
  char* allocated=*__temp1645v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1645v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1646v) {
  int value=0;
  *__temp1646v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1647v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1647v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1648v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1648v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1649v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1649v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1650v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1650v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1651v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1652v) {
  char* unsafe_ptr=0;
  uint8_t failed=0;
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
  *__temp1652v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp452v(char** __temp1653v, uint64_t* __temp1654v, uint64_t* __temp1655v, uint64_t size, char** __temp1656v, uint64_t* __temp1657v, uint64_t* __temp1658v) {
  char* buffer__unsafe_ptr=*__temp1653v;
  uint64_t buffer__unsafe_size=*__temp1654v;
  uint64_t buffer__unsafe_align=*__temp1655v;
  int __temp453v=0;
  uint8_t __temp454v__=0;
  uint64_t __temp455v=0;
  uint8_t __temp457v__=0;
  uint64_t __temp458v=0;
  uint8_t __temp459v__=0;
  uint64_t __temp460v=0;
  uint64_t __temp461v__=0;
  uint64_t __temp463v=0;
  uint8_t __temp464v__=0;
  uint64_t __temp465v__=0;
  uint64_t bytes=0;
  char* __temp466v__=0;
  uint64_t __temp467v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp457v__);
  if(__temp457v__){
  __temp458v=0;
  neq__temp302v(size,__temp458v,&__temp459v__);
  if(__temp459v__){
  __temp460v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp461v__);
  zero__temp429v(buffer__unsafe_ptr,__temp460v,__temp461v__);
  }
  goto __temp_return;
  }
  __temp463v=0;
  neq__temp302v(buffer__unsafe_size,__temp463v,&__temp464v__);
  if(__temp464v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp465v__);
  bytes=__temp465v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp466v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp466v__;
  __temp467v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp467v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp454v__);
  if(__temp454v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1653v=buffer__unsafe_ptr;
  *__temp1654v=buffer__unsafe_size;
  *__temp1655v=buffer__unsafe_align;
  *__temp1656v=buffer__unsafe_ptr;
  *__temp1657v=buffer__unsafe_size;
  *__temp1658v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp505v(uint64_t size, char** __temp1659v, uint64_t* __temp1660v, uint64_t* __temp1661v) {
  char* __temp508v__unsafe_ptr=0;
  uint64_t __temp508v__unsafe_size=0;
  uint64_t __temp508v__unsafe_align=0;
  char* __temp509v__unsafe_ptr=0;
  uint64_t __temp509v__unsafe_size=0;
  uint64_t __temp509v__unsafe_align=0;
  char* __temp510v__unsafe_ptr=0;
  uint64_t __temp510v__unsafe_size=0;
  uint64_t __temp510v__unsafe_align=0;
  uint8_t __temp511v____temp454v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp506v(&__temp508v__unsafe_ptr,&__temp508v__unsafe_size,&__temp508v__unsafe_align);
  __temp509v__unsafe_ptr=__temp508v__unsafe_ptr;
  __temp509v__unsafe_size=__temp508v__unsafe_size;
  __temp509v__unsafe_align=__temp508v__unsafe_align;
  __temp_errcode=alloc__temp452v(&__temp509v__unsafe_ptr,&__temp509v__unsafe_size,&__temp509v__unsafe_align,size,&__temp510v__unsafe_ptr,&__temp510v__unsafe_size,&__temp510v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp398v(__temp510v__unsafe_ptr,&__temp511v____temp454v__);
  if(__temp511v____temp454v__){
  __temp510v__unsafe_size=0;
  __temp510v__unsafe_size=__temp510v__unsafe_size;
  free__temp428v(&__temp510v__unsafe_ptr);
  }
  __temp_return:
  *__temp1659v=__temp510v__unsafe_ptr;
  *__temp1660v=__temp510v__unsafe_size;
  *__temp1661v=__temp510v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1662v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1663v) {
  *__temp1663v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1664v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1664v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1665v) {
  uint8_t __temp501v__=0;
  uint64_t __temp502v__=0;
  char* __temp503v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp501v__);
  if(__temp501v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp502v__);
  add__temp430v(buffer__unsafe_ptr,__temp502v__,&__temp503v__);
  unsafe_ptr=__temp503v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1665v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp542v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1666v, uint64_t* __temp1667v, uint64_t* __temp1668v, int8_t* __temp1669v) {
  goto __temp_return;
  __temp_return:
  *__temp1666v=unsafe_ptr;
  *__temp1667v=dat__pos;
  *__temp1668v=dat__length;
  *__temp1669v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp546v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1670v, uint64_t* __temp1671v, uint64_t* __temp1672v, int8_t* __temp1673v) {
  char* unsafe_ptr=0;
  char* __temp547v__unsafe_ptr=0;
  uint64_t __temp547v__dat__pos=0;
  uint64_t __temp547v__dat__length=0;
  int8_t __temp547v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp542v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp547v__unsafe_ptr,&__temp547v__dat__pos,&__temp547v__dat__length,&__temp547v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1670v=__temp547v__unsafe_ptr;
  *__temp1671v=__temp547v__dat__pos;
  *__temp1672v=__temp547v__dat__length;
  *__temp1673v=__temp547v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp556v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1674v, uint64_t* __temp1675v, uint64_t* __temp1676v, int8_t* __temp1677v) {
  uint64_t __temp557v=0;
  uint8_t __temp558v__=0;
  char* __temp559v__=0;
  int8_t __temp560v__value=0;
  int8_t first=0;
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__dat__pos=0;
  uint64_t __temp561v__dat__length=0;
  int8_t __temp561v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp557v=0;
  neq__temp302v(length,__temp557v,&__temp558v__);
  if(__temp558v__){
  __temp_errcode=get__temp500v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp559v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp559v__){
  goto __temp_failure;
  }
  memcpy(&__temp560v__value,__temp559v__,1);
  first=__temp560v__value;
  }
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp561v__unsafe_ptr,&__temp561v__dat__pos,&__temp561v__dat__length,&__temp561v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1674v=__temp561v__unsafe_ptr;
  *__temp1675v=__temp561v__dat__pos;
  *__temp1676v=__temp561v__dat__length;
  *__temp1677v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp562v(const char* c, char** __temp1678v, uint64_t* __temp1679v, uint64_t* __temp1680v, int8_t* __temp1681v) {
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint64_t __temp563v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp564v=0;
  char* __temp565v__unsafe_ptr=0;
  uint64_t __temp565v__dat__pos=0;
  uint64_t __temp565v__dat__length=0;
  int8_t __temp565v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp506v(&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_align);
  buf__unsafe_ptr=__temp563v__unsafe_ptr;
  buf__unsafe_size=__temp563v__unsafe_size;
  buf__unsafe_align=__temp563v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp564v=0;
  __temp_errcode=str__temp556v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp564v,length,&__temp565v__unsafe_ptr,&__temp565v__dat__pos,&__temp565v__dat__length,&__temp565v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1678v=__temp565v__unsafe_ptr;
  *__temp1679v=__temp565v__dat__pos;
  *__temp1680v=__temp565v__dat__length;
  *__temp1681v=__temp565v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp555v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, int8_t other__dat__first, char** __temp1682v, uint64_t* __temp1683v, uint64_t* __temp1684v, int8_t* __temp1685v) {
  goto __temp_return;
  __temp_return:
  *__temp1682v=other__unsafe_ptr;
  *__temp1683v=other__dat__pos;
  *__temp1684v=other__dat__length;
  *__temp1685v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp566v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first, uint64_t* __temp1686v) {
  goto __temp_return;
  __temp_return:
  *__temp1686v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1687v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1687v=z;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1688v) {
  goto __temp_return;
  __temp_return:
  *__temp1688v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(uint64_t x, uint64_t y, uint8_t* __temp1689v) {
  int __temp207v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1689v=z;
}

static inline __attribute__((always_inline)) int copy__temp636v(char** __temp1690v, uint64_t* __temp1691v, uint64_t* __temp1692v, uint64_t* __temp1693v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, int8_t _other__dat__first, char** __temp1694v, uint64_t* __temp1695v, uint64_t* __temp1696v, int8_t* __temp1697v) {
  char* buf__unsafe_ptr=*__temp1690v;
  uint64_t buf__unsafe_size=*__temp1691v;
  uint64_t buf__unsafe_align=*__temp1692v;
  uint64_t pos=*__temp1693v;
  char* __temp637v__unsafe_ptr=0;
  uint64_t __temp637v__dat__pos=0;
  uint64_t __temp637v__dat__length=0;
  int8_t __temp637v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  int8_t other__dat__first=0;
  uint64_t __temp638v__=0;
  uint64_t __temp639v__=0;
  uint64_t next_pos=0;
  uint64_t __temp640v__=0;
  uint8_t __temp641v__=0;
  uint64_t __temp642v=0;
  uint64_t __temp643v__=0;
  uint64_t prev_pos=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  int8_t __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp555v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp637v__unsafe_ptr,&__temp637v__dat__pos,&__temp637v__dat__length,&__temp637v__dat__first);
  other__unsafe_ptr=__temp637v__unsafe_ptr;
  other__dat__pos=__temp637v__dat__pos;
  other__dat__length=__temp637v__dat__length;
  other__dat__first=__temp637v__dat__first;
  len__temp566v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp638v__);
  add__temp110v(pos,__temp638v__,&__temp639v__);
  next_pos=__temp639v__;
  len__temp504v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp640v__);
  gt__temp206v(next_pos,__temp640v__,&__temp641v__);
  if(__temp641v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp642v=0;
  add__temp110v(pos,__temp642v,&__temp643v__);
  prev_pos=__temp643v__;
  pos=next_pos;
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1690v=buf__unsafe_ptr;
  *__temp1691v=buf__unsafe_size;
  *__temp1692v=buf__unsafe_align;
  *__temp1693v=pos;
  *__temp1694v=__temp644v__unsafe_ptr;
  *__temp1695v=__temp644v__dat__pos;
  *__temp1696v=__temp644v__dat__length;
  *__temp1697v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp585v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, int8_t other__dat__first, char** __temp1698v, uint64_t* __temp1699v, uint64_t* __temp1700v, int8_t* __temp1701v) {
  uint64_t __temp586v=0;
  uint64_t __temp587v__=0;
  uint64_t __temp588v__=0;
  char* __temp589v__unsafe_ptr=0;
  uint64_t __temp589v__unsafe_size=0;
  uint64_t __temp589v__unsafe_align=0;
  uint8_t __temp590v____temp511v____temp454v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp591v=0;
  char* __temp592v__unsafe_ptr=0;
  uint64_t __temp592v__dat__pos=0;
  uint64_t __temp592v__dat__length=0;
  int8_t __temp592v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp586v=1;
  len__temp566v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp587v__);
  add__temp110v(__temp586v,__temp587v__,&__temp588v__);
  __temp_errcode=alloc__temp505v(__temp588v__,&__temp589v__unsafe_ptr,&__temp589v__unsafe_size,&__temp589v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp589v__unsafe_ptr;
  buf__unsafe_size=__temp589v__unsafe_size;
  buf__unsafe_align=__temp589v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp591v=0;
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp591v,other__dat__length,other__dat__first,&__temp592v__unsafe_ptr,&__temp592v__dat__pos,&__temp592v__dat__length,&__temp592v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp398v(__temp592v__unsafe_ptr,&__temp590v____temp511v____temp454v__);
  if(__temp590v____temp511v____temp454v__){
  __temp589v__unsafe_size=0;
  __temp589v__unsafe_size=__temp589v__unsafe_size;
  free__temp428v(&__temp592v__unsafe_ptr);
  }
  __temp_return:
  *__temp1698v=__temp592v__unsafe_ptr;
  *__temp1699v=__temp592v__dat__pos;
  *__temp1700v=__temp592v__dat__length;
  *__temp1701v=__temp592v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp540v(const char* c, uint8_t* __temp1702v) {
  uint8_t z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1702v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(uint8_t value, uint8_t* __temp1703v) {
  uint8_t z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1703v=z;
}

int unsafe_temporary_cstr__temp593v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, int8_t other__dat__first, const char** __temp1704v) {
  char* endpos=0;
  int8_t endchar=0;
  uint8_t needs_copying=0;
  char* __temp594v__unsafe_ptr=0;
  uint64_t __temp594v__dat__pos=0;
  uint64_t __temp594v__dat__length=0;
  int8_t __temp594v__dat__first=0;
  uint8_t __temp595v____temp590v____temp511v____temp454v__=0;
  uint64_t __temp595v____temp589v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  int8_t c__dat__first=0;
  const char* ret=0;
  uint8_t __temp596v__=0;
  uint8_t __temp597v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp594v__unsafe_ptr,&__temp594v__dat__pos,&__temp594v__dat__length,&__temp594v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp594v__unsafe_ptr;
  c__dat__pos=__temp594v__dat__pos;
  c__dat__length=__temp594v__dat__length;
  c__dat__first=__temp594v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp540v(ret,&__temp596v__);
  not__temp18v(__temp596v__,&__temp597v__);
  if(__temp597v__){
  exists__temp398v(__temp594v__unsafe_ptr,&__temp595v____temp590v____temp511v____temp454v__);
  if(__temp595v____temp590v____temp511v____temp454v__){
  __temp595v____temp589v__unsafe_size=0;
  __temp595v____temp589v__unsafe_size=__temp595v____temp589v__unsafe_size;
  free__temp428v(&__temp594v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1704v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1278v(const char* cmd, int64_t* __temp1705v) {
  int64_t result=0;
  result=system(cmd);
  goto __temp_return;
  __temp_return:
  *__temp1705v=result;
}

static inline __attribute__((always_inline)) void int__temp382v(uint64_t x, int64_t* __temp1706v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1706v=z;
}

static inline __attribute__((always_inline)) void is_different__temp73v(int64_t x, int64_t y, int* __temp1707v) {
  int __temp74v=0;
  int __temp75v__=0;
  not__temp27v(__temp74v,&__temp75v__);
  goto __temp_return;
  __temp_return:
  *__temp1707v=__temp75v__;
}

static inline __attribute__((always_inline)) void neq__temp291v(int64_t x, int64_t y, uint8_t* __temp1708v) {
  int __temp292v__=0;
  uint8_t z=0;
  is_different__temp73v(x,y,&__temp292v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1708v=z;
}

static inline __attribute__((always_inline)) int system__temp1279v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, int8_t _cmd__dat__first) {
  const char* __temp1280v__=0;
  uint8_t __temp1281v____temp596v__=0;
  uint8_t __temp1281v____temp597v__=0;
  char* __temp1281v____temp594v__unsafe_ptr=0;
  uint8_t __temp1281v____temp595v____temp590v____temp511v____temp454v__=0;
  uint64_t __temp1281v____temp595v____temp589v__unsafe_size=0;
  int64_t __temp1282v__=0;
  int64_t result=0;
  uint64_t __temp1283v=0;
  int64_t __temp1284v__=0;
  uint8_t __temp1285v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp593v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1278v(__temp1280v__,&__temp1282v__);
  result=__temp1282v__;
  __temp1283v=0;
  int__temp382v(__temp1283v,&__temp1284v__);
  neq__temp291v(result,__temp1284v__,&__temp1285v__);
  if(__temp1285v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp540v(__temp1280v__,&__temp1281v____temp596v__);
  not__temp18v(__temp1281v____temp596v__,&__temp1281v____temp597v__);
  if(__temp1281v____temp597v__){
  exists__temp398v(__temp1281v____temp594v__unsafe_ptr,&__temp1281v____temp595v____temp590v____temp511v____temp454v__);
  if(__temp1281v____temp595v____temp590v____temp511v____temp454v__){
  __temp1281v____temp595v____temp589v__unsafe_size=0;
  __temp1281v____temp595v____temp589v__unsafe_size=__temp1281v____temp595v____temp589v__unsafe_size;
  free__temp428v(&__temp1281v____temp594v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1630v() {
  uint64_t __temp1631v=0;
  char* __temp1632v__unsafe_ptr=0;
  uint64_t __temp1632v__unsafe_size=0;
  uint64_t __temp1632v__unsafe_align=0;
  uint8_t __temp1633v____temp511v____temp454v__=0;
  char* __temp1634v__unsafe_ptr=0;
  uint64_t __temp1634v__unsafe_size=0;
  uint64_t __temp1634v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t __temp1635v=0;
  uint64_t __temp1636v=0;
  char* __temp1638v__unsafe_ptr=0;
  uint64_t __temp1638v__dat__pos=0;
  uint64_t __temp1638v__dat__length=0;
  int8_t __temp1638v__dat__first=0;
  char* __temp1639v__unsafe_ptr=0;
  uint64_t __temp1639v__dat__pos=0;
  uint64_t __temp1639v__dat__length=0;
  int8_t __temp1639v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  int8_t s__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1631v=2;
  __temp_errcode=alloc__temp505v(__temp1631v,&__temp1632v__unsafe_ptr,&__temp1632v__unsafe_size,&__temp1632v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1634v__unsafe_ptr=__temp1632v__unsafe_ptr;
  __temp1634v__unsafe_size=__temp1632v__unsafe_size;
  __temp1634v__unsafe_align=__temp1632v__unsafe_align;
  buf__unsafe_ptr=__temp1634v__unsafe_ptr;
  buf__unsafe_size=__temp1634v__unsafe_size;
  buf__unsafe_align=__temp1634v__unsafe_align;
  __temp1635v=0;
  __temp1636v=__temp1635v;
  __temp_errcode=str__temp562v(__temp1637v,&__temp1638v__unsafe_ptr,&__temp1638v__dat__pos,&__temp1638v__dat__length,&__temp1638v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp636v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1636v,__temp1638v__unsafe_ptr,__temp1638v__dat__pos,__temp1638v__dat__length,__temp1638v__dat__first,&__temp1639v__unsafe_ptr,&__temp1639v__dat__pos,&__temp1639v__dat__length,&__temp1639v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__unsafe_ptr=__temp1639v__unsafe_ptr;
  s__dat__pos=__temp1639v__dat__pos;
  s__dat__length=__temp1639v__dat__length;
  s__dat__first=__temp1639v__dat__first;
  __temp_errcode=system__temp1279v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp398v(__temp1632v__unsafe_ptr,&__temp1633v____temp511v____temp454v__);
  if(__temp1633v____temp511v____temp454v__){
  __temp1632v__unsafe_size=0;
  __temp1632v__unsafe_size=__temp1632v__unsafe_size;
  free__temp428v(&__temp1632v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1630v();return 0;}