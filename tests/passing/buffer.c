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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1200v(void** __temp1229v, unsigned long long* __temp1230v, unsigned long long* __temp1231v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1229v=unsafe_ptr;
  *__temp1230v=unsafe_size;
  *__temp1231v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1232v) {
  int value=0;
  *__temp1232v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1233v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1233v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1234v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1234v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1235v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1235v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1236v) {
  void* allocated=*__temp1236v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1236v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1237v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1237v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1238v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1238v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1239v) {
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
  *__temp1239v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1240v, unsigned long long* __temp1241v, unsigned long long* __temp1242v, unsigned long long size, void** __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v) {
  void* buffer__unsafe_ptr=*__temp1240v;
  unsigned long long buffer__unsafe_size=*__temp1241v;
  unsigned long long buffer__unsafe_align=*__temp1242v;
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
  *__temp1240v=buffer__unsafe_ptr;
  *__temp1241v=buffer__unsafe_size;
  *__temp1242v=buffer__unsafe_align;
  *__temp1243v=buffer__unsafe_ptr;
  *__temp1244v=buffer__unsafe_size;
  *__temp1245v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1246v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1247v) {
  *__temp1247v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1248v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1248v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1249v, unsigned long long* __temp1250v, unsigned long long* __temp1251v, unsigned long long i, void** __temp1252v) {
  void* buffer__unsafe_ptr=*__temp1249v;
  unsigned long long buffer__unsafe_size=*__temp1250v;
  unsigned long long buffer__unsafe_align=*__temp1251v;
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
  *__temp1249v=buffer__unsafe_ptr;
  *__temp1250v=buffer__unsafe_size;
  *__temp1251v=buffer__unsafe_align;
  *__temp1252v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1199v(void** __temp1259v, unsigned long long* __temp1260v, unsigned long long* __temp1261v) {
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  void* __temp1203v__unsafe_ptr=0;
  unsigned long long __temp1203v__unsafe_size=0;
  unsigned long long __temp1203v__unsafe_align=0;
  unsigned long long __temp1204v=0;
  void* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__unsafe_size=0;
  unsigned long long __temp1205v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1207v=0;
  void* __temp1208v__=0;
  double __temp1209v=0;
  void* __temp1210v__unsafe_ptr=0;
  unsigned long long __temp1210v__unsafe_size=0;
  unsigned long long __temp1210v__unsafe_align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1256v=0;
  int __temp1257v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  __temp1203v__unsafe_ptr=__temp1202v__unsafe_ptr;
  __temp1203v__unsafe_size=__temp1202v__unsafe_size;
  __temp1203v__unsafe_align=__temp1202v__unsafe_align;
  __temp1204v=1;
  __temp_errcode=alloc__temp435v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align,__temp1204v,&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1205v__unsafe_ptr;
  x__unsafe_size=__temp1205v__unsafe_size;
  x__unsafe_align=__temp1205v__unsafe_align;
  __temp1207v=0;
  __temp_errcode=mutget__temp479v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1207v,&__temp1208v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1209v=1.0;
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1208v__,&__temp1209v,8);
  float__temp_buffer__buffer__temp1200v(&__temp1210v__unsafe_ptr,&__temp1210v__unsafe_size,&__temp1210v__unsafe_align);
  y__unsafe_ptr=__temp1210v__unsafe_ptr;
  y__unsafe_size=__temp1210v__unsafe_size;
  y__unsafe_align=__temp1210v__unsafe_align;
  *__temp1259v=x__unsafe_ptr;
  *__temp1260v=x__unsafe_size;
  *__temp1261v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1262v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp428v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp428v__);
  *__temp1262v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1263v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v, unsigned long long size, void** __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v) {
  void* buffer__unsafe_ptr=*__temp1264v;
  unsigned long long buffer__unsafe_size=*__temp1265v;
  unsigned long long buffer__unsafe_align=*__temp1266v;
  int __temp453v__=0;
  unsigned long long __temp454v=0;
  int __temp455v__=0;
  unsigned long long __temp456v=0;
  unsigned long long __temp458v=0;
  int __temp459v__=0;
  unsigned long long __temp460v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp461v__=0;
  unsigned long long bytes=0;
  void* __temp462v__=0;
  int __temp463v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp453v__);
  if(__temp453v__){
  goto __temp_return;
  }
  __temp454v=0;
  eq__temp278v(size,__temp454v,&__temp455v__);
  if(__temp455v__){
  __temp456v=0;
  buffer__unsafe_size=__temp456v;
  free__temp429v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp458v=0;
  eq__temp278v(buffer__unsafe_size,__temp458v,&__temp459v__);
  if(__temp459v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp460v__);
  prev_bytes=__temp460v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp461v__);
  bytes=__temp461v__;
  __temp_errcode=realloc__temp427v(buffer__unsafe_ptr,bytes,&__temp462v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp462v__;
  lt__temp182v(prev_bytes,bytes,&__temp463v__);
  if(__temp463v__){
  zero__temp430v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  *__temp1267v=buffer__unsafe_ptr;
  *__temp1268v=buffer__unsafe_size;
  *__temp1269v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1270v) {
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
  *__temp1270v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp472v(void** __temp1271v, unsigned long long* __temp1272v, unsigned long long* __temp1273v, void** __temp1274v) {
  void* buffer__unsafe_ptr=*__temp1271v;
  unsigned long long buffer__unsafe_size=*__temp1272v;
  unsigned long long buffer__unsafe_align=*__temp1273v;
  unsigned long long __temp473v=0;
  int __temp474v__=0;
  unsigned long long __temp475v=0;
  unsigned long long __temp476v__=0;
  unsigned long long __temp477v__=0;
  void* __temp478v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp473v=0;
  eq__temp278v(__temp473v,buffer__unsafe_size,&__temp474v__);
  if(__temp474v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp475v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp476v__,buffer__unsafe_align,&__temp477v__);
  add__temp431v(buffer__unsafe_ptr,__temp477v__,&__temp478v__);
  *__temp1271v=buffer__unsafe_ptr;
  *__temp1272v=buffer__unsafe_size;
  *__temp1273v=buffer__unsafe_align;
  *__temp1274v=__temp478v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1211v(void** __temp1276v, unsigned long long* __temp1277v, unsigned long long* __temp1278v) {
  void* x__unsafe_ptr=*__temp1276v;
  unsigned long long x__unsafe_size=*__temp1277v;
  unsigned long long x__unsafe_align=*__temp1278v;
  unsigned long long __temp1212v=0;
  void* __temp1213v__unsafe_ptr=0;
  unsigned long long __temp1213v__unsafe_size=0;
  unsigned long long __temp1213v__unsafe_align=0;
  void* __temp1214v__=0;
  double __temp1215v=0;
  void* __temp1216v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1212v=2;
  __temp_errcode=resize__temp452v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1212v,&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1215v=2.0;
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1214v__,&__temp1215v,8);
  __temp1216v=__temp1214v__;
  *__temp1276v=x__unsafe_ptr;
  *__temp1277v=x__unsafe_size;
  *__temp1278v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1279v) {
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
  *__temp1279v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1280v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1280v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1281v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1217v() {
  void* __temp1218v__unsafe_ptr=0;
  unsigned long long __temp1218v__unsafe_size=0;
  unsigned long long __temp1218v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1221v=0;
  void* __temp1222v__=0;
  double __temp1223v__z=0;
  unsigned long long __temp1224v=0;
  void* __temp1225v__=0;
  double __temp1226v__z=0;
  double __temp1227v__=0;
  unsigned long long __temp1283v=0;
  int __temp1284v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1199v(&__temp1218v__unsafe_ptr,&__temp1218v__unsafe_size,&__temp1218v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1218v__unsafe_ptr;
  x__unsafe_size=__temp1218v__unsafe_size;
  x__unsafe_align=__temp1218v__unsafe_align;
  __temp_errcode=test2__temp1211v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1221v=0;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1221v,&__temp1222v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1222v__){
  goto __temp_failure;
  }
  memcpy(&__temp1223v__z,(char*)__temp1222v__,8);
  __temp1224v=1;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1224v,&__temp1225v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(&__temp1226v__z,(char*)__temp1225v__,8);
  add__temp88v(__temp1223v__z,__temp1226v__z,&__temp1227v__);
  print__temp351v(__temp1227v__);
  
  __temp_failure:__temp1283v=0;
  neq__temp302v(__temp1218v__unsafe_size,__temp1283v,&__temp1284v);
  if(__temp1284v){
  __temp1218v__unsafe_size=0;
  free__temp429v(&__temp1218v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1217v();return 0;}