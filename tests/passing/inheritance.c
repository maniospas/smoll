#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1211v(char** __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1243v=unsafe_ptr;
  *__temp1244v=unsafe_size;
  *__temp1245v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1246v) {
  int value=0;
  *__temp1246v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1247v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1247v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1248v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1248v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1249v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1250v) {
  char* allocated=*__temp1250v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1250v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1251v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1252v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1253v) {
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

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1254v, unsigned long long* __temp1255v, unsigned long long* __temp1256v, unsigned long long size, char** __temp1257v, unsigned long long* __temp1258v, unsigned long long* __temp1259v) {
  char* buffer__unsafe_ptr=*__temp1254v;
  unsigned long long buffer__unsafe_size=*__temp1255v;
  unsigned long long buffer__unsafe_align=*__temp1256v;
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
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  *__temp1257v=buffer__unsafe_ptr;
  *__temp1258v=buffer__unsafe_size;
  *__temp1259v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1260v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1261v) {
  *__temp1261v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1262v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1262v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1263v, unsigned long long* __temp1264v, unsigned long long* __temp1265v, unsigned long long i, char** __temp1266v) {
  char* buffer__unsafe_ptr=*__temp1263v;
  unsigned long long buffer__unsafe_size=*__temp1264v;
  unsigned long long buffer__unsafe_align=*__temp1265v;
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
  *__temp1263v=buffer__unsafe_ptr;
  *__temp1264v=buffer__unsafe_size;
  *__temp1265v=buffer__unsafe_align;
  *__temp1266v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1187v(double x, double y, double* __temp1267v, double* __temp1268v) {
  goto __temp_return;
  __temp_return:
  *__temp1267v=x;
  *__temp1268v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1207v(double x, double y, double z, double* __temp1269v, double* __temp1270v, double* __temp1271v) {
  double __temp1208v__x=0;
  double __temp1208v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1187v(x,y,&__temp1208v__x,&__temp1208v__y);
  plane__x=__temp1208v__x;
  plane__y=__temp1208v__y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=plane__x;
  *__temp1270v=plane__y;
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1272v) {
  goto __temp_return;
  __temp_return:
  *__temp1272v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1273v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1274v) {
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
  *__temp1274v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1275v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1275v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1276v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1277v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) int sum__temp1190v(char** __temp1278v, unsigned long long* __temp1279v, unsigned long long* __temp1280v, double* __temp1281v, double* __temp1282v) {
  char* v__unsafe_ptr=*__temp1278v;
  unsigned long long v__unsafe_size=*__temp1279v;
  unsigned long long v__unsafe_align=*__temp1280v;
  double __temp1191v=0;
  double __temp1192v=0;
  double x=0;
  double __temp1193v=0;
  double __temp1194v=0;
  double y=0;
  unsigned long long __temp1195v=0;
  unsigned long long __temp1196v=0;
  unsigned long long i=0;
  unsigned long long __temp1197v__=0;
  char __temp1198v__=0;
  char* __temp1199v__=0;
  double __temp1200v__x=0;
  double __temp1200v__y=0;
  double __temp1201v__=0;
  char* __temp1202v__=0;
  double __temp1203v__x=0;
  double __temp1203v__y=0;
  double __temp1204v__=0;
  unsigned long long __temp1205v=0;
  unsigned long long __temp1206v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1191v=0.0;
  __temp1192v=__temp1191v;
  x=__temp1192v;
  __temp1193v=0.0;
  __temp1194v=__temp1193v;
  y=__temp1194v;
  __temp1195v=0;
  __temp1196v=__temp1195v;
  i=__temp1196v;
  while(1){
  len__temp509v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1197v__);
  lt__temp182v(i,__temp1197v__,&__temp1198v__);
  if(!__temp1198v__){
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
  __temp1205v=1;
  add__temp110v(i,__temp1205v,&__temp1206v__);
  i=__temp1206v__;
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
  double __temp1223v=0;
  double __temp1224v=0;
  double __temp1225v=0;
  double __temp1226v__plane__x=0;
  double __temp1226v__plane__y=0;
  double __temp1226v__z=0;
  unsigned long long __temp1227v=0;
  char* __temp1228v__=0;
  double __temp1229v=0;
  double __temp1230v=0;
  double __temp1231v=0;
  double __temp1232v=0;
  double __temp1233v=0;
  double __temp1234v=0;
  double __temp1235v__plane__x=0;
  double __temp1235v__plane__y=0;
  double __temp1235v__z=0;
  char* __temp1236v__unsafe_ptr=0;
  unsigned long long __temp1236v__unsafe_size=0;
  unsigned long long __temp1236v__unsafe_align=0;
  double __temp1240v__x=0;
  double __temp1240v__y=0;
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
  __temp1221v=__temp1220v;
  __temp1222v=2.0;
  __temp1223v=__temp1222v;
  __temp1224v=3.0;
  __temp1225v=__temp1224v;
  Point3D__temp1207v(__temp1221v,__temp1223v,__temp1225v,&__temp1226v__plane__x,&__temp1226v__plane__y,&__temp1226v__z);
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__,&__temp1226v__plane__x,8);
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__+8,&__temp1226v__plane__y,8);
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__+16,&__temp1226v__z,8);
  __temp1227v=1;
  __temp_errcode=mutget__temp501v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1227v,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1229v=1.0;
  __temp1230v=__temp1229v;
  __temp1231v=2.0;
  __temp1232v=__temp1231v;
  __temp1233v=3.0;
  __temp1234v=__temp1233v;
  Point3D__temp1207v(__temp1230v,__temp1232v,__temp1234v,&__temp1235v__plane__x,&__temp1235v__plane__y,&__temp1235v__z);
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__,&__temp1235v__plane__x,8);
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__+8,&__temp1235v__plane__y,8);
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__+16,&__temp1235v__z,8);
  __temp1236v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1236v__unsafe_size=points__unsafe_size;
  __temp1236v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1190v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align,&__temp1240v__x,&__temp1240v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1240v__x;
  sums__y=__temp1240v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1210v();return 0;}