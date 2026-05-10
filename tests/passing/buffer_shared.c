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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1199v(void** __temp1216v, unsigned long long* __temp1217v, unsigned long long* __temp1218v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1216v=unsafe_ptr;
  *__temp1217v=unsafe_size;
  *__temp1218v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1219v) {
  int value=0;
  *__temp1219v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1220v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1220v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1221v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1221v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1222v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1222v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1223v) {
  void* allocated=*__temp1223v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1223v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1224v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1224v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1225v) {
  *__temp1225v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1226v) {
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
  *__temp1226v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1227v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1227v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int resize__temp451v(void** __temp1228v, unsigned long long* __temp1229v, unsigned long long* __temp1230v, unsigned long long size, void** __temp1231v, unsigned long long* __temp1232v, unsigned long long* __temp1233v) {
  void* buffer__unsafe_ptr=*__temp1228v;
  unsigned long long buffer__unsafe_size=*__temp1229v;
  unsigned long long buffer__unsafe_align=*__temp1230v;
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
  *__temp1228v=buffer__unsafe_ptr;
  *__temp1229v=buffer__unsafe_size;
  *__temp1230v=buffer__unsafe_align;
  *__temp1231v=buffer__unsafe_ptr;
  *__temp1232v=buffer__unsafe_size;
  *__temp1233v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1234v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1234v=z;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1235v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1235v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(void** __temp1236v, unsigned long long* __temp1237v, unsigned long long* __temp1238v, unsigned long long i, void** __temp1239v) {
  void* buffer__unsafe_ptr=*__temp1236v;
  unsigned long long buffer__unsafe_size=*__temp1237v;
  unsigned long long buffer__unsafe_align=*__temp1238v;
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
  *__temp1236v=buffer__unsafe_ptr;
  *__temp1237v=buffer__unsafe_size;
  *__temp1238v=buffer__unsafe_align;
  *__temp1239v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1240v) {
  *__temp1240v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1241v) {
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
  *__temp1241v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1198v() {
  void* __temp1201v__unsafe_ptr=0;
  unsigned long long __temp1201v__unsafe_size=0;
  unsigned long long __temp1201v__unsafe_align=0;
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  void* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp1203v=0;
  void* __temp1204v__unsafe_ptr=0;
  unsigned long long __temp1204v__unsafe_size=0;
  unsigned long long __temp1204v__unsafe_align=0;
  void* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp1205v=0;
  void* __temp1206v__=0;
  double __temp1207v=0;
  unsigned long long __temp1208v__=0;
  unsigned long long __temp1210v__=0;
  unsigned long long __temp1212v=0;
  void* __temp1213v__=0;
  double __temp1214v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  buf1__unsafe_ptr=__temp1202v__unsafe_ptr;
  buf1__unsafe_size=__temp1202v__unsafe_size;
  buf1__unsafe_align=__temp1202v__unsafe_align;
  __temp1203v=10;
  __temp_errcode=resize__temp451v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1203v,&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1205v=0;
  __temp_errcode=mutget__temp478v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1205v,&__temp1206v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1207v=1.0;
  if(!__temp1206v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1206v__,&__temp1207v,8);
  len__temp486v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1208v__);
  print__temp361v(__temp1208v__);
  len__temp486v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1210v__);
  print__temp361v(__temp1210v__);
  __temp1212v=0;
  __temp_errcode=get__temp482v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1212v,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__z,(char*)__temp1213v__,8);
  print__temp353v(__temp1214v__z);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1198v();return 0;}