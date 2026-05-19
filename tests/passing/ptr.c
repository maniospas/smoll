#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1251v=",";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1260v(char** __temp1304v, uint64_t* __temp1305v, uint16_t* __temp1306v, uint16_t* __temp1307v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1304v=unsafe_ptr;
  *__temp1305v=unsafe_size;
  *__temp1306v=unsafe_offset;
  *__temp1307v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1308v) {
  int value=0;
  *__temp1308v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1309v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1309v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1310v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1310v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1311v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1312v) {
  char* allocated=*__temp1312v;
  if(allocated){
  free(allocated);
  }
  *__temp1312v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1313v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1314v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1314v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1315v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1316v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1317v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1317v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1318v) {
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
  *__temp1318v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1319v, uint64_t* __temp1320v, uint16_t* __temp1321v, uint16_t* __temp1322v, uint64_t size, char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v) {
  char* buffer__unsafe_ptr=*__temp1319v;
  uint64_t buffer__unsafe_size=*__temp1320v;
  uint16_t buffer__unsafe_offset=*__temp1321v;
  uint16_t buffer__unsafe_align=*__temp1322v;
  int __temp474v=0;
  uint64_t __temp475v=0;
  char __temp476v__=0;
  uint64_t __temp477v=0;
  char* ptr=0;
  char __temp479v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v=0;
  uint64_t __temp483v__=0;
  uint64_t __temp484v__=0;
  char* __temp486v__unsafe_ptr=0;
  uint64_t __temp486v__unsafe_size=0;
  uint16_t __temp486v__unsafe_offset=0;
  uint16_t __temp486v__unsafe_align=0;
  uint64_t __temp487v=0;
  char __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t __temp490v__=0;
  uint64_t bytes=0;
  char* __temp491v__=0;
  uint64_t __temp492v=0;
  char* __temp494v__unsafe_ptr=0;
  uint64_t __temp494v__unsafe_size=0;
  uint16_t __temp494v__unsafe_offset=0;
  uint16_t __temp494v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp479v__);
  if(__temp479v__){
  __temp480v=0;
  neq__temp142v(size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp482v=0;
  nat__temp470v(buffer__unsafe_align,&__temp483v__);
  mul__temp194v(__temp483v__,size,&__temp484v__);
  zero__temp467v(buffer__unsafe_ptr,__temp482v,__temp484v__);
  }
  __temp486v__unsafe_ptr=buffer__unsafe_ptr;
  __temp486v__unsafe_size=buffer__unsafe_size;
  __temp486v__unsafe_offset=buffer__unsafe_offset;
  __temp486v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp487v=0;
  neq__temp142v(buffer__unsafe_size,__temp487v,&__temp488v__);
  if(__temp488v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp489v__);
  mul__temp194v(__temp489v__,size,&__temp490v__);
  bytes=__temp490v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp491v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp491v__;
  __temp492v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp492v,bytes);
  __temp494v__unsafe_ptr=buffer__unsafe_ptr;
  __temp494v__unsafe_size=buffer__unsafe_size;
  __temp494v__unsafe_offset=buffer__unsafe_offset;
  __temp494v__unsafe_align=buffer__unsafe_align;
  __temp486v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp486v__unsafe_size=__temp494v__unsafe_size;
  __temp486v__unsafe_offset=__temp494v__unsafe_offset;
  __temp486v__unsafe_align=__temp494v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp475v=0;
  neq__temp142v(__temp486v__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp486v__unsafe_size=0;
  __temp486v__unsafe_size=__temp486v__unsafe_size;
  __temp486v__unsafe_ptr=__temp486v__unsafe_ptr;
  free__temp466v(&__temp486v__unsafe_ptr);
  }
  __temp_return:
  *__temp1319v=buffer__unsafe_ptr;
  *__temp1320v=buffer__unsafe_size;
  *__temp1321v=buffer__unsafe_offset;
  *__temp1322v=buffer__unsafe_align;
  *__temp1323v=__temp486v__unsafe_ptr;
  *__temp1324v=__temp486v__unsafe_size;
  *__temp1325v=__temp486v__unsafe_offset;
  *__temp1326v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1327v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1327v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1328v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1328v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1329v) {
  *__temp1329v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1330v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1330v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v, uint64_t i, char** __temp1335v) {
  char* buffer__unsafe_ptr=*__temp1331v;
  uint64_t buffer__unsafe_size=*__temp1332v;
  uint16_t buffer__unsafe_offset=*__temp1333v;
  uint16_t buffer__unsafe_align=*__temp1334v;
  char __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  char* __temp551v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp546v__);
  if(__temp546v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp547v__);
  mul__temp194v(i,__temp547v__,&__temp548v__);
  nat__temp470v(buffer__unsafe_offset,&__temp549v__);
  add__temp170v(__temp548v__,__temp549v__,&__temp550v__);
  add__temp468v(buffer__unsafe_ptr,__temp550v__,&__temp551v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1331v=buffer__unsafe_ptr;
  *__temp1332v=buffer__unsafe_size;
  *__temp1333v=buffer__unsafe_offset;
  *__temp1334v=buffer__unsafe_align;
  *__temp1335v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1336v) {
  char __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  uint64_t __temp557v__=0;
  char* __temp558v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp553v__);
  if(__temp553v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp554v__);
  mul__temp194v(i,__temp554v__,&__temp555v__);
  nat__temp470v(buffer__unsafe_offset,&__temp556v__);
  add__temp170v(__temp555v__,__temp556v__,&__temp557v__);
  add__temp468v(buffer__unsafe_ptr,__temp557v__,&__temp558v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1336v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1337v) {
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
  *__temp1337v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1338v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) int resize__temp518v(char** __temp1339v, uint64_t* __temp1340v, uint16_t* __temp1341v, uint16_t* __temp1342v, uint64_t size, char** __temp1343v, uint64_t* __temp1344v, uint16_t* __temp1345v, uint16_t* __temp1346v) {
  char* buffer__unsafe_ptr=*__temp1339v;
  uint64_t buffer__unsafe_size=*__temp1340v;
  uint16_t buffer__unsafe_offset=*__temp1341v;
  uint16_t buffer__unsafe_align=*__temp1342v;
  char __temp519v__=0;
  uint64_t __temp520v=0;
  char __temp521v__=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp524v__=0;
  uint64_t __temp525v__=0;
  uint64_t bytes=0;
  char* __temp526v__=0;
  char __temp527v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp519v__);
  if(__temp519v__){
  goto __temp_return;
  }
  __temp520v=0;
  eq__temp118v(buffer__unsafe_size,__temp520v,&__temp521v__);
  if(__temp521v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp522v__);
  mul__temp194v(buffer__unsafe_size,__temp522v__,&__temp523v__);
  prev_bytes=__temp523v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp524v__);
  mul__temp194v(__temp524v__,size,&__temp525v__);
  bytes=__temp525v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp526v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp526v__;
  lt__temp247v(prev_bytes,bytes,&__temp527v__);
  if(__temp527v__){
  zero__temp467v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1339v=buffer__unsafe_ptr;
  *__temp1340v=buffer__unsafe_size;
  *__temp1341v=buffer__unsafe_offset;
  *__temp1342v=buffer__unsafe_align;
  *__temp1343v=buffer__unsafe_ptr;
  *__temp1344v=buffer__unsafe_size;
  *__temp1345v=buffer__unsafe_offset;
  *__temp1346v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1347v) {
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
  *__temp1347v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp537v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v, char** __temp1352v) {
  char* buffer__unsafe_ptr=*__temp1348v;
  uint64_t buffer__unsafe_size=*__temp1349v;
  uint16_t buffer__unsafe_offset=*__temp1350v;
  uint16_t buffer__unsafe_align=*__temp1351v;
  uint64_t __temp538v=0;
  char __temp539v__=0;
  uint64_t __temp540v=0;
  uint64_t __temp541v__=0;
  uint64_t __temp542v__=0;
  uint64_t __temp543v__=0;
  char* __temp544v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp538v=0;
  eq__temp118v(__temp538v,buffer__unsafe_size,&__temp539v__);
  if(__temp539v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp540v=1;
  __temp_errcode=sub__temp347v(buffer__unsafe_size,__temp540v,&__temp541v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp542v__);
  mul__temp194v(__temp541v__,__temp542v__,&__temp543v__);
  add__temp468v(buffer__unsafe_ptr,__temp543v__,&__temp544v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1348v=buffer__unsafe_ptr;
  *__temp1349v=buffer__unsafe_size;
  *__temp1350v=buffer__unsafe_offset;
  *__temp1351v=buffer__unsafe_align;
  *__temp1352v=__temp544v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field____temp_buffer____buffer__temp1279v(char** __temp1353v, uint64_t* __temp1354v, uint16_t* __temp1355v, uint16_t* __temp1356v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__temp1353v=unsafe_ptr;
  *__temp1354v=unsafe_size;
  *__temp1355v=unsafe_offset;
  *__temp1356v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp366v(double value, const char* endl) {
  int __temp367v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1249v(char* f) {
  double __temp1250v__a__x=0;
  double __temp1250v__a__y=0;
  double __temp1250v__b__x=0;
  double __temp1250v__b__y=0;
  double __temp1253v__a__x=0;
  double __temp1253v__a__y=0;
  double __temp1253v__b__x=0;
  double __temp1253v__b__y=0;
  double __temp1255v__a__x=0;
  double __temp1255v__a__y=0;
  double __temp1255v__b__x=0;
  double __temp1255v__b__y=0;
  double __temp1257v__a__x=0;
  double __temp1257v__a__y=0;
  double __temp1257v__b__x=0;
  double __temp1257v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1250v__a__x,f,8);
  memcpy(&__temp1250v__a__y,f+8,8);
  memcpy(&__temp1250v__b__x,f+16,8);
  memcpy(&__temp1250v__b__y,f+24,8);
  print__temp366v(__temp1250v__a__x,__temp1251v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1253v__a__x,f,8);
  memcpy(&__temp1253v__a__y,f+8,8);
  memcpy(&__temp1253v__b__x,f+16,8);
  memcpy(&__temp1253v__b__y,f+24,8);
  print__temp366v(__temp1253v__a__y,__temp1251v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1255v__a__x,f,8);
  memcpy(&__temp1255v__a__y,f+8,8);
  memcpy(&__temp1255v__b__x,f+16,8);
  memcpy(&__temp1255v__b__y,f+24,8);
  print__temp366v(__temp1255v__b__x,__temp1251v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1257v__a__x,f,8);
  memcpy(&__temp1257v__a__y,f+8,8);
  memcpy(&__temp1257v__b__x,f+16,8);
  memcpy(&__temp1257v__b__y,f+24,8);
  print__temp368v(__temp1257v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1259v() {
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint16_t __temp1262v__unsafe_offset=0;
  uint16_t __temp1262v__unsafe_align=0;
  uint64_t __temp1263v=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__unsafe_size=0;
  uint16_t __temp1264v__unsafe_offset=0;
  uint16_t __temp1264v__unsafe_align=0;
  uint64_t __temp1265v____temp475v=0;
  char __temp1265v____temp476v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __temp1266v=0;
  char* __temp1267v__=0;
  double __temp1268v=0;
  uint64_t __temp1269v=0;
  char* __temp1270v__=0;
  double __temp1271v__value=0;
  uint64_t __temp1273v=0;
  char* __temp1274v__=0;
  char* f0=0;
  double __temp1275v__value=0;
  uint64_t __temp1276v=0;
  char* __temp1277v__unsafe_ptr=0;
  uint64_t __temp1277v__unsafe_size=0;
  uint16_t __temp1277v__unsafe_offset=0;
  uint16_t __temp1277v__unsafe_align=0;
  char* __temp1278v__=0;
  char* __temp1281v__unsafe_ptr=0;
  uint64_t __temp1281v__unsafe_size=0;
  uint16_t __temp1281v__unsafe_offset=0;
  uint16_t __temp1281v__unsafe_align=0;
  char* __temp1282v__unsafe_ptr=0;
  uint64_t __temp1282v__unsafe_size=0;
  uint16_t __temp1282v__unsafe_offset=0;
  uint16_t __temp1282v__unsafe_align=0;
  uint64_t __temp1283v=0;
  char* __temp1284v__unsafe_ptr=0;
  uint64_t __temp1284v__unsafe_size=0;
  uint16_t __temp1284v__unsafe_offset=0;
  uint16_t __temp1284v__unsafe_align=0;
  uint64_t __temp1285v____temp475v=0;
  char __temp1285v____temp476v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __temp1286v=0;
  char* __temp1287v__=0;
  double __temp1288v=0;
  double __temp1289v=0;
  double __temp1290v=0;
  double __temp1291v=0;
  uint64_t __temp1292v=0;
  char* __temp1293v__=0;
  double __temp1295v=0;
  char* __temp1296v__unsafe_ptr=0;
  uint64_t __temp1296v__unsafe_size=0;
  uint16_t __temp1296v__unsafe_offset=0;
  uint16_t __temp1296v__unsafe_align=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__unsafe_size=0;
  uint16_t __temp1297v__unsafe_offset=0;
  uint16_t __temp1297v__unsafe_align=0;
  uint64_t __temp1298v=0;
  char* __temp1299v__unsafe_ptr=0;
  uint64_t __temp1299v__unsafe_size=0;
  uint16_t __temp1299v__unsafe_offset=0;
  uint16_t __temp1299v__unsafe_align=0;
  uint64_t __temp1300v____temp475v=0;
  char __temp1300v____temp476v__=0;
  char* __temp1301v__=0;
  char* n=0;
  double __temp1302v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1260v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align);
  __temp1263v=1;
  __temp_errcode=alloc__temp473v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1263v,&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1266v=0;
  __temp_errcode=mutget__temp545v(&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align,__temp1266v,&__temp1267v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1268v=1.0;
  if(!__temp1267v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1267v__,&__temp1268v,8);
  __temp1269v=0;
  __temp_errcode=get__temp552v(__temp1264v__unsafe_ptr,__temp1264v__unsafe_size,__temp1264v__unsafe_offset,__temp1264v__unsafe_align,__temp1269v,&__temp1270v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1270v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1271v__value,__temp1270v__,8);
  print__temp368v(__temp1271v__value);
  __temp1273v=0;
  __temp_errcode=mutget__temp545v(&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align,__temp1273v,&__temp1274v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1274v__;
  if(!f0){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1275v__value,f0,8);
  __temp1276v=2;
  __temp_errcode=resize__temp518v(&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align,__temp1276v,&__temp1277v__unsafe_ptr,&__temp1277v__unsafe_size,&__temp1277v__unsafe_offset,&__temp1277v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp537v(&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align,&__temp1278v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1278v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1278v__,&__temp1275v__value,8);
  Field____temp_buffer____buffer__temp1279v(&__temp1281v__unsafe_ptr,&__temp1281v__unsafe_size,&__temp1281v__unsafe_offset,&__temp1281v__unsafe_align);
  __temp1282v__unsafe_ptr=__temp1281v__unsafe_ptr;
  __temp1282v__unsafe_size=__temp1281v__unsafe_size;
  __temp1282v__unsafe_offset=__temp1281v__unsafe_offset;
  __temp1282v__unsafe_align=__temp1281v__unsafe_align;
  __temp1283v=1;
  __temp_errcode=alloc__temp473v(&__temp1282v__unsafe_ptr,&__temp1282v__unsafe_size,&__temp1282v__unsafe_offset,&__temp1282v__unsafe_align,__temp1283v,&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1284v__unsafe_ptr;
  p__unsafe_size=__temp1284v__unsafe_size;
  p__unsafe_offset=__temp1284v__unsafe_offset;
  p__unsafe_align=__temp1284v__unsafe_align;
  __temp1286v=0;
  __temp_errcode=mutget__temp545v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__temp1286v,&__temp1287v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1288v=1.0;
  __temp1289v=2.0;
  __temp1290v=3.0;
  __temp1291v=4.0;
  if(!__temp1287v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1287v__,&__temp1288v,8);
  memcpy(__temp1287v__+8,&__temp1289v,8);
  memcpy(__temp1287v__+16,&__temp1290v,8);
  memcpy(__temp1287v__+24,&__temp1291v,8);
  __temp1292v=0;
  __temp_errcode=get__temp552v(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__temp1292v,&__temp1293v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1249v(__temp1293v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1295v=1.0;
  float____temp_buffer____buffer__temp1260v(&__temp1296v__unsafe_ptr,&__temp1296v__unsafe_size,&__temp1296v__unsafe_offset,&__temp1296v__unsafe_align);
  __temp1297v__unsafe_ptr=__temp1296v__unsafe_ptr;
  __temp1297v__unsafe_size=__temp1296v__unsafe_size;
  __temp1297v__unsafe_offset=__temp1296v__unsafe_offset;
  __temp1297v__unsafe_align=__temp1296v__unsafe_align;
  __temp1298v=1;
  __temp_errcode=alloc__temp473v(&__temp1297v__unsafe_ptr,&__temp1297v__unsafe_size,&__temp1297v__unsafe_offset,&__temp1297v__unsafe_align,__temp1298v,&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp537v(&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align,&__temp1301v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1301v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1301v__,&__temp1295v,8);
  n=__temp1301v__;
  if(!n){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1302v__value,n,8);
  print__temp368v(__temp1302v__value);
  
  __temp_failure:__temp1300v____temp475v=0;
  neq__temp142v(__temp1299v__unsafe_size,__temp1300v____temp475v,&__temp1300v____temp476v__);
  if(__temp1300v____temp476v__){
  __temp1299v__unsafe_size=0;
  __temp1299v__unsafe_size=__temp1299v__unsafe_size;
  __temp1299v__unsafe_ptr=__temp1299v__unsafe_ptr;
  free__temp466v(&__temp1299v__unsafe_ptr);
  }
  __temp1285v____temp475v=0;
  neq__temp142v(__temp1284v__unsafe_size,__temp1285v____temp475v,&__temp1285v____temp476v__);
  if(__temp1285v____temp476v__){
  __temp1284v__unsafe_size=0;
  __temp1284v__unsafe_size=__temp1284v__unsafe_size;
  __temp1284v__unsafe_ptr=__temp1284v__unsafe_ptr;
  free__temp466v(&__temp1284v__unsafe_ptr);
  }
  __temp1265v____temp475v=0;
  neq__temp142v(__temp1264v__unsafe_size,__temp1265v____temp475v,&__temp1265v____temp476v__);
  if(__temp1265v____temp476v__){
  __temp1264v__unsafe_size=0;
  __temp1264v__unsafe_size=__temp1264v__unsafe_size;
  __temp1264v__unsafe_ptr=__temp1264v__unsafe_ptr;
  free__temp466v(&__temp1264v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1259v();return 0;}