#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[27] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp1220v="starting point creation";
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1224v(void** __temp1250v, unsigned long long* __temp1251v, unsigned long long* __temp1252v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1250v=unsafe_ptr;
  *__temp1251v=unsafe_size;
  *__temp1252v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1253v) {
  int value=0;
  *__temp1253v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1254v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1254v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1255v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1255v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1256v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1257v) {
  void* allocated=*__temp1257v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1257v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1258v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1259v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1259v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1260v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1260v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1261v, unsigned long long* __temp1262v, unsigned long long* __temp1263v, unsigned long long size, void** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v) {
  void* buffer__unsafe_ptr=*__temp1261v;
  unsigned long long buffer__unsafe_size=*__temp1262v;
  unsigned long long buffer__unsafe_align=*__temp1263v;
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
  __temp_errcode=7;
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
  *__temp1261v=buffer__unsafe_ptr;
  *__temp1262v=buffer__unsafe_size;
  *__temp1263v=buffer__unsafe_align;
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1267v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1268v) {
  *__temp1268v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1269v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1269v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v, unsigned long long i, void** __temp1273v) {
  void* buffer__unsafe_ptr=*__temp1270v;
  unsigned long long buffer__unsafe_size=*__temp1271v;
  unsigned long long buffer__unsafe_align=*__temp1272v;
  int __temp480v__=0;
  unsigned long long __temp481v__=0;
  void* __temp482v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp480v__);
  if(__temp480v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp481v__);
  add__temp431v(buffer__unsafe_ptr,__temp481v__,&__temp482v__);
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  *__temp1273v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1200v(double x, double y, double* __temp1274v, double* __temp1275v) {
  *__temp1274v=x;
  *__temp1275v=y;
}

static inline __attribute__((always_inline)) void print__temp346v(const char* value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1218v(double x, double y, double z, double* __temp1276v, double* __temp1277v, double* __temp1278v) {
  double __temp1219v__x=0;
  double __temp1219v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1200v(x,y,&__temp1219v__x,&__temp1219v__y);
  plane__x=__temp1219v__x;
  plane__y=__temp1219v__y;
  print__temp346v(__temp1220v);
  *__temp1276v=plane__x;
  *__temp1277v=plane__y;
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1279v) {
  *__temp1279v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp400v(unsigned long long to, unsigned long long* __temp1280v, unsigned long long* __temp1281v) {
  unsigned long long __temp402v=0;
  unsigned long long _from=0;
  unsigned long long __temp403v=0;
  unsigned long long from=0;
  __temp402v=0;
  _from=__temp402v;
  __temp403v=_from;
  from=__temp403v;
  *__temp1280v=from;
  *__temp1281v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1282v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) int next__temp404v(unsigned long long* __temp1283v, unsigned long long r__to, unsigned long long* __temp1284v) {
  unsigned long long r__from=*__temp1283v;
  int __temp405v__=0;
  unsigned long long ret=0;
  unsigned long long __temp406v=0;
  unsigned long long __temp407v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp405v__);
  if(__temp405v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  ret=r__from;
  __temp406v=1;
  add__temp110v(ret,__temp406v,&__temp407v__);
  r__from=__temp407v__;
  *__temp1283v=r__from;
  *__temp1284v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1285v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1285v=__temp486v__;
  
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

static inline __attribute__((always_inline)) int sum__temp1203v(void** __temp1288v, unsigned long long* __temp1289v, unsigned long long* __temp1290v, double* __temp1291v, double* __temp1292v) {
  void* v__unsafe_ptr=*__temp1288v;
  unsigned long long v__unsafe_size=*__temp1289v;
  unsigned long long v__unsafe_align=*__temp1290v;
  double __temp1204v=0;
  double __temp1205v=0;
  double x=0;
  double __temp1206v=0;
  double __temp1207v=0;
  double y=0;
  unsigned long long __temp1208v__=0;
  unsigned long long __temp1209v__from=0;
  unsigned long long __temp1209v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  int __temp1210v=0;
  unsigned long long __temp1211v__=0;
  unsigned long long i=0;
  void* __temp1212v__=0;
  double __temp1213v__x=0;
  double __temp1213v__y=0;
  double __temp1214v__=0;
  void* __temp1215v__=0;
  double __temp1216v__x=0;
  double __temp1216v__y=0;
  double __temp1217v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1204v=0.0;
  __temp1205v=__temp1204v;
  x=__temp1205v;
  __temp1206v=0.0;
  __temp1207v=__temp1206v;
  y=__temp1207v;
  len__temp487v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1208v__);
  range__temp400v(__temp1208v__,&__temp1209v__from,&__temp1209v__to);
  it__from=__temp1209v__from;
  it__to=__temp1209v__to;
  while(1){
  __temp_complain=next__temp404v(&it__from,it__to,&__temp1211v__);
  __temp1210v=__temp_complain;
  i=__temp1211v__;
  __temp1210v=__temp1210v==0;
  if(!__temp1210v)break;
  __temp_errcode=get__temp483v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1212v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__x,(char*)__temp1212v__,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__y,(char*)__temp1212v__+8,8);
  add__temp88v(x,__temp1213v__x,&__temp1214v__);
  x=__temp1214v__;
  __temp_errcode=get__temp483v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1215v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1215v__){
  goto __temp_failure;
  }
  memcpy(&__temp1216v__x,(char*)__temp1215v__,8);
  if(!__temp1215v__){
  goto __temp_failure;
  }
  memcpy(&__temp1216v__y,(char*)__temp1215v__+8,8);
  add__temp88v(y,__temp1216v__y,&__temp1217v__);
  y=__temp1217v__;
  }
  *__temp1288v=v__unsafe_ptr;
  *__temp1289v=v__unsafe_size;
  *__temp1290v=v__unsafe_align;
  *__temp1291v=x;
  *__temp1292v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1223v() {
  void* __temp1226v__unsafe_ptr=0;
  unsigned long long __temp1226v__unsafe_size=0;
  unsigned long long __temp1226v__unsafe_align=0;
  void* __temp1227v__unsafe_ptr=0;
  unsigned long long __temp1227v__unsafe_size=0;
  unsigned long long __temp1227v__unsafe_align=0;
  unsigned long long __temp1228v=0;
  void* __temp1229v__unsafe_ptr=0;
  unsigned long long __temp1229v__unsafe_size=0;
  unsigned long long __temp1229v__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1231v=0;
  void* __temp1232v__=0;
  double __temp1233v=0;
  double __temp1234v=0;
  double __temp1235v=0;
  double __temp1236v__plane__x=0;
  double __temp1236v__plane__y=0;
  double __temp1236v__z=0;
  unsigned long long __temp1237v=0;
  void* __temp1238v__=0;
  double __temp1239v=0;
  double __temp1240v=0;
  double __temp1241v=0;
  double __temp1242v__plane__x=0;
  double __temp1242v__plane__y=0;
  double __temp1242v__z=0;
  void* __temp1243v__unsafe_ptr=0;
  unsigned long long __temp1243v__unsafe_size=0;
  unsigned long long __temp1243v__unsafe_align=0;
  void* plane__unsafe_ptr=0;
  unsigned long long plane__unsafe_size=0;
  unsigned long long plane__unsafe_align=0;
  double __temp1247v__x=0;
  double __temp1247v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1296v=0;
  int __temp1297v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1224v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align);
  __temp1227v__unsafe_ptr=__temp1226v__unsafe_ptr;
  __temp1227v__unsafe_size=__temp1226v__unsafe_size;
  __temp1227v__unsafe_align=__temp1226v__unsafe_align;
  __temp1228v=10;
  __temp_errcode=alloc__temp435v(&__temp1227v__unsafe_ptr,&__temp1227v__unsafe_size,&__temp1227v__unsafe_align,__temp1228v,&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1229v__unsafe_ptr;
  points__unsafe_size=__temp1229v__unsafe_size;
  points__unsafe_align=__temp1229v__unsafe_align;
  __temp1231v=0;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1231v,&__temp1232v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1233v=1.0;
  __temp1234v=2.0;
  __temp1235v=3.0;
  Point3D__temp1218v(__temp1233v,__temp1234v,__temp1235v,&__temp1236v__plane__x,&__temp1236v__plane__y,&__temp1236v__z);
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1232v__,&__temp1236v__plane__x,8);
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1232v__+8,&__temp1236v__plane__y,8);
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1232v__+16,&__temp1236v__z,8);
  __temp1237v=1;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1237v,&__temp1238v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1239v=1.0;
  __temp1240v=2.0;
  __temp1241v=3.0;
  Point3D__temp1218v(__temp1239v,__temp1240v,__temp1241v,&__temp1242v__plane__x,&__temp1242v__plane__y,&__temp1242v__z);
  if(!__temp1238v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1238v__,&__temp1242v__plane__x,8);
  if(!__temp1238v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1238v__+8,&__temp1242v__plane__y,8);
  if(!__temp1238v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1238v__+16,&__temp1242v__z,8);
  __temp1243v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1243v__unsafe_size=points__unsafe_size;
  __temp1243v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1243v__unsafe_ptr;
  plane__unsafe_size=__temp1243v__unsafe_size;
  plane__unsafe_align=__temp1243v__unsafe_align;
  __temp_errcode=sum__temp1203v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1247v__x,&__temp1247v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1247v__x;
  sums__y=__temp1247v__y;
  print__temp351v(sums__x);
  print__temp351v(sums__y);
  
  __temp_failure:__temp1296v=0;
  neq__temp302v(__temp1229v__unsafe_size,__temp1296v,&__temp1297v);
  if(__temp1297v){
  __temp1229v__unsafe_size=0;
  free__temp429v(&__temp1229v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1223v();return 0;}