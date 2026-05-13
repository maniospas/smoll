#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1223v=",";
const char* const __temp364v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1232v(char** __temp1277v, uint64_t* __temp1278v, uint64_t* __temp1279v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1277v=unsafe_ptr;
  *__temp1278v=unsafe_size;
  *__temp1279v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1280v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1281v) {
  char* allocated=*__temp1281v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1281v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1282v) {
  int value=0;
  *__temp1282v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1283v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1283v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1284v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1284v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1285v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1285v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1286v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1287v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1288v) {
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
  *__temp1288v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, uint64_t size, char** __temp1292v, uint64_t* __temp1293v, uint64_t* __temp1294v) {
  char* buffer__unsafe_ptr=*__temp1289v;
  uint64_t buffer__unsafe_size=*__temp1290v;
  uint64_t buffer__unsafe_align=*__temp1291v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1289v=buffer__unsafe_ptr;
  *__temp1290v=buffer__unsafe_size;
  *__temp1291v=buffer__unsafe_align;
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1295v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1296v) {
  *__temp1296v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1297v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1297v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1298v, uint64_t* __temp1299v, uint64_t* __temp1300v, uint64_t i, char** __temp1301v) {
  char* buffer__unsafe_ptr=*__temp1298v;
  uint64_t buffer__unsafe_size=*__temp1299v;
  uint64_t buffer__unsafe_align=*__temp1300v;
  char __temp529v__=0;
  uint64_t __temp530v__=0;
  char* __temp531v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp529v__);
  if(__temp529v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp530v__);
  add__temp462v(buffer__unsafe_ptr,__temp530v__,&__temp531v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1298v=buffer__unsafe_ptr;
  *__temp1299v=buffer__unsafe_size;
  *__temp1300v=buffer__unsafe_align;
  *__temp1301v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1302v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1302v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp458v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1303v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp459v__=0;
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
  attach_type__temp19v(new_allocated,allocated__unsafe_ptr,&__temp459v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1303v=__temp459v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1304v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) int resize__temp501v(char** __temp1305v, uint64_t* __temp1306v, uint64_t* __temp1307v, uint64_t size, char** __temp1308v, uint64_t* __temp1309v, uint64_t* __temp1310v) {
  char* buffer__unsafe_ptr=*__temp1305v;
  uint64_t buffer__unsafe_size=*__temp1306v;
  uint64_t buffer__unsafe_align=*__temp1307v;
  char __temp502v__=0;
  uint64_t __temp503v=0;
  char __temp504v__=0;
  uint64_t __temp505v=0;
  uint64_t __temp507v=0;
  char __temp508v__=0;
  uint64_t __temp509v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp510v__=0;
  uint64_t bytes=0;
  char* __temp511v__=0;
  char __temp512v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(buffer__unsafe_size,size,&__temp502v__);
  if(__temp502v__){
  goto __temp_return;
  }
  __temp503v=0;
  eq__temp117v(size,__temp503v,&__temp504v__);
  if(__temp504v__){
  __temp505v=0;
  buffer__unsafe_size=__temp505v;
  free__temp460v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp507v=0;
  eq__temp117v(buffer__unsafe_size,__temp507v,&__temp508v__);
  if(__temp508v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_size,buffer__unsafe_align,&__temp509v__);
  prev_bytes=__temp509v__;
  buffer__unsafe_size=size;
  mul__temp193v(buffer__unsafe_align,size,&__temp510v__);
  bytes=__temp510v__;
  __temp_errcode=realloc__temp458v(buffer__unsafe_ptr,bytes,&__temp511v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp511v__;
  lt__temp246v(prev_bytes,bytes,&__temp512v__);
  if(__temp512v__){
  zero__temp461v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_align;
  *__temp1308v=buffer__unsafe_ptr;
  *__temp1309v=buffer__unsafe_size;
  *__temp1310v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp346v(uint64_t x, uint64_t y, uint64_t* __temp1311v) {
  int __temp347v__=0;
  int __temp348v=0;
  int __temp349v=0;
  char __temp350v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp347v__);
  lt__temp246v(x,y,&__temp350v__);
  if(__temp350v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1311v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp521v(char** __temp1312v, uint64_t* __temp1313v, uint64_t* __temp1314v, char** __temp1315v) {
  char* buffer__unsafe_ptr=*__temp1312v;
  uint64_t buffer__unsafe_size=*__temp1313v;
  uint64_t buffer__unsafe_align=*__temp1314v;
  uint64_t __temp522v=0;
  char __temp523v__=0;
  uint64_t __temp524v=0;
  uint64_t __temp525v__=0;
  uint64_t __temp526v__=0;
  char* __temp527v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp522v=0;
  eq__temp117v(__temp522v,buffer__unsafe_size,&__temp523v__);
  if(__temp523v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp524v=1;
  __temp_errcode=sub__temp346v(buffer__unsafe_size,__temp524v,&__temp525v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp193v(__temp525v__,buffer__unsafe_align,&__temp526v__);
  add__temp462v(buffer__unsafe_ptr,__temp526v__,&__temp527v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1312v=buffer__unsafe_ptr;
  *__temp1313v=buffer__unsafe_size;
  *__temp1314v=buffer__unsafe_align;
  *__temp1315v=__temp527v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1252v(char** __temp1316v, uint64_t* __temp1317v, uint64_t* __temp1318v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=32;
  *__temp1316v=unsafe_ptr;
  *__temp1317v=unsafe_size;
  *__temp1318v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp365v(double value, const char* endl) {
  int __temp366v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1221v(char* f) {
  double __temp1222v__a__x=0;
  double __temp1222v__a__y=0;
  double __temp1222v__b__x=0;
  double __temp1222v__b__y=0;
  double __temp1225v__a__x=0;
  double __temp1225v__a__y=0;
  double __temp1225v__b__x=0;
  double __temp1225v__b__y=0;
  double __temp1227v__a__x=0;
  double __temp1227v__a__y=0;
  double __temp1227v__b__x=0;
  double __temp1227v__b__y=0;
  double __temp1229v__a__x=0;
  double __temp1229v__a__y=0;
  double __temp1229v__b__x=0;
  double __temp1229v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__b__y,f+24,8);
  print__temp365v(__temp1222v__a__x,__temp1223v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1225v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1225v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1225v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1225v__b__y,f+24,8);
  print__temp365v(__temp1225v__a__y,__temp1223v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1227v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1227v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1227v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1227v__b__y,f+24,8);
  print__temp365v(__temp1227v__b__x,__temp1223v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1229v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1229v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1229v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1229v__b__y,f+24,8);
  print__temp367v(__temp1229v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1231v() {
  char* __temp1234v__unsafe_ptr=0;
  uint64_t __temp1234v__unsafe_size=0;
  uint64_t __temp1234v__unsafe_align=0;
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__unsafe_size=0;
  uint64_t __temp1235v__unsafe_align=0;
  uint64_t __temp1236v=0;
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__unsafe_size=0;
  uint64_t __temp1237v__unsafe_align=0;
  char __temp1238v____temp468v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint64_t f__unsafe_align=0;
  uint64_t __temp1239v=0;
  char* __temp1240v__=0;
  double __temp1241v=0;
  uint64_t __temp1242v=0;
  char* __temp1243v__=0;
  double __temp1244v__z=0;
  uint64_t __temp1246v=0;
  char* __temp1247v__=0;
  char* f0=0;
  double __temp1248v__z=0;
  uint64_t __temp1249v=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint64_t __temp1250v__unsafe_align=0;
  char* __temp1251v__=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint64_t __temp1254v__unsafe_align=0;
  char* __temp1255v__unsafe_ptr=0;
  uint64_t __temp1255v__unsafe_size=0;
  uint64_t __temp1255v__unsafe_align=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__unsafe_size=0;
  uint64_t __temp1257v__unsafe_align=0;
  char __temp1258v____temp468v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint64_t p__unsafe_align=0;
  uint64_t __temp1259v=0;
  char* __temp1260v__=0;
  double __temp1261v=0;
  double __temp1262v=0;
  double __temp1263v=0;
  double __temp1264v=0;
  uint64_t __temp1265v=0;
  char* __temp1266v__=0;
  double __temp1268v=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint64_t __temp1269v__unsafe_align=0;
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__unsafe_size=0;
  uint64_t __temp1270v__unsafe_align=0;
  uint64_t __temp1271v=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint64_t __temp1272v__unsafe_align=0;
  char __temp1273v____temp468v__=0;
  char* __temp1274v__=0;
  char* n=0;
  double __temp1275v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1232v(&__temp1234v__unsafe_ptr,&__temp1234v__unsafe_size,&__temp1234v__unsafe_align);
  __temp1235v__unsafe_ptr=__temp1234v__unsafe_ptr;
  __temp1235v__unsafe_size=__temp1234v__unsafe_size;
  __temp1235v__unsafe_align=__temp1234v__unsafe_align;
  __temp1236v=1;
  __temp_errcode=alloc__temp466v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align,__temp1236v,&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1237v__unsafe_ptr;
  f__unsafe_size=__temp1237v__unsafe_size;
  f__unsafe_align=__temp1237v__unsafe_align;
  __temp1239v=0;
  __temp_errcode=mutget__temp528v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1241v=1.0;
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(__temp1240v__,&__temp1241v,8);
  __temp1242v=0;
  __temp_errcode=get__temp532v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1242v,&__temp1243v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(&__temp1244v__z,__temp1243v__,8);
  print__temp367v(__temp1244v__z);
  __temp1246v=0;
  __temp_errcode=mutget__temp528v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1246v,&__temp1247v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1247v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1248v__z,f0,8);
  __temp1249v=2;
  __temp_errcode=resize__temp501v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1249v,&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp521v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align,&__temp1251v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__,&__temp1248v__z,8);
  Field__temp_buffer__buffer__temp1252v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_align);
  __temp1255v__unsafe_ptr=__temp1254v__unsafe_ptr;
  __temp1255v__unsafe_size=__temp1254v__unsafe_size;
  __temp1255v__unsafe_align=__temp1254v__unsafe_align;
  __temp1256v=1;
  __temp_errcode=alloc__temp466v(&__temp1255v__unsafe_ptr,&__temp1255v__unsafe_size,&__temp1255v__unsafe_align,__temp1256v,&__temp1257v__unsafe_ptr,&__temp1257v__unsafe_size,&__temp1257v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1257v__unsafe_ptr;
  p__unsafe_size=__temp1257v__unsafe_size;
  p__unsafe_align=__temp1257v__unsafe_align;
  __temp1259v=0;
  __temp_errcode=mutget__temp528v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1259v,&__temp1260v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1261v=1.0;
  __temp1262v=2.0;
  __temp1263v=3.0;
  __temp1264v=4.0;
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__,&__temp1261v,8);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__+8,&__temp1262v,8);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__+16,&__temp1263v,8);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__+24,&__temp1264v,8);
  __temp1265v=0;
  __temp_errcode=get__temp532v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1265v,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1221v(__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1268v=1.0;
  float__temp_buffer__buffer__temp1232v(&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_align);
  __temp1270v__unsafe_ptr=__temp1269v__unsafe_ptr;
  __temp1270v__unsafe_size=__temp1269v__unsafe_size;
  __temp1270v__unsafe_align=__temp1269v__unsafe_align;
  __temp1271v=1;
  __temp_errcode=alloc__temp466v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_align,__temp1271v,&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp521v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_align,&__temp1274v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__,&__temp1268v,8);
  n=__temp1274v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1275v__z,n,8);
  print__temp367v(__temp1275v__z);
  
  __temp_failure:exists__temp411v(__temp1272v__unsafe_ptr,&__temp1273v____temp468v__);
  if(__temp1273v____temp468v__){
  __temp1272v__unsafe_size=0;
  __temp1272v__unsafe_size=__temp1272v__unsafe_size;
  free__temp460v(&__temp1272v__unsafe_ptr);
  }
  exists__temp411v(__temp1257v__unsafe_ptr,&__temp1258v____temp468v__);
  if(__temp1258v____temp468v__){
  __temp1257v__unsafe_size=0;
  __temp1257v__unsafe_size=__temp1257v__unsafe_size;
  free__temp460v(&__temp1257v__unsafe_ptr);
  }
  exists__temp411v(__temp1237v__unsafe_ptr,&__temp1238v____temp468v__);
  if(__temp1238v____temp468v__){
  __temp1237v__unsafe_size=0;
  __temp1237v__unsafe_size=__temp1237v__unsafe_size;
  free__temp460v(&__temp1237v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1231v();return 0;}