#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1122v(void** __temp1139v, unsigned long long* __temp1140v, unsigned long long* __temp1141v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1139v=unsafe_ptr;
  *__temp1140v=unsafe_size;
  *__temp1141v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1142v) {
  int value=0;
  *__temp1142v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1143v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1143v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1144v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1144v=__temp86v__;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1145v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1145v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1146v) {
  void* allocated=*__temp1146v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1146v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1147v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1147v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1148v) {
  *__temp1148v=to;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1149v) {
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
  *__temp1149v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1150v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1150v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int resize__temp449v(void** __temp1151v, unsigned long long* __temp1152v, unsigned long long* __temp1153v, unsigned long long size, void** __temp1154v, unsigned long long* __temp1155v, unsigned long long* __temp1156v) {
  void* buffer__unsafe_ptr=*__temp1151v;
  unsigned long long buffer__unsafe_size=*__temp1152v;
  unsigned long long buffer__unsafe_align=*__temp1153v;
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

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1158v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1158v=__temp429v__;
}

static inline __attribute__((always_inline)) int mutget__temp476v(void** __temp1159v, unsigned long long* __temp1160v, unsigned long long* __temp1161v, unsigned long long i, void** __temp1162v) {
  void* buffer__unsafe_ptr=*__temp1159v;
  unsigned long long buffer__unsafe_size=*__temp1160v;
  unsigned long long buffer__unsafe_align=*__temp1161v;
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
  *__temp1159v=buffer__unsafe_ptr;
  *__temp1160v=buffer__unsafe_size;
  *__temp1161v=buffer__unsafe_align;
  *__temp1162v=__temp479v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1163v) {
  *__temp1163v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1164v) {
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
  *__temp1164v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1121v() {
  void* __temp1124v__unsafe_ptr=0;
  unsigned long long __temp1124v__unsafe_size=0;
  unsigned long long __temp1124v__unsafe_align=0;
  void* __temp1125v__unsafe_ptr=0;
  unsigned long long __temp1125v__unsafe_size=0;
  unsigned long long __temp1125v__unsafe_align=0;
  void* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp1126v=0;
  void* __temp1127v__unsafe_ptr=0;
  unsigned long long __temp1127v__unsafe_size=0;
  unsigned long long __temp1127v__unsafe_align=0;
  void* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp1128v=0;
  void* __temp1129v__=0;
  double __temp1130v=0;
  unsigned long long __temp1131v__=0;
  unsigned long long __temp1133v__=0;
  unsigned long long __temp1135v=0;
  void* __temp1136v__=0;
  double __temp1137v__value=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1122v(&__temp1124v__unsafe_ptr,&__temp1124v__unsafe_size,&__temp1124v__unsafe_align);
  __temp1125v__unsafe_ptr=__temp1124v__unsafe_ptr;
  __temp1125v__unsafe_size=__temp1124v__unsafe_size;
  __temp1125v__unsafe_align=__temp1124v__unsafe_align;
  buf1__unsafe_ptr=__temp1125v__unsafe_ptr;
  buf1__unsafe_size=__temp1125v__unsafe_size;
  buf1__unsafe_align=__temp1125v__unsafe_align;
  __temp1126v=10;
  __temp_errcode=resize__temp449v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1126v,&__temp1127v__unsafe_ptr,&__temp1127v__unsafe_size,&__temp1127v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1128v=0;
  __temp_errcode=mutget__temp476v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1128v,&__temp1129v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1130v=1.0;
  if(!__temp1129v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1129v__,&__temp1130v,8);
  len__temp484v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1131v__);
  print__temp356v(__temp1131v__);
  len__temp484v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1133v__);
  print__temp356v(__temp1133v__);
  __temp1135v=0;
  __temp_errcode=get__temp480v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1135v,&__temp1136v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1136v__){
  goto __temp_failure;
  }
  memcpy(&__temp1137v__value,(char*)__temp1136v__,8);
  print__temp348v(__temp1137v__value);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1121v();return 0;}