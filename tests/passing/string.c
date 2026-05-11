#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1631v="README.md";
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp506v(char** __temp1646v, uint64_t* __temp1647v, uint64_t* __temp1648v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1646v=unsafe_ptr;
  *__temp1647v=unsafe_size;
  *__temp1648v=unsafe_align;
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

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1651v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1651v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1652v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1652v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1653v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1653v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1654v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1654v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1655v) {
  *__temp1655v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1656v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1656v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1657v) {
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
  *__temp1657v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp542v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1658v, uint64_t* __temp1659v, uint64_t* __temp1660v, int8_t* __temp1661v) {
  goto __temp_return;
  __temp_return:
  *__temp1658v=unsafe_ptr;
  *__temp1659v=dat__pos;
  *__temp1660v=dat__length;
  *__temp1661v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp546v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1662v, uint64_t* __temp1663v, uint64_t* __temp1664v, int8_t* __temp1665v) {
  char* unsafe_ptr=0;
  char* __temp547v__unsafe_ptr=0;
  uint64_t __temp547v__dat__pos=0;
  uint64_t __temp547v__dat__length=0;
  int8_t __temp547v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp542v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp547v__unsafe_ptr,&__temp547v__dat__pos,&__temp547v__dat__length,&__temp547v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1662v=__temp547v__unsafe_ptr;
  *__temp1663v=__temp547v__dat__pos;
  *__temp1664v=__temp547v__dat__length;
  *__temp1665v=__temp547v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp556v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1666v, uint64_t* __temp1667v, uint64_t* __temp1668v, int8_t* __temp1669v) {
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
  *__temp1666v=__temp561v__unsafe_ptr;
  *__temp1667v=__temp561v__dat__pos;
  *__temp1668v=__temp561v__dat__length;
  *__temp1669v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp562v(const char* c, char** __temp1670v, uint64_t* __temp1671v, uint64_t* __temp1672v, int8_t* __temp1673v) {
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
  *__temp1670v=__temp565v__unsafe_ptr;
  *__temp1671v=__temp565v__dat__pos;
  *__temp1672v=__temp565v__dat__length;
  *__temp1673v=__temp565v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp566v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first, uint64_t* __temp1674v) {
  goto __temp_return;
  __temp_return:
  *__temp1674v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1675v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1675v=z;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1676v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1676v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1677v) {
  char* allocated=*__temp1677v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1677v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1678v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1678v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1679v) {
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
  *__temp1679v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1680v, uint64_t* __temp1681v, uint64_t* __temp1682v, uint64_t size, char** __temp1683v, uint64_t* __temp1684v, uint64_t* __temp1685v) {
  char* buffer__unsafe_ptr=*__temp1680v;
  uint64_t buffer__unsafe_size=*__temp1681v;
  uint64_t buffer__unsafe_align=*__temp1682v;
  int __temp435v=0;
  uint8_t __temp436v__=0;
  uint64_t __temp437v=0;
  uint8_t __temp439v__=0;
  uint64_t __temp440v=0;
  uint8_t __temp441v__=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  uint64_t __temp445v=0;
  uint8_t __temp446v__=0;
  uint64_t __temp447v__=0;
  uint64_t bytes=0;
  char* __temp448v__=0;
  uint64_t __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp436v__);
  if(__temp436v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1680v=buffer__unsafe_ptr;
  *__temp1681v=buffer__unsafe_size;
  *__temp1682v=buffer__unsafe_align;
  *__temp1683v=buffer__unsafe_ptr;
  *__temp1684v=buffer__unsafe_size;
  *__temp1685v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp505v(uint64_t size, char** __temp1686v, uint64_t* __temp1687v, uint64_t* __temp1688v) {
  char* __temp508v__unsafe_ptr=0;
  uint64_t __temp508v__unsafe_size=0;
  uint64_t __temp508v__unsafe_align=0;
  char* __temp509v__unsafe_ptr=0;
  uint64_t __temp509v__unsafe_size=0;
  uint64_t __temp509v__unsafe_align=0;
  char* __temp510v__unsafe_ptr=0;
  uint64_t __temp510v__unsafe_size=0;
  uint64_t __temp510v__unsafe_align=0;
  uint8_t __temp511v____temp436v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp506v(&__temp508v__unsafe_ptr,&__temp508v__unsafe_size,&__temp508v__unsafe_align);
  __temp509v__unsafe_ptr=__temp508v__unsafe_ptr;
  __temp509v__unsafe_size=__temp508v__unsafe_size;
  __temp509v__unsafe_align=__temp508v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp509v__unsafe_ptr,&__temp509v__unsafe_size,&__temp509v__unsafe_align,size,&__temp510v__unsafe_ptr,&__temp510v__unsafe_size,&__temp510v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp398v(__temp510v__unsafe_ptr,&__temp511v____temp436v__);
  if(__temp511v____temp436v__){
  __temp510v__unsafe_size=0;
  __temp510v__unsafe_size=__temp510v__unsafe_size;
  free__temp428v(&__temp510v__unsafe_ptr);
  }
  __temp_return:
  *__temp1686v=__temp510v__unsafe_ptr;
  *__temp1687v=__temp510v__unsafe_size;
  *__temp1688v=__temp510v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp585v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, int8_t other__dat__first, char** __temp1689v, uint64_t* __temp1690v, uint64_t* __temp1691v, int8_t* __temp1692v) {
  uint64_t __temp586v=0;
  uint64_t __temp587v__=0;
  uint64_t __temp588v__=0;
  char* __temp589v__unsafe_ptr=0;
  uint64_t __temp589v__unsafe_size=0;
  uint64_t __temp589v__unsafe_align=0;
  uint8_t __temp590v____temp511v____temp436v__=0;
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
  
  __temp_failure:exists__temp398v(__temp592v__unsafe_ptr,&__temp590v____temp511v____temp436v__);
  if(__temp590v____temp511v____temp436v__){
  __temp589v__unsafe_size=0;
  __temp589v__unsafe_size=__temp589v__unsafe_size;
  free__temp428v(&__temp592v__unsafe_ptr);
  }
  __temp_return:
  *__temp1689v=__temp592v__unsafe_ptr;
  *__temp1690v=__temp592v__dat__pos;
  *__temp1691v=__temp592v__dat__length;
  *__temp1692v=__temp592v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp540v(const char* c, uint8_t* __temp1693v) {
  uint8_t z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1693v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(uint8_t value, uint8_t* __temp1694v) {
  uint8_t z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1694v=z;
}

int unsafe_temporary_cstr__temp593v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, int8_t other__dat__first, const char** __temp1695v) {
  char* endpos=0;
  int8_t endchar=0;
  uint8_t needs_copying=0;
  char* __temp594v__unsafe_ptr=0;
  uint64_t __temp594v__dat__pos=0;
  uint64_t __temp594v__dat__length=0;
  int8_t __temp594v__dat__first=0;
  uint8_t __temp595v____temp590v____temp511v____temp436v__=0;
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
  exists__temp398v(__temp594v__unsafe_ptr,&__temp595v____temp590v____temp511v____temp436v__);
  if(__temp595v____temp590v____temp511v____temp436v__){
  __temp595v____temp589v__unsafe_size=0;
  __temp595v____temp589v__unsafe_size=__temp595v____temp589v__unsafe_size;
  free__temp428v(&__temp594v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1695v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1292v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, int8_t _path__dat__first, char** __temp1696v) {
  const char* __temp1293v__=0;
  uint8_t __temp1294v____temp596v__=0;
  uint8_t __temp1294v____temp597v__=0;
  char* __temp1294v____temp594v__unsafe_ptr=0;
  uint8_t __temp1294v____temp595v____temp590v____temp511v____temp436v__=0;
  uint64_t __temp1294v____temp595v____temp589v__unsafe_size=0;
  const char* path=0;
  char* unsafe_ptr=0;
  uint8_t __temp1295v__=0;
  uint8_t __temp1296v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp593v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1293v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1293v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1295v__);
  not__temp18v(__temp1295v__,&__temp1296v__);
  if(__temp1296v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1696v=unsafe_ptr;
  exists__temp540v(__temp1293v__,&__temp1294v____temp596v__);
  not__temp18v(__temp1294v____temp596v__,&__temp1294v____temp597v__);
  if(__temp1294v____temp597v__){
  exists__temp398v(__temp1294v____temp594v__unsafe_ptr,&__temp1294v____temp595v____temp590v____temp511v____temp436v__);
  if(__temp1294v____temp595v____temp590v____temp511v____temp436v__){
  __temp1294v____temp595v____temp589v__unsafe_size=0;
  __temp1294v____temp595v____temp589v__unsafe_size=__temp1294v____temp595v____temp589v__unsafe_size;
  free__temp428v(&__temp1294v____temp594v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(uint64_t x, uint64_t* __temp1697v) {
  uint64_t __temp411v=0;
  uint64_t __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1697v=__temp412v__;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1698v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1698v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(uint64_t x, uint64_t y, uint64_t* __temp1699v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  uint8_t __temp334v__=0;
  uint64_t z=0;
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
  *__temp1699v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1459v(char** __temp1700v, uint64_t* __temp1701v, uint64_t* __temp1702v, uint64_t* __temp1703v, char** __temp1704v, char** __temp1705v, uint64_t* __temp1706v, uint64_t* __temp1707v, int8_t* __temp1708v) {
  char* buf__unsafe_ptr=*__temp1700v;
  uint64_t buf__unsafe_size=*__temp1701v;
  uint64_t buf__unsafe_align=*__temp1702v;
  uint64_t pos=*__temp1703v;
  char* f__unsafe_ptr=*__temp1704v;
  int __temp1460v=0;
  uint8_t __temp1461v__=0;
  uint8_t __temp1462v__=0;
  char* __temp1463v__=0;
  char* contents=0;
  uint64_t __temp1464v__=0;
  uint64_t size=0;
  uint8_t success=0;
  uint8_t __temp1465v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1466v__=0;
  char* __temp1467v__unsafe_ptr=0;
  uint64_t __temp1467v__dat__pos=0;
  uint64_t __temp1467v__dat__length=0;
  int8_t __temp1467v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1461v__);
  not__temp18v(__temp1461v__,&__temp1462v__);
  if(__temp1462v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1463v__);
  contents=__temp1463v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1464v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1464v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1465v__);
  if(__temp1465v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1466v__);
  pos=__temp1466v__;
  __temp_errcode=str__temp556v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1467v__unsafe_ptr,&__temp1467v__dat__pos,&__temp1467v__dat__length,&__temp1467v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1700v=buf__unsafe_ptr;
  *__temp1701v=buf__unsafe_size;
  *__temp1702v=buf__unsafe_align;
  *__temp1703v=pos;
  *__temp1704v=f__unsafe_ptr;
  *__temp1705v=__temp1467v__unsafe_ptr;
  *__temp1706v=__temp1467v__dat__pos;
  *__temp1707v=__temp1467v__dat__length;
  *__temp1708v=__temp1467v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp676v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first) {
  int __temp677v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1630v() {
  char* __temp1632v__unsafe_ptr=0;
  uint64_t __temp1632v__dat__pos=0;
  uint64_t __temp1632v__dat__length=0;
  int8_t __temp1632v__dat__first=0;
  char* __temp1633v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __temp1635v=0;
  uint64_t __temp1636v__=0;
  char* __temp1637v__unsafe_ptr=0;
  uint64_t __temp1637v__unsafe_size=0;
  uint64_t __temp1637v__unsafe_align=0;
  uint8_t __temp1638v____temp511v____temp436v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint64_t mem__unsafe_align=0;
  uint64_t __temp1639v=0;
  uint64_t __temp1640v=0;
  uint64_t pos=0;
  uint8_t __temp1641v=0;
  char* __temp1642v__unsafe_ptr=0;
  uint64_t __temp1642v__dat__pos=0;
  uint64_t __temp1642v__dat__length=0;
  int8_t __temp1642v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  int8_t line__dat__first=0;
  uint64_t __temp1643v=0;
  char* __temp1644v__unsafe_ptr=0;
  uint64_t __temp1644v__dat__pos=0;
  uint64_t __temp1644v__dat__length=0;
  int8_t __temp1644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp562v(__temp1631v,&__temp1632v__unsafe_ptr,&__temp1632v__dat__pos,&__temp1632v__dat__length,&__temp1632v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1292v(__temp1632v__unsafe_ptr,__temp1632v__dat__pos,__temp1632v__dat__length,__temp1632v__dat__first,&__temp1633v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1633v__unsafe_ptr;
  __temp1635v=4;
  KB__temp410v(__temp1635v,&__temp1636v__);
  __temp_errcode=alloc__temp505v(__temp1636v__,&__temp1637v__unsafe_ptr,&__temp1637v__unsafe_size,&__temp1637v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1637v__unsafe_ptr;
  mem__unsafe_size=__temp1637v__unsafe_size;
  mem__unsafe_align=__temp1637v__unsafe_align;
  __temp1639v=0;
  __temp1640v=__temp1639v;
  pos=__temp1640v;
  while(1){
  __temp_complain=line__temp1459v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1642v__unsafe_ptr,&__temp1642v__dat__pos,&__temp1642v__dat__length,&__temp1642v__dat__first);
  __temp1641v=__temp_complain;
  line__unsafe_ptr=__temp1642v__unsafe_ptr;
  line__dat__pos=__temp1642v__dat__pos;
  line__dat__length=__temp1642v__dat__length;
  line__dat__first=__temp1642v__dat__first;
  __temp1641v=__temp1641v==0;
  if(!__temp1641v){
  break;
  }
  continue;
  }
  if(__temp1633v__unsafe_ptr)fclose((FILE*)__temp1633v__unsafe_ptr);
  __temp1633v__unsafe_ptr=0;
  __temp1643v=0;
  __temp_errcode=str__temp556v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_align,__temp1643v,pos,&__temp1644v__unsafe_ptr,&__temp1644v__dat__pos,&__temp1644v__dat__length,&__temp1644v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp676v(__temp1644v__unsafe_ptr,__temp1644v__dat__pos,__temp1644v__dat__length,__temp1644v__dat__first);
  
  __temp_failure:exists__temp398v(__temp1637v__unsafe_ptr,&__temp1638v____temp511v____temp436v__);
  if(__temp1638v____temp511v____temp436v__){
  __temp1637v__unsafe_size=0;
  __temp1637v__unsafe_size=__temp1637v__unsafe_size;
  free__temp428v(&__temp1637v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1630v();return 0;}