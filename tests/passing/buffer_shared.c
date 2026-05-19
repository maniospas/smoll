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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1249v(char** __temp1269v, uint64_t* __temp1270v, uint16_t* __temp1271v, uint16_t* __temp1272v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1269v=unsafe_ptr;
  *__temp1270v=unsafe_size;
  *__temp1271v=unsafe_offset;
  *__temp1272v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1273v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1274v) {
  char* allocated=*__temp1274v;
  if(allocated){
  free(allocated);
  }
  *__temp1274v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1275v) {
  int value=0;
  *__temp1275v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1276v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1277v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1277v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1279v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1280v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1280v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1281v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1282v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1283v) {
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
  *__temp1283v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1284v, uint64_t* __temp1285v, uint16_t* __temp1286v, uint16_t* __temp1287v, uint64_t size, char** __temp1288v, uint64_t* __temp1289v, uint16_t* __temp1290v, uint16_t* __temp1291v) {
  char* buffer__unsafe_ptr=*__temp1284v;
  uint64_t buffer__unsafe_size=*__temp1285v;
  uint16_t buffer__unsafe_offset=*__temp1286v;
  uint16_t buffer__unsafe_align=*__temp1287v;
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
  *__temp1284v=buffer__unsafe_ptr;
  *__temp1285v=buffer__unsafe_size;
  *__temp1286v=buffer__unsafe_offset;
  *__temp1287v=buffer__unsafe_align;
  *__temp1288v=__temp485v__unsafe_ptr;
  *__temp1289v=__temp485v__unsafe_size;
  *__temp1290v=__temp485v__unsafe_offset;
  *__temp1291v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1292v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1293v) {
  *__temp1293v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1294v) {
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
  *__temp1294v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1295v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1296v, uint64_t* __temp1297v, uint16_t* __temp1298v, uint16_t* __temp1299v, uint64_t size, char** __temp1300v, uint64_t* __temp1301v, uint16_t* __temp1302v, uint16_t* __temp1303v) {
  char* buffer__unsafe_ptr=*__temp1296v;
  uint64_t buffer__unsafe_size=*__temp1297v;
  uint16_t buffer__unsafe_offset=*__temp1298v;
  uint16_t buffer__unsafe_align=*__temp1299v;
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
  *__temp1296v=buffer__unsafe_ptr;
  *__temp1297v=buffer__unsafe_size;
  *__temp1298v=buffer__unsafe_offset;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=buffer__unsafe_ptr;
  *__temp1301v=buffer__unsafe_size;
  *__temp1302v=buffer__unsafe_offset;
  *__temp1303v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1304v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1305v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1305v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1306v, uint64_t* __temp1307v, uint16_t* __temp1308v, uint16_t* __temp1309v, uint64_t i, char** __temp1310v) {
  char* buffer__unsafe_ptr=*__temp1306v;
  uint64_t buffer__unsafe_size=*__temp1307v;
  uint16_t buffer__unsafe_offset=*__temp1308v;
  uint16_t buffer__unsafe_align=*__temp1309v;
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
  *__temp1306v=buffer__unsafe_ptr;
  *__temp1307v=buffer__unsafe_size;
  *__temp1308v=buffer__unsafe_offset;
  *__temp1309v=buffer__unsafe_align;
  *__temp1310v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1311v) {
  goto __temp_return;
  __temp_return:
  *__temp1311v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1312v) {
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
  *__temp1312v=__temp556v__;
  
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
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  char __temp1255v____temp475v__=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__unsafe_size=0;
  uint16_t __temp1257v__unsafe_offset=0;
  uint16_t __temp1257v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __temp1258v=0;
  char* __temp1259v__=0;
  double __temp1260v=0;
  uint64_t __temp1261v__=0;
  uint64_t __temp1263v__=0;
  uint64_t __temp1265v=0;
  char* __temp1266v__=0;
  double __temp1267v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_offset=__temp1251v__unsafe_offset;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=20;
  __temp_errcode=alloc__temp473v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1256v=10;
  __temp_errcode=resize__temp516v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1256v,&__temp1257v__unsafe_ptr,&__temp1257v__unsafe_size,&__temp1257v__unsafe_offset,&__temp1257v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=0;
  __temp_errcode=mutget__temp543v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1258v,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1260v=1.0;
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1259v__,&__temp1260v,8);
  len__temp557v(__temp1252v__unsafe_ptr,__temp1252v__unsafe_size,__temp1252v__unsafe_offset,__temp1252v__unsafe_align,&__temp1261v__);
  print__temp376v(__temp1252v__unsafe_size);
  len__temp557v(__temp1252v__unsafe_ptr,__temp1252v__unsafe_size,__temp1252v__unsafe_offset,__temp1252v__unsafe_align,&__temp1263v__);
  print__temp376v(__temp1252v__unsafe_size);
  __temp1265v=0;
  __temp_errcode=get__temp550v(__temp1252v__unsafe_ptr,__temp1252v__unsafe_size,__temp1252v__unsafe_offset,__temp1252v__unsafe_align,__temp1265v,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1266v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1267v__value,__temp1266v__,8);
  print__temp368v(__temp1267v__value);
  
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