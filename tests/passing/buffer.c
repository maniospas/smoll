#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1122v(void** __temp1151v, unsigned long long* __temp1152v, unsigned long long* __temp1153v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1151v=unsafe_ptr;
  *__temp1152v=unsafe_size;
  *__temp1153v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1154v) {
  int value=0;
  *__temp1154v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1155v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1155v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1156v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1156v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1157v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1157v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1158v) {
  void* allocated=*__temp1158v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1158v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1159v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1159v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1160v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1160v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1161v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1161v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1162v, unsigned long long* __temp1163v, unsigned long long* __temp1164v, unsigned long long size, void** __temp1165v, unsigned long long* __temp1166v, unsigned long long* __temp1167v) {
  void* buffer__unsafe_ptr=*__temp1162v;
  unsigned long long buffer__unsafe_size=*__temp1163v;
  unsigned long long buffer__unsafe_align=*__temp1164v;
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
  *__temp1162v=buffer__unsafe_ptr;
  *__temp1163v=buffer__unsafe_size;
  *__temp1164v=buffer__unsafe_align;
  *__temp1165v=buffer__unsafe_ptr;
  *__temp1166v=buffer__unsafe_size;
  *__temp1167v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1168v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1168v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1169v) {
  *__temp1169v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1170v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1170v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp476v(void** __temp1171v, unsigned long long* __temp1172v, unsigned long long* __temp1173v, unsigned long long i, void** __temp1174v) {
  void* buffer__unsafe_ptr=*__temp1171v;
  unsigned long long buffer__unsafe_size=*__temp1172v;
  unsigned long long buffer__unsafe_align=*__temp1173v;
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
  *__temp1171v=buffer__unsafe_ptr;
  *__temp1172v=buffer__unsafe_size;
  *__temp1173v=buffer__unsafe_align;
  *__temp1174v=__temp479v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1121v(void** __temp1181v, unsigned long long* __temp1182v, unsigned long long* __temp1183v) {
  void* __temp1124v__unsafe_ptr=0;
  unsigned long long __temp1124v__unsafe_size=0;
  unsigned long long __temp1124v__unsafe_align=0;
  void* __temp1125v__unsafe_ptr=0;
  unsigned long long __temp1125v__unsafe_size=0;
  unsigned long long __temp1125v__unsafe_align=0;
  unsigned long long __temp1126v=0;
  void* __temp1127v__unsafe_ptr=0;
  unsigned long long __temp1127v__unsafe_size=0;
  unsigned long long __temp1127v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1129v=0;
  void* __temp1130v__=0;
  double __temp1131v=0;
  void* __temp1132v__unsafe_ptr=0;
  unsigned long long __temp1132v__unsafe_size=0;
  unsigned long long __temp1132v__unsafe_align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1178v=0;
  int __temp1179v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1122v(&__temp1124v__unsafe_ptr,&__temp1124v__unsafe_size,&__temp1124v__unsafe_align);
  __temp1125v__unsafe_ptr=__temp1124v__unsafe_ptr;
  __temp1125v__unsafe_size=__temp1124v__unsafe_size;
  __temp1125v__unsafe_align=__temp1124v__unsafe_align;
  __temp1126v=1;
  __temp_errcode=alloc__temp432v(&__temp1125v__unsafe_ptr,&__temp1125v__unsafe_size,&__temp1125v__unsafe_align,__temp1126v,&__temp1127v__unsafe_ptr,&__temp1127v__unsafe_size,&__temp1127v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1127v__unsafe_ptr;
  x__unsafe_size=__temp1127v__unsafe_size;
  x__unsafe_align=__temp1127v__unsafe_align;
  __temp1129v=0;
  __temp_errcode=mutget__temp476v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1129v,&__temp1130v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1131v=1.0;
  if(!__temp1130v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1130v__,&__temp1131v,8);
  float__temp_buffer__buffer__temp1122v(&__temp1132v__unsafe_ptr,&__temp1132v__unsafe_size,&__temp1132v__unsafe_align);
  y__unsafe_ptr=__temp1132v__unsafe_ptr;
  y__unsafe_size=__temp1132v__unsafe_size;
  y__unsafe_align=__temp1132v__unsafe_align;
  *__temp1181v=x__unsafe_ptr;
  *__temp1182v=x__unsafe_size;
  *__temp1183v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1184v) {
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
  *__temp1184v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1185v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1185v=z;
}

static inline __attribute__((always_inline)) int resize__temp449v(void** __temp1186v, unsigned long long* __temp1187v, unsigned long long* __temp1188v, unsigned long long size, void** __temp1189v, unsigned long long* __temp1190v, unsigned long long* __temp1191v) {
  void* buffer__unsafe_ptr=*__temp1186v;
  unsigned long long buffer__unsafe_size=*__temp1187v;
  unsigned long long buffer__unsafe_align=*__temp1188v;
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

static inline __attribute__((always_inline)) int mutlast__temp469v(void** __temp1193v, unsigned long long* __temp1194v, unsigned long long* __temp1195v, void** __temp1196v) {
  void* buffer__unsafe_ptr=*__temp1193v;
  unsigned long long buffer__unsafe_size=*__temp1194v;
  unsigned long long buffer__unsafe_align=*__temp1195v;
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
  *__temp1193v=buffer__unsafe_ptr;
  *__temp1194v=buffer__unsafe_size;
  *__temp1195v=buffer__unsafe_align;
  *__temp1196v=__temp475v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1133v(void** __temp1198v, unsigned long long* __temp1199v, unsigned long long* __temp1200v) {
  void* x__unsafe_ptr=*__temp1198v;
  unsigned long long x__unsafe_size=*__temp1199v;
  unsigned long long x__unsafe_align=*__temp1200v;
  unsigned long long __temp1134v=0;
  void* __temp1135v__unsafe_ptr=0;
  unsigned long long __temp1135v__unsafe_size=0;
  unsigned long long __temp1135v__unsafe_align=0;
  void* __temp1136v__=0;
  double __temp1137v=0;
  void* __temp1138v=0;
  int __temp_errcode=0;
  __temp1134v=2;
  __temp_errcode=resize__temp449v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1134v,&__temp1135v__unsafe_ptr,&__temp1135v__unsafe_size,&__temp1135v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp469v(&__temp1135v__unsafe_ptr,&__temp1135v__unsafe_size,&__temp1135v__unsafe_align,&__temp1136v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1137v=2.0;
  if(!__temp1136v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1136v__,&__temp1137v,8);
  __temp1138v=__temp1136v__;
  *__temp1198v=x__unsafe_ptr;
  *__temp1199v=x__unsafe_size;
  *__temp1200v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1201v) {
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
  *__temp1201v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1202v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1202v=__temp62v__;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1203v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1203v=z;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1139v() {
  void* __temp1140v__unsafe_ptr=0;
  unsigned long long __temp1140v__unsafe_size=0;
  unsigned long long __temp1140v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1143v=0;
  void* __temp1144v__=0;
  double __temp1145v__number=0;
  unsigned long long __temp1146v=0;
  void* __temp1147v__=0;
  double __temp1148v__number=0;
  double __temp1149v__=0;
  unsigned long long __temp1205v=0;
  int __temp1206v=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp1121v(&__temp1140v__unsafe_ptr,&__temp1140v__unsafe_size,&__temp1140v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1140v__unsafe_ptr;
  x__unsafe_size=__temp1140v__unsafe_size;
  x__unsafe_align=__temp1140v__unsafe_align;
  __temp_errcode=test2__temp1133v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1143v=0;
  __temp_errcode=get__temp480v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1143v,&__temp1144v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1144v__){
  goto __temp_failure;
  }
  memcpy(&__temp1145v__number,(char*)__temp1144v__,8);
  __temp1146v=1;
  __temp_errcode=get__temp480v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1146v,&__temp1147v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1147v__){
  goto __temp_failure;
  }
  memcpy(&__temp1148v__number,(char*)__temp1147v__,8);
  add__temp87v(__temp1145v__number,__temp1148v__number,&__temp1149v__);
  print__temp348v(__temp1149v__);
  
  __temp_failure:__temp1205v=0;
  neq__temp301v(__temp1140v__unsafe_size,__temp1205v,&__temp1206v);
  if(__temp1206v){
  __temp1140v__unsafe_size=0;
  free__temp426v(&__temp1140v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1139v();return 0;}