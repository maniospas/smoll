#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1209v=",";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1218v(char** __temp1263v, unsigned long long* __temp1264v, unsigned long long* __temp1265v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1263v=unsafe_ptr;
  *__temp1264v=unsafe_size;
  *__temp1265v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1266v) {
  int value=0;
  *__temp1266v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1267v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1267v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1268v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1268v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1269v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1270v) {
  char* allocated=*__temp1270v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1270v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1271v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1272v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1273v) {
  char* allocated=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1273v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1274v, unsigned long long* __temp1275v, unsigned long long* __temp1276v, unsigned long long size, char** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v) {
  char* buffer__unsafe_ptr=*__temp1274v;
  unsigned long long buffer__unsafe_size=*__temp1275v;
  unsigned long long buffer__unsafe_align=*__temp1276v;
  unsigned long long __temp435v=0;
  char __temp436v__=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
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
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  *__temp1277v=buffer__unsafe_ptr;
  *__temp1278v=buffer__unsafe_size;
  *__temp1279v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1280v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1281v) {
  *__temp1281v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1282v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1282v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v, unsigned long long i, char** __temp1286v) {
  char* buffer__unsafe_ptr=*__temp1283v;
  unsigned long long buffer__unsafe_size=*__temp1284v;
  unsigned long long buffer__unsafe_align=*__temp1285v;
  char __temp479v__=0;
  unsigned long long __temp480v__=0;
  char* __temp481v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp480v__);
  add__temp430v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1283v=buffer__unsafe_ptr;
  *__temp1284v=buffer__unsafe_size;
  *__temp1285v=buffer__unsafe_align;
  *__temp1286v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1287v) {
  char __temp483v__=0;
  unsigned long long __temp484v__=0;
  char* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1287v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1288v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp427v__=0;
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
  *__temp1288v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1289v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) int resize__temp451v(char** __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v, unsigned long long size, char** __temp1293v, unsigned long long* __temp1294v, unsigned long long* __temp1295v) {
  char* buffer__unsafe_ptr=*__temp1290v;
  unsigned long long buffer__unsafe_size=*__temp1291v;
  unsigned long long buffer__unsafe_align=*__temp1292v;
  char __temp452v__=0;
  unsigned long long __temp453v=0;
  char __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  char __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  char* __temp461v__=0;
  char __temp462v__=0;
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
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1296v) {
  int __temp331v__=0;
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
  *__temp1296v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp471v(char** __temp1297v, unsigned long long* __temp1298v, unsigned long long* __temp1299v, char** __temp1300v) {
  char* buffer__unsafe_ptr=*__temp1297v;
  unsigned long long buffer__unsafe_size=*__temp1298v;
  unsigned long long buffer__unsafe_align=*__temp1299v;
  unsigned long long __temp472v=0;
  char __temp473v__=0;
  unsigned long long __temp474v=0;
  unsigned long long __temp475v__=0;
  unsigned long long __temp476v__=0;
  char* __temp477v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp472v=0;
  eq__temp278v(__temp472v,buffer__unsafe_size,&__temp473v__);
  if(__temp473v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp474v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp474v,&__temp475v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp475v__,buffer__unsafe_align,&__temp476v__);
  add__temp430v(buffer__unsafe_ptr,__temp476v__,&__temp477v__);
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=__temp477v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1238v(char** __temp1301v, unsigned long long* __temp1302v, unsigned long long* __temp1303v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1301v=unsafe_ptr;
  *__temp1302v=unsafe_size;
  *__temp1303v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp355v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1207v(char* f) {
  double __temp1208v__a__x=0;
  double __temp1208v__a__y=0;
  double __temp1208v__b__x=0;
  double __temp1208v__b__y=0;
  double __temp1211v__a__x=0;
  double __temp1211v__a__y=0;
  double __temp1211v__b__x=0;
  double __temp1211v__b__y=0;
  double __temp1213v__a__x=0;
  double __temp1213v__a__y=0;
  double __temp1213v__b__x=0;
  double __temp1213v__b__y=0;
  double __temp1215v__a__x=0;
  double __temp1215v__a__y=0;
  double __temp1215v__b__x=0;
  double __temp1215v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__b__y,f+24,8);
  print__temp355v(__temp1208v__a__x,__temp1209v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1211v__b__y,f+24,8);
  print__temp355v(__temp1211v__a__y,__temp1209v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1213v__b__y,f+24,8);
  print__temp355v(__temp1213v__b__x,__temp1209v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1215v__b__y,f+24,8);
  print__temp353v(__temp1215v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1217v() {
  char* __temp1220v__unsafe_ptr=0;
  unsigned long long __temp1220v__unsafe_size=0;
  unsigned long long __temp1220v__unsafe_align=0;
  char* __temp1221v__unsafe_ptr=0;
  unsigned long long __temp1221v__unsafe_size=0;
  unsigned long long __temp1221v__unsafe_align=0;
  unsigned long long __temp1222v=0;
  char* __temp1223v__unsafe_ptr=0;
  unsigned long long __temp1223v__unsafe_size=0;
  unsigned long long __temp1223v__unsafe_align=0;
  char* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1225v=0;
  char* __temp1226v__=0;
  double __temp1227v=0;
  unsigned long long __temp1228v=0;
  char* __temp1229v__=0;
  double __temp1230v__number=0;
  unsigned long long __temp1232v=0;
  char* __temp1233v__=0;
  char* f0=0;
  double __temp1234v__number=0;
  unsigned long long __temp1235v=0;
  char* __temp1236v__unsafe_ptr=0;
  unsigned long long __temp1236v__unsafe_size=0;
  unsigned long long __temp1236v__unsafe_align=0;
  char* __temp1237v__=0;
  char* __temp1240v__unsafe_ptr=0;
  unsigned long long __temp1240v__unsafe_size=0;
  unsigned long long __temp1240v__unsafe_align=0;
  char* __temp1241v__unsafe_ptr=0;
  unsigned long long __temp1241v__unsafe_size=0;
  unsigned long long __temp1241v__unsafe_align=0;
  unsigned long long __temp1242v=0;
  char* __temp1243v__unsafe_ptr=0;
  unsigned long long __temp1243v__unsafe_size=0;
  unsigned long long __temp1243v__unsafe_align=0;
  char* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1245v=0;
  char* __temp1246v__=0;
  double __temp1247v=0;
  double __temp1248v=0;
  double __temp1249v=0;
  double __temp1250v=0;
  unsigned long long __temp1251v=0;
  char* __temp1252v__=0;
  double __temp1254v=0;
  char* __temp1255v__unsafe_ptr=0;
  unsigned long long __temp1255v__unsafe_size=0;
  unsigned long long __temp1255v__unsafe_align=0;
  char* __temp1256v__unsafe_ptr=0;
  unsigned long long __temp1256v__unsafe_size=0;
  unsigned long long __temp1256v__unsafe_align=0;
  unsigned long long __temp1257v=0;
  char* __temp1258v__unsafe_ptr=0;
  unsigned long long __temp1258v__unsafe_size=0;
  unsigned long long __temp1258v__unsafe_align=0;
  char* __temp1260v__=0;
  char* n=0;
  double __temp1261v__number=0;
  unsigned long long __temp1307v=0;
  char __temp1308v=0;
  unsigned long long __temp1313v=0;
  char __temp1314v=0;
  unsigned long long __temp1318v=0;
  char __temp1319v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1218v(&__temp1220v__unsafe_ptr,&__temp1220v__unsafe_size,&__temp1220v__unsafe_align);
  __temp1221v__unsafe_ptr=__temp1220v__unsafe_ptr;
  __temp1221v__unsafe_size=__temp1220v__unsafe_size;
  __temp1221v__unsafe_align=__temp1220v__unsafe_align;
  __temp1222v=1;
  __temp_errcode=alloc__temp434v(&__temp1221v__unsafe_ptr,&__temp1221v__unsafe_size,&__temp1221v__unsafe_align,__temp1222v,&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1223v__unsafe_ptr;
  f__unsafe_size=__temp1223v__unsafe_size;
  f__unsafe_align=__temp1223v__unsafe_align;
  __temp1225v=0;
  __temp_errcode=mutget__temp478v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1225v,&__temp1226v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1227v=1.0;
  if(!__temp1226v__){
  goto __temp_failure;
  }
  memcpy(__temp1226v__,&__temp1227v,8);
  __temp1228v=0;
  __temp_errcode=get__temp482v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1228v,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__number,__temp1229v__,8);
  print__temp353v(__temp1230v__number);
  __temp1232v=0;
  __temp_errcode=mutget__temp478v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1232v,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1233v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1234v__number,f0,8);
  __temp1235v=2;
  __temp_errcode=resize__temp451v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1235v,&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp471v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1234v__number,8);
  Field__temp_buffer__buffer__temp1238v(&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align);
  __temp1241v__unsafe_ptr=__temp1240v__unsafe_ptr;
  __temp1241v__unsafe_size=__temp1240v__unsafe_size;
  __temp1241v__unsafe_align=__temp1240v__unsafe_align;
  __temp1242v=1;
  __temp_errcode=alloc__temp434v(&__temp1241v__unsafe_ptr,&__temp1241v__unsafe_size,&__temp1241v__unsafe_align,__temp1242v,&__temp1243v__unsafe_ptr,&__temp1243v__unsafe_size,&__temp1243v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1243v__unsafe_ptr;
  p__unsafe_size=__temp1243v__unsafe_size;
  p__unsafe_align=__temp1243v__unsafe_align;
  __temp1245v=0;
  __temp_errcode=mutget__temp478v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1245v,&__temp1246v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1247v=1.0;
  __temp1248v=2.0;
  __temp1249v=3.0;
  __temp1250v=4.0;
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__,&__temp1247v,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+8,&__temp1248v,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+16,&__temp1249v,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+24,&__temp1250v,8);
  __temp1251v=0;
  __temp_errcode=get__temp482v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1251v,&__temp1252v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1207v(__temp1252v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1254v=1.0;
  float__temp_buffer__buffer__temp1218v(&__temp1255v__unsafe_ptr,&__temp1255v__unsafe_size,&__temp1255v__unsafe_align);
  __temp1256v__unsafe_ptr=__temp1255v__unsafe_ptr;
  __temp1256v__unsafe_size=__temp1255v__unsafe_size;
  __temp1256v__unsafe_align=__temp1255v__unsafe_align;
  __temp1257v=1;
  __temp_errcode=alloc__temp434v(&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_align,__temp1257v,&__temp1258v__unsafe_ptr,&__temp1258v__unsafe_size,&__temp1258v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp471v(&__temp1258v__unsafe_ptr,&__temp1258v__unsafe_size,&__temp1258v__unsafe_align,&__temp1260v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__,&__temp1254v,8);
  n=__temp1260v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1261v__number,n,8);
  print__temp353v(__temp1261v__number);
  
  __temp_failure:__temp1318v=0;
  neq__temp302v(__temp1258v__unsafe_size,__temp1318v,&__temp1319v);
  if(__temp1319v){
  __temp1258v__unsafe_size=0;
  free__temp428v(&__temp1258v__unsafe_ptr);
  }
  __temp1313v=0;
  neq__temp302v(__temp1243v__unsafe_size,__temp1313v,&__temp1314v);
  if(__temp1314v){
  __temp1243v__unsafe_size=0;
  free__temp428v(&__temp1243v__unsafe_ptr);
  }
  __temp1307v=0;
  neq__temp302v(__temp1223v__unsafe_size,__temp1307v,&__temp1308v);
  if(__temp1308v){
  __temp1223v__unsafe_size=0;
  free__temp428v(&__temp1223v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1217v();return 0;}