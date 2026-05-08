#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp411v="kilobytes to bytes";
const char* const __temp350v="\n";
const char* const __temp1212v="test";
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

static inline __attribute__((always_inline)) void cstr__temp_buffer__buffer__temp1202v(void** __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v) {
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

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1223v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1223v=z;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1224v) {
  unsigned long long __temp412v=0;
  unsigned long long __temp413v__=0;
  __temp412v=1024;
  mul__temp134v(x,__temp412v,&__temp413v__);
  *__temp1224v=__temp413v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1225v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1225v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(void** __temp1226v) {
  void* allocated=*__temp1226v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1226v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1227v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1227v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp428v(unsigned long long bytes, void** __temp1228v) {
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
  *__temp1228v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1229v, unsigned long long* __temp1230v, unsigned long long* __temp1231v, unsigned long long size, void** __temp1232v, unsigned long long* __temp1233v, unsigned long long* __temp1234v) {
  void* buffer__unsafe_ptr=*__temp1229v;
  unsigned long long buffer__unsafe_size=*__temp1230v;
  unsigned long long buffer__unsafe_align=*__temp1231v;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  int __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  int __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  void* __temp451v__=0;
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
  zero__temp432v(buffer__unsafe_ptr,__temp445v,__temp446v__);
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
  __temp_errcode=alloc__temp428v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp452v,bytes);
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

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1236v) {
  *__temp1236v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(void* allocated, unsigned long long offset, void** __temp1237v) {
  void* element=0;
  void* __temp434v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp434v__);
  *__temp1237v=__temp434v__;
}

static inline __attribute__((always_inline)) int mutget__temp481v(void** __temp1238v, unsigned long long* __temp1239v, unsigned long long* __temp1240v, unsigned long long i, void** __temp1241v) {
  void* buffer__unsafe_ptr=*__temp1238v;
  unsigned long long buffer__unsafe_size=*__temp1239v;
  unsigned long long buffer__unsafe_align=*__temp1240v;
  int __temp482v__=0;
  unsigned long long __temp483v__=0;
  void* __temp484v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp482v__);
  if(__temp482v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp483v__);
  add__temp433v(buffer__unsafe_ptr,__temp483v__,&__temp484v__);
  *__temp1238v=buffer__unsafe_ptr;
  *__temp1239v=buffer__unsafe_size;
  *__temp1240v=buffer__unsafe_align;
  *__temp1241v=__temp484v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1201v() {
  void* __temp1204v__unsafe_ptr=0;
  unsigned long long __temp1204v__unsafe_size=0;
  unsigned long long __temp1204v__unsafe_align=0;
  void* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__unsafe_size=0;
  unsigned long long __temp1205v__unsafe_align=0;
  unsigned long long __temp1206v=0;
  unsigned long long __temp1207v__=0;
  void* __temp1208v__unsafe_ptr=0;
  unsigned long long __temp1208v__unsafe_size=0;
  unsigned long long __temp1208v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1210v=0;
  void* __temp1211v__=0;
  unsigned long long __temp1213v=0;
  void* __temp1214v__=0;
  void* x0=0;
  const char* __temp1215v__value=0;
  unsigned long long __temp1245v=0;
  int __temp1246v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  cstr__temp_buffer__buffer__temp1202v(&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  __temp1205v__unsafe_ptr=__temp1204v__unsafe_ptr;
  __temp1205v__unsafe_size=__temp1204v__unsafe_size;
  __temp1205v__unsafe_align=__temp1204v__unsafe_align;
  __temp1206v=4;
  KB__temp410v(__temp1206v,&__temp1207v__);
  __temp_errcode=alloc__temp437v(&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align,__temp1207v__,&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1208v__unsafe_ptr;
  x__unsafe_size=__temp1208v__unsafe_size;
  x__unsafe_align=__temp1208v__unsafe_align;
  __temp1210v=0;
  __temp_errcode=mutget__temp481v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1210v,&__temp1211v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1211v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1211v__,&__temp1212v,8);
  __temp1213v=0;
  __temp_errcode=mutget__temp481v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1213v,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x0=__temp1214v__;
  if(!x0){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__value,(char*)x0,8);
  print__temp348v(__temp1215v__value);
  
  __temp_failure:__temp1245v=0;
  neq__temp302v(__temp1208v__unsafe_size,__temp1245v,&__temp1246v);
  if(__temp1246v){
  __temp1208v__unsafe_size=0;
  free__temp431v(&__temp1208v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1201v();return 0;}