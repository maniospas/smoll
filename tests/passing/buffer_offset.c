#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
const char* const __temp1206v="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1210v(char** __temp1236v, uint64_t* __temp1237v, uint64_t* __temp1238v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1236v=unsafe_ptr;
  *__temp1237v=unsafe_size;
  *__temp1238v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1239v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1239v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1240v) {
  char* allocated=*__temp1240v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1240v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1241v) {
  int value=0;
  *__temp1241v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1242v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1242v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1243v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1243v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1244v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1245v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1246v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1247v) {
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
  *__temp1247v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1248v, uint64_t* __temp1249v, uint64_t* __temp1250v, uint64_t size, char** __temp1251v, uint64_t* __temp1252v, uint64_t* __temp1253v) {
  char* buffer__unsafe_ptr=*__temp1248v;
  uint64_t buffer__unsafe_size=*__temp1249v;
  uint64_t buffer__unsafe_align=*__temp1250v;
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
  *__temp1248v=buffer__unsafe_ptr;
  *__temp1249v=buffer__unsafe_size;
  *__temp1250v=buffer__unsafe_align;
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1254v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1255v) {
  *__temp1255v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1256v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1256v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1257v, uint64_t* __temp1258v, uint64_t* __temp1259v, uint64_t i, char** __temp1260v) {
  char* buffer__unsafe_ptr=*__temp1257v;
  uint64_t buffer__unsafe_size=*__temp1258v;
  uint64_t buffer__unsafe_align=*__temp1259v;
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
  *__temp1257v=buffer__unsafe_ptr;
  *__temp1258v=buffer__unsafe_size;
  *__temp1259v=buffer__unsafe_align;
  *__temp1260v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1186v(double x, double y, double* __temp1261v, double* __temp1262v) {
  goto __temp_return;
  __temp_return:
  *__temp1261v=x;
  *__temp1262v=y;
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value) {
  int __temp352v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1204v(double x, double y, double z, double* __temp1263v, double* __temp1264v, double* __temp1265v) {
  double __temp1205v__x=0;
  double __temp1205v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1186v(x,y,&__temp1205v__x,&__temp1205v__y);
  plane__x=__temp1205v__x;
  plane__y=__temp1205v__y;
  print__temp351v(__temp1206v);
  goto __temp_return;
  __temp_return:
  *__temp1263v=plane__x;
  *__temp1264v=plane__y;
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1266v) {
  goto __temp_return;
  __temp_return:
  *__temp1266v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp405v(uint64_t to, uint64_t* __temp1267v, uint64_t* __temp1268v) {
  int __temp406v=0;
  uint64_t __temp407v=0;
  uint64_t _from=0;
  uint64_t __temp408v=0;
  uint64_t from=0;
  __temp407v=0;
  _from=__temp407v;
  __temp408v=_from;
  from=__temp408v;
  goto __temp_return;
  __temp_return:
  *__temp1267v=from;
  *__temp1268v=to;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1269v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) int next__temp409v(uint64_t* __temp1270v, uint64_t r__to, uint64_t* __temp1271v) {
  uint64_t r__from=*__temp1270v;
  char __temp410v__=0;
  uint64_t ret=0;
  uint64_t __temp411v=0;
  uint64_t __temp412v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(r__from,r__to,&__temp410v__);
  if(__temp410v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp411v=1;
  add__temp113v(ret,__temp411v,&__temp412v__);
  r__from=__temp412v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1270v=r__from;
  *__temp1271v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1272v) {
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
  *__temp1272v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp64v(double x, double y, int* __temp1273v) {
  int __temp65v=0;
  int __temp66v__=0;
  not__temp30v(__temp65v,&__temp66v__);
  goto __temp_return;
  __temp_return:
  *__temp1273v=__temp66v__;
}

static inline __attribute__((always_inline)) void add__temp91v(double x, double y, double* __temp1274v) {
  int __temp92v__=0;
  double z=0;
  is_different__temp64v(x,y,&__temp92v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) int sum__temp1189v(char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v, double* __temp1278v, double* __temp1279v) {
  char* v__unsafe_ptr=*__temp1275v;
  uint64_t v__unsafe_size=*__temp1276v;
  uint64_t v__unsafe_align=*__temp1277v;
  double __temp1190v=0;
  double __temp1191v=0;
  double x=0;
  double __temp1192v=0;
  double __temp1193v=0;
  double y=0;
  uint64_t __temp1194v__=0;
  uint64_t __temp1195v__from=0;
  uint64_t __temp1195v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1196v=0;
  uint64_t __temp1197v__=0;
  uint64_t i=0;
  char* __temp1198v__=0;
  double __temp1199v__x=0;
  double __temp1199v__y=0;
  double __temp1200v__=0;
  char* __temp1201v__=0;
  double __temp1202v__x=0;
  double __temp1202v__y=0;
  double __temp1203v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1190v=0.0;
  __temp1191v=__temp1190v;
  x=__temp1191v;
  __temp1192v=0.0;
  __temp1193v=__temp1192v;
  y=__temp1193v;
  len__temp507v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1194v__);
  range__temp405v(__temp1194v__,&__temp1195v__from,&__temp1195v__to);
  it__from=__temp1195v__from;
  it__to=__temp1195v__to;
  while(1){
  __temp_complain=next__temp409v(&it__from,it__to,&__temp1197v__);
  __temp1196v=__temp_complain;
  i=__temp1197v__;
  __temp1196v=__temp1196v==0;
  if(!__temp1196v){
  break;
  }
  __temp_errcode=get__temp503v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1198v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1198v__){
  goto __temp_failure;
  }
  memcpy(&__temp1199v__x,__temp1198v__,8);
  if(!__temp1198v__){
  goto __temp_failure;
  }
  memcpy(&__temp1199v__y,__temp1198v__+8,8);
  add__temp91v(x,__temp1199v__x,&__temp1200v__);
  x=__temp1200v__;
  __temp_errcode=get__temp503v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1201v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1201v__){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__x,__temp1201v__,8);
  if(!__temp1201v__){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__y,__temp1201v__+8,8);
  add__temp91v(y,__temp1202v__y,&__temp1203v__);
  y=__temp1203v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1275v=v__unsafe_ptr;
  *__temp1276v=v__unsafe_size;
  *__temp1277v=v__unsafe_align;
  *__temp1278v=x;
  *__temp1279v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1209v() {
  char* __temp1212v__unsafe_ptr=0;
  uint64_t __temp1212v__unsafe_size=0;
  uint64_t __temp1212v__unsafe_align=0;
  char* __temp1213v__unsafe_ptr=0;
  uint64_t __temp1213v__unsafe_size=0;
  uint64_t __temp1213v__unsafe_align=0;
  uint64_t __temp1214v=0;
  char* __temp1215v__unsafe_ptr=0;
  uint64_t __temp1215v__unsafe_size=0;
  uint64_t __temp1215v__unsafe_align=0;
  char __temp1216v____temp457v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint64_t points__unsafe_align=0;
  uint64_t __temp1217v=0;
  char* __temp1218v__=0;
  double __temp1219v=0;
  double __temp1220v=0;
  double __temp1221v=0;
  double __temp1222v__plane__x=0;
  double __temp1222v__plane__y=0;
  double __temp1222v__z=0;
  uint64_t __temp1223v=0;
  char* __temp1224v__=0;
  double __temp1225v=0;
  double __temp1226v=0;
  double __temp1227v=0;
  double __temp1228v__plane__x=0;
  double __temp1228v__plane__y=0;
  double __temp1228v__z=0;
  char* __temp1229v__unsafe_ptr=0;
  uint64_t __temp1229v__unsafe_size=0;
  uint64_t __temp1229v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint64_t plane__unsafe_align=0;
  double __temp1233v__x=0;
  double __temp1233v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1210v(&__temp1212v__unsafe_ptr,&__temp1212v__unsafe_size,&__temp1212v__unsafe_align);
  __temp1213v__unsafe_ptr=__temp1212v__unsafe_ptr;
  __temp1213v__unsafe_size=__temp1212v__unsafe_size;
  __temp1213v__unsafe_align=__temp1212v__unsafe_align;
  __temp1214v=10;
  __temp_errcode=alloc__temp455v(&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align,__temp1214v,&__temp1215v__unsafe_ptr,&__temp1215v__unsafe_size,&__temp1215v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1215v__unsafe_ptr;
  points__unsafe_size=__temp1215v__unsafe_size;
  points__unsafe_align=__temp1215v__unsafe_align;
  __temp1217v=0;
  __temp_errcode=mutget__temp499v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1217v,&__temp1218v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1219v=1.0;
  __temp1220v=2.0;
  __temp1221v=3.0;
  Point3D__temp1204v(__temp1219v,__temp1220v,__temp1221v,&__temp1222v__plane__x,&__temp1222v__plane__y,&__temp1222v__z);
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__,&__temp1222v__plane__x,8);
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__+8,&__temp1222v__plane__y,8);
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__+16,&__temp1222v__z,8);
  __temp1223v=1;
  __temp_errcode=mutget__temp499v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1223v,&__temp1224v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1225v=1.0;
  __temp1226v=2.0;
  __temp1227v=3.0;
  Point3D__temp1204v(__temp1225v,__temp1226v,__temp1227v,&__temp1228v__plane__x,&__temp1228v__plane__y,&__temp1228v__z);
  if(!__temp1224v__){
  goto __temp_failure;
  }
  memcpy(__temp1224v__,&__temp1228v__plane__x,8);
  if(!__temp1224v__){
  goto __temp_failure;
  }
  memcpy(__temp1224v__+8,&__temp1228v__plane__y,8);
  if(!__temp1224v__){
  goto __temp_failure;
  }
  memcpy(__temp1224v__+16,&__temp1228v__z,8);
  __temp1229v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1229v__unsafe_size=points__unsafe_size;
  __temp1229v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1229v__unsafe_ptr;
  plane__unsafe_size=__temp1229v__unsafe_size;
  plane__unsafe_align=__temp1229v__unsafe_align;
  __temp_errcode=sum__temp1189v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1233v__x,&__temp1233v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1233v__x;
  sums__y=__temp1233v__y;
  print__temp356v(sums__x);
  print__temp356v(sums__y);
  
  __temp_failure:exists__temp401v(__temp1215v__unsafe_ptr,&__temp1216v____temp457v__);
  if(__temp1216v____temp457v__){
  __temp1215v__unsafe_size=0;
  __temp1215v__unsafe_size=__temp1215v__unsafe_size;
  free__temp431v(&__temp1215v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1209v();return 0;}