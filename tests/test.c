#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1231v="a";
const char* const __temp1245v="this will never run due to out of bounds error";
const char* const __temp1238v="this must run at all costs";
static const char* __temp_all_errcodes[31] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1247v) {
  int value=0;
  *__temp1247v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1248v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1248v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1249v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp95v__;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1250v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1251v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1251v=__temp445v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1252v, uint64_t* __temp1253v, uint64_t* __temp1254v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1252v=unsafe_ptr;
  *__temp1253v=unsafe_size;
  *__temp1254v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1255v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1255v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1256v) {
  char* allocated=*__temp1256v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1256v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1257v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1257v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1258v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1259v) {
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
  *__temp1259v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1260v, uint64_t* __temp1261v, uint64_t* __temp1262v, uint64_t size, char** __temp1263v, uint64_t* __temp1264v, uint64_t* __temp1265v) {
  char* buffer__unsafe_ptr=*__temp1260v;
  uint64_t buffer__unsafe_size=*__temp1261v;
  uint64_t buffer__unsafe_align=*__temp1262v;
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
  *__temp1260v=buffer__unsafe_ptr;
  *__temp1261v=buffer__unsafe_size;
  *__temp1262v=buffer__unsafe_align;
  *__temp1263v=buffer__unsafe_ptr;
  *__temp1264v=buffer__unsafe_size;
  *__temp1265v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1266v, uint64_t* __temp1267v, uint64_t* __temp1268v) {
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
  *__temp1266v=__temp543v__unsafe_ptr;
  *__temp1267v=__temp543v__unsafe_size;
  *__temp1268v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1269v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1270v) {
  *__temp1270v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1271v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1271v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1272v, uint64_t* __temp1273v, uint64_t* __temp1274v, uint64_t i, char** __temp1275v) {
  char* buffer__unsafe_ptr=*__temp1272v;
  uint64_t buffer__unsafe_size=*__temp1273v;
  uint64_t buffer__unsafe_align=*__temp1274v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1272v=buffer__unsafe_ptr;
  *__temp1273v=buffer__unsafe_size;
  *__temp1274v=buffer__unsafe_align;
  *__temp1275v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp623v(const char* s, char* __temp1276v) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __temp_return;
  __temp_return:
  *__temp1276v=c;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1277v) {
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
  *__temp1277v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp792v(char c) {
  int __temp793v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%c%s",c,endl);
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void nocatch__temp14v() {
}

static inline __attribute__((always_inline)) int main__temp1222v() {
  char __temp1223v=0;
  uint64_t __temp1224v=0;
  uint64_t __temp1225v__=0;
  char* __temp1226v__unsafe_ptr=0;
  uint64_t __temp1226v__unsafe_size=0;
  uint64_t __temp1226v__unsafe_align=0;
  char __temp1227v____temp544v____temp469v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  char __temp1228v=0;
  uint64_t __temp1229v=0;
  char* __temp1230v__=0;
  char __temp1232v__=0;
  char __temp1233v=0;
  uint64_t __temp1234v=0;
  char* __temp1235v__=0;
  char __temp1236v__value=0;
  uint64_t __temp1241v=0;
  char* __temp1242v__=0;
  char __temp1243v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1224v=4;
  KB__temp443v(__temp1224v,&__temp1225v__);
  __temp_complain=alloc__temp538v(__temp1225v__,&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align);
  __temp1223v=__temp_complain;
  x__unsafe_ptr=__temp1226v__unsafe_ptr;
  x__unsafe_size=__temp1226v__unsafe_size;
  x__unsafe_align=__temp1226v__unsafe_align;
  __temp1223v=__temp1223v==0;
  __temp1229v=0;
  __temp_complain=mutget__temp529v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1229v,&__temp1230v__);
  __temp1228v=__temp_complain;
  char__temp623v(__temp1231v,&__temp1232v__);
  if(!__temp1230v__){
  __temp_complain=2;
  }
  else{
  memcpy(__temp1230v__,&__temp1232v__,1);
  }
  __temp1228v=__temp1228v==0;
  __temp1234v=0;
  __temp_complain=get__temp533v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1234v,&__temp1235v__);
  __temp1233v=__temp_complain;
  if(!__temp1235v__){
  __temp_complain=2;
  }
  else{
  memcpy(&__temp1236v__value,__temp1235v__,1);
  }
  print__temp792v(__temp1236v__value);
  __temp1233v=__temp1233v==0;
  print__temp363v(__temp1238v);
  nocatch__temp14v();
  __temp1241v=10000;
  __temp_errcode=get__temp533v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1241v,&__temp1242v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1242v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1243v__value,__temp1242v__,1);
  print__temp792v(__temp1243v__value);
  print__temp363v(__temp1245v);
  
  __temp_failure:exists__temp412v(__temp1226v__unsafe_ptr,&__temp1227v____temp544v____temp469v__);
  if(__temp1227v____temp544v____temp469v__){
  __temp1226v__unsafe_size=0;
  __temp1226v__unsafe_size=__temp1226v__unsafe_size;
  free__temp461v(&__temp1226v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1222v();return 0;}