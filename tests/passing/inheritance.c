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
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1152v(void** __temp1184v, unsigned long long* __temp1185v, unsigned long long* __temp1186v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  *__temp1184v=unsafe_ptr;
  *__temp1185v=unsafe_size;
  *__temp1186v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1187v) {
  int value=0;
  *__temp1187v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1188v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1188v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1189v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1189v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1190v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1190v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1191v) {
  void* allocated=*__temp1191v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1191v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1192v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1192v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1193v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1193v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1194v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1194v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1195v, unsigned long long* __temp1196v, unsigned long long* __temp1197v, unsigned long long size, void** __temp1198v, unsigned long long* __temp1199v, unsigned long long* __temp1200v) {
  void* buffer__unsafe_ptr=*__temp1195v;
  unsigned long long buffer__unsafe_size=*__temp1196v;
  unsigned long long buffer__unsafe_align=*__temp1197v;
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
  *__temp1195v=buffer__unsafe_ptr;
  *__temp1196v=buffer__unsafe_size;
  *__temp1197v=buffer__unsafe_align;
  *__temp1198v=buffer__unsafe_ptr;
  *__temp1199v=buffer__unsafe_size;
  *__temp1200v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1201v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1201v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1202v) {
  *__temp1202v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1203v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1203v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1204v, unsigned long long* __temp1205v, unsigned long long* __temp1206v, unsigned long long i, void** __temp1207v) {
  void* buffer__unsafe_ptr=*__temp1204v;
  unsigned long long buffer__unsafe_size=*__temp1205v;
  unsigned long long buffer__unsafe_align=*__temp1206v;
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
  *__temp1204v=buffer__unsafe_ptr;
  *__temp1205v=buffer__unsafe_size;
  *__temp1206v=buffer__unsafe_align;
  *__temp1207v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1128v(double x, double y, double* __temp1208v, double* __temp1209v) {
  *__temp1208v=x;
  *__temp1209v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1148v(double x, double y, double z, double* __temp1210v, double* __temp1211v, double* __temp1212v) {
  double __temp1149v__x=0;
  double __temp1149v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1128v(x,y,&__temp1149v__x,&__temp1149v__y);
  plane__x=__temp1149v__x;
  plane__y=__temp1149v__y;
  *__temp1210v=plane__x;
  *__temp1211v=plane__y;
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1213v) {
  *__temp1213v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1214v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1214v=z;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1215v) {
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
  *__temp1215v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1216v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1216v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1217v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1217v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1218v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1218v=z;
}

static inline __attribute__((always_inline)) int sum__temp1131v(void** __temp1219v, unsigned long long* __temp1220v, unsigned long long* __temp1221v, double* __temp1222v, double* __temp1223v) {
  void* v__unsafe_ptr=*__temp1219v;
  unsigned long long v__unsafe_size=*__temp1220v;
  unsigned long long v__unsafe_align=*__temp1221v;
  double __temp1132v=0;
  double __temp1133v=0;
  double x=0;
  double __temp1134v=0;
  double __temp1135v=0;
  double y=0;
  unsigned long long __temp1136v=0;
  unsigned long long __temp1137v=0;
  unsigned long long i=0;
  unsigned long long __temp1138v__=0;
  int __temp1139v__=0;
  void* __temp1140v__=0;
  double __temp1141v__x=0;
  double __temp1141v__y=0;
  double __temp1142v__=0;
  void* __temp1143v__=0;
  double __temp1144v__x=0;
  double __temp1144v__y=0;
  double __temp1145v__=0;
  unsigned long long __temp1146v=0;
  unsigned long long __temp1147v__=0;
  int __temp_errcode=0;
  __temp1132v=0.0;
  __temp1133v=__temp1132v;
  x=__temp1133v;
  __temp1134v=0.0;
  __temp1135v=__temp1134v;
  y=__temp1135v;
  __temp1136v=0;
  __temp1137v=__temp1136v;
  i=__temp1137v;
  while(1){
  len__temp487v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1138v__);
  lt__temp182v(i,__temp1138v__,&__temp1139v__);
  if(!__temp1139v__)break;
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
  __temp1146v=1;
  add__temp110v(i,__temp1146v,&__temp1147v__);
  i=__temp1147v__;
  }
  *__temp1219v=v__unsafe_ptr;
  *__temp1220v=v__unsafe_size;
  *__temp1221v=v__unsafe_align;
  *__temp1222v=x;
  *__temp1223v=y;
  
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
  double __temp1164v=0;
  double __temp1165v=0;
  double __temp1166v=0;
  double __temp1167v__plane__x=0;
  double __temp1167v__plane__y=0;
  double __temp1167v__z=0;
  unsigned long long __temp1168v=0;
  void* __temp1169v__=0;
  double __temp1170v=0;
  double __temp1171v=0;
  double __temp1172v=0;
  double __temp1173v=0;
  double __temp1174v=0;
  double __temp1175v=0;
  double __temp1176v__plane__x=0;
  double __temp1176v__plane__y=0;
  double __temp1176v__z=0;
  void* __temp1177v__unsafe_ptr=0;
  unsigned long long __temp1177v__unsafe_size=0;
  unsigned long long __temp1177v__unsafe_align=0;
  double __temp1181v__x=0;
  double __temp1181v__y=0;
  double sums__x=0;
  double sums__y=0;
  unsigned long long __temp1227v=0;
  int __temp1228v=0;
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
  __temp1162v=__temp1161v;
  __temp1163v=2.0;
  __temp1164v=__temp1163v;
  __temp1165v=3.0;
  __temp1166v=__temp1165v;
  Point3D__temp1148v(__temp1162v,__temp1164v,__temp1166v,&__temp1167v__plane__x,&__temp1167v__plane__y,&__temp1167v__z);
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__,&__temp1167v__plane__x,8);
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__+8,&__temp1167v__plane__y,8);
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__+16,&__temp1167v__z,8);
  __temp1168v=1;
  __temp_errcode=mutget__temp479v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1168v,&__temp1169v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1170v=1.0;
  __temp1171v=__temp1170v;
  __temp1172v=2.0;
  __temp1173v=__temp1172v;
  __temp1174v=3.0;
  __temp1175v=__temp1174v;
  Point3D__temp1148v(__temp1171v,__temp1173v,__temp1175v,&__temp1176v__plane__x,&__temp1176v__plane__y,&__temp1176v__z);
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__,&__temp1176v__plane__x,8);
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__+8,&__temp1176v__plane__y,8);
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__+16,&__temp1176v__z,8);
  __temp1177v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp1177v__unsafe_size=points__unsafe_size;
  __temp1177v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1131v(&__temp1177v__unsafe_ptr,&__temp1177v__unsafe_size,&__temp1177v__unsafe_align,&__temp1181v__x,&__temp1181v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1181v__x;
  sums__y=__temp1181v__y;
  print__temp351v(sums__x);
  print__temp351v(sums__y);
  
  __temp_failure:__temp1227v=0;
  neq__temp302v(__temp1157v__unsafe_size,__temp1227v,&__temp1228v);
  if(__temp1228v){
  __temp1157v__unsafe_size=0;
  free__temp429v(&__temp1157v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1151v();return 0;}