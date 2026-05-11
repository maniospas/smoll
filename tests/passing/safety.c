#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp757v="";
const char* const __temp1200v="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1183v(char** __temp1219v, uint64_t* __temp1220v, uint64_t* __temp1221v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1219v=unsafe_ptr;
  *__temp1220v=unsafe_size;
  *__temp1221v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1222v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1222v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1223v) {
  char* allocated=*__temp1223v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1223v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1224v) {
  int value=0;
  *__temp1224v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1225v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1225v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1226v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1226v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1227v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1227v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1228v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1228v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1229v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1229v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1230v) {
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
  *__temp1230v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1231v, uint64_t* __temp1232v, uint64_t* __temp1233v, uint64_t size, char** __temp1234v, uint64_t* __temp1235v, uint64_t* __temp1236v) {
  char* buffer__unsafe_ptr=*__temp1231v;
  uint64_t buffer__unsafe_size=*__temp1232v;
  uint64_t buffer__unsafe_align=*__temp1233v;
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
  *__temp1231v=buffer__unsafe_ptr;
  *__temp1232v=buffer__unsafe_size;
  *__temp1233v=buffer__unsafe_align;
  *__temp1234v=buffer__unsafe_ptr;
  *__temp1235v=buffer__unsafe_size;
  *__temp1236v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1237v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1237v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1238v) {
  *__temp1238v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1239v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1239v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1240v, uint64_t* __temp1241v, uint64_t* __temp1242v, uint64_t i, char** __temp1243v) {
  char* buffer__unsafe_ptr=*__temp1240v;
  uint64_t buffer__unsafe_size=*__temp1241v;
  uint64_t buffer__unsafe_align=*__temp1242v;
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
  *__temp1240v=buffer__unsafe_ptr;
  *__temp1241v=buffer__unsafe_size;
  *__temp1242v=buffer__unsafe_align;
  *__temp1243v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1244v) {
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
  *__temp1244v=unsafe_ptr;
  
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

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1245v) {
  goto __temp_return;
  __temp_return:
  *__temp1245v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1182v(char** __temp1246v, uint64_t* __temp1247v, uint64_t* __temp1248v) {
  char* __temp1185v__unsafe_ptr=0;
  uint64_t __temp1185v__unsafe_size=0;
  uint64_t __temp1185v__unsafe_align=0;
  char* __temp1186v__unsafe_ptr=0;
  uint64_t __temp1186v__unsafe_size=0;
  uint64_t __temp1186v__unsafe_align=0;
  uint64_t __temp1187v=0;
  char* __temp1188v__unsafe_ptr=0;
  uint64_t __temp1188v__unsafe_size=0;
  uint64_t __temp1188v__unsafe_align=0;
  uint8_t __temp1189v____temp436v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1190v=0;
  char* __temp1191v__=0;
  double __temp1192v=0;
  uint64_t __temp1193v=0;
  char* __temp1194v__=0;
  double __temp1195v=0;
  uint64_t __temp1196v=0;
  char* __temp1197v__=0;
  double __temp1198v__z=0;
  uint64_t __temp1202v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1183v(&__temp1185v__unsafe_ptr,&__temp1185v__unsafe_size,&__temp1185v__unsafe_align);
  __temp1186v__unsafe_ptr=__temp1185v__unsafe_ptr;
  __temp1186v__unsafe_size=__temp1185v__unsafe_size;
  __temp1186v__unsafe_align=__temp1185v__unsafe_align;
  __temp1187v=2;
  __temp_errcode=alloc__temp434v(&__temp1186v__unsafe_ptr,&__temp1186v__unsafe_size,&__temp1186v__unsafe_align,__temp1187v,&__temp1188v__unsafe_ptr,&__temp1188v__unsafe_size,&__temp1188v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1188v__unsafe_ptr;
  x__unsafe_size=__temp1188v__unsafe_size;
  x__unsafe_align=__temp1188v__unsafe_align;
  __temp1190v=0;
  __temp_errcode=mutget__temp496v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1190v,&__temp1191v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1192v=1.0;
  if(!__temp1191v__){
  goto __temp_failure;
  }
  memcpy(__temp1191v__,&__temp1192v,8);
  __temp1193v=1;
  __temp_errcode=mutget__temp496v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1193v,&__temp1194v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1195v=2.0;
  if(!__temp1194v__){
  goto __temp_failure;
  }
  memcpy(__temp1194v__,&__temp1195v,8);
  __temp1196v=1;
  __temp_errcode=get__temp500v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1196v,&__temp1197v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1197v__){
  goto __temp_failure;
  }
  memcpy(&__temp1198v__z,__temp1197v__,8);
  print__temp353v(__temp1198v__z);
  goto __temp_return;
  
  __temp_failure:print__temp351v(__temp1200v,__temp757v);
  len__temp504v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,&x__unsafe_size);
  print__temp361v(x__unsafe_size);
  exists__temp398v(x__unsafe_ptr,&__temp1189v____temp436v__);
  if(__temp1189v____temp436v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp428v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1246v=x__unsafe_ptr;
  *__temp1247v=x__unsafe_size;
  *__temp1248v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1204v(char** __temp1249v, uint64_t* __temp1250v, uint64_t* __temp1251v, char** __temp1252v, uint64_t* __temp1253v, uint64_t* __temp1254v, char** __temp1255v, uint64_t* __temp1256v, uint64_t* __temp1257v) {
  char* __temp1205v__unsafe_ptr=0;
  uint64_t __temp1205v__unsafe_size=0;
  uint64_t __temp1205v__unsafe_align=0;
  uint8_t __temp1206v____temp1189v____temp436v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint64_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint64_t j__unsafe_align=0;
  char* __temp1207v__unsafe_ptr=0;
  uint64_t __temp1207v__unsafe_size=0;
  uint64_t __temp1207v__unsafe_align=0;
  char* __temp1208v__unsafe_ptr=0;
  uint64_t __temp1208v__unsafe_size=0;
  uint64_t __temp1208v__unsafe_align=0;
  uint64_t __temp1209v=0;
  char* __temp1210v__unsafe_ptr=0;
  uint64_t __temp1210v__unsafe_size=0;
  uint64_t __temp1210v__unsafe_align=0;
  uint8_t __temp1211v____temp436v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint64_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1182v(&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1205v__unsafe_ptr;
  t__unsafe_size=__temp1205v__unsafe_size;
  t__unsafe_align=__temp1205v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1183v(&__temp1207v__unsafe_ptr,&__temp1207v__unsafe_size,&__temp1207v__unsafe_align);
  __temp1208v__unsafe_ptr=__temp1207v__unsafe_ptr;
  __temp1208v__unsafe_size=__temp1207v__unsafe_size;
  __temp1208v__unsafe_align=__temp1207v__unsafe_align;
  __temp1209v=3;
  __temp_errcode=alloc__temp434v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align,__temp1209v,&__temp1210v__unsafe_ptr,&__temp1210v__unsafe_size,&__temp1210v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1210v__unsafe_ptr;
  k__unsafe_size=__temp1210v__unsafe_size;
  k__unsafe_align=__temp1210v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(k__unsafe_ptr,&__temp1211v____temp436v__);
  if(__temp1211v____temp436v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  free__temp428v(&k__unsafe_ptr);
  }
  print__temp351v(__temp1200v,__temp757v);
  len__temp504v(t__unsafe_ptr,t__unsafe_size,t__unsafe_align,&t__unsafe_size);
  print__temp361v(t__unsafe_size);
  exists__temp398v(t__unsafe_ptr,&__temp1206v____temp1189v____temp436v__);
  if(__temp1206v____temp1189v____temp436v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  free__temp428v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1249v=t__unsafe_ptr;
  *__temp1250v=t__unsafe_size;
  *__temp1251v=t__unsafe_align;
  *__temp1252v=j__unsafe_ptr;
  *__temp1253v=j__unsafe_size;
  *__temp1254v=j__unsafe_align;
  *__temp1255v=k__unsafe_ptr;
  *__temp1256v=k__unsafe_size;
  *__temp1257v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1212v() {
  char* __temp1213v__t__unsafe_ptr=0;
  uint64_t __temp1213v__t__unsafe_size=0;
  uint64_t __temp1213v__t__unsafe_align=0;
  char* __temp1213v__j__unsafe_ptr=0;
  uint64_t __temp1213v__j__unsafe_size=0;
  uint64_t __temp1213v__j__unsafe_align=0;
  char* __temp1213v__k__unsafe_ptr=0;
  uint64_t __temp1213v__k__unsafe_size=0;
  uint64_t __temp1213v__k__unsafe_align=0;
  uint8_t __temp1214v____temp1206v____temp1189v____temp436v__=0;
  uint8_t __temp1214v____temp1211v____temp436v__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint64_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint64_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint64_t t__k__unsafe_align=0;
  uint64_t __temp1215v=0;
  char* __temp1216v__=0;
  double __temp1217v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1204v(&__temp1213v__t__unsafe_ptr,&__temp1213v__t__unsafe_size,&__temp1213v__t__unsafe_align,&__temp1213v__j__unsafe_ptr,&__temp1213v__j__unsafe_size,&__temp1213v__j__unsafe_align,&__temp1213v__k__unsafe_ptr,&__temp1213v__k__unsafe_size,&__temp1213v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1213v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1213v__t__unsafe_size;
  t__t__unsafe_align=__temp1213v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1213v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1213v__j__unsafe_size;
  t__j__unsafe_align=__temp1213v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1213v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1213v__k__unsafe_size;
  t__k__unsafe_align=__temp1213v__k__unsafe_align;
  __temp1215v=1;
  __temp_errcode=get__temp500v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1215v,&__temp1216v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__z,__temp1216v__,8);
  print__temp353v(__temp1217v__z);
  
  __temp_failure:exists__temp398v(__temp1213v__k__unsafe_ptr,&__temp1214v____temp1211v____temp436v__);
  if(__temp1214v____temp1211v____temp436v__){
  __temp1213v__k__unsafe_size=0;
  __temp1213v__k__unsafe_size=__temp1213v__k__unsafe_size;
  free__temp428v(&__temp1213v__k__unsafe_ptr);
  }
  print__temp351v(__temp1200v,__temp757v);
  len__temp504v(__temp1213v__t__unsafe_ptr,__temp1213v__t__unsafe_size,__temp1213v__t__unsafe_align,&__temp1213v__t__unsafe_size);
  print__temp361v(__temp1213v__t__unsafe_size);
  exists__temp398v(__temp1213v__t__unsafe_ptr,&__temp1214v____temp1206v____temp1189v____temp436v__);
  if(__temp1214v____temp1206v____temp1189v____temp436v__){
  __temp1213v__t__unsafe_size=0;
  __temp1213v__t__unsafe_size=__temp1213v__t__unsafe_size;
  free__temp428v(&__temp1213v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1212v();return 0;}