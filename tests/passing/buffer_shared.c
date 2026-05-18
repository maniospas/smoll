#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[34] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1248v(char** __temp1268v, uint64_t* __temp1269v, uint16_t* __temp1270v, uint16_t* __temp1271v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1268v=unsafe_ptr;
  *__temp1269v=unsafe_size;
  *__temp1270v=unsafe_offset;
  *__temp1271v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1272v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1273v) {
  char* allocated=*__temp1273v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1273v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1274v) {
  int value=0;
  *__temp1274v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1275v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1275v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1276v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1277v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1279v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1279v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1280v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1281v) {
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
  *__temp1281v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1282v, uint64_t* __temp1283v, uint16_t* __temp1284v, uint16_t* __temp1285v, uint64_t size, char** __temp1286v, uint64_t* __temp1287v, uint16_t* __temp1288v, uint16_t* __temp1289v) {
  char* buffer__unsafe_ptr=*__temp1282v;
  uint64_t buffer__unsafe_size=*__temp1283v;
  uint16_t buffer__unsafe_offset=*__temp1284v;
  uint16_t buffer__unsafe_align=*__temp1285v;
  int __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp477v__=0;
  uint64_t __temp478v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t bytes=0;
  char* __temp484v__=0;
  uint64_t __temp485v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  neq__temp142v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  nat__temp465v(buffer__unsafe_align,&__temp477v__);
  mul__temp194v(__temp477v__,size,&__temp478v__);
  zero__temp462v(buffer__unsafe_ptr,__temp476v,__temp478v__);
  }
  goto __temp_return;
  }
  __temp480v=0;
  neq__temp142v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  bytes=__temp483v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  __temp485v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp485v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp470v__);
  if(__temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1282v=buffer__unsafe_ptr;
  *__temp1283v=buffer__unsafe_size;
  *__temp1284v=buffer__unsafe_offset;
  *__temp1285v=buffer__unsafe_align;
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_offset;
  *__temp1289v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1290v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1290v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1291v) {
  *__temp1291v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1292v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp460v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated__unsafe_ptr){
  new_allocated=realloc(allocated__unsafe_ptr,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=9;
  goto __temp_failure;
  }
  attach_type__temp20v(new_allocated,allocated__unsafe_ptr,&__temp460v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1292v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1293v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1293v=z;
}

static inline __attribute__((always_inline)) int resize__temp507v(char** __temp1294v, uint64_t* __temp1295v, uint16_t* __temp1296v, uint16_t* __temp1297v, uint64_t size, char** __temp1298v, uint64_t* __temp1299v, uint16_t* __temp1300v, uint16_t* __temp1301v) {
  char* buffer__unsafe_ptr=*__temp1294v;
  uint64_t buffer__unsafe_size=*__temp1295v;
  uint16_t buffer__unsafe_offset=*__temp1296v;
  uint16_t buffer__unsafe_align=*__temp1297v;
  char __temp508v__=0;
  uint64_t __temp509v=0;
  char __temp510v__=0;
  uint64_t __temp511v=0;
  uint64_t __temp513v=0;
  char __temp514v__=0;
  uint64_t __temp515v__=0;
  uint64_t __temp516v=0;
  char __temp517v__=0;
  uint64_t __temp518v__=0;
  uint64_t __temp519v=0;
  char __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t __temp522v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp523v__=0;
  uint64_t __temp524v__=0;
  uint64_t bytes=0;
  char* __temp525v__=0;
  char __temp526v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp508v__);
  if(__temp508v__){
  goto __temp_return;
  }
  __temp509v=0;
  eq__temp118v(size,__temp509v,&__temp510v__);
  if(__temp510v__){
  __temp511v=0;
  buffer__unsafe_size=__temp511v;
  free__temp461v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp513v=0;
  eq__temp118v(buffer__unsafe_size,__temp513v,&__temp514v__);
  if(__temp514v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_offset,&__temp515v__);
  __temp516v=0;
  neq__temp142v(__temp515v__,__temp516v,&__temp517v__);
  if(__temp517v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp518v__);
  __temp519v=1;
  neq__temp142v(__temp518v__,__temp519v,&__temp520v__);
  if(__temp520v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp521v__);
  mul__temp194v(buffer__unsafe_size,__temp521v__,&__temp522v__);
  prev_bytes=__temp522v__;
  buffer__unsafe_size=size;
  nat__temp465v(buffer__unsafe_align,&__temp523v__);
  mul__temp194v(__temp523v__,size,&__temp524v__);
  bytes=__temp524v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp525v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp525v__;
  lt__temp247v(prev_bytes,bytes,&__temp526v__);
  if(__temp526v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1294v=buffer__unsafe_ptr;
  *__temp1295v=buffer__unsafe_size;
  *__temp1296v=buffer__unsafe_offset;
  *__temp1297v=buffer__unsafe_align;
  *__temp1298v=buffer__unsafe_ptr;
  *__temp1299v=buffer__unsafe_size;
  *__temp1300v=buffer__unsafe_offset;
  *__temp1301v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1302v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1303v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1303v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp544v(char** __temp1304v, uint64_t* __temp1305v, uint16_t* __temp1306v, uint16_t* __temp1307v, uint64_t i, char** __temp1308v) {
  char* buffer__unsafe_ptr=*__temp1304v;
  uint64_t buffer__unsafe_size=*__temp1305v;
  uint16_t buffer__unsafe_offset=*__temp1306v;
  uint16_t buffer__unsafe_align=*__temp1307v;
  char __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  char* __temp550v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp545v__);
  if(__temp545v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp546v__);
  mul__temp194v(i,__temp546v__,&__temp547v__);
  nat__temp465v(buffer__unsafe_offset,&__temp548v__);
  add__temp170v(__temp547v__,__temp548v__,&__temp549v__);
  add__temp463v(buffer__unsafe_ptr,__temp549v__,&__temp550v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1304v=buffer__unsafe_ptr;
  *__temp1305v=buffer__unsafe_size;
  *__temp1306v=buffer__unsafe_offset;
  *__temp1307v=buffer__unsafe_align;
  *__temp1308v=__temp550v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1309v) {
  goto __temp_return;
  __temp_return:
  *__temp1309v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1310v) {
  char __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  char* __temp557v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp552v__);
  if(__temp552v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp553v__);
  mul__temp194v(i,__temp553v__,&__temp554v__);
  nat__temp465v(buffer__unsafe_offset,&__temp555v__);
  add__temp170v(__temp554v__,__temp555v__,&__temp556v__);
  add__temp463v(buffer__unsafe_ptr,__temp556v__,&__temp557v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1310v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1247v() {
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __temp1252v=0;
  char* __temp1253v__unsafe_ptr=0;
  uint64_t __temp1253v__unsafe_size=0;
  uint16_t __temp1253v__unsafe_offset=0;
  uint16_t __temp1253v__unsafe_align=0;
  char __temp1254v____temp470v__=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint16_t __temp1256v__unsafe_offset=0;
  uint16_t __temp1256v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__=0;
  double __temp1259v=0;
  uint64_t __temp1260v__=0;
  uint64_t __temp1262v__=0;
  uint64_t __temp1264v=0;
  char* __temp1265v__=0;
  double __temp1266v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1248v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_offset=__temp1250v__unsafe_offset;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  buf1__unsafe_ptr=__temp1251v__unsafe_ptr;
  buf1__unsafe_size=__temp1251v__unsafe_size;
  buf1__unsafe_offset=__temp1251v__unsafe_offset;
  buf1__unsafe_align=__temp1251v__unsafe_align;
  __temp1252v=20;
  __temp_errcode=alloc__temp468v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_offset,&buf1__unsafe_align,__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_offset,&__temp1253v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=10;
  __temp_errcode=resize__temp507v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_offset,&buf1__unsafe_align,__temp1255v,&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_offset,&__temp1256v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_offset=buf1__unsafe_offset;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1257v=0;
  __temp_errcode=mutget__temp544v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_offset,&buf2__unsafe_align,__temp1257v,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1259v=1.0;
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&__temp1259v,8);
  len__temp558v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_offset,buf1__unsafe_align,&__temp1260v__);
  print__temp376v(__temp1260v__);
  len__temp558v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_offset,buf2__unsafe_align,&__temp1262v__);
  print__temp376v(__temp1262v__);
  __temp1264v=0;
  __temp_errcode=get__temp551v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_offset,buf1__unsafe_align,__temp1264v,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1265v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1266v__value,__temp1265v__,8);
  print__temp368v(__temp1266v__value);
  
  __temp_failure:exists__temp412v(__temp1253v__unsafe_ptr,&__temp1254v____temp470v__);
  if(__temp1254v____temp470v__){
  __temp1253v__unsafe_size=0;
  __temp1253v__unsafe_size=__temp1253v__unsafe_size;
  free__temp461v(&__temp1253v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1247v();return 0;}