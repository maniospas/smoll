#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1250v=",";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1259v(char** __temp1304v, uint64_t* __temp1305v, uint16_t* __temp1306v, uint16_t* __temp1307v) {
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1308v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1309v) {
  char* allocated=*__temp1309v;
  if(allocated){
  free(allocated);
  }
  *__temp1309v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1310v) {
  int value=0;
  *__temp1310v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1311v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1311v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1312v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1312v=__temp95v__;
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

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1314v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1315v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1315v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1316v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
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
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t __temp485v=0;
  char __temp486v__=0;
  uint64_t __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t bytes=0;
  char* __temp489v__=0;
  uint64_t __temp490v=0;
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
  goto __temp_return;
  }
  __temp485v=0;
  neq__temp142v(buffer__unsafe_size,__temp485v,&__temp486v__);
  if(__temp486v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp487v__);
  mul__temp194v(__temp487v__,size,&__temp488v__);
  bytes=__temp488v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp489v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp489v__;
  __temp490v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp490v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1319v=buffer__unsafe_ptr;
  *__temp1320v=buffer__unsafe_size;
  *__temp1321v=buffer__unsafe_offset;
  *__temp1322v=buffer__unsafe_align;
  *__temp1323v=buffer__unsafe_ptr;
  *__temp1324v=buffer__unsafe_size;
  *__temp1325v=buffer__unsafe_offset;
  *__temp1326v=buffer__unsafe_align;
  
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

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v, uint64_t i, char** __temp1335v) {
  char* buffer__unsafe_ptr=*__temp1331v;
  uint64_t buffer__unsafe_size=*__temp1332v;
  uint16_t buffer__unsafe_offset=*__temp1333v;
  uint16_t buffer__unsafe_align=*__temp1334v;
  char __temp540v__=0;
  uint64_t __temp541v__=0;
  uint64_t __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  char* __temp545v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp540v__);
  if(__temp540v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp541v__);
  mul__temp194v(i,__temp541v__,&__temp542v__);
  nat__temp470v(buffer__unsafe_offset,&__temp543v__);
  add__temp170v(__temp542v__,__temp543v__,&__temp544v__);
  add__temp468v(buffer__unsafe_ptr,__temp544v__,&__temp545v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1331v=buffer__unsafe_ptr;
  *__temp1332v=buffer__unsafe_size;
  *__temp1333v=buffer__unsafe_offset;
  *__temp1334v=buffer__unsafe_align;
  *__temp1335v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1336v) {
  char __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  char* __temp552v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp547v__);
  if(__temp547v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp548v__);
  mul__temp194v(i,__temp548v__,&__temp549v__);
  nat__temp470v(buffer__unsafe_offset,&__temp550v__);
  add__temp170v(__temp549v__,__temp550v__,&__temp551v__);
  add__temp468v(buffer__unsafe_ptr,__temp551v__,&__temp552v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1336v=__temp552v__;
  
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

static inline __attribute__((always_inline)) int resize__temp512v(char** __temp1339v, uint64_t* __temp1340v, uint16_t* __temp1341v, uint16_t* __temp1342v, uint64_t size, char** __temp1343v, uint64_t* __temp1344v, uint16_t* __temp1345v, uint16_t* __temp1346v) {
  char* buffer__unsafe_ptr=*__temp1339v;
  uint64_t buffer__unsafe_size=*__temp1340v;
  uint16_t buffer__unsafe_offset=*__temp1341v;
  uint16_t buffer__unsafe_align=*__temp1342v;
  char __temp513v__=0;
  uint64_t __temp514v=0;
  char __temp515v__=0;
  uint64_t __temp516v__=0;
  uint64_t __temp517v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp518v__=0;
  uint64_t __temp519v__=0;
  uint64_t bytes=0;
  char* __temp520v__=0;
  char __temp521v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp513v__);
  if(__temp513v__){
  goto __temp_return;
  }
  __temp514v=0;
  eq__temp118v(buffer__unsafe_size,__temp514v,&__temp515v__);
  if(__temp515v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp516v__);
  mul__temp194v(buffer__unsafe_size,__temp516v__,&__temp517v__);
  prev_bytes=__temp517v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp518v__);
  mul__temp194v(__temp518v__,size,&__temp519v__);
  bytes=__temp519v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp520v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp520v__;
  lt__temp247v(prev_bytes,bytes,&__temp521v__);
  if(__temp521v__){
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

static inline __attribute__((always_inline)) int mutlast__temp531v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v, char** __temp1352v) {
  char* buffer__unsafe_ptr=*__temp1348v;
  uint64_t buffer__unsafe_size=*__temp1349v;
  uint16_t buffer__unsafe_offset=*__temp1350v;
  uint16_t buffer__unsafe_align=*__temp1351v;
  uint64_t __temp532v=0;
  char __temp533v__=0;
  uint64_t __temp534v=0;
  uint64_t __temp535v__=0;
  uint64_t __temp536v__=0;
  uint64_t __temp537v__=0;
  char* __temp538v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp532v=0;
  eq__temp118v(__temp532v,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp534v=1;
  __temp_errcode=sub__temp347v(buffer__unsafe_size,__temp534v,&__temp535v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp536v__);
  mul__temp194v(__temp535v__,__temp536v__,&__temp537v__);
  add__temp468v(buffer__unsafe_ptr,__temp537v__,&__temp538v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1348v=buffer__unsafe_ptr;
  *__temp1349v=buffer__unsafe_size;
  *__temp1350v=buffer__unsafe_offset;
  *__temp1351v=buffer__unsafe_align;
  *__temp1352v=__temp538v__;
  
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

static inline __attribute__((always_inline)) int print__temp1248v(char* f) {
  double __temp1249v__a__x=0;
  double __temp1249v__a__y=0;
  double __temp1249v__b__x=0;
  double __temp1249v__b__y=0;
  double __temp1252v__a__x=0;
  double __temp1252v__a__y=0;
  double __temp1252v__b__x=0;
  double __temp1252v__b__y=0;
  double __temp1254v__a__x=0;
  double __temp1254v__a__y=0;
  double __temp1254v__b__x=0;
  double __temp1254v__b__y=0;
  double __temp1256v__a__x=0;
  double __temp1256v__a__y=0;
  double __temp1256v__b__x=0;
  double __temp1256v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1249v__a__x,f,8);
  memcpy(&__temp1249v__a__y,f+8,8);
  memcpy(&__temp1249v__b__x,f+16,8);
  memcpy(&__temp1249v__b__y,f+24,8);
  print__temp366v(__temp1249v__a__x,__temp1250v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1252v__a__x,f,8);
  memcpy(&__temp1252v__a__y,f+8,8);
  memcpy(&__temp1252v__b__x,f+16,8);
  memcpy(&__temp1252v__b__y,f+24,8);
  print__temp366v(__temp1252v__a__y,__temp1250v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1254v__a__x,f,8);
  memcpy(&__temp1254v__a__y,f+8,8);
  memcpy(&__temp1254v__b__x,f+16,8);
  memcpy(&__temp1254v__b__y,f+24,8);
  print__temp366v(__temp1254v__b__x,__temp1250v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1256v__a__x,f,8);
  memcpy(&__temp1256v__a__y,f+8,8);
  memcpy(&__temp1256v__b__x,f+16,8);
  memcpy(&__temp1256v__b__y,f+24,8);
  print__temp368v(__temp1256v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1258v() {
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__unsafe_size=0;
  uint16_t __temp1261v__unsafe_offset=0;
  uint16_t __temp1261v__unsafe_align=0;
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint16_t __temp1262v__unsafe_offset=0;
  uint16_t __temp1262v__unsafe_align=0;
  uint64_t __temp1263v=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__unsafe_size=0;
  uint16_t __temp1264v__unsafe_offset=0;
  uint16_t __temp1264v__unsafe_align=0;
  char __temp1265v____temp475v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __temp1266v=0;
  char* __temp1267v__=0;
  double __temp1268v=0;
  uint64_t __temp1269v=0;
  char* __temp1270v__=0;
  double __temp1271v__number=0;
  uint64_t __temp1273v=0;
  char* __temp1274v__=0;
  char* f0=0;
  double __temp1275v__number=0;
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
  char __temp1285v____temp475v__=0;
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
  char __temp1300v____temp475v__=0;
  char* __temp1301v__=0;
  char* n=0;
  double __temp1302v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1259v(&__temp1261v__unsafe_ptr,&__temp1261v__unsafe_size,&__temp1261v__unsafe_offset,&__temp1261v__unsafe_align);
  __temp1262v__unsafe_ptr=__temp1261v__unsafe_ptr;
  __temp1262v__unsafe_size=__temp1261v__unsafe_size;
  __temp1262v__unsafe_offset=__temp1261v__unsafe_offset;
  __temp1262v__unsafe_align=__temp1261v__unsafe_align;
  __temp1263v=1;
  __temp_errcode=alloc__temp473v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1263v,&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1266v=0;
  __temp_errcode=mutget__temp539v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1266v,&__temp1267v__);
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
  __temp_errcode=get__temp546v(__temp1262v__unsafe_ptr,__temp1262v__unsafe_size,__temp1262v__unsafe_offset,__temp1262v__unsafe_align,__temp1269v,&__temp1270v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1270v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1271v__number,__temp1270v__,8);
  print__temp368v(__temp1271v__number);
  __temp1273v=0;
  __temp_errcode=mutget__temp539v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1273v,&__temp1274v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1274v__;
  if(!f0){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1275v__number,f0,8);
  __temp1276v=2;
  __temp_errcode=resize__temp512v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1276v,&__temp1277v__unsafe_ptr,&__temp1277v__unsafe_size,&__temp1277v__unsafe_offset,&__temp1277v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp531v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,&__temp1278v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1278v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1278v__,&__temp1275v__number,8);
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
  __temp_errcode=mutget__temp539v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__temp1286v,&__temp1287v__);
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
  __temp_errcode=get__temp546v(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__temp1292v,&__temp1293v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1248v(__temp1293v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1295v=1.0;
  float____temp_buffer____buffer__temp1259v(&__temp1296v__unsafe_ptr,&__temp1296v__unsafe_size,&__temp1296v__unsafe_offset,&__temp1296v__unsafe_align);
  __temp1297v__unsafe_ptr=__temp1296v__unsafe_ptr;
  __temp1297v__unsafe_size=__temp1296v__unsafe_size;
  __temp1297v__unsafe_offset=__temp1296v__unsafe_offset;
  __temp1297v__unsafe_align=__temp1296v__unsafe_align;
  __temp1298v=1;
  __temp_errcode=alloc__temp473v(&__temp1297v__unsafe_ptr,&__temp1297v__unsafe_size,&__temp1297v__unsafe_offset,&__temp1297v__unsafe_align,__temp1298v,&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp531v(&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align,&__temp1301v__);
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
  memcpy(&__temp1302v__number,n,8);
  print__temp368v(__temp1302v__number);
  
  __temp_failure:exists__temp412v(__temp1299v__unsafe_ptr,&__temp1300v____temp475v__);
  if(__temp1300v____temp475v__){
  __temp1299v__unsafe_size=0;
  __temp1299v__unsafe_size=__temp1299v__unsafe_size;
  __temp1299v__unsafe_ptr=__temp1299v__unsafe_ptr;
  free__temp466v(&__temp1299v__unsafe_ptr);
  }
  exists__temp412v(__temp1284v__unsafe_ptr,&__temp1285v____temp475v__);
  if(__temp1285v____temp475v__){
  __temp1284v__unsafe_size=0;
  __temp1284v__unsafe_size=__temp1284v__unsafe_size;
  __temp1284v__unsafe_ptr=__temp1284v__unsafe_ptr;
  free__temp466v(&__temp1284v__unsafe_ptr);
  }
  exists__temp412v(__temp1264v__unsafe_ptr,&__temp1265v____temp475v__);
  if(__temp1265v____temp475v__){
  __temp1264v__unsafe_size=0;
  __temp1264v__unsafe_size=__temp1264v__unsafe_size;
  __temp1264v__unsafe_ptr=__temp1264v__unsafe_ptr;
  free__temp466v(&__temp1264v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1258v();return 0;}