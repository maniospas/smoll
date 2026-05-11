#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp762v="";
const char* const __temp350v="\n";
const char* const __temp1205v="going to deallocate of size: ";
const char* const __temp436v="free";
static const char* __temp_all_errcodes[27] = {"noerr",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1188v(char** __temp1224v, unsigned long long* __temp1225v, unsigned long long* __temp1226v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1224v=unsafe_ptr;
  *__temp1225v=unsafe_size;
  *__temp1226v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1227v) {
  int value=0;
  *__temp1227v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1228v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1228v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1229v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1229v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1230v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1231v) {
  char* allocated=*__temp1231v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1231v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1232v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1232v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1233v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1233v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1234v) {
  char* unsafe_ptr=0;
  char failed=0;
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
  *__temp1234v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v, unsigned long long size, char** __temp1238v, unsigned long long* __temp1239v, unsigned long long* __temp1240v) {
  char* buffer__unsafe_ptr=*__temp1235v;
  unsigned long long buffer__unsafe_size=*__temp1236v;
  unsigned long long buffer__unsafe_align=*__temp1237v;
  int __temp435v=0;
  unsigned long long __temp438v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  char __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  char __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  char* __temp451v__=0;
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
  zero__temp429v(buffer__unsafe_ptr,__temp445v,__temp446v__);
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
  __temp_errcode=alloc__temp425v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1235v=buffer__unsafe_ptr;
  *__temp1236v=buffer__unsafe_size;
  *__temp1237v=buffer__unsafe_align;
  *__temp1238v=buffer__unsafe_ptr;
  *__temp1239v=buffer__unsafe_size;
  *__temp1240v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1241v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1242v) {
  *__temp1242v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1243v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1243v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1244v, unsigned long long* __temp1245v, unsigned long long* __temp1246v, unsigned long long i, char** __temp1247v) {
  char* buffer__unsafe_ptr=*__temp1244v;
  unsigned long long buffer__unsafe_size=*__temp1245v;
  unsigned long long buffer__unsafe_align=*__temp1246v;
  char __temp502v__=0;
  unsigned long long __temp503v__=0;
  char* __temp504v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp502v__);
  if(__temp502v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp503v__);
  add__temp430v(buffer__unsafe_ptr,__temp503v__,&__temp504v__);
  unsafe_ptr=__temp504v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1244v=buffer__unsafe_ptr;
  *__temp1245v=buffer__unsafe_size;
  *__temp1246v=buffer__unsafe_align;
  *__temp1247v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1248v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1248v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value, const char* endl) {
  int __temp352v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1249v) {
  goto __temp_return;
  __temp_return:
  *__temp1249v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1187v(char** __temp1250v, unsigned long long* __temp1251v, unsigned long long* __temp1252v) {
  char* __temp1190v__unsafe_ptr=0;
  unsigned long long __temp1190v__unsafe_size=0;
  unsigned long long __temp1190v__unsafe_align=0;
  char* __temp1191v__unsafe_ptr=0;
  unsigned long long __temp1191v__unsafe_size=0;
  unsigned long long __temp1191v__unsafe_align=0;
  unsigned long long __temp1192v=0;
  char* __temp1193v__unsafe_ptr=0;
  unsigned long long __temp1193v__unsafe_size=0;
  unsigned long long __temp1193v__unsafe_align=0;
  unsigned long long __temp1194v____temp438v=0;
  char __temp1194v____temp439v__=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1195v=0;
  char* __temp1196v__=0;
  double __temp1197v=0;
  unsigned long long __temp1198v=0;
  char* __temp1199v__=0;
  double __temp1200v=0;
  unsigned long long __temp1201v=0;
  char* __temp1202v__=0;
  double __temp1203v__value=0;
  unsigned long long __temp1207v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1188v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align);
  __temp1191v__unsafe_ptr=__temp1190v__unsafe_ptr;
  __temp1191v__unsafe_size=__temp1190v__unsafe_size;
  __temp1191v__unsafe_align=__temp1190v__unsafe_align;
  __temp1192v=2;
  __temp_errcode=alloc__temp434v(&__temp1191v__unsafe_ptr,&__temp1191v__unsafe_size,&__temp1191v__unsafe_align,__temp1192v,&__temp1193v__unsafe_ptr,&__temp1193v__unsafe_size,&__temp1193v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1193v__unsafe_ptr;
  x__unsafe_size=__temp1193v__unsafe_size;
  x__unsafe_align=__temp1193v__unsafe_align;
  __temp1195v=0;
  __temp_errcode=mutget__temp501v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1195v,&__temp1196v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1197v=1.0;
  if(!__temp1196v__){
  goto __temp_failure;
  }
  memcpy(__temp1196v__,&__temp1197v,8);
  __temp1198v=1;
  __temp_errcode=mutget__temp501v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1198v,&__temp1199v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1200v=2.0;
  if(!__temp1199v__){
  goto __temp_failure;
  }
  memcpy(__temp1199v__,&__temp1200v,8);
  __temp1201v=1;
  __temp_errcode=get__temp505v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1201v,&__temp1202v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1202v__){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__value,__temp1202v__,8);
  print__temp353v(__temp1203v__value);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1250v=x__unsafe_ptr;
  *__temp1251v=x__unsafe_size;
  *__temp1252v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1209v(char** __temp1253v, unsigned long long* __temp1254v, unsigned long long* __temp1255v, char** __temp1256v, unsigned long long* __temp1257v, unsigned long long* __temp1258v, char** __temp1259v, unsigned long long* __temp1260v, unsigned long long* __temp1261v) {
  char* __temp1210v__unsafe_ptr=0;
  unsigned long long __temp1210v__unsafe_size=0;
  unsigned long long __temp1210v__unsafe_align=0;
  unsigned long long __temp1211v____temp1194v____temp438v=0;
  char __temp1211v____temp1194v____temp439v__=0;
  char* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  char* __temp1212v__unsafe_ptr=0;
  unsigned long long __temp1212v__unsafe_size=0;
  unsigned long long __temp1212v__unsafe_align=0;
  char* __temp1213v__unsafe_ptr=0;
  unsigned long long __temp1213v__unsafe_size=0;
  unsigned long long __temp1213v__unsafe_align=0;
  unsigned long long __temp1214v=0;
  char* __temp1215v__unsafe_ptr=0;
  unsigned long long __temp1215v__unsafe_size=0;
  unsigned long long __temp1215v__unsafe_align=0;
  unsigned long long __temp1216v____temp438v=0;
  char __temp1216v____temp439v__=0;
  char* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1187v(&__temp1210v__unsafe_ptr,&__temp1210v__unsafe_size,&__temp1210v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1210v__unsafe_ptr;
  t__unsafe_size=__temp1210v__unsafe_size;
  t__unsafe_align=__temp1210v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1188v(&__temp1212v__unsafe_ptr,&__temp1212v__unsafe_size,&__temp1212v__unsafe_align);
  __temp1213v__unsafe_ptr=__temp1212v__unsafe_ptr;
  __temp1213v__unsafe_size=__temp1212v__unsafe_size;
  __temp1213v__unsafe_align=__temp1212v__unsafe_align;
  __temp1214v=3;
  __temp_errcode=alloc__temp434v(&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align,__temp1214v,&__temp1215v__unsafe_ptr,&__temp1215v__unsafe_size,&__temp1215v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1215v__unsafe_ptr;
  k__unsafe_size=__temp1215v__unsafe_size;
  k__unsafe_align=__temp1215v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1253v=t__unsafe_ptr;
  *__temp1254v=t__unsafe_size;
  *__temp1255v=t__unsafe_align;
  *__temp1256v=j__unsafe_ptr;
  *__temp1257v=j__unsafe_size;
  *__temp1258v=j__unsafe_align;
  *__temp1259v=k__unsafe_ptr;
  *__temp1260v=k__unsafe_size;
  *__temp1261v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1217v() {
  char* __temp1218v__t__unsafe_ptr=0;
  unsigned long long __temp1218v__t__unsafe_size=0;
  unsigned long long __temp1218v__t__unsafe_align=0;
  char* __temp1218v__j__unsafe_ptr=0;
  unsigned long long __temp1218v__j__unsafe_size=0;
  unsigned long long __temp1218v__j__unsafe_align=0;
  char* __temp1218v__k__unsafe_ptr=0;
  unsigned long long __temp1218v__k__unsafe_size=0;
  unsigned long long __temp1218v__k__unsafe_align=0;
  unsigned long long __temp1219v____temp1211v____temp1194v____temp438v=0;
  char __temp1219v____temp1211v____temp1194v____temp439v__=0;
  unsigned long long __temp1219v____temp1216v____temp438v=0;
  char __temp1219v____temp1216v____temp439v__=0;
  char* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1220v=0;
  char* __temp1221v__=0;
  double __temp1222v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1209v(&__temp1218v__t__unsafe_ptr,&__temp1218v__t__unsafe_size,&__temp1218v__t__unsafe_align,&__temp1218v__j__unsafe_ptr,&__temp1218v__j__unsafe_size,&__temp1218v__j__unsafe_align,&__temp1218v__k__unsafe_ptr,&__temp1218v__k__unsafe_size,&__temp1218v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1218v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1218v__t__unsafe_size;
  t__t__unsafe_align=__temp1218v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1218v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1218v__j__unsafe_size;
  t__j__unsafe_align=__temp1218v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1218v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1218v__k__unsafe_size;
  t__k__unsafe_align=__temp1218v__k__unsafe_align;
  __temp1220v=1;
  __temp_errcode=get__temp505v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1220v,&__temp1221v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__value,__temp1221v__,8);
  print__temp353v(__temp1222v__value);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1217v();return 0;}