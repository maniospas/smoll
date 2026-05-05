#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1094v=",";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1103v(void** __temp1149v, unsigned long long* __temp1150v, unsigned long long* __temp1151v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1149v=unsafe_ptr;
  *__temp1150v=unsafe_size;
  *__temp1151v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1152v) {
  int value=0;
  *__temp1152v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1153v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1153v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1154v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1154v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1155v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1155v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1156v) {
  void* allocated=*__temp1156v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1156v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1157v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1157v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1158v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1158v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1159v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1159v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1160v, unsigned long long* __temp1161v, unsigned long long* __temp1162v, unsigned long long size, void** __temp1163v, unsigned long long* __temp1164v, unsigned long long* __temp1165v) {
  void* buffer__unsafe_ptr=*__temp1160v;
  unsigned long long buffer__unsafe_size=*__temp1161v;
  unsigned long long buffer__unsafe_align=*__temp1162v;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  int __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  int __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  void* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp301v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp427v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp301v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp423v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp427v(buffer__unsafe_ptr,__temp452v,bytes);
  __temp_return:
  *__temp1160v=buffer__unsafe_ptr;
  *__temp1161v=buffer__unsafe_size;
  *__temp1162v=buffer__unsafe_align;
  *__temp1163v=buffer__unsafe_ptr;
  *__temp1164v=buffer__unsafe_size;
  *__temp1165v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1166v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1166v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1167v) {
  *__temp1167v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1168v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1168v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp482v(void** __temp1169v, unsigned long long* __temp1170v, unsigned long long* __temp1171v, unsigned long long i, void** __temp1172v) {
  void* buffer__unsafe_ptr=*__temp1169v;
  unsigned long long buffer__unsafe_size=*__temp1170v;
  unsigned long long buffer__unsafe_align=*__temp1171v;
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp484v__);
  add__temp428v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1169v=buffer__unsafe_ptr;
  *__temp1170v=buffer__unsafe_size;
  *__temp1171v=buffer__unsafe_align;
  *__temp1172v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1173v) {
  int __temp487v__=0;
  unsigned long long __temp488v__=0;
  void* __temp489v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp488v__);
  add__temp428v(buffer__unsafe_ptr,__temp488v__,&__temp489v__);
  *__temp1173v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void free__temp432v(void** __temp1174v, unsigned long long* __temp1175v, unsigned long long* __temp1176v, void** __temp1177v, unsigned long long* __temp1178v, unsigned long long* __temp1179v) {
  void* buffer__unsafe_ptr=*__temp1174v;
  unsigned long long buffer__unsafe_size=*__temp1175v;
  unsigned long long buffer__unsafe_align=*__temp1176v;
  unsigned long long __temp433v=0;
  int __temp434v__=0;
  unsigned long long __temp435v=0;
  __temp433v=0;
  eq__temp277v(buffer__unsafe_size,__temp433v,&__temp434v__);
  if(__temp434v__){
  goto __temp_return;
  }
  __temp435v=0;
  buffer__unsafe_size=__temp435v;
  free__temp426v(&buffer__unsafe_ptr);
  __temp_return:
  *__temp1174v=buffer__unsafe_ptr;
  *__temp1175v=buffer__unsafe_size;
  *__temp1176v=buffer__unsafe_align;
  *__temp1177v=buffer__unsafe_ptr;
  *__temp1178v=buffer__unsafe_size;
  *__temp1179v=buffer__unsafe_align;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1180v) {
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
  *__temp1180v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1181v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1181v=z;
}

int resize__temp454v(void** __temp1186v, unsigned long long* __temp1187v, unsigned long long* __temp1188v, unsigned long long size, void** __temp1189v, unsigned long long* __temp1190v, unsigned long long* __temp1191v) {
  void* buffer__unsafe_ptr=*__temp1186v;
  unsigned long long buffer__unsafe_size=*__temp1187v;
  unsigned long long buffer__unsafe_align=*__temp1188v;
  int __temp455v__=0;
  unsigned long long __temp456v=0;
  int __temp457v__=0;
  void* __temp458v__unsafe_ptr=0;
  unsigned long long __temp458v__unsafe_size=0;
  unsigned long long __temp458v__unsafe_align=0;
  unsigned long long __temp459v=0;
  int __temp460v__=0;
  void* __temp461v__unsafe_ptr=0;
  unsigned long long __temp461v__unsafe_size=0;
  unsigned long long __temp461v__unsafe_align=0;
  unsigned long long __temp463v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp464v__=0;
  unsigned long long bytes=0;
  void* __temp465v__=0;
  int __temp466v__=0;
  unsigned long long __temp1184v=0;
  int __temp1185v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp455v__);
  if(__temp455v__){
  goto __temp_return;
  }
  __temp456v=0;
  eq__temp277v(size,__temp456v,&__temp457v__);
  if(__temp457v__){
  free__temp432v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp458v__unsafe_ptr,&__temp458v__unsafe_size,&__temp458v__unsafe_align);
  buffer__unsafe_ptr=__temp458v__unsafe_ptr;
  buffer__unsafe_size=__temp458v__unsafe_size;
  buffer__unsafe_align=__temp458v__unsafe_align;
  goto __temp_return;
  }
  __temp459v=0;
  eq__temp277v(buffer__unsafe_size,__temp459v,&__temp460v__);
  if(__temp460v__){
  __temp_errcode=alloc__temp437v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp461v__unsafe_ptr,&__temp461v__unsafe_size,&__temp461v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__unsafe_ptr;
  buffer__unsafe_size=__temp461v__unsafe_size;
  buffer__unsafe_align=__temp461v__unsafe_align;
  goto __temp_return;
  }
  mul__temp133v(buffer__unsafe_size,buffer__unsafe_align,&__temp463v__);
  prev_bytes=__temp463v__;
  buffer__unsafe_size=size;
  mul__temp133v(buffer__unsafe_align,size,&__temp464v__);
  bytes=__temp464v__;
  __temp_errcode=realloc__temp424v(buffer__unsafe_ptr,bytes,&__temp465v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp465v__;
  lt__temp181v(prev_bytes,bytes,&__temp466v__);
  if(__temp466v__){
  zero__temp427v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1186v=buffer__unsafe_ptr;
  *__temp1187v=buffer__unsafe_size;
  *__temp1188v=buffer__unsafe_align;
  *__temp1189v=buffer__unsafe_ptr;
  *__temp1190v=buffer__unsafe_size;
  *__temp1191v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1192v) {
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
  *__temp1192v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp475v(void** __temp1193v, unsigned long long* __temp1194v, unsigned long long* __temp1195v, void** __temp1196v) {
  void* buffer__unsafe_ptr=*__temp1193v;
  unsigned long long buffer__unsafe_size=*__temp1194v;
  unsigned long long buffer__unsafe_align=*__temp1195v;
  unsigned long long __temp476v=0;
  int __temp477v__=0;
  unsigned long long __temp478v=0;
  unsigned long long __temp479v__=0;
  unsigned long long __temp480v__=0;
  void* __temp481v__=0;
  int __temp_errcode=0;
  __temp476v=0;
  eq__temp277v(__temp476v,buffer__unsafe_size,&__temp477v__);
  if(__temp477v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  __temp478v=1;
  __temp_errcode=sub__temp329v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp133v(__temp479v__,buffer__unsafe_align,&__temp480v__);
  add__temp428v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1193v=buffer__unsafe_ptr;
  *__temp1194v=buffer__unsafe_size;
  *__temp1195v=buffer__unsafe_align;
  *__temp1196v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1124v(void** __temp1197v, unsigned long long* __temp1198v, unsigned long long* __temp1199v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1197v=unsafe_ptr;
  *__temp1198v=unsafe_size;
  *__temp1199v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp350v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1092v(void* f) {
  double __temp1093v__a__x=0;
  double __temp1093v__a__y=0;
  double __temp1093v__b__x=0;
  double __temp1093v__b__y=0;
  double __temp1096v__a__x=0;
  double __temp1096v__a__y=0;
  double __temp1096v__b__x=0;
  double __temp1096v__b__y=0;
  double __temp1098v__a__x=0;
  double __temp1098v__a__y=0;
  double __temp1098v__b__x=0;
  double __temp1098v__b__y=0;
  double __temp1100v__a__x=0;
  double __temp1100v__a__y=0;
  double __temp1100v__b__x=0;
  double __temp1100v__b__y=0;
  int __temp_errcode=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1093v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1093v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1093v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1093v__b__y,(char*)f+24,8);
  print__temp350v(__temp1093v__a__x,__temp1094v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1096v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1096v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1096v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1096v__b__y,(char*)f+24,8);
  print__temp350v(__temp1096v__a__y,__temp1094v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1098v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1098v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1098v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1098v__b__y,(char*)f+24,8);
  print__temp350v(__temp1098v__b__x,__temp1094v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1100v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1100v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1100v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1100v__b__y,(char*)f+24,8);
  print__temp348v(__temp1100v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1102v() {
  void* __temp1105v__unsafe_ptr=0;
  unsigned long long __temp1105v__unsafe_size=0;
  unsigned long long __temp1105v__unsafe_align=0;
  void* __temp1106v__unsafe_ptr=0;
  unsigned long long __temp1106v__unsafe_size=0;
  unsigned long long __temp1106v__unsafe_align=0;
  unsigned long long __temp1107v=0;
  void* __temp1108v__unsafe_ptr=0;
  unsigned long long __temp1108v__unsafe_size=0;
  unsigned long long __temp1108v__unsafe_align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1110v=0;
  void* __temp1111v__=0;
  double __temp1112v=0;
  unsigned long long __temp1113v=0;
  void* __temp1114v__=0;
  double __temp1115v__value=0;
  unsigned long long __temp1117v=0;
  void* __temp1118v__=0;
  void* f0=0;
  double __temp1119v__value=0;
  unsigned long long __temp1120v=0;
  void* __temp1121v__unsafe_ptr=0;
  unsigned long long __temp1121v__unsafe_size=0;
  unsigned long long __temp1121v__unsafe_align=0;
  void* __temp1123v__=0;
  void* __temp1126v__unsafe_ptr=0;
  unsigned long long __temp1126v__unsafe_size=0;
  unsigned long long __temp1126v__unsafe_align=0;
  void* __temp1127v__unsafe_ptr=0;
  unsigned long long __temp1127v__unsafe_size=0;
  unsigned long long __temp1127v__unsafe_align=0;
  unsigned long long __temp1128v=0;
  void* __temp1129v__unsafe_ptr=0;
  unsigned long long __temp1129v__unsafe_size=0;
  unsigned long long __temp1129v__unsafe_align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1131v=0;
  void* __temp1132v__=0;
  double __temp1133v=0;
  double __temp1134v=0;
  double __temp1135v=0;
  double __temp1136v=0;
  unsigned long long __temp1137v=0;
  void* __temp1138v__=0;
  double __temp1140v=0;
  void* __temp1141v__unsafe_ptr=0;
  unsigned long long __temp1141v__unsafe_size=0;
  unsigned long long __temp1141v__unsafe_align=0;
  void* __temp1142v__unsafe_ptr=0;
  unsigned long long __temp1142v__unsafe_size=0;
  unsigned long long __temp1142v__unsafe_align=0;
  unsigned long long __temp1143v=0;
  void* __temp1144v__unsafe_ptr=0;
  unsigned long long __temp1144v__unsafe_size=0;
  unsigned long long __temp1144v__unsafe_align=0;
  void* __temp1146v__=0;
  void* n=0;
  double __temp1147v__value=0;
  unsigned long long __temp1203v=0;
  int __temp1204v=0;
  unsigned long long __temp1206v=0;
  int __temp1207v=0;
  unsigned long long __temp1211v=0;
  int __temp1212v=0;
  unsigned long long __temp1216v=0;
  int __temp1217v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1103v(&__temp1105v__unsafe_ptr,&__temp1105v__unsafe_size,&__temp1105v__unsafe_align);
  __temp1106v__unsafe_ptr=__temp1105v__unsafe_ptr;
  __temp1106v__unsafe_size=__temp1105v__unsafe_size;
  __temp1106v__unsafe_align=__temp1105v__unsafe_align;
  __temp1107v=1;
  __temp_errcode=alloc__temp437v(&__temp1106v__unsafe_ptr,&__temp1106v__unsafe_size,&__temp1106v__unsafe_align,__temp1107v,&__temp1108v__unsafe_ptr,&__temp1108v__unsafe_size,&__temp1108v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1108v__unsafe_ptr;
  f__unsafe_size=__temp1108v__unsafe_size;
  f__unsafe_align=__temp1108v__unsafe_align;
  __temp1110v=0;
  __temp_errcode=mutget__temp482v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1110v,&__temp1111v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1112v=1.0;
  if(!__temp1111v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1111v__,&__temp1112v,8);
  __temp1113v=0;
  __temp_errcode=get__temp486v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1113v,&__temp1114v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1114v__){
  goto __temp_failure;
  }
  memcpy(&__temp1115v__value,(char*)__temp1114v__,8);
  print__temp348v(__temp1115v__value);
  __temp1117v=0;
  __temp_errcode=mutget__temp482v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1117v,&__temp1118v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1118v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1119v__value,(char*)f0,8);
  __temp1120v=2;
  __temp_errcode=resize__temp454v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1120v,&__temp1121v__unsafe_ptr,&__temp1121v__unsafe_size,&__temp1121v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp475v(&__temp1121v__unsafe_ptr,&__temp1121v__unsafe_size,&__temp1121v__unsafe_align,&__temp1123v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1123v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1123v__,&__temp1119v__value,8);
  Field__temp_buffer__buffer__temp1124v(&__temp1126v__unsafe_ptr,&__temp1126v__unsafe_size,&__temp1126v__unsafe_align);
  __temp1127v__unsafe_ptr=__temp1126v__unsafe_ptr;
  __temp1127v__unsafe_size=__temp1126v__unsafe_size;
  __temp1127v__unsafe_align=__temp1126v__unsafe_align;
  __temp1128v=1;
  __temp_errcode=alloc__temp437v(&__temp1127v__unsafe_ptr,&__temp1127v__unsafe_size,&__temp1127v__unsafe_align,__temp1128v,&__temp1129v__unsafe_ptr,&__temp1129v__unsafe_size,&__temp1129v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1129v__unsafe_ptr;
  p__unsafe_size=__temp1129v__unsafe_size;
  p__unsafe_align=__temp1129v__unsafe_align;
  __temp1131v=0;
  __temp_errcode=mutget__temp482v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1131v,&__temp1132v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1133v=1.0;
  __temp1134v=2.0;
  __temp1135v=3.0;
  __temp1136v=4.0;
  if(!__temp1132v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1132v__,&__temp1133v,8);
  if(!__temp1132v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1132v__+8,&__temp1134v,8);
  if(!__temp1132v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1132v__+16,&__temp1135v,8);
  if(!__temp1132v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1132v__+24,&__temp1136v,8);
  __temp1137v=0;
  __temp_errcode=get__temp486v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1137v,&__temp1138v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1092v(__temp1138v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1140v=1.0;
  float__temp_buffer__buffer__temp1103v(&__temp1141v__unsafe_ptr,&__temp1141v__unsafe_size,&__temp1141v__unsafe_align);
  __temp1142v__unsafe_ptr=__temp1141v__unsafe_ptr;
  __temp1142v__unsafe_size=__temp1141v__unsafe_size;
  __temp1142v__unsafe_align=__temp1141v__unsafe_align;
  __temp1143v=1;
  __temp_errcode=alloc__temp437v(&__temp1142v__unsafe_ptr,&__temp1142v__unsafe_size,&__temp1142v__unsafe_align,__temp1143v,&__temp1144v__unsafe_ptr,&__temp1144v__unsafe_size,&__temp1144v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp475v(&__temp1144v__unsafe_ptr,&__temp1144v__unsafe_size,&__temp1144v__unsafe_align,&__temp1146v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1146v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1146v__,&__temp1140v,8);
  n=__temp1146v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1147v__value,(char*)n,8);
  print__temp348v(__temp1147v__value);
  
  __temp_failure:__temp1216v=0;
  neq__temp301v(__temp1144v__unsafe_size,__temp1216v,&__temp1217v);
  if(__temp1217v){
  __temp1144v__unsafe_size=0;
  free__temp426v(&__temp1144v__unsafe_ptr);
  }
  __temp1211v=0;
  neq__temp301v(__temp1129v__unsafe_size,__temp1211v,&__temp1212v);
  if(__temp1212v){
  __temp1129v__unsafe_size=0;
  free__temp426v(&__temp1129v__unsafe_ptr);
  }
  __temp1206v=0;
  neq__temp301v(__temp1121v__unsafe_size,__temp1206v,&__temp1207v);
  if(__temp1207v){
  __temp1121v__unsafe_size=0;
  free__temp426v(&__temp1121v__unsafe_ptr);
  }
  __temp1203v=0;
  neq__temp301v(__temp1108v__unsafe_size,__temp1203v,&__temp1204v);
  if(__temp1204v){
  __temp1108v__unsafe_size=0;
  free__temp426v(&__temp1108v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1102v();return 0;}