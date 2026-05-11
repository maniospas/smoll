#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1202v="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1206v(char** __temp1232v, uint64_t* __temp1233v, uint64_t* __temp1234v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1232v=unsafe_ptr;
  *__temp1233v=unsafe_size;
  *__temp1234v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1235v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1235v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1236v) {
  char* allocated=*__temp1236v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1236v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1237v) {
  int value=0;
  *__temp1237v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1238v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1238v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1239v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1239v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1240v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1240v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1241v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1242v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1242v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1243v) {
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
  *__temp1243v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1244v, uint64_t* __temp1245v, uint64_t* __temp1246v, uint64_t size, char** __temp1247v, uint64_t* __temp1248v, uint64_t* __temp1249v) {
  char* buffer__unsafe_ptr=*__temp1244v;
  uint64_t buffer__unsafe_size=*__temp1245v;
  uint64_t buffer__unsafe_align=*__temp1246v;
  int __temp435v=0;
  uint8_t __temp436v__=0;
  uint64_t __temp437v=0;
  uint8_t __temp439v__=0;
  uint64_t __temp440v=0;
  uint8_t __temp441v__=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  uint64_t __temp445v=0;
  uint8_t __temp446v__=0;
  uint64_t __temp447v__=0;
  uint64_t bytes=0;
  char* __temp448v__=0;
  uint64_t __temp449v=0;
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
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp436v__);
  if(__temp436v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1244v=buffer__unsafe_ptr;
  *__temp1245v=buffer__unsafe_size;
  *__temp1246v=buffer__unsafe_align;
  *__temp1247v=buffer__unsafe_ptr;
  *__temp1248v=buffer__unsafe_size;
  *__temp1249v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1250v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1251v) {
  *__temp1251v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1252v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1252v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, uint64_t i, char** __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1253v;
  uint64_t buffer__unsafe_size=*__temp1254v;
  uint64_t buffer__unsafe_align=*__temp1255v;
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
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  *__temp1256v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1182v(double x, double y, double* __temp1257v, double* __temp1258v) {
  goto __temp_return;
  __temp_return:
  *__temp1257v=x;
  *__temp1258v=y;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1200v(double x, double y, double z, double* __temp1259v, double* __temp1260v, double* __temp1261v) {
  double __temp1201v__x=0;
  double __temp1201v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1182v(x,y,&__temp1201v__x,&__temp1201v__y);
  plane__x=__temp1201v__x;
  plane__y=__temp1201v__y;
  print__temp348v(__temp1202v);
  goto __temp_return;
  __temp_return:
  *__temp1259v=plane__x;
  *__temp1260v=plane__y;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1262v) {
  goto __temp_return;
  __temp_return:
  *__temp1262v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp402v(uint64_t to, uint64_t* __temp1263v, uint64_t* __temp1264v) {
  int __temp403v=0;
  uint64_t __temp404v=0;
  uint64_t _from=0;
  uint64_t __temp405v=0;
  uint64_t from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  goto __temp_return;
  __temp_return:
  *__temp1263v=from;
  *__temp1264v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1265v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(uint64_t* __temp1266v, uint64_t r__to, uint64_t* __temp1267v) {
  uint64_t r__from=*__temp1266v;
  uint8_t __temp407v__=0;
  uint64_t ret=0;
  uint64_t __temp408v=0;
  uint64_t __temp409v__=0;
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
  *__temp1266v=r__from;
  *__temp1267v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1268v) {
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
  *__temp1268v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1269v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1269v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1270v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) int sum__temp1185v(char** __temp1271v, uint64_t* __temp1272v, uint64_t* __temp1273v, double* __temp1274v, double* __temp1275v) {
  char* v__unsafe_ptr=*__temp1271v;
  uint64_t v__unsafe_size=*__temp1272v;
  uint64_t v__unsafe_align=*__temp1273v;
  double __temp1186v=0;
  double __temp1187v=0;
  double x=0;
  double __temp1188v=0;
  double __temp1189v=0;
  double y=0;
  uint64_t __temp1190v__=0;
  uint64_t __temp1191v__from=0;
  uint64_t __temp1191v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint8_t __temp1192v=0;
  uint64_t __temp1193v__=0;
  uint64_t i=0;
  char* __temp1194v__=0;
  double __temp1195v__x=0;
  double __temp1195v__y=0;
  double __temp1196v__=0;
  char* __temp1197v__=0;
  double __temp1198v__x=0;
  double __temp1198v__y=0;
  double __temp1199v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1186v=0.0;
  __temp1187v=__temp1186v;
  x=__temp1187v;
  __temp1188v=0.0;
  __temp1189v=__temp1188v;
  y=__temp1189v;
  len__temp504v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1190v__);
  range__temp402v(__temp1190v__,&__temp1191v__from,&__temp1191v__to);
  it__from=__temp1191v__from;
  it__to=__temp1191v__to;
  while(1){
  __temp_complain=next__temp406v(&it__from,it__to,&__temp1193v__);
  __temp1192v=__temp_complain;
  i=__temp1193v__;
  __temp1192v=__temp1192v==0;
  if(!__temp1192v){
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
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1271v=v__unsafe_ptr;
  *__temp1272v=v__unsafe_size;
  *__temp1273v=v__unsafe_align;
  *__temp1274v=x;
  *__temp1275v=y;
  
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
  uint8_t __temp1212v____temp436v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint64_t points__unsafe_align=0;
  uint64_t __temp1213v=0;
  char* __temp1214v__=0;
  double __temp1215v=0;
  double __temp1216v=0;
  double __temp1217v=0;
  double __temp1218v__plane__x=0;
  double __temp1218v__plane__y=0;
  double __temp1218v__z=0;
  uint64_t __temp1219v=0;
  char* __temp1220v__=0;
  double __temp1221v=0;
  double __temp1222v=0;
  double __temp1223v=0;
  double __temp1224v__plane__x=0;
  double __temp1224v__plane__y=0;
  double __temp1224v__z=0;
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint64_t plane__unsafe_align=0;
  double __temp1229v__x=0;
  double __temp1229v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1206v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  __temp1209v__unsafe_ptr=__temp1208v__unsafe_ptr;
  __temp1209v__unsafe_size=__temp1208v__unsafe_size;
  __temp1209v__unsafe_align=__temp1208v__unsafe_align;
  __temp1210v=10;
  __temp_errcode=alloc__temp434v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,__temp1210v,&__temp1211v__unsafe_ptr,&__temp1211v__unsafe_size,&__temp1211v__unsafe_align);
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
  __temp1216v=2.0;
  __temp1217v=3.0;
  Point3D__temp1200v(__temp1215v,__temp1216v,__temp1217v,&__temp1218v__plane__x,&__temp1218v__plane__y,&__temp1218v__z);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__,&__temp1218v__plane__x,8);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__+8,&__temp1218v__plane__y,8);
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__+16,&__temp1218v__z,8);
  __temp1219v=1;
  __temp_errcode=mutget__temp496v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1219v,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1221v=1.0;
  __temp1222v=2.0;
  __temp1223v=3.0;
  Point3D__temp1200v(__temp1221v,__temp1222v,__temp1223v,&__temp1224v__plane__x,&__temp1224v__plane__y,&__temp1224v__z);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(__temp1220v__,&__temp1224v__plane__x,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(__temp1220v__+8,&__temp1224v__plane__y,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(__temp1220v__+16,&__temp1224v__z,8);
  __temp1225v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1225v__unsafe_size=points__unsafe_size;
  __temp1225v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1225v__unsafe_ptr;
  plane__unsafe_size=__temp1225v__unsafe_size;
  plane__unsafe_align=__temp1225v__unsafe_align;
  __temp_errcode=sum__temp1185v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1229v__x,&__temp1229v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1229v__x;
  sums__y=__temp1229v__y;
  print__temp353v(sums__x);
  print__temp353v(sums__y);
  
  __temp_failure:exists__temp398v(__temp1211v__unsafe_ptr,&__temp1212v____temp436v__);
  if(__temp1212v____temp436v__){
  __temp1211v__unsafe_size=0;
  __temp1211v__unsafe_size=__temp1211v__unsafe_size;
  free__temp428v(&__temp1211v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1205v();return 0;}