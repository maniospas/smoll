#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1631v="./std";
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

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp598v(const char* other, const char** __temp1641v) {
  goto __temp_return;
  __temp_return:
  *__temp1641v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1642v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1642v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(uint8_t value, uint8_t* __temp1643v) {
  uint8_t z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1643v=z;
}

static inline __attribute__((always_inline)) int read__temp1613v(const char* _path, char** __temp1644v) {
  const char* __temp1614v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  uint8_t __temp1615v__=0;
  uint8_t __temp1616v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp598v(_path,&__temp1614v__);
  path=__temp1614v__;
  unsafe_ptr=(void*)opendir(path);
  exists__temp398v(unsafe_ptr,&__temp1615v__);
  not__temp18v(__temp1615v__,&__temp1616v__);
  if(__temp1616v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1644v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp506v(char** __temp1645v, uint64_t* __temp1646v, uint64_t* __temp1647v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1645v=unsafe_ptr;
  *__temp1646v=unsafe_size;
  *__temp1647v=unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1648v) {
  char* allocated=*__temp1648v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1648v=allocated;
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

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1652v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1652v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1653v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
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

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1655v) {
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
  *__temp1655v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1656v, uint64_t* __temp1657v, uint64_t* __temp1658v, uint64_t size, char** __temp1659v, uint64_t* __temp1660v, uint64_t* __temp1661v) {
  char* buffer__unsafe_ptr=*__temp1656v;
  uint64_t buffer__unsafe_size=*__temp1657v;
  uint64_t buffer__unsafe_align=*__temp1658v;
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
  *__temp1656v=buffer__unsafe_ptr;
  *__temp1657v=buffer__unsafe_size;
  *__temp1658v=buffer__unsafe_align;
  *__temp1659v=buffer__unsafe_ptr;
  *__temp1660v=buffer__unsafe_size;
  *__temp1661v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp505v(uint64_t size, char** __temp1662v, uint64_t* __temp1663v, uint64_t* __temp1664v) {
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
  *__temp1662v=__temp510v__unsafe_ptr;
  *__temp1663v=__temp510v__unsafe_size;
  *__temp1664v=__temp510v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1665v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1665v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1666v) {
  *__temp1666v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1667v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1667v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1668v) {
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
  *__temp1668v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp542v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1669v, uint64_t* __temp1670v, uint64_t* __temp1671v, int8_t* __temp1672v) {
  goto __temp_return;
  __temp_return:
  *__temp1669v=unsafe_ptr;
  *__temp1670v=dat__pos;
  *__temp1671v=dat__length;
  *__temp1672v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp546v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1673v, uint64_t* __temp1674v, uint64_t* __temp1675v, int8_t* __temp1676v) {
  char* unsafe_ptr=0;
  char* __temp547v__unsafe_ptr=0;
  uint64_t __temp547v__dat__pos=0;
  uint64_t __temp547v__dat__length=0;
  int8_t __temp547v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp542v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp547v__unsafe_ptr,&__temp547v__dat__pos,&__temp547v__dat__length,&__temp547v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1673v=__temp547v__unsafe_ptr;
  *__temp1674v=__temp547v__dat__pos;
  *__temp1675v=__temp547v__dat__length;
  *__temp1676v=__temp547v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp556v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1677v, uint64_t* __temp1678v, uint64_t* __temp1679v, int8_t* __temp1680v) {
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
  *__temp1677v=__temp561v__unsafe_ptr;
  *__temp1678v=__temp561v__dat__pos;
  *__temp1679v=__temp561v__dat__length;
  *__temp1680v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp562v(const char* c, char** __temp1681v, uint64_t* __temp1682v, uint64_t* __temp1683v, int8_t* __temp1684v) {
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
  *__temp1681v=__temp565v__unsafe_ptr;
  *__temp1682v=__temp565v__dat__pos;
  *__temp1683v=__temp565v__dat__length;
  *__temp1684v=__temp565v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1624v(char** __temp1685v, char** __temp1686v, uint64_t* __temp1687v, uint64_t* __temp1688v, int8_t* __temp1689v) {
  char* f__unsafe_ptr=*__temp1685v;
  uint8_t __temp1625v__=0;
  uint8_t __temp1626v__=0;
  char* de=0;
  uint8_t __temp1627v__=0;
  uint8_t __temp1628v__=0;
  const char* dirname=0;
  char* __temp1629v__unsafe_ptr=0;
  uint64_t __temp1629v__dat__pos=0;
  uint64_t __temp1629v__dat__length=0;
  int8_t __temp1629v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(f__unsafe_ptr,&__temp1625v__);
  not__temp18v(__temp1625v__,&__temp1626v__);
  if(__temp1626v__){
  __temp_errcode=42;
  goto __temp_failure;
  }
  de=(void*)readdir((DIR*)f__unsafe_ptr);
  exists__temp398v(de,&__temp1627v__);
  not__temp18v(__temp1627v__,&__temp1628v__);
  if(__temp1628v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp562v(dirname,&__temp1629v__unsafe_ptr,&__temp1629v__dat__pos,&__temp1629v__dat__length,&__temp1629v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1685v=f__unsafe_ptr;
  *__temp1686v=__temp1629v__unsafe_ptr;
  *__temp1687v=__temp1629v__dat__pos;
  *__temp1688v=__temp1629v__dat__length;
  *__temp1689v=__temp1629v__dat__first;
  
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
  char* __temp1634v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __temp1635v=0;
  char* __temp1636v__unsafe_ptr=0;
  uint64_t __temp1636v__unsafe_size=0;
  uint64_t __temp1636v__unsafe_align=0;
  uint8_t __temp1637v____temp511v____temp436v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint8_t __temp1638v=0;
  char* __temp1639v__unsafe_ptr=0;
  uint64_t __temp1639v__dat__pos=0;
  uint64_t __temp1639v__dat__length=0;
  int8_t __temp1639v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  int8_t entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1613v(__temp1631v,&__temp1632v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1634v__unsafe_ptr=__temp1632v__unsafe_ptr;
  dir__unsafe_ptr=__temp1634v__unsafe_ptr;
  __temp1635v=128;
  __temp_errcode=alloc__temp505v(__temp1635v,&__temp1636v__unsafe_ptr,&__temp1636v__unsafe_size,&__temp1636v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1636v__unsafe_ptr;
  buf__unsafe_size=__temp1636v__unsafe_size;
  buf__unsafe_align=__temp1636v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1624v(&dir__unsafe_ptr,&__temp1639v__unsafe_ptr,&__temp1639v__dat__pos,&__temp1639v__dat__length,&__temp1639v__dat__first);
  __temp1638v=__temp_complain;
  entry__unsafe_ptr=__temp1639v__unsafe_ptr;
  entry__dat__pos=__temp1639v__dat__pos;
  entry__dat__length=__temp1639v__dat__length;
  entry__dat__first=__temp1639v__dat__first;
  __temp1638v=__temp1638v==0;
  if(!__temp1638v){
  break;
  }
  print__temp676v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:exists__temp398v(__temp1636v__unsafe_ptr,&__temp1637v____temp511v____temp436v__);
  if(__temp1637v____temp511v____temp436v__){
  __temp1636v__unsafe_size=0;
  __temp1636v__unsafe_size=__temp1636v__unsafe_size;
  free__temp428v(&__temp1636v__unsafe_ptr);
  }
  if(__temp1632v__unsafe_ptr){
  closedir((DIR*)__temp1632v__unsafe_ptr);
  __temp1632v__unsafe_ptr=0;
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1630v();return 0;}