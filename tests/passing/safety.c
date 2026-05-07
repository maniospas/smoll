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
const char* const __temp576v="";
const char* const __temp348v="\n";
const char* const __temp1218v="going to deallocate of size: ";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1201v(void** __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1237v=unsafe_ptr;
  *__temp1238v=unsafe_size;
  *__temp1239v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1240v) {
  int value=0;
  *__temp1240v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1241v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1241v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1242v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1242v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1243v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1244v) {
  void* allocated=*__temp1244v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1244v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1245v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1246v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1247v) {
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
  *__temp1247v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1248v, unsigned long long* __temp1249v, unsigned long long* __temp1250v, unsigned long long size, void** __temp1251v, unsigned long long* __temp1252v, unsigned long long* __temp1253v) {
  void* buffer__unsafe_ptr=*__temp1248v;
  unsigned long long buffer__unsafe_size=*__temp1249v;
  unsigned long long buffer__unsafe_align=*__temp1250v;
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
  *__temp1248v=buffer__unsafe_ptr;
  *__temp1249v=buffer__unsafe_size;
  *__temp1250v=buffer__unsafe_align;
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1254v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1255v) {
  *__temp1255v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1256v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1256v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1257v, unsigned long long* __temp1258v, unsigned long long* __temp1259v, unsigned long long i, void** __temp1260v) {
  void* buffer__unsafe_ptr=*__temp1257v;
  unsigned long long buffer__unsafe_size=*__temp1258v;
  unsigned long long buffer__unsafe_align=*__temp1259v;
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
  *__temp1257v=buffer__unsafe_ptr;
  *__temp1258v=buffer__unsafe_size;
  *__temp1259v=buffer__unsafe_align;
  *__temp1260v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1261v) {
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
  *__temp1261v=__temp486v__;
  
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

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1262v) {
  *__temp1262v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1200v(void** __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v) {
  void* __temp1203v__unsafe_ptr=0;
  unsigned long long __temp1203v__unsafe_size=0;
  unsigned long long __temp1203v__unsafe_align=0;
  void* __temp1204v__unsafe_ptr=0;
  unsigned long long __temp1204v__unsafe_size=0;
  unsigned long long __temp1204v__unsafe_align=0;
  unsigned long long __temp1205v=0;
  void* __temp1206v__unsafe_ptr=0;
  unsigned long long __temp1206v__unsafe_size=0;
  unsigned long long __temp1206v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1208v=0;
  void* __temp1209v__=0;
  double __temp1210v=0;
  unsigned long long __temp1211v=0;
  void* __temp1212v__=0;
  double __temp1213v=0;
  unsigned long long __temp1214v=0;
  void* __temp1215v__=0;
  double __temp1216v__value=0;
  unsigned long long __temp1266v=0;
  int __temp1267v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1201v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align);
  __temp1204v__unsafe_ptr=__temp1203v__unsafe_ptr;
  __temp1204v__unsafe_size=__temp1203v__unsafe_size;
  __temp1204v__unsafe_align=__temp1203v__unsafe_align;
  __temp1205v=2;
  __temp_errcode=alloc__temp435v(&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align,__temp1205v,&__temp1206v__unsafe_ptr,&__temp1206v__unsafe_size,&__temp1206v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1206v__unsafe_ptr;
  x__unsafe_size=__temp1206v__unsafe_size;
  x__unsafe_align=__temp1206v__unsafe_align;
  __temp1208v=0;
  __temp_errcode=mutget__temp479v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1208v,&__temp1209v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1210v=1.0;
  if(!__temp1209v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1209v__,&__temp1210v,8);
  __temp1211v=1;
  __temp_errcode=mutget__temp479v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1211v,&__temp1212v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1213v=2.0;
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1212v__,&__temp1213v,8);
  __temp1214v=1;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1214v,&__temp1215v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1215v__){
  goto __temp_failure;
  }
  memcpy(&__temp1216v__value,(char*)__temp1215v__,8);
  print__temp351v(__temp1216v__value);
  *__temp1268v=x__unsafe_ptr;
  *__temp1269v=x__unsafe_size;
  *__temp1270v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1222v(void** __temp1279v, unsigned long long* __temp1280v, unsigned long long* __temp1281v, void** __temp1282v, unsigned long long* __temp1283v, unsigned long long* __temp1284v, void** __temp1285v, unsigned long long* __temp1286v, unsigned long long* __temp1287v) {
  void* __temp1223v__unsafe_ptr=0;
  unsigned long long __temp1223v__unsafe_size=0;
  unsigned long long __temp1223v__unsafe_align=0;
  void* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  void* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
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
  void* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1272v=0;
  int __temp1273v=0;
  unsigned long long __temp1277v=0;
  int __temp1278v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1200v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1223v__unsafe_ptr;
  t__unsafe_size=__temp1223v__unsafe_size;
  t__unsafe_align=__temp1223v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1201v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=3;
  __temp_errcode=alloc__temp435v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,__temp1227v,&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1228v__unsafe_ptr;
  k__unsafe_size=__temp1228v__unsafe_size;
  k__unsafe_align=__temp1228v__unsafe_align;
  *__temp1279v=t__unsafe_ptr;
  *__temp1280v=t__unsafe_size;
  *__temp1281v=t__unsafe_align;
  *__temp1282v=j__unsafe_ptr;
  *__temp1283v=j__unsafe_size;
  *__temp1284v=j__unsafe_align;
  *__temp1285v=k__unsafe_ptr;
  *__temp1286v=k__unsafe_size;
  *__temp1287v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1230v() {
  void* __temp1231v__t__unsafe_ptr=0;
  unsigned long long __temp1231v__t__unsafe_size=0;
  unsigned long long __temp1231v__t__unsafe_align=0;
  void* __temp1231v__j__unsafe_ptr=0;
  unsigned long long __temp1231v__j__unsafe_size=0;
  unsigned long long __temp1231v__j__unsafe_align=0;
  void* __temp1231v__k__unsafe_ptr=0;
  unsigned long long __temp1231v__k__unsafe_size=0;
  unsigned long long __temp1231v__k__unsafe_align=0;
  void* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  void* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  void* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1233v=0;
  void* __temp1234v__=0;
  double __temp1235v__value=0;
  unsigned long long __temp1291v=0;
  int __temp1292v=0;
  unsigned long long __temp1293v=0;
  int __temp1294v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1222v(&__temp1231v__t__unsafe_ptr,&__temp1231v__t__unsafe_size,&__temp1231v__t__unsafe_align,&__temp1231v__j__unsafe_ptr,&__temp1231v__j__unsafe_size,&__temp1231v__j__unsafe_align,&__temp1231v__k__unsafe_ptr,&__temp1231v__k__unsafe_size,&__temp1231v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1231v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1231v__t__unsafe_size;
  t__t__unsafe_align=__temp1231v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1231v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1231v__j__unsafe_size;
  t__j__unsafe_align=__temp1231v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1231v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1231v__k__unsafe_size;
  t__k__unsafe_align=__temp1231v__k__unsafe_align;
  __temp1233v=1;
  __temp_errcode=get__temp483v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1233v,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__value,(char*)__temp1234v__,8);
  print__temp351v(__temp1235v__value);
  
  __temp_failure:__temp1293v=0;
  neq__temp302v(__temp1231v__k__unsafe_size,__temp1293v,&__temp1294v);
  if(__temp1294v){
  __temp1231v__k__unsafe_size=0;
  free__temp429v(&__temp1231v__k__unsafe_ptr);
  }
  print__temp349v(__temp1218v,__temp576v);
  len__temp487v(__temp1231v__t__unsafe_ptr,__temp1231v__t__unsafe_size,__temp1231v__t__unsafe_align,&__temp1231v__t__unsafe_size);
  print__temp359v(__temp1231v__t__unsafe_size);
  __temp1291v=0;
  neq__temp302v(__temp1231v__t__unsafe_size,__temp1291v,&__temp1292v);
  if(__temp1292v){
  __temp1231v__t__unsafe_size=0;
  free__temp429v(&__temp1231v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1230v();return 0;}