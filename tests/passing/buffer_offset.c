#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1225v="starting point creation";
const char* const __temp352v="\n";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1229v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1255v=unsafe_ptr;
  *__temp1256v=unsafe_size;
  *__temp1257v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1258v) {
  int value=0;
  *__temp1258v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1259v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1259v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1260v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1260v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1261v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1262v) {
  char* allocated=*__temp1262v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1262v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1263v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1264v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1265v) {
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
  *__temp1265v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1266v, unsigned long long* __temp1267v, unsigned long long* __temp1268v, unsigned long long size, char** __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v) {
  char* buffer__unsafe_ptr=*__temp1266v;
  unsigned long long buffer__unsafe_size=*__temp1267v;
  unsigned long long buffer__unsafe_align=*__temp1268v;
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
  *__temp1266v=buffer__unsafe_ptr;
  *__temp1267v=buffer__unsafe_size;
  *__temp1268v=buffer__unsafe_align;
  *__temp1269v=buffer__unsafe_ptr;
  *__temp1270v=buffer__unsafe_size;
  *__temp1271v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1272v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1273v) {
  *__temp1273v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1274v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1274v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v, unsigned long long i, char** __temp1278v) {
  char* buffer__unsafe_ptr=*__temp1275v;
  unsigned long long buffer__unsafe_size=*__temp1276v;
  unsigned long long buffer__unsafe_align=*__temp1277v;
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
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  *__temp1278v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1205v(double x, double y, double* __temp1279v, double* __temp1280v) {
  *__temp1279v=x;
  *__temp1280v=y;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1223v(double x, double y, double z, double* __temp1281v, double* __temp1282v, double* __temp1283v) {
  double __temp1224v__x=0;
  double __temp1224v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1205v(x,y,&__temp1224v__x,&__temp1224v__y);
  plane__x=__temp1224v__x;
  plane__y=__temp1224v__y;
  print__temp350v(__temp1225v);
  *__temp1281v=plane__x;
  *__temp1282v=plane__y;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1284v) {
  *__temp1284v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp402v(unsigned long long to, unsigned long long* __temp1285v, unsigned long long* __temp1286v) {
  unsigned long long __temp404v=0;
  unsigned long long _from=0;
  unsigned long long __temp405v=0;
  unsigned long long from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  *__temp1285v=from;
  *__temp1286v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1287v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(unsigned long long* __temp1288v, unsigned long long r__to, unsigned long long* __temp1289v) {
  unsigned long long r__from=*__temp1288v;
  char __temp407v__=0;
  unsigned long long ret=0;
  unsigned long long __temp408v=0;
  unsigned long long __temp409v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp407v__);
  if(__temp407v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp408v=1;
  add__temp110v(ret,__temp408v,&__temp409v__);
  r__from=__temp409v__;
  *__temp1288v=r__from;
  *__temp1289v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1290v) {
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
  *__temp1290v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1291v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1291v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1292v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) int sum__temp1208v(char** __temp1293v, unsigned long long* __temp1294v, unsigned long long* __temp1295v, double* __temp1296v, double* __temp1297v) {
  char* v__unsafe_ptr=*__temp1293v;
  unsigned long long v__unsafe_size=*__temp1294v;
  unsigned long long v__unsafe_align=*__temp1295v;
  double __temp1209v=0;
  double __temp1210v=0;
  double x=0;
  double __temp1211v=0;
  double __temp1212v=0;
  double y=0;
  unsigned long long __temp1213v__=0;
  unsigned long long __temp1214v__from=0;
  unsigned long long __temp1214v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  char __temp1215v=0;
  unsigned long long __temp1216v__=0;
  unsigned long long i=0;
  char* __temp1217v__=0;
  double __temp1218v__x=0;
  double __temp1218v__y=0;
  double __temp1219v__=0;
  char* __temp1220v__=0;
  double __temp1221v__x=0;
  double __temp1221v__y=0;
  double __temp1222v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1209v=0.0;
  __temp1210v=__temp1209v;
  x=__temp1210v;
  __temp1211v=0.0;
  __temp1212v=__temp1211v;
  y=__temp1212v;
  len__temp486v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1213v__);
  range__temp402v(__temp1213v__,&__temp1214v__from,&__temp1214v__to);
  it__from=__temp1214v__from;
  it__to=__temp1214v__to;
  while(1){
  __temp_complain=next__temp406v(&it__from,it__to,&__temp1216v__);
  __temp1215v=__temp_complain;
  i=__temp1216v__;
  __temp1215v=__temp1215v==0;
  if(!__temp1215v){
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
  }
  *__temp1293v=v__unsafe_ptr;
  *__temp1294v=v__unsafe_size;
  *__temp1295v=v__unsafe_align;
  *__temp1296v=x;
  *__temp1297v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp355v(double value) {
  const char* endl=0;
  endl=__temp352v;
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
  double __temp1241v__plane__x=0;
  double __temp1241v__plane__y=0;
  double __temp1241v__z=0;
  unsigned long long __temp1242v=0;
  char* __temp1243v__=0;
  double __temp1244v=0;
  double __temp1245v=0;
  double __temp1246v=0;
  double __temp1247v__plane__x=0;
  double __temp1247v__plane__y=0;
  double __temp1247v__z=0;
  char* __temp1248v__unsafe_ptr=0;
  unsigned long long __temp1248v__unsafe_size=0;
  unsigned long long __temp1248v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  unsigned long long plane__unsafe_size=0;
  unsigned long long plane__unsafe_align=0;
  double __temp1252v__x=0;
  double __temp1252v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1301v=0;
  char __temp1302v=0;
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
  __temp1239v=2.0;
  __temp1240v=3.0;
  Point3D__temp1223v(__temp1238v,__temp1239v,__temp1240v,&__temp1241v__plane__x,&__temp1241v__plane__y,&__temp1241v__z);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1241v__plane__x,8);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__+8,&__temp1241v__plane__y,8);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__+16,&__temp1241v__z,8);
  __temp1242v=1;
  __temp_errcode=mutget__temp478v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1242v,&__temp1243v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1244v=1.0;
  __temp1245v=2.0;
  __temp1246v=3.0;
  Point3D__temp1223v(__temp1244v,__temp1245v,__temp1246v,&__temp1247v__plane__x,&__temp1247v__plane__y,&__temp1247v__z);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__,&__temp1247v__plane__x,8);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__+8,&__temp1247v__plane__y,8);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__+16,&__temp1247v__z,8);
  __temp1248v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1248v__unsafe_size=points__unsafe_size;
  __temp1248v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1248v__unsafe_ptr;
  plane__unsafe_size=__temp1248v__unsafe_size;
  plane__unsafe_align=__temp1248v__unsafe_align;
  __temp_errcode=sum__temp1208v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1252v__x,&__temp1252v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1252v__x;
  sums__y=__temp1252v__y;
  print__temp355v(sums__x);
  print__temp355v(sums__y);
  
  __temp_failure:__temp1301v=0;
  neq__temp302v(__temp1234v__unsafe_size,__temp1301v,&__temp1302v);
  if(__temp1302v){
  __temp1234v__unsafe_size=0;
  free__temp428v(&__temp1234v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1228v();return 0;}