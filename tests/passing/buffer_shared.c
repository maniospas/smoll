#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1091v(void** __temp1109v, unsigned long long* __temp1110v, unsigned long long* __temp1111v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1109v=unsafe_ptr;
  *__temp1110v=unsafe_size;
  *__temp1111v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1112v) {
  int value=0;
  *__temp1112v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1113v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1113v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1114v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1114v=__temp86v__;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1115v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1115v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1116v) {
  void* allocated=*__temp1116v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1116v=allocated;
}

static inline __attribute__((always_inline)) void free__temp432v(void** __temp1117v, unsigned long long* __temp1118v, unsigned long long* __temp1119v, void** __temp1120v, unsigned long long* __temp1121v, unsigned long long* __temp1122v) {
  void* buffer__unsafe_ptr=*__temp1117v;
  unsigned long long buffer__unsafe_size=*__temp1118v;
  unsigned long long buffer__unsafe_align=*__temp1119v;
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
  *__temp1117v=buffer__unsafe_ptr;
  *__temp1118v=buffer__unsafe_size;
  *__temp1119v=buffer__unsafe_align;
  *__temp1120v=buffer__unsafe_ptr;
  *__temp1121v=buffer__unsafe_size;
  *__temp1122v=buffer__unsafe_align;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1123v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1123v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1124v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1124v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1125v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1125v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1126v, unsigned long long* __temp1127v, unsigned long long* __temp1128v, unsigned long long size, void** __temp1129v, unsigned long long* __temp1130v, unsigned long long* __temp1131v) {
  void* buffer__unsafe_ptr=*__temp1126v;
  unsigned long long buffer__unsafe_size=*__temp1127v;
  unsigned long long buffer__unsafe_align=*__temp1128v;
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
  *__temp1126v=buffer__unsafe_ptr;
  *__temp1127v=buffer__unsafe_size;
  *__temp1128v=buffer__unsafe_align;
  *__temp1129v=buffer__unsafe_ptr;
  *__temp1130v=buffer__unsafe_size;
  *__temp1131v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1132v) {
  *__temp1132v=to;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1133v) {
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
  *__temp1133v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1134v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1134v=z;
}

int resize__temp454v(void** __temp1139v, unsigned long long* __temp1140v, unsigned long long* __temp1141v, unsigned long long size, void** __temp1142v, unsigned long long* __temp1143v, unsigned long long* __temp1144v) {
  void* buffer__unsafe_ptr=*__temp1139v;
  unsigned long long buffer__unsafe_size=*__temp1140v;
  unsigned long long buffer__unsafe_align=*__temp1141v;
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
  unsigned long long __temp1137v=0;
  int __temp1138v=0;
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
  *__temp1139v=buffer__unsafe_ptr;
  *__temp1140v=buffer__unsafe_size;
  *__temp1141v=buffer__unsafe_align;
  *__temp1142v=buffer__unsafe_ptr;
  *__temp1143v=buffer__unsafe_size;
  *__temp1144v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1145v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1145v=z;
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

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1151v) {
  *__temp1151v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1152v) {
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
  *__temp1152v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1090v() {
  void* __temp1093v__unsafe_ptr=0;
  unsigned long long __temp1093v__unsafe_size=0;
  unsigned long long __temp1093v__unsafe_align=0;
  void* __temp1094v__unsafe_ptr=0;
  unsigned long long __temp1094v__unsafe_size=0;
  unsigned long long __temp1094v__unsafe_align=0;
  void* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp1095v=0;
  void* __temp1096v__unsafe_ptr=0;
  unsigned long long __temp1096v__unsafe_size=0;
  unsigned long long __temp1096v__unsafe_align=0;
  void* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp1098v=0;
  void* __temp1099v__=0;
  double __temp1100v=0;
  unsigned long long __temp1101v__=0;
  unsigned long long __temp1103v__=0;
  unsigned long long __temp1105v=0;
  void* __temp1106v__=0;
  double __temp1107v__value=0;
  unsigned long long __temp1156v=0;
  int __temp1157v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1091v(&__temp1093v__unsafe_ptr,&__temp1093v__unsafe_size,&__temp1093v__unsafe_align);
  __temp1094v__unsafe_ptr=__temp1093v__unsafe_ptr;
  __temp1094v__unsafe_size=__temp1093v__unsafe_size;
  __temp1094v__unsafe_align=__temp1093v__unsafe_align;
  buf1__unsafe_ptr=__temp1094v__unsafe_ptr;
  buf1__unsafe_size=__temp1094v__unsafe_size;
  buf1__unsafe_align=__temp1094v__unsafe_align;
  __temp1095v=10;
  __temp_errcode=resize__temp454v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1095v,&__temp1096v__unsafe_ptr,&__temp1096v__unsafe_size,&__temp1096v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1098v=0;
  __temp_errcode=mutget__temp482v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1098v,&__temp1099v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1100v=1.0;
  if(!__temp1099v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1099v__,&__temp1100v,8);
  len__temp490v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1101v__);
  print__temp356v(__temp1101v__);
  len__temp490v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1103v__);
  print__temp356v(__temp1103v__);
  __temp1105v=0;
  __temp_errcode=get__temp486v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1105v,&__temp1106v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1106v__){
  goto __temp_failure;
  }
  memcpy(&__temp1107v__value,(char*)__temp1106v__,8);
  print__temp348v(__temp1107v__value);
  
  __temp_failure:__temp1156v=0;
  neq__temp301v(__temp1096v__unsafe_size,__temp1156v,&__temp1157v);
  if(__temp1157v){
  __temp1096v__unsafe_size=0;
  free__temp426v(&__temp1096v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1090v();return 0;}