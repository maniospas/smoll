#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1203v=",";
const char* const __temp348v="\n";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1212v(void** __temp1257v, unsigned long long* __temp1258v, unsigned long long* __temp1259v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1257v=unsafe_ptr;
  *__temp1258v=unsafe_size;
  *__temp1259v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1260v) {
  int value=0;
  *__temp1260v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1261v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1261v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1262v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1262v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1263v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1264v) {
  void* allocated=*__temp1264v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1264v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1265v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1266v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1267v) {
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
  *__temp1267v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v, unsigned long long size, void** __temp1271v, unsigned long long* __temp1272v, unsigned long long* __temp1273v) {
  void* buffer__unsafe_ptr=*__temp1268v;
  unsigned long long buffer__unsafe_size=*__temp1269v;
  unsigned long long buffer__unsafe_align=*__temp1270v;
  unsigned long long __temp436v=0;
  int __temp437v__=0;
  int __temp440v__=0;
  unsigned long long __temp441v=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  int __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  void* __temp449v__=0;
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
  zero__temp430v(buffer__unsafe_ptr,__temp443v,__temp444v__);
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
  __temp_errcode=alloc__temp426v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp430v(buffer__unsafe_ptr,__temp450v,bytes);
  __temp_return:
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  *__temp1271v=buffer__unsafe_ptr;
  *__temp1272v=buffer__unsafe_size;
  *__temp1273v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1274v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1275v) {
  *__temp1275v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1276v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1276v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, unsigned long long i, void** __temp1280v) {
  void* buffer__unsafe_ptr=*__temp1277v;
  unsigned long long buffer__unsafe_size=*__temp1278v;
  unsigned long long buffer__unsafe_align=*__temp1279v;
  int __temp480v__=0;
  unsigned long long __temp481v__=0;
  void* __temp482v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp480v__);
  if(__temp480v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp481v__);
  add__temp431v(buffer__unsafe_ptr,__temp481v__,&__temp482v__);
  *__temp1277v=buffer__unsafe_ptr;
  *__temp1278v=buffer__unsafe_size;
  *__temp1279v=buffer__unsafe_align;
  *__temp1280v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1281v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1281v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1282v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp428v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp428v__);
  *__temp1282v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1283v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1284v, unsigned long long* __temp1285v, unsigned long long* __temp1286v, unsigned long long size, void** __temp1287v, unsigned long long* __temp1288v, unsigned long long* __temp1289v) {
  void* buffer__unsafe_ptr=*__temp1284v;
  unsigned long long buffer__unsafe_size=*__temp1285v;
  unsigned long long buffer__unsafe_align=*__temp1286v;
  int __temp453v__=0;
  unsigned long long __temp454v=0;
  int __temp455v__=0;
  unsigned long long __temp456v=0;
  unsigned long long __temp458v=0;
  int __temp459v__=0;
  unsigned long long __temp460v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp461v__=0;
  unsigned long long bytes=0;
  void* __temp462v__=0;
  int __temp463v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp453v__);
  if(__temp453v__){
  goto __temp_return;
  }
  __temp454v=0;
  eq__temp278v(size,__temp454v,&__temp455v__);
  if(__temp455v__){
  __temp456v=0;
  buffer__unsafe_size=__temp456v;
  free__temp429v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp458v=0;
  eq__temp278v(buffer__unsafe_size,__temp458v,&__temp459v__);
  if(__temp459v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp460v__);
  prev_bytes=__temp460v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp461v__);
  bytes=__temp461v__;
  __temp_errcode=realloc__temp427v(buffer__unsafe_ptr,bytes,&__temp462v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp462v__;
  lt__temp182v(prev_bytes,bytes,&__temp463v__);
  if(__temp463v__){
  zero__temp430v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1284v=buffer__unsafe_ptr;
  *__temp1285v=buffer__unsafe_size;
  *__temp1286v=buffer__unsafe_align;
  *__temp1287v=buffer__unsafe_ptr;
  *__temp1288v=buffer__unsafe_size;
  *__temp1289v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1290v) {
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
  *__temp1290v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp472v(void** __temp1291v, unsigned long long* __temp1292v, unsigned long long* __temp1293v, void** __temp1294v) {
  void* buffer__unsafe_ptr=*__temp1291v;
  unsigned long long buffer__unsafe_size=*__temp1292v;
  unsigned long long buffer__unsafe_align=*__temp1293v;
  unsigned long long __temp473v=0;
  int __temp474v__=0;
  unsigned long long __temp475v=0;
  unsigned long long __temp476v__=0;
  unsigned long long __temp477v__=0;
  void* __temp478v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp473v=0;
  eq__temp278v(__temp473v,buffer__unsafe_size,&__temp474v__);
  if(__temp474v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp475v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp476v__,buffer__unsafe_align,&__temp477v__);
  add__temp431v(buffer__unsafe_ptr,__temp477v__,&__temp478v__);
  *__temp1291v=buffer__unsafe_ptr;
  *__temp1292v=buffer__unsafe_size;
  *__temp1293v=buffer__unsafe_align;
  *__temp1294v=__temp478v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1232v(void** __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1295v=unsafe_ptr;
  *__temp1296v=unsafe_size;
  *__temp1297v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp353v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1201v(void* f) {
  double __temp1202v__a__x=0;
  double __temp1202v__a__y=0;
  double __temp1202v__b__x=0;
  double __temp1202v__b__y=0;
  double __temp1205v__a__x=0;
  double __temp1205v__a__y=0;
  double __temp1205v__b__x=0;
  double __temp1205v__b__y=0;
  double __temp1207v__a__x=0;
  double __temp1207v__a__y=0;
  double __temp1207v__b__x=0;
  double __temp1207v__b__y=0;
  double __temp1209v__a__x=0;
  double __temp1209v__a__y=0;
  double __temp1209v__b__x=0;
  double __temp1209v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__b__y,(char*)f+24,8);
  print__temp353v(__temp1202v__a__x,__temp1203v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1205v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1205v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1205v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1205v__b__y,(char*)f+24,8);
  print__temp353v(__temp1205v__a__y,__temp1203v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1207v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1207v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1207v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1207v__b__y,(char*)f+24,8);
  print__temp353v(__temp1207v__b__x,__temp1203v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1209v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1209v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1209v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1209v__b__y,(char*)f+24,8);
  print__temp351v(__temp1209v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1211v() {
  void* __temp1214v__unsafe_ptr=0;
  unsigned long long __temp1214v__unsafe_size=0;
  unsigned long long __temp1214v__unsafe_align=0;
  void* __temp1215v__unsafe_ptr=0;
  unsigned long long __temp1215v__unsafe_size=0;
  unsigned long long __temp1215v__unsafe_align=0;
  unsigned long long __temp1216v=0;
  void* __temp1217v__unsafe_ptr=0;
  unsigned long long __temp1217v__unsafe_size=0;
  unsigned long long __temp1217v__unsafe_align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1219v=0;
  void* __temp1220v__=0;
  double __temp1221v=0;
  unsigned long long __temp1222v=0;
  void* __temp1223v__=0;
  double __temp1224v__value=0;
  unsigned long long __temp1226v=0;
  void* __temp1227v__=0;
  void* f0=0;
  double __temp1228v__value=0;
  unsigned long long __temp1229v=0;
  void* __temp1230v__unsafe_ptr=0;
  unsigned long long __temp1230v__unsafe_size=0;
  unsigned long long __temp1230v__unsafe_align=0;
  void* __temp1231v__=0;
  void* __temp1234v__unsafe_ptr=0;
  unsigned long long __temp1234v__unsafe_size=0;
  unsigned long long __temp1234v__unsafe_align=0;
  void* __temp1235v__unsafe_ptr=0;
  unsigned long long __temp1235v__unsafe_size=0;
  unsigned long long __temp1235v__unsafe_align=0;
  unsigned long long __temp1236v=0;
  void* __temp1237v__unsafe_ptr=0;
  unsigned long long __temp1237v__unsafe_size=0;
  unsigned long long __temp1237v__unsafe_align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1239v=0;
  void* __temp1240v__=0;
  double __temp1241v=0;
  double __temp1242v=0;
  double __temp1243v=0;
  double __temp1244v=0;
  unsigned long long __temp1245v=0;
  void* __temp1246v__=0;
  double __temp1248v=0;
  void* __temp1249v__unsafe_ptr=0;
  unsigned long long __temp1249v__unsafe_size=0;
  unsigned long long __temp1249v__unsafe_align=0;
  void* __temp1250v__unsafe_ptr=0;
  unsigned long long __temp1250v__unsafe_size=0;
  unsigned long long __temp1250v__unsafe_align=0;
  unsigned long long __temp1251v=0;
  void* __temp1252v__unsafe_ptr=0;
  unsigned long long __temp1252v__unsafe_size=0;
  unsigned long long __temp1252v__unsafe_align=0;
  void* __temp1254v__=0;
  void* n=0;
  double __temp1255v__value=0;
  unsigned long long __temp1301v=0;
  int __temp1302v=0;
  unsigned long long __temp1307v=0;
  int __temp1308v=0;
  unsigned long long __temp1312v=0;
  int __temp1313v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1212v(&__temp1214v__unsafe_ptr,&__temp1214v__unsafe_size,&__temp1214v__unsafe_align);
  __temp1215v__unsafe_ptr=__temp1214v__unsafe_ptr;
  __temp1215v__unsafe_size=__temp1214v__unsafe_size;
  __temp1215v__unsafe_align=__temp1214v__unsafe_align;
  __temp1216v=1;
  __temp_errcode=alloc__temp435v(&__temp1215v__unsafe_ptr,&__temp1215v__unsafe_size,&__temp1215v__unsafe_align,__temp1216v,&__temp1217v__unsafe_ptr,&__temp1217v__unsafe_size,&__temp1217v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1217v__unsafe_ptr;
  f__unsafe_size=__temp1217v__unsafe_size;
  f__unsafe_align=__temp1217v__unsafe_align;
  __temp1219v=0;
  __temp_errcode=mutget__temp479v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1219v,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1221v=1.0;
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1220v__,&__temp1221v,8);
  __temp1222v=0;
  __temp_errcode=get__temp483v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1222v,&__temp1223v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1223v__){
  goto __temp_failure;
  }
  memcpy(&__temp1224v__value,(char*)__temp1223v__,8);
  print__temp351v(__temp1224v__value);
  __temp1226v=0;
  __temp_errcode=mutget__temp479v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1226v,&__temp1227v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1227v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__value,(char*)f0,8);
  __temp1229v=2;
  __temp_errcode=resize__temp452v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1229v,&__temp1230v__unsafe_ptr,&__temp1230v__unsafe_size,&__temp1230v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1230v__unsafe_ptr,&__temp1230v__unsafe_size,&__temp1230v__unsafe_align,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1231v__,&__temp1228v__value,8);
  Field__temp_buffer__buffer__temp1232v(&__temp1234v__unsafe_ptr,&__temp1234v__unsafe_size,&__temp1234v__unsafe_align);
  __temp1235v__unsafe_ptr=__temp1234v__unsafe_ptr;
  __temp1235v__unsafe_size=__temp1234v__unsafe_size;
  __temp1235v__unsafe_align=__temp1234v__unsafe_align;
  __temp1236v=1;
  __temp_errcode=alloc__temp435v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align,__temp1236v,&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1237v__unsafe_ptr;
  p__unsafe_size=__temp1237v__unsafe_size;
  p__unsafe_align=__temp1237v__unsafe_align;
  __temp1239v=0;
  __temp_errcode=mutget__temp479v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1241v=1.0;
  __temp1242v=2.0;
  __temp1243v=3.0;
  __temp1244v=4.0;
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__,&__temp1241v,8);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__+8,&__temp1242v,8);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__+16,&__temp1243v,8);
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1240v__+24,&__temp1244v,8);
  __temp1245v=0;
  __temp_errcode=get__temp483v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1245v,&__temp1246v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1201v(__temp1246v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1248v=1.0;
  float__temp_buffer__buffer__temp1212v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_align);
  __temp1250v__unsafe_ptr=__temp1249v__unsafe_ptr;
  __temp1250v__unsafe_size=__temp1249v__unsafe_size;
  __temp1250v__unsafe_align=__temp1249v__unsafe_align;
  __temp1251v=1;
  __temp_errcode=alloc__temp435v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align,__temp1251v,&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_align,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1254v__,&__temp1248v,8);
  n=__temp1254v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__value,(char*)n,8);
  print__temp351v(__temp1255v__value);
  
  __temp_failure:__temp1312v=0;
  neq__temp302v(__temp1252v__unsafe_size,__temp1312v,&__temp1313v);
  if(__temp1313v){
  __temp1252v__unsafe_size=0;
  free__temp429v(&__temp1252v__unsafe_ptr);
  }
  __temp1307v=0;
  neq__temp302v(__temp1237v__unsafe_size,__temp1307v,&__temp1308v);
  if(__temp1308v){
  __temp1237v__unsafe_size=0;
  free__temp429v(&__temp1237v__unsafe_ptr);
  }
  __temp1301v=0;
  neq__temp302v(__temp1217v__unsafe_size,__temp1301v,&__temp1302v);
  if(__temp1302v){
  __temp1217v__unsafe_size=0;
  free__temp429v(&__temp1217v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1211v();return 0;}