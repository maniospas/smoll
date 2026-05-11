#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1206v(char** __temp1238v, uint64_t* __temp1239v, uint64_t* __temp1240v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1238v=unsafe_ptr;
  *__temp1239v=unsafe_size;
  *__temp1240v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1241v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1242v) {
  char* allocated=*__temp1242v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1242v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1243v) {
  int value=0;
  *__temp1243v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1244v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1244v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1245v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1245v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1246v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1247v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1248v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1249v) {
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
  *__temp1249v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp452v(char** __temp1250v, uint64_t* __temp1251v, uint64_t* __temp1252v, uint64_t size, char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v) {
  char* buffer__unsafe_ptr=*__temp1250v;
  uint64_t buffer__unsafe_size=*__temp1251v;
  uint64_t buffer__unsafe_align=*__temp1252v;
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
  *__temp1250v=buffer__unsafe_ptr;
  *__temp1251v=buffer__unsafe_size;
  *__temp1252v=buffer__unsafe_align;
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1256v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1257v) {
  *__temp1257v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1258v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1258v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v, uint64_t i, char** __temp1262v) {
  char* buffer__unsafe_ptr=*__temp1259v;
  uint64_t buffer__unsafe_size=*__temp1260v;
  uint64_t buffer__unsafe_align=*__temp1261v;
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
  *__temp1259v=buffer__unsafe_ptr;
  *__temp1260v=buffer__unsafe_size;
  *__temp1261v=buffer__unsafe_align;
  *__temp1262v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1182v(double x, double y, double* __temp1263v, double* __temp1264v) {
  goto __temp_return;
  __temp_return:
  *__temp1263v=x;
  *__temp1264v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1202v(double x, double y, double z, double* __temp1265v, double* __temp1266v, double* __temp1267v) {
  double __temp1203v__x=0;
  double __temp1203v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1182v(x,y,&__temp1203v__x,&__temp1203v__y);
  plane__x=__temp1203v__x;
  plane__y=__temp1203v__y;
  goto __temp_return;
  __temp_return:
  *__temp1265v=plane__x;
  *__temp1266v=plane__y;
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1268v) {
  goto __temp_return;
  __temp_return:
  *__temp1268v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1269v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1270v) {
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
  *__temp1270v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1271v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1271v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1272v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1273v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) int sum__temp1185v(char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v, double* __temp1277v, double* __temp1278v) {
  char* v__unsafe_ptr=*__temp1274v;
  uint64_t v__unsafe_size=*__temp1275v;
  uint64_t v__unsafe_align=*__temp1276v;
  double __temp1186v=0;
  double __temp1187v=0;
  double x=0;
  double __temp1188v=0;
  double __temp1189v=0;
  double y=0;
  uint64_t __temp1190v=0;
  uint64_t __temp1191v=0;
  uint64_t i=0;
  uint64_t __temp1192v__=0;
  uint8_t __temp1193v__=0;
  char* __temp1194v__=0;
  double __temp1195v__x=0;
  double __temp1195v__y=0;
  double __temp1196v__=0;
  char* __temp1197v__=0;
  double __temp1198v__x=0;
  double __temp1198v__y=0;
  double __temp1199v__=0;
  uint64_t __temp1200v=0;
  uint64_t __temp1201v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1186v=0.0;
  __temp1187v=__temp1186v;
  x=__temp1187v;
  __temp1188v=0.0;
  __temp1189v=__temp1188v;
  y=__temp1189v;
  __temp1190v=0;
  __temp1191v=__temp1190v;
  i=__temp1191v;
  while(1){
  len__temp504v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1192v__);
  lt__temp182v(i,__temp1192v__,&__temp1193v__);
  if(!__temp1193v__){
  break;
  }
  __temp_errcode=get__temp500v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1194v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1194v__){
  goto __temp_failure;
  }
  memcpy(&__temp1195v__x,__temp1194v__,8);
  if(!__temp1194v__){
  goto __temp_failure;
  }
  memcpy(&__temp1195v__y,__temp1194v__+8,8);
  add__temp88v(x,__temp1195v__x,&__temp1196v__);
  x=__temp1196v__;
  __temp_errcode=get__temp500v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1197v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1197v__){
  goto __temp_failure;
  }
  memcpy(&__temp1198v__x,__temp1197v__,8);
  if(!__temp1197v__){
  goto __temp_failure;
  }
  memcpy(&__temp1198v__y,__temp1197v__+8,8);
  add__temp88v(y,__temp1198v__y,&__temp1199v__);
  y=__temp1199v__;
  __temp1200v=1;
  add__temp110v(i,__temp1200v,&__temp1201v__);
  i=__temp1201v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1274v=v__unsafe_ptr;
  *__temp1275v=v__unsafe_size;
  *__temp1276v=v__unsafe_align;
  *__temp1277v=x;
  *__temp1278v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1205v() {
  char* __temp1208v__unsafe_ptr=0;
  uint64_t __temp1208v__unsafe_size=0;
  uint64_t __temp1208v__unsafe_align=0;
  char* __temp1209v__unsafe_ptr=0;
  uint64_t __temp1209v__unsafe_size=0;
  uint64_t __temp1209v__unsafe_align=0;
  uint64_t __temp1210v=0;
  char* __temp1211v__unsafe_ptr=0;
  uint64_t __temp1211v__unsafe_size=0;
  uint64_t __temp1211v__unsafe_align=0;
  uint8_t __temp1212v____temp454v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint64_t points__unsafe_align=0;
  uint64_t __temp1213v=0;
  char* __temp1214v__=0;
  double __temp1215v=0;
  double __temp1216v=0;
  double __temp1217v=0;
  double __temp1218v=0;
  double __temp1219v=0;
  double __temp1220v=0;
  double __temp1221v__plane__x=0;
  double __temp1221v__plane__y=0;
  double __temp1221v__z=0;
  uint64_t __temp1222v=0;
  char* __temp1223v__=0;
  double __temp1224v=0;
  double __temp1225v=0;
  double __temp1226v=0;
  double __temp1227v=0;
  double __temp1228v=0;
  double __temp1229v=0;
  double __temp1230v__plane__x=0;
  double __temp1230v__plane__y=0;
  double __temp1230v__z=0;
  char* __temp1231v__unsafe_ptr=0;
  uint64_t __temp1231v__unsafe_size=0;
  uint64_t __temp1231v__unsafe_align=0;
  double __temp1235v__x=0;
  double __temp1235v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1206v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  __temp1209v__unsafe_ptr=__temp1208v__unsafe_ptr;
  __temp1209v__unsafe_size=__temp1208v__unsafe_size;
  __temp1209v__unsafe_align=__temp1208v__unsafe_align;
  __temp1210v=10;
  __temp_errcode=alloc__temp452v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,__temp1210v,&__temp1211v__unsafe_ptr,&__temp1211v__unsafe_size,&__temp1211v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1211v__unsafe_ptr;
  points__unsafe_size=__temp1211v__unsafe_size;
  points__unsafe_align=__temp1211v__unsafe_align;
  __temp1213v=0;
  __temp_errcode=mutget__temp496v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1213v,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1215v=1.0;
  __temp1216v=__temp1215v;
  __temp1217v=2.0;
  __temp1218v=__temp1217v;
  __temp1219v=3.0;
  __temp1220v=__temp1219v;
  Point3D__temp1202v(__temp1216v,__temp1218v,__temp1220v,&__temp1221v__plane__x,&__temp1221v__plane__y,&__temp1221v__z);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__,&__temp1221v__plane__x,8);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__+8,&__temp1221v__plane__y,8);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__+16,&__temp1221v__z,8);
  __temp1222v=1;
  __temp_errcode=mutget__temp496v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1222v,&__temp1223v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1224v=1.0;
  __temp1225v=__temp1224v;
  __temp1226v=2.0;
  __temp1227v=__temp1226v;
  __temp1228v=3.0;
  __temp1229v=__temp1228v;
  Point3D__temp1202v(__temp1225v,__temp1227v,__temp1229v,&__temp1230v__plane__x,&__temp1230v__plane__y,&__temp1230v__z);
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__,&__temp1230v__plane__x,8);
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__+8,&__temp1230v__plane__y,8);
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(__temp1223v__+16,&__temp1230v__z,8);
  __temp1231v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1231v__unsafe_size=points__unsafe_size;
  __temp1231v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1185v(&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align,&__temp1235v__x,&__temp1235v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1235v__x;
  sums__y=__temp1235v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:exists__temp398v(__temp1211v__unsafe_ptr,&__temp1212v____temp454v__);
  if(__temp1212v____temp454v__){
  __temp1211v__unsafe_size=0;
  __temp1211v__unsafe_size=__temp1211v__unsafe_size;
  free__temp428v(&__temp1211v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1205v();return 0;}