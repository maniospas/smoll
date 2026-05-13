#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp359v="\n";
const char* const __temp1386v="123";
static const char* __temp_all_errcodes[31] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1355v(char** __temp1390v, uint64_t* __temp1391v, uint64_t* __temp1392v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=25;
  *__temp1390v=unsafe_ptr;
  *__temp1391v=unsafe_size;
  *__temp1392v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp408v(char* x, char* __temp1393v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1393v=z;
}

static inline __attribute__((always_inline)) void free__temp457v(char** __temp1394v) {
  char* allocated=*__temp1394v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1394v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1395v) {
  int value=0;
  *__temp1395v=value;
}

static inline __attribute__((always_inline)) void not__temp31v(int __temp_anon0, int* __temp1396v) {
  int __temp32v__=0;
  false__temp10v(&__temp32v__);
  goto __temp_return;
  __temp_return:
  *__temp1396v=__temp32v__;
}

static inline __attribute__((always_inline)) void is_different__temp89v(uint64_t x, uint64_t y, int* __temp1397v) {
  int __temp90v=0;
  int __temp91v__=0;
  not__temp31v(__temp90v,&__temp91v__);
  goto __temp_return;
  __temp_return:
  *__temp1397v=__temp91v__;
}

static inline __attribute__((always_inline)) void eq__temp114v(uint64_t x, uint64_t y, char* __temp1398v) {
  int __temp115v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp115v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1398v=z;
}

static inline __attribute__((always_inline)) void neq__temp138v(uint64_t x, uint64_t y, char* __temp1399v) {
  int __temp139v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp139v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1399v=z;
}

static inline __attribute__((always_inline)) void mul__temp190v(uint64_t x, uint64_t y, uint64_t* __temp1400v) {
  int __temp191v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp191v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1400v=z;
}

static inline __attribute__((always_inline)) void zero__temp458v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp454v(uint64_t bytes, char** __temp1401v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  printf("%s\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 21 column 20\n");
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1401v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp463v(char** __temp1402v, uint64_t* __temp1403v, uint64_t* __temp1404v, uint64_t size, char** __temp1405v, uint64_t* __temp1406v, uint64_t* __temp1407v) {
  char* buffer__unsafe_ptr=*__temp1402v;
  uint64_t buffer__unsafe_size=*__temp1403v;
  uint64_t buffer__unsafe_align=*__temp1404v;
  int __temp464v=0;
  char __temp465v__=0;
  uint64_t __temp466v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  uint64_t __temp472v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v__=0;
  uint64_t bytes=0;
  char* __temp477v__=0;
  uint64_t __temp478v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp114v(buffer__unsafe_size,size,&__temp468v__);
  if(__temp468v__){
  __temp469v=0;
  neq__temp138v(size,__temp469v,&__temp470v__);
  if(__temp470v__){
  __temp471v=0;
  mul__temp190v(buffer__unsafe_align,size,&__temp472v__);
  zero__temp458v(buffer__unsafe_ptr,__temp471v,__temp472v__);
  }
  goto __temp_return;
  }
  __temp474v=0;
  neq__temp138v(buffer__unsafe_size,__temp474v,&__temp475v__);
  if(__temp475v__){
  printf("%s\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/core/array.s line 49 column 14\n");
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp190v(buffer__unsafe_align,size,&__temp476v__);
  bytes=__temp476v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp454v(bytes,&__temp477v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/core/array.s line 52 column 36\n   unhandled error from alloc(nat bytes) -> (any ptr unsafe_ptr)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp477v__;
  __temp478v=0;
  zero__temp458v(buffer__unsafe_ptr,__temp478v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp408v(buffer__unsafe_ptr,&__temp465v__);
  if(__temp465v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp457v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1402v=buffer__unsafe_ptr;
  *__temp1403v=buffer__unsafe_size;
  *__temp1404v=buffer__unsafe_align;
  *__temp1405v=buffer__unsafe_ptr;
  *__temp1406v=buffer__unsafe_size;
  *__temp1407v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp535v(char** __temp1408v, uint64_t* __temp1409v, uint64_t* __temp1410v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1408v=unsafe_ptr;
  *__temp1409v=unsafe_size;
  *__temp1410v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp17v(char* to, const char* from, char** __temp1411v) {
  *__temp1411v=to;
}

static inline __attribute__((always_inline)) void add__temp166v(uint64_t x, uint64_t y, uint64_t* __temp1412v) {
  int __temp167v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp167v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1412v=z;
}

static inline __attribute__((always_inline)) void ge__temp315v(uint64_t x, uint64_t y, char* __temp1413v) {
  int __temp316v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp316v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1413v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1414v) {
  *__temp1414v=to;
}

static inline __attribute__((always_inline)) void add__temp459v(char* allocated, uint64_t offset, char** __temp1415v) {
  char* element=0;
  char* __temp460v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp460v__);
  unsafe_ptr=__temp460v__;
  goto __temp_return;
  __temp_return:
  *__temp1415v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp529v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1416v) {
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  printf("%s\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 111 column 35\n");
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp190v(i,buffer__unsafe_align,&__temp531v__);
  add__temp459v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  unsafe_ptr=__temp532v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1416v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp571v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1417v, uint64_t* __temp1418v, uint64_t* __temp1419v, char* __temp1420v) {
  goto __temp_return;
  __temp_return:
  *__temp1417v=unsafe_ptr;
  *__temp1418v=dat__pos;
  *__temp1419v=dat__length;
  *__temp1420v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1421v, uint64_t* __temp1422v, uint64_t* __temp1423v, char* __temp1424v) {
  char* unsafe_ptr=0;
  char* __temp576v__unsafe_ptr=0;
  uint64_t __temp576v__dat__pos=0;
  uint64_t __temp576v__dat__length=0;
  char __temp576v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp571v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp576v__unsafe_ptr,&__temp576v__dat__pos,&__temp576v__dat__length,&__temp576v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1421v=__temp576v__unsafe_ptr;
  *__temp1422v=__temp576v__dat__pos;
  *__temp1423v=__temp576v__dat__length;
  *__temp1424v=__temp576v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp601v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1425v, uint64_t* __temp1426v, uint64_t* __temp1427v, char* __temp1428v) {
  uint64_t __temp602v=0;
  char __temp603v__=0;
  char* __temp604v__=0;
  char __temp605v__value=0;
  char first=0;
  char* __temp606v__unsafe_ptr=0;
  uint64_t __temp606v__dat__pos=0;
  uint64_t __temp606v__dat__length=0;
  char __temp606v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp602v=0;
  neq__temp138v(length,__temp602v,&__temp603v__);
  if(__temp603v__){
  __temp_errcode=get__temp529v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp604v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/core/string.s line 58 column 29\n   unhandled error from get(const any[] element size 0, nat i) -> (any ptr unsafe_ptr)\n");
  goto __temp_failure;
  }
  if(!__temp604v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/core/string.s line 58 column 29\n");
  goto __temp_failure;
  }
  memcpy(&__temp605v__value,__temp604v__,1);
  first=__temp605v__value;
  }
  str__temp575v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp606v__unsafe_ptr,&__temp606v__dat__pos,&__temp606v__dat__length,&__temp606v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1425v=__temp606v__unsafe_ptr;
  *__temp1426v=__temp606v__dat__pos;
  *__temp1427v=__temp606v__dat__length;
  *__temp1428v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(const char* c, char** __temp1429v, uint64_t* __temp1430v, uint64_t* __temp1431v, char* __temp1432v) {
  char* __temp608v__unsafe_ptr=0;
  uint64_t __temp608v__unsafe_size=0;
  uint64_t __temp608v__unsafe_align=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__unsafe_size=0;
  uint64_t __temp609v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp610v__=0;
  uint64_t length=0;
  uint64_t __temp611v=0;
  uint64_t __temp612v__=0;
  uint64_t __temp613v=0;
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__dat__pos=0;
  uint64_t __temp614v__dat__length=0;
  char __temp614v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp535v(&__temp608v__unsafe_ptr,&__temp608v__unsafe_size,&__temp608v__unsafe_align);
  __temp609v__unsafe_ptr=__temp608v__unsafe_ptr;
  __temp609v__unsafe_size=__temp608v__unsafe_size;
  __temp609v__unsafe_align=__temp608v__unsafe_align;
  buf__unsafe_ptr=__temp609v__unsafe_ptr;
  buf__unsafe_size=__temp609v__unsafe_size;
  buf__unsafe_align=__temp609v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp17v(buf__unsafe_ptr,c,&__temp610v__);
  buf__unsafe_ptr=__temp610v__;
  if(c){
  length=strlen(c);
  }
  __temp611v=1;
  add__temp166v(length,__temp611v,&__temp612v__);
  buf__unsafe_size=__temp612v__;
  __temp613v=0;
  __temp_errcode=str__temp601v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp613v,length,&__temp614v__unsafe_ptr,&__temp614v__dat__pos,&__temp614v__dat__length,&__temp614v__dat__first);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/core/string.s line 70 column 12\n   unhandled error from str(const char[] element size 1, nat pos, nat length) -> (const str)\n");
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1429v=__temp614v__unsafe_ptr;
  *__temp1430v=__temp614v__dat__pos;
  *__temp1431v=__temp614v__dat__length;
  *__temp1432v=__temp614v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp600v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1433v, uint64_t* __temp1434v, uint64_t* __temp1435v, char* __temp1436v) {
  goto __temp_return;
  __temp_return:
  *__temp1433v=other__unsafe_ptr;
  *__temp1434v=other__dat__pos;
  *__temp1435v=other__dat__length;
  *__temp1436v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp615v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1437v) {
  goto __temp_return;
  __temp_return:
  *__temp1437v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1438v) {
  goto __temp_return;
  __temp_return:
  *__temp1438v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp428v(uint64_t to, uint64_t* __temp1439v, uint64_t* __temp1440v) {
  int __temp429v=0;
  uint64_t __temp430v=0;
  uint64_t _from=0;
  uint64_t __temp431v=0;
  uint64_t from=0;
  __temp430v=0;
  _from=__temp430v;
  __temp431v=_from;
  from=__temp431v;
  goto __temp_return;
  __temp_return:
  *__temp1439v=from;
  *__temp1440v=to;
}

static inline __attribute__((always_inline)) int next__temp435v(uint64_t* __temp1441v, uint64_t r__to, uint64_t* __temp1442v) {
  uint64_t r__from=*__temp1441v;
  char __temp436v__=0;
  uint64_t ret=0;
  uint64_t __temp437v=0;
  uint64_t __temp438v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(r__from,r__to,&__temp436v__);
  if(__temp436v__){
  printf("%s\033[31mfail\033[0m iteration end\n\033[31mat\033[0m std/core/range.s line 29 column 14\n");
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp437v=1;
  add__temp166v(ret,__temp437v,&__temp438v__);
  r__from=__temp438v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1441v=r__from;
  *__temp1442v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp409v(uint64_t value, uint64_t* __temp1443v) {
  goto __temp_return;
  __temp_return:
  *__temp1443v=value;
}

static inline __attribute__((always_inline)) void lshift__temp418v(uint64_t x__value, uint64_t y, uint64_t* __temp1444v) {
  uint64_t z=0;
  uint64_t __temp419v__value=0;
  z=(x__value<<y);
  bits__temp409v(z,&__temp419v__value);
  goto __temp_return;
  __temp_return:
  *__temp1444v=__temp419v__value;
}

static inline __attribute__((always_inline)) void nat__temp415v(uint64_t x__value, uint64_t* __temp1445v) {
  goto __temp_return;
  __temp_return:
  *__temp1445v=x__value;
}

static inline __attribute__((always_inline)) void get__temp749v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1446v) {
  uint64_t __temp750v__=0;
  char* __temp751v__=0;
  char* unsafe_ptr=0;
  add__temp166v(s__dat__pos,i,&__temp750v__);
  add__temp459v(s__unsafe_ptr,__temp750v__,&__temp751v__);
  unsafe_ptr=__temp751v__;
  goto __temp_return;
  __temp_return:
  *__temp1446v=unsafe_ptr;
}

static inline __attribute__((always_inline)) void nat__temp407v(char x, uint64_t* __temp1447v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1447v=value;
}

static inline __attribute__((always_inline)) int mod__temp219v(uint64_t x, uint64_t y, uint64_t* __temp1448v) {
  uint64_t zero=0;
  char __temp220v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  zero=0;
  eq__temp114v(y,zero,&__temp220v__);
  if(__temp220v__){
  printf("%s\033[31mfail\033[0m modulo by zero \n\033[31mat\033[0m std/core/numbers.s line 84 column 14\n");
  __temp_errcode=3;
  goto __temp_failure;
  }
  z=x%y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1448v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1216v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1449v) {
  uint64_t __temp1217v=0;
  uint64_t __temp1218v=0;
  uint64_t h=0;
  uint64_t __temp1219v__=0;
  uint64_t __temp1220v__from=0;
  uint64_t __temp1220v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1221v=0;
  uint64_t __temp1222v__=0;
  uint64_t i=0;
  uint64_t __temp1223v__value=0;
  uint64_t __temp1224v=0;
  uint64_t __temp1225v__value=0;
  uint64_t __temp1226v__=0;
  uint64_t __temp1227v__=0;
  char* __temp1228v__=0;
  char __temp1229v__value=0;
  uint64_t __temp1230v__=0;
  uint64_t __temp1231v__=0;
  uint64_t __temp1232v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1217v=5381;
  __temp1218v=__temp1217v;
  h=__temp1218v;
  len__temp615v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1219v__);
  range__temp428v(__temp1219v__,&__temp1220v__from,&__temp1220v__to);
  iter__from=__temp1220v__from;
  iter__to=__temp1220v__to;
  while(1){
  __temp_complain=next__temp435v(&iter__from,iter__to,&__temp1222v__);
  __temp1221v=__temp_complain;
  i=__temp1222v__;
  __temp1221v=__temp1221v==0;
  if(!__temp1221v){
  break;
  }
  bits__temp409v(h,&__temp1223v__value);
  __temp1224v=5;
  lshift__temp418v(__temp1223v__value,__temp1224v,&__temp1225v__value);
  nat__temp415v(__temp1225v__value,&__temp1226v__);
  add__temp166v(__temp1226v__,h,&__temp1227v__);
  get__temp749v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1228v__);
  if(!__temp1228v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/hash.s line 11 column 52\n");
  goto __temp_failure;
  }
  memcpy(&__temp1229v__value,__temp1228v__,1);
  nat__temp407v(__temp1229v__value,&__temp1230v__);
  add__temp166v(__temp1227v__,__temp1230v__,&__temp1231v__);
  h=__temp1231v__;
  }
  __temp_errcode=mod__temp219v(h,size,&__temp1232v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/hash.s line 12 column 14\n   unhandled error from mod(nat x, nat y) -> (nat z)\n");
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1449v=__temp1232v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp243v(uint64_t x, uint64_t y, char* __temp1450v) {
  int __temp244v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp244v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1450v=z;
}

static inline __attribute__((always_inline)) int sub__temp343v(uint64_t x, uint64_t y, uint64_t* __temp1451v) {
  int __temp344v__=0;
  int __temp345v=0;
  int __temp346v=0;
  char __temp347v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp89v(x,y,&__temp344v__);
  lt__temp243v(x,y,&__temp347v__);
  if(__temp347v__){
  printf("%s\033[31mfail\033[0m id subtraction would yield a negative\n\033[31mat\033[0m std/core/numbers.s line 123 column 14\n");
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1451v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp619v(char x, char y, char* __temp1452v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1452v=z;
}

static inline __attribute__((always_inline)) void eq__temp753v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1453v) {
  uint64_t __temp754v__=0;
  uint64_t n=0;
  uint64_t __temp755v__=0;
  char __temp756v__=0;
  char __temp757v=0;
  char __temp758v__=0;
  char __temp759v=0;
  char z=0;
  len__temp615v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp754v__);
  n=__temp754v__;
  len__temp615v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp755v__);
  neq__temp138v(n,__temp755v__,&__temp756v__);
  if(__temp756v__){
  __temp757v=0;
  goto __temp_return;
  }
  neq__temp619v(x__dat__first,y__dat__first,&__temp758v__);
  if(__temp758v__){
  __temp759v=0;
  __temp757v=__temp759v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp757v=z;
  goto __temp_return;
  __temp_return:
  *__temp1453v=__temp757v;
}

int find__temp1265v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint64_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1454v) {
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__dat__pos=0;
  uint64_t __temp1266v__dat__length=0;
  char __temp1266v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  uint64_t __temp1267v=0;
  uint64_t __temp1268v__=0;
  char __temp1269v__=0;
  uint64_t __temp1270v=0;
  uint64_t __temp1271v__=0;
  uint64_t n=0;
  uint64_t __temp1272v__=0;
  uint64_t pos=0;
  uint64_t __temp1273v__from=0;
  uint64_t __temp1273v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1274v=0;
  uint64_t __temp1275v__=0;
  uint64_t i=0;
  uint64_t __temp1276v=0;
  uint64_t idx=0;
  char __temp1277v__=0;
  uint64_t __temp1278v__=0;
  uint64_t __temp1279v=0;
  char __temp1280v__=0;
  char* __temp1281v__=0;
  char* __temp1282v__unsafe_ptr=0;
  uint64_t __temp1282v__dat__pos=0;
  uint64_t __temp1282v__dat__length=0;
  char __temp1282v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  uint64_t __temp1283v=0;
  uint64_t __temp1284v__=0;
  char __temp1285v__=0;
  char __temp1286v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp600v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1266v__unsafe_ptr,&__temp1266v__dat__pos,&__temp1266v__dat__length,&__temp1266v__dat__first);
  k__unsafe_ptr=__temp1266v__unsafe_ptr;
  k__dat__pos=__temp1266v__dat__pos;
  k__dat__length=__temp1266v__dat__length;
  k__dat__first=__temp1266v__dat__first;
  __temp1267v=0;
  len__temp615v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1268v__);
  eq__temp114v(__temp1267v,__temp1268v__,&__temp1269v__);
  if(__temp1269v__){
  __temp1270v=0;
  goto __temp_return;
  }
  len__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1271v__);
  n=__temp1271v__;
  __temp_errcode=hash__temp1216v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1272v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/hash.s line 36 column 11\n   unhandled error from hash(const str, nat size) -> (nat)\n");
  goto __temp_failure;
  }
  pos=__temp1272v__;
  range__temp428v(n,&__temp1273v__from,&__temp1273v__to);
  iter__from=__temp1273v__from;
  iter__to=__temp1273v__to;
  while(1){
  __temp_complain=next__temp435v(&iter__from,iter__to,&__temp1275v__);
  __temp1274v=__temp_complain;
  i=__temp1275v__;
  __temp1274v=__temp1274v==0;
  if(!__temp1274v){
  break;
  }
  __temp1276v=i;
  idx=__temp1276v;
  ge__temp315v(idx,n,&__temp1277v__);
  if(__temp1277v__){
  __temp_errcode=sub__temp343v(idx,n,&__temp1278v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/hash.s line 40 column 28\n   unhandled error from sub(nat x, nat y) -> (nat z)\n");
  goto __temp_failure;
  }
  idx=__temp1278v__;
  }
  __temp1279v=0;
  eq__temp114v(idx,__temp1279v,&__temp1280v__);
  if(__temp1280v__){
  continue;
  }
  __temp_errcode=get__temp529v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1281v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/hash.s line 42 column 21\n   unhandled error from get(const any[] element size 0, nat i) -> (any ptr unsafe_ptr)\n");
  goto __temp_failure;
  }
  if(!__temp1281v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/hash.s line 42 column 21\n");
  goto __temp_failure;
  }
  memcpy(&__temp1282v__unsafe_ptr,__temp1281v__,8);
  if(!__temp1281v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/hash.s line 42 column 21\n");
  goto __temp_failure;
  }
  memcpy(&__temp1282v__dat__pos,__temp1281v__+8,8);
  if(!__temp1281v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/hash.s line 42 column 21\n");
  goto __temp_failure;
  }
  memcpy(&__temp1282v__dat__length,__temp1281v__+16,8);
  if(!__temp1281v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/hash.s line 42 column 21\n");
  goto __temp_failure;
  }
  memcpy(&__temp1282v__dat__first,__temp1281v__+24,1);
  entry__unsafe_ptr=__temp1282v__unsafe_ptr;
  entry__dat__pos=__temp1282v__dat__pos;
  entry__dat__length=__temp1282v__dat__length;
  entry__dat__first=__temp1282v__dat__first;
  __temp1283v=0;
  len__temp615v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1284v__);
  eq__temp114v(__temp1283v,__temp1284v__,&__temp1285v__);
  if(__temp1285v__){
  continue;
  }
  eq__temp753v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1286v__);
  if(__temp1286v__){
  __temp1270v=idx;
  goto __temp_return;
  }
  }
  printf("%s\033[31mfail\033[0m index not found\n\033[31mat\033[0m std/hash.s line 46 column 10\n");
  __temp_errcode=29;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1454v=__temp1270v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp1363v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, char** __temp1455v, uint64_t* __temp1456v, uint64_t* __temp1457v, const char* _key, char** __temp1458v) {
  char* values__unsafe_ptr=*__temp1455v;
  uint64_t values__unsafe_size=*__temp1456v;
  uint64_t values__unsafe_align=*__temp1457v;
  char* __temp1364v__unsafe_ptr=0;
  uint64_t __temp1364v__dat__pos=0;
  uint64_t __temp1364v__dat__length=0;
  char __temp1364v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  uint64_t __temp1365v__=0;
  char* __temp1366v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp607v(_key,&__temp1364v__unsafe_ptr,&__temp1364v__dat__pos,&__temp1364v__dat__length,&__temp1364v__dat__first);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/map.s line 5 column 11\n   unhandled error from str(cstr c) -> (const str)\n");
  goto __temp_failure;
  }
  key__unsafe_ptr=__temp1364v__unsafe_ptr;
  key__dat__pos=__temp1364v__dat__pos;
  key__dat__length=__temp1364v__dat__length;
  key__dat__first=__temp1364v__dat__first;
  __temp_errcode=find__temp1265v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first,&__temp1365v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/map.s line 6 column 31\n   unhandled error from find(const str[] element size 25, const str) -> (mut nat)\n");
  goto __temp_failure;
  }
  __temp_errcode=get__temp529v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,__temp1365v__,&__temp1366v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m std/map.s line 6 column 24\n   unhandled error from get(const any[] element size 0, nat i) -> (any ptr unsafe_ptr)\n");
  goto __temp_failure;
  }
  unsafe_ptr=__temp1366v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1455v=values__unsafe_ptr;
  *__temp1456v=values__unsafe_size;
  *__temp1457v=values__unsafe_align;
  *__temp1458v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp710v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp711v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1375v() {
  char* __temp1376v__unsafe_ptr=0;
  uint64_t __temp1376v__unsafe_size=0;
  uint64_t __temp1376v__unsafe_align=0;
  char* __temp1377v__unsafe_ptr=0;
  uint64_t __temp1377v__unsafe_size=0;
  uint64_t __temp1377v__unsafe_align=0;
  uint64_t __temp1378v=0;
  char* __temp1379v__unsafe_ptr=0;
  uint64_t __temp1379v__unsafe_size=0;
  uint64_t __temp1379v__unsafe_align=0;
  char __temp1380v____temp465v__=0;
  char* __temp1381v__unsafe_ptr=0;
  uint64_t __temp1381v__unsafe_size=0;
  uint64_t __temp1381v__unsafe_align=0;
  char* __temp1382v__unsafe_ptr=0;
  uint64_t __temp1382v__unsafe_size=0;
  uint64_t __temp1382v__unsafe_align=0;
  uint64_t __temp1383v=0;
  char* __temp1384v__unsafe_ptr=0;
  uint64_t __temp1384v__unsafe_size=0;
  uint64_t __temp1384v__unsafe_align=0;
  char __temp1385v____temp465v__=0;
  char* map__temp1379v__unsafe_ptr=0;
  uint64_t map__temp1379v__unsafe_size=0;
  uint64_t map__temp1379v__unsafe_align=0;
  char* map__temp1384v__unsafe_ptr=0;
  uint64_t map__temp1384v__unsafe_size=0;
  uint64_t map__temp1384v__unsafe_align=0;
  char* __temp1387v__=0;
  char* __temp1388v__unsafe_ptr=0;
  uint64_t __temp1388v__dat__pos=0;
  uint64_t __temp1388v__dat__length=0;
  char __temp1388v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1355v(&__temp1376v__unsafe_ptr,&__temp1376v__unsafe_size,&__temp1376v__unsafe_align);
  __temp1377v__unsafe_ptr=__temp1376v__unsafe_ptr;
  __temp1377v__unsafe_size=__temp1376v__unsafe_size;
  __temp1377v__unsafe_align=__temp1376v__unsafe_align;
  __temp1378v=128;
  __temp_errcode=alloc__temp463v(&__temp1377v__unsafe_ptr,&__temp1377v__unsafe_size,&__temp1377v__unsafe_align,__temp1378v,&__temp1379v__unsafe_ptr,&__temp1379v__unsafe_size,&__temp1379v__unsafe_align);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m tests/test.s line 5 column 12\n   unhandled error from alloc(mut any[] element size 0, nat size) -> (mut any[] element size 0)\n");
  goto __temp_failure;
  }
  str__temp_buffer__buffer__temp1355v(&__temp1381v__unsafe_ptr,&__temp1381v__unsafe_size,&__temp1381v__unsafe_align);
  __temp1382v__unsafe_ptr=__temp1381v__unsafe_ptr;
  __temp1382v__unsafe_size=__temp1381v__unsafe_size;
  __temp1382v__unsafe_align=__temp1381v__unsafe_align;
  __temp1383v=128;
  __temp_errcode=alloc__temp463v(&__temp1382v__unsafe_ptr,&__temp1382v__unsafe_size,&__temp1382v__unsafe_align,__temp1383v,&__temp1384v__unsafe_ptr,&__temp1384v__unsafe_size,&__temp1384v__unsafe_align);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m tests/test.s line 5 column 35\n   unhandled error from alloc(mut any[] element size 0, nat size) -> (mut any[] element size 0)\n");
  goto __temp_failure;
  }
  map__temp1379v__unsafe_ptr=__temp1379v__unsafe_ptr;
  map__temp1379v__unsafe_size=__temp1379v__unsafe_size;
  map__temp1379v__unsafe_align=__temp1379v__unsafe_align;
  map__temp1384v__unsafe_ptr=__temp1384v__unsafe_ptr;
  map__temp1384v__unsafe_size=__temp1384v__unsafe_size;
  map__temp1384v__unsafe_align=__temp1384v__unsafe_align;
  __temp_errcode=get__temp1363v(map__temp1379v__unsafe_ptr,map__temp1379v__unsafe_size,map__temp1379v__unsafe_align,&map__temp1384v__unsafe_ptr,&map__temp1384v__unsafe_size,&map__temp1384v__unsafe_align,__temp1386v,&__temp1387v__);
  if(__temp_errcode){
  printf("%s\033[31mat\033[0m tests/test.s line 7 column 14\n   unhandled error from get(const str[] element size 25, any[] element size 0, cstr _key) -> (any ptr unsafe_ptr)\n");
  goto __temp_failure;
  }
  if(!__temp1387v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 7 column 14\n");
  goto __temp_failure;
  }
  memcpy(&__temp1388v__unsafe_ptr,__temp1387v__,8);
  if(!__temp1387v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 7 column 14\n");
  goto __temp_failure;
  }
  memcpy(&__temp1388v__dat__pos,__temp1387v__+8,8);
  if(!__temp1387v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 7 column 14\n");
  goto __temp_failure;
  }
  memcpy(&__temp1388v__dat__length,__temp1387v__+16,8);
  if(!__temp1387v__){
  printf("%s\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 7 column 14\n");
  goto __temp_failure;
  }
  memcpy(&__temp1388v__dat__first,__temp1387v__+24,1);
  print__temp710v(__temp1388v__unsafe_ptr,__temp1388v__dat__pos,__temp1388v__dat__length,__temp1388v__dat__first);
  
  __temp_failure:exists__temp408v(__temp1384v__unsafe_ptr,&__temp1385v____temp465v__);
  if(__temp1385v____temp465v__){
  __temp1384v__unsafe_size=0;
  __temp1384v__unsafe_size=__temp1384v__unsafe_size;
  free__temp457v(&__temp1384v__unsafe_ptr);
  }
  exists__temp408v(__temp1379v__unsafe_ptr,&__temp1380v____temp465v__);
  if(__temp1380v____temp465v__){
  __temp1379v__unsafe_size=0;
  __temp1379v__unsafe_size=__temp1379v__unsafe_size;
  free__temp457v(&__temp1379v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1375v();return 0;}