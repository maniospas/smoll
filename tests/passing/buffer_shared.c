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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1200v(void** __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1217v=unsafe_ptr;
  *__temp1218v=unsafe_size;
  *__temp1219v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1220v) {
  int value=0;
  *__temp1220v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1221v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1221v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1222v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1222v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1223v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1223v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1224v) {
  void* allocated=*__temp1224v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1224v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1225v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1225v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1226v) {
  *__temp1226v=to;
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1227v) {
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
  *__temp1227v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1228v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1228v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1229v, unsigned long long* __temp1230v, unsigned long long* __temp1231v, unsigned long long size, void** __temp1232v, unsigned long long* __temp1233v, unsigned long long* __temp1234v) {
  void* buffer__unsafe_ptr=*__temp1229v;
  unsigned long long buffer__unsafe_size=*__temp1230v;
  unsigned long long buffer__unsafe_align=*__temp1231v;
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
  *__temp1229v=buffer__unsafe_ptr;
  *__temp1230v=buffer__unsafe_size;
  *__temp1231v=buffer__unsafe_align;
  *__temp1232v=buffer__unsafe_ptr;
  *__temp1233v=buffer__unsafe_size;
  *__temp1234v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1235v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1235v=z;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1236v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1236v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v, unsigned long long i, void** __temp1240v) {
  void* buffer__unsafe_ptr=*__temp1237v;
  unsigned long long buffer__unsafe_size=*__temp1238v;
  unsigned long long buffer__unsafe_align=*__temp1239v;
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
  *__temp1237v=buffer__unsafe_ptr;
  *__temp1238v=buffer__unsafe_size;
  *__temp1239v=buffer__unsafe_align;
  *__temp1240v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1241v) {
  *__temp1241v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1242v) {
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
  *__temp1242v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1199v() {
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  void* __temp1203v__unsafe_ptr=0;
  unsigned long long __temp1203v__unsafe_size=0;
  unsigned long long __temp1203v__unsafe_align=0;
  void* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp1204v=0;
  void* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__unsafe_size=0;
  unsigned long long __temp1205v__unsafe_align=0;
  void* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp1206v=0;
  void* __temp1207v__=0;
  double __temp1208v=0;
  unsigned long long __temp1209v__=0;
  unsigned long long __temp1211v__=0;
  unsigned long long __temp1213v=0;
  void* __temp1214v__=0;
  double __temp1215v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  __temp1203v__unsafe_ptr=__temp1202v__unsafe_ptr;
  __temp1203v__unsafe_size=__temp1202v__unsafe_size;
  __temp1203v__unsafe_align=__temp1202v__unsafe_align;
  buf1__unsafe_ptr=__temp1203v__unsafe_ptr;
  buf1__unsafe_size=__temp1203v__unsafe_size;
  buf1__unsafe_align=__temp1203v__unsafe_align;
  __temp1204v=10;
  __temp_errcode=resize__temp452v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1204v,&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1206v=0;
  __temp_errcode=mutget__temp479v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1206v,&__temp1207v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1208v=1.0;
  if(!__temp1207v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1207v__,&__temp1208v,8);
  len__temp487v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1209v__);
  print__temp359v(__temp1209v__);
  len__temp487v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1211v__);
  print__temp359v(__temp1211v__);
  __temp1213v=0;
  __temp_errcode=get__temp483v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1213v,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__value,(char*)__temp1214v__,8);
  print__temp351v(__temp1215v__value);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1199v();return 0;}