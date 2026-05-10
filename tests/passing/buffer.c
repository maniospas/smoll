#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1199v(void** __temp1228v, unsigned long long* __temp1229v, unsigned long long* __temp1230v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1228v=unsafe_ptr;
  *__temp1229v=unsafe_size;
  *__temp1230v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1231v) {
  int value=0;
  *__temp1231v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1232v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1232v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1233v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1233v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1234v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1234v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1235v) {
  void* allocated=*__temp1235v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1235v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1236v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1236v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1237v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1237v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1238v) {
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
  *__temp1238v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1239v, unsigned long long* __temp1240v, unsigned long long* __temp1241v, unsigned long long size, void** __temp1242v, unsigned long long* __temp1243v, unsigned long long* __temp1244v) {
  void* buffer__unsafe_ptr=*__temp1239v;
  unsigned long long buffer__unsafe_size=*__temp1240v;
  unsigned long long buffer__unsafe_align=*__temp1241v;
  unsigned long long __temp435v=0;
  int __temp436v__=0;
  int __temp439v__=0;
  unsigned long long __temp440v=0;
  int __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  int __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  void* __temp448v__=0;
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
  *__temp1239v=buffer__unsafe_ptr;
  *__temp1240v=buffer__unsafe_size;
  *__temp1241v=buffer__unsafe_align;
  *__temp1242v=buffer__unsafe_ptr;
  *__temp1243v=buffer__unsafe_size;
  *__temp1244v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1245v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1246v) {
  *__temp1246v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1247v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1247v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(void** __temp1248v, unsigned long long* __temp1249v, unsigned long long* __temp1250v, unsigned long long i, void** __temp1251v) {
  void* buffer__unsafe_ptr=*__temp1248v;
  unsigned long long buffer__unsafe_size=*__temp1249v;
  unsigned long long buffer__unsafe_align=*__temp1250v;
  int __temp479v__=0;
  unsigned long long __temp480v__=0;
  void* __temp481v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp480v__);
  add__temp430v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1248v=buffer__unsafe_ptr;
  *__temp1249v=buffer__unsafe_size;
  *__temp1250v=buffer__unsafe_align;
  *__temp1251v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1198v(void** __temp1258v, unsigned long long* __temp1259v, unsigned long long* __temp1260v) {
  void* __temp1201v__unsafe_ptr=0;
  unsigned long long __temp1201v__unsafe_size=0;
  unsigned long long __temp1201v__unsafe_align=0;
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  unsigned long long __temp1203v=0;
  void* __temp1204v__unsafe_ptr=0;
  unsigned long long __temp1204v__unsafe_size=0;
  unsigned long long __temp1204v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1206v=0;
  void* __temp1207v__=0;
  double __temp1208v=0;
  void* __temp1209v__unsafe_ptr=0;
  unsigned long long __temp1209v__unsafe_size=0;
  unsigned long long __temp1209v__unsafe_align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1255v=0;
  int __temp1256v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  __temp1203v=1;
  __temp_errcode=alloc__temp434v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,__temp1203v,&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1204v__unsafe_ptr;
  x__unsafe_size=__temp1204v__unsafe_size;
  x__unsafe_align=__temp1204v__unsafe_align;
  __temp1206v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1206v,&__temp1207v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1208v=1.0;
  if(!__temp1207v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1207v__,&__temp1208v,8);
  float__temp_buffer__buffer__temp1199v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align);
  y__unsafe_ptr=__temp1209v__unsafe_ptr;
  y__unsafe_size=__temp1209v__unsafe_size;
  y__unsafe_align=__temp1209v__unsafe_align;
  *__temp1258v=x__unsafe_ptr;
  *__temp1259v=x__unsafe_size;
  *__temp1260v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp426v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1261v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp427v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  *__temp1261v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1262v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) int resize__temp451v(void** __temp1263v, unsigned long long* __temp1264v, unsigned long long* __temp1265v, unsigned long long size, void** __temp1266v, unsigned long long* __temp1267v, unsigned long long* __temp1268v) {
  void* buffer__unsafe_ptr=*__temp1263v;
  unsigned long long buffer__unsafe_size=*__temp1264v;
  unsigned long long buffer__unsafe_align=*__temp1265v;
  int __temp452v__=0;
  unsigned long long __temp453v=0;
  int __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  int __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  void* __temp461v__=0;
  int __temp462v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp452v__);
  if(__temp452v__){
  goto __temp_return;
  }
  __temp453v=0;
  eq__temp278v(size,__temp453v,&__temp454v__);
  if(__temp454v__){
  __temp455v=0;
  buffer__unsafe_size=__temp455v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp457v=0;
  eq__temp278v(buffer__unsafe_size,__temp457v,&__temp458v__);
  if(__temp458v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp459v__);
  prev_bytes=__temp459v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp460v__);
  bytes=__temp460v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp461v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__;
  lt__temp182v(prev_bytes,bytes,&__temp462v__);
  if(__temp462v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1263v=buffer__unsafe_ptr;
  *__temp1264v=buffer__unsafe_size;
  *__temp1265v=buffer__unsafe_align;
  *__temp1266v=buffer__unsafe_ptr;
  *__temp1267v=buffer__unsafe_size;
  *__temp1268v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1269v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1269v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp471v(void** __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v, void** __temp1273v) {
  void* buffer__unsafe_ptr=*__temp1270v;
  unsigned long long buffer__unsafe_size=*__temp1271v;
  unsigned long long buffer__unsafe_align=*__temp1272v;
  unsigned long long __temp472v=0;
  int __temp473v__=0;
  unsigned long long __temp474v=0;
  unsigned long long __temp475v__=0;
  unsigned long long __temp476v__=0;
  void* __temp477v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp472v=0;
  eq__temp278v(__temp472v,buffer__unsafe_size,&__temp473v__);
  if(__temp473v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp474v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp474v,&__temp475v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp475v__,buffer__unsafe_align,&__temp476v__);
  add__temp430v(buffer__unsafe_ptr,__temp476v__,&__temp477v__);
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  *__temp1273v=__temp477v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1210v(void** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v) {
  void* x__unsafe_ptr=*__temp1275v;
  unsigned long long x__unsafe_size=*__temp1276v;
  unsigned long long x__unsafe_align=*__temp1277v;
  unsigned long long __temp1211v=0;
  void* __temp1212v__unsafe_ptr=0;
  unsigned long long __temp1212v__unsafe_size=0;
  unsigned long long __temp1212v__unsafe_align=0;
  void* __temp1213v__=0;
  double __temp1214v=0;
  void* __temp1215v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1211v=2;
  __temp_errcode=resize__temp451v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1211v,&__temp1212v__unsafe_ptr,&__temp1212v__unsafe_size,&__temp1212v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp471v(&__temp1212v__unsafe_ptr,&__temp1212v__unsafe_size,&__temp1212v__unsafe_align,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1214v=2.0;
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1213v__,&__temp1214v,8);
  __temp1215v=__temp1213v__;
  *__temp1275v=x__unsafe_ptr;
  *__temp1276v=x__unsafe_size;
  *__temp1277v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1278v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1278v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1279v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1279v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1280v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1216v() {
  void* __temp1217v__unsafe_ptr=0;
  unsigned long long __temp1217v__unsafe_size=0;
  unsigned long long __temp1217v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1220v=0;
  void* __temp1221v__=0;
  double __temp1222v__value=0;
  unsigned long long __temp1223v=0;
  void* __temp1224v__=0;
  double __temp1225v__value=0;
  double __temp1226v__=0;
  unsigned long long __temp1282v=0;
  int __temp1283v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1198v(&__temp1217v__unsafe_ptr,&__temp1217v__unsafe_size,&__temp1217v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1217v__unsafe_ptr;
  x__unsafe_size=__temp1217v__unsafe_size;
  x__unsafe_align=__temp1217v__unsafe_align;
  __temp_errcode=test2__temp1210v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1220v=0;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1220v,&__temp1221v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__value,(char*)__temp1221v__,8);
  __temp1223v=1;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1223v,&__temp1224v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1224v__){
  goto __temp_failure;
  }
  memcpy(&__temp1225v__value,(char*)__temp1224v__,8);
  add__temp88v(__temp1222v__value,__temp1225v__value,&__temp1226v__);
  print__temp353v(__temp1226v__);
  
  __temp_failure:__temp1282v=0;
  neq__temp302v(__temp1217v__unsafe_size,__temp1282v,&__temp1283v);
  if(__temp1283v){
  __temp1217v__unsafe_size=0;
  free__temp428v(&__temp1217v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1216v();return 0;}