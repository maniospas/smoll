#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[27] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp1148v="starting point creation";
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1152v(void** __temp1178v, unsigned long long* __temp1179v, unsigned long long* __temp1180v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1178v=unsafe_ptr;
  *__temp1179v=unsafe_size;
  *__temp1180v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1181v) {
  int value=0;
  *__temp1181v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1182v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1182v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1183v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1183v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1184v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1184v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1185v) {
  void* allocated=*__temp1185v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1185v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1186v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1186v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1187v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1187v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1188v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1188v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1189v, unsigned long long* __temp1190v, unsigned long long* __temp1191v, unsigned long long size, void** __temp1192v, unsigned long long* __temp1193v, unsigned long long* __temp1194v) {
  void* buffer__unsafe_ptr=*__temp1189v;
  unsigned long long buffer__unsafe_size=*__temp1190v;
  unsigned long long buffer__unsafe_align=*__temp1191v;
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
  __temp_errcode=7;
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
  *__temp1189v=buffer__unsafe_ptr;
  *__temp1190v=buffer__unsafe_size;
  *__temp1191v=buffer__unsafe_align;
  *__temp1192v=buffer__unsafe_ptr;
  *__temp1193v=buffer__unsafe_size;
  *__temp1194v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1195v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1195v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1196v) {
  *__temp1196v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1197v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1197v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1198v, unsigned long long* __temp1199v, unsigned long long* __temp1200v, unsigned long long i, void** __temp1201v) {
  void* buffer__unsafe_ptr=*__temp1198v;
  unsigned long long buffer__unsafe_size=*__temp1199v;
  unsigned long long buffer__unsafe_align=*__temp1200v;
  int __temp480v__=0;
  unsigned long long __temp481v__=0;
  void* __temp482v__=0;
  int __temp_errcode=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp480v__);
  if(__temp480v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp481v__);
  add__temp431v(buffer__unsafe_ptr,__temp481v__,&__temp482v__);
  *__temp1198v=buffer__unsafe_ptr;
  *__temp1199v=buffer__unsafe_size;
  *__temp1200v=buffer__unsafe_align;
  *__temp1201v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1128v(double x, double y, double* __temp1202v, double* __temp1203v) {
  *__temp1202v=x;
  *__temp1203v=y;
}

static inline __attribute__((always_inline)) void print__temp346v(const char* value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1146v(double x, double y, double z, double* __temp1204v, double* __temp1205v, double* __temp1206v) {
  double __temp1147v__x=0;
  double __temp1147v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1128v(x,y,&__temp1147v__x,&__temp1147v__y);
  plane__x=__temp1147v__x;
  plane__y=__temp1147v__y;
  print__temp346v(__temp1148v);
  *__temp1204v=plane__x;
  *__temp1205v=plane__y;
  *__temp1206v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1207v) {
  *__temp1207v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp400v(unsigned long long to, unsigned long long* __temp1208v, unsigned long long* __temp1209v) {
  unsigned long long __temp402v=0;
  unsigned long long _from=0;
  unsigned long long __temp403v=0;
  unsigned long long from=0;
  __temp402v=0;
  _from=__temp402v;
  __temp403v=_from;
  from=__temp403v;
  *__temp1208v=from;
  *__temp1209v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1210v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1210v=z;
}

static inline __attribute__((always_inline)) int next__temp404v(unsigned long long* __temp1211v, unsigned long long r__to, unsigned long long* __temp1212v) {
  unsigned long long r__from=*__temp1211v;
  int __temp405v__=0;
  unsigned long long ret=0;
  unsigned long long __temp406v=0;
  unsigned long long __temp407v__=0;
  int __temp_errcode=0;
  ge__temp254v(r__from,r__to,&__temp405v__);
  if(__temp405v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  ret=r__from;
  __temp406v=1;
  add__temp110v(ret,__temp406v,&__temp407v__);
  r__from=__temp407v__;
  *__temp1211v=r__from;
  *__temp1212v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1213v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1213v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1214v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1214v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1215v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1215v=z;
}

static inline __attribute__((always_inline)) int sum__temp1131v(void** __temp1216v, unsigned long long* __temp1217v, unsigned long long* __temp1218v, double* __temp1219v, double* __temp1220v) {
  void* v__unsafe_ptr=*__temp1216v;
  unsigned long long v__unsafe_size=*__temp1217v;
  unsigned long long v__unsafe_align=*__temp1218v;
  double __temp1132v=0;
  double __temp1133v=0;
  double x=0;
  double __temp1134v=0;
  double __temp1135v=0;
  double y=0;
  unsigned long long __temp1136v__=0;
  unsigned long long __temp1137v__from=0;
  unsigned long long __temp1137v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  int __temp1138v=0;
  unsigned long long __temp1139v__=0;
  unsigned long long i=0;
  void* __temp1140v__=0;
  double __temp1141v__x=0;
  double __temp1141v__y=0;
  double __temp1142v__=0;
  void* __temp1143v__=0;
  double __temp1144v__x=0;
  double __temp1144v__y=0;
  double __temp1145v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1132v=0.0;
  __temp1133v=__temp1132v;
  x=__temp1133v;
  __temp1134v=0.0;
  __temp1135v=__temp1134v;
  y=__temp1135v;
  len__temp487v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1136v__);
  range__temp400v(__temp1136v__,&__temp1137v__from,&__temp1137v__to);
  it__from=__temp1137v__from;
  it__to=__temp1137v__to;
  while(1){
  __temp_complain=next__temp404v(&it__from,it__to,&__temp1139v__);
  __temp1138v=__temp_complain;
  i=__temp1139v__;
  __temp1138v=__temp1138v==0;
  if(!__temp1138v)break;
  __temp_errcode=get__temp483v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1140v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1140v__){
  goto __temp_failure;
  }
  memcpy(&__temp1141v__x,(char*)__temp1140v__,8);
  if(!__temp1140v__){
  goto __temp_failure;
  }
  memcpy(&__temp1141v__y,(char*)__temp1140v__+8,8);
  add__temp88v(x,__temp1141v__x,&__temp1142v__);
  x=__temp1142v__;
  __temp_errcode=get__temp483v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1143v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1143v__){
  goto __temp_failure;
  }
  memcpy(&__temp1144v__x,(char*)__temp1143v__,8);
  if(!__temp1143v__){
  goto __temp_failure;
  }
  memcpy(&__temp1144v__y,(char*)__temp1143v__+8,8);
  add__temp88v(y,__temp1144v__y,&__temp1145v__);
  y=__temp1145v__;
  }
  *__temp1216v=v__unsafe_ptr;
  *__temp1217v=v__unsafe_size;
  *__temp1218v=v__unsafe_align;
  *__temp1219v=x;
  *__temp1220v=y;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1151v() {
  void* __temp1154v__unsafe_ptr=0;
  unsigned long long __temp1154v__unsafe_size=0;
  unsigned long long __temp1154v__unsafe_align=0;
  void* __temp1155v__unsafe_ptr=0;
  unsigned long long __temp1155v__unsafe_size=0;
  unsigned long long __temp1155v__unsafe_align=0;
  unsigned long long __temp1156v=0;
  void* __temp1157v__unsafe_ptr=0;
  unsigned long long __temp1157v__unsafe_size=0;
  unsigned long long __temp1157v__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp1159v=0;
  void* __temp1160v__=0;
  double __temp1161v=0;
  double __temp1162v=0;
  double __temp1163v=0;
  double __temp1164v__plane__x=0;
  double __temp1164v__plane__y=0;
  double __temp1164v__z=0;
  unsigned long long __temp1165v=0;
  void* __temp1166v__=0;
  double __temp1167v=0;
  double __temp1168v=0;
  double __temp1169v=0;
  double __temp1170v__plane__x=0;
  double __temp1170v__plane__y=0;
  double __temp1170v__z=0;
  void* __temp1171v__unsafe_ptr=0;
  unsigned long long __temp1171v__unsafe_size=0;
  unsigned long long __temp1171v__unsafe_align=0;
  void* plane__unsafe_ptr=0;
  unsigned long long plane__unsafe_size=0;
  unsigned long long plane__unsafe_align=0;
  double __temp1175v__x=0;
  double __temp1175v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1224v=0;
  int __temp1225v=0;
  int __temp_errcode=0;
  Point3D__temp_buffer__buffer__temp1152v(&__temp1154v__unsafe_ptr,&__temp1154v__unsafe_size,&__temp1154v__unsafe_align);
  __temp1155v__unsafe_ptr=__temp1154v__unsafe_ptr;
  __temp1155v__unsafe_size=__temp1154v__unsafe_size;
  __temp1155v__unsafe_align=__temp1154v__unsafe_align;
  __temp1156v=10;
  __temp_errcode=alloc__temp435v(&__temp1155v__unsafe_ptr,&__temp1155v__unsafe_size,&__temp1155v__unsafe_align,__temp1156v,&__temp1157v__unsafe_ptr,&__temp1157v__unsafe_size,&__temp1157v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1157v__unsafe_ptr;
  points__unsafe_size=__temp1157v__unsafe_size;
  points__unsafe_align=__temp1157v__unsafe_align;
  __temp1159v=0;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1159v,&__temp1160v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1161v=1.0;
  __temp1162v=2.0;
  __temp1163v=3.0;
  Point3D__temp1146v(__temp1161v,__temp1162v,__temp1163v,&__temp1164v__plane__x,&__temp1164v__plane__y,&__temp1164v__z);
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__,&__temp1164v__plane__x,8);
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__+8,&__temp1164v__plane__y,8);
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__+16,&__temp1164v__z,8);
  __temp1165v=1;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1165v,&__temp1166v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1167v=1.0;
  __temp1168v=2.0;
  __temp1169v=3.0;
  Point3D__temp1146v(__temp1167v,__temp1168v,__temp1169v,&__temp1170v__plane__x,&__temp1170v__plane__y,&__temp1170v__z);
  if(!__temp1166v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1166v__,&__temp1170v__plane__x,8);
  if(!__temp1166v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1166v__+8,&__temp1170v__plane__y,8);
  if(!__temp1166v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1166v__+16,&__temp1170v__z,8);
  __temp1171v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1171v__unsafe_size=points__unsafe_size;
  __temp1171v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1171v__unsafe_ptr;
  plane__unsafe_size=__temp1171v__unsafe_size;
  plane__unsafe_align=__temp1171v__unsafe_align;
  __temp_errcode=sum__temp1131v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1175v__x,&__temp1175v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1175v__x;
  sums__y=__temp1175v__y;
  print__temp351v(sums__x);
  print__temp351v(sums__y);
  
  __temp_failure:__temp1224v=0;
  neq__temp302v(__temp1157v__unsafe_size,__temp1224v,&__temp1225v);
  if(__temp1225v){
  __temp1157v__unsafe_size=0;
  free__temp429v(&__temp1157v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1151v();return 0;}