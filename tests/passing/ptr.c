#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1204v=",";
const char* const __temp348v="\n";
static const char* __temp_all_errcodes[0] = {
};

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1213v(void** __temp1258v, unsigned long long* __temp1259v, unsigned long long* __temp1260v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1258v=unsafe_ptr;
  *__temp1259v=unsafe_size;
  *__temp1260v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1261v) {
  int value=0;
  *__temp1261v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1262v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1262v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1263v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1263v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1264v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1265v) {
  void* allocated=*__temp1265v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1265v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1266v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1267v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1268v) {
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
  *__temp1268v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v, unsigned long long size, void** __temp1272v, unsigned long long* __temp1273v, unsigned long long* __temp1274v) {
  void* buffer__unsafe_ptr=*__temp1269v;
  unsigned long long buffer__unsafe_size=*__temp1270v;
  unsigned long long buffer__unsafe_align=*__temp1271v;
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
  *__temp1269v=buffer__unsafe_ptr;
  *__temp1270v=buffer__unsafe_size;
  *__temp1271v=buffer__unsafe_align;
  *__temp1272v=buffer__unsafe_ptr;
  *__temp1273v=buffer__unsafe_size;
  *__temp1274v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1275v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1275v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1276v) {
  *__temp1276v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1277v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1277v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1278v, unsigned long long* __temp1279v, unsigned long long* __temp1280v, unsigned long long i, void** __temp1281v) {
  void* buffer__unsafe_ptr=*__temp1278v;
  unsigned long long buffer__unsafe_size=*__temp1279v;
  unsigned long long buffer__unsafe_align=*__temp1280v;
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
  *__temp1278v=buffer__unsafe_ptr;
  *__temp1279v=buffer__unsafe_size;
  *__temp1280v=buffer__unsafe_align;
  *__temp1281v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1282v) {
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
  *__temp1282v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1283v) {
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
  *__temp1283v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1284v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1285v, unsigned long long* __temp1286v, unsigned long long* __temp1287v, unsigned long long size, void** __temp1288v, unsigned long long* __temp1289v, unsigned long long* __temp1290v) {
  void* buffer__unsafe_ptr=*__temp1285v;
  unsigned long long buffer__unsafe_size=*__temp1286v;
  unsigned long long buffer__unsafe_align=*__temp1287v;
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
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_align;
  *__temp1288v=buffer__unsafe_ptr;
  *__temp1289v=buffer__unsafe_size;
  *__temp1290v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1291v) {
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
  *__temp1291v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp472v(void** __temp1292v, unsigned long long* __temp1293v, unsigned long long* __temp1294v, void** __temp1295v) {
  void* buffer__unsafe_ptr=*__temp1292v;
  unsigned long long buffer__unsafe_size=*__temp1293v;
  unsigned long long buffer__unsafe_align=*__temp1294v;
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
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_align;
  *__temp1295v=__temp478v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1233v(void** __temp1296v, unsigned long long* __temp1297v, unsigned long long* __temp1298v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1296v=unsafe_ptr;
  *__temp1297v=unsafe_size;
  *__temp1298v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp353v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1202v(void* f) {
  double __temp1203v__a__x=0;
  double __temp1203v__a__y=0;
  double __temp1203v__b__x=0;
  double __temp1203v__b__y=0;
  double __temp1206v__a__x=0;
  double __temp1206v__a__y=0;
  double __temp1206v__b__x=0;
  double __temp1206v__b__y=0;
  double __temp1208v__a__x=0;
  double __temp1208v__a__y=0;
  double __temp1208v__b__x=0;
  double __temp1208v__b__y=0;
  double __temp1210v__a__x=0;
  double __temp1210v__a__y=0;
  double __temp1210v__b__x=0;
  double __temp1210v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__b__y,(char*)f+24,8);
  print__temp353v(__temp1203v__a__x,__temp1204v);
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
  print__temp353v(__temp1206v__a__y,__temp1204v);
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
  print__temp353v(__temp1208v__b__x,__temp1204v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1210v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1210v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1210v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1210v__b__y,(char*)f+24,8);
  print__temp351v(__temp1210v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1212v() {
  void* __temp1215v__unsafe_ptr=0;
  unsigned long long __temp1215v__unsafe_size=0;
  unsigned long long __temp1215v__unsafe_align=0;
  void* __temp1216v__unsafe_ptr=0;
  unsigned long long __temp1216v__unsafe_size=0;
  unsigned long long __temp1216v__unsafe_align=0;
  unsigned long long __temp1217v=0;
  void* __temp1218v__unsafe_ptr=0;
  unsigned long long __temp1218v__unsafe_size=0;
  unsigned long long __temp1218v__unsafe_align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1220v=0;
  void* __temp1221v__=0;
  double __temp1222v=0;
  unsigned long long __temp1223v=0;
  void* __temp1224v__=0;
  double __temp1225v__value=0;
  unsigned long long __temp1227v=0;
  void* __temp1228v__=0;
  void* f0=0;
  double __temp1229v__value=0;
  unsigned long long __temp1230v=0;
  void* __temp1231v__unsafe_ptr=0;
  unsigned long long __temp1231v__unsafe_size=0;
  unsigned long long __temp1231v__unsafe_align=0;
  void* __temp1232v__=0;
  void* __temp1235v__unsafe_ptr=0;
  unsigned long long __temp1235v__unsafe_size=0;
  unsigned long long __temp1235v__unsafe_align=0;
  void* __temp1236v__unsafe_ptr=0;
  unsigned long long __temp1236v__unsafe_size=0;
  unsigned long long __temp1236v__unsafe_align=0;
  unsigned long long __temp1237v=0;
  void* __temp1238v__unsafe_ptr=0;
  unsigned long long __temp1238v__unsafe_size=0;
  unsigned long long __temp1238v__unsafe_align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1240v=0;
  void* __temp1241v__=0;
  double __temp1242v=0;
  double __temp1243v=0;
  double __temp1244v=0;
  double __temp1245v=0;
  unsigned long long __temp1246v=0;
  void* __temp1247v__=0;
  double __temp1249v=0;
  void* __temp1250v__unsafe_ptr=0;
  unsigned long long __temp1250v__unsafe_size=0;
  unsigned long long __temp1250v__unsafe_align=0;
  void* __temp1251v__unsafe_ptr=0;
  unsigned long long __temp1251v__unsafe_size=0;
  unsigned long long __temp1251v__unsafe_align=0;
  unsigned long long __temp1252v=0;
  void* __temp1253v__unsafe_ptr=0;
  unsigned long long __temp1253v__unsafe_size=0;
  unsigned long long __temp1253v__unsafe_align=0;
  void* __temp1255v__=0;
  void* n=0;
  double __temp1256v__value=0;
  unsigned long long __temp1302v=0;
  int __temp1303v=0;
  unsigned long long __temp1308v=0;
  int __temp1309v=0;
  unsigned long long __temp1313v=0;
  int __temp1314v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1213v(&__temp1215v__unsafe_ptr,&__temp1215v__unsafe_size,&__temp1215v__unsafe_align);
  __temp1216v__unsafe_ptr=__temp1215v__unsafe_ptr;
  __temp1216v__unsafe_size=__temp1215v__unsafe_size;
  __temp1216v__unsafe_align=__temp1215v__unsafe_align;
  __temp1217v=1;
  __temp_errcode=alloc__temp435v(&__temp1216v__unsafe_ptr,&__temp1216v__unsafe_size,&__temp1216v__unsafe_align,__temp1217v,&__temp1218v__unsafe_ptr,&__temp1218v__unsafe_size,&__temp1218v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1218v__unsafe_ptr;
  f__unsafe_size=__temp1218v__unsafe_size;
  f__unsafe_align=__temp1218v__unsafe_align;
  __temp1220v=0;
  __temp_errcode=mutget__temp479v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1220v,&__temp1221v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1222v=1.0;
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1221v__,&__temp1222v,8);
  __temp1223v=0;
  __temp_errcode=get__temp483v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1223v,&__temp1224v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1224v__){
  goto __temp_failure;
  }
  memcpy(&__temp1225v__value,(char*)__temp1224v__,8);
  print__temp351v(__temp1225v__value);
  __temp1227v=0;
  __temp_errcode=mutget__temp479v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1227v,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1228v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1229v__value,(char*)f0,8);
  __temp1230v=2;
  __temp_errcode=resize__temp452v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1230v,&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align,&__temp1232v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1232v__,&__temp1229v__value,8);
  Field__temp_buffer__buffer__temp1233v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align);
  __temp1236v__unsafe_ptr=__temp1235v__unsafe_ptr;
  __temp1236v__unsafe_size=__temp1235v__unsafe_size;
  __temp1236v__unsafe_align=__temp1235v__unsafe_align;
  __temp1237v=1;
  __temp_errcode=alloc__temp435v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align,__temp1237v,&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1238v__unsafe_ptr;
  p__unsafe_size=__temp1238v__unsafe_size;
  p__unsafe_align=__temp1238v__unsafe_align;
  __temp1240v=0;
  __temp_errcode=mutget__temp479v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1240v,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1242v=1.0;
  __temp1243v=2.0;
  __temp1244v=3.0;
  __temp1245v=4.0;
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1241v__,&__temp1242v,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1241v__+8,&__temp1243v,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1241v__+16,&__temp1244v,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1241v__+24,&__temp1245v,8);
  __temp1246v=0;
  __temp_errcode=get__temp483v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1246v,&__temp1247v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1202v(__temp1247v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1249v=1.0;
  float__temp_buffer__buffer__temp1213v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  __temp1252v=1;
  __temp_errcode=alloc__temp435v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align,__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_align,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1255v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1255v__,&__temp1249v,8);
  n=__temp1255v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1256v__value,(char*)n,8);
  print__temp351v(__temp1256v__value);
  
  __temp_failure:__temp1313v=0;
  neq__temp302v(__temp1253v__unsafe_size,__temp1313v,&__temp1314v);
  if(__temp1314v){
  __temp1253v__unsafe_size=0;
  free__temp429v(&__temp1253v__unsafe_ptr);
  }
  __temp1308v=0;
  neq__temp302v(__temp1238v__unsafe_size,__temp1308v,&__temp1309v);
  if(__temp1309v){
  __temp1238v__unsafe_size=0;
  free__temp429v(&__temp1238v__unsafe_ptr);
  }
  __temp1302v=0;
  neq__temp302v(__temp1218v__unsafe_size,__temp1302v,&__temp1303v);
  if(__temp1303v){
  __temp1218v__unsafe_size=0;
  free__temp429v(&__temp1218v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1212v();return 0;}