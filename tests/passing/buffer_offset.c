#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";
const char* const __temp1110v="starting point creation";

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1114v(void** __temp1140v, unsigned long long* __temp1141v, unsigned long long* __temp1142v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1140v=unsafe_ptr;
  *__temp1141v=unsafe_size;
  *__temp1142v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1143v) {
  int value=0;
  *__temp1143v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1144v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1144v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1145v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1145v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1146v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1146v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1147v) {
  void* allocated=*__temp1147v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1147v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1148v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1148v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1149v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1149v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1150v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1150v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1151v, unsigned long long* __temp1152v, unsigned long long* __temp1153v, unsigned long long size, void** __temp1154v, unsigned long long* __temp1155v, unsigned long long* __temp1156v) {
  void* buffer__unsafe_ptr=*__temp1151v;
  unsigned long long buffer__unsafe_size=*__temp1152v;
  unsigned long long buffer__unsafe_align=*__temp1153v;
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
  *__temp1151v=buffer__unsafe_ptr;
  *__temp1152v=buffer__unsafe_size;
  *__temp1153v=buffer__unsafe_align;
  *__temp1154v=buffer__unsafe_ptr;
  *__temp1155v=buffer__unsafe_size;
  *__temp1156v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1157v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1157v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1158v) {
  *__temp1158v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1159v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1159v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp482v(void** __temp1160v, unsigned long long* __temp1161v, unsigned long long* __temp1162v, unsigned long long i, void** __temp1163v) {
  void* buffer__unsafe_ptr=*__temp1160v;
  unsigned long long buffer__unsafe_size=*__temp1161v;
  unsigned long long buffer__unsafe_align=*__temp1162v;
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
  *__temp1160v=buffer__unsafe_ptr;
  *__temp1161v=buffer__unsafe_size;
  *__temp1162v=buffer__unsafe_align;
  *__temp1163v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1090v(double x, double y, double* __temp1164v, double* __temp1165v) {
  *__temp1164v=x;
  *__temp1165v=y;
}

static inline __attribute__((always_inline)) void print__temp343v(const char* value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1108v(double x, double y, double z, double* __temp1166v, double* __temp1167v, double* __temp1168v) {
  double __temp1109v__x=0;
  double __temp1109v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1090v(x,y,&__temp1109v__x,&__temp1109v__y);
  plane__x=__temp1109v__x;
  plane__y=__temp1109v__y;
  print__temp343v(__temp1110v);
  *__temp1166v=plane__x;
  *__temp1167v=plane__y;
  *__temp1168v=z;
}

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1169v) {
  *__temp1169v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp397v(unsigned long long to, unsigned long long* __temp1170v, unsigned long long* __temp1171v) {
  unsigned long long __temp399v=0;
  unsigned long long _from=0;
  unsigned long long __temp400v=0;
  unsigned long long from=0;
  __temp399v=0;
  _from=__temp399v;
  __temp400v=_from;
  from=__temp400v;
  *__temp1170v=from;
  *__temp1171v=to;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1172v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1172v=z;
}

static inline __attribute__((always_inline)) int next__temp401v(unsigned long long* __temp1173v, unsigned long long r__to, unsigned long long* __temp1174v) {
  unsigned long long r__from=*__temp1173v;
  int __temp402v__=0;
  unsigned long long ret=0;
  unsigned long long __temp403v=0;
  unsigned long long __temp404v__=0;
  int __temp_errcode=0;
  ge__temp253v(r__from,r__to,&__temp402v__);
  if(__temp402v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  ret=r__from;
  __temp403v=1;
  add__temp109v(ret,__temp403v,&__temp404v__);
  r__from=__temp404v__;
  *__temp1173v=r__from;
  *__temp1174v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1175v) {
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
  *__temp1175v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1176v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1176v=__temp62v__;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1177v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1177v=z;
}

static inline __attribute__((always_inline)) int sum__temp1093v(void** __temp1178v, unsigned long long* __temp1179v, unsigned long long* __temp1180v, double* __temp1181v, double* __temp1182v) {
  void* v__unsafe_ptr=*__temp1178v;
  unsigned long long v__unsafe_size=*__temp1179v;
  unsigned long long v__unsafe_align=*__temp1180v;
  double __temp1094v=0;
  double __temp1095v=0;
  double x=0;
  double __temp1096v=0;
  double __temp1097v=0;
  double y=0;
  unsigned long long __temp1098v__=0;
  unsigned long long __temp1099v__from=0;
  unsigned long long __temp1099v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  int __temp1100v=0;
  unsigned long long __temp1101v__=0;
  unsigned long long i=0;
  void* __temp1102v__=0;
  double __temp1103v__x=0;
  double __temp1103v__y=0;
  double __temp1104v__=0;
  void* __temp1105v__=0;
  double __temp1106v__x=0;
  double __temp1106v__y=0;
  double __temp1107v__=0;
  int __temp_errcode=0;
  __temp1094v=0.0;
  __temp1095v=__temp1094v;
  x=__temp1095v;
  __temp1096v=0.0;
  __temp1097v=__temp1096v;
  y=__temp1097v;
  len__temp490v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1098v__);
  range__temp397v(__temp1098v__,&__temp1099v__from,&__temp1099v__to);
  it__from=__temp1099v__from;
  it__to=__temp1099v__to;
  while(1){
  __temp1100v=next__temp401v(&it__from,it__to,&__temp1101v__);
  i=__temp1101v__;
  __temp1100v=__temp1100v==0;
  if(!__temp1100v)break;
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
  }
  *__temp1178v=v__unsafe_ptr;
  *__temp1179v=v__unsafe_size;
  *__temp1180v=v__unsafe_align;
  *__temp1181v=x;
  *__temp1182v=y;
  
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
  double __temp1126v__plane__x=0;
  double __temp1126v__plane__y=0;
  double __temp1126v__z=0;
  unsigned long long __temp1127v=0;
  void* __temp1128v__=0;
  double __temp1129v=0;
  double __temp1130v=0;
  double __temp1131v=0;
  double __temp1132v__plane__x=0;
  double __temp1132v__plane__y=0;
  double __temp1132v__z=0;
  void* __temp1133v__unsafe_ptr=0;
  unsigned long long __temp1133v__unsafe_size=0;
  unsigned long long __temp1133v__unsafe_align=0;
  void* plane__unsafe_ptr=0;
  unsigned long long plane__unsafe_size=0;
  unsigned long long plane__unsafe_align=0;
  double __temp1137v__x=0;
  double __temp1137v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1186v=0;
  int __temp1187v=0;
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
  __temp1124v=2.0;
  __temp1125v=3.0;
  Point3D__temp1108v(__temp1123v,__temp1124v,__temp1125v,&__temp1126v__plane__x,&__temp1126v__plane__y,&__temp1126v__z);
  if(!__temp1122v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1122v__,&__temp1126v__plane__x,8);
  if(!__temp1122v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1122v__+8,&__temp1126v__plane__y,8);
  if(!__temp1122v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1122v__+16,&__temp1126v__z,8);
  __temp1127v=1;
  __temp_errcode=mutget__temp482v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1127v,&__temp1128v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1129v=1.0;
  __temp1130v=2.0;
  __temp1131v=3.0;
  Point3D__temp1108v(__temp1129v,__temp1130v,__temp1131v,&__temp1132v__plane__x,&__temp1132v__plane__y,&__temp1132v__z);
  if(!__temp1128v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1128v__,&__temp1132v__plane__x,8);
  if(!__temp1128v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1128v__+8,&__temp1132v__plane__y,8);
  if(!__temp1128v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1128v__+16,&__temp1132v__z,8);
  __temp1133v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1133v__unsafe_size=points__unsafe_size;
  __temp1133v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1133v__unsafe_ptr;
  plane__unsafe_size=__temp1133v__unsafe_size;
  plane__unsafe_align=__temp1133v__unsafe_align;
  __temp_errcode=sum__temp1093v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1137v__x,&__temp1137v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1137v__x;
  sums__y=__temp1137v__y;
  print__temp348v(sums__x);
  print__temp348v(sums__y);
  
  __temp_failure:__temp1186v=0;
  neq__temp301v(__temp1119v__unsafe_size,__temp1186v,&__temp1187v);
  if(__temp1187v){
  __temp1119v__unsafe_size=0;
  free__temp426v(&__temp1119v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1113v();return 0;}