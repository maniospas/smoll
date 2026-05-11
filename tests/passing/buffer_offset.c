#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1245v="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1249v(char** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1275v=unsafe_ptr;
  *__temp1276v=unsafe_size;
  *__temp1277v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1278v) {
  int value=0;
  *__temp1278v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1279v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1279v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1280v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1280v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1281v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1282v) {
  char* allocated=*__temp1282v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1282v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1283v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1284v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1285v) {
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
  *__temp1285v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1286v, unsigned long long* __temp1287v, unsigned long long* __temp1288v, unsigned long long size, char** __temp1289v, unsigned long long* __temp1290v, unsigned long long* __temp1291v) {
  char* buffer__unsafe_ptr=*__temp1286v;
  unsigned long long buffer__unsafe_size=*__temp1287v;
  unsigned long long buffer__unsafe_align=*__temp1288v;
  unsigned long long __temp436v=0;
  char __temp437v__=0;
  char __temp440v__=0;
  unsigned long long __temp441v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  char __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  char* __temp449v__=0;
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
  zero__temp429v(buffer__unsafe_ptr,__temp443v,__temp444v__);
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
  __temp_errcode=alloc__temp425v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp450v,bytes);
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_align;
  *__temp1289v=buffer__unsafe_ptr;
  *__temp1290v=buffer__unsafe_size;
  *__temp1291v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1292v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1293v) {
  *__temp1293v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1294v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1294v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp498v(char** __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v, unsigned long long i, char** __temp1298v) {
  char* buffer__unsafe_ptr=*__temp1295v;
  unsigned long long buffer__unsafe_size=*__temp1296v;
  unsigned long long buffer__unsafe_align=*__temp1297v;
  char __temp499v__=0;
  unsigned long long __temp500v__=0;
  char* __temp501v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp499v__);
  if(__temp499v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp500v__);
  add__temp430v(buffer__unsafe_ptr,__temp500v__,&__temp501v__);
  *__temp1295v=buffer__unsafe_ptr;
  *__temp1296v=buffer__unsafe_size;
  *__temp1297v=buffer__unsafe_align;
  *__temp1298v=__temp501v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1225v(double x, double y, double* __temp1299v, double* __temp1300v) {
  *__temp1299v=x;
  *__temp1300v=y;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1243v(double x, double y, double z, double* __temp1301v, double* __temp1302v, double* __temp1303v) {
  double __temp1244v__x=0;
  double __temp1244v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1225v(x,y,&__temp1244v__x,&__temp1244v__y);
  plane__x=__temp1244v__x;
  plane__y=__temp1244v__y;
  print__temp348v(__temp1245v);
  *__temp1301v=plane__x;
  *__temp1302v=plane__y;
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1304v) {
  *__temp1304v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp402v(unsigned long long to, unsigned long long* __temp1305v, unsigned long long* __temp1306v) {
  unsigned long long __temp404v=0;
  unsigned long long _from=0;
  unsigned long long __temp405v=0;
  unsigned long long from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  *__temp1305v=from;
  *__temp1306v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1307v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(unsigned long long* __temp1308v, unsigned long long r__to, unsigned long long* __temp1309v) {
  unsigned long long r__from=*__temp1308v;
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
  *__temp1308v=r__from;
  *__temp1309v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1310v) {
  char __temp503v__=0;
  unsigned long long __temp504v__=0;
  char* __temp505v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp503v__);
  if(__temp503v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp504v__);
  add__temp430v(buffer__unsafe_ptr,__temp504v__,&__temp505v__);
  *__temp1310v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1311v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1311v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1312v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) int sum__temp1228v(char** __temp1313v, unsigned long long* __temp1314v, unsigned long long* __temp1315v, double* __temp1316v, double* __temp1317v) {
  char* v__unsafe_ptr=*__temp1313v;
  unsigned long long v__unsafe_size=*__temp1314v;
  unsigned long long v__unsafe_align=*__temp1315v;
  double __temp1229v=0;
  double __temp1230v=0;
  double x=0;
  double __temp1231v=0;
  double __temp1232v=0;
  double y=0;
  unsigned long long __temp1233v__=0;
  unsigned long long __temp1234v__from=0;
  unsigned long long __temp1234v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  char __temp1235v=0;
  unsigned long long __temp1236v__=0;
  unsigned long long i=0;
  char* __temp1237v__=0;
  double __temp1238v__x=0;
  double __temp1238v__y=0;
  double __temp1239v__=0;
  char* __temp1240v__=0;
  double __temp1241v__x=0;
  double __temp1241v__y=0;
  double __temp1242v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1229v=0.0;
  __temp1230v=__temp1229v;
  x=__temp1230v;
  __temp1231v=0.0;
  __temp1232v=__temp1231v;
  y=__temp1232v;
  len__temp506v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1233v__);
  range__temp402v(__temp1233v__,&__temp1234v__from,&__temp1234v__to);
  it__from=__temp1234v__from;
  it__to=__temp1234v__to;
  while(1){
  __temp_complain=next__temp406v(&it__from,it__to,&__temp1236v__);
  __temp1235v=__temp_complain;
  i=__temp1236v__;
  __temp1235v=__temp1235v==0;
  if(!__temp1235v){
  break;
  }
  __temp_errcode=get__temp502v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__x,__temp1237v__,8);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__y,__temp1237v__+8,8);
  add__temp88v(x,__temp1238v__x,&__temp1239v__);
  x=__temp1239v__;
  __temp_errcode=get__temp502v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(&__temp1241v__x,__temp1240v__,8);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(&__temp1241v__y,__temp1240v__+8,8);
  add__temp88v(y,__temp1241v__y,&__temp1242v__);
  y=__temp1242v__;
  }
  *__temp1313v=v__unsafe_ptr;
  *__temp1314v=v__unsafe_size;
  *__temp1315v=v__unsafe_align;
  *__temp1316v=x;
  *__temp1317v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1248v() {
  char* __temp1251v__unsafe_ptr=0;
  unsigned long long __temp1251v__unsafe_size=0;
  unsigned long long __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  unsigned long long __temp1252v__unsafe_size=0;
  unsigned long long __temp1252v__unsafe_align=0;
  unsigned long long __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  unsigned long long __temp1254v__unsafe_size=0;
  unsigned long long __temp1254v__unsafe_align=0;
  char* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  double __temp1259v=0;
  double __temp1260v=0;
  double __temp1261v__plane__x=0;
  double __temp1261v__plane__y=0;
  double __temp1261v__z=0;
  unsigned long long __temp1262v=0;
  char* __temp1263v__=0;
  double __temp1264v=0;
  double __temp1265v=0;
  double __temp1266v=0;
  double __temp1267v__plane__x=0;
  double __temp1267v__plane__y=0;
  double __temp1267v__z=0;
  char* __temp1268v__unsafe_ptr=0;
  unsigned long long __temp1268v__unsafe_size=0;
  unsigned long long __temp1268v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  unsigned long long plane__unsafe_size=0;
  unsigned long long plane__unsafe_align=0;
  double __temp1272v__x=0;
  double __temp1272v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1321v=0;
  char __temp1322v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=10;
  __temp_errcode=alloc__temp434v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1254v__unsafe_ptr;
  points__unsafe_size=__temp1254v__unsafe_size;
  points__unsafe_align=__temp1254v__unsafe_align;
  __temp1256v=0;
  __temp_errcode=mutget__temp498v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1256v,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=1.0;
  __temp1259v=2.0;
  __temp1260v=3.0;
  Point3D__temp1243v(__temp1258v,__temp1259v,__temp1260v,&__temp1261v__plane__x,&__temp1261v__plane__y,&__temp1261v__z);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1261v__plane__x,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+8,&__temp1261v__plane__y,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+16,&__temp1261v__z,8);
  __temp1262v=1;
  __temp_errcode=mutget__temp498v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1264v=1.0;
  __temp1265v=2.0;
  __temp1266v=3.0;
  Point3D__temp1243v(__temp1264v,__temp1265v,__temp1266v,&__temp1267v__plane__x,&__temp1267v__plane__y,&__temp1267v__z);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__,&__temp1267v__plane__x,8);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__+8,&__temp1267v__plane__y,8);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__+16,&__temp1267v__z,8);
  __temp1268v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1268v__unsafe_size=points__unsafe_size;
  __temp1268v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1268v__unsafe_ptr;
  plane__unsafe_size=__temp1268v__unsafe_size;
  plane__unsafe_align=__temp1268v__unsafe_align;
  __temp_errcode=sum__temp1228v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1272v__x,&__temp1272v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1272v__x;
  sums__y=__temp1272v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}