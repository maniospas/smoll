#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1249v(char** __temp1265v, uint64_t* __temp1266v, uint16_t* __temp1267v, uint16_t* __temp1268v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1265v=unsafe_ptr;
  *__temp1266v=unsafe_size;
  *__temp1267v=unsafe_offset;
  *__temp1268v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1269v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1270v) {
  char* allocated=*__temp1270v;
  if(allocated){
  free(allocated);
  }
  *__temp1270v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1271v) {
  int value=0;
  *__temp1271v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1272v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1272v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1273v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1273v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1274v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1275v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1275v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1276v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1276v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1277v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1278v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1279v) {
  char* allocated=0;
  char __temp460v__=0;
  char __temp461v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  exists__temp412v(allocated,&__temp460v__);
  not__temp26v(__temp460v__,&__temp461v__);
  if(__temp461v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1279v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1280v, uint64_t* __temp1281v, uint16_t* __temp1282v, uint16_t* __temp1283v, uint64_t size, char** __temp1284v, uint64_t* __temp1285v, uint16_t* __temp1286v, uint16_t* __temp1287v) {
  char* buffer__unsafe_ptr=*__temp1280v;
  uint64_t buffer__unsafe_size=*__temp1281v;
  uint16_t buffer__unsafe_offset=*__temp1282v;
  uint16_t buffer__unsafe_align=*__temp1283v;
  int __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  char* __temp485v__unsafe_ptr=0;
  uint64_t __temp485v__unsafe_size=0;
  uint16_t __temp485v__unsafe_offset=0;
  uint16_t __temp485v__unsafe_align=0;
  uint64_t __temp486v=0;
  char __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t bytes=0;
  char* __temp490v__=0;
  uint64_t __temp491v=0;
  char* __temp493v__unsafe_ptr=0;
  uint64_t __temp493v__unsafe_size=0;
  uint16_t __temp493v__unsafe_offset=0;
  uint16_t __temp493v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp478v__);
  if(__temp478v__){
  __temp479v=0;
  neq__temp142v(size,__temp479v,&__temp480v__);
  if(__temp480v__){
  __temp481v=0;
  nat__temp470v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  zero__temp467v(buffer__unsafe_ptr,__temp481v,__temp483v__);
  }
  __temp485v__unsafe_ptr=buffer__unsafe_ptr;
  __temp485v__unsafe_size=buffer__unsafe_size;
  __temp485v__unsafe_offset=buffer__unsafe_offset;
  __temp485v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp486v=0;
  neq__temp142v(buffer__unsafe_size,__temp486v,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp488v__);
  mul__temp194v(__temp488v__,size,&__temp489v__);
  bytes=__temp489v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp490v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp490v__;
  __temp491v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp491v,bytes);
  __temp493v__unsafe_ptr=buffer__unsafe_ptr;
  __temp493v__unsafe_size=buffer__unsafe_size;
  __temp493v__unsafe_offset=buffer__unsafe_offset;
  __temp493v__unsafe_align=buffer__unsafe_align;
  __temp485v__unsafe_ptr=__temp493v__unsafe_ptr;
  __temp485v__unsafe_size=__temp493v__unsafe_size;
  __temp485v__unsafe_offset=__temp493v__unsafe_offset;
  __temp485v__unsafe_align=__temp493v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp485v__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  __temp485v__unsafe_size=0;
  __temp485v__unsafe_size=__temp485v__unsafe_size;
  __temp485v__unsafe_ptr=__temp485v__unsafe_ptr;
  free__temp466v(&__temp485v__unsafe_ptr);
  }
  __temp_return:
  *__temp1280v=buffer__unsafe_ptr;
  *__temp1281v=buffer__unsafe_size;
  *__temp1282v=buffer__unsafe_offset;
  *__temp1283v=buffer__unsafe_align;
  *__temp1284v=__temp485v__unsafe_ptr;
  *__temp1285v=__temp485v__unsafe_size;
  *__temp1286v=__temp485v__unsafe_offset;
  *__temp1287v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1288v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1289v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1290v) {
  *__temp1290v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1291v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1291v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1292v, uint64_t* __temp1293v, uint16_t* __temp1294v, uint16_t* __temp1295v, uint64_t i, char** __temp1296v) {
  char* buffer__unsafe_ptr=*__temp1292v;
  uint64_t buffer__unsafe_size=*__temp1293v;
  uint16_t buffer__unsafe_offset=*__temp1294v;
  uint16_t buffer__unsafe_align=*__temp1295v;
  char __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  char* __temp549v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp544v__);
  if(__temp544v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp545v__);
  mul__temp194v(i,__temp545v__,&__temp546v__);
  nat__temp470v(buffer__unsafe_offset,&__temp547v__);
  add__temp170v(__temp546v__,__temp547v__,&__temp548v__);
  add__temp468v(buffer__unsafe_ptr,__temp548v__,&__temp549v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_offset;
  *__temp1295v=buffer__unsafe_align;
  *__temp1296v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1297v) {
  char* new_allocated=0;
  char __temp463v__=0;
  char __temp464v__=0;
  char* __temp465v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__temp412v(new_allocated,&__temp463v__);
  not__temp26v(__temp463v__,&__temp464v__);
  if(__temp464v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  allocated=new_allocated;
  attach_type__temp20v(new_allocated,allocated,&__temp465v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1297v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1298v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1299v, uint64_t* __temp1300v, uint16_t* __temp1301v, uint16_t* __temp1302v, uint64_t size, char** __temp1303v, uint64_t* __temp1304v, uint16_t* __temp1305v, uint16_t* __temp1306v) {
  char* buffer__unsafe_ptr=*__temp1299v;
  uint64_t buffer__unsafe_size=*__temp1300v;
  uint16_t buffer__unsafe_offset=*__temp1301v;
  uint16_t buffer__unsafe_align=*__temp1302v;
  char __temp517v__=0;
  uint64_t __temp518v=0;
  char __temp519v__=0;
  uint64_t __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  uint64_t bytes=0;
  char* __temp524v__=0;
  char __temp525v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp517v__);
  if(__temp517v__){
  goto __temp_return;
  }
  __temp518v=0;
  eq__temp118v(buffer__unsafe_size,__temp518v,&__temp519v__);
  if(__temp519v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp520v__);
  mul__temp194v(buffer__unsafe_size,__temp520v__,&__temp521v__);
  prev_bytes=__temp521v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp522v__);
  mul__temp194v(__temp522v__,size,&__temp523v__);
  bytes=__temp523v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp524v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp524v__;
  lt__temp247v(prev_bytes,bytes,&__temp525v__);
  if(__temp525v__){
  zero__temp467v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_offset;
  *__temp1302v=buffer__unsafe_align;
  *__temp1303v=buffer__unsafe_ptr;
  *__temp1304v=buffer__unsafe_size;
  *__temp1305v=buffer__unsafe_offset;
  *__temp1306v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1307v) {
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
  *__temp1307v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1248v() {
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint16_t __temp1252v__unsafe_offset=0;
  uint16_t __temp1252v__unsafe_align=0;
  char* li__unsafe_ptr=0;
  uint64_t li__unsafe_size=0;
  uint16_t li__unsafe_offset=0;
  uint16_t li__unsafe_align=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  char __temp1255v____temp475v__=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  uint64_t __temp1259v=0;
  char* __temp1260v__unsafe_ptr=0;
  uint64_t __temp1260v__unsafe_size=0;
  uint16_t __temp1260v__unsafe_offset=0;
  uint16_t __temp1260v__unsafe_align=0;
  uint64_t __temp1261v=0;
  char* __temp1262v__=0;
  double __temp1263v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_offset=__temp1251v__unsafe_offset;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=10;
  __temp_errcode=alloc__temp473v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1256v=0;
  __temp_errcode=mutget__temp543v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1256v,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=1.0;
  if(!__temp1257v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1258v,8);
  __temp1259v=20;
  __temp_errcode=resize__temp516v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1259v,&__temp1260v__unsafe_ptr,&__temp1260v__unsafe_size,&__temp1260v__unsafe_offset,&__temp1260v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1261v=0;
  __temp_errcode=get__temp550v(__temp1252v__unsafe_ptr,__temp1252v__unsafe_size,__temp1252v__unsafe_offset,__temp1252v__unsafe_align,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1263v__z,__temp1262v__,8);
  print__temp368v(__temp1263v__z);
  
  __temp_failure:exists__temp412v(__temp1254v__unsafe_ptr,&__temp1255v____temp475v__);
  if(__temp1255v____temp475v__){
  __temp1254v__unsafe_size=0;
  __temp1254v__unsafe_size=__temp1254v__unsafe_size;
  __temp1254v__unsafe_ptr=__temp1254v__unsafe_ptr;
  free__temp466v(&__temp1254v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}