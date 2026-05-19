#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1732v="tmp.txt";
const char* const __temp1735v="hello world";
static const char* __temp_all_errcodes[51] = {"noerr",
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
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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
"unsanitized command: shell metacharacter detected",
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp592v(char** __temp1737v, uint64_t* __temp1738v, uint16_t* __temp1739v, uint16_t* __temp1740v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1737v=unsafe_ptr;
  *__temp1738v=unsafe_size;
  *__temp1739v=unsafe_offset;
  *__temp1740v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1741v) {
  *__temp1741v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1742v) {
  int value=0;
  *__temp1742v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1743v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1743v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1744v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1744v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1745v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1745v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1746v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1746v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1747v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1747v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1748v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1748v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1749v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1749v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1750v) {
  *__temp1750v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1751v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1751v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1752v) {
  char __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  char* __temp556v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp551v__);
  if(__temp551v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp552v__);
  mul__temp194v(i,__temp552v__,&__temp553v__);
  nat__temp470v(buffer__unsafe_offset,&__temp554v__);
  add__temp170v(__temp553v__,__temp554v__,&__temp555v__);
  add__temp468v(buffer__unsafe_ptr,__temp555v__,&__temp556v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1752v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp588v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1753v, uint64_t* __temp1754v, uint64_t* __temp1755v, char* __temp1756v) {
  goto __temp_return;
  __temp_return:
  *__temp1753v=unsafe_ptr;
  *__temp1754v=dat__pos;
  *__temp1755v=dat__length;
  *__temp1756v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp594v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1757v, uint64_t* __temp1758v, uint64_t* __temp1759v, char* __temp1760v) {
  char* unsafe_ptr=0;
  uint64_t __temp595v__=0;
  uint64_t __temp596v=0;
  char __temp597v__=0;
  uint64_t __temp598v__=0;
  uint64_t __temp599v=0;
  char __temp600v__=0;
  char* __temp601v__unsafe_ptr=0;
  uint64_t __temp601v__dat__pos=0;
  uint64_t __temp601v__dat__length=0;
  char __temp601v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp595v__);
  __temp596v=1;
  neq__temp142v(__temp595v__,__temp596v,&__temp597v__);
  if(__temp597v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp598v__);
  __temp599v=0;
  neq__temp142v(__temp598v__,__temp599v,&__temp600v__);
  if(__temp600v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp588v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp601v__unsafe_ptr,&__temp601v__dat__pos,&__temp601v__dat__length,&__temp601v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1757v=__temp601v__unsafe_ptr;
  *__temp1758v=__temp601v__dat__pos;
  *__temp1759v=__temp601v__dat__length;
  *__temp1760v=__temp601v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp626v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1761v, uint64_t* __temp1762v, uint64_t* __temp1763v, char* __temp1764v) {
  uint64_t __temp627v=0;
  char __temp628v__=0;
  char* __temp629v__=0;
  char __temp630v__value=0;
  char first=0;
  char* __temp631v__unsafe_ptr=0;
  uint64_t __temp631v__dat__pos=0;
  uint64_t __temp631v__dat__length=0;
  char __temp631v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp627v=0;
  neq__temp142v(length,__temp627v,&__temp628v__);
  if(__temp628v__){
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp629v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp629v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp630v__value,__temp629v__,1);
  first=__temp630v__value;
  }
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp631v__unsafe_ptr,&__temp631v__dat__pos,&__temp631v__dat__length,&__temp631v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1761v=__temp631v__unsafe_ptr;
  *__temp1762v=__temp631v__dat__pos;
  *__temp1763v=__temp631v__dat__length;
  *__temp1764v=__temp631v__dat__first;
  
  return __temp_errcode;
}

int str__temp632v(const char* c, char** __temp1765v, uint64_t* __temp1766v, uint64_t* __temp1767v, char* __temp1768v) {
  char* __temp633v__unsafe_ptr=0;
  uint64_t __temp633v__unsafe_size=0;
  uint16_t __temp633v__unsafe_offset=0;
  uint16_t __temp633v__unsafe_align=0;
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__unsafe_size=0;
  uint16_t __temp634v__unsafe_offset=0;
  uint16_t __temp634v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp635v__=0;
  uint64_t length=0;
  uint64_t __temp636v=0;
  uint64_t __temp637v__=0;
  uint64_t __temp638v=0;
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__dat__pos=0;
  uint64_t __temp639v__dat__length=0;
  char __temp639v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp592v(&__temp633v__unsafe_ptr,&__temp633v__unsafe_size,&__temp633v__unsafe_offset,&__temp633v__unsafe_align);
  __temp634v__unsafe_ptr=__temp633v__unsafe_ptr;
  __temp634v__unsafe_size=__temp633v__unsafe_size;
  __temp634v__unsafe_offset=__temp633v__unsafe_offset;
  __temp634v__unsafe_align=__temp633v__unsafe_align;
  buf__unsafe_ptr=__temp634v__unsafe_ptr;
  buf__unsafe_size=__temp634v__unsafe_size;
  buf__unsafe_offset=__temp634v__unsafe_offset;
  buf__unsafe_align=__temp634v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp635v__);
  buf__unsafe_ptr=__temp635v__;
  if(c){
  length=strlen(c);
  }
  __temp636v=1;
  add__temp170v(length,__temp636v,&__temp637v__);
  buf__unsafe_size=__temp637v__;
  __temp638v=0;
  __temp_errcode=str__temp626v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp638v,length,&__temp639v__unsafe_ptr,&__temp639v__dat__pos,&__temp639v__dat__length,&__temp639v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1765v=__temp639v__unsafe_ptr;
  *__temp1766v=__temp639v__dat__pos;
  *__temp1767v=__temp639v__dat__length;
  *__temp1768v=__temp639v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp674v(const char* cstr, const char** __temp1769v, char** __temp1770v, uint64_t* __temp1771v, uint64_t* __temp1772v, char* __temp1773v) {
  char* __temp675v__unsafe_ptr=0;
  uint64_t __temp675v__dat__pos=0;
  uint64_t __temp675v__dat__length=0;
  char __temp675v__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp632v(cstr,&__temp675v__unsafe_ptr,&__temp675v__dat__pos,&__temp675v__dat__length,&__temp675v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp675v__unsafe_ptr;
  str__dat__pos=__temp675v__dat__pos;
  str__dat__length=__temp675v__dat__length;
  str__dat__first=__temp675v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1769v=cstr;
  *__temp1770v=str__unsafe_ptr;
  *__temp1771v=str__dat__pos;
  *__temp1772v=str__dat__length;
  *__temp1773v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1774v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1774v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1775v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1775v=z;
}

static inline __attribute__((always_inline)) int write__temp1343v(const char* _path, char** __temp1776v) {
  const char* __temp1344v__cstr=0;
  char* __temp1344v__str__unsafe_ptr=0;
  uint64_t __temp1344v__str__dat__pos=0;
  uint64_t __temp1344v__str__dat__length=0;
  char __temp1344v__str__dat__first=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1345v__=0;
  char __temp1346v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp674v(_path,&__temp1344v__cstr,&__temp1344v__str__unsafe_ptr,&__temp1344v__str__dat__pos,&__temp1344v__str__dat__length,&__temp1344v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1344v__cstr;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp412v(unsafe_ptr,&__temp1345v__);
  not__temp26v(__temp1345v__,&__temp1346v__);
  if(__temp1346v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1776v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1624v(char** __temp1777v, const char* text) {
  char* f__unsafe_ptr=*__temp1777v;
  char __temp1625v__=0;
  char __temp1626v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1625v__);
  not__temp26v(__temp1625v__,&__temp1626v__);
  if(__temp1626v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __temp_failure:*__temp1777v=f__unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1731v() {
  char* __temp1733v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1343v(__temp1732v,&__temp1733v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1733v__unsafe_ptr;
  __temp_errcode=print__temp1624v(&f__unsafe_ptr,__temp1735v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1733v__unsafe_ptr)fclose((FILE*)__temp1733v__unsafe_ptr);
  __temp1733v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1731v();return 0;}