#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1254v=",";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1263v(char** __temp1307v, uint64_t* __temp1308v, uint16_t* __temp1309v, uint16_t* __temp1310v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1307v=unsafe_ptr;
  *__temp1308v=unsafe_size;
  *__temp1309v=unsafe_offset;
  *__temp1310v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1311v) {
  char z=0;
  z=x!=0;
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1313v) {
  int value=0;
  *__temp1313v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1314v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1314v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1315v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1315v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1316v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1317v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1317v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1318v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1318v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1319v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1319v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1320v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1321v) {
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
  *__temp1321v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1322v, uint64_t* __temp1323v, uint16_t* __temp1324v, uint16_t* __temp1325v, uint64_t size, char** __temp1326v, uint64_t* __temp1327v, uint16_t* __temp1328v, uint16_t* __temp1329v) {
  char* buffer__unsafe_ptr=*__temp1322v;
  uint64_t buffer__unsafe_size=*__temp1323v;
  uint16_t buffer__unsafe_offset=*__temp1324v;
  uint16_t buffer__unsafe_align=*__temp1325v;
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
  *__temp1322v=buffer__unsafe_ptr;
  *__temp1323v=buffer__unsafe_size;
  *__temp1324v=buffer__unsafe_offset;
  *__temp1325v=buffer__unsafe_align;
  *__temp1326v=__temp485v__unsafe_ptr;
  *__temp1327v=__temp485v__unsafe_size;
  *__temp1328v=__temp485v__unsafe_offset;
  *__temp1329v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1330v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1330v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1331v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1331v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1332v) {
  *__temp1332v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1333v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1333v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1334v, uint64_t* __temp1335v, uint16_t* __temp1336v, uint16_t* __temp1337v, uint64_t i, char** __temp1338v) {
  char* buffer__unsafe_ptr=*__temp1334v;
  uint64_t buffer__unsafe_size=*__temp1335v;
  uint16_t buffer__unsafe_offset=*__temp1336v;
  uint16_t buffer__unsafe_align=*__temp1337v;
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
  *__temp1334v=buffer__unsafe_ptr;
  *__temp1335v=buffer__unsafe_size;
  *__temp1336v=buffer__unsafe_offset;
  *__temp1337v=buffer__unsafe_align;
  *__temp1338v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1339v) {
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
  *__temp1339v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1340v) {
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
  *__temp1340v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1341v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1341v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1342v, uint64_t* __temp1343v, uint16_t* __temp1344v, uint16_t* __temp1345v, uint64_t size, char** __temp1346v, uint64_t* __temp1347v, uint16_t* __temp1348v, uint16_t* __temp1349v) {
  char* buffer__unsafe_ptr=*__temp1342v;
  uint64_t buffer__unsafe_size=*__temp1343v;
  uint16_t buffer__unsafe_offset=*__temp1344v;
  uint16_t buffer__unsafe_align=*__temp1345v;
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
  *__temp1342v=buffer__unsafe_ptr;
  *__temp1343v=buffer__unsafe_size;
  *__temp1344v=buffer__unsafe_offset;
  *__temp1345v=buffer__unsafe_align;
  *__temp1346v=buffer__unsafe_ptr;
  *__temp1347v=buffer__unsafe_size;
  *__temp1348v=buffer__unsafe_offset;
  *__temp1349v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1350v) {
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
  *__temp1350v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp535v(char** __temp1351v, uint64_t* __temp1352v, uint16_t* __temp1353v, uint16_t* __temp1354v, char** __temp1355v) {
  char* buffer__unsafe_ptr=*__temp1351v;
  uint64_t buffer__unsafe_size=*__temp1352v;
  uint16_t buffer__unsafe_offset=*__temp1353v;
  uint16_t buffer__unsafe_align=*__temp1354v;
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
  *__temp1351v=buffer__unsafe_ptr;
  *__temp1352v=buffer__unsafe_size;
  *__temp1353v=buffer__unsafe_offset;
  *__temp1354v=buffer__unsafe_align;
  *__temp1355v=__temp542v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field____temp_buffer____buffer__temp1282v(char** __temp1356v, uint64_t* __temp1357v, uint16_t* __temp1358v, uint16_t* __temp1359v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__temp1356v=unsafe_ptr;
  *__temp1357v=unsafe_size;
  *__temp1358v=unsafe_offset;
  *__temp1359v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp366v(double value, const char* endl) {
  int __temp367v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1252v(char* f) {
  double __temp1253v__a__x=0;
  double __temp1253v__a__y=0;
  double __temp1253v__b__x=0;
  double __temp1253v__b__y=0;
  double __temp1256v__a__x=0;
  double __temp1256v__a__y=0;
  double __temp1256v__b__x=0;
  double __temp1256v__b__y=0;
  double __temp1258v__a__x=0;
  double __temp1258v__a__y=0;
  double __temp1258v__b__x=0;
  double __temp1258v__b__y=0;
  double __temp1260v__a__x=0;
  double __temp1260v__a__y=0;
  double __temp1260v__b__x=0;
  double __temp1260v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1253v__a__x,f,8);
  memcpy(&__temp1253v__a__y,f+8,8);
  memcpy(&__temp1253v__b__x,f+16,8);
  memcpy(&__temp1253v__b__y,f+24,8);
  print__temp366v(__temp1253v__a__x,__temp1254v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1256v__a__x,f,8);
  memcpy(&__temp1256v__a__y,f+8,8);
  memcpy(&__temp1256v__b__x,f+16,8);
  memcpy(&__temp1256v__b__y,f+24,8);
  print__temp366v(__temp1256v__a__y,__temp1254v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1258v__a__x,f,8);
  memcpy(&__temp1258v__a__y,f+8,8);
  memcpy(&__temp1258v__b__x,f+16,8);
  memcpy(&__temp1258v__b__y,f+24,8);
  print__temp366v(__temp1258v__b__x,__temp1254v);
  if(!f){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1260v__a__x,f,8);
  memcpy(&__temp1260v__a__y,f+8,8);
  memcpy(&__temp1260v__b__x,f+16,8);
  memcpy(&__temp1260v__b__y,f+24,8);
  print__temp368v(__temp1260v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1262v() {
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__unsafe_size=0;
  uint16_t __temp1265v__unsafe_offset=0;
  uint16_t __temp1265v__unsafe_align=0;
  uint64_t __temp1266v=0;
  char* __temp1267v__unsafe_ptr=0;
  uint64_t __temp1267v__unsafe_size=0;
  uint16_t __temp1267v__unsafe_offset=0;
  uint16_t __temp1267v__unsafe_align=0;
  char __temp1268v____temp475v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __temp1269v=0;
  char* __temp1270v__=0;
  double __temp1271v=0;
  uint64_t __temp1272v=0;
  char* __temp1273v__=0;
  double __temp1274v__number=0;
  uint64_t __temp1276v=0;
  char* __temp1277v__=0;
  char* f0=0;
  double __temp1278v__number=0;
  uint64_t __temp1279v=0;
  char* __temp1280v__unsafe_ptr=0;
  uint64_t __temp1280v__unsafe_size=0;
  uint16_t __temp1280v__unsafe_offset=0;
  uint16_t __temp1280v__unsafe_align=0;
  char* __temp1281v__=0;
  char* __temp1284v__unsafe_ptr=0;
  uint64_t __temp1284v__unsafe_size=0;
  uint16_t __temp1284v__unsafe_offset=0;
  uint16_t __temp1284v__unsafe_align=0;
  char* __temp1285v__unsafe_ptr=0;
  uint64_t __temp1285v__unsafe_size=0;
  uint16_t __temp1285v__unsafe_offset=0;
  uint16_t __temp1285v__unsafe_align=0;
  uint64_t __temp1286v=0;
  char* __temp1287v__unsafe_ptr=0;
  uint64_t __temp1287v__unsafe_size=0;
  uint16_t __temp1287v__unsafe_offset=0;
  uint16_t __temp1287v__unsafe_align=0;
  char __temp1288v____temp475v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __temp1289v=0;
  char* __temp1290v__=0;
  double __temp1291v=0;
  double __temp1292v=0;
  double __temp1293v=0;
  double __temp1294v=0;
  uint64_t __temp1295v=0;
  char* __temp1296v__=0;
  double __temp1298v=0;
  char* __temp1299v__unsafe_ptr=0;
  uint64_t __temp1299v__unsafe_size=0;
  uint16_t __temp1299v__unsafe_offset=0;
  uint16_t __temp1299v__unsafe_align=0;
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__unsafe_size=0;
  uint16_t __temp1300v__unsafe_offset=0;
  uint16_t __temp1300v__unsafe_align=0;
  uint64_t __temp1301v=0;
  char* __temp1302v__unsafe_ptr=0;
  uint64_t __temp1302v__unsafe_size=0;
  uint16_t __temp1302v__unsafe_offset=0;
  uint16_t __temp1302v__unsafe_align=0;
  char __temp1303v____temp475v__=0;
  char* __temp1304v__=0;
  char* n=0;
  double __temp1305v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1263v(&__temp1265v__unsafe_ptr,&__temp1265v__unsafe_size,&__temp1265v__unsafe_offset,&__temp1265v__unsafe_align);
  __temp1266v=1;
  __temp_errcode=alloc__temp473v(&__temp1265v__unsafe_ptr,&__temp1265v__unsafe_size,&__temp1265v__unsafe_offset,&__temp1265v__unsafe_align,__temp1266v,&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1269v=0;
  __temp_errcode=mutget__temp543v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align,__temp1269v,&__temp1270v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1271v=1.0;
  if(!__temp1270v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1270v__,&__temp1271v,8);
  __temp1272v=0;
  __temp_errcode=get__temp550v(__temp1267v__unsafe_ptr,__temp1267v__unsafe_size,__temp1267v__unsafe_offset,__temp1267v__unsafe_align,__temp1272v,&__temp1273v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1273v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1274v__number,__temp1273v__,8);
  print__temp368v(__temp1274v__number);
  __temp1276v=0;
  __temp_errcode=mutget__temp543v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align,__temp1276v,&__temp1277v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1277v__;
  if(!f0){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1278v__number,f0,8);
  __temp1279v=2;
  __temp_errcode=resize__temp516v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align,__temp1279v,&__temp1280v__unsafe_ptr,&__temp1280v__unsafe_size,&__temp1280v__unsafe_offset,&__temp1280v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp535v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_offset,&__temp1267v__unsafe_align,&__temp1281v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1281v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1281v__,&__temp1278v__number,8);
  Field____temp_buffer____buffer__temp1282v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align);
  __temp1285v__unsafe_ptr=__temp1284v__unsafe_ptr;
  __temp1285v__unsafe_size=__temp1284v__unsafe_size;
  __temp1285v__unsafe_offset=__temp1284v__unsafe_offset;
  __temp1285v__unsafe_align=__temp1284v__unsafe_align;
  __temp1286v=1;
  __temp_errcode=alloc__temp473v(&__temp1285v__unsafe_ptr,&__temp1285v__unsafe_size,&__temp1285v__unsafe_offset,&__temp1285v__unsafe_align,__temp1286v,&__temp1287v__unsafe_ptr,&__temp1287v__unsafe_size,&__temp1287v__unsafe_offset,&__temp1287v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1287v__unsafe_ptr;
  p__unsafe_size=__temp1287v__unsafe_size;
  p__unsafe_offset=__temp1287v__unsafe_offset;
  p__unsafe_align=__temp1287v__unsafe_align;
  __temp1289v=0;
  __temp_errcode=mutget__temp543v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__temp1289v,&__temp1290v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1291v=1.0;
  __temp1292v=2.0;
  __temp1293v=3.0;
  __temp1294v=4.0;
  if(!__temp1290v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1290v__,&__temp1291v,8);
  memcpy(__temp1290v__+8,&__temp1292v,8);
  memcpy(__temp1290v__+16,&__temp1293v,8);
  memcpy(__temp1290v__+24,&__temp1294v,8);
  __temp1295v=0;
  __temp_errcode=get__temp550v(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__temp1295v,&__temp1296v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1252v(__temp1296v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1298v=1.0;
  float____temp_buffer____buffer__temp1263v(&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align);
  __temp1300v__unsafe_ptr=__temp1299v__unsafe_ptr;
  __temp1300v__unsafe_size=__temp1299v__unsafe_size;
  __temp1300v__unsafe_offset=__temp1299v__unsafe_offset;
  __temp1300v__unsafe_align=__temp1299v__unsafe_align;
  __temp1301v=1;
  __temp_errcode=alloc__temp473v(&__temp1300v__unsafe_ptr,&__temp1300v__unsafe_size,&__temp1300v__unsafe_offset,&__temp1300v__unsafe_align,__temp1301v,&__temp1302v__unsafe_ptr,&__temp1302v__unsafe_size,&__temp1302v__unsafe_offset,&__temp1302v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp535v(&__temp1302v__unsafe_ptr,&__temp1302v__unsafe_size,&__temp1302v__unsafe_offset,&__temp1302v__unsafe_align,&__temp1304v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1304v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1304v__,&__temp1298v,8);
  n=__temp1304v__;
  if(!n){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1305v__number,n,8);
  print__temp368v(__temp1305v__number);
  
  __temp_failure:exists__temp412v(__temp1302v__unsafe_ptr,&__temp1303v____temp475v__);
  if(__temp1303v____temp475v__){
  __temp1302v__unsafe_size=0;
  __temp1302v__unsafe_size=__temp1302v__unsafe_size;
  __temp1302v__unsafe_ptr=__temp1302v__unsafe_ptr;
  free__temp466v(&__temp1302v__unsafe_ptr);
  }
  exists__temp412v(__temp1287v__unsafe_ptr,&__temp1288v____temp475v__);
  if(__temp1288v____temp475v__){
  __temp1287v__unsafe_size=0;
  __temp1287v__unsafe_size=__temp1287v__unsafe_size;
  __temp1287v__unsafe_ptr=__temp1287v__unsafe_ptr;
  free__temp466v(&__temp1287v__unsafe_ptr);
  }
  exists__temp412v(__temp1267v__unsafe_ptr,&__temp1268v____temp475v__);
  if(__temp1268v____temp475v__){
  __temp1267v__unsafe_size=0;
  __temp1267v__unsafe_size=__temp1267v__unsafe_size;
  __temp1267v__unsafe_ptr=__temp1267v__unsafe_ptr;
  free__temp466v(&__temp1267v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1262v();return 0;}