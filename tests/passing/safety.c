#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp576v="";
const char* const __temp1217v="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1200v(void** __temp1236v, unsigned long long* __temp1237v, unsigned long long* __temp1238v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1236v=unsafe_ptr;
  *__temp1237v=unsafe_size;
  *__temp1238v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1239v) {
  int value=0;
  *__temp1239v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1240v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1240v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1241v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1241v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1242v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1242v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1243v) {
  void* allocated=*__temp1243v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1243v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1244v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1245v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1246v) {
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
  *__temp1246v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1247v, unsigned long long* __temp1248v, unsigned long long* __temp1249v, unsigned long long size, void** __temp1250v, unsigned long long* __temp1251v, unsigned long long* __temp1252v) {
  void* buffer__unsafe_ptr=*__temp1247v;
  unsigned long long buffer__unsafe_size=*__temp1248v;
  unsigned long long buffer__unsafe_align=*__temp1249v;
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
  *__temp1247v=buffer__unsafe_ptr;
  *__temp1248v=buffer__unsafe_size;
  *__temp1249v=buffer__unsafe_align;
  *__temp1250v=buffer__unsafe_ptr;
  *__temp1251v=buffer__unsafe_size;
  *__temp1252v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1253v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1253v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1254v) {
  *__temp1254v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1255v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1255v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1256v, unsigned long long* __temp1257v, unsigned long long* __temp1258v, unsigned long long i, void** __temp1259v) {
  void* buffer__unsafe_ptr=*__temp1256v;
  unsigned long long buffer__unsafe_size=*__temp1257v;
  unsigned long long buffer__unsafe_align=*__temp1258v;
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
  *__temp1256v=buffer__unsafe_ptr;
  *__temp1257v=buffer__unsafe_size;
  *__temp1258v=buffer__unsafe_align;
  *__temp1259v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1260v) {
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
  *__temp1260v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp349v(const char* value, const char* endl) {
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1261v) {
  *__temp1261v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1199v(void** __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v) {
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
  unsigned long long __temp1210v=0;
  void* __temp1211v__=0;
  double __temp1212v=0;
  unsigned long long __temp1213v=0;
  void* __temp1214v__=0;
  double __temp1215v__value=0;
  unsigned long long __temp1265v=0;
  int __temp1266v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  __temp1203v__unsafe_ptr=__temp1202v__unsafe_ptr;
  __temp1203v__unsafe_size=__temp1202v__unsafe_size;
  __temp1203v__unsafe_align=__temp1202v__unsafe_align;
  __temp1204v=2;
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
  __temp1210v=1;
  __temp_errcode=mutget__temp479v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1210v,&__temp1211v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1212v=2.0;
  if(!__temp1211v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1211v__,&__temp1212v,8);
  __temp1213v=1;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1213v,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__value,(char*)__temp1214v__,8);
  print__temp351v(__temp1215v__value);
  *__temp1267v=x__unsafe_ptr;
  *__temp1268v=x__unsafe_size;
  *__temp1269v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1221v(void** __temp1278v, unsigned long long* __temp1279v, unsigned long long* __temp1280v, void** __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v, void** __temp1284v, unsigned long long* __temp1285v, unsigned long long* __temp1286v) {
  void* __temp1222v__unsafe_ptr=0;
  unsigned long long __temp1222v__unsafe_size=0;
  unsigned long long __temp1222v__unsafe_align=0;
  void* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  void* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  void* __temp1224v__unsafe_ptr=0;
  unsigned long long __temp1224v__unsafe_size=0;
  unsigned long long __temp1224v__unsafe_align=0;
  void* __temp1225v__unsafe_ptr=0;
  unsigned long long __temp1225v__unsafe_size=0;
  unsigned long long __temp1225v__unsafe_align=0;
  unsigned long long __temp1226v=0;
  void* __temp1227v__unsafe_ptr=0;
  unsigned long long __temp1227v__unsafe_size=0;
  unsigned long long __temp1227v__unsafe_align=0;
  void* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1271v=0;
  int __temp1272v=0;
  unsigned long long __temp1276v=0;
  int __temp1277v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1199v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1222v__unsafe_ptr;
  t__unsafe_size=__temp1222v__unsafe_size;
  t__unsafe_align=__temp1222v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1200v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align);
  __temp1225v__unsafe_ptr=__temp1224v__unsafe_ptr;
  __temp1225v__unsafe_size=__temp1224v__unsafe_size;
  __temp1225v__unsafe_align=__temp1224v__unsafe_align;
  __temp1226v=3;
  __temp_errcode=alloc__temp435v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align,__temp1226v,&__temp1227v__unsafe_ptr,&__temp1227v__unsafe_size,&__temp1227v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1227v__unsafe_ptr;
  k__unsafe_size=__temp1227v__unsafe_size;
  k__unsafe_align=__temp1227v__unsafe_align;
  *__temp1278v=t__unsafe_ptr;
  *__temp1279v=t__unsafe_size;
  *__temp1280v=t__unsafe_align;
  *__temp1281v=j__unsafe_ptr;
  *__temp1282v=j__unsafe_size;
  *__temp1283v=j__unsafe_align;
  *__temp1284v=k__unsafe_ptr;
  *__temp1285v=k__unsafe_size;
  *__temp1286v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1229v() {
  void* __temp1230v__t__unsafe_ptr=0;
  unsigned long long __temp1230v__t__unsafe_size=0;
  unsigned long long __temp1230v__t__unsafe_align=0;
  void* __temp1230v__j__unsafe_ptr=0;
  unsigned long long __temp1230v__j__unsafe_size=0;
  unsigned long long __temp1230v__j__unsafe_align=0;
  void* __temp1230v__k__unsafe_ptr=0;
  unsigned long long __temp1230v__k__unsafe_size=0;
  unsigned long long __temp1230v__k__unsafe_align=0;
  void* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  void* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  void* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1232v=0;
  void* __temp1233v__=0;
  double __temp1234v__value=0;
  unsigned long long __temp1290v=0;
  int __temp1291v=0;
  unsigned long long __temp1292v=0;
  int __temp1293v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1221v(&__temp1230v__t__unsafe_ptr,&__temp1230v__t__unsafe_size,&__temp1230v__t__unsafe_align,&__temp1230v__j__unsafe_ptr,&__temp1230v__j__unsafe_size,&__temp1230v__j__unsafe_align,&__temp1230v__k__unsafe_ptr,&__temp1230v__k__unsafe_size,&__temp1230v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1230v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1230v__t__unsafe_size;
  t__t__unsafe_align=__temp1230v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1230v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1230v__j__unsafe_size;
  t__j__unsafe_align=__temp1230v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1230v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1230v__k__unsafe_size;
  t__k__unsafe_align=__temp1230v__k__unsafe_align;
  __temp1232v=1;
  __temp_errcode=get__temp483v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1232v,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1233v__){
  goto __temp_failure;
  }
  memcpy(&__temp1234v__value,(char*)__temp1233v__,8);
  print__temp351v(__temp1234v__value);
  
  __temp_failure:__temp1292v=0;
  neq__temp302v(__temp1230v__k__unsafe_size,__temp1292v,&__temp1293v);
  if(__temp1293v){
  __temp1230v__k__unsafe_size=0;
  free__temp429v(&__temp1230v__k__unsafe_ptr);
  }
  print__temp349v(__temp1217v,__temp576v);
  len__temp487v(__temp1230v__t__unsafe_ptr,__temp1230v__t__unsafe_size,__temp1230v__t__unsafe_align,&__temp1230v__t__unsafe_size);
  print__temp359v(__temp1230v__t__unsafe_size);
  __temp1290v=0;
  neq__temp302v(__temp1230v__t__unsafe_size,__temp1290v,&__temp1291v);
  if(__temp1291v){
  __temp1230v__t__unsafe_size=0;
  free__temp429v(&__temp1230v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1229v();return 0;}