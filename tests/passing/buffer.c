#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1183v(char** __temp1212v, uint64_t* __temp1213v, uint64_t* __temp1214v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1212v=unsafe_ptr;
  *__temp1213v=unsafe_size;
  *__temp1214v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1215v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1215v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1216v) {
  char* allocated=*__temp1216v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1216v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1217v) {
  int value=0;
  *__temp1217v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1218v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1218v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1219v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1219v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1220v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1220v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1221v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1221v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1222v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1222v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1223v) {
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
  *__temp1223v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1224v, uint64_t* __temp1225v, uint64_t* __temp1226v, uint64_t size, char** __temp1227v, uint64_t* __temp1228v, uint64_t* __temp1229v) {
  char* buffer__unsafe_ptr=*__temp1224v;
  uint64_t buffer__unsafe_size=*__temp1225v;
  uint64_t buffer__unsafe_align=*__temp1226v;
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
  *__temp1224v=buffer__unsafe_ptr;
  *__temp1225v=buffer__unsafe_size;
  *__temp1226v=buffer__unsafe_align;
  *__temp1227v=buffer__unsafe_ptr;
  *__temp1228v=buffer__unsafe_size;
  *__temp1229v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1230v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1231v) {
  *__temp1231v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1232v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1232v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1233v, uint64_t* __temp1234v, uint64_t* __temp1235v, uint64_t i, char** __temp1236v) {
  char* buffer__unsafe_ptr=*__temp1233v;
  uint64_t buffer__unsafe_size=*__temp1234v;
  uint64_t buffer__unsafe_align=*__temp1235v;
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
  *__temp1233v=buffer__unsafe_ptr;
  *__temp1234v=buffer__unsafe_size;
  *__temp1235v=buffer__unsafe_align;
  *__temp1236v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1182v(char** __temp1237v, uint64_t* __temp1238v, uint64_t* __temp1239v) {
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
  char* __temp1193v__unsafe_ptr=0;
  uint64_t __temp1193v__unsafe_size=0;
  uint64_t __temp1193v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint64_t y__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1183v(&__temp1185v__unsafe_ptr,&__temp1185v__unsafe_size,&__temp1185v__unsafe_align);
  __temp1186v__unsafe_ptr=__temp1185v__unsafe_ptr;
  __temp1186v__unsafe_size=__temp1185v__unsafe_size;
  __temp1186v__unsafe_align=__temp1185v__unsafe_align;
  __temp1187v=1;
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
  float__temp_buffer__buffer__temp1183v(&__temp1193v__unsafe_ptr,&__temp1193v__unsafe_size,&__temp1193v__unsafe_align);
  y__unsafe_ptr=__temp1193v__unsafe_ptr;
  y__unsafe_size=__temp1193v__unsafe_size;
  y__unsafe_align=__temp1193v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(x__unsafe_ptr,&__temp1189v____temp436v__);
  if(__temp1189v____temp436v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp428v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1237v=x__unsafe_ptr;
  *__temp1238v=x__unsafe_size;
  *__temp1239v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1240v) {
  char* new_allocated=0;
  uint8_t failed=0;
  char* __temp427v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated__unsafe_ptr){
  new_allocated=realloc(allocated__unsafe_ptr,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  unsafe_ptr=__temp427v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1240v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1241v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) int resize__temp469v(char** __temp1242v, uint64_t* __temp1243v, uint64_t* __temp1244v, uint64_t size, char** __temp1245v, uint64_t* __temp1246v, uint64_t* __temp1247v) {
  char* buffer__unsafe_ptr=*__temp1242v;
  uint64_t buffer__unsafe_size=*__temp1243v;
  uint64_t buffer__unsafe_align=*__temp1244v;
  uint8_t __temp470v__=0;
  uint64_t __temp471v=0;
  uint8_t __temp472v__=0;
  uint64_t __temp473v=0;
  uint64_t __temp475v=0;
  uint8_t __temp476v__=0;
  uint64_t __temp477v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp478v__=0;
  uint64_t bytes=0;
  char* __temp479v__=0;
  uint8_t __temp480v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp470v__);
  if(__temp470v__){
  goto __temp_return;
  }
  __temp471v=0;
  eq__temp278v(size,__temp471v,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  buffer__unsafe_size=__temp473v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp475v=0;
  eq__temp278v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp477v__);
  prev_bytes=__temp477v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp478v__);
  bytes=__temp478v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp479v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp479v__;
  lt__temp182v(prev_bytes,bytes,&__temp480v__);
  if(__temp480v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1242v=buffer__unsafe_ptr;
  *__temp1243v=buffer__unsafe_size;
  *__temp1244v=buffer__unsafe_align;
  *__temp1245v=buffer__unsafe_ptr;
  *__temp1246v=buffer__unsafe_size;
  *__temp1247v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(uint64_t x, uint64_t y, uint64_t* __temp1248v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  uint8_t __temp334v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1248v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp489v(char** __temp1249v, uint64_t* __temp1250v, uint64_t* __temp1251v, char** __temp1252v) {
  char* buffer__unsafe_ptr=*__temp1249v;
  uint64_t buffer__unsafe_size=*__temp1250v;
  uint64_t buffer__unsafe_align=*__temp1251v;
  uint64_t __temp490v=0;
  uint8_t __temp491v__=0;
  uint64_t __temp492v=0;
  uint64_t __temp493v__=0;
  uint64_t __temp494v__=0;
  char* __temp495v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp490v=0;
  eq__temp278v(__temp490v,buffer__unsafe_size,&__temp491v__);
  if(__temp491v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp492v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp492v,&__temp493v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp493v__,buffer__unsafe_align,&__temp494v__);
  add__temp430v(buffer__unsafe_ptr,__temp494v__,&__temp495v__);
  unsafe_ptr=__temp495v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1249v=buffer__unsafe_ptr;
  *__temp1250v=buffer__unsafe_size;
  *__temp1251v=buffer__unsafe_align;
  *__temp1252v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1194v(char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v) {
  char* x__unsafe_ptr=*__temp1253v;
  uint64_t x__unsafe_size=*__temp1254v;
  uint64_t x__unsafe_align=*__temp1255v;
  uint64_t __temp1195v=0;
  char* __temp1196v__unsafe_ptr=0;
  uint64_t __temp1196v__unsafe_size=0;
  uint64_t __temp1196v__unsafe_align=0;
  char* __temp1197v__=0;
  double __temp1198v=0;
  char* __temp1199v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1195v=2;
  __temp_errcode=resize__temp469v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1195v,&__temp1196v__unsafe_ptr,&__temp1196v__unsafe_size,&__temp1196v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp489v(&__temp1196v__unsafe_ptr,&__temp1196v__unsafe_size,&__temp1196v__unsafe_align,&__temp1197v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1198v=2.0;
  if(!__temp1197v__){
  goto __temp_failure;
  }
  memcpy(__temp1197v__,&__temp1198v,8);
  __temp1199v=__temp1197v__;
  
  __temp_failure:*__temp1253v=x__unsafe_ptr;
  *__temp1254v=x__unsafe_size;
  *__temp1255v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1256v) {
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
  *__temp1256v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1257v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1257v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1258v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1200v() {
  char* __temp1201v__unsafe_ptr=0;
  uint64_t __temp1201v__unsafe_size=0;
  uint64_t __temp1201v__unsafe_align=0;
  uint8_t __temp1202v____temp1189v____temp436v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1204v=0;
  char* __temp1205v__=0;
  double __temp1206v__z=0;
  uint64_t __temp1207v=0;
  char* __temp1208v__=0;
  double __temp1209v__z=0;
  double __temp1210v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1182v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1201v__unsafe_ptr;
  x__unsafe_size=__temp1201v__unsafe_size;
  x__unsafe_align=__temp1201v__unsafe_align;
  __temp_errcode=test2__temp1194v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1204v=0;
  __temp_errcode=get__temp500v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1204v,&__temp1205v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1205v__){
  goto __temp_failure;
  }
  memcpy(&__temp1206v__z,__temp1205v__,8);
  __temp1207v=1;
  __temp_errcode=get__temp500v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1207v,&__temp1208v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(&__temp1209v__z,__temp1208v__,8);
  add__temp88v(__temp1206v__z,__temp1209v__z,&__temp1210v__);
  print__temp353v(__temp1210v__);
  
  __temp_failure:exists__temp398v(__temp1201v__unsafe_ptr,&__temp1202v____temp1189v____temp436v__);
  if(__temp1202v____temp1189v____temp436v__){
  __temp1201v__unsafe_size=0;
  __temp1201v__unsafe_size=__temp1201v__unsafe_size;
  free__temp428v(&__temp1201v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1200v();return 0;}