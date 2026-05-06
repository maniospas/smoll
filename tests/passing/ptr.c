#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";
const char* const __temp1125v=",";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1134v(void** __temp1179v, unsigned long long* __temp1180v, unsigned long long* __temp1181v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1179v=unsafe_ptr;
  *__temp1180v=unsafe_size;
  *__temp1181v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1182v) {
  int value=0;
  *__temp1182v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1183v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1183v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1184v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1184v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1185v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1185v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1186v) {
  void* allocated=*__temp1186v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1186v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1187v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1187v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1188v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1188v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1189v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1189v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1190v, unsigned long long* __temp1191v, unsigned long long* __temp1192v, unsigned long long size, void** __temp1193v, unsigned long long* __temp1194v, unsigned long long* __temp1195v) {
  void* buffer__unsafe_ptr=*__temp1190v;
  unsigned long long buffer__unsafe_size=*__temp1191v;
  unsigned long long buffer__unsafe_align=*__temp1192v;
  unsigned long long __temp433v=0;
  int __temp434v__=0;
  int __temp437v__=0;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  unsigned long long __temp440v=0;
  unsigned long long __temp441v__=0;
  unsigned long long __temp443v=0;
  int __temp444v__=0;
  unsigned long long __temp445v__=0;
  unsigned long long bytes=0;
  void* __temp446v__=0;
  unsigned long long __temp447v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp437v__);
  if(__temp437v__){
  __temp438v=0;
  neq__temp301v(size,__temp438v,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp441v__);
  zero__temp427v(buffer__unsafe_ptr,__temp440v,__temp441v__);
  }
  goto __temp_return;
  }
  __temp443v=0;
  neq__temp301v(buffer__unsafe_size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp445v__);
  bytes=__temp445v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp423v(bytes,&__temp446v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp446v__;
  __temp447v=0;
  zero__temp427v(buffer__unsafe_ptr,__temp447v,bytes);
  __temp_return:
  *__temp1190v=buffer__unsafe_ptr;
  *__temp1191v=buffer__unsafe_size;
  *__temp1192v=buffer__unsafe_align;
  *__temp1193v=buffer__unsafe_ptr;
  *__temp1194v=buffer__unsafe_size;
  *__temp1195v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1196v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1196v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1197v) {
  *__temp1197v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1198v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1198v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp476v(void** __temp1199v, unsigned long long* __temp1200v, unsigned long long* __temp1201v, unsigned long long i, void** __temp1202v) {
  void* buffer__unsafe_ptr=*__temp1199v;
  unsigned long long buffer__unsafe_size=*__temp1200v;
  unsigned long long buffer__unsafe_align=*__temp1201v;
  int __temp477v__=0;
  unsigned long long __temp478v__=0;
  void* __temp479v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp477v__);
  if(__temp477v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp478v__);
  add__temp428v(buffer__unsafe_ptr,__temp478v__,&__temp479v__);
  *__temp1199v=buffer__unsafe_ptr;
  *__temp1200v=buffer__unsafe_size;
  *__temp1201v=buffer__unsafe_align;
  *__temp1202v=__temp479v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1203v) {
  int __temp481v__=0;
  unsigned long long __temp482v__=0;
  void* __temp483v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp482v__);
  add__temp428v(buffer__unsafe_ptr,__temp482v__,&__temp483v__);
  *__temp1203v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1204v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp425v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp12v(new_allocated,allocated__unsafe_ptr,&__temp425v__);
  *__temp1204v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1205v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1205v=z;
}

static inline __attribute__((always_inline)) int resize__temp449v(void** __temp1206v, unsigned long long* __temp1207v, unsigned long long* __temp1208v, unsigned long long size, void** __temp1209v, unsigned long long* __temp1210v, unsigned long long* __temp1211v) {
  void* buffer__unsafe_ptr=*__temp1206v;
  unsigned long long buffer__unsafe_size=*__temp1207v;
  unsigned long long buffer__unsafe_align=*__temp1208v;
  int __temp450v__=0;
  unsigned long long __temp451v=0;
  int __temp452v__=0;
  unsigned long long __temp453v=0;
  unsigned long long __temp455v=0;
  int __temp456v__=0;
  unsigned long long __temp457v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp458v__=0;
  unsigned long long bytes=0;
  void* __temp459v__=0;
  int __temp460v__=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp450v__);
  if(__temp450v__){
  goto __temp_return;
  }
  __temp451v=0;
  eq__temp277v(size,__temp451v,&__temp452v__);
  if(__temp452v__){
  __temp453v=0;
  buffer__unsafe_size=__temp453v;
  free__temp426v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp455v=0;
  eq__temp277v(buffer__unsafe_size,__temp455v,&__temp456v__);
  if(__temp456v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_size,buffer__unsafe_align,&__temp457v__);
  prev_bytes=__temp457v__;
  buffer__unsafe_size=size;
  mul__temp133v(buffer__unsafe_align,size,&__temp458v__);
  bytes=__temp458v__;
  __temp_errcode=realloc__temp424v(buffer__unsafe_ptr,bytes,&__temp459v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp459v__;
  lt__temp181v(prev_bytes,bytes,&__temp460v__);
  if(__temp460v__){
  zero__temp427v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1206v=buffer__unsafe_ptr;
  *__temp1207v=buffer__unsafe_size;
  *__temp1208v=buffer__unsafe_align;
  *__temp1209v=buffer__unsafe_ptr;
  *__temp1210v=buffer__unsafe_size;
  *__temp1211v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1212v) {
  int __temp330v__=0;
  int __temp333v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp84v(x,y,&__temp330v__);
  lt__temp181v(x,y,&__temp333v__);
  if(__temp333v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1212v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp469v(void** __temp1213v, unsigned long long* __temp1214v, unsigned long long* __temp1215v, void** __temp1216v) {
  void* buffer__unsafe_ptr=*__temp1213v;
  unsigned long long buffer__unsafe_size=*__temp1214v;
  unsigned long long buffer__unsafe_align=*__temp1215v;
  unsigned long long __temp470v=0;
  int __temp471v__=0;
  unsigned long long __temp472v=0;
  unsigned long long __temp473v__=0;
  unsigned long long __temp474v__=0;
  void* __temp475v__=0;
  int __temp_errcode=0;
  __temp470v=0;
  eq__temp277v(__temp470v,buffer__unsafe_size,&__temp471v__);
  if(__temp471v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  __temp472v=1;
  __temp_errcode=sub__temp329v(buffer__unsafe_size,__temp472v,&__temp473v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp133v(__temp473v__,buffer__unsafe_align,&__temp474v__);
  add__temp428v(buffer__unsafe_ptr,__temp474v__,&__temp475v__);
  *__temp1213v=buffer__unsafe_ptr;
  *__temp1214v=buffer__unsafe_size;
  *__temp1215v=buffer__unsafe_align;
  *__temp1216v=__temp475v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1154v(void** __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1217v=unsafe_ptr;
  *__temp1218v=unsafe_size;
  *__temp1219v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp350v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1123v(void* f) {
  double __temp1124v__a__x=0;
  double __temp1124v__a__y=0;
  double __temp1124v__b__x=0;
  double __temp1124v__b__y=0;
  double __temp1127v__a__x=0;
  double __temp1127v__a__y=0;
  double __temp1127v__b__x=0;
  double __temp1127v__b__y=0;
  double __temp1129v__a__x=0;
  double __temp1129v__a__y=0;
  double __temp1129v__b__x=0;
  double __temp1129v__b__y=0;
  double __temp1131v__a__x=0;
  double __temp1131v__a__y=0;
  double __temp1131v__b__x=0;
  double __temp1131v__b__y=0;
  int __temp_errcode=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1124v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1124v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1124v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1124v__b__y,(char*)f+24,8);
  print__temp350v(__temp1124v__a__x,__temp1125v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1127v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1127v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1127v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1127v__b__y,(char*)f+24,8);
  print__temp350v(__temp1127v__a__y,__temp1125v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1129v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1129v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1129v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1129v__b__y,(char*)f+24,8);
  print__temp350v(__temp1129v__b__x,__temp1125v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__b__y,(char*)f+24,8);
  print__temp348v(__temp1131v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1133v() {
  void* __temp1136v__unsafe_ptr=0;
  unsigned long long __temp1136v__unsafe_size=0;
  unsigned long long __temp1136v__unsafe_align=0;
  void* __temp1137v__unsafe_ptr=0;
  unsigned long long __temp1137v__unsafe_size=0;
  unsigned long long __temp1137v__unsafe_align=0;
  unsigned long long __temp1138v=0;
  void* __temp1139v__unsafe_ptr=0;
  unsigned long long __temp1139v__unsafe_size=0;
  unsigned long long __temp1139v__unsafe_align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1141v=0;
  void* __temp1142v__=0;
  double __temp1143v=0;
  unsigned long long __temp1144v=0;
  void* __temp1145v__=0;
  double __temp1146v__number=0;
  unsigned long long __temp1148v=0;
  void* __temp1149v__=0;
  void* f0=0;
  double __temp1150v__number=0;
  unsigned long long __temp1151v=0;
  void* __temp1152v__unsafe_ptr=0;
  unsigned long long __temp1152v__unsafe_size=0;
  unsigned long long __temp1152v__unsafe_align=0;
  void* __temp1153v__=0;
  void* __temp1156v__unsafe_ptr=0;
  unsigned long long __temp1156v__unsafe_size=0;
  unsigned long long __temp1156v__unsafe_align=0;
  void* __temp1157v__unsafe_ptr=0;
  unsigned long long __temp1157v__unsafe_size=0;
  unsigned long long __temp1157v__unsafe_align=0;
  unsigned long long __temp1158v=0;
  void* __temp1159v__unsafe_ptr=0;
  unsigned long long __temp1159v__unsafe_size=0;
  unsigned long long __temp1159v__unsafe_align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1161v=0;
  void* __temp1162v__=0;
  double __temp1163v=0;
  double __temp1164v=0;
  double __temp1165v=0;
  double __temp1166v=0;
  unsigned long long __temp1167v=0;
  void* __temp1168v__=0;
  double __temp1170v=0;
  void* __temp1171v__unsafe_ptr=0;
  unsigned long long __temp1171v__unsafe_size=0;
  unsigned long long __temp1171v__unsafe_align=0;
  void* __temp1172v__unsafe_ptr=0;
  unsigned long long __temp1172v__unsafe_size=0;
  unsigned long long __temp1172v__unsafe_align=0;
  unsigned long long __temp1173v=0;
  void* __temp1174v__unsafe_ptr=0;
  unsigned long long __temp1174v__unsafe_size=0;
  unsigned long long __temp1174v__unsafe_align=0;
  void* __temp1176v__=0;
  void* n=0;
  double __temp1177v__number=0;
  unsigned long long __temp1223v=0;
  int __temp1224v=0;
  unsigned long long __temp1229v=0;
  int __temp1230v=0;
  unsigned long long __temp1234v=0;
  int __temp1235v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1134v(&__temp1136v__unsafe_ptr,&__temp1136v__unsafe_size,&__temp1136v__unsafe_align);
  __temp1137v__unsafe_ptr=__temp1136v__unsafe_ptr;
  __temp1137v__unsafe_size=__temp1136v__unsafe_size;
  __temp1137v__unsafe_align=__temp1136v__unsafe_align;
  __temp1138v=1;
  __temp_errcode=alloc__temp432v(&__temp1137v__unsafe_ptr,&__temp1137v__unsafe_size,&__temp1137v__unsafe_align,__temp1138v,&__temp1139v__unsafe_ptr,&__temp1139v__unsafe_size,&__temp1139v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1139v__unsafe_ptr;
  f__unsafe_size=__temp1139v__unsafe_size;
  f__unsafe_align=__temp1139v__unsafe_align;
  __temp1141v=0;
  __temp_errcode=mutget__temp476v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1141v,&__temp1142v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1143v=1.0;
  if(!__temp1142v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1142v__,&__temp1143v,8);
  __temp1144v=0;
  __temp_errcode=get__temp480v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1144v,&__temp1145v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1145v__){
  goto __temp_failure;
  }
  memcpy(&__temp1146v__number,(char*)__temp1145v__,8);
  print__temp348v(__temp1146v__number);
  __temp1148v=0;
  __temp_errcode=mutget__temp476v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1148v,&__temp1149v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1149v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1150v__number,(char*)f0,8);
  __temp1151v=2;
  __temp_errcode=resize__temp449v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1151v,&__temp1152v__unsafe_ptr,&__temp1152v__unsafe_size,&__temp1152v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp469v(&__temp1152v__unsafe_ptr,&__temp1152v__unsafe_size,&__temp1152v__unsafe_align,&__temp1153v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1153v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1153v__,&__temp1150v__number,8);
  Field__temp_buffer__buffer__temp1154v(&__temp1156v__unsafe_ptr,&__temp1156v__unsafe_size,&__temp1156v__unsafe_align);
  __temp1157v__unsafe_ptr=__temp1156v__unsafe_ptr;
  __temp1157v__unsafe_size=__temp1156v__unsafe_size;
  __temp1157v__unsafe_align=__temp1156v__unsafe_align;
  __temp1158v=1;
  __temp_errcode=alloc__temp432v(&__temp1157v__unsafe_ptr,&__temp1157v__unsafe_size,&__temp1157v__unsafe_align,__temp1158v,&__temp1159v__unsafe_ptr,&__temp1159v__unsafe_size,&__temp1159v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1159v__unsafe_ptr;
  p__unsafe_size=__temp1159v__unsafe_size;
  p__unsafe_align=__temp1159v__unsafe_align;
  __temp1161v=0;
  __temp_errcode=mutget__temp476v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1161v,&__temp1162v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1163v=1.0;
  __temp1164v=2.0;
  __temp1165v=3.0;
  __temp1166v=4.0;
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__,&__temp1163v,8);
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__+8,&__temp1164v,8);
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__+16,&__temp1165v,8);
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__+24,&__temp1166v,8);
  __temp1167v=0;
  __temp_errcode=get__temp480v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1167v,&__temp1168v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1123v(__temp1168v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1170v=1.0;
  float__temp_buffer__buffer__temp1134v(&__temp1171v__unsafe_ptr,&__temp1171v__unsafe_size,&__temp1171v__unsafe_align);
  __temp1172v__unsafe_ptr=__temp1171v__unsafe_ptr;
  __temp1172v__unsafe_size=__temp1171v__unsafe_size;
  __temp1172v__unsafe_align=__temp1171v__unsafe_align;
  __temp1173v=1;
  __temp_errcode=alloc__temp432v(&__temp1172v__unsafe_ptr,&__temp1172v__unsafe_size,&__temp1172v__unsafe_align,__temp1173v,&__temp1174v__unsafe_ptr,&__temp1174v__unsafe_size,&__temp1174v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp469v(&__temp1174v__unsafe_ptr,&__temp1174v__unsafe_size,&__temp1174v__unsafe_align,&__temp1176v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1176v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1176v__,&__temp1170v,8);
  n=__temp1176v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1177v__number,(char*)n,8);
  print__temp348v(__temp1177v__number);
  
  __temp_failure:__temp1234v=0;
  neq__temp301v(__temp1174v__unsafe_size,__temp1234v,&__temp1235v);
  if(__temp1235v){
  __temp1174v__unsafe_size=0;
  free__temp426v(&__temp1174v__unsafe_ptr);
  }
  __temp1229v=0;
  neq__temp301v(__temp1159v__unsafe_size,__temp1229v,&__temp1230v);
  if(__temp1230v){
  __temp1159v__unsafe_size=0;
  free__temp426v(&__temp1159v__unsafe_ptr);
  }
  __temp1223v=0;
  neq__temp301v(__temp1139v__unsafe_size,__temp1223v,&__temp1224v);
  if(__temp1224v){
  __temp1139v__unsafe_size=0;
  free__temp426v(&__temp1139v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1133v();return 0;}