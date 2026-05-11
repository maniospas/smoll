#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1186v=",";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1195v(char** __temp1240v, uint64_t* __temp1241v, uint64_t* __temp1242v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1240v=unsafe_ptr;
  *__temp1241v=unsafe_size;
  *__temp1242v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1243v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1244v) {
  char* allocated=*__temp1244v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1244v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1245v) {
  int value=0;
  *__temp1245v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1246v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1246v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1247v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1247v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1248v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1249v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1250v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1251v) {
  char* unsafe_ptr=0;
  uint8_t failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1251v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp452v(char** __temp1252v, uint64_t* __temp1253v, uint64_t* __temp1254v, uint64_t size, char** __temp1255v, uint64_t* __temp1256v, uint64_t* __temp1257v) {
  char* buffer__unsafe_ptr=*__temp1252v;
  uint64_t buffer__unsafe_size=*__temp1253v;
  uint64_t buffer__unsafe_align=*__temp1254v;
  int __temp453v=0;
  uint8_t __temp454v__=0;
  uint64_t __temp455v=0;
  uint8_t __temp457v__=0;
  uint64_t __temp458v=0;
  uint8_t __temp459v__=0;
  uint64_t __temp460v=0;
  uint64_t __temp461v__=0;
  uint64_t __temp463v=0;
  uint8_t __temp464v__=0;
  uint64_t __temp465v__=0;
  uint64_t bytes=0;
  char* __temp466v__=0;
  uint64_t __temp467v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp457v__);
  if(__temp457v__){
  __temp458v=0;
  neq__temp302v(size,__temp458v,&__temp459v__);
  if(__temp459v__){
  __temp460v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp461v__);
  zero__temp429v(buffer__unsafe_ptr,__temp460v,__temp461v__);
  }
  goto __temp_return;
  }
  __temp463v=0;
  neq__temp302v(buffer__unsafe_size,__temp463v,&__temp464v__);
  if(__temp464v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp465v__);
  bytes=__temp465v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp466v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp466v__;
  __temp467v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp467v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp454v__);
  if(__temp454v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1252v=buffer__unsafe_ptr;
  *__temp1253v=buffer__unsafe_size;
  *__temp1254v=buffer__unsafe_align;
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1258v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1259v) {
  *__temp1259v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1260v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1260v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1261v, uint64_t* __temp1262v, uint64_t* __temp1263v, uint64_t i, char** __temp1264v) {
  char* buffer__unsafe_ptr=*__temp1261v;
  uint64_t buffer__unsafe_size=*__temp1262v;
  uint64_t buffer__unsafe_align=*__temp1263v;
  uint8_t __temp497v__=0;
  uint64_t __temp498v__=0;
  char* __temp499v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp497v__);
  if(__temp497v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp498v__);
  add__temp430v(buffer__unsafe_ptr,__temp498v__,&__temp499v__);
  unsafe_ptr=__temp499v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1261v=buffer__unsafe_ptr;
  *__temp1262v=buffer__unsafe_size;
  *__temp1263v=buffer__unsafe_align;
  *__temp1264v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1265v) {
  uint8_t __temp501v__=0;
  uint64_t __temp502v__=0;
  char* __temp503v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp501v__);
  if(__temp501v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp502v__);
  add__temp430v(buffer__unsafe_ptr,__temp502v__,&__temp503v__);
  unsafe_ptr=__temp503v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1265v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1266v) {
  char* new_allocated=0;
  uint8_t failed=0;
  char* __temp427v__=0;
  char* unsafe_ptr=0;
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
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  unsafe_ptr=__temp427v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1266v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1267v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) int resize__temp469v(char** __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v, uint64_t size, char** __temp1271v, uint64_t* __temp1272v, uint64_t* __temp1273v) {
  char* buffer__unsafe_ptr=*__temp1268v;
  uint64_t buffer__unsafe_size=*__temp1269v;
  uint64_t buffer__unsafe_align=*__temp1270v;
  uint8_t __temp470v__=0;
  uint64_t __temp471v=0;
  uint8_t __temp472v__=0;
  uint64_t __temp473v=0;
  uint64_t __temp475v=0;
  uint8_t __temp476v__=0;
  uint64_t __temp477v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp478v__=0;
  uint64_t bytes=0;
  char* __temp479v__=0;
  uint8_t __temp480v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp470v__);
  if(__temp470v__){
  goto __temp_return;
  }
  __temp471v=0;
  eq__temp278v(size,__temp471v,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  buffer__unsafe_size=__temp473v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp475v=0;
  eq__temp278v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp477v__);
  prev_bytes=__temp477v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp478v__);
  bytes=__temp478v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp479v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp479v__;
  lt__temp182v(prev_bytes,bytes,&__temp480v__);
  if(__temp480v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  *__temp1271v=buffer__unsafe_ptr;
  *__temp1272v=buffer__unsafe_size;
  *__temp1273v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(uint64_t x, uint64_t y, uint64_t* __temp1274v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  uint8_t __temp334v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1274v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp489v(char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v, char** __temp1278v) {
  char* buffer__unsafe_ptr=*__temp1275v;
  uint64_t buffer__unsafe_size=*__temp1276v;
  uint64_t buffer__unsafe_align=*__temp1277v;
  uint64_t __temp490v=0;
  uint8_t __temp491v__=0;
  uint64_t __temp492v=0;
  uint64_t __temp493v__=0;
  uint64_t __temp494v__=0;
  char* __temp495v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp490v=0;
  eq__temp278v(__temp490v,buffer__unsafe_size,&__temp491v__);
  if(__temp491v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp492v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp492v,&__temp493v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp493v__,buffer__unsafe_align,&__temp494v__);
  add__temp430v(buffer__unsafe_ptr,__temp494v__,&__temp495v__);
  unsafe_ptr=__temp495v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  *__temp1278v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1215v(char** __temp1279v, uint64_t* __temp1280v, uint64_t* __temp1281v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=32;
  *__temp1279v=unsafe_ptr;
  *__temp1280v=unsafe_size;
  *__temp1281v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp355v(double value, const char* endl) {
  int __temp356v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1184v(char* f) {
  double __temp1185v__a__x=0;
  double __temp1185v__a__y=0;
  double __temp1185v__b__x=0;
  double __temp1185v__b__y=0;
  double __temp1188v__a__x=0;
  double __temp1188v__a__y=0;
  double __temp1188v__b__x=0;
  double __temp1188v__b__y=0;
  double __temp1190v__a__x=0;
  double __temp1190v__a__y=0;
  double __temp1190v__b__x=0;
  double __temp1190v__b__y=0;
  double __temp1192v__a__x=0;
  double __temp1192v__a__y=0;
  double __temp1192v__b__x=0;
  double __temp1192v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1185v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1185v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1185v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1185v__b__y,f+24,8);
  print__temp355v(__temp1185v__a__x,__temp1186v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1188v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1188v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1188v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1188v__b__y,f+24,8);
  print__temp355v(__temp1188v__a__y,__temp1186v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__b__y,f+24,8);
  print__temp355v(__temp1190v__b__x,__temp1186v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1192v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1192v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1192v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1192v__b__y,f+24,8);
  print__temp353v(__temp1192v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1194v() {
  char* __temp1197v__unsafe_ptr=0;
  uint64_t __temp1197v__unsafe_size=0;
  uint64_t __temp1197v__unsafe_align=0;
  char* __temp1198v__unsafe_ptr=0;
  uint64_t __temp1198v__unsafe_size=0;
  uint64_t __temp1198v__unsafe_align=0;
  uint64_t __temp1199v=0;
  char* __temp1200v__unsafe_ptr=0;
  uint64_t __temp1200v__unsafe_size=0;
  uint64_t __temp1200v__unsafe_align=0;
  uint8_t __temp1201v____temp454v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint64_t f__unsafe_align=0;
  uint64_t __temp1202v=0;
  char* __temp1203v__=0;
  double __temp1204v=0;
  uint64_t __temp1205v=0;
  char* __temp1206v__=0;
  double __temp1207v__z=0;
  uint64_t __temp1209v=0;
  char* __temp1210v__=0;
  char* f0=0;
  double __temp1211v__z=0;
  uint64_t __temp1212v=0;
  char* __temp1213v__unsafe_ptr=0;
  uint64_t __temp1213v__unsafe_size=0;
  uint64_t __temp1213v__unsafe_align=0;
  char* __temp1214v__=0;
  char* __temp1217v__unsafe_ptr=0;
  uint64_t __temp1217v__unsafe_size=0;
  uint64_t __temp1217v__unsafe_align=0;
  char* __temp1218v__unsafe_ptr=0;
  uint64_t __temp1218v__unsafe_size=0;
  uint64_t __temp1218v__unsafe_align=0;
  uint64_t __temp1219v=0;
  char* __temp1220v__unsafe_ptr=0;
  uint64_t __temp1220v__unsafe_size=0;
  uint64_t __temp1220v__unsafe_align=0;
  uint8_t __temp1221v____temp454v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint64_t p__unsafe_align=0;
  uint64_t __temp1222v=0;
  char* __temp1223v__=0;
  double __temp1224v=0;
  double __temp1225v=0;
  double __temp1226v=0;
  double __temp1227v=0;
  uint64_t __temp1228v=0;
  char* __temp1229v__=0;
  double __temp1231v=0;
  char* __temp1232v__unsafe_ptr=0;
  uint64_t __temp1232v__unsafe_size=0;
  uint64_t __temp1232v__unsafe_align=0;
  char* __temp1233v__unsafe_ptr=0;
  uint64_t __temp1233v__unsafe_size=0;
  uint64_t __temp1233v__unsafe_align=0;
  uint64_t __temp1234v=0;
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__unsafe_size=0;
  uint64_t __temp1235v__unsafe_align=0;
  uint8_t __temp1236v____temp454v__=0;
  char* __temp1237v__=0;
  char* n=0;
  double __temp1238v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1195v(&__temp1197v__unsafe_ptr,&__temp1197v__unsafe_size,&__temp1197v__unsafe_align);
  __temp1198v__unsafe_ptr=__temp1197v__unsafe_ptr;
  __temp1198v__unsafe_size=__temp1197v__unsafe_size;
  __temp1198v__unsafe_align=__temp1197v__unsafe_align;
  __temp1199v=1;
  __temp_errcode=alloc__temp452v(&__temp1198v__unsafe_ptr,&__temp1198v__unsafe_size,&__temp1198v__unsafe_align,__temp1199v,&__temp1200v__unsafe_ptr,&__temp1200v__unsafe_size,&__temp1200v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1200v__unsafe_ptr;
  f__unsafe_size=__temp1200v__unsafe_size;
  f__unsafe_align=__temp1200v__unsafe_align;
  __temp1202v=0;
  __temp_errcode=mutget__temp496v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1202v,&__temp1203v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1204v=1.0;
  if(!__temp1203v__){
  goto __temp_failure;
  }
  memcpy(__temp1203v__,&__temp1204v,8);
  __temp1205v=0;
  __temp_errcode=get__temp500v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1205v,&__temp1206v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1206v__){
  goto __temp_failure;
  }
  memcpy(&__temp1207v__z,__temp1206v__,8);
  print__temp353v(__temp1207v__z);
  __temp1209v=0;
  __temp_errcode=mutget__temp496v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1209v,&__temp1210v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1210v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__z,f0,8);
  __temp1212v=2;
  __temp_errcode=resize__temp469v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1212v,&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp489v(&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__,&__temp1211v__z,8);
  Field__temp_buffer__buffer__temp1215v(&__temp1217v__unsafe_ptr,&__temp1217v__unsafe_size,&__temp1217v__unsafe_align);
  __temp1218v__unsafe_ptr=__temp1217v__unsafe_ptr;
  __temp1218v__unsafe_size=__temp1217v__unsafe_size;
  __temp1218v__unsafe_align=__temp1217v__unsafe_align;
  __temp1219v=1;
  __temp_errcode=alloc__temp452v(&__temp1218v__unsafe_ptr,&__temp1218v__unsafe_size,&__temp1218v__unsafe_align,__temp1219v,&__temp1220v__unsafe_ptr,&__temp1220v__unsafe_size,&__temp1220v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1220v__unsafe_ptr;
  p__unsafe_size=__temp1220v__unsafe_size;
  p__unsafe_align=__temp1220v__unsafe_align;
  __temp1222v=0;
  __temp_errcode=mutget__temp496v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1222v,&__temp1223v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1224v=1.0;
  __temp1225v=2.0;
  __temp1226v=3.0;
  __temp1227v=4.0;
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__,&__temp1224v,8);
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__+8,&__temp1225v,8);
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__+16,&__temp1226v,8);
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__+24,&__temp1227v,8);
  __temp1228v=0;
  __temp_errcode=get__temp500v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1228v,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1184v(__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1231v=1.0;
  float__temp_buffer__buffer__temp1195v(&__temp1232v__unsafe_ptr,&__temp1232v__unsafe_size,&__temp1232v__unsafe_align);
  __temp1233v__unsafe_ptr=__temp1232v__unsafe_ptr;
  __temp1233v__unsafe_size=__temp1232v__unsafe_size;
  __temp1233v__unsafe_align=__temp1232v__unsafe_align;
  __temp1234v=1;
  __temp_errcode=alloc__temp452v(&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align,__temp1234v,&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp489v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1231v,8);
  n=__temp1237v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__z,n,8);
  print__temp353v(__temp1238v__z);
  
  __temp_failure:exists__temp398v(__temp1235v__unsafe_ptr,&__temp1236v____temp454v__);
  if(__temp1236v____temp454v__){
  __temp1235v__unsafe_size=0;
  __temp1235v__unsafe_size=__temp1235v__unsafe_size;
  free__temp428v(&__temp1235v__unsafe_ptr);
  }
  exists__temp398v(__temp1220v__unsafe_ptr,&__temp1221v____temp454v__);
  if(__temp1221v____temp454v__){
  __temp1220v__unsafe_size=0;
  __temp1220v__unsafe_size=__temp1220v__unsafe_size;
  free__temp428v(&__temp1220v__unsafe_ptr);
  }
  exists__temp398v(__temp1200v__unsafe_ptr,&__temp1201v____temp454v__);
  if(__temp1201v____temp454v__){
  __temp1200v__unsafe_size=0;
  __temp1200v__unsafe_size=__temp1200v__unsafe_size;
  free__temp428v(&__temp1200v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1194v();return 0;}