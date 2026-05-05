#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1114v(void** __temp1146v, unsigned long long* __temp1147v, unsigned long long* __temp1148v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1146v=unsafe_ptr;
  *__temp1147v=unsafe_size;
  *__temp1148v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1149v) {
  int value=0;
  *__temp1149v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1150v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1150v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1151v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1151v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1152v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1152v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1153v) {
  void* allocated=*__temp1153v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1153v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1154v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1154v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1155v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1155v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1156v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1156v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1157v, unsigned long long* __temp1158v, unsigned long long* __temp1159v, unsigned long long size, void** __temp1160v, unsigned long long* __temp1161v, unsigned long long* __temp1162v) {
  void* buffer__unsafe_ptr=*__temp1157v;
  unsigned long long buffer__unsafe_size=*__temp1158v;
  unsigned long long buffer__unsafe_align=*__temp1159v;
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
  *__temp1157v=buffer__unsafe_ptr;
  *__temp1158v=buffer__unsafe_size;
  *__temp1159v=buffer__unsafe_align;
  *__temp1160v=buffer__unsafe_ptr;
  *__temp1161v=buffer__unsafe_size;
  *__temp1162v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1163v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1163v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1164v) {
  *__temp1164v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1165v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1165v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp482v(void** __temp1166v, unsigned long long* __temp1167v, unsigned long long* __temp1168v, unsigned long long i, void** __temp1169v) {
  void* buffer__unsafe_ptr=*__temp1166v;
  unsigned long long buffer__unsafe_size=*__temp1167v;
  unsigned long long buffer__unsafe_align=*__temp1168v;
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
  *__temp1166v=buffer__unsafe_ptr;
  *__temp1167v=buffer__unsafe_size;
  *__temp1168v=buffer__unsafe_align;
  *__temp1169v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1090v(double x, double y, double* __temp1170v, double* __temp1171v) {
  *__temp1170v=x;
  *__temp1171v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1110v(double x, double y, double z, double* __temp1172v, double* __temp1173v, double* __temp1174v) {
  double __temp1111v__x=0;
  double __temp1111v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1090v(x,y,&__temp1111v__x,&__temp1111v__y);
  plane__x=__temp1111v__x;
  plane__y=__temp1111v__y;
  *__temp1172v=plane__x;
  *__temp1173v=plane__y;
  *__temp1174v=z;
}

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1175v) {
  *__temp1175v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1176v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1176v=z;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1177v) {
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
  *__temp1177v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1178v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1178v=__temp62v__;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1179v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1179v=z;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1180v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1180v=z;
}

static inline __attribute__((always_inline)) int sum__temp1093v(void** __temp1181v, unsigned long long* __temp1182v, unsigned long long* __temp1183v, double* __temp1184v, double* __temp1185v) {
  void* v__unsafe_ptr=*__temp1181v;
  unsigned long long v__unsafe_size=*__temp1182v;
  unsigned long long v__unsafe_align=*__temp1183v;
  double __temp1094v=0;
  double __temp1095v=0;
  double x=0;
  double __temp1096v=0;
  double __temp1097v=0;
  double y=0;
  unsigned long long __temp1098v=0;
  unsigned long long __temp1099v=0;
  unsigned long long i=0;
  unsigned long long __temp1100v__=0;
  int __temp1101v__=0;
  void* __temp1102v__=0;
  double __temp1103v__x=0;
  double __temp1103v__y=0;
  double __temp1104v__=0;
  void* __temp1105v__=0;
  double __temp1106v__x=0;
  double __temp1106v__y=0;
  double __temp1107v__=0;
  unsigned long long __temp1108v=0;
  unsigned long long __temp1109v__=0;
  int __temp_errcode=0;
  __temp1094v=0.0;
  __temp1095v=__temp1094v;
  x=__temp1095v;
  __temp1096v=0.0;
  __temp1097v=__temp1096v;
  y=__temp1097v;
  __temp1098v=0;
  __temp1099v=__temp1098v;
  i=__temp1099v;
  while(1){
  len__temp490v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1100v__);
  lt__temp181v(i,__temp1100v__,&__temp1101v__);
  if(!__temp1101v__)break;
  __temp_errcode=get__temp486v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1102v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1102v__){
  goto __temp_failure;
  }
  memcpy(&__temp1103v__x,(char*)__temp1102v__,8);
  if(!__temp1102v__){
  goto __temp_failure;
  }
  memcpy(&__temp1103v__y,(char*)__temp1102v__+8,8);
  add__temp87v(x,__temp1103v__x,&__temp1104v__);
  x=__temp1104v__;
  __temp_errcode=get__temp486v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1105v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1105v__){
  goto __temp_failure;
  }
  memcpy(&__temp1106v__x,(char*)__temp1105v__,8);
  if(!__temp1105v__){
  goto __temp_failure;
  }
  memcpy(&__temp1106v__y,(char*)__temp1105v__+8,8);
  add__temp87v(y,__temp1106v__y,&__temp1107v__);
  y=__temp1107v__;
  __temp1108v=1;
  add__temp109v(i,__temp1108v,&__temp1109v__);
  i=__temp1109v__;
  }
  *__temp1181v=v__unsafe_ptr;
  *__temp1182v=v__unsafe_size;
  *__temp1183v=v__unsafe_align;
  *__temp1184v=x;
  *__temp1185v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1113v() {
  void* __temp1116v__unsafe_ptr=0;
  unsigned long long __temp1116v__unsafe_size=0;
  unsigned long long __temp1116v__unsafe_align=0;
  void* __temp1117v__unsafe_ptr=0;
  unsigned long long __temp1117v__unsafe_size=0;
  unsigned long long __temp1117v__unsafe_align=0;
  unsigned long long __temp1118v=0;
  void* __temp1119v__unsafe_ptr=0;
  unsigned long long __temp1119v__unsafe_size=0;
  unsigned long long __temp1119v__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1121v=0;
  void* __temp1122v__=0;
  double __temp1123v=0;
  double __temp1124v=0;
  double __temp1125v=0;
  double __temp1126v=0;
  double __temp1127v=0;
  double __temp1128v=0;
  double __temp1129v__plane__x=0;
  double __temp1129v__plane__y=0;
  double __temp1129v__z=0;
  unsigned long long __temp1130v=0;
  void* __temp1131v__=0;
  double __temp1132v=0;
  double __temp1133v=0;
  double __temp1134v=0;
  double __temp1135v=0;
  double __temp1136v=0;
  double __temp1137v=0;
  double __temp1138v__plane__x=0;
  double __temp1138v__plane__y=0;
  double __temp1138v__z=0;
  void* __temp1139v__unsafe_ptr=0;
  unsigned long long __temp1139v__unsafe_size=0;
  unsigned long long __temp1139v__unsafe_align=0;
  double __temp1143v__x=0;
  double __temp1143v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1189v=0;
  int __temp1190v=0;
  int __temp_errcode=0;
  Point3D__temp_buffer__buffer__temp1114v(&__temp1116v__unsafe_ptr,&__temp1116v__unsafe_size,&__temp1116v__unsafe_align);
  __temp1117v__unsafe_ptr=__temp1116v__unsafe_ptr;
  __temp1117v__unsafe_size=__temp1116v__unsafe_size;
  __temp1117v__unsafe_align=__temp1116v__unsafe_align;
  __temp1118v=10;
  __temp_errcode=alloc__temp437v(&__temp1117v__unsafe_ptr,&__temp1117v__unsafe_size,&__temp1117v__unsafe_align,__temp1118v,&__temp1119v__unsafe_ptr,&__temp1119v__unsafe_size,&__temp1119v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1119v__unsafe_ptr;
  points__unsafe_size=__temp1119v__unsafe_size;
  points__unsafe_align=__temp1119v__unsafe_align;
  __temp1121v=0;
  __temp_errcode=mutget__temp482v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1121v,&__temp1122v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1123v=1.0;
  __temp1124v=__temp1123v;
  __temp1125v=2.0;
  __temp1126v=__temp1125v;
  __temp1127v=3.0;
  __temp1128v=__temp1127v;
  Point3D__temp1110v(__temp1124v,__temp1126v,__temp1128v,&__temp1129v__plane__x,&__temp1129v__plane__y,&__temp1129v__z);
  if(!__temp1122v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1122v__,&__temp1129v__plane__x,8);
  if(!__temp1122v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1122v__+8,&__temp1129v__plane__y,8);
  if(!__temp1122v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1122v__+16,&__temp1129v__z,8);
  __temp1130v=1;
  __temp_errcode=mutget__temp482v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1130v,&__temp1131v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1132v=1.0;
  __temp1133v=__temp1132v;
  __temp1134v=2.0;
  __temp1135v=__temp1134v;
  __temp1136v=3.0;
  __temp1137v=__temp1136v;
  Point3D__temp1110v(__temp1133v,__temp1135v,__temp1137v,&__temp1138v__plane__x,&__temp1138v__plane__y,&__temp1138v__z);
  if(!__temp1131v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1131v__,&__temp1138v__plane__x,8);
  if(!__temp1131v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1131v__+8,&__temp1138v__plane__y,8);
  if(!__temp1131v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1131v__+16,&__temp1138v__z,8);
  __temp1139v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1139v__unsafe_size=points__unsafe_size;
  __temp1139v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1093v(&__temp1139v__unsafe_ptr,&__temp1139v__unsafe_size,&__temp1139v__unsafe_align,&__temp1143v__x,&__temp1143v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1143v__x;
  sums__y=__temp1143v__y;
  print__temp348v(sums__x);
  print__temp348v(sums__y);
  
  __temp_failure:__temp1189v=0;
  neq__temp301v(__temp1119v__unsafe_size,__temp1189v,&__temp1190v);
  if(__temp1190v){
  __temp1119v__unsafe_size=0;
  free__temp426v(&__temp1119v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1113v();return 0;}