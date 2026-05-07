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
const char* const __temp1132v=",";

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1141v(void** __temp1186v, unsigned long long* __temp1187v, unsigned long long* __temp1188v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1186v=unsafe_ptr;
  *__temp1187v=unsafe_size;
  *__temp1188v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1189v) {
  int value=0;
  *__temp1189v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1190v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1190v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1191v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1191v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1192v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1192v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1193v) {
  void* allocated=*__temp1193v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1193v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1194v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1194v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1195v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1195v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp426v(unsigned long long bytes, void** __temp1196v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1196v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp1197v, unsigned long long* __temp1198v, unsigned long long* __temp1199v, unsigned long long size, void** __temp1200v, unsigned long long* __temp1201v, unsigned long long* __temp1202v) {
  void* buffer__unsafe_ptr=*__temp1197v;
  unsigned long long buffer__unsafe_size=*__temp1198v;
  unsigned long long buffer__unsafe_align=*__temp1199v;
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
  *__temp1197v=buffer__unsafe_ptr;
  *__temp1198v=buffer__unsafe_size;
  *__temp1199v=buffer__unsafe_align;
  *__temp1200v=buffer__unsafe_ptr;
  *__temp1201v=buffer__unsafe_size;
  *__temp1202v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1203v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1203v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1204v) {
  *__temp1204v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1205v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1205v=__temp432v__;
}

static inline __attribute__((always_inline)) int mutget__temp479v(void** __temp1206v, unsigned long long* __temp1207v, unsigned long long* __temp1208v, unsigned long long i, void** __temp1209v) {
  void* buffer__unsafe_ptr=*__temp1206v;
  unsigned long long buffer__unsafe_size=*__temp1207v;
  unsigned long long buffer__unsafe_align=*__temp1208v;
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
  *__temp1206v=buffer__unsafe_ptr;
  *__temp1207v=buffer__unsafe_size;
  *__temp1208v=buffer__unsafe_align;
  *__temp1209v=__temp482v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1210v) {
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
  *__temp1210v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1211v) {
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
  *__temp1211v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1212v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1213v, unsigned long long* __temp1214v, unsigned long long* __temp1215v, unsigned long long size, void** __temp1216v, unsigned long long* __temp1217v, unsigned long long* __temp1218v) {
  void* buffer__unsafe_ptr=*__temp1213v;
  unsigned long long buffer__unsafe_size=*__temp1214v;
  unsigned long long buffer__unsafe_align=*__temp1215v;
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
  *__temp1213v=buffer__unsafe_ptr;
  *__temp1214v=buffer__unsafe_size;
  *__temp1215v=buffer__unsafe_align;
  *__temp1216v=buffer__unsafe_ptr;
  *__temp1217v=buffer__unsafe_size;
  *__temp1218v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1219v) {
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
  *__temp1219v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp472v(void** __temp1220v, unsigned long long* __temp1221v, unsigned long long* __temp1222v, void** __temp1223v) {
  void* buffer__unsafe_ptr=*__temp1220v;
  unsigned long long buffer__unsafe_size=*__temp1221v;
  unsigned long long buffer__unsafe_align=*__temp1222v;
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
  *__temp1220v=buffer__unsafe_ptr;
  *__temp1221v=buffer__unsafe_size;
  *__temp1222v=buffer__unsafe_align;
  *__temp1223v=__temp478v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1161v(void** __temp1224v, unsigned long long* __temp1225v, unsigned long long* __temp1226v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=32;
  *__temp1224v=unsafe_ptr;
  *__temp1225v=unsafe_size;
  *__temp1226v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp353v(double value, const char* endl) {
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1130v(void* f) {
  double __temp1131v__a__x=0;
  double __temp1131v__a__y=0;
  double __temp1131v__b__x=0;
  double __temp1131v__b__y=0;
  double __temp1134v__a__x=0;
  double __temp1134v__a__y=0;
  double __temp1134v__b__x=0;
  double __temp1134v__b__y=0;
  double __temp1136v__a__x=0;
  double __temp1136v__a__y=0;
  double __temp1136v__b__x=0;
  double __temp1136v__b__y=0;
  double __temp1138v__a__x=0;
  double __temp1138v__a__y=0;
  double __temp1138v__b__x=0;
  double __temp1138v__b__y=0;
  int __temp_errcode=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1131v__b__y,(char*)f+24,8);
  print__temp353v(__temp1131v__a__x,__temp1132v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1134v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1134v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1134v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1134v__b__y,(char*)f+24,8);
  print__temp353v(__temp1134v__a__y,__temp1132v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1136v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1136v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1136v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1136v__b__y,(char*)f+24,8);
  print__temp353v(__temp1136v__b__x,__temp1132v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1138v__a__x,(char*)f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1138v__a__y,(char*)f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1138v__b__x,(char*)f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1138v__b__y,(char*)f+24,8);
  print__temp351v(__temp1138v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1140v() {
  void* __temp1143v__unsafe_ptr=0;
  unsigned long long __temp1143v__unsafe_size=0;
  unsigned long long __temp1143v__unsafe_align=0;
  void* __temp1144v__unsafe_ptr=0;
  unsigned long long __temp1144v__unsafe_size=0;
  unsigned long long __temp1144v__unsafe_align=0;
  unsigned long long __temp1145v=0;
  void* __temp1146v__unsafe_ptr=0;
  unsigned long long __temp1146v__unsafe_size=0;
  unsigned long long __temp1146v__unsafe_align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__unsafe_align=0;
  unsigned long long __temp1148v=0;
  void* __temp1149v__=0;
  double __temp1150v=0;
  unsigned long long __temp1151v=0;
  void* __temp1152v__=0;
  double __temp1153v__value=0;
  unsigned long long __temp1155v=0;
  void* __temp1156v__=0;
  void* f0=0;
  double __temp1157v__value=0;
  unsigned long long __temp1158v=0;
  void* __temp1159v__unsafe_ptr=0;
  unsigned long long __temp1159v__unsafe_size=0;
  unsigned long long __temp1159v__unsafe_align=0;
  void* __temp1160v__=0;
  void* __temp1163v__unsafe_ptr=0;
  unsigned long long __temp1163v__unsafe_size=0;
  unsigned long long __temp1163v__unsafe_align=0;
  void* __temp1164v__unsafe_ptr=0;
  unsigned long long __temp1164v__unsafe_size=0;
  unsigned long long __temp1164v__unsafe_align=0;
  unsigned long long __temp1165v=0;
  void* __temp1166v__unsafe_ptr=0;
  unsigned long long __temp1166v__unsafe_size=0;
  unsigned long long __temp1166v__unsafe_align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__unsafe_align=0;
  unsigned long long __temp1168v=0;
  void* __temp1169v__=0;
  double __temp1170v=0;
  double __temp1171v=0;
  double __temp1172v=0;
  double __temp1173v=0;
  unsigned long long __temp1174v=0;
  void* __temp1175v__=0;
  double __temp1177v=0;
  void* __temp1178v__unsafe_ptr=0;
  unsigned long long __temp1178v__unsafe_size=0;
  unsigned long long __temp1178v__unsafe_align=0;
  void* __temp1179v__unsafe_ptr=0;
  unsigned long long __temp1179v__unsafe_size=0;
  unsigned long long __temp1179v__unsafe_align=0;
  unsigned long long __temp1180v=0;
  void* __temp1181v__unsafe_ptr=0;
  unsigned long long __temp1181v__unsafe_size=0;
  unsigned long long __temp1181v__unsafe_align=0;
  void* __temp1183v__=0;
  void* n=0;
  double __temp1184v__value=0;
  unsigned long long __temp1230v=0;
  int __temp1231v=0;
  unsigned long long __temp1236v=0;
  int __temp1237v=0;
  unsigned long long __temp1241v=0;
  int __temp1242v=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp1141v(&__temp1143v__unsafe_ptr,&__temp1143v__unsafe_size,&__temp1143v__unsafe_align);
  __temp1144v__unsafe_ptr=__temp1143v__unsafe_ptr;
  __temp1144v__unsafe_size=__temp1143v__unsafe_size;
  __temp1144v__unsafe_align=__temp1143v__unsafe_align;
  __temp1145v=1;
  __temp_errcode=alloc__temp435v(&__temp1144v__unsafe_ptr,&__temp1144v__unsafe_size,&__temp1144v__unsafe_align,__temp1145v,&__temp1146v__unsafe_ptr,&__temp1146v__unsafe_size,&__temp1146v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1146v__unsafe_ptr;
  f__unsafe_size=__temp1146v__unsafe_size;
  f__unsafe_align=__temp1146v__unsafe_align;
  __temp1148v=0;
  __temp_errcode=mutget__temp479v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1148v,&__temp1149v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1150v=1.0;
  if(!__temp1149v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1149v__,&__temp1150v,8);
  __temp1151v=0;
  __temp_errcode=get__temp483v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1151v,&__temp1152v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1152v__){
  goto __temp_failure;
  }
  memcpy(&__temp1153v__value,(char*)__temp1152v__,8);
  print__temp351v(__temp1153v__value);
  __temp1155v=0;
  __temp_errcode=mutget__temp479v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1155v,&__temp1156v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1156v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1157v__value,(char*)f0,8);
  __temp1158v=2;
  __temp_errcode=resize__temp452v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1158v,&__temp1159v__unsafe_ptr,&__temp1159v__unsafe_size,&__temp1159v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1159v__unsafe_ptr,&__temp1159v__unsafe_size,&__temp1159v__unsafe_align,&__temp1160v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1160v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1160v__,&__temp1157v__value,8);
  Field__temp_buffer__buffer__temp1161v(&__temp1163v__unsafe_ptr,&__temp1163v__unsafe_size,&__temp1163v__unsafe_align);
  __temp1164v__unsafe_ptr=__temp1163v__unsafe_ptr;
  __temp1164v__unsafe_size=__temp1163v__unsafe_size;
  __temp1164v__unsafe_align=__temp1163v__unsafe_align;
  __temp1165v=1;
  __temp_errcode=alloc__temp435v(&__temp1164v__unsafe_ptr,&__temp1164v__unsafe_size,&__temp1164v__unsafe_align,__temp1165v,&__temp1166v__unsafe_ptr,&__temp1166v__unsafe_size,&__temp1166v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1166v__unsafe_ptr;
  p__unsafe_size=__temp1166v__unsafe_size;
  p__unsafe_align=__temp1166v__unsafe_align;
  __temp1168v=0;
  __temp_errcode=mutget__temp479v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1168v,&__temp1169v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1170v=1.0;
  __temp1171v=2.0;
  __temp1172v=3.0;
  __temp1173v=4.0;
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__,&__temp1170v,8);
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__+8,&__temp1171v,8);
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__+16,&__temp1172v,8);
  if(!__temp1169v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1169v__+24,&__temp1173v,8);
  __temp1174v=0;
  __temp_errcode=get__temp483v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1174v,&__temp1175v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1130v(__temp1175v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1177v=1.0;
  float__temp_buffer__buffer__temp1141v(&__temp1178v__unsafe_ptr,&__temp1178v__unsafe_size,&__temp1178v__unsafe_align);
  __temp1179v__unsafe_ptr=__temp1178v__unsafe_ptr;
  __temp1179v__unsafe_size=__temp1178v__unsafe_size;
  __temp1179v__unsafe_align=__temp1178v__unsafe_align;
  __temp1180v=1;
  __temp_errcode=alloc__temp435v(&__temp1179v__unsafe_ptr,&__temp1179v__unsafe_size,&__temp1179v__unsafe_align,__temp1180v,&__temp1181v__unsafe_ptr,&__temp1181v__unsafe_size,&__temp1181v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp472v(&__temp1181v__unsafe_ptr,&__temp1181v__unsafe_size,&__temp1181v__unsafe_align,&__temp1183v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1183v__){
  goto __temp_failure;
  }
  memcpy((char*)__temp1183v__,&__temp1177v,8);
  n=__temp1183v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1184v__value,(char*)n,8);
  print__temp351v(__temp1184v__value);
  
  __temp_failure:__temp1241v=0;
  neq__temp302v(__temp1181v__unsafe_size,__temp1241v,&__temp1242v);
  if(__temp1242v){
  __temp1181v__unsafe_size=0;
  free__temp429v(&__temp1181v__unsafe_ptr);
  }
  __temp1236v=0;
  neq__temp302v(__temp1166v__unsafe_size,__temp1236v,&__temp1237v);
  if(__temp1237v){
  __temp1166v__unsafe_size=0;
  free__temp429v(&__temp1166v__unsafe_ptr);
  }
  __temp1230v=0;
  neq__temp302v(__temp1146v__unsafe_size,__temp1230v,&__temp1231v);
  if(__temp1231v){
  __temp1146v__unsafe_size=0;
  free__temp429v(&__temp1146v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1140v();return 0;}