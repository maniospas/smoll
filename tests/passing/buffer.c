#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1091v(void** __temp1121v, unsigned long long* __temp1122v, unsigned long long* __temp1123v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1121v=unsafe_ptr;
  *__temp1122v=unsafe_size;
  *__temp1123v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1124v) {
  int value=0;
  *__temp1124v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1125v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1125v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1126v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1126v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1127v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1127v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1128v) {
  void* allocated=*__temp1128v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1128v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1129v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1129v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1130v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1130v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1131v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1131v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1132v, unsigned long long* __temp1133v, unsigned long long* __temp1134v, unsigned long long size, void** __temp1135v, unsigned long long* __temp1136v, unsigned long long* __temp1137v) {
  void* buffer__unsafe_ptr=*__temp1132v;
  unsigned long long buffer__unsafe_size=*__temp1133v;
  unsigned long long buffer__unsafe_align=*__temp1134v;
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
  *__temp1132v=buffer__unsafe_ptr;
  *__temp1133v=buffer__unsafe_size;
  *__temp1134v=buffer__unsafe_align;
  *__temp1135v=buffer__unsafe_ptr;
  *__temp1136v=buffer__unsafe_size;
  *__temp1137v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1138v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1138v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1139v) {
  *__temp1139v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1140v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1140v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp482v(void** __temp1141v, unsigned long long* __temp1142v, unsigned long long* __temp1143v, unsigned long long i, void** __temp1144v) {
  void* buffer__unsafe_ptr=*__temp1141v;
  unsigned long long buffer__unsafe_size=*__temp1142v;
  unsigned long long buffer__unsafe_align=*__temp1143v;
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
  *__temp1141v=buffer__unsafe_ptr;
  *__temp1142v=buffer__unsafe_size;
  *__temp1143v=buffer__unsafe_align;
  *__temp1144v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1090v(void** __temp1151v, unsigned long long* __temp1152v, unsigned long long* __temp1153v) {
  void* __temp1093v__unsafe_ptr=0;
  unsigned long long __temp1093v__unsafe_size=0;
  unsigned long long __temp1093v__unsafe_align=0;
  void* __temp1094v__unsafe_ptr=0;
  unsigned long long __temp1094v__unsafe_size=0;
  unsigned long long __temp1094v__unsafe_align=0;
  unsigned long long __temp1095v=0;
  void* __temp1096v__unsafe_ptr=0;
  unsigned long long __temp1096v__unsafe_size=0;
  unsigned long long __temp1096v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1098v=0;
  void* __temp1099v__=0;
  double __temp1100v=0;
  void* __temp1101v__unsafe_ptr=0;
  unsigned long long __temp1101v__unsafe_size=0;
  unsigned long long __temp1101v__unsafe_align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1148v=0;
  int __temp1149v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1091v(&__temp1093v__unsafe_ptr,&__temp1093v__unsafe_size,&__temp1093v__unsafe_align);
  __temp1094v__unsafe_ptr=__temp1093v__unsafe_ptr;
  __temp1094v__unsafe_size=__temp1093v__unsafe_size;
  __temp1094v__unsafe_align=__temp1093v__unsafe_align;
  __temp1095v=1;
  __temp_errcode=alloc__temp437v(&__temp1094v__unsafe_ptr,&__temp1094v__unsafe_size,&__temp1094v__unsafe_align,__temp1095v,&__temp1096v__unsafe_ptr,&__temp1096v__unsafe_size,&__temp1096v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1096v__unsafe_ptr;
  x__unsafe_size=__temp1096v__unsafe_size;
  x__unsafe_align=__temp1096v__unsafe_align;
  __temp1098v=0;
  __temp_errcode=mutget__temp482v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1098v,&__temp1099v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1100v=1.0;
  if(!__temp1099v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1099v__,&__temp1100v,8);
  float__temp_buffer__buffer__temp1091v(&__temp1101v__unsafe_ptr,&__temp1101v__unsafe_size,&__temp1101v__unsafe_align);
  y__unsafe_ptr=__temp1101v__unsafe_ptr;
  y__unsafe_size=__temp1101v__unsafe_size;
  y__unsafe_align=__temp1101v__unsafe_align;
  *__temp1151v=x__unsafe_ptr;
  *__temp1152v=x__unsafe_size;
  *__temp1153v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void free__temp432v(void** __temp1154v, unsigned long long* __temp1155v, unsigned long long* __temp1156v, void** __temp1157v, unsigned long long* __temp1158v, unsigned long long* __temp1159v) {
  void* buffer__unsafe_ptr=*__temp1154v;
  unsigned long long buffer__unsafe_size=*__temp1155v;
  unsigned long long buffer__unsafe_align=*__temp1156v;
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
  *__temp1154v=buffer__unsafe_ptr;
  *__temp1155v=buffer__unsafe_size;
  *__temp1156v=buffer__unsafe_align;
  *__temp1157v=buffer__unsafe_ptr;
  *__temp1158v=buffer__unsafe_size;
  *__temp1159v=buffer__unsafe_align;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1160v) {
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
  *__temp1160v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1161v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1161v=z;
}

int resize__temp454v(void** __temp1166v, unsigned long long* __temp1167v, unsigned long long* __temp1168v, unsigned long long size, void** __temp1169v, unsigned long long* __temp1170v, unsigned long long* __temp1171v) {
  void* buffer__unsafe_ptr=*__temp1166v;
  unsigned long long buffer__unsafe_size=*__temp1167v;
  unsigned long long buffer__unsafe_align=*__temp1168v;
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
  unsigned long long __temp1164v=0;
  int __temp1165v=0;
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
  *__temp1166v=buffer__unsafe_ptr;
  *__temp1167v=buffer__unsafe_size;
  *__temp1168v=buffer__unsafe_align;
  *__temp1169v=buffer__unsafe_ptr;
  *__temp1170v=buffer__unsafe_size;
  *__temp1171v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1172v) {
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
  *__temp1172v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp475v(void** __temp1173v, unsigned long long* __temp1174v, unsigned long long* __temp1175v, void** __temp1176v) {
  void* buffer__unsafe_ptr=*__temp1173v;
  unsigned long long buffer__unsafe_size=*__temp1174v;
  unsigned long long buffer__unsafe_align=*__temp1175v;
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
  *__temp1173v=buffer__unsafe_ptr;
  *__temp1174v=buffer__unsafe_size;
  *__temp1175v=buffer__unsafe_align;
  *__temp1176v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1102v(void** __temp1180v, unsigned long long* __temp1181v, unsigned long long* __temp1182v) {
  void* x__unsafe_ptr=*__temp1180v;
  unsigned long long x__unsafe_size=*__temp1181v;
  unsigned long long x__unsafe_align=*__temp1182v;
  unsigned long long __temp1103v=0;
  void* __temp1104v__unsafe_ptr=0;
  unsigned long long __temp1104v__unsafe_size=0;
  unsigned long long __temp1104v__unsafe_align=0;
  void* __temp1106v__=0;
  double __temp1107v=0;
  void* __temp1108v=0;
  unsigned long long __temp1178v=0;
  int __temp1179v=0;
  int __temp_errcode=0;
  __temp1103v=2;
  __temp_errcode=resize__temp454v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1103v,&__temp1104v__unsafe_ptr,&__temp1104v__unsafe_size,&__temp1104v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp475v(&__temp1104v__unsafe_ptr,&__temp1104v__unsafe_size,&__temp1104v__unsafe_align,&__temp1106v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1107v=2.0;
  if(!__temp1106v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1106v__,&__temp1107v,8);
  __temp1108v=__temp1106v__;
  *__temp1180v=x__unsafe_ptr;
  *__temp1181v=x__unsafe_size;
  *__temp1182v=x__unsafe_align;
  
  __temp_failure:__temp1178v=0;
  neq__temp301v(__temp1104v__unsafe_size,__temp1178v,&__temp1179v);
  if(__temp1179v){
  __temp1104v__unsafe_size=0;
  free__temp426v(&__temp1104v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1183v) {
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
  *__temp1183v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1184v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1184v=__temp62v__;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1185v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1185v=z;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1109v() {
  void* __temp1110v__unsafe_ptr=0;
  unsigned long long __temp1110v__unsafe_size=0;
  unsigned long long __temp1110v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1113v=0;
  void* __temp1114v__=0;
  double __temp1115v__value=0;
  unsigned long long __temp1116v=0;
  void* __temp1117v__=0;
  double __temp1118v__value=0;
  double __temp1119v__=0;
  unsigned long long __temp1187v=0;
  int __temp1188v=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp1090v(&__temp1110v__unsafe_ptr,&__temp1110v__unsafe_size,&__temp1110v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1110v__unsafe_ptr;
  x__unsafe_size=__temp1110v__unsafe_size;
  x__unsafe_align=__temp1110v__unsafe_align;
  __temp_errcode=test2__temp1102v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1113v=0;
  __temp_errcode=get__temp486v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1113v,&__temp1114v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1114v__){
  goto __temp_failure;
  }
  memcpy(&__temp1115v__value,(char*)__temp1114v__,8);
  __temp1116v=1;
  __temp_errcode=get__temp486v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1116v,&__temp1117v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1117v__){
  goto __temp_failure;
  }
  memcpy(&__temp1118v__value,(char*)__temp1117v__,8);
  add__temp87v(__temp1115v__value,__temp1118v__value,&__temp1119v__);
  print__temp348v(__temp1119v__);
  
  __temp_failure:__temp1187v=0;
  neq__temp301v(__temp1110v__unsafe_size,__temp1187v,&__temp1188v);
  if(__temp1188v){
  __temp1110v__unsafe_size=0;
  free__temp426v(&__temp1110v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1109v();return 0;}