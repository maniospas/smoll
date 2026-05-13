#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
const char* const __temp1190v=",";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1199v(char** __temp1244v, uint64_t* __temp1245v, uint64_t* __temp1246v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1244v=unsafe_ptr;
  *__temp1245v=unsafe_size;
  *__temp1246v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1247v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1248v) {
  char* allocated=*__temp1248v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1248v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1249v) {
  int value=0;
  *__temp1249v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1250v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1250v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1251v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1251v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1252v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1253v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1253v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1254v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1255v) {
  char* unsafe_ptr=0;
  char failed=0;
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
  *__temp1255v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1256v, uint64_t* __temp1257v, uint64_t* __temp1258v, uint64_t size, char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v) {
  char* buffer__unsafe_ptr=*__temp1256v;
  uint64_t buffer__unsafe_size=*__temp1257v;
  uint64_t buffer__unsafe_align=*__temp1258v;
  int __temp456v=0;
  char __temp457v__=0;
  uint64_t __temp458v=0;
  char __temp460v__=0;
  uint64_t __temp461v=0;
  char __temp462v__=0;
  uint64_t __temp463v=0;
  uint64_t __temp464v__=0;
  uint64_t __temp466v=0;
  char __temp467v__=0;
  uint64_t __temp468v__=0;
  uint64_t bytes=0;
  char* __temp469v__=0;
  uint64_t __temp470v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp460v__);
  if(__temp460v__){
  __temp461v=0;
  neq__temp305v(size,__temp461v,&__temp462v__);
  if(__temp462v__){
  __temp463v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp464v__);
  zero__temp432v(buffer__unsafe_ptr,__temp463v,__temp464v__);
  }
  goto __temp_return;
  }
  __temp466v=0;
  neq__temp305v(buffer__unsafe_size,__temp466v,&__temp467v__);
  if(__temp467v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp468v__);
  bytes=__temp468v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp469v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp469v__;
  __temp470v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp470v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp457v__);
  if(__temp457v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1256v=buffer__unsafe_ptr;
  *__temp1257v=buffer__unsafe_size;
  *__temp1258v=buffer__unsafe_align;
  *__temp1259v=buffer__unsafe_ptr;
  *__temp1260v=buffer__unsafe_size;
  *__temp1261v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1262v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1263v) {
  *__temp1263v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1264v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1264v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1265v, uint64_t* __temp1266v, uint64_t* __temp1267v, uint64_t i, char** __temp1268v) {
  char* buffer__unsafe_ptr=*__temp1265v;
  uint64_t buffer__unsafe_size=*__temp1266v;
  uint64_t buffer__unsafe_align=*__temp1267v;
  char __temp500v__=0;
  uint64_t __temp501v__=0;
  char* __temp502v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp500v__);
  if(__temp500v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp501v__);
  add__temp433v(buffer__unsafe_ptr,__temp501v__,&__temp502v__);
  unsafe_ptr=__temp502v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  *__temp1268v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1269v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1269v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp429v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1270v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp430v__=0;
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
  attach_type__temp16v(new_allocated,allocated__unsafe_ptr,&__temp430v__);
  unsafe_ptr=__temp430v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1270v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1271v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) int resize__temp472v(char** __temp1272v, uint64_t* __temp1273v, uint64_t* __temp1274v, uint64_t size, char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1272v;
  uint64_t buffer__unsafe_size=*__temp1273v;
  uint64_t buffer__unsafe_align=*__temp1274v;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp481v__=0;
  uint64_t bytes=0;
  char* __temp482v__=0;
  char __temp483v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  goto __temp_return;
  }
  __temp474v=0;
  eq__temp281v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  buffer__unsafe_size=__temp476v;
  free__temp431v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp478v=0;
  eq__temp281v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_size,buffer__unsafe_align,&__temp480v__);
  prev_bytes=__temp480v__;
  buffer__unsafe_size=size;
  mul__temp137v(buffer__unsafe_align,size,&__temp481v__);
  bytes=__temp481v__;
  __temp_errcode=realloc__temp429v(buffer__unsafe_ptr,bytes,&__temp482v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp482v__;
  lt__temp185v(prev_bytes,bytes,&__temp483v__);
  if(__temp483v__){
  zero__temp432v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1272v=buffer__unsafe_ptr;
  *__temp1273v=buffer__unsafe_size;
  *__temp1274v=buffer__unsafe_align;
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp1278v) {
  int __temp334v__=0;
  int __temp335v=0;
  int __temp336v=0;
  char __temp337v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp88v(x,y,&__temp334v__);
  lt__temp185v(x,y,&__temp337v__);
  if(__temp337v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1278v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp492v(char** __temp1279v, uint64_t* __temp1280v, uint64_t* __temp1281v, char** __temp1282v) {
  char* buffer__unsafe_ptr=*__temp1279v;
  uint64_t buffer__unsafe_size=*__temp1280v;
  uint64_t buffer__unsafe_align=*__temp1281v;
  uint64_t __temp493v=0;
  char __temp494v__=0;
  uint64_t __temp495v=0;
  uint64_t __temp496v__=0;
  uint64_t __temp497v__=0;
  char* __temp498v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp493v=0;
  eq__temp281v(__temp493v,buffer__unsafe_size,&__temp494v__);
  if(__temp494v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp495v=1;
  __temp_errcode=sub__temp333v(buffer__unsafe_size,__temp495v,&__temp496v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp137v(__temp496v__,buffer__unsafe_align,&__temp497v__);
  add__temp433v(buffer__unsafe_ptr,__temp497v__,&__temp498v__);
  unsafe_ptr=__temp498v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1279v=buffer__unsafe_ptr;
  *__temp1280v=buffer__unsafe_size;
  *__temp1281v=buffer__unsafe_align;
  *__temp1282v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1219v(char** __temp1283v, uint64_t* __temp1284v, uint64_t* __temp1285v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=32;
  *__temp1283v=unsafe_ptr;
  *__temp1284v=unsafe_size;
  *__temp1285v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp358v(double value, const char* endl) {
  int __temp359v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1188v(char* f) {
  double __temp1189v__a__x=0;
  double __temp1189v__a__y=0;
  double __temp1189v__b__x=0;
  double __temp1189v__b__y=0;
  double __temp1192v__a__x=0;
  double __temp1192v__a__y=0;
  double __temp1192v__b__x=0;
  double __temp1192v__b__y=0;
  double __temp1194v__a__x=0;
  double __temp1194v__a__y=0;
  double __temp1194v__b__x=0;
  double __temp1194v__b__y=0;
  double __temp1196v__a__x=0;
  double __temp1196v__a__y=0;
  double __temp1196v__b__x=0;
  double __temp1196v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1189v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1189v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1189v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1189v__b__y,f+24,8);
  print__temp358v(__temp1189v__a__x,__temp1190v);
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
  print__temp358v(__temp1192v__a__y,__temp1190v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1194v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1194v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1194v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1194v__b__y,f+24,8);
  print__temp358v(__temp1194v__b__x,__temp1190v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1196v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1196v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1196v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1196v__b__y,f+24,8);
  print__temp356v(__temp1196v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1198v() {
  char* __temp1201v__unsafe_ptr=0;
  uint64_t __temp1201v__unsafe_size=0;
  uint64_t __temp1201v__unsafe_align=0;
  char* __temp1202v__unsafe_ptr=0;
  uint64_t __temp1202v__unsafe_size=0;
  uint64_t __temp1202v__unsafe_align=0;
  uint64_t __temp1203v=0;
  char* __temp1204v__unsafe_ptr=0;
  uint64_t __temp1204v__unsafe_size=0;
  uint64_t __temp1204v__unsafe_align=0;
  char __temp1205v____temp457v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint64_t f__unsafe_align=0;
  uint64_t __temp1206v=0;
  char* __temp1207v__=0;
  double __temp1208v=0;
  uint64_t __temp1209v=0;
  char* __temp1210v__=0;
  double __temp1211v__z=0;
  uint64_t __temp1213v=0;
  char* __temp1214v__=0;
  char* f0=0;
  double __temp1215v__z=0;
  uint64_t __temp1216v=0;
  char* __temp1217v__unsafe_ptr=0;
  uint64_t __temp1217v__unsafe_size=0;
  uint64_t __temp1217v__unsafe_align=0;
  char* __temp1218v__=0;
  char* __temp1221v__unsafe_ptr=0;
  uint64_t __temp1221v__unsafe_size=0;
  uint64_t __temp1221v__unsafe_align=0;
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  uint64_t __temp1223v=0;
  char* __temp1224v__unsafe_ptr=0;
  uint64_t __temp1224v__unsafe_size=0;
  uint64_t __temp1224v__unsafe_align=0;
  char __temp1225v____temp457v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint64_t p__unsafe_align=0;
  uint64_t __temp1226v=0;
  char* __temp1227v__=0;
  double __temp1228v=0;
  double __temp1229v=0;
  double __temp1230v=0;
  double __temp1231v=0;
  uint64_t __temp1232v=0;
  char* __temp1233v__=0;
  double __temp1235v=0;
  char* __temp1236v__unsafe_ptr=0;
  uint64_t __temp1236v__unsafe_size=0;
  uint64_t __temp1236v__unsafe_align=0;
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__unsafe_size=0;
  uint64_t __temp1237v__unsafe_align=0;
  uint64_t __temp1238v=0;
  char* __temp1239v__unsafe_ptr=0;
  uint64_t __temp1239v__unsafe_size=0;
  uint64_t __temp1239v__unsafe_align=0;
  char __temp1240v____temp457v__=0;
  char* __temp1241v__=0;
  char* n=0;
  double __temp1242v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  __temp1203v=1;
  __temp_errcode=alloc__temp455v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,__temp1203v,&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1204v__unsafe_ptr;
  f__unsafe_size=__temp1204v__unsafe_size;
  f__unsafe_align=__temp1204v__unsafe_align;
  __temp1206v=0;
  __temp_errcode=mutget__temp499v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1206v,&__temp1207v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1208v=1.0;
  if(!__temp1207v__){
  goto __temp_failure;
  }
  memcpy(__temp1207v__,&__temp1208v,8);
  __temp1209v=0;
  __temp_errcode=get__temp503v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1209v,&__temp1210v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1210v__){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__z,__temp1210v__,8);
  print__temp356v(__temp1211v__z);
  __temp1213v=0;
  __temp_errcode=mutget__temp499v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1213v,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1214v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__z,f0,8);
  __temp1216v=2;
  __temp_errcode=resize__temp472v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1216v,&__temp1217v__unsafe_ptr,&__temp1217v__unsafe_size,&__temp1217v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp492v(&__temp1217v__unsafe_ptr,&__temp1217v__unsafe_size,&__temp1217v__unsafe_align,&__temp1218v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__,&__temp1215v__z,8);
  Field__temp_buffer__buffer__temp1219v(&__temp1221v__unsafe_ptr,&__temp1221v__unsafe_size,&__temp1221v__unsafe_align);
  __temp1222v__unsafe_ptr=__temp1221v__unsafe_ptr;
  __temp1222v__unsafe_size=__temp1221v__unsafe_size;
  __temp1222v__unsafe_align=__temp1221v__unsafe_align;
  __temp1223v=1;
  __temp_errcode=alloc__temp455v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align,__temp1223v,&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1224v__unsafe_ptr;
  p__unsafe_size=__temp1224v__unsafe_size;
  p__unsafe_align=__temp1224v__unsafe_align;
  __temp1226v=0;
  __temp_errcode=mutget__temp499v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1226v,&__temp1227v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1228v=1.0;
  __temp1229v=2.0;
  __temp1230v=3.0;
  __temp1231v=4.0;
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__,&__temp1228v,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+8,&__temp1229v,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+16,&__temp1230v,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+24,&__temp1231v,8);
  __temp1232v=0;
  __temp_errcode=get__temp503v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1232v,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1188v(__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1235v=1.0;
  float__temp_buffer__buffer__temp1199v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align);
  __temp1237v__unsafe_ptr=__temp1236v__unsafe_ptr;
  __temp1237v__unsafe_size=__temp1236v__unsafe_size;
  __temp1237v__unsafe_align=__temp1236v__unsafe_align;
  __temp1238v=1;
  __temp_errcode=alloc__temp455v(&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align,__temp1238v,&__temp1239v__unsafe_ptr,&__temp1239v__unsafe_size,&__temp1239v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp492v(&__temp1239v__unsafe_ptr,&__temp1239v__unsafe_size,&__temp1239v__unsafe_align,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(__temp1241v__,&__temp1235v,8);
  n=__temp1241v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__z,n,8);
  print__temp356v(__temp1242v__z);
  
  __temp_failure:exists__temp401v(__temp1239v__unsafe_ptr,&__temp1240v____temp457v__);
  if(__temp1240v____temp457v__){
  __temp1239v__unsafe_size=0;
  __temp1239v__unsafe_size=__temp1239v__unsafe_size;
  free__temp431v(&__temp1239v__unsafe_ptr);
  }
  exists__temp401v(__temp1224v__unsafe_ptr,&__temp1225v____temp457v__);
  if(__temp1225v____temp457v__){
  __temp1224v__unsafe_size=0;
  __temp1224v__unsafe_size=__temp1224v__unsafe_size;
  free__temp431v(&__temp1224v__unsafe_ptr);
  }
  exists__temp401v(__temp1204v__unsafe_ptr,&__temp1205v____temp457v__);
  if(__temp1205v____temp457v__){
  __temp1204v__unsafe_size=0;
  __temp1204v__unsafe_size=__temp1204v__unsafe_size;
  free__temp431v(&__temp1204v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1198v();return 0;}