#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1191v=",";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1200v(char** __temp1245v, unsigned long long* __temp1246v, unsigned long long* __temp1247v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1245v=unsafe_ptr;
  *__temp1246v=unsafe_size;
  *__temp1247v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1248v) {
  int value=0;
  *__temp1248v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1249v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1250v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1250v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1251v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1252v) {
  char* allocated=*__temp1252v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1252v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1253v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1253v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1254v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1255v) {
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
  *__temp1255v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1256v, unsigned long long* __temp1257v, unsigned long long* __temp1258v, unsigned long long size, char** __temp1259v, unsigned long long* __temp1260v, unsigned long long* __temp1261v) {
  char* buffer__unsafe_ptr=*__temp1256v;
  unsigned long long buffer__unsafe_size=*__temp1257v;
  unsigned long long buffer__unsafe_align=*__temp1258v;
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
  *__temp1256v=buffer__unsafe_ptr;
  *__temp1257v=buffer__unsafe_size;
  *__temp1258v=buffer__unsafe_align;
  *__temp1259v=buffer__unsafe_ptr;
  *__temp1260v=buffer__unsafe_size;
  *__temp1261v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1262v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1263v) {
  *__temp1263v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1264v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1264v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1265v, unsigned long long* __temp1266v, unsigned long long* __temp1267v, unsigned long long i, char** __temp1268v) {
  char* buffer__unsafe_ptr=*__temp1265v;
  unsigned long long buffer__unsafe_size=*__temp1266v;
  unsigned long long buffer__unsafe_align=*__temp1267v;
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
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  *__temp1268v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1269v) {
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
  *__temp1269v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1270v) {
  char* new_allocated=0;
  char failed=0;
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
  *__temp1270v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1271v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) int resize__temp474v(char** __temp1272v, unsigned long long* __temp1273v, unsigned long long* __temp1274v, unsigned long long size, char** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1272v;
  unsigned long long buffer__unsafe_size=*__temp1273v;
  unsigned long long buffer__unsafe_align=*__temp1274v;
  char __temp475v__=0;
  unsigned long long __temp476v=0;
  char __temp477v__=0;
  unsigned long long __temp478v=0;
  unsigned long long __temp480v=0;
  char __temp481v__=0;
  unsigned long long __temp482v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp483v__=0;
  unsigned long long bytes=0;
  char* __temp484v__=0;
  char __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp475v__);
  if(__temp475v__){
  goto __temp_return;
  }
  __temp476v=0;
  eq__temp278v(size,__temp476v,&__temp477v__);
  if(__temp477v__){
  __temp478v=0;
  buffer__unsafe_size=__temp478v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp480v=0;
  eq__temp278v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp482v__);
  prev_bytes=__temp482v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp483v__);
  bytes=__temp483v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  lt__temp182v(prev_bytes,bytes,&__temp485v__);
  if(__temp485v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1272v=buffer__unsafe_ptr;
  *__temp1273v=buffer__unsafe_size;
  *__temp1274v=buffer__unsafe_align;
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1278v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  char __temp334v__=0;
  unsigned long long z=0;
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
  *__temp1278v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp494v(char** __temp1279v, unsigned long long* __temp1280v, unsigned long long* __temp1281v, char** __temp1282v) {
  char* buffer__unsafe_ptr=*__temp1279v;
  unsigned long long buffer__unsafe_size=*__temp1280v;
  unsigned long long buffer__unsafe_align=*__temp1281v;
  unsigned long long __temp495v=0;
  char __temp496v__=0;
  unsigned long long __temp497v=0;
  unsigned long long __temp498v__=0;
  unsigned long long __temp499v__=0;
  char* __temp500v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp495v=0;
  eq__temp278v(__temp495v,buffer__unsafe_size,&__temp496v__);
  if(__temp496v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp497v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp497v,&__temp498v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp498v__,buffer__unsafe_align,&__temp499v__);
  add__temp430v(buffer__unsafe_ptr,__temp499v__,&__temp500v__);
  unsafe_ptr=__temp500v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1279v=buffer__unsafe_ptr;
  *__temp1280v=buffer__unsafe_size;
  *__temp1281v=buffer__unsafe_align;
  *__temp1282v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1220v(char** __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1283v=unsafe_ptr;
  *__temp1284v=unsafe_size;
  *__temp1285v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp355v(double value, const char* endl) {
  int __temp356v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1189v(char* f) {
  double __temp1190v__a__x=0;
  double __temp1190v__a__y=0;
  double __temp1190v__b__x=0;
  double __temp1190v__b__y=0;
  double __temp1193v__a__x=0;
  double __temp1193v__a__y=0;
  double __temp1193v__b__x=0;
  double __temp1193v__b__y=0;
  double __temp1195v__a__x=0;
  double __temp1195v__a__y=0;
  double __temp1195v__b__x=0;
  double __temp1195v__b__y=0;
  double __temp1197v__a__x=0;
  double __temp1197v__a__y=0;
  double __temp1197v__b__x=0;
  double __temp1197v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1190v__b__y,f+24,8);
  print__temp355v(__temp1190v__a__x,__temp1191v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1193v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1193v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1193v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1193v__b__y,f+24,8);
  print__temp355v(__temp1193v__a__y,__temp1191v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1195v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1195v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1195v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1195v__b__y,f+24,8);
  print__temp355v(__temp1195v__b__x,__temp1191v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1197v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1197v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1197v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1197v__b__y,f+24,8);
  print__temp353v(__temp1197v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1199v() {
  char* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  char* __temp1203v__unsafe_ptr=0;
  unsigned long long __temp1203v__unsafe_size=0;
  unsigned long long __temp1203v__unsafe_align=0;
  unsigned long long __temp1204v=0;
  char* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__unsafe_size=0;
  unsigned long long __temp1205v__unsafe_align=0;
  unsigned long long __temp1206v____temp438v=0;
  char __temp1206v____temp439v__=0;
  char* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1207v=0;
  char* __temp1208v__=0;
  double __temp1209v=0;
  unsigned long long __temp1210v=0;
  char* __temp1211v__=0;
  double __temp1212v__value=0;
  unsigned long long __temp1214v=0;
  char* __temp1215v__=0;
  char* f0=0;
  double __temp1216v__value=0;
  unsigned long long __temp1217v=0;
  char* __temp1218v__unsafe_ptr=0;
  unsigned long long __temp1218v__unsafe_size=0;
  unsigned long long __temp1218v__unsafe_align=0;
  char* __temp1219v__=0;
  char* __temp1222v__unsafe_ptr=0;
  unsigned long long __temp1222v__unsafe_size=0;
  unsigned long long __temp1222v__unsafe_align=0;
  char* __temp1223v__unsafe_ptr=0;
  unsigned long long __temp1223v__unsafe_size=0;
  unsigned long long __temp1223v__unsafe_align=0;
  unsigned long long __temp1224v=0;
  char* __temp1225v__unsafe_ptr=0;
  unsigned long long __temp1225v__unsafe_size=0;
  unsigned long long __temp1225v__unsafe_align=0;
  unsigned long long __temp1226v____temp438v=0;
  char __temp1226v____temp439v__=0;
  char* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1227v=0;
  char* __temp1228v__=0;
  double __temp1229v=0;
  double __temp1230v=0;
  double __temp1231v=0;
  double __temp1232v=0;
  unsigned long long __temp1233v=0;
  char* __temp1234v__=0;
  double __temp1236v=0;
  char* __temp1237v__unsafe_ptr=0;
  unsigned long long __temp1237v__unsafe_size=0;
  unsigned long long __temp1237v__unsafe_align=0;
  char* __temp1238v__unsafe_ptr=0;
  unsigned long long __temp1238v__unsafe_size=0;
  unsigned long long __temp1238v__unsafe_align=0;
  unsigned long long __temp1239v=0;
  char* __temp1240v__unsafe_ptr=0;
  unsigned long long __temp1240v__unsafe_size=0;
  unsigned long long __temp1240v__unsafe_align=0;
  unsigned long long __temp1241v____temp438v=0;
  char __temp1241v____temp439v__=0;
  char* __temp1242v__=0;
  char* n=0;
  double __temp1243v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  __temp1203v__unsafe_ptr=__temp1202v__unsafe_ptr;
  __temp1203v__unsafe_size=__temp1202v__unsafe_size;
  __temp1203v__unsafe_align=__temp1202v__unsafe_align;
  __temp1204v=1;
  __temp_errcode=alloc__temp434v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align,__temp1204v,&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1205v__unsafe_ptr;
  f__unsafe_size=__temp1205v__unsafe_size;
  f__unsafe_align=__temp1205v__unsafe_align;
  __temp1207v=0;
  __temp_errcode=mutget__temp501v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1207v,&__temp1208v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1209v=1.0;
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__,&__temp1209v,8);
  __temp1210v=0;
  __temp_errcode=get__temp505v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1210v,&__temp1211v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1211v__){
  goto __temp_failure;
  }
  memcpy(&__temp1212v__value,__temp1211v__,8);
  print__temp353v(__temp1212v__value);
  __temp1214v=0;
  __temp_errcode=mutget__temp501v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1214v,&__temp1215v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1215v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1216v__value,f0,8);
  __temp1217v=2;
  __temp_errcode=resize__temp474v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1217v,&__temp1218v__unsafe_ptr,&__temp1218v__unsafe_size,&__temp1218v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp494v(&__temp1218v__unsafe_ptr,&__temp1218v__unsafe_size,&__temp1218v__unsafe_align,&__temp1219v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy(__temp1219v__,&__temp1216v__value,8);
  Field__temp_buffer__buffer__temp1220v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  __temp1223v__unsafe_ptr=__temp1222v__unsafe_ptr;
  __temp1223v__unsafe_size=__temp1222v__unsafe_size;
  __temp1223v__unsafe_align=__temp1222v__unsafe_align;
  __temp1224v=1;
  __temp_errcode=alloc__temp434v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,__temp1224v,&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1225v__unsafe_ptr;
  p__unsafe_size=__temp1225v__unsafe_size;
  p__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=0;
  __temp_errcode=mutget__temp501v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1227v,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1229v=1.0;
  __temp1230v=2.0;
  __temp1231v=3.0;
  __temp1232v=4.0;
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__,&__temp1229v,8);
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__+8,&__temp1230v,8);
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__+16,&__temp1231v,8);
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__+24,&__temp1232v,8);
  __temp1233v=0;
  __temp_errcode=get__temp505v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1233v,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1189v(__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1236v=1.0;
  float__temp_buffer__buffer__temp1200v(&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align);
  __temp1238v__unsafe_ptr=__temp1237v__unsafe_ptr;
  __temp1238v__unsafe_size=__temp1237v__unsafe_size;
  __temp1238v__unsafe_align=__temp1237v__unsafe_align;
  __temp1239v=1;
  __temp_errcode=alloc__temp434v(&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align,__temp1239v,&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp494v(&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align,&__temp1242v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1242v__){
  goto __temp_failure;
  }
  memcpy(__temp1242v__,&__temp1236v,8);
  n=__temp1242v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1243v__value,n,8);
  print__temp353v(__temp1243v__value);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1199v();return 0;}