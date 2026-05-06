#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1139v="going to deallocate of size: ";
const char* const __temp573v="";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1122v(void** __temp1158v, unsigned long long* __temp1159v, unsigned long long* __temp1160v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1158v=unsafe_ptr;
  *__temp1159v=unsafe_size;
  *__temp1160v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1161v) {
  int value=0;
  *__temp1161v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1162v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1162v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1163v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1163v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1164v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1164v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1165v) {
  void* allocated=*__temp1165v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1165v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1166v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1166v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1167v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1167v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1168v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1168v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp432v(void** __temp1169v, unsigned long long* __temp1170v, unsigned long long* __temp1171v, unsigned long long size, void** __temp1172v, unsigned long long* __temp1173v, unsigned long long* __temp1174v) {
  void* buffer__unsafe_ptr=*__temp1169v;
  unsigned long long buffer__unsafe_size=*__temp1170v;
  unsigned long long buffer__unsafe_align=*__temp1171v;
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
  *__temp1169v=buffer__unsafe_ptr;
  *__temp1170v=buffer__unsafe_size;
  *__temp1171v=buffer__unsafe_align;
  *__temp1172v=buffer__unsafe_ptr;
  *__temp1173v=buffer__unsafe_size;
  *__temp1174v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1175v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1175v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1176v) {
  *__temp1176v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1177v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1177v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp476v(void** __temp1178v, unsigned long long* __temp1179v, unsigned long long* __temp1180v, unsigned long long i, void** __temp1181v) {
  void* buffer__unsafe_ptr=*__temp1178v;
  unsigned long long buffer__unsafe_size=*__temp1179v;
  unsigned long long buffer__unsafe_align=*__temp1180v;
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
  *__temp1178v=buffer__unsafe_ptr;
  *__temp1179v=buffer__unsafe_size;
  *__temp1180v=buffer__unsafe_align;
  *__temp1181v=__temp479v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1182v) {
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
  *__temp1182v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp346v(const char* value, const char* endl) {
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1183v) {
  *__temp1183v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1121v(void** __temp1189v, unsigned long long* __temp1190v, unsigned long long* __temp1191v) {
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
  unsigned long long __temp1132v=0;
  void* __temp1133v__=0;
  double __temp1134v=0;
  unsigned long long __temp1135v=0;
  void* __temp1136v__=0;
  double __temp1137v__number=0;
  unsigned long long __temp1187v=0;
  int __temp1188v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1122v(&__temp1124v__unsafe_ptr,&__temp1124v__unsafe_size,&__temp1124v__unsafe_align);
  __temp1125v__unsafe_ptr=__temp1124v__unsafe_ptr;
  __temp1125v__unsafe_size=__temp1124v__unsafe_size;
  __temp1125v__unsafe_align=__temp1124v__unsafe_align;
  __temp1126v=2;
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
  __temp1132v=1;
  __temp_errcode=mutget__temp476v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1132v,&__temp1133v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1134v=2.0;
  if(!__temp1133v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1133v__,&__temp1134v,8);
  __temp1135v=1;
  __temp_errcode=get__temp480v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1135v,&__temp1136v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1136v__){
  goto __temp_failure;
  }
  memcpy(&__temp1137v__number,(char*)__temp1136v__,8);
  print__temp348v(__temp1137v__number);
  *__temp1189v=x__unsafe_ptr;
  *__temp1190v=x__unsafe_size;
  *__temp1191v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1143v(void** __temp1200v, unsigned long long* __temp1201v, unsigned long long* __temp1202v, void** __temp1203v, unsigned long long* __temp1204v, unsigned long long* __temp1205v, void** __temp1206v, unsigned long long* __temp1207v, unsigned long long* __temp1208v) {
  void* __temp1144v__unsafe_ptr=0;
  unsigned long long __temp1144v__unsafe_size=0;
  unsigned long long __temp1144v__unsafe_align=0;
  void* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  void* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  void* __temp1146v__unsafe_ptr=0;
  unsigned long long __temp1146v__unsafe_size=0;
  unsigned long long __temp1146v__unsafe_align=0;
  void* __temp1147v__unsafe_ptr=0;
  unsigned long long __temp1147v__unsafe_size=0;
  unsigned long long __temp1147v__unsafe_align=0;
  unsigned long long __temp1148v=0;
  void* __temp1149v__unsafe_ptr=0;
  unsigned long long __temp1149v__unsafe_size=0;
  unsigned long long __temp1149v__unsafe_align=0;
  void* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1193v=0;
  int __temp1194v=0;
  unsigned long long __temp1198v=0;
  int __temp1199v=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp1121v(&__temp1144v__unsafe_ptr,&__temp1144v__unsafe_size,&__temp1144v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1144v__unsafe_ptr;
  t__unsafe_size=__temp1144v__unsafe_size;
  t__unsafe_align=__temp1144v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1122v(&__temp1146v__unsafe_ptr,&__temp1146v__unsafe_size,&__temp1146v__unsafe_align);
  __temp1147v__unsafe_ptr=__temp1146v__unsafe_ptr;
  __temp1147v__unsafe_size=__temp1146v__unsafe_size;
  __temp1147v__unsafe_align=__temp1146v__unsafe_align;
  __temp1148v=3;
  __temp_errcode=alloc__temp432v(&__temp1147v__unsafe_ptr,&__temp1147v__unsafe_size,&__temp1147v__unsafe_align,__temp1148v,&__temp1149v__unsafe_ptr,&__temp1149v__unsafe_size,&__temp1149v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1149v__unsafe_ptr;
  k__unsafe_size=__temp1149v__unsafe_size;
  k__unsafe_align=__temp1149v__unsafe_align;
  *__temp1200v=t__unsafe_ptr;
  *__temp1201v=t__unsafe_size;
  *__temp1202v=t__unsafe_align;
  *__temp1203v=j__unsafe_ptr;
  *__temp1204v=j__unsafe_size;
  *__temp1205v=j__unsafe_align;
  *__temp1206v=k__unsafe_ptr;
  *__temp1207v=k__unsafe_size;
  *__temp1208v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1151v() {
  void* __temp1152v__t__unsafe_ptr=0;
  unsigned long long __temp1152v__t__unsafe_size=0;
  unsigned long long __temp1152v__t__unsafe_align=0;
  void* __temp1152v__j__unsafe_ptr=0;
  unsigned long long __temp1152v__j__unsafe_size=0;
  unsigned long long __temp1152v__j__unsafe_align=0;
  void* __temp1152v__k__unsafe_ptr=0;
  unsigned long long __temp1152v__k__unsafe_size=0;
  unsigned long long __temp1152v__k__unsafe_align=0;
  void* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  void* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  void* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1154v=0;
  void* __temp1155v__=0;
  double __temp1156v__number=0;
  unsigned long long __temp1212v=0;
  int __temp1213v=0;
  unsigned long long __temp1214v=0;
  int __temp1215v=0;
  int __temp_errcode=0;
  __temp_errcode=test2__temp1143v(&__temp1152v__t__unsafe_ptr,&__temp1152v__t__unsafe_size,&__temp1152v__t__unsafe_align,&__temp1152v__j__unsafe_ptr,&__temp1152v__j__unsafe_size,&__temp1152v__j__unsafe_align,&__temp1152v__k__unsafe_ptr,&__temp1152v__k__unsafe_size,&__temp1152v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1152v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1152v__t__unsafe_size;
  t__t__unsafe_align=__temp1152v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1152v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1152v__j__unsafe_size;
  t__j__unsafe_align=__temp1152v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1152v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1152v__k__unsafe_size;
  t__k__unsafe_align=__temp1152v__k__unsafe_align;
  __temp1154v=1;
  __temp_errcode=get__temp480v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1154v,&__temp1155v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1155v__){
  goto __temp_failure;
  }
  memcpy(&__temp1156v__number,(char*)__temp1155v__,8);
  print__temp348v(__temp1156v__number);
  
  __temp_failure:__temp1214v=0;
  neq__temp301v(__temp1152v__k__unsafe_size,__temp1214v,&__temp1215v);
  if(__temp1215v){
  __temp1152v__k__unsafe_size=0;
  free__temp426v(&__temp1152v__k__unsafe_ptr);
  }
  print__temp346v(__temp1139v,__temp573v);
  len__temp484v(__temp1152v__t__unsafe_ptr,__temp1152v__t__unsafe_size,__temp1152v__t__unsafe_align,&__temp1152v__t__unsafe_size);
  print__temp356v(__temp1152v__t__unsafe_size);
  __temp1212v=0;
  neq__temp301v(__temp1152v__t__unsafe_size,__temp1212v,&__temp1213v);
  if(__temp1213v){
  __temp1152v__t__unsafe_size=0;
  free__temp426v(&__temp1152v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1151v();return 0;}