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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1129v(void** __temp1158v, unsigned long long* __temp1159v, unsigned long long* __temp1160v) {
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

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1162v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1162v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1163v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1163v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1164v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1164v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1165v) {
  void* allocated=*__temp1165v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1165v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1166v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1166v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1167v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1167v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1168v) {
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

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1169v, unsigned long long* __temp1170v, unsigned long long* __temp1171v, unsigned long long size, void** __temp1172v, unsigned long long* __temp1173v, unsigned long long* __temp1174v) {
  void* buffer__unsafe_ptr=*__temp1169v;
  unsigned long long buffer__unsafe_size=*__temp1170v;
  unsigned long long buffer__unsafe_align=*__temp1171v;
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
  *__temp1169v=buffer__unsafe_ptr;
  *__temp1170v=buffer__unsafe_size;
  *__temp1171v=buffer__unsafe_align;
  *__temp1172v=buffer__unsafe_ptr;
  *__temp1173v=buffer__unsafe_size;
  *__temp1174v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1175v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1175v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1176v) {
  *__temp1176v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1177v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1177v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1178v, unsigned long long* __temp1179v, unsigned long long* __temp1180v, unsigned long long i, void** __temp1181v) {
  void* buffer__unsafe_ptr=*__temp1178v;
  unsigned long long buffer__unsafe_size=*__temp1179v;
  unsigned long long buffer__unsafe_align=*__temp1180v;
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
  *__temp1178v=buffer__unsafe_ptr;
  *__temp1179v=buffer__unsafe_size;
  *__temp1180v=buffer__unsafe_align;
  *__temp1181v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1128v(void** __temp1188v, unsigned long long* __temp1189v, unsigned long long* __temp1190v) {
  void* __temp1131v__unsafe_ptr=0;
  unsigned long long __temp1131v__unsafe_size=0;
  unsigned long long __temp1131v__unsafe_align=0;
  void* __temp1132v__unsafe_ptr=0;
  unsigned long long __temp1132v__unsafe_size=0;
  unsigned long long __temp1132v__unsafe_align=0;
  unsigned long long __temp1133v=0;
  void* __temp1134v__unsafe_ptr=0;
  unsigned long long __temp1134v__unsafe_size=0;
  unsigned long long __temp1134v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1136v=0;
  void* __temp1137v__=0;
  double __temp1138v=0;
  void* __temp1139v__unsafe_ptr=0;
  unsigned long long __temp1139v__unsafe_size=0;
  unsigned long long __temp1139v__unsafe_align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1185v=0;
  int __temp1186v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1129v(&__temp1131v__unsafe_ptr,&__temp1131v__unsafe_size,&__temp1131v__unsafe_align);
  __temp1132v__unsafe_ptr=__temp1131v__unsafe_ptr;
  __temp1132v__unsafe_size=__temp1131v__unsafe_size;
  __temp1132v__unsafe_align=__temp1131v__unsafe_align;
  __temp1133v=1;
  __temp_errcode=alloc__temp435v(&__temp1132v__unsafe_ptr,&__temp1132v__unsafe_size,&__temp1132v__unsafe_align,__temp1133v,&__temp1134v__unsafe_ptr,&__temp1134v__unsafe_size,&__temp1134v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1134v__unsafe_ptr;
  x__unsafe_size=__temp1134v__unsafe_size;
  x__unsafe_align=__temp1134v__unsafe_align;
  __temp1136v=0;
  __temp_errcode=mutget__temp479v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1136v,&__temp1137v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1138v=1.0;
  if(!__temp1137v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1137v__,&__temp1138v,8);
  float__temp_buffer__buffer__temp1129v(&__temp1139v__unsafe_ptr,&__temp1139v__unsafe_size,&__temp1139v__unsafe_align);
  y__unsafe_ptr=__temp1139v__unsafe_ptr;
  y__unsafe_size=__temp1139v__unsafe_size;
  y__unsafe_align=__temp1139v__unsafe_align;
  *__temp1188v=x__unsafe_ptr;
  *__temp1189v=x__unsafe_size;
  *__temp1190v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1191v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp428v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp428v__);
  *__temp1191v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1192v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1192v=z;
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1193v, unsigned long long* __temp1194v, unsigned long long* __temp1195v, unsigned long long size, void** __temp1196v, unsigned long long* __temp1197v, unsigned long long* __temp1198v) {
  void* buffer__unsafe_ptr=*__temp1193v;
  unsigned long long buffer__unsafe_size=*__temp1194v;
  unsigned long long buffer__unsafe_align=*__temp1195v;
  int __temp453v__=0;
  unsigned long long __temp454v=0;
  int __temp455v__=0;
  unsigned long long __temp456v=0;
  unsigned long long __temp458v=0;
  int __temp459v__=0;
  unsigned long long __temp460v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp461v__=0;
  unsigned long long bytes=0;
  void* __temp462v__=0;
  int __temp463v__=0;
  int __temp_errcode=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp453v__);
  if(__temp453v__){
  goto __temp_return;
  }
  __temp454v=0;
  eq__temp278v(size,__temp454v,&__temp455v__);
  if(__temp455v__){
  __temp456v=0;
  buffer__unsafe_size=__temp456v;
  free__temp429v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp458v=0;
  eq__temp278v(buffer__unsafe_size,__temp458v,&__temp459v__);
  if(__temp459v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp460v__);
  prev_bytes=__temp460v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp461v__);
  bytes=__temp461v__;
  __temp_errcode=realloc__temp427v(buffer__unsafe_ptr,bytes,&__temp462v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp462v__;
  lt__temp182v(prev_bytes,bytes,&__temp463v__);
  if(__temp463v__){
  zero__temp430v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1193v=buffer__unsafe_ptr;
  *__temp1194v=buffer__unsafe_size;
  *__temp1195v=buffer__unsafe_align;
  *__temp1196v=buffer__unsafe_ptr;
  *__temp1197v=buffer__unsafe_size;
  *__temp1198v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1199v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1199v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp472v(void** __temp1200v, unsigned long long* __temp1201v, unsigned long long* __temp1202v, void** __temp1203v) {
  void* buffer__unsafe_ptr=*__temp1200v;
  unsigned long long buffer__unsafe_size=*__temp1201v;
  unsigned long long buffer__unsafe_align=*__temp1202v;
  unsigned long long __temp473v=0;
  int __temp474v__=0;
  unsigned long long __temp475v=0;
  unsigned long long __temp476v__=0;
  unsigned long long __temp477v__=0;
  void* __temp478v__=0;
  int __temp_errcode=0;
  __temp473v=0;
  eq__temp278v(__temp473v,buffer__unsafe_size,&__temp474v__);
  if(__temp474v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  __temp475v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp476v__,buffer__unsafe_align,&__temp477v__);
  add__temp431v(buffer__unsafe_ptr,__temp477v__,&__temp478v__);
  *__temp1200v=buffer__unsafe_ptr;
  *__temp1201v=buffer__unsafe_size;
  *__temp1202v=buffer__unsafe_align;
  *__temp1203v=__temp478v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1140v(void** __temp1205v, unsigned long long* __temp1206v, unsigned long long* __temp1207v) {
  void* x__unsafe_ptr=*__temp1205v;
  unsigned long long x__unsafe_size=*__temp1206v;
  unsigned long long x__unsafe_align=*__temp1207v;
  unsigned long long __temp1141v=0;
  void* __temp1142v__unsafe_ptr=0;
  unsigned long long __temp1142v__unsafe_size=0;
  unsigned long long __temp1142v__unsafe_align=0;
  void* __temp1143v__=0;
  double __temp1144v=0;
  void* __temp1145v=0;
  int __temp_errcode=0;
  __temp1141v=2;
  __temp_errcode=resize__temp452v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1141v,&__temp1142v__unsafe_ptr,&__temp1142v__unsafe_size,&__temp1142v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1142v__unsafe_ptr,&__temp1142v__unsafe_size,&__temp1142v__unsafe_align,&__temp1143v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1144v=2.0;
  if(!__temp1143v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1143v__,&__temp1144v,8);
  __temp1145v=__temp1143v__;
  *__temp1205v=x__unsafe_ptr;
  *__temp1206v=x__unsafe_size;
  *__temp1207v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1208v) {
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
  *__temp1208v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1209v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1209v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1210v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1210v=z;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1146v() {
  void* __temp1147v__unsafe_ptr=0;
  unsigned long long __temp1147v__unsafe_size=0;
  unsigned long long __temp1147v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1150v=0;
  void* __temp1151v__=0;
  double __temp1152v__value=0;
  unsigned long long __temp1153v=0;
  void* __temp1154v__=0;
  double __temp1155v__value=0;
  double __temp1156v__=0;
  unsigned long long __temp1212v=0;
  int __temp1213v=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp1128v(&__temp1147v__unsafe_ptr,&__temp1147v__unsafe_size,&__temp1147v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1147v__unsafe_ptr;
  x__unsafe_size=__temp1147v__unsafe_size;
  x__unsafe_align=__temp1147v__unsafe_align;
  __temp_errcode=test2__temp1140v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1150v=0;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1150v,&__temp1151v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1151v__){
  goto __temp_failure;
  }
  memcpy(&__temp1152v__value,(char*)__temp1151v__,8);
  __temp1153v=1;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1153v,&__temp1154v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1154v__){
  goto __temp_failure;
  }
  memcpy(&__temp1155v__value,(char*)__temp1154v__,8);
  add__temp88v(__temp1152v__value,__temp1155v__value,&__temp1156v__);
  print__temp351v(__temp1156v__);
  
  __temp_failure:__temp1212v=0;
  neq__temp302v(__temp1147v__unsafe_size,__temp1212v,&__temp1213v);
  if(__temp1213v){
  __temp1147v__unsafe_size=0;
  free__temp429v(&__temp1147v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1146v();return 0;}