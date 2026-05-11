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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1249v(char** __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1281v=unsafe_ptr;
  *__temp1282v=unsafe_size;
  *__temp1283v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1284v) {
  int value=0;
  *__temp1284v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1285v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1285v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1286v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1286v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1287v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1288v) {
  char* allocated=*__temp1288v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1288v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1289v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1290v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1290v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1291v) {
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
  *__temp1291v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp453v(char** __temp1292v, unsigned long long* __temp1293v, unsigned long long* __temp1294v, unsigned long long size, char** __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v) {
  char* buffer__unsafe_ptr=*__temp1292v;
  unsigned long long buffer__unsafe_size=*__temp1293v;
  unsigned long long buffer__unsafe_align=*__temp1294v;
  unsigned long long __temp455v=0;
  char __temp456v__=0;
  char __temp459v__=0;
  unsigned long long __temp460v=0;
  char __temp461v__=0;
  unsigned long long __temp462v=0;
  unsigned long long __temp463v__=0;
  unsigned long long __temp465v=0;
  char __temp466v__=0;
  unsigned long long __temp467v__=0;
  unsigned long long bytes=0;
  char* __temp468v__=0;
  unsigned long long __temp469v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp459v__);
  if(__temp459v__){
  __temp460v=0;
  neq__temp302v(size,__temp460v,&__temp461v__);
  if(__temp461v__){
  __temp462v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp463v__);
  zero__temp429v(buffer__unsafe_ptr,__temp462v,__temp463v__);
  }
  goto __temp_return;
  }
  __temp465v=0;
  neq__temp302v(buffer__unsafe_size,__temp465v,&__temp466v__);
  if(__temp466v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp467v__);
  bytes=__temp467v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp468v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp468v__;
  __temp469v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp469v,bytes);
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_align;
  *__temp1295v=buffer__unsafe_ptr;
  *__temp1296v=buffer__unsafe_size;
  *__temp1297v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1298v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1299v) {
  *__temp1299v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1300v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1300v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp498v(char** __temp1301v, unsigned long long* __temp1302v, unsigned long long* __temp1303v, unsigned long long i, char** __temp1304v) {
  char* buffer__unsafe_ptr=*__temp1301v;
  unsigned long long buffer__unsafe_size=*__temp1302v;
  unsigned long long buffer__unsafe_align=*__temp1303v;
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
  *__temp1301v=buffer__unsafe_ptr;
  *__temp1302v=buffer__unsafe_size;
  *__temp1303v=buffer__unsafe_align;
  *__temp1304v=__temp501v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1225v(double x, double y, double* __temp1305v, double* __temp1306v) {
  *__temp1305v=x;
  *__temp1306v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1245v(double x, double y, double z, double* __temp1307v, double* __temp1308v, double* __temp1309v) {
  double __temp1246v__x=0;
  double __temp1246v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1225v(x,y,&__temp1246v__x,&__temp1246v__y);
  plane__x=__temp1246v__x;
  plane__y=__temp1246v__y;
  *__temp1307v=plane__x;
  *__temp1308v=plane__y;
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1310v) {
  *__temp1310v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1311v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1312v) {
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
  *__temp1312v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1313v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1313v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1314v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1315v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) int sum__temp1228v(char** __temp1316v, unsigned long long* __temp1317v, unsigned long long* __temp1318v, double* __temp1319v, double* __temp1320v) {
  char* v__unsafe_ptr=*__temp1316v;
  unsigned long long v__unsafe_size=*__temp1317v;
  unsigned long long v__unsafe_align=*__temp1318v;
  double __temp1229v=0;
  double __temp1230v=0;
  double x=0;
  double __temp1231v=0;
  double __temp1232v=0;
  double y=0;
  unsigned long long __temp1233v=0;
  unsigned long long __temp1234v=0;
  unsigned long long i=0;
  unsigned long long __temp1235v__=0;
  char __temp1236v__=0;
  char* __temp1237v__=0;
  double __temp1238v__x=0;
  double __temp1238v__y=0;
  double __temp1239v__=0;
  char* __temp1240v__=0;
  double __temp1241v__x=0;
  double __temp1241v__y=0;
  double __temp1242v__=0;
  unsigned long long __temp1243v=0;
  unsigned long long __temp1244v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1229v=0.0;
  __temp1230v=__temp1229v;
  x=__temp1230v;
  __temp1231v=0.0;
  __temp1232v=__temp1231v;
  y=__temp1232v;
  __temp1233v=0;
  __temp1234v=__temp1233v;
  i=__temp1234v;
  while(1){
  len__temp506v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1235v__);
  lt__temp182v(i,__temp1235v__,&__temp1236v__);
  if(!__temp1236v__){
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
  __temp1243v=1;
  add__temp110v(i,__temp1243v,&__temp1244v__);
  i=__temp1244v__;
  }
  *__temp1316v=v__unsafe_ptr;
  *__temp1317v=v__unsafe_size;
  *__temp1318v=v__unsafe_align;
  *__temp1319v=x;
  *__temp1320v=y;
  
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
  double __temp1261v=0;
  double __temp1262v=0;
  double __temp1263v=0;
  double __temp1264v__plane__x=0;
  double __temp1264v__plane__y=0;
  double __temp1264v__z=0;
  unsigned long long __temp1265v=0;
  char* __temp1266v__=0;
  double __temp1267v=0;
  double __temp1268v=0;
  double __temp1269v=0;
  double __temp1270v=0;
  double __temp1271v=0;
  double __temp1272v=0;
  double __temp1273v__plane__x=0;
  double __temp1273v__plane__y=0;
  double __temp1273v__z=0;
  char* __temp1274v__unsafe_ptr=0;
  unsigned long long __temp1274v__unsafe_size=0;
  unsigned long long __temp1274v__unsafe_align=0;
  double __temp1278v__x=0;
  double __temp1278v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1324v=0;
  char __temp1325v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=10;
  __temp_errcode=alloc__temp453v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_align);
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
  __temp1259v=__temp1258v;
  __temp1260v=2.0;
  __temp1261v=__temp1260v;
  __temp1262v=3.0;
  __temp1263v=__temp1262v;
  Point3D__temp1245v(__temp1259v,__temp1261v,__temp1263v,&__temp1264v__plane__x,&__temp1264v__plane__y,&__temp1264v__z);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1264v__plane__x,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+8,&__temp1264v__plane__y,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+16,&__temp1264v__z,8);
  __temp1265v=1;
  __temp_errcode=mutget__temp498v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1265v,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1267v=1.0;
  __temp1268v=__temp1267v;
  __temp1269v=2.0;
  __temp1270v=__temp1269v;
  __temp1271v=3.0;
  __temp1272v=__temp1271v;
  Point3D__temp1245v(__temp1268v,__temp1270v,__temp1272v,&__temp1273v__plane__x,&__temp1273v__plane__y,&__temp1273v__z);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__,&__temp1273v__plane__x,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+8,&__temp1273v__plane__y,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+16,&__temp1273v__z,8);
  __temp1274v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1274v__unsafe_size=points__unsafe_size;
  __temp1274v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1228v(&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_align,&__temp1278v__x,&__temp1278v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1278v__x;
  sums__y=__temp1278v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}