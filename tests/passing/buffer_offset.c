#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1207v="starting point creation";
const char* const __temp436v="free";
static const char* __temp_all_errcodes[27] = {"noerr",
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1211v(char** __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1237v=unsafe_ptr;
  *__temp1238v=unsafe_size;
  *__temp1239v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1240v) {
  int value=0;
  *__temp1240v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1241v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1241v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1242v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1242v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1243v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
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

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1245v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1246v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1247v) {
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

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1248v, unsigned long long* __temp1249v, unsigned long long* __temp1250v, unsigned long long size, char** __temp1251v, unsigned long long* __temp1252v, unsigned long long* __temp1253v) {
  char* buffer__unsafe_ptr=*__temp1248v;
  unsigned long long buffer__unsafe_size=*__temp1249v;
  unsigned long long buffer__unsafe_align=*__temp1250v;
  int __temp435v=0;
  unsigned long long __temp438v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  char __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  char __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  char* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp302v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp429v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp302v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1248v=buffer__unsafe_ptr;
  *__temp1249v=buffer__unsafe_size;
  *__temp1250v=buffer__unsafe_align;
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1254v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1255v) {
  *__temp1255v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1256v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1256v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1257v, unsigned long long* __temp1258v, unsigned long long* __temp1259v, unsigned long long i, char** __temp1260v) {
  char* buffer__unsafe_ptr=*__temp1257v;
  unsigned long long buffer__unsafe_size=*__temp1258v;
  unsigned long long buffer__unsafe_align=*__temp1259v;
  char __temp502v__=0;
  unsigned long long __temp503v__=0;
  char* __temp504v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp502v__);
  if(__temp502v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp503v__);
  add__temp430v(buffer__unsafe_ptr,__temp503v__,&__temp504v__);
  unsafe_ptr=__temp504v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1257v=buffer__unsafe_ptr;
  *__temp1258v=buffer__unsafe_size;
  *__temp1259v=buffer__unsafe_align;
  *__temp1260v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1187v(double x, double y, double* __temp1261v, double* __temp1262v) {
  goto __temp_return;
  __temp_return:
  *__temp1261v=x;
  *__temp1262v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1205v(double x, double y, double z, double* __temp1263v, double* __temp1264v, double* __temp1265v) {
  double __temp1206v__x=0;
  double __temp1206v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1187v(x,y,&__temp1206v__x,&__temp1206v__y);
  plane__x=__temp1206v__x;
  plane__y=__temp1206v__y;
  print__temp348v(__temp1207v);
  goto __temp_return;
  __temp_return:
  *__temp1263v=plane__x;
  *__temp1264v=plane__y;
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1266v) {
  goto __temp_return;
  __temp_return:
  *__temp1266v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp402v(unsigned long long to, unsigned long long* __temp1267v, unsigned long long* __temp1268v) {
  int __temp403v=0;
  unsigned long long __temp404v=0;
  unsigned long long _from=0;
  unsigned long long __temp405v=0;
  unsigned long long from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  goto __temp_return;
  __temp_return:
  *__temp1267v=from;
  *__temp1268v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1269v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(unsigned long long* __temp1270v, unsigned long long r__to, unsigned long long* __temp1271v) {
  unsigned long long r__from=*__temp1270v;
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
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1270v=r__from;
  *__temp1271v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1272v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1272v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1273v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1273v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1274v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) int sum__temp1190v(char** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v, double* __temp1278v, double* __temp1279v) {
  char* v__unsafe_ptr=*__temp1275v;
  unsigned long long v__unsafe_size=*__temp1276v;
  unsigned long long v__unsafe_align=*__temp1277v;
  double __temp1191v=0;
  double __temp1192v=0;
  double x=0;
  double __temp1193v=0;
  double __temp1194v=0;
  double y=0;
  unsigned long long __temp1195v__=0;
  unsigned long long __temp1196v__from=0;
  unsigned long long __temp1196v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  char __temp1197v=0;
  unsigned long long __temp1198v__=0;
  unsigned long long i=0;
  char* __temp1199v__=0;
  double __temp1200v__x=0;
  double __temp1200v__y=0;
  double __temp1201v__=0;
  char* __temp1202v__=0;
  double __temp1203v__x=0;
  double __temp1203v__y=0;
  double __temp1204v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1191v=0.0;
  __temp1192v=__temp1191v;
  x=__temp1192v;
  __temp1193v=0.0;
  __temp1194v=__temp1193v;
  y=__temp1194v;
  len__temp509v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1195v__);
  range__temp402v(__temp1195v__,&__temp1196v__from,&__temp1196v__to);
  it__from=__temp1196v__from;
  it__to=__temp1196v__to;
  while(1){
  __temp_complain=next__temp406v(&it__from,it__to,&__temp1198v__);
  __temp1197v=__temp_complain;
  i=__temp1198v__;
  __temp1197v=__temp1197v==0;
  if(!__temp1197v){
  break;
  }
  __temp_errcode=get__temp505v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1199v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1199v__){
  goto __temp_failure;
  }
  memcpy(&__temp1200v__x,__temp1199v__,8);
  if(!__temp1199v__){
  goto __temp_failure;
  }
  memcpy(&__temp1200v__y,__temp1199v__+8,8);
  add__temp88v(x,__temp1200v__x,&__temp1201v__);
  x=__temp1201v__;
  __temp_errcode=get__temp505v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1202v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1202v__){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__x,__temp1202v__,8);
  if(!__temp1202v__){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__y,__temp1202v__+8,8);
  add__temp88v(y,__temp1203v__y,&__temp1204v__);
  y=__temp1204v__;
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

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1210v() {
  char* __temp1213v__unsafe_ptr=0;
  unsigned long long __temp1213v__unsafe_size=0;
  unsigned long long __temp1213v__unsafe_align=0;
  char* __temp1214v__unsafe_ptr=0;
  unsigned long long __temp1214v__unsafe_size=0;
  unsigned long long __temp1214v__unsafe_align=0;
  unsigned long long __temp1215v=0;
  char* __temp1216v__unsafe_ptr=0;
  unsigned long long __temp1216v__unsafe_size=0;
  unsigned long long __temp1216v__unsafe_align=0;
  unsigned long long __temp1217v____temp438v=0;
  char __temp1217v____temp439v__=0;
  char* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1218v=0;
  char* __temp1219v__=0;
  double __temp1220v=0;
  double __temp1221v=0;
  double __temp1222v=0;
  double __temp1223v__plane__x=0;
  double __temp1223v__plane__y=0;
  double __temp1223v__z=0;
  unsigned long long __temp1224v=0;
  char* __temp1225v__=0;
  double __temp1226v=0;
  double __temp1227v=0;
  double __temp1228v=0;
  double __temp1229v__plane__x=0;
  double __temp1229v__plane__y=0;
  double __temp1229v__z=0;
  char* __temp1230v__unsafe_ptr=0;
  unsigned long long __temp1230v__unsafe_size=0;
  unsigned long long __temp1230v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  unsigned long long plane__unsafe_size=0;
  unsigned long long plane__unsafe_align=0;
  double __temp1234v__x=0;
  double __temp1234v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1211v(&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align);
  __temp1214v__unsafe_ptr=__temp1213v__unsafe_ptr;
  __temp1214v__unsafe_size=__temp1213v__unsafe_size;
  __temp1214v__unsafe_align=__temp1213v__unsafe_align;
  __temp1215v=10;
  __temp_errcode=alloc__temp434v(&__temp1214v__unsafe_ptr,&__temp1214v__unsafe_size,&__temp1214v__unsafe_align,__temp1215v,&__temp1216v__unsafe_ptr,&__temp1216v__unsafe_size,&__temp1216v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1216v__unsafe_ptr;
  points__unsafe_size=__temp1216v__unsafe_size;
  points__unsafe_align=__temp1216v__unsafe_align;
  __temp1218v=0;
  __temp_errcode=mutget__temp501v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1218v,&__temp1219v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1220v=1.0;
  __temp1221v=2.0;
  __temp1222v=3.0;
  Point3D__temp1205v(__temp1220v,__temp1221v,__temp1222v,&__temp1223v__plane__x,&__temp1223v__plane__y,&__temp1223v__z);
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__,&__temp1223v__plane__x,8);
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__+8,&__temp1223v__plane__y,8);
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__+16,&__temp1223v__z,8);
  __temp1224v=1;
  __temp_errcode=mutget__temp501v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1224v,&__temp1225v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1226v=1.0;
  __temp1227v=2.0;
  __temp1228v=3.0;
  Point3D__temp1205v(__temp1226v,__temp1227v,__temp1228v,&__temp1229v__plane__x,&__temp1229v__plane__y,&__temp1229v__z);
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__,&__temp1229v__plane__x,8);
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__+8,&__temp1229v__plane__y,8);
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__+16,&__temp1229v__z,8);
  __temp1230v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1230v__unsafe_size=points__unsafe_size;
  __temp1230v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1230v__unsafe_ptr;
  plane__unsafe_size=__temp1230v__unsafe_size;
  plane__unsafe_align=__temp1230v__unsafe_align;
  __temp_errcode=sum__temp1190v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1234v__x,&__temp1234v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1234v__x;
  sums__y=__temp1234v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1210v();return 0;}