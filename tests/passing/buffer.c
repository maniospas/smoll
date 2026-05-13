#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
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
"string does not fit on buffer",
"character copy does not fit on buffer",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1187v(char** __temp1216v, uint64_t* __temp1217v, uint64_t* __temp1218v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1216v=unsafe_ptr;
  *__temp1217v=unsafe_size;
  *__temp1218v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1219v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1219v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1220v) {
  char* allocated=*__temp1220v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1220v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1221v) {
  int value=0;
  *__temp1221v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1222v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1222v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1223v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1223v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1224v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1224v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1225v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1225v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1226v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1226v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1227v) {
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
  *__temp1227v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1228v, uint64_t* __temp1229v, uint64_t* __temp1230v, uint64_t size, char** __temp1231v, uint64_t* __temp1232v, uint64_t* __temp1233v) {
  char* buffer__unsafe_ptr=*__temp1228v;
  uint64_t buffer__unsafe_size=*__temp1229v;
  uint64_t buffer__unsafe_align=*__temp1230v;
  int __temp438v=0;
  char __temp439v__=0;
  uint64_t __temp440v=0;
  char __temp442v__=0;
  uint64_t __temp443v=0;
  char __temp444v__=0;
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  uint64_t __temp448v=0;
  char __temp449v__=0;
  uint64_t __temp450v__=0;
  uint64_t bytes=0;
  char* __temp451v__=0;
  uint64_t __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp305v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp432v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp305v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp439v__);
  if(__temp439v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1228v=buffer__unsafe_ptr;
  *__temp1229v=buffer__unsafe_size;
  *__temp1230v=buffer__unsafe_align;
  *__temp1231v=buffer__unsafe_ptr;
  *__temp1232v=buffer__unsafe_size;
  *__temp1233v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1234v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1234v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1235v) {
  *__temp1235v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1236v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1236v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1237v, uint64_t* __temp1238v, uint64_t* __temp1239v, uint64_t i, char** __temp1240v) {
  char* buffer__unsafe_ptr=*__temp1237v;
  uint64_t buffer__unsafe_size=*__temp1238v;
  uint64_t buffer__unsafe_align=*__temp1239v;
  char __temp500v__=0;
  uint64_t __temp501v__=0;
  char* __temp502v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp500v__);
  if(__temp500v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp501v__);
  add__temp433v(buffer__unsafe_ptr,__temp501v__,&__temp502v__);
  unsafe_ptr=__temp502v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1237v=buffer__unsafe_ptr;
  *__temp1238v=buffer__unsafe_size;
  *__temp1239v=buffer__unsafe_align;
  *__temp1240v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1186v(char** __temp1241v, uint64_t* __temp1242v, uint64_t* __temp1243v) {
  char* __temp1189v__unsafe_ptr=0;
  uint64_t __temp1189v__unsafe_size=0;
  uint64_t __temp1189v__unsafe_align=0;
  char* __temp1190v__unsafe_ptr=0;
  uint64_t __temp1190v__unsafe_size=0;
  uint64_t __temp1190v__unsafe_align=0;
  uint64_t __temp1191v=0;
  char* __temp1192v__unsafe_ptr=0;
  uint64_t __temp1192v__unsafe_size=0;
  uint64_t __temp1192v__unsafe_align=0;
  char __temp1193v____temp439v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1194v=0;
  char* __temp1195v__=0;
  double __temp1196v=0;
  char* __temp1197v__unsafe_ptr=0;
  uint64_t __temp1197v__unsafe_size=0;
  uint64_t __temp1197v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint64_t y__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1187v(&__temp1189v__unsafe_ptr,&__temp1189v__unsafe_size,&__temp1189v__unsafe_align);
  __temp1190v__unsafe_ptr=__temp1189v__unsafe_ptr;
  __temp1190v__unsafe_size=__temp1189v__unsafe_size;
  __temp1190v__unsafe_align=__temp1189v__unsafe_align;
  __temp1191v=1;
  __temp_errcode=alloc__temp437v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align,__temp1191v,&__temp1192v__unsafe_ptr,&__temp1192v__unsafe_size,&__temp1192v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1192v__unsafe_ptr;
  x__unsafe_size=__temp1192v__unsafe_size;
  x__unsafe_align=__temp1192v__unsafe_align;
  __temp1194v=0;
  __temp_errcode=mutget__temp499v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1194v,&__temp1195v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1196v=1.0;
  if(!__temp1195v__){
  goto __temp_failure;
  }
  memcpy(__temp1195v__,&__temp1196v,8);
  float__temp_buffer__buffer__temp1187v(&__temp1197v__unsafe_ptr,&__temp1197v__unsafe_size,&__temp1197v__unsafe_align);
  y__unsafe_ptr=__temp1197v__unsafe_ptr;
  y__unsafe_size=__temp1197v__unsafe_size;
  y__unsafe_align=__temp1197v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(x__unsafe_ptr,&__temp1193v____temp439v__);
  if(__temp1193v____temp439v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp431v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1241v=x__unsafe_ptr;
  *__temp1242v=x__unsafe_size;
  *__temp1243v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp429v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1244v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp430v__=0;
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
  attach_type__temp16v(new_allocated,allocated__unsafe_ptr,&__temp430v__);
  unsafe_ptr=__temp430v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1244v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1245v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) int resize__temp472v(char** __temp1246v, uint64_t* __temp1247v, uint64_t* __temp1248v, uint64_t size, char** __temp1249v, uint64_t* __temp1250v, uint64_t* __temp1251v) {
  char* buffer__unsafe_ptr=*__temp1246v;
  uint64_t buffer__unsafe_size=*__temp1247v;
  uint64_t buffer__unsafe_align=*__temp1248v;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp481v__=0;
  uint64_t bytes=0;
  char* __temp482v__=0;
  char __temp483v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  goto __temp_return;
  }
  __temp474v=0;
  eq__temp281v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  buffer__unsafe_size=__temp476v;
  free__temp431v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp478v=0;
  eq__temp281v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_size,buffer__unsafe_align,&__temp480v__);
  prev_bytes=__temp480v__;
  buffer__unsafe_size=size;
  mul__temp137v(buffer__unsafe_align,size,&__temp481v__);
  bytes=__temp481v__;
  __temp_errcode=realloc__temp429v(buffer__unsafe_ptr,bytes,&__temp482v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp482v__;
  lt__temp185v(prev_bytes,bytes,&__temp483v__);
  if(__temp483v__){
  zero__temp432v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1246v=buffer__unsafe_ptr;
  *__temp1247v=buffer__unsafe_size;
  *__temp1248v=buffer__unsafe_align;
  *__temp1249v=buffer__unsafe_ptr;
  *__temp1250v=buffer__unsafe_size;
  *__temp1251v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp1252v) {
  int __temp334v__=0;
  int __temp335v=0;
  int __temp336v=0;
  char __temp337v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp88v(x,y,&__temp334v__);
  lt__temp185v(x,y,&__temp337v__);
  if(__temp337v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1252v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp492v(char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, char** __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1253v;
  uint64_t buffer__unsafe_size=*__temp1254v;
  uint64_t buffer__unsafe_align=*__temp1255v;
  uint64_t __temp493v=0;
  char __temp494v__=0;
  uint64_t __temp495v=0;
  uint64_t __temp496v__=0;
  uint64_t __temp497v__=0;
  char* __temp498v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp493v=0;
  eq__temp281v(__temp493v,buffer__unsafe_size,&__temp494v__);
  if(__temp494v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp495v=1;
  __temp_errcode=sub__temp333v(buffer__unsafe_size,__temp495v,&__temp496v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp137v(__temp496v__,buffer__unsafe_align,&__temp497v__);
  add__temp433v(buffer__unsafe_ptr,__temp497v__,&__temp498v__);
  unsafe_ptr=__temp498v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  *__temp1256v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1198v(char** __temp1257v, uint64_t* __temp1258v, uint64_t* __temp1259v) {
  char* x__unsafe_ptr=*__temp1257v;
  uint64_t x__unsafe_size=*__temp1258v;
  uint64_t x__unsafe_align=*__temp1259v;
  uint64_t __temp1199v=0;
  char* __temp1200v__unsafe_ptr=0;
  uint64_t __temp1200v__unsafe_size=0;
  uint64_t __temp1200v__unsafe_align=0;
  char* __temp1201v__=0;
  double __temp1202v=0;
  char* __temp1203v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1199v=2;
  __temp_errcode=resize__temp472v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1199v,&__temp1200v__unsafe_ptr,&__temp1200v__unsafe_size,&__temp1200v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp492v(&__temp1200v__unsafe_ptr,&__temp1200v__unsafe_size,&__temp1200v__unsafe_align,&__temp1201v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1202v=2.0;
  if(!__temp1201v__){
  goto __temp_failure;
  }
  memcpy(__temp1201v__,&__temp1202v,8);
  __temp1203v=__temp1201v__;
  
  __temp_failure:*__temp1257v=x__unsafe_ptr;
  *__temp1258v=x__unsafe_size;
  *__temp1259v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1260v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1260v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp64v(double x, double y, int* __temp1261v) {
  int __temp65v=0;
  int __temp66v__=0;
  not__temp30v(__temp65v,&__temp66v__);
  goto __temp_return;
  __temp_return:
  *__temp1261v=__temp66v__;
}

static inline __attribute__((always_inline)) void add__temp91v(double x, double y, double* __temp1262v) {
  int __temp92v__=0;
  double z=0;
  is_different__temp64v(x,y,&__temp92v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1204v() {
  char* __temp1205v__unsafe_ptr=0;
  uint64_t __temp1205v__unsafe_size=0;
  uint64_t __temp1205v__unsafe_align=0;
  char __temp1206v____temp1193v____temp439v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1208v=0;
  char* __temp1209v__=0;
  double __temp1210v__z=0;
  uint64_t __temp1211v=0;
  char* __temp1212v__=0;
  double __temp1213v__z=0;
  double __temp1214v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1186v(&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1205v__unsafe_ptr;
  x__unsafe_size=__temp1205v__unsafe_size;
  x__unsafe_align=__temp1205v__unsafe_align;
  __temp_errcode=test2__temp1198v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1208v=0;
  __temp_errcode=get__temp503v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1208v,&__temp1209v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1209v__){
  goto __temp_failure;
  }
  memcpy(&__temp1210v__z,__temp1209v__,8);
  __temp1211v=1;
  __temp_errcode=get__temp503v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1211v,&__temp1212v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__z,__temp1212v__,8);
  add__temp91v(__temp1210v__z,__temp1213v__z,&__temp1214v__);
  print__temp356v(__temp1214v__);
  
  __temp_failure:exists__temp401v(__temp1205v__unsafe_ptr,&__temp1206v____temp1193v____temp439v__);
  if(__temp1206v____temp1193v____temp439v__){
  __temp1205v__unsafe_size=0;
  __temp1205v__unsafe_size=__temp1205v__unsafe_size;
  free__temp431v(&__temp1205v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1204v();return 0;}