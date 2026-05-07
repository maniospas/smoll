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
const char* const __temp1146v="going to deallocate of size: ";
const char* const __temp576v="";
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1129v(void** __temp1165v, unsigned long long* __temp1166v, unsigned long long* __temp1167v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1165v=unsafe_ptr;
  *__temp1166v=unsafe_size;
  *__temp1167v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1168v) {
  int value=0;
  *__temp1168v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1169v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1169v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1170v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1170v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1171v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1171v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1172v) {
  void* allocated=*__temp1172v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1172v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1173v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1173v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1174v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1174v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1175v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1175v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1176v, unsigned long long* __temp1177v, unsigned long long* __temp1178v, unsigned long long size, void** __temp1179v, unsigned long long* __temp1180v, unsigned long long* __temp1181v) {
  void* buffer__unsafe_ptr=*__temp1176v;
  unsigned long long buffer__unsafe_size=*__temp1177v;
  unsigned long long buffer__unsafe_align=*__temp1178v;
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
  *__temp1176v=buffer__unsafe_ptr;
  *__temp1177v=buffer__unsafe_size;
  *__temp1178v=buffer__unsafe_align;
  *__temp1179v=buffer__unsafe_ptr;
  *__temp1180v=buffer__unsafe_size;
  *__temp1181v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1182v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1182v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1183v) {
  *__temp1183v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1184v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1184v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1185v, unsigned long long* __temp1186v, unsigned long long* __temp1187v, unsigned long long i, void** __temp1188v) {
  void* buffer__unsafe_ptr=*__temp1185v;
  unsigned long long buffer__unsafe_size=*__temp1186v;
  unsigned long long buffer__unsafe_align=*__temp1187v;
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
  *__temp1185v=buffer__unsafe_ptr;
  *__temp1186v=buffer__unsafe_size;
  *__temp1187v=buffer__unsafe_align;
  *__temp1188v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1189v) {
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
  *__temp1189v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp349v(const char* value, const char* endl) {
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1190v) {
  *__temp1190v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1128v(void** __temp1196v, unsigned long long* __temp1197v, unsigned long long* __temp1198v) {
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
  unsigned long long __temp1139v=0;
  void* __temp1140v__=0;
  double __temp1141v=0;
  unsigned long long __temp1142v=0;
  void* __temp1143v__=0;
  double __temp1144v__value=0;
  unsigned long long __temp1194v=0;
  int __temp1195v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1129v(&__temp1131v__unsafe_ptr,&__temp1131v__unsafe_size,&__temp1131v__unsafe_align);
  __temp1132v__unsafe_ptr=__temp1131v__unsafe_ptr;
  __temp1132v__unsafe_size=__temp1131v__unsafe_size;
  __temp1132v__unsafe_align=__temp1131v__unsafe_align;
  __temp1133v=2;
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
  __temp1139v=1;
  __temp_errcode=mutget__temp479v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1139v,&__temp1140v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1141v=2.0;
  if(!__temp1140v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1140v__,&__temp1141v,8);
  __temp1142v=1;
  __temp_errcode=get__temp483v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1142v,&__temp1143v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1143v__){
  goto __temp_failure;
  }
  memcpy(&__temp1144v__value,(char*)__temp1143v__,8);
  print__temp351v(__temp1144v__value);
  *__temp1196v=x__unsafe_ptr;
  *__temp1197v=x__unsafe_size;
  *__temp1198v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1150v(void** __temp1207v, unsigned long long* __temp1208v, unsigned long long* __temp1209v, void** __temp1210v, unsigned long long* __temp1211v, unsigned long long* __temp1212v, void** __temp1213v, unsigned long long* __temp1214v, unsigned long long* __temp1215v) {
  void* __temp1151v__unsafe_ptr=0;
  unsigned long long __temp1151v__unsafe_size=0;
  unsigned long long __temp1151v__unsafe_align=0;
  void* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  void* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  void* __temp1153v__unsafe_ptr=0;
  unsigned long long __temp1153v__unsafe_size=0;
  unsigned long long __temp1153v__unsafe_align=0;
  void* __temp1154v__unsafe_ptr=0;
  unsigned long long __temp1154v__unsafe_size=0;
  unsigned long long __temp1154v__unsafe_align=0;
  unsigned long long __temp1155v=0;
  void* __temp1156v__unsafe_ptr=0;
  unsigned long long __temp1156v__unsafe_size=0;
  unsigned long long __temp1156v__unsafe_align=0;
  void* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1200v=0;
  int __temp1201v=0;
  unsigned long long __temp1205v=0;
  int __temp1206v=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp1128v(&__temp1151v__unsafe_ptr,&__temp1151v__unsafe_size,&__temp1151v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1151v__unsafe_ptr;
  t__unsafe_size=__temp1151v__unsafe_size;
  t__unsafe_align=__temp1151v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1129v(&__temp1153v__unsafe_ptr,&__temp1153v__unsafe_size,&__temp1153v__unsafe_align);
  __temp1154v__unsafe_ptr=__temp1153v__unsafe_ptr;
  __temp1154v__unsafe_size=__temp1153v__unsafe_size;
  __temp1154v__unsafe_align=__temp1153v__unsafe_align;
  __temp1155v=3;
  __temp_errcode=alloc__temp435v(&__temp1154v__unsafe_ptr,&__temp1154v__unsafe_size,&__temp1154v__unsafe_align,__temp1155v,&__temp1156v__unsafe_ptr,&__temp1156v__unsafe_size,&__temp1156v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1156v__unsafe_ptr;
  k__unsafe_size=__temp1156v__unsafe_size;
  k__unsafe_align=__temp1156v__unsafe_align;
  *__temp1207v=t__unsafe_ptr;
  *__temp1208v=t__unsafe_size;
  *__temp1209v=t__unsafe_align;
  *__temp1210v=j__unsafe_ptr;
  *__temp1211v=j__unsafe_size;
  *__temp1212v=j__unsafe_align;
  *__temp1213v=k__unsafe_ptr;
  *__temp1214v=k__unsafe_size;
  *__temp1215v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1158v() {
  void* __temp1159v__t__unsafe_ptr=0;
  unsigned long long __temp1159v__t__unsafe_size=0;
  unsigned long long __temp1159v__t__unsafe_align=0;
  void* __temp1159v__j__unsafe_ptr=0;
  unsigned long long __temp1159v__j__unsafe_size=0;
  unsigned long long __temp1159v__j__unsafe_align=0;
  void* __temp1159v__k__unsafe_ptr=0;
  unsigned long long __temp1159v__k__unsafe_size=0;
  unsigned long long __temp1159v__k__unsafe_align=0;
  void* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  void* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  void* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1161v=0;
  void* __temp1162v__=0;
  double __temp1163v__value=0;
  unsigned long long __temp1219v=0;
  int __temp1220v=0;
  unsigned long long __temp1221v=0;
  int __temp1222v=0;
  int __temp_errcode=0;
  __temp_errcode=test2__temp1150v(&__temp1159v__t__unsafe_ptr,&__temp1159v__t__unsafe_size,&__temp1159v__t__unsafe_align,&__temp1159v__j__unsafe_ptr,&__temp1159v__j__unsafe_size,&__temp1159v__j__unsafe_align,&__temp1159v__k__unsafe_ptr,&__temp1159v__k__unsafe_size,&__temp1159v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1159v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1159v__t__unsafe_size;
  t__t__unsafe_align=__temp1159v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1159v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1159v__j__unsafe_size;
  t__j__unsafe_align=__temp1159v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1159v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1159v__k__unsafe_size;
  t__k__unsafe_align=__temp1159v__k__unsafe_align;
  __temp1161v=1;
  __temp_errcode=get__temp483v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1161v,&__temp1162v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1162v__){
  goto __temp_failure;
  }
  memcpy(&__temp1163v__value,(char*)__temp1162v__,8);
  print__temp351v(__temp1163v__value);
  
  __temp_failure:__temp1221v=0;
  neq__temp302v(__temp1159v__k__unsafe_size,__temp1221v,&__temp1222v);
  if(__temp1222v){
  __temp1159v__k__unsafe_size=0;
  free__temp429v(&__temp1159v__k__unsafe_ptr);
  }
  print__temp349v(__temp1146v,__temp576v);
  len__temp487v(__temp1159v__t__unsafe_ptr,__temp1159v__t__unsafe_size,__temp1159v__t__unsafe_align,&__temp1159v__t__unsafe_size);
  print__temp359v(__temp1159v__t__unsafe_size);
  __temp1219v=0;
  neq__temp302v(__temp1159v__t__unsafe_size,__temp1219v,&__temp1220v);
  if(__temp1220v){
  __temp1159v__t__unsafe_size=0;
  free__temp429v(&__temp1159v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1158v();return 0;}