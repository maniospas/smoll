#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1108v="going to deallocate of size: ";
const char* const __temp578v="";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1091v(void** __temp1127v, unsigned long long* __temp1128v, unsigned long long* __temp1129v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1127v=unsafe_ptr;
  *__temp1128v=unsafe_size;
  *__temp1129v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1130v) {
  int value=0;
  *__temp1130v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1131v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1131v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1132v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1132v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1133v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1133v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1134v) {
  void* allocated=*__temp1134v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1134v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1135v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1135v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1136v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1136v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1137v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1137v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1138v, unsigned long long* __temp1139v, unsigned long long* __temp1140v, unsigned long long size, void** __temp1141v, unsigned long long* __temp1142v, unsigned long long* __temp1143v) {
  void* buffer__unsafe_ptr=*__temp1138v;
  unsigned long long buffer__unsafe_size=*__temp1139v;
  unsigned long long buffer__unsafe_align=*__temp1140v;
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
  *__temp1138v=buffer__unsafe_ptr;
  *__temp1139v=buffer__unsafe_size;
  *__temp1140v=buffer__unsafe_align;
  *__temp1141v=buffer__unsafe_ptr;
  *__temp1142v=buffer__unsafe_size;
  *__temp1143v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1144v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1144v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1145v) {
  *__temp1145v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1146v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1146v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp482v(void** __temp1147v, unsigned long long* __temp1148v, unsigned long long* __temp1149v, unsigned long long i, void** __temp1150v) {
  void* buffer__unsafe_ptr=*__temp1147v;
  unsigned long long buffer__unsafe_size=*__temp1148v;
  unsigned long long buffer__unsafe_align=*__temp1149v;
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
  *__temp1147v=buffer__unsafe_ptr;
  *__temp1148v=buffer__unsafe_size;
  *__temp1149v=buffer__unsafe_align;
  *__temp1150v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1151v) {
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
  *__temp1151v=__temp489v__;
  
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

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1152v) {
  *__temp1152v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1090v(void** __temp1158v, unsigned long long* __temp1159v, unsigned long long* __temp1160v) {
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
  unsigned long long __temp1101v=0;
  void* __temp1102v__=0;
  double __temp1103v=0;
  unsigned long long __temp1104v=0;
  void* __temp1105v__=0;
  double __temp1106v__value=0;
  unsigned long long __temp1156v=0;
  int __temp1157v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1091v(&__temp1093v__unsafe_ptr,&__temp1093v__unsafe_size,&__temp1093v__unsafe_align);
  __temp1094v__unsafe_ptr=__temp1093v__unsafe_ptr;
  __temp1094v__unsafe_size=__temp1093v__unsafe_size;
  __temp1094v__unsafe_align=__temp1093v__unsafe_align;
  __temp1095v=2;
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
  __temp1101v=1;
  __temp_errcode=mutget__temp482v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1101v,&__temp1102v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1103v=2.0;
  if(!__temp1102v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1102v__,&__temp1103v,8);
  __temp1104v=1;
  __temp_errcode=get__temp486v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1104v,&__temp1105v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1105v__){
  goto __temp_failure;
  }
  memcpy(&__temp1106v__value,(char*)__temp1105v__,8);
  print__temp348v(__temp1106v__value);
  *__temp1158v=x__unsafe_ptr;
  *__temp1159v=x__unsafe_size;
  *__temp1160v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1112v(void** __temp1169v, unsigned long long* __temp1170v, unsigned long long* __temp1171v, void** __temp1172v, unsigned long long* __temp1173v, unsigned long long* __temp1174v, void** __temp1175v, unsigned long long* __temp1176v, unsigned long long* __temp1177v) {
  void* __temp1113v__unsafe_ptr=0;
  unsigned long long __temp1113v__unsafe_size=0;
  unsigned long long __temp1113v__unsafe_align=0;
  void* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  void* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  void* __temp1115v__unsafe_ptr=0;
  unsigned long long __temp1115v__unsafe_size=0;
  unsigned long long __temp1115v__unsafe_align=0;
  void* __temp1116v__unsafe_ptr=0;
  unsigned long long __temp1116v__unsafe_size=0;
  unsigned long long __temp1116v__unsafe_align=0;
  unsigned long long __temp1117v=0;
  void* __temp1118v__unsafe_ptr=0;
  unsigned long long __temp1118v__unsafe_size=0;
  unsigned long long __temp1118v__unsafe_align=0;
  void* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1162v=0;
  int __temp1163v=0;
  unsigned long long __temp1167v=0;
  int __temp1168v=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp1090v(&__temp1113v__unsafe_ptr,&__temp1113v__unsafe_size,&__temp1113v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1113v__unsafe_ptr;
  t__unsafe_size=__temp1113v__unsafe_size;
  t__unsafe_align=__temp1113v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1091v(&__temp1115v__unsafe_ptr,&__temp1115v__unsafe_size,&__temp1115v__unsafe_align);
  __temp1116v__unsafe_ptr=__temp1115v__unsafe_ptr;
  __temp1116v__unsafe_size=__temp1115v__unsafe_size;
  __temp1116v__unsafe_align=__temp1115v__unsafe_align;
  __temp1117v=3;
  __temp_errcode=alloc__temp437v(&__temp1116v__unsafe_ptr,&__temp1116v__unsafe_size,&__temp1116v__unsafe_align,__temp1117v,&__temp1118v__unsafe_ptr,&__temp1118v__unsafe_size,&__temp1118v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1118v__unsafe_ptr;
  k__unsafe_size=__temp1118v__unsafe_size;
  k__unsafe_align=__temp1118v__unsafe_align;
  *__temp1169v=t__unsafe_ptr;
  *__temp1170v=t__unsafe_size;
  *__temp1171v=t__unsafe_align;
  *__temp1172v=j__unsafe_ptr;
  *__temp1173v=j__unsafe_size;
  *__temp1174v=j__unsafe_align;
  *__temp1175v=k__unsafe_ptr;
  *__temp1176v=k__unsafe_size;
  *__temp1177v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1120v() {
  void* __temp1121v__t__unsafe_ptr=0;
  unsigned long long __temp1121v__t__unsafe_size=0;
  unsigned long long __temp1121v__t__unsafe_align=0;
  void* __temp1121v__j__unsafe_ptr=0;
  unsigned long long __temp1121v__j__unsafe_size=0;
  unsigned long long __temp1121v__j__unsafe_align=0;
  void* __temp1121v__k__unsafe_ptr=0;
  unsigned long long __temp1121v__k__unsafe_size=0;
  unsigned long long __temp1121v__k__unsafe_align=0;
  void* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  void* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  void* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1123v=0;
  void* __temp1124v__=0;
  double __temp1125v__value=0;
  unsigned long long __temp1181v=0;
  int __temp1182v=0;
  unsigned long long __temp1183v=0;
  int __temp1184v=0;
  int __temp_errcode=0;
  __temp_errcode=test2__temp1112v(&__temp1121v__t__unsafe_ptr,&__temp1121v__t__unsafe_size,&__temp1121v__t__unsafe_align,&__temp1121v__j__unsafe_ptr,&__temp1121v__j__unsafe_size,&__temp1121v__j__unsafe_align,&__temp1121v__k__unsafe_ptr,&__temp1121v__k__unsafe_size,&__temp1121v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1121v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1121v__t__unsafe_size;
  t__t__unsafe_align=__temp1121v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1121v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1121v__j__unsafe_size;
  t__j__unsafe_align=__temp1121v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1121v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1121v__k__unsafe_size;
  t__k__unsafe_align=__temp1121v__k__unsafe_align;
  __temp1123v=1;
  __temp_errcode=get__temp486v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1123v,&__temp1124v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1124v__){
  goto __temp_failure;
  }
  memcpy(&__temp1125v__value,(char*)__temp1124v__,8);
  print__temp348v(__temp1125v__value);
  
  __temp_failure:__temp1183v=0;
  neq__temp301v(__temp1121v__k__unsafe_size,__temp1183v,&__temp1184v);
  if(__temp1184v){
  __temp1121v__k__unsafe_size=0;
  free__temp426v(&__temp1121v__k__unsafe_ptr);
  }
  print__temp346v(__temp1108v,__temp578v);
  len__temp490v(__temp1121v__t__unsafe_ptr,__temp1121v__t__unsafe_size,__temp1121v__t__unsafe_align,&__temp1121v__t__unsafe_size);
  print__temp356v(__temp1121v__t__unsafe_size);
  __temp1181v=0;
  neq__temp301v(__temp1121v__t__unsafe_size,__temp1181v,&__temp1182v);
  if(__temp1182v){
  __temp1121v__t__unsafe_size=0;
  free__temp426v(&__temp1121v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1120v();return 0;}