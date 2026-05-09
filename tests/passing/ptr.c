#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp350v="\n";
const char* const __temp1202v=",";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1211v(void** __temp1256v, unsigned long long* __temp1257v, unsigned long long* __temp1258v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1256v=unsafe_ptr;
  *__temp1257v=unsafe_size;
  *__temp1258v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1259v) {
  int value=0;
  *__temp1259v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1260v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1260v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1261v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1261v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1262v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1263v) {
  void* allocated=*__temp1263v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1263v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1264v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1265v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1266v) {
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
  *__temp1266v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v, unsigned long long size, void** __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v) {
  void* buffer__unsafe_ptr=*__temp1267v;
  unsigned long long buffer__unsafe_size=*__temp1268v;
  unsigned long long buffer__unsafe_align=*__temp1269v;
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
  *__temp1267v=buffer__unsafe_ptr;
  *__temp1268v=buffer__unsafe_size;
  *__temp1269v=buffer__unsafe_align;
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1273v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1274v) {
  *__temp1274v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1275v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1275v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(void** __temp1276v, unsigned long long* __temp1277v, unsigned long long* __temp1278v, unsigned long long i, void** __temp1279v) {
  void* buffer__unsafe_ptr=*__temp1276v;
  unsigned long long buffer__unsafe_size=*__temp1277v;
  unsigned long long buffer__unsafe_align=*__temp1278v;
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
  *__temp1276v=buffer__unsafe_ptr;
  *__temp1277v=buffer__unsafe_size;
  *__temp1278v=buffer__unsafe_align;
  *__temp1279v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1280v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1280v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp426v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1281v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp427v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  *__temp1281v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1282v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) int resize__temp451v(void** __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v, unsigned long long size, void** __temp1286v, unsigned long long* __temp1287v, unsigned long long* __temp1288v) {
  void* buffer__unsafe_ptr=*__temp1283v;
  unsigned long long buffer__unsafe_size=*__temp1284v;
  unsigned long long buffer__unsafe_align=*__temp1285v;
  int __temp452v__=0;
  unsigned long long __temp453v=0;
  int __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  int __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  void* __temp461v__=0;
  int __temp462v__=0;
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
  *__temp1283v=buffer__unsafe_ptr;
  *__temp1284v=buffer__unsafe_size;
  *__temp1285v=buffer__unsafe_align;
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1289v) {
  int __temp331v__=0;
  int __temp334v__=0;
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
  *__temp1289v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp471v(void** __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v, void** __temp1293v) {
  void* buffer__unsafe_ptr=*__temp1290v;
  unsigned long long buffer__unsafe_size=*__temp1291v;
  unsigned long long buffer__unsafe_align=*__temp1292v;
  unsigned long long __temp472v=0;
  int __temp473v__=0;
  unsigned long long __temp474v=0;
  unsigned long long __temp475v__=0;
  unsigned long long __temp476v__=0;
  void* __temp477v__=0;
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
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  *__temp1293v=__temp477v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1231v(void** __temp1294v, unsigned long long* __temp1295v, unsigned long long* __temp1296v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1294v=unsafe_ptr;
  *__temp1295v=unsafe_size;
  *__temp1296v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp355v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1200v(void* f) {
  double __temp1201v__a__x=0;
  double __temp1201v__a__y=0;
  double __temp1201v__b__x=0;
  double __temp1201v__b__y=0;
  double __temp1204v__a__x=0;
  double __temp1204v__a__y=0;
  double __temp1204v__b__x=0;
  double __temp1204v__b__y=0;
  double __temp1206v__a__x=0;
  double __temp1206v__a__y=0;
  double __temp1206v__b__x=0;
  double __temp1206v__b__y=0;
  double __temp1208v__a__x=0;
  double __temp1208v__a__y=0;
  double __temp1208v__b__x=0;
  double __temp1208v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1201v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1201v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1201v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1201v__b__y,(char*)f+24,8);
  print__temp355v(__temp1201v__a__x,__temp1202v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1204v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1204v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1204v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1204v__b__y,(char*)f+24,8);
  print__temp355v(__temp1204v__a__y,__temp1202v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1206v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1206v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1206v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1206v__b__y,(char*)f+24,8);
  print__temp355v(__temp1206v__b__x,__temp1202v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1208v__b__y,(char*)f+24,8);
  print__temp353v(__temp1208v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1210v() {
  void* __temp1213v__unsafe_ptr=0;
  unsigned long long __temp1213v__unsafe_size=0;
  unsigned long long __temp1213v__unsafe_align=0;
  void* __temp1214v__unsafe_ptr=0;
  unsigned long long __temp1214v__unsafe_size=0;
  unsigned long long __temp1214v__unsafe_align=0;
  unsigned long long __temp1215v=0;
  void* __temp1216v__unsafe_ptr=0;
  unsigned long long __temp1216v__unsafe_size=0;
  unsigned long long __temp1216v__unsafe_align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1218v=0;
  void* __temp1219v__=0;
  double __temp1220v=0;
  unsigned long long __temp1221v=0;
  void* __temp1222v__=0;
  double __temp1223v__value=0;
  unsigned long long __temp1225v=0;
  void* __temp1226v__=0;
  void* f0=0;
  double __temp1227v__value=0;
  unsigned long long __temp1228v=0;
  void* __temp1229v__unsafe_ptr=0;
  unsigned long long __temp1229v__unsafe_size=0;
  unsigned long long __temp1229v__unsafe_align=0;
  void* __temp1230v__=0;
  void* __temp1233v__unsafe_ptr=0;
  unsigned long long __temp1233v__unsafe_size=0;
  unsigned long long __temp1233v__unsafe_align=0;
  void* __temp1234v__unsafe_ptr=0;
  unsigned long long __temp1234v__unsafe_size=0;
  unsigned long long __temp1234v__unsafe_align=0;
  unsigned long long __temp1235v=0;
  void* __temp1236v__unsafe_ptr=0;
  unsigned long long __temp1236v__unsafe_size=0;
  unsigned long long __temp1236v__unsafe_align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1238v=0;
  void* __temp1239v__=0;
  double __temp1240v=0;
  double __temp1241v=0;
  double __temp1242v=0;
  double __temp1243v=0;
  unsigned long long __temp1244v=0;
  void* __temp1245v__=0;
  double __temp1247v=0;
  void* __temp1248v__unsafe_ptr=0;
  unsigned long long __temp1248v__unsafe_size=0;
  unsigned long long __temp1248v__unsafe_align=0;
  void* __temp1249v__unsafe_ptr=0;
  unsigned long long __temp1249v__unsafe_size=0;
  unsigned long long __temp1249v__unsafe_align=0;
  unsigned long long __temp1250v=0;
  void* __temp1251v__unsafe_ptr=0;
  unsigned long long __temp1251v__unsafe_size=0;
  unsigned long long __temp1251v__unsafe_align=0;
  void* __temp1253v__=0;
  void* n=0;
  double __temp1254v__value=0;
  unsigned long long __temp1300v=0;
  int __temp1301v=0;
  unsigned long long __temp1306v=0;
  int __temp1307v=0;
  unsigned long long __temp1311v=0;
  int __temp1312v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1211v(&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align);
  __temp1214v__unsafe_ptr=__temp1213v__unsafe_ptr;
  __temp1214v__unsafe_size=__temp1213v__unsafe_size;
  __temp1214v__unsafe_align=__temp1213v__unsafe_align;
  __temp1215v=1;
  __temp_errcode=alloc__temp434v(&__temp1214v__unsafe_ptr,&__temp1214v__unsafe_size,&__temp1214v__unsafe_align,__temp1215v,&__temp1216v__unsafe_ptr,&__temp1216v__unsafe_size,&__temp1216v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1216v__unsafe_ptr;
  f__unsafe_size=__temp1216v__unsafe_size;
  f__unsafe_align=__temp1216v__unsafe_align;
  __temp1218v=0;
  __temp_errcode=mutget__temp478v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1218v,&__temp1219v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1220v=1.0;
  if(!__temp1219v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1219v__,&__temp1220v,8);
  __temp1221v=0;
  __temp_errcode=get__temp482v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1221v,&__temp1222v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1222v__){
  goto __temp_failure;
  }
  memcpy(&__temp1223v__value,(char*)__temp1222v__,8);
  print__temp353v(__temp1223v__value);
  __temp1225v=0;
  __temp_errcode=mutget__temp478v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1225v,&__temp1226v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1226v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1227v__value,(char*)f0,8);
  __temp1228v=2;
  __temp_errcode=resize__temp451v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1228v,&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp471v(&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align,&__temp1230v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1230v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1230v__,&__temp1227v__value,8);
  Field__temp_buffer__buffer__temp1231v(&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align);
  __temp1234v__unsafe_ptr=__temp1233v__unsafe_ptr;
  __temp1234v__unsafe_size=__temp1233v__unsafe_size;
  __temp1234v__unsafe_align=__temp1233v__unsafe_align;
  __temp1235v=1;
  __temp_errcode=alloc__temp434v(&__temp1234v__unsafe_ptr,&__temp1234v__unsafe_size,&__temp1234v__unsafe_align,__temp1235v,&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1236v__unsafe_ptr;
  p__unsafe_size=__temp1236v__unsafe_size;
  p__unsafe_align=__temp1236v__unsafe_align;
  __temp1238v=0;
  __temp_errcode=mutget__temp478v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1238v,&__temp1239v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1240v=1.0;
  __temp1241v=2.0;
  __temp1242v=3.0;
  __temp1243v=4.0;
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1239v__,&__temp1240v,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1239v__+8,&__temp1241v,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1239v__+16,&__temp1242v,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1239v__+24,&__temp1243v,8);
  __temp1244v=0;
  __temp_errcode=get__temp482v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1244v,&__temp1245v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1200v(__temp1245v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1247v=1.0;
  float__temp_buffer__buffer__temp1211v(&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align);
  __temp1249v__unsafe_ptr=__temp1248v__unsafe_ptr;
  __temp1249v__unsafe_size=__temp1248v__unsafe_size;
  __temp1249v__unsafe_align=__temp1248v__unsafe_align;
  __temp1250v=1;
  __temp_errcode=alloc__temp434v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_align,__temp1250v,&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp471v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align,&__temp1253v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1253v__,&__temp1247v,8);
  n=__temp1253v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__value,(char*)n,8);
  print__temp353v(__temp1254v__value);
  
  __temp_failure:__temp1311v=0;
  neq__temp302v(__temp1251v__unsafe_size,__temp1311v,&__temp1312v);
  if(__temp1312v){
  __temp1251v__unsafe_size=0;
  free__temp428v(&__temp1251v__unsafe_ptr);
  }
  __temp1306v=0;
  neq__temp302v(__temp1236v__unsafe_size,__temp1306v,&__temp1307v);
  if(__temp1307v){
  __temp1236v__unsafe_size=0;
  free__temp428v(&__temp1236v__unsafe_ptr);
  }
  __temp1300v=0;
  neq__temp302v(__temp1216v__unsafe_size,__temp1300v,&__temp1301v);
  if(__temp1301v){
  __temp1216v__unsafe_size=0;
  free__temp428v(&__temp1216v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1210v();return 0;}