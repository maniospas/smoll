#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1210v(char** __temp1242v, uint64_t* __temp1243v, uint64_t* __temp1244v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1242v=unsafe_ptr;
  *__temp1243v=unsafe_size;
  *__temp1244v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1245v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1246v) {
  char* allocated=*__temp1246v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1246v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1247v) {
  int value=0;
  *__temp1247v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1248v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1248v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1249v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1250v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1251v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1252v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1253v) {
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
  *__temp1253v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1254v, uint64_t* __temp1255v, uint64_t* __temp1256v, uint64_t size, char** __temp1257v, uint64_t* __temp1258v, uint64_t* __temp1259v) {
  char* buffer__unsafe_ptr=*__temp1254v;
  uint64_t buffer__unsafe_size=*__temp1255v;
  uint64_t buffer__unsafe_align=*__temp1256v;
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
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  *__temp1257v=buffer__unsafe_ptr;
  *__temp1258v=buffer__unsafe_size;
  *__temp1259v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1260v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1261v) {
  *__temp1261v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1262v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1262v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1263v, uint64_t* __temp1264v, uint64_t* __temp1265v, uint64_t i, char** __temp1266v) {
  char* buffer__unsafe_ptr=*__temp1263v;
  uint64_t buffer__unsafe_size=*__temp1264v;
  uint64_t buffer__unsafe_align=*__temp1265v;
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
  *__temp1263v=buffer__unsafe_ptr;
  *__temp1264v=buffer__unsafe_size;
  *__temp1265v=buffer__unsafe_align;
  *__temp1266v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1186v(double x, double y, double* __temp1267v, double* __temp1268v) {
  goto __temp_return;
  __temp_return:
  *__temp1267v=x;
  *__temp1268v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1206v(double x, double y, double z, double* __temp1269v, double* __temp1270v, double* __temp1271v) {
  double __temp1207v__x=0;
  double __temp1207v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1186v(x,y,&__temp1207v__x,&__temp1207v__y);
  plane__x=__temp1207v__x;
  plane__y=__temp1207v__y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=plane__x;
  *__temp1270v=plane__y;
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1272v) {
  goto __temp_return;
  __temp_return:
  *__temp1272v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1273v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1274v) {
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
  *__temp1274v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp64v(double x, double y, int* __temp1275v) {
  int __temp65v=0;
  int __temp66v__=0;
  not__temp30v(__temp65v,&__temp66v__);
  goto __temp_return;
  __temp_return:
  *__temp1275v=__temp66v__;
}

static inline __attribute__((always_inline)) void add__temp91v(double x, double y, double* __temp1276v) {
  int __temp92v__=0;
  double z=0;
  is_different__temp64v(x,y,&__temp92v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1277v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) int sum__temp1189v(char** __temp1278v, uint64_t* __temp1279v, uint64_t* __temp1280v, double* __temp1281v, double* __temp1282v) {
  char* v__unsafe_ptr=*__temp1278v;
  uint64_t v__unsafe_size=*__temp1279v;
  uint64_t v__unsafe_align=*__temp1280v;
  double __temp1190v=0;
  double __temp1191v=0;
  double x=0;
  double __temp1192v=0;
  double __temp1193v=0;
  double y=0;
  uint64_t __temp1194v=0;
  uint64_t __temp1195v=0;
  uint64_t i=0;
  uint64_t __temp1196v__=0;
  char __temp1197v__=0;
  char* __temp1198v__=0;
  double __temp1199v__x=0;
  double __temp1199v__y=0;
  double __temp1200v__=0;
  char* __temp1201v__=0;
  double __temp1202v__x=0;
  double __temp1202v__y=0;
  double __temp1203v__=0;
  uint64_t __temp1204v=0;
  uint64_t __temp1205v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1190v=0.0;
  __temp1191v=__temp1190v;
  x=__temp1191v;
  __temp1192v=0.0;
  __temp1193v=__temp1192v;
  y=__temp1193v;
  __temp1194v=0;
  __temp1195v=__temp1194v;
  i=__temp1195v;
  while(1){
  len__temp507v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1196v__);
  lt__temp185v(i,__temp1196v__,&__temp1197v__);
  if(!__temp1197v__){
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
  __temp1204v=1;
  add__temp113v(i,__temp1204v,&__temp1205v__);
  i=__temp1205v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1278v=v__unsafe_ptr;
  *__temp1279v=v__unsafe_size;
  *__temp1280v=v__unsafe_align;
  *__temp1281v=x;
  *__temp1282v=y;
  
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
  double __temp1222v=0;
  double __temp1223v=0;
  double __temp1224v=0;
  double __temp1225v__plane__x=0;
  double __temp1225v__plane__y=0;
  double __temp1225v__z=0;
  uint64_t __temp1226v=0;
  char* __temp1227v__=0;
  double __temp1228v=0;
  double __temp1229v=0;
  double __temp1230v=0;
  double __temp1231v=0;
  double __temp1232v=0;
  double __temp1233v=0;
  double __temp1234v__plane__x=0;
  double __temp1234v__plane__y=0;
  double __temp1234v__z=0;
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__unsafe_size=0;
  uint64_t __temp1235v__unsafe_align=0;
  double __temp1239v__x=0;
  double __temp1239v__y=0;
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
  __temp1220v=__temp1219v;
  __temp1221v=2.0;
  __temp1222v=__temp1221v;
  __temp1223v=3.0;
  __temp1224v=__temp1223v;
  Point3D__temp1206v(__temp1220v,__temp1222v,__temp1224v,&__temp1225v__plane__x,&__temp1225v__plane__y,&__temp1225v__z);
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__,&__temp1225v__plane__x,8);
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__+8,&__temp1225v__plane__y,8);
  if(!__temp1218v__){
  goto __temp_failure;
  }
  memcpy(__temp1218v__+16,&__temp1225v__z,8);
  __temp1226v=1;
  __temp_errcode=mutget__temp499v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1226v,&__temp1227v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1228v=1.0;
  __temp1229v=__temp1228v;
  __temp1230v=2.0;
  __temp1231v=__temp1230v;
  __temp1232v=3.0;
  __temp1233v=__temp1232v;
  Point3D__temp1206v(__temp1229v,__temp1231v,__temp1233v,&__temp1234v__plane__x,&__temp1234v__plane__y,&__temp1234v__z);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__,&__temp1234v__plane__x,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+8,&__temp1234v__plane__y,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+16,&__temp1234v__z,8);
  __temp1235v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1235v__unsafe_size=points__unsafe_size;
  __temp1235v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1189v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align,&__temp1239v__x,&__temp1239v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1239v__x;
  sums__y=__temp1239v__y;
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