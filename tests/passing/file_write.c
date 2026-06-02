#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2012t="tmp.txt";
const char* const __t2015t="hello world";
static const char* __t_all_errcodes[53] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
"unexpected end of console read",
"user input was not a float",
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2017t, uint64_t* __t2018t, uint16_t* __t2019t, uint16_t* __t2020t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2017t=unsafe_ptr;
  *__t2018t=unsafe_size;
  *__t2019t=unsafe_offset;
  *__t2020t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2021t) {
  *__t2021t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2022t) {
  int value=0;
  *__t2022t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2023t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2023t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2024t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2024t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2025t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2025t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2026t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2026t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2027t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2027t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2028t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2028t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2029t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2029t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2030t) {
  *__t2030t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2031t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2031t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2032t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t599t__);
  mul__t198t(i,__t599t__,&__t600t__);
  nat__t512t(buffer__unsafe_offset,&__t601t__);
  add__t174t(__t600t__,__t601t__,&__t602t__);
  add__t510t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2032t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2033t, uint64_t* __t2034t, uint64_t* __t2035t, char* __t2036t) {
  goto __t_return;
  __t_return:
  *__t2033t=unsafe_ptr;
  *__t2034t=dat__pos;
  *__t2035t=dat__length;
  *__t2036t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2037t, uint64_t* __t2038t, uint64_t* __t2039t, char* __t2040t) {
  char* unsafe_ptr=0;
  uint64_t __t646t__=0;
  uint64_t __t647t=0;
  char __t648t__=0;
  uint64_t __t649t__=0;
  uint64_t __t650t=0;
  char __t651t__=0;
  char* __t652t__unsafe_ptr=0;
  uint64_t __t652t__dat__pos=0;
  uint64_t __t652t__dat__length=0;
  char __t652t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=CHARS__unsafe_ptr;
  nat__t512t(CHARS__unsafe_align,&__t646t__);
  __t647t=1;
  neq__t143t(__t646t__,__t647t,&__t648t__);
  if(__t648t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(CHARS__unsafe_offset,&__t649t__);
  __t650t=0;
  neq__t143t(__t649t__,__t650t,&__t651t__);
  if(__t651t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t641t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t652t__unsafe_ptr,&__t652t__dat__pos,&__t652t__dat__length,&__t652t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2037t=__t652t__unsafe_ptr;
  *__t2038t=__t652t__dat__pos;
  *__t2039t=__t652t__dat__length;
  *__t2040t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2041t, uint64_t* __t2042t, uint64_t* __t2043t, char* __t2044t) {
  uint64_t __t678t=0;
  char __t679t__=0;
  char* __t680t__=0;
  char __t681t__value=0;
  char first=0;
  char* __t682t__unsafe_ptr=0;
  uint64_t __t682t__dat__pos=0;
  uint64_t __t682t__dat__length=0;
  char __t682t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t678t=0;
  neq__t143t(length,__t678t,&__t679t__);
  if(__t679t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t680t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t681t__value,__t680t__,1);
  first=__t681t__value;
  }
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t682t__unsafe_ptr,&__t682t__dat__pos,&__t682t__dat__length,&__t682t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2041t=__t682t__unsafe_ptr;
  *__t2042t=__t682t__dat__pos;
  *__t2043t=__t682t__dat__length;
  *__t2044t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t2045t, uint64_t* __t2046t, uint64_t* __t2047t, char* __t2048t) {
  char* __t684t__unsafe_ptr=0;
  uint64_t __t684t__unsafe_size=0;
  uint16_t __t684t__unsafe_offset=0;
  uint16_t __t684t__unsafe_align=0;
  char* __t685t__unsafe_ptr=0;
  uint64_t __t685t__unsafe_size=0;
  uint16_t __t685t__unsafe_offset=0;
  uint16_t __t685t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t686t__=0;
  uint64_t length=0;
  uint64_t __t687t=0;
  uint64_t __t688t__=0;
  uint64_t __t689t=0;
  char* __t690t__unsafe_ptr=0;
  uint64_t __t690t__dat__pos=0;
  uint64_t __t690t__dat__length=0;
  char __t690t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t684t__unsafe_ptr,&__t684t__unsafe_size,&__t684t__unsafe_offset,&__t684t__unsafe_align);
  __t685t__unsafe_ptr=__t684t__unsafe_ptr;
  __t685t__unsafe_size=__t684t__unsafe_size;
  __t685t__unsafe_offset=__t684t__unsafe_offset;
  __t685t__unsafe_align=__t684t__unsafe_align;
  buf__unsafe_ptr=__t685t__unsafe_ptr;
  buf__unsafe_size=__t685t__unsafe_size;
  buf__unsafe_offset=__t685t__unsafe_offset;
  buf__unsafe_align=__t685t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t686t__);
  buf__unsafe_ptr=__t686t__;
  if(c){
  length=strlen(c);
  }
  __t687t=1;
  add__t174t(length,__t687t,&__t688t__);
  buf__unsafe_size=__t688t__;
  __t689t=0;
  __t_errcode=str__t677t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t689t,length,&__t690t__unsafe_ptr,&__t690t__dat__pos,&__t690t__dat__length,&__t690t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2045t=__t690t__unsafe_ptr;
  *__t2046t=__t690t__dat__pos;
  *__t2047t=__t690t__dat__length;
  *__t2048t=__t690t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t730t(const char* cstr, const char** __t2049t, char** __t2050t, uint64_t* __t2051t, uint64_t* __t2052t, char* __t2053t) {
  char* __t731t__unsafe_ptr=0;
  uint64_t __t731t__dat__pos=0;
  uint64_t __t731t__dat__length=0;
  char __t731t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(cstr,&__t731t__unsafe_ptr,&__t731t__dat__pos,&__t731t__dat__length,&__t731t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t731t__unsafe_ptr;
  str__dat__pos=__t731t__dat__pos;
  str__dat__length=__t731t__dat__length;
  str__dat__first=__t731t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2049t=cstr;
  *__t2050t=str__unsafe_ptr;
  *__t2051t=str__dat__pos;
  *__t2052t=str__dat__length;
  *__t2053t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t733t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2054t) {
  goto __t_return;
  __t_return:
  *__t2054t=value__cstr;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2055t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2055t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2056t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2056t=z;
}

static inline __attribute__((always_inline)) int write__t1581t(const char* _path, char** __t2057t) {
  const char* __t1582t__cstr=0;
  char* __t1582t__str__unsafe_ptr=0;
  uint64_t __t1582t__str__dat__pos=0;
  uint64_t __t1582t__str__dat__length=0;
  char __t1582t__str__dat__first=0;
  const char* __t1583t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1584t__=0;
  char __t1585t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t730t(_path,&__t1582t__cstr,&__t1582t__str__unsafe_ptr,&__t1582t__str__dat__pos,&__t1582t__str__dat__length,&__t1582t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t733t(__t1582t__cstr,__t1582t__str__unsafe_ptr,__t1582t__str__dat__pos,__t1582t__str__dat__length,__t1582t__str__dat__first,&__t1583t__);
  path=__t1583t__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__t442t(unsafe_ptr,&__t1584t__);
  not__t27t(__t1584t__,&__t1585t__);
  if(__t1585t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t2057t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1863t(char** __t2058t, const char* text) {
  char* f__unsafe_ptr=*__t2058t;
  char __t1864t__=0;
  char __t1865t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t442t(f__unsafe_ptr,&__t1864t__);
  not__t27t(__t1864t__,&__t1865t__);
  if(__t1865t__){
  __t_errcode=47;
  goto __t_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __t_failure:*__t2058t=f__unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2011t() {
  char* __t2013t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=write__t1581t(__t2012t,&__t2013t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2013t__unsafe_ptr;
  __t_errcode=print__t1863t(&f__unsafe_ptr,__t2015t);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:if(__t2013t__unsafe_ptr){
  fclose((FILE*)__t2013t__unsafe_ptr);
  __t2013t__unsafe_ptr=0;
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}