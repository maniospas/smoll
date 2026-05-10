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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1229v(char** __temp1261v, unsigned long long* __temp1262v, unsigned long long* __temp1263v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1261v=unsafe_ptr;
  *__temp1262v=unsafe_size;
  *__temp1263v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1264v) {
  int value=0;
  *__temp1264v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1265v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1265v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1266v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1266v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1267v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1268v) {
  char* allocated=*__temp1268v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1268v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1269v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1270v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1271v) {
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
  *__temp1271v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1272v, unsigned long long* __temp1273v, unsigned long long* __temp1274v, unsigned long long size, char** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1272v;
  unsigned long long buffer__unsafe_size=*__temp1273v;
  unsigned long long buffer__unsafe_align=*__temp1274v;
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
  *__temp1272v=buffer__unsafe_ptr;
  *__temp1273v=buffer__unsafe_size;
  *__temp1274v=buffer__unsafe_align;
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1278v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1279v) {
  *__temp1279v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1280v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1280v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v, unsigned long long i, char** __temp1284v) {
  char* buffer__unsafe_ptr=*__temp1281v;
  unsigned long long buffer__unsafe_size=*__temp1282v;
  unsigned long long buffer__unsafe_align=*__temp1283v;
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
  *__temp1281v=buffer__unsafe_ptr;
  *__temp1282v=buffer__unsafe_size;
  *__temp1283v=buffer__unsafe_align;
  *__temp1284v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1205v(double x, double y, double* __temp1285v, double* __temp1286v) {
  *__temp1285v=x;
  *__temp1286v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1225v(double x, double y, double z, double* __temp1287v, double* __temp1288v, double* __temp1289v) {
  double __temp1226v__x=0;
  double __temp1226v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1205v(x,y,&__temp1226v__x,&__temp1226v__y);
  plane__x=__temp1226v__x;
  plane__y=__temp1226v__y;
  *__temp1287v=plane__x;
  *__temp1288v=plane__y;
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1290v) {
  *__temp1290v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1291v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1292v) {
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
  *__temp1292v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1293v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1293v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1294v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1295v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) int sum__temp1208v(char** __temp1296v, unsigned long long* __temp1297v, unsigned long long* __temp1298v, double* __temp1299v, double* __temp1300v) {
  char* v__unsafe_ptr=*__temp1296v;
  unsigned long long v__unsafe_size=*__temp1297v;
  unsigned long long v__unsafe_align=*__temp1298v;
  double __temp1209v=0;
  double __temp1210v=0;
  double x=0;
  double __temp1211v=0;
  double __temp1212v=0;
  double y=0;
  unsigned long long __temp1213v=0;
  unsigned long long __temp1214v=0;
  unsigned long long i=0;
  unsigned long long __temp1215v__=0;
  char __temp1216v__=0;
  char* __temp1217v__=0;
  double __temp1218v__x=0;
  double __temp1218v__y=0;
  double __temp1219v__=0;
  char* __temp1220v__=0;
  double __temp1221v__x=0;
  double __temp1221v__y=0;
  double __temp1222v__=0;
  unsigned long long __temp1223v=0;
  unsigned long long __temp1224v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1209v=0.0;
  __temp1210v=__temp1209v;
  x=__temp1210v;
  __temp1211v=0.0;
  __temp1212v=__temp1211v;
  y=__temp1212v;
  __temp1213v=0;
  __temp1214v=__temp1213v;
  i=__temp1214v;
  while(1){
  len__temp486v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1215v__);
  lt__temp182v(i,__temp1215v__,&__temp1216v__);
  if(!__temp1216v__){
  break;
  }
  __temp_errcode=get__temp482v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1217v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(&__temp1218v__x,__temp1217v__,8);
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(&__temp1218v__y,__temp1217v__+8,8);
  add__temp88v(x,__temp1218v__x,&__temp1219v__);
  x=__temp1219v__;
  __temp_errcode=get__temp482v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__x,__temp1220v__,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__y,__temp1220v__+8,8);
  add__temp88v(y,__temp1221v__y,&__temp1222v__);
  y=__temp1222v__;
  __temp1223v=1;
  add__temp110v(i,__temp1223v,&__temp1224v__);
  i=__temp1224v__;
  }
  *__temp1296v=v__unsafe_ptr;
  *__temp1297v=v__unsafe_size;
  *__temp1298v=v__unsafe_align;
  *__temp1299v=x;
  *__temp1300v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1228v() {
  char* __temp1231v__unsafe_ptr=0;
  unsigned long long __temp1231v__unsafe_size=0;
  unsigned long long __temp1231v__unsafe_align=0;
  char* __temp1232v__unsafe_ptr=0;
  unsigned long long __temp1232v__unsafe_size=0;
  unsigned long long __temp1232v__unsafe_align=0;
  unsigned long long __temp1233v=0;
  char* __temp1234v__unsafe_ptr=0;
  unsigned long long __temp1234v__unsafe_size=0;
  unsigned long long __temp1234v__unsafe_align=0;
  char* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1236v=0;
  char* __temp1237v__=0;
  double __temp1238v=0;
  double __temp1239v=0;
  double __temp1240v=0;
  double __temp1241v=0;
  double __temp1242v=0;
  double __temp1243v=0;
  double __temp1244v__plane__x=0;
  double __temp1244v__plane__y=0;
  double __temp1244v__z=0;
  unsigned long long __temp1245v=0;
  char* __temp1246v__=0;
  double __temp1247v=0;
  double __temp1248v=0;
  double __temp1249v=0;
  double __temp1250v=0;
  double __temp1251v=0;
  double __temp1252v=0;
  double __temp1253v__plane__x=0;
  double __temp1253v__plane__y=0;
  double __temp1253v__z=0;
  char* __temp1254v__unsafe_ptr=0;
  unsigned long long __temp1254v__unsafe_size=0;
  unsigned long long __temp1254v__unsafe_align=0;
  double __temp1258v__x=0;
  double __temp1258v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1304v=0;
  char __temp1305v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1229v(&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align);
  __temp1232v__unsafe_ptr=__temp1231v__unsafe_ptr;
  __temp1232v__unsafe_size=__temp1231v__unsafe_size;
  __temp1232v__unsafe_align=__temp1231v__unsafe_align;
  __temp1233v=10;
  __temp_errcode=alloc__temp434v(&__temp1232v__unsafe_ptr,&__temp1232v__unsafe_size,&__temp1232v__unsafe_align,__temp1233v,&__temp1234v__unsafe_ptr,&__temp1234v__unsafe_size,&__temp1234v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1234v__unsafe_ptr;
  points__unsafe_size=__temp1234v__unsafe_size;
  points__unsafe_align=__temp1234v__unsafe_align;
  __temp1236v=0;
  __temp_errcode=mutget__temp478v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1236v,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1238v=1.0;
  __temp1239v=__temp1238v;
  __temp1240v=2.0;
  __temp1241v=__temp1240v;
  __temp1242v=3.0;
  __temp1243v=__temp1242v;
  Point3D__temp1225v(__temp1239v,__temp1241v,__temp1243v,&__temp1244v__plane__x,&__temp1244v__plane__y,&__temp1244v__z);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1244v__plane__x,8);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__+8,&__temp1244v__plane__y,8);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__+16,&__temp1244v__z,8);
  __temp1245v=1;
  __temp_errcode=mutget__temp478v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1245v,&__temp1246v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1247v=1.0;
  __temp1248v=__temp1247v;
  __temp1249v=2.0;
  __temp1250v=__temp1249v;
  __temp1251v=3.0;
  __temp1252v=__temp1251v;
  Point3D__temp1225v(__temp1248v,__temp1250v,__temp1252v,&__temp1253v__plane__x,&__temp1253v__plane__y,&__temp1253v__z);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__,&__temp1253v__plane__x,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+8,&__temp1253v__plane__y,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+16,&__temp1253v__z,8);
  __temp1254v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1254v__unsafe_size=points__unsafe_size;
  __temp1254v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1208v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_align,&__temp1258v__x,&__temp1258v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1258v__x;
  sums__y=__temp1258v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:__temp1304v=0;
  neq__temp302v(__temp1234v__unsafe_size,__temp1304v,&__temp1305v);
  if(__temp1305v){
  __temp1234v__unsafe_size=0;
  free__temp428v(&__temp1234v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1228v();return 0;}