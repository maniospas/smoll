#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1229v=",";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1238v(char** __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1283v=unsafe_ptr;
  *__temp1284v=unsafe_size;
  *__temp1285v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1286v) {
  int value=0;
  *__temp1286v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1287v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1287v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1288v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1288v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1289v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1290v) {
  char* allocated=*__temp1290v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1290v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1291v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1292v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1293v) {
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
  *__temp1293v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1294v, unsigned long long* __temp1295v, unsigned long long* __temp1296v, unsigned long long size, char** __temp1297v, unsigned long long* __temp1298v, unsigned long long* __temp1299v) {
  char* buffer__unsafe_ptr=*__temp1294v;
  unsigned long long buffer__unsafe_size=*__temp1295v;
  unsigned long long buffer__unsafe_align=*__temp1296v;
  unsigned long long __temp436v=0;
  char __temp437v__=0;
  char __temp440v__=0;
  unsigned long long __temp441v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  char __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  char* __temp449v__=0;
  unsigned long long __temp450v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  neq__temp302v(size,__temp441v,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp444v__);
  zero__temp429v(buffer__unsafe_ptr,__temp443v,__temp444v__);
  }
  goto __temp_return;
  }
  __temp446v=0;
  neq__temp302v(buffer__unsafe_size,__temp446v,&__temp447v__);
  if(__temp447v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp448v__);
  bytes=__temp448v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp450v,bytes);
  *__temp1294v=buffer__unsafe_ptr;
  *__temp1295v=buffer__unsafe_size;
  *__temp1296v=buffer__unsafe_align;
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1300v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1301v) {
  *__temp1301v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1302v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1302v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp498v(char** __temp1303v, unsigned long long* __temp1304v, unsigned long long* __temp1305v, unsigned long long i, char** __temp1306v) {
  char* buffer__unsafe_ptr=*__temp1303v;
  unsigned long long buffer__unsafe_size=*__temp1304v;
  unsigned long long buffer__unsafe_align=*__temp1305v;
  char __temp499v__=0;
  unsigned long long __temp500v__=0;
  char* __temp501v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp499v__);
  if(__temp499v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp500v__);
  add__temp430v(buffer__unsafe_ptr,__temp500v__,&__temp501v__);
  *__temp1303v=buffer__unsafe_ptr;
  *__temp1304v=buffer__unsafe_size;
  *__temp1305v=buffer__unsafe_align;
  *__temp1306v=__temp501v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1307v) {
  char __temp503v__=0;
  unsigned long long __temp504v__=0;
  char* __temp505v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp503v__);
  if(__temp503v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp504v__);
  add__temp430v(buffer__unsafe_ptr,__temp504v__,&__temp505v__);
  *__temp1307v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1308v) {
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
  *__temp1308v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1309v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) int resize__temp471v(char** __temp1310v, unsigned long long* __temp1311v, unsigned long long* __temp1312v, unsigned long long size, char** __temp1313v, unsigned long long* __temp1314v, unsigned long long* __temp1315v) {
  char* buffer__unsafe_ptr=*__temp1310v;
  unsigned long long buffer__unsafe_size=*__temp1311v;
  unsigned long long buffer__unsafe_align=*__temp1312v;
  char __temp472v__=0;
  unsigned long long __temp473v=0;
  char __temp474v__=0;
  unsigned long long __temp475v=0;
  unsigned long long __temp477v=0;
  char __temp478v__=0;
  unsigned long long __temp479v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp480v__=0;
  unsigned long long bytes=0;
  char* __temp481v__=0;
  char __temp482v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  goto __temp_return;
  }
  __temp473v=0;
  eq__temp278v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  buffer__unsafe_size=__temp475v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp477v=0;
  eq__temp278v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp479v__);
  prev_bytes=__temp479v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  lt__temp182v(prev_bytes,bytes,&__temp482v__);
  if(__temp482v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  *__temp1310v=buffer__unsafe_ptr;
  *__temp1311v=buffer__unsafe_size;
  *__temp1312v=buffer__unsafe_align;
  *__temp1313v=buffer__unsafe_ptr;
  *__temp1314v=buffer__unsafe_size;
  *__temp1315v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1316v) {
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
  *__temp1316v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp491v(char** __temp1317v, unsigned long long* __temp1318v, unsigned long long* __temp1319v, char** __temp1320v) {
  char* buffer__unsafe_ptr=*__temp1317v;
  unsigned long long buffer__unsafe_size=*__temp1318v;
  unsigned long long buffer__unsafe_align=*__temp1319v;
  unsigned long long __temp492v=0;
  char __temp493v__=0;
  unsigned long long __temp494v=0;
  unsigned long long __temp495v__=0;
  unsigned long long __temp496v__=0;
  char* __temp497v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp492v=0;
  eq__temp278v(__temp492v,buffer__unsafe_size,&__temp493v__);
  if(__temp493v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp494v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp494v,&__temp495v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp495v__,buffer__unsafe_align,&__temp496v__);
  add__temp430v(buffer__unsafe_ptr,__temp496v__,&__temp497v__);
  *__temp1317v=buffer__unsafe_ptr;
  *__temp1318v=buffer__unsafe_size;
  *__temp1319v=buffer__unsafe_align;
  *__temp1320v=__temp497v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1258v(char** __temp1321v, unsigned long long* __temp1322v, unsigned long long* __temp1323v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1321v=unsafe_ptr;
  *__temp1322v=unsafe_size;
  *__temp1323v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp355v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1227v(char* f) {
  double __temp1228v__a__x=0;
  double __temp1228v__a__y=0;
  double __temp1228v__b__x=0;
  double __temp1228v__b__y=0;
  double __temp1231v__a__x=0;
  double __temp1231v__a__y=0;
  double __temp1231v__b__x=0;
  double __temp1231v__b__y=0;
  double __temp1233v__a__x=0;
  double __temp1233v__a__y=0;
  double __temp1233v__b__x=0;
  double __temp1233v__b__y=0;
  double __temp1235v__a__x=0;
  double __temp1235v__a__y=0;
  double __temp1235v__b__x=0;
  double __temp1235v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__b__y,f+24,8);
  print__temp355v(__temp1228v__a__x,__temp1229v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1231v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1231v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1231v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1231v__b__y,f+24,8);
  print__temp355v(__temp1231v__a__y,__temp1229v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__b__y,f+24,8);
  print__temp355v(__temp1233v__b__x,__temp1229v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__b__y,f+24,8);
  print__temp353v(__temp1235v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1237v() {
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
  char* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1245v=0;
  char* __temp1246v__=0;
  double __temp1247v=0;
  unsigned long long __temp1248v=0;
  char* __temp1249v__=0;
  double __temp1250v__number=0;
  unsigned long long __temp1252v=0;
  char* __temp1253v__=0;
  char* f0=0;
  double __temp1254v__number=0;
  unsigned long long __temp1255v=0;
  char* __temp1256v__unsafe_ptr=0;
  unsigned long long __temp1256v__unsafe_size=0;
  unsigned long long __temp1256v__unsafe_align=0;
  char* __temp1257v__=0;
  char* __temp1260v__unsafe_ptr=0;
  unsigned long long __temp1260v__unsafe_size=0;
  unsigned long long __temp1260v__unsafe_align=0;
  char* __temp1261v__unsafe_ptr=0;
  unsigned long long __temp1261v__unsafe_size=0;
  unsigned long long __temp1261v__unsafe_align=0;
  unsigned long long __temp1262v=0;
  char* __temp1263v__unsafe_ptr=0;
  unsigned long long __temp1263v__unsafe_size=0;
  unsigned long long __temp1263v__unsafe_align=0;
  char* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1265v=0;
  char* __temp1266v__=0;
  double __temp1267v=0;
  double __temp1268v=0;
  double __temp1269v=0;
  double __temp1270v=0;
  unsigned long long __temp1271v=0;
  char* __temp1272v__=0;
  double __temp1274v=0;
  char* __temp1275v__unsafe_ptr=0;
  unsigned long long __temp1275v__unsafe_size=0;
  unsigned long long __temp1275v__unsafe_align=0;
  char* __temp1276v__unsafe_ptr=0;
  unsigned long long __temp1276v__unsafe_size=0;
  unsigned long long __temp1276v__unsafe_align=0;
  unsigned long long __temp1277v=0;
  char* __temp1278v__unsafe_ptr=0;
  unsigned long long __temp1278v__unsafe_size=0;
  unsigned long long __temp1278v__unsafe_align=0;
  char* __temp1280v__=0;
  char* n=0;
  double __temp1281v__number=0;
  unsigned long long __temp1327v=0;
  char __temp1328v=0;
  unsigned long long __temp1333v=0;
  char __temp1334v=0;
  unsigned long long __temp1338v=0;
  char __temp1339v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1238v(&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align);
  __temp1241v__unsafe_ptr=__temp1240v__unsafe_ptr;
  __temp1241v__unsafe_size=__temp1240v__unsafe_size;
  __temp1241v__unsafe_align=__temp1240v__unsafe_align;
  __temp1242v=1;
  __temp_errcode=alloc__temp434v(&__temp1241v__unsafe_ptr,&__temp1241v__unsafe_size,&__temp1241v__unsafe_align,__temp1242v,&__temp1243v__unsafe_ptr,&__temp1243v__unsafe_size,&__temp1243v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1243v__unsafe_ptr;
  f__unsafe_size=__temp1243v__unsafe_size;
  f__unsafe_align=__temp1243v__unsafe_align;
  __temp1245v=0;
  __temp_errcode=mutget__temp498v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1245v,&__temp1246v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1247v=1.0;
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__,&__temp1247v,8);
  __temp1248v=0;
  __temp_errcode=get__temp502v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1248v,&__temp1249v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1249v__){
  goto __temp_failure;
  }
  memcpy(&__temp1250v__number,__temp1249v__,8);
  print__temp353v(__temp1250v__number);
  __temp1252v=0;
  __temp_errcode=mutget__temp498v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1252v,&__temp1253v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1253v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__number,f0,8);
  __temp1255v=2;
  __temp_errcode=resize__temp471v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1255v,&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp491v(&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_align,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1254v__number,8);
  Field__temp_buffer__buffer__temp1258v(&__temp1260v__unsafe_ptr,&__temp1260v__unsafe_size,&__temp1260v__unsafe_align);
  __temp1261v__unsafe_ptr=__temp1260v__unsafe_ptr;
  __temp1261v__unsafe_size=__temp1260v__unsafe_size;
  __temp1261v__unsafe_align=__temp1260v__unsafe_align;
  __temp1262v=1;
  __temp_errcode=alloc__temp434v(&__temp1261v__unsafe_ptr,&__temp1261v__unsafe_size,&__temp1261v__unsafe_align,__temp1262v,&__temp1263v__unsafe_ptr,&__temp1263v__unsafe_size,&__temp1263v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1263v__unsafe_ptr;
  p__unsafe_size=__temp1263v__unsafe_size;
  p__unsafe_align=__temp1263v__unsafe_align;
  __temp1265v=0;
  __temp_errcode=mutget__temp498v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1265v,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1267v=1.0;
  __temp1268v=2.0;
  __temp1269v=3.0;
  __temp1270v=4.0;
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__,&__temp1267v,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+8,&__temp1268v,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+16,&__temp1269v,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+24,&__temp1270v,8);
  __temp1271v=0;
  __temp_errcode=get__temp502v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1271v,&__temp1272v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1227v(__temp1272v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1274v=1.0;
  float__temp_buffer__buffer__temp1238v(&__temp1275v__unsafe_ptr,&__temp1275v__unsafe_size,&__temp1275v__unsafe_align);
  __temp1276v__unsafe_ptr=__temp1275v__unsafe_ptr;
  __temp1276v__unsafe_size=__temp1275v__unsafe_size;
  __temp1276v__unsafe_align=__temp1275v__unsafe_align;
  __temp1277v=1;
  __temp_errcode=alloc__temp434v(&__temp1276v__unsafe_ptr,&__temp1276v__unsafe_size,&__temp1276v__unsafe_align,__temp1277v,&__temp1278v__unsafe_ptr,&__temp1278v__unsafe_size,&__temp1278v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp491v(&__temp1278v__unsafe_ptr,&__temp1278v__unsafe_size,&__temp1278v__unsafe_align,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1280v__){
  goto __temp_failure;
  }
  memcpy(__temp1280v__,&__temp1274v,8);
  n=__temp1280v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1281v__number,n,8);
  print__temp353v(__temp1281v__number);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1237v();return 0;}