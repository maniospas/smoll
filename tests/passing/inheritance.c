#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1222v(char** __temp1254v, unsigned long long* __temp1255v, unsigned long long* __temp1256v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1254v=unsafe_ptr;
  *__temp1255v=unsafe_size;
  *__temp1256v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1257v) {
  int value=0;
  *__temp1257v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1258v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1258v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1259v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1259v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1260v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1261v) {
  char* allocated=*__temp1261v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1261v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1262v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1263v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1264v) {
  char* allocated=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1264v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1265v, unsigned long long* __temp1266v, unsigned long long* __temp1267v, unsigned long long size, char** __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v) {
  char* buffer__unsafe_ptr=*__temp1265v;
  unsigned long long buffer__unsafe_size=*__temp1266v;
  unsigned long long buffer__unsafe_align=*__temp1267v;
  unsigned long long __temp435v=0;
  char __temp436v__=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
  unsigned long long __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  __temp_return:
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1271v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1272v) {
  *__temp1272v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1273v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1273v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1274v, unsigned long long* __temp1275v, unsigned long long* __temp1276v, unsigned long long i, char** __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1274v;
  unsigned long long buffer__unsafe_size=*__temp1275v;
  unsigned long long buffer__unsafe_align=*__temp1276v;
  char __temp479v__=0;
  unsigned long long __temp480v__=0;
  char* __temp481v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp480v__);
  add__temp430v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  *__temp1277v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1198v(double x, double y, double* __temp1278v, double* __temp1279v) {
  *__temp1278v=x;
  *__temp1279v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1218v(double x, double y, double z, double* __temp1280v, double* __temp1281v, double* __temp1282v) {
  double __temp1219v__x=0;
  double __temp1219v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1198v(x,y,&__temp1219v__x,&__temp1219v__y);
  plane__x=__temp1219v__x;
  plane__y=__temp1219v__y;
  *__temp1280v=plane__x;
  *__temp1281v=plane__y;
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1283v) {
  *__temp1283v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1284v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1285v) {
  char __temp483v__=0;
  unsigned long long __temp484v__=0;
  char* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1285v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1286v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1286v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1287v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1288v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) int sum__temp1201v(char** __temp1289v, unsigned long long* __temp1290v, unsigned long long* __temp1291v, double* __temp1292v, double* __temp1293v) {
  char* v__unsafe_ptr=*__temp1289v;
  unsigned long long v__unsafe_size=*__temp1290v;
  unsigned long long v__unsafe_align=*__temp1291v;
  double __temp1202v=0;
  double __temp1203v=0;
  double x=0;
  double __temp1204v=0;
  double __temp1205v=0;
  double y=0;
  unsigned long long __temp1206v=0;
  unsigned long long __temp1207v=0;
  unsigned long long i=0;
  unsigned long long __temp1208v__=0;
  char __temp1209v__=0;
  char* __temp1210v__=0;
  double __temp1211v__x=0;
  double __temp1211v__y=0;
  double __temp1212v__=0;
  char* __temp1213v__=0;
  double __temp1214v__x=0;
  double __temp1214v__y=0;
  double __temp1215v__=0;
  unsigned long long __temp1216v=0;
  unsigned long long __temp1217v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1202v=0.0;
  __temp1203v=__temp1202v;
  x=__temp1203v;
  __temp1204v=0.0;
  __temp1205v=__temp1204v;
  y=__temp1205v;
  __temp1206v=0;
  __temp1207v=__temp1206v;
  i=__temp1207v;
  while(1){
  len__temp486v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1208v__);
  lt__temp182v(i,__temp1208v__,&__temp1209v__);
  if(!__temp1209v__)break;
  __temp_errcode=get__temp482v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1210v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1210v__){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__x,__temp1210v__,8);
  if(!__temp1210v__){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__y,__temp1210v__+8,8);
  add__temp88v(x,__temp1211v__x,&__temp1212v__);
  x=__temp1212v__;
  __temp_errcode=get__temp482v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__x,__temp1213v__,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__y,__temp1213v__+8,8);
  add__temp88v(y,__temp1214v__y,&__temp1215v__);
  y=__temp1215v__;
  __temp1216v=1;
  add__temp110v(i,__temp1216v,&__temp1217v__);
  i=__temp1217v__;
  }
  *__temp1289v=v__unsafe_ptr;
  *__temp1290v=v__unsafe_size;
  *__temp1291v=v__unsafe_align;
  *__temp1292v=x;
  *__temp1293v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1221v() {
  char* __temp1224v__unsafe_ptr=0;
  unsigned long long __temp1224v__unsafe_size=0;
  unsigned long long __temp1224v__unsafe_align=0;
  char* __temp1225v__unsafe_ptr=0;
  unsigned long long __temp1225v__unsafe_size=0;
  unsigned long long __temp1225v__unsafe_align=0;
  unsigned long long __temp1226v=0;
  char* __temp1227v__unsafe_ptr=0;
  unsigned long long __temp1227v__unsafe_size=0;
  unsigned long long __temp1227v__unsafe_align=0;
  char* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1229v=0;
  char* __temp1230v__=0;
  double __temp1231v=0;
  double __temp1232v=0;
  double __temp1233v=0;
  double __temp1234v=0;
  double __temp1235v=0;
  double __temp1236v=0;
  double __temp1237v__plane__x=0;
  double __temp1237v__plane__y=0;
  double __temp1237v__z=0;
  unsigned long long __temp1238v=0;
  char* __temp1239v__=0;
  double __temp1240v=0;
  double __temp1241v=0;
  double __temp1242v=0;
  double __temp1243v=0;
  double __temp1244v=0;
  double __temp1245v=0;
  double __temp1246v__plane__x=0;
  double __temp1246v__plane__y=0;
  double __temp1246v__z=0;
  char* __temp1247v__unsafe_ptr=0;
  unsigned long long __temp1247v__unsafe_size=0;
  unsigned long long __temp1247v__unsafe_align=0;
  double __temp1251v__x=0;
  double __temp1251v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1297v=0;
  char __temp1298v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1222v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align);
  __temp1225v__unsafe_ptr=__temp1224v__unsafe_ptr;
  __temp1225v__unsafe_size=__temp1224v__unsafe_size;
  __temp1225v__unsafe_align=__temp1224v__unsafe_align;
  __temp1226v=10;
  __temp_errcode=alloc__temp434v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align,__temp1226v,&__temp1227v__unsafe_ptr,&__temp1227v__unsafe_size,&__temp1227v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1227v__unsafe_ptr;
  points__unsafe_size=__temp1227v__unsafe_size;
  points__unsafe_align=__temp1227v__unsafe_align;
  __temp1229v=0;
  __temp_errcode=mutget__temp478v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1229v,&__temp1230v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1231v=1.0;
  __temp1232v=__temp1231v;
  __temp1233v=2.0;
  __temp1234v=__temp1233v;
  __temp1235v=3.0;
  __temp1236v=__temp1235v;
  Point3D__temp1218v(__temp1232v,__temp1234v,__temp1236v,&__temp1237v__plane__x,&__temp1237v__plane__y,&__temp1237v__z);
  if(!__temp1230v__){
  goto __temp_failure;
  }
  memcpy(__temp1230v__,&__temp1237v__plane__x,8);
  if(!__temp1230v__){
  goto __temp_failure;
  }
  memcpy(__temp1230v__+8,&__temp1237v__plane__y,8);
  if(!__temp1230v__){
  goto __temp_failure;
  }
  memcpy(__temp1230v__+16,&__temp1237v__z,8);
  __temp1238v=1;
  __temp_errcode=mutget__temp478v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1238v,&__temp1239v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1240v=1.0;
  __temp1241v=__temp1240v;
  __temp1242v=2.0;
  __temp1243v=__temp1242v;
  __temp1244v=3.0;
  __temp1245v=__temp1244v;
  Point3D__temp1218v(__temp1241v,__temp1243v,__temp1245v,&__temp1246v__plane__x,&__temp1246v__plane__y,&__temp1246v__z);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__,&__temp1246v__plane__x,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__+8,&__temp1246v__plane__y,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__+16,&__temp1246v__z,8);
  __temp1247v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1247v__unsafe_size=points__unsafe_size;
  __temp1247v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1201v(&__temp1247v__unsafe_ptr,&__temp1247v__unsafe_size,&__temp1247v__unsafe_align,&__temp1251v__x,&__temp1251v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1251v__x;
  sums__y=__temp1251v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:__temp1297v=0;
  neq__temp302v(__temp1227v__unsafe_size,__temp1297v,&__temp1298v);
  if(__temp1298v){
  __temp1227v__unsafe_size=0;
  free__temp428v(&__temp1227v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1221v();return 0;}