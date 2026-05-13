#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
const char* const __temp1204v="going to deallocate of size: ";
const char* const __temp761v="";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1187v(char** __temp1223v, uint64_t* __temp1224v, uint64_t* __temp1225v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1223v=unsafe_ptr;
  *__temp1224v=unsafe_size;
  *__temp1225v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1226v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1226v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1227v) {
  char* allocated=*__temp1227v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1227v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1228v) {
  int value=0;
  *__temp1228v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1229v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1229v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1230v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1230v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1231v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1231v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1232v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1232v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1233v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1233v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1234v) {
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

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1235v, uint64_t* __temp1236v, uint64_t* __temp1237v, uint64_t size, char** __temp1238v, uint64_t* __temp1239v, uint64_t* __temp1240v) {
  char* buffer__unsafe_ptr=*__temp1235v;
  uint64_t buffer__unsafe_size=*__temp1236v;
  uint64_t buffer__unsafe_align=*__temp1237v;
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
  *__temp1235v=buffer__unsafe_ptr;
  *__temp1236v=buffer__unsafe_size;
  *__temp1237v=buffer__unsafe_align;
  *__temp1238v=buffer__unsafe_ptr;
  *__temp1239v=buffer__unsafe_size;
  *__temp1240v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1241v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1242v) {
  *__temp1242v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1243v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1243v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1244v, uint64_t* __temp1245v, uint64_t* __temp1246v, uint64_t i, char** __temp1247v) {
  char* buffer__unsafe_ptr=*__temp1244v;
  uint64_t buffer__unsafe_size=*__temp1245v;
  uint64_t buffer__unsafe_align=*__temp1246v;
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
  *__temp1244v=buffer__unsafe_ptr;
  *__temp1245v=buffer__unsafe_size;
  *__temp1246v=buffer__unsafe_align;
  *__temp1247v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1248v) {
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
  *__temp1248v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp354v(const char* value, const char* endl) {
  int __temp355v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1249v) {
  goto __temp_return;
  __temp_return:
  *__temp1249v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp364v(uint64_t value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1186v(char** __temp1250v, uint64_t* __temp1251v, uint64_t* __temp1252v) {
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
  uint64_t __temp1197v=0;
  char* __temp1198v__=0;
  double __temp1199v=0;
  uint64_t __temp1200v=0;
  char* __temp1201v__=0;
  double __temp1202v__z=0;
  uint64_t __temp1206v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1187v(&__temp1189v__unsafe_ptr,&__temp1189v__unsafe_size,&__temp1189v__unsafe_align);
  __temp1190v__unsafe_ptr=__temp1189v__unsafe_ptr;
  __temp1190v__unsafe_size=__temp1189v__unsafe_size;
  __temp1190v__unsafe_align=__temp1189v__unsafe_align;
  __temp1191v=2;
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
  __temp1197v=1;
  __temp_errcode=mutget__temp499v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1197v,&__temp1198v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1199v=2.0;
  if(!__temp1198v__){
  goto __temp_failure;
  }
  memcpy(__temp1198v__,&__temp1199v,8);
  __temp1200v=1;
  __temp_errcode=get__temp503v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1200v,&__temp1201v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1201v__){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__z,__temp1201v__,8);
  print__temp356v(__temp1202v__z);
  goto __temp_return;
  
  __temp_failure:print__temp354v(__temp1204v,__temp761v);
  len__temp507v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,&x__unsafe_size);
  print__temp364v(x__unsafe_size);
  exists__temp401v(x__unsafe_ptr,&__temp1193v____temp439v__);
  if(__temp1193v____temp439v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp431v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1250v=x__unsafe_ptr;
  *__temp1251v=x__unsafe_size;
  *__temp1252v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1208v(char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, char** __temp1256v, uint64_t* __temp1257v, uint64_t* __temp1258v, char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v) {
  char* __temp1209v__unsafe_ptr=0;
  uint64_t __temp1209v__unsafe_size=0;
  uint64_t __temp1209v__unsafe_align=0;
  char __temp1210v____temp1193v____temp439v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint64_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint64_t j__unsafe_align=0;
  char* __temp1211v__unsafe_ptr=0;
  uint64_t __temp1211v__unsafe_size=0;
  uint64_t __temp1211v__unsafe_align=0;
  char* __temp1212v__unsafe_ptr=0;
  uint64_t __temp1212v__unsafe_size=0;
  uint64_t __temp1212v__unsafe_align=0;
  uint64_t __temp1213v=0;
  char* __temp1214v__unsafe_ptr=0;
  uint64_t __temp1214v__unsafe_size=0;
  uint64_t __temp1214v__unsafe_align=0;
  char __temp1215v____temp439v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint64_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1186v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1209v__unsafe_ptr;
  t__unsafe_size=__temp1209v__unsafe_size;
  t__unsafe_align=__temp1209v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1187v(&__temp1211v__unsafe_ptr,&__temp1211v__unsafe_size,&__temp1211v__unsafe_align);
  __temp1212v__unsafe_ptr=__temp1211v__unsafe_ptr;
  __temp1212v__unsafe_size=__temp1211v__unsafe_size;
  __temp1212v__unsafe_align=__temp1211v__unsafe_align;
  __temp1213v=3;
  __temp_errcode=alloc__temp437v(&__temp1212v__unsafe_ptr,&__temp1212v__unsafe_size,&__temp1212v__unsafe_align,__temp1213v,&__temp1214v__unsafe_ptr,&__temp1214v__unsafe_size,&__temp1214v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1214v__unsafe_ptr;
  k__unsafe_size=__temp1214v__unsafe_size;
  k__unsafe_align=__temp1214v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(k__unsafe_ptr,&__temp1215v____temp439v__);
  if(__temp1215v____temp439v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  free__temp431v(&k__unsafe_ptr);
  }
  print__temp354v(__temp1204v,__temp761v);
  len__temp507v(t__unsafe_ptr,t__unsafe_size,t__unsafe_align,&t__unsafe_size);
  print__temp364v(t__unsafe_size);
  exists__temp401v(t__unsafe_ptr,&__temp1210v____temp1193v____temp439v__);
  if(__temp1210v____temp1193v____temp439v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  free__temp431v(&t__unsafe_ptr);
  }
  __temp_return:
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

static inline __attribute__((always_inline)) int main__temp1216v() {
  char* __temp1217v__t__unsafe_ptr=0;
  uint64_t __temp1217v__t__unsafe_size=0;
  uint64_t __temp1217v__t__unsafe_align=0;
  char* __temp1217v__j__unsafe_ptr=0;
  uint64_t __temp1217v__j__unsafe_size=0;
  uint64_t __temp1217v__j__unsafe_align=0;
  char* __temp1217v__k__unsafe_ptr=0;
  uint64_t __temp1217v__k__unsafe_size=0;
  uint64_t __temp1217v__k__unsafe_align=0;
  char __temp1218v____temp1210v____temp1193v____temp439v__=0;
  char __temp1218v____temp1215v____temp439v__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint64_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint64_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint64_t t__k__unsafe_align=0;
  uint64_t __temp1219v=0;
  char* __temp1220v__=0;
  double __temp1221v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1208v(&__temp1217v__t__unsafe_ptr,&__temp1217v__t__unsafe_size,&__temp1217v__t__unsafe_align,&__temp1217v__j__unsafe_ptr,&__temp1217v__j__unsafe_size,&__temp1217v__j__unsafe_align,&__temp1217v__k__unsafe_ptr,&__temp1217v__k__unsafe_size,&__temp1217v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1217v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1217v__t__unsafe_size;
  t__t__unsafe_align=__temp1217v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1217v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1217v__j__unsafe_size;
  t__j__unsafe_align=__temp1217v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1217v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1217v__k__unsafe_size;
  t__k__unsafe_align=__temp1217v__k__unsafe_align;
  __temp1219v=1;
  __temp_errcode=get__temp503v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1219v,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__z,__temp1220v__,8);
  print__temp356v(__temp1221v__z);
  
  __temp_failure:exists__temp401v(__temp1217v__k__unsafe_ptr,&__temp1218v____temp1215v____temp439v__);
  if(__temp1218v____temp1215v____temp439v__){
  __temp1217v__k__unsafe_size=0;
  __temp1217v__k__unsafe_size=__temp1217v__k__unsafe_size;
  free__temp431v(&__temp1217v__k__unsafe_ptr);
  }
  print__temp354v(__temp1204v,__temp761v);
  len__temp507v(__temp1217v__t__unsafe_ptr,__temp1217v__t__unsafe_size,__temp1217v__t__unsafe_align,&__temp1217v__t__unsafe_size);
  print__temp364v(__temp1217v__t__unsafe_size);
  exists__temp401v(__temp1217v__t__unsafe_ptr,&__temp1218v____temp1210v____temp1193v____temp439v__);
  if(__temp1218v____temp1210v____temp1193v____temp439v__){
  __temp1217v__t__unsafe_size=0;
  __temp1217v__t__unsafe_size=__temp1217v__t__unsafe_size;
  free__temp431v(&__temp1217v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1216v();return 0;}