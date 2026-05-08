#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp348v="\n";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1223v(void** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v) {
  void* unsafe_ptr=0;
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

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1261v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1262v) {
  void* allocated=*__temp1262v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1262v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1263v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1264v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1265v) {
  void* allocated=0;
  int failed=0;
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

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1266v, unsigned long long* __temp1267v, unsigned long long* __temp1268v, unsigned long long size, void** __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v) {
  void* buffer__unsafe_ptr=*__temp1266v;
  unsigned long long buffer__unsafe_size=*__temp1267v;
  unsigned long long buffer__unsafe_align=*__temp1268v;
  unsigned long long __temp436v=0;
  int __temp437v__=0;
  int __temp440v__=0;
  unsigned long long __temp441v=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  int __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  void* __temp449v__=0;
  unsigned long long __temp450v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  neq__temp302v(size,__temp441v,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp444v__);
  zero__temp430v(buffer__unsafe_ptr,__temp443v,__temp444v__);
  }
  goto __temp_return;
  }
  __temp446v=0;
  neq__temp302v(buffer__unsafe_size,__temp446v,&__temp447v__);
  if(__temp447v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp448v__);
  bytes=__temp448v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp426v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp430v(buffer__unsafe_ptr,__temp450v,bytes);
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

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1272v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1273v) {
  *__temp1273v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1274v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1274v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v, unsigned long long i, void** __temp1278v) {
  void* buffer__unsafe_ptr=*__temp1275v;
  unsigned long long buffer__unsafe_size=*__temp1276v;
  unsigned long long buffer__unsafe_align=*__temp1277v;
  int __temp480v__=0;
  unsigned long long __temp481v__=0;
  void* __temp482v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp480v__);
  if(__temp480v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp481v__);
  add__temp431v(buffer__unsafe_ptr,__temp481v__,&__temp482v__);
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  *__temp1278v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1199v(double x, double y, double* __temp1279v, double* __temp1280v) {
  *__temp1279v=x;
  *__temp1280v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1219v(double x, double y, double z, double* __temp1281v, double* __temp1282v, double* __temp1283v) {
  double __temp1220v__x=0;
  double __temp1220v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1199v(x,y,&__temp1220v__x,&__temp1220v__y);
  plane__x=__temp1220v__x;
  plane__y=__temp1220v__y;
  *__temp1281v=plane__x;
  *__temp1282v=plane__y;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1284v) {
  *__temp1284v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1285v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1285v=z;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1286v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1286v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1287v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1287v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1288v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1289v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) int sum__temp1202v(void** __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v, double* __temp1293v, double* __temp1294v) {
  void* v__unsafe_ptr=*__temp1290v;
  unsigned long long v__unsafe_size=*__temp1291v;
  unsigned long long v__unsafe_align=*__temp1292v;
  double __temp1203v=0;
  double __temp1204v=0;
  double x=0;
  double __temp1205v=0;
  double __temp1206v=0;
  double y=0;
  unsigned long long __temp1207v=0;
  unsigned long long __temp1208v=0;
  unsigned long long i=0;
  unsigned long long __temp1209v__=0;
  int __temp1210v__=0;
  void* __temp1211v__=0;
  double __temp1212v__x=0;
  double __temp1212v__y=0;
  double __temp1213v__=0;
  void* __temp1214v__=0;
  double __temp1215v__x=0;
  double __temp1215v__y=0;
  double __temp1216v__=0;
  unsigned long long __temp1217v=0;
  unsigned long long __temp1218v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1203v=0.0;
  __temp1204v=__temp1203v;
  x=__temp1204v;
  __temp1205v=0.0;
  __temp1206v=__temp1205v;
  y=__temp1206v;
  __temp1207v=0;
  __temp1208v=__temp1207v;
  i=__temp1208v;
  while(1){
  len__temp487v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1209v__);
  lt__temp182v(i,__temp1209v__,&__temp1210v__);
  if(!__temp1210v__)break;
  __temp_errcode=get__temp483v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1211v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1211v__){
  goto __temp_failure;
  }
  memcpy(&__temp1212v__x,(char*)__temp1211v__,8);
  if(!__temp1211v__){
  goto __temp_failure;
  }
  memcpy(&__temp1212v__y,(char*)__temp1211v__+8,8);
  add__temp88v(x,__temp1212v__x,&__temp1213v__);
  x=__temp1213v__;
  __temp_errcode=get__temp483v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__x,(char*)__temp1214v__,8);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__y,(char*)__temp1214v__+8,8);
  add__temp88v(y,__temp1215v__y,&__temp1216v__);
  y=__temp1216v__;
  __temp1217v=1;
  add__temp110v(i,__temp1217v,&__temp1218v__);
  i=__temp1218v__;
  }
  *__temp1290v=v__unsafe_ptr;
  *__temp1291v=v__unsafe_size;
  *__temp1292v=v__unsafe_align;
  *__temp1293v=x;
  *__temp1294v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1222v() {
  void* __temp1225v__unsafe_ptr=0;
  unsigned long long __temp1225v__unsafe_size=0;
  unsigned long long __temp1225v__unsafe_align=0;
  void* __temp1226v__unsafe_ptr=0;
  unsigned long long __temp1226v__unsafe_size=0;
  unsigned long long __temp1226v__unsafe_align=0;
  unsigned long long __temp1227v=0;
  void* __temp1228v__unsafe_ptr=0;
  unsigned long long __temp1228v__unsafe_size=0;
  unsigned long long __temp1228v__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1230v=0;
  void* __temp1231v__=0;
  double __temp1232v=0;
  double __temp1233v=0;
  double __temp1234v=0;
  double __temp1235v=0;
  double __temp1236v=0;
  double __temp1237v=0;
  double __temp1238v__plane__x=0;
  double __temp1238v__plane__y=0;
  double __temp1238v__z=0;
  unsigned long long __temp1239v=0;
  void* __temp1240v__=0;
  double __temp1241v=0;
  double __temp1242v=0;
  double __temp1243v=0;
  double __temp1244v=0;
  double __temp1245v=0;
  double __temp1246v=0;
  double __temp1247v__plane__x=0;
  double __temp1247v__plane__y=0;
  double __temp1247v__z=0;
  void* __temp1248v__unsafe_ptr=0;
  unsigned long long __temp1248v__unsafe_size=0;
  unsigned long long __temp1248v__unsafe_align=0;
  double __temp1252v__x=0;
  double __temp1252v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1298v=0;
  int __temp1299v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1223v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=10;
  __temp_errcode=alloc__temp435v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,__temp1227v,&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1228v__unsafe_ptr;
  points__unsafe_size=__temp1228v__unsafe_size;
  points__unsafe_align=__temp1228v__unsafe_align;
  __temp1230v=0;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1232v=1.0;
  __temp1233v=__temp1232v;
  __temp1234v=2.0;
  __temp1235v=__temp1234v;
  __temp1236v=3.0;
  __temp1237v=__temp1236v;
  Point3D__temp1219v(__temp1233v,__temp1235v,__temp1237v,&__temp1238v__plane__x,&__temp1238v__plane__y,&__temp1238v__z);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1231v__,&__temp1238v__plane__x,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1231v__+8,&__temp1238v__plane__y,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1231v__+16,&__temp1238v__z,8);
  __temp1239v=1;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1241v=1.0;
  __temp1242v=__temp1241v;
  __temp1243v=2.0;
  __temp1244v=__temp1243v;
  __temp1245v=3.0;
  __temp1246v=__temp1245v;
  Point3D__temp1219v(__temp1242v,__temp1244v,__temp1246v,&__temp1247v__plane__x,&__temp1247v__plane__y,&__temp1247v__z);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__,&__temp1247v__plane__x,8);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__+8,&__temp1247v__plane__y,8);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__+16,&__temp1247v__z,8);
  __temp1248v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1248v__unsafe_size=points__unsafe_size;
  __temp1248v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1202v(&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align,&__temp1252v__x,&__temp1252v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1252v__x;
  sums__y=__temp1252v__y;
  print__temp351v(sums__x);
  print__temp351v(sums__y);
  
  __temp_failure:__temp1298v=0;
  neq__temp302v(__temp1228v__unsafe_size,__temp1298v,&__temp1299v);
  if(__temp1299v){
  __temp1228v__unsafe_size=0;
  free__temp429v(&__temp1228v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1222v();return 0;}