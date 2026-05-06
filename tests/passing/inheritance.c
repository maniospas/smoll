#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1145v(void** __temp1177v, unsigned long long* __temp1178v, unsigned long long* __temp1179v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1177v=unsafe_ptr;
  *__temp1178v=unsafe_size;
  *__temp1179v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1180v) {
  int value=0;
  *__temp1180v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1181v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1181v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1182v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1182v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1183v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1183v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1184v) {
  void* allocated=*__temp1184v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1184v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1185v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1185v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1186v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1186v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1187v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1187v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1188v, unsigned long long* __temp1189v, unsigned long long* __temp1190v, unsigned long long size, void** __temp1191v, unsigned long long* __temp1192v, unsigned long long* __temp1193v) {
  void* buffer__unsafe_ptr=*__temp1188v;
  unsigned long long buffer__unsafe_size=*__temp1189v;
  unsigned long long buffer__unsafe_align=*__temp1190v;
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
  *__temp1188v=buffer__unsafe_ptr;
  *__temp1189v=buffer__unsafe_size;
  *__temp1190v=buffer__unsafe_align;
  *__temp1191v=buffer__unsafe_ptr;
  *__temp1192v=buffer__unsafe_size;
  *__temp1193v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1194v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1194v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1195v) {
  *__temp1195v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1196v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1196v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp476v(void** __temp1197v, unsigned long long* __temp1198v, unsigned long long* __temp1199v, unsigned long long i, void** __temp1200v) {
  void* buffer__unsafe_ptr=*__temp1197v;
  unsigned long long buffer__unsafe_size=*__temp1198v;
  unsigned long long buffer__unsafe_align=*__temp1199v;
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
  *__temp1197v=buffer__unsafe_ptr;
  *__temp1198v=buffer__unsafe_size;
  *__temp1199v=buffer__unsafe_align;
  *__temp1200v=__temp479v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1121v(double x, double y, double* __temp1201v, double* __temp1202v) {
  *__temp1201v=x;
  *__temp1202v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1141v(double x, double y, double z, double* __temp1203v, double* __temp1204v, double* __temp1205v) {
  double __temp1142v__x=0;
  double __temp1142v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1121v(x,y,&__temp1142v__x,&__temp1142v__y);
  plane__x=__temp1142v__x;
  plane__y=__temp1142v__y;
  *__temp1203v=plane__x;
  *__temp1204v=plane__y;
  *__temp1205v=z;
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1206v) {
  *__temp1206v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1207v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1207v=z;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1208v) {
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
  *__temp1208v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1209v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1209v=__temp62v__;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1210v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1210v=z;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1211v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) int sum__temp1124v(void** __temp1212v, unsigned long long* __temp1213v, unsigned long long* __temp1214v, double* __temp1215v, double* __temp1216v) {
  void* v__unsafe_ptr=*__temp1212v;
  unsigned long long v__unsafe_size=*__temp1213v;
  unsigned long long v__unsafe_align=*__temp1214v;
  double __temp1125v=0;
  double __temp1126v=0;
  double x=0;
  double __temp1127v=0;
  double __temp1128v=0;
  double y=0;
  unsigned long long __temp1129v=0;
  unsigned long long __temp1130v=0;
  unsigned long long i=0;
  unsigned long long __temp1131v__=0;
  int __temp1132v__=0;
  void* __temp1133v__=0;
  double __temp1134v__x=0;
  double __temp1134v__y=0;
  double __temp1135v__=0;
  void* __temp1136v__=0;
  double __temp1137v__x=0;
  double __temp1137v__y=0;
  double __temp1138v__=0;
  unsigned long long __temp1139v=0;
  unsigned long long __temp1140v__=0;
  int __temp_errcode=0;
  __temp1125v=0.0;
  __temp1126v=__temp1125v;
  x=__temp1126v;
  __temp1127v=0.0;
  __temp1128v=__temp1127v;
  y=__temp1128v;
  __temp1129v=0;
  __temp1130v=__temp1129v;
  i=__temp1130v;
  while(1){
  len__temp484v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1131v__);
  lt__temp181v(i,__temp1131v__,&__temp1132v__);
  if(!__temp1132v__)break;
  __temp_errcode=get__temp480v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1133v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1133v__){
  goto __temp_failure;
  }
  memcpy(&__temp1134v__x,(char*)__temp1133v__,8);
  if(!__temp1133v__){
  goto __temp_failure;
  }
  memcpy(&__temp1134v__y,(char*)__temp1133v__+8,8);
  add__temp87v(x,__temp1134v__x,&__temp1135v__);
  x=__temp1135v__;
  __temp_errcode=get__temp480v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1136v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1136v__){
  goto __temp_failure;
  }
  memcpy(&__temp1137v__x,(char*)__temp1136v__,8);
  if(!__temp1136v__){
  goto __temp_failure;
  }
  memcpy(&__temp1137v__y,(char*)__temp1136v__+8,8);
  add__temp87v(y,__temp1137v__y,&__temp1138v__);
  y=__temp1138v__;
  __temp1139v=1;
  add__temp109v(i,__temp1139v,&__temp1140v__);
  i=__temp1140v__;
  }
  *__temp1212v=v__unsafe_ptr;
  *__temp1213v=v__unsafe_size;
  *__temp1214v=v__unsafe_align;
  *__temp1215v=x;
  *__temp1216v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1144v() {
  void* __temp1147v__unsafe_ptr=0;
  unsigned long long __temp1147v__unsafe_size=0;
  unsigned long long __temp1147v__unsafe_align=0;
  void* __temp1148v__unsafe_ptr=0;
  unsigned long long __temp1148v__unsafe_size=0;
  unsigned long long __temp1148v__unsafe_align=0;
  unsigned long long __temp1149v=0;
  void* __temp1150v__unsafe_ptr=0;
  unsigned long long __temp1150v__unsafe_size=0;
  unsigned long long __temp1150v__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1152v=0;
  void* __temp1153v__=0;
  double __temp1154v=0;
  double __temp1155v=0;
  double __temp1156v=0;
  double __temp1157v=0;
  double __temp1158v=0;
  double __temp1159v=0;
  double __temp1160v__plane__x=0;
  double __temp1160v__plane__y=0;
  double __temp1160v__z=0;
  unsigned long long __temp1161v=0;
  void* __temp1162v__=0;
  double __temp1163v=0;
  double __temp1164v=0;
  double __temp1165v=0;
  double __temp1166v=0;
  double __temp1167v=0;
  double __temp1168v=0;
  double __temp1169v__plane__x=0;
  double __temp1169v__plane__y=0;
  double __temp1169v__z=0;
  void* __temp1170v__unsafe_ptr=0;
  unsigned long long __temp1170v__unsafe_size=0;
  unsigned long long __temp1170v__unsafe_align=0;
  double __temp1174v__x=0;
  double __temp1174v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1220v=0;
  int __temp1221v=0;
  int __temp_errcode=0;
  Point3D__temp_buffer__buffer__temp1145v(&__temp1147v__unsafe_ptr,&__temp1147v__unsafe_size,&__temp1147v__unsafe_align);
  __temp1148v__unsafe_ptr=__temp1147v__unsafe_ptr;
  __temp1148v__unsafe_size=__temp1147v__unsafe_size;
  __temp1148v__unsafe_align=__temp1147v__unsafe_align;
  __temp1149v=10;
  __temp_errcode=alloc__temp432v(&__temp1148v__unsafe_ptr,&__temp1148v__unsafe_size,&__temp1148v__unsafe_align,__temp1149v,&__temp1150v__unsafe_ptr,&__temp1150v__unsafe_size,&__temp1150v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1150v__unsafe_ptr;
  points__unsafe_size=__temp1150v__unsafe_size;
  points__unsafe_align=__temp1150v__unsafe_align;
  __temp1152v=0;
  __temp_errcode=mutget__temp476v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1152v,&__temp1153v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1154v=1.0;
  __temp1155v=__temp1154v;
  __temp1156v=2.0;
  __temp1157v=__temp1156v;
  __temp1158v=3.0;
  __temp1159v=__temp1158v;
  Point3D__temp1141v(__temp1155v,__temp1157v,__temp1159v,&__temp1160v__plane__x,&__temp1160v__plane__y,&__temp1160v__z);
  if(!__temp1153v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1153v__,&__temp1160v__plane__x,8);
  if(!__temp1153v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1153v__+8,&__temp1160v__plane__y,8);
  if(!__temp1153v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1153v__+16,&__temp1160v__z,8);
  __temp1161v=1;
  __temp_errcode=mutget__temp476v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1161v,&__temp1162v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1163v=1.0;
  __temp1164v=__temp1163v;
  __temp1165v=2.0;
  __temp1166v=__temp1165v;
  __temp1167v=3.0;
  __temp1168v=__temp1167v;
  Point3D__temp1141v(__temp1164v,__temp1166v,__temp1168v,&__temp1169v__plane__x,&__temp1169v__plane__y,&__temp1169v__z);
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__,&__temp1169v__plane__x,8);
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__+8,&__temp1169v__plane__y,8);
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1162v__+16,&__temp1169v__z,8);
  __temp1170v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1170v__unsafe_size=points__unsafe_size;
  __temp1170v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1124v(&__temp1170v__unsafe_ptr,&__temp1170v__unsafe_size,&__temp1170v__unsafe_align,&__temp1174v__x,&__temp1174v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1174v__x;
  sums__y=__temp1174v__y;
  print__temp348v(sums__x);
  print__temp348v(sums__y);
  
  __temp_failure:__temp1220v=0;
  neq__temp301v(__temp1150v__unsafe_size,__temp1220v,&__temp1221v);
  if(__temp1221v){
  __temp1150v__unsafe_size=0;
  free__temp426v(&__temp1150v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1144v();return 0;}