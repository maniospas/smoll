#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp1209v="test";
const char* const __temp352v="\n";
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

static inline __attribute__((always_inline)) void cstr__temp_buffer__buffer__temp1199v(void** __temp1214v, unsigned long long* __temp1215v, unsigned long long* __temp1216v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1214v=unsafe_ptr;
  *__temp1215v=unsafe_size;
  *__temp1216v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1217v) {
  int value=0;
  *__temp1217v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1218v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1218v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1219v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1219v=__temp87v__;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1220v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1220v=z;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1221v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1221v=__temp412v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1222v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1222v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1223v) {
  void* allocated=*__temp1223v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1223v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1224v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1224v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1225v) {
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
  *__temp1225v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1226v, unsigned long long* __temp1227v, unsigned long long* __temp1228v, unsigned long long size, void** __temp1229v, unsigned long long* __temp1230v, unsigned long long* __temp1231v) {
  void* buffer__unsafe_ptr=*__temp1226v;
  unsigned long long buffer__unsafe_size=*__temp1227v;
  unsigned long long buffer__unsafe_align=*__temp1228v;
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
  *__temp1226v=buffer__unsafe_ptr;
  *__temp1227v=buffer__unsafe_size;
  *__temp1228v=buffer__unsafe_align;
  *__temp1229v=buffer__unsafe_ptr;
  *__temp1230v=buffer__unsafe_size;
  *__temp1231v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1232v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1232v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1233v) {
  *__temp1233v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1234v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1234v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(void** __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v, unsigned long long i, void** __temp1238v) {
  void* buffer__unsafe_ptr=*__temp1235v;
  unsigned long long buffer__unsafe_size=*__temp1236v;
  unsigned long long buffer__unsafe_align=*__temp1237v;
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
  *__temp1235v=buffer__unsafe_ptr;
  *__temp1236v=buffer__unsafe_size;
  *__temp1237v=buffer__unsafe_align;
  *__temp1238v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1198v() {
  void* __temp1201v__unsafe_ptr=0;
  unsigned long long __temp1201v__unsafe_size=0;
  unsigned long long __temp1201v__unsafe_align=0;
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  unsigned long long __temp1203v=0;
  unsigned long long __temp1204v__=0;
  void* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__unsafe_size=0;
  unsigned long long __temp1205v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1207v=0;
  void* __temp1208v__=0;
  unsigned long long __temp1210v=0;
  void* __temp1211v__=0;
  void* x0=0;
  const char* __temp1212v__value=0;
  unsigned long long __temp1242v=0;
  int __temp1243v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  cstr__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  __temp1203v=4;
  KB__temp410v(__temp1203v,&__temp1204v__);
  __temp_errcode=alloc__temp434v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,__temp1204v__,&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1205v__unsafe_ptr;
  x__unsafe_size=__temp1205v__unsafe_size;
  x__unsafe_align=__temp1205v__unsafe_align;
  __temp1207v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1207v,&__temp1208v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1208v__,&__temp1209v,8);
  __temp1210v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1210v,&__temp1211v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x0=__temp1211v__;
  if(!x0){
  goto __temp_failure;
  }
  memcpy(&__temp1212v__value,(char*)x0,8);
  print__temp350v(__temp1212v__value);
  
  __temp_failure:__temp1242v=0;
  neq__temp302v(__temp1205v__unsafe_size,__temp1242v,&__temp1243v);
  if(__temp1243v){
  __temp1205v__unsafe_size=0;
  free__temp428v(&__temp1205v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1198v();return 0;}