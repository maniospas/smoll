#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1733v="tmp.txt";
const char* const __temp1736v="hello world";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1738v, uint64_t* __temp1739v, uint16_t* __temp1740v, uint16_t* __temp1741v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1738v=unsafe_ptr;
  *__temp1739v=unsafe_size;
  *__temp1740v=unsafe_offset;
  *__temp1741v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1742v) {
  *__temp1742v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1743v) {
  int value=0;
  *__temp1743v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1744v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1744v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1745v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1745v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1746v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1746v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1747v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1747v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1748v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1748v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1749v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1749v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1750v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1750v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1751v) {
  *__temp1751v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1752v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1752v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1753v) {
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
  *__temp1753v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1754v, uint64_t* __temp1755v, uint64_t* __temp1756v, char* __temp1757v) {
  goto __temp_return;
  __temp_return:
  *__temp1754v=unsafe_ptr;
  *__temp1755v=dat__pos;
  *__temp1756v=dat__length;
  *__temp1757v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1758v, uint64_t* __temp1759v, uint64_t* __temp1760v, char* __temp1761v) {
  char* unsafe_ptr=0;
  uint64_t __temp600v__=0;
  uint64_t __temp601v=0;
  char __temp602v__=0;
  uint64_t __temp603v__=0;
  uint64_t __temp604v=0;
  char __temp605v__=0;
  char* __temp606v__unsafe_ptr=0;
  uint64_t __temp606v__dat__pos=0;
  uint64_t __temp606v__dat__length=0;
  char __temp606v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp600v__);
  __temp601v=1;
  neq__temp142v(__temp600v__,__temp601v,&__temp602v__);
  if(__temp602v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp603v__);
  __temp604v=0;
  neq__temp142v(__temp603v__,__temp604v,&__temp605v__);
  if(__temp605v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp595v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp606v__unsafe_ptr,&__temp606v__dat__pos,&__temp606v__dat__length,&__temp606v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1758v=__temp606v__unsafe_ptr;
  *__temp1759v=__temp606v__dat__pos;
  *__temp1760v=__temp606v__dat__length;
  *__temp1761v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1762v, uint64_t* __temp1763v, uint64_t* __temp1764v, char* __temp1765v) {
  uint64_t __temp632v=0;
  char __temp633v__=0;
  char* __temp634v__=0;
  char __temp635v__value=0;
  char first=0;
  char* __temp636v__unsafe_ptr=0;
  uint64_t __temp636v__dat__pos=0;
  uint64_t __temp636v__dat__length=0;
  char __temp636v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp632v=0;
  neq__temp142v(length,__temp632v,&__temp633v__);
  if(__temp633v__){
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp634v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp634v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp635v__value,__temp634v__,1);
  first=__temp635v__value;
  }
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp636v__unsafe_ptr,&__temp636v__dat__pos,&__temp636v__dat__length,&__temp636v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1762v=__temp636v__unsafe_ptr;
  *__temp1763v=__temp636v__dat__pos;
  *__temp1764v=__temp636v__dat__length;
  *__temp1765v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1766v, uint64_t* __temp1767v, uint64_t* __temp1768v, char* __temp1769v) {
  char* __temp638v__unsafe_ptr=0;
  uint64_t __temp638v__unsafe_size=0;
  uint16_t __temp638v__unsafe_offset=0;
  uint16_t __temp638v__unsafe_align=0;
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__unsafe_size=0;
  uint16_t __temp639v__unsafe_offset=0;
  uint16_t __temp639v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp640v__=0;
  uint64_t length=0;
  uint64_t __temp641v=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp559v(&__temp638v__unsafe_ptr,&__temp638v__unsafe_size,&__temp638v__unsafe_offset,&__temp638v__unsafe_align);
  __temp639v__unsafe_ptr=__temp638v__unsafe_ptr;
  __temp639v__unsafe_size=__temp638v__unsafe_size;
  __temp639v__unsafe_offset=__temp638v__unsafe_offset;
  __temp639v__unsafe_align=__temp638v__unsafe_align;
  buf__unsafe_ptr=__temp639v__unsafe_ptr;
  buf__unsafe_size=__temp639v__unsafe_size;
  buf__unsafe_offset=__temp639v__unsafe_offset;
  buf__unsafe_align=__temp639v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp640v__);
  buf__unsafe_ptr=__temp640v__;
  if(c){
  length=strlen(c);
  }
  __temp641v=1;
  add__temp170v(length,__temp641v,&__temp642v__);
  buf__unsafe_size=__temp642v__;
  __temp643v=0;
  __temp_errcode=str__temp631v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp643v,length,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1766v=__temp644v__unsafe_ptr;
  *__temp1767v=__temp644v__dat__pos;
  *__temp1768v=__temp644v__dat__length;
  *__temp1769v=__temp644v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp676v(const char* cstr, const char** __temp1770v, char** __temp1771v, uint64_t* __temp1772v, uint64_t* __temp1773v, char* __temp1774v) {
  char* __temp677v__unsafe_ptr=0;
  uint64_t __temp677v__dat__pos=0;
  uint64_t __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(cstr,&__temp677v__unsafe_ptr,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp677v__unsafe_ptr;
  str__dat__pos=__temp677v__dat__pos;
  str__dat__length=__temp677v__dat__length;
  str__dat__first=__temp677v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1770v=cstr;
  *__temp1771v=str__unsafe_ptr;
  *__temp1772v=str__dat__pos;
  *__temp1773v=str__dat__length;
  *__temp1774v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1775v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1775v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1776v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1776v=z;
}

static inline __attribute__((always_inline)) int write__temp1345v(const char* _path, char** __temp1777v) {
  const char* __temp1346v__cstr=0;
  char* __temp1346v__str__unsafe_ptr=0;
  uint64_t __temp1346v__str__dat__pos=0;
  uint64_t __temp1346v__str__dat__length=0;
  char __temp1346v__str__dat__first=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1347v__=0;
  char __temp1348v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp676v(_path,&__temp1346v__cstr,&__temp1346v__str__unsafe_ptr,&__temp1346v__str__dat__pos,&__temp1346v__str__dat__length,&__temp1346v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1346v__cstr;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__temp412v(unsafe_ptr,&__temp1347v__);
  not__temp26v(__temp1347v__,&__temp1348v__);
  if(__temp1348v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr)fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  __temp_return:
  *__temp1777v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1626v(char** __temp1778v, const char* text) {
  char* f__unsafe_ptr=*__temp1778v;
  char __temp1627v__=0;
  char __temp1628v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1627v__);
  not__temp26v(__temp1627v__,&__temp1628v__);
  if(__temp1628v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __temp_failure:*__temp1778v=f__unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1732v() {
  char* __temp1734v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1345v(__temp1733v,&__temp1734v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1734v__unsafe_ptr;
  __temp_errcode=print__temp1626v(&f__unsafe_ptr,__temp1736v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1734v__unsafe_ptr)fclose((FILE*)__temp1734v__unsafe_ptr);
  __temp1734v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1732v();return 0;}