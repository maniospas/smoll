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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1249v(char** __temp1278v, uint64_t* __temp1279v, uint16_t* __temp1280v, uint16_t* __temp1281v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1278v=unsafe_ptr;
  *__temp1279v=unsafe_size;
  *__temp1280v=unsafe_offset;
  *__temp1281v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1282v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1283v) {
  char* allocated=*__temp1283v;
  if(allocated){
  free(allocated);
  }
  *__temp1283v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1284v) {
  int value=0;
  *__temp1284v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1285v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1285v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1286v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1286v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1287v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1288v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1289v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1289v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1290v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1290v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1291v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1292v) {
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
  *__temp1292v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1293v, uint64_t* __temp1294v, uint16_t* __temp1295v, uint16_t* __temp1296v, uint64_t size, char** __temp1297v, uint64_t* __temp1298v, uint16_t* __temp1299v, uint16_t* __temp1300v) {
  char* buffer__unsafe_ptr=*__temp1293v;
  uint64_t buffer__unsafe_size=*__temp1294v;
  uint16_t buffer__unsafe_offset=*__temp1295v;
  uint16_t buffer__unsafe_align=*__temp1296v;
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
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_offset;
  *__temp1296v=buffer__unsafe_align;
  *__temp1297v=__temp485v__unsafe_ptr;
  *__temp1298v=__temp485v__unsafe_size;
  *__temp1299v=__temp485v__unsafe_offset;
  *__temp1300v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1301v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1301v=z;
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

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1303v) {
  *__temp1303v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1304v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1304v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1305v, uint64_t* __temp1306v, uint16_t* __temp1307v, uint16_t* __temp1308v, uint64_t i, char** __temp1309v) {
  char* buffer__unsafe_ptr=*__temp1305v;
  uint64_t buffer__unsafe_size=*__temp1306v;
  uint16_t buffer__unsafe_offset=*__temp1307v;
  uint16_t buffer__unsafe_align=*__temp1308v;
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
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_offset;
  *__temp1308v=buffer__unsafe_align;
  *__temp1309v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1248v(char** __temp1310v, uint64_t* __temp1311v, uint16_t* __temp1312v, uint16_t* __temp1313v) {
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint16_t __temp1252v__unsafe_offset=0;
  uint16_t __temp1252v__unsafe_align=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  char __temp1255v____temp475v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  char* __temp1259v__unsafe_ptr=0;
  uint64_t __temp1259v__unsafe_size=0;
  uint16_t __temp1259v__unsafe_offset=0;
  uint16_t __temp1259v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint16_t y__unsafe_offset=0;
  uint16_t y__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_offset=__temp1251v__unsafe_offset;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=1;
  __temp_errcode=alloc__temp473v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1254v__unsafe_ptr;
  x__unsafe_size=__temp1254v__unsafe_size;
  x__unsafe_offset=__temp1254v__unsafe_offset;
  x__unsafe_align=__temp1254v__unsafe_align;
  __temp1256v=0;
  __temp_errcode=mutget__temp543v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1256v,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=1.0;
  if(!__temp1257v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1258v,8);
  float____temp_buffer____buffer__temp1249v(&__temp1259v__unsafe_ptr,&__temp1259v__unsafe_size,&__temp1259v__unsafe_offset,&__temp1259v__unsafe_align);
  y__unsafe_ptr=__temp1259v__unsafe_ptr;
  y__unsafe_size=__temp1259v__unsafe_size;
  y__unsafe_offset=__temp1259v__unsafe_offset;
  y__unsafe_align=__temp1259v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(x__unsafe_ptr,&__temp1255v____temp475v__);
  if(__temp1255v____temp475v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  x__unsafe_ptr=x__unsafe_ptr;
  free__temp466v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1310v=x__unsafe_ptr;
  *__temp1311v=x__unsafe_size;
  *__temp1312v=x__unsafe_offset;
  *__temp1313v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1314v) {
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
  *__temp1314v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1315v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1316v, uint64_t* __temp1317v, uint16_t* __temp1318v, uint16_t* __temp1319v, uint64_t size, char** __temp1320v, uint64_t* __temp1321v, uint16_t* __temp1322v, uint16_t* __temp1323v) {
  char* buffer__unsafe_ptr=*__temp1316v;
  uint64_t buffer__unsafe_size=*__temp1317v;
  uint16_t buffer__unsafe_offset=*__temp1318v;
  uint16_t buffer__unsafe_align=*__temp1319v;
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
  *__temp1316v=buffer__unsafe_ptr;
  *__temp1317v=buffer__unsafe_size;
  *__temp1318v=buffer__unsafe_offset;
  *__temp1319v=buffer__unsafe_align;
  *__temp1320v=buffer__unsafe_ptr;
  *__temp1321v=buffer__unsafe_size;
  *__temp1322v=buffer__unsafe_offset;
  *__temp1323v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1324v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1324v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp535v(char** __temp1325v, uint64_t* __temp1326v, uint16_t* __temp1327v, uint16_t* __temp1328v, char** __temp1329v) {
  char* buffer__unsafe_ptr=*__temp1325v;
  uint64_t buffer__unsafe_size=*__temp1326v;
  uint16_t buffer__unsafe_offset=*__temp1327v;
  uint16_t buffer__unsafe_align=*__temp1328v;
  uint64_t __temp536v=0;
  char __temp537v__=0;
  uint64_t __temp538v=0;
  uint64_t __temp539v__=0;
  uint64_t __temp540v__=0;
  uint64_t __temp541v__=0;
  char* __temp542v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp536v=0;
  eq__temp118v(__temp536v,buffer__unsafe_size,&__temp537v__);
  if(__temp537v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp538v=1;
  __temp_errcode=sub__temp347v(buffer__unsafe_size,__temp538v,&__temp539v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp540v__);
  mul__temp194v(__temp539v__,__temp540v__,&__temp541v__);
  add__temp468v(buffer__unsafe_ptr,__temp541v__,&__temp542v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1325v=buffer__unsafe_ptr;
  *__temp1326v=buffer__unsafe_size;
  *__temp1327v=buffer__unsafe_offset;
  *__temp1328v=buffer__unsafe_align;
  *__temp1329v=__temp542v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1260v(char** __temp1330v, uint64_t* __temp1331v, uint16_t* __temp1332v, uint16_t* __temp1333v) {
  char* x__unsafe_ptr=*__temp1330v;
  uint64_t x__unsafe_size=*__temp1331v;
  uint16_t x__unsafe_offset=*__temp1332v;
  uint16_t x__unsafe_align=*__temp1333v;
  uint64_t __temp1261v=0;
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint16_t __temp1262v__unsafe_offset=0;
  uint16_t __temp1262v__unsafe_align=0;
  char* __temp1263v__=0;
  double __temp1264v=0;
  char* __temp1265v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1261v=2;
  __temp_errcode=resize__temp516v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1261v,&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp535v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1264v=2.0;
  if(!__temp1263v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1263v__,&__temp1264v,8);
  __temp1265v=__temp1263v__;
  
  __temp_failure:*__temp1330v=x__unsafe_ptr;
  *__temp1331v=x__unsafe_size;
  *__temp1332v=x__unsafe_offset;
  *__temp1333v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1334v) {
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
  *__temp1334v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1335v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1335v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1336v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1336v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1266v() {
  char* __temp1267v__unsafe_ptr=0;
  uint64_t __temp1267v__unsafe_size=0;
  uint16_t __temp1267v__unsafe_offset=0;
  uint16_t __temp1267v__unsafe_align=0;
  char __temp1268v____temp1255v____temp475v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __temp1270v=0;
  char* __temp1271v__=0;
  double __temp1272v__value=0;
  uint64_t __temp1273v=0;
  char* __temp1274v__=0;
  double __temp1275v__value=0;
  double __temp1276v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1248v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=test2__temp1260v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1270v=0;
  __temp_errcode=get__temp550v(__temp1267v__unsafe_ptr,__temp1267v__unsafe_size,__temp1267v__unsafe_offset,__temp1267v__unsafe_align,__temp1270v,&__temp1271v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1271v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1272v__value,__temp1271v__,8);
  __temp1273v=1;
  __temp_errcode=get__temp550v(__temp1267v__unsafe_ptr,__temp1267v__unsafe_size,__temp1267v__unsafe_offset,__temp1267v__unsafe_align,__temp1273v,&__temp1274v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1274v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1275v__value,__temp1274v__,8);
  add__temp148v(__temp1272v__value,__temp1275v__value,&__temp1276v__);
  print__temp368v(__temp1276v__);
  
  __temp_failure:exists__temp412v(__temp1267v__unsafe_ptr,&__temp1268v____temp1255v____temp475v__);
  if(__temp1268v____temp1255v____temp475v__){
  __temp1267v__unsafe_size=0;
  __temp1267v__unsafe_size=__temp1267v__unsafe_size;
  __temp1267v__unsafe_ptr=__temp1267v__unsafe_ptr;
  free__temp466v(&__temp1267v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1266v();return 0;}