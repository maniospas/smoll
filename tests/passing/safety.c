#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp575v="";
const char* const __temp1216v="going to deallocate of size: ";
static const char* __temp_all_errcodes[28] = {"noerr",
"error",
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
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1199v(char** __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1235v=unsafe_ptr;
  *__temp1236v=unsafe_size;
  *__temp1237v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1238v) {
  int value=0;
  *__temp1238v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1239v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1239v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1240v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1240v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1241v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1242v) {
  char* allocated=*__temp1242v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1242v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1243v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1244v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1245v) {
  char* allocated=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1245v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1246v, unsigned long long* __temp1247v, unsigned long long* __temp1248v, unsigned long long size, char** __temp1249v, unsigned long long* __temp1250v, unsigned long long* __temp1251v) {
  char* buffer__unsafe_ptr=*__temp1246v;
  unsigned long long buffer__unsafe_size=*__temp1247v;
  unsigned long long buffer__unsafe_align=*__temp1248v;
  unsigned long long __temp435v=0;
  char __temp436v__=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
  unsigned long long __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  __temp_return:
  *__temp1246v=buffer__unsafe_ptr;
  *__temp1247v=buffer__unsafe_size;
  *__temp1248v=buffer__unsafe_align;
  *__temp1249v=buffer__unsafe_ptr;
  *__temp1250v=buffer__unsafe_size;
  *__temp1251v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1252v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1253v) {
  *__temp1253v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1254v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1254v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v, unsigned long long i, char** __temp1258v) {
  char* buffer__unsafe_ptr=*__temp1255v;
  unsigned long long buffer__unsafe_size=*__temp1256v;
  unsigned long long buffer__unsafe_align=*__temp1257v;
  char __temp479v__=0;
  unsigned long long __temp480v__=0;
  char* __temp481v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp480v__);
  add__temp430v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  *__temp1258v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1259v) {
  char __temp483v__=0;
  unsigned long long __temp484v__=0;
  char* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1259v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value, const char* endl) {
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1260v) {
  *__temp1260v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1198v(char** __temp1266v, unsigned long long* __temp1267v, unsigned long long* __temp1268v) {
  char* __temp1201v__unsafe_ptr=0;
  unsigned long long __temp1201v__unsafe_size=0;
  unsigned long long __temp1201v__unsafe_align=0;
  char* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  unsigned long long __temp1203v=0;
  char* __temp1204v__unsafe_ptr=0;
  unsigned long long __temp1204v__unsafe_size=0;
  unsigned long long __temp1204v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1206v=0;
  char* __temp1207v__=0;
  double __temp1208v=0;
  unsigned long long __temp1209v=0;
  char* __temp1210v__=0;
  double __temp1211v=0;
  unsigned long long __temp1212v=0;
  char* __temp1213v__=0;
  double __temp1214v__value=0;
  unsigned long long __temp1264v=0;
  char __temp1265v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  __temp1203v=2;
  __temp_errcode=alloc__temp434v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,__temp1203v,&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1204v__unsafe_ptr;
  x__unsafe_size=__temp1204v__unsafe_size;
  x__unsafe_align=__temp1204v__unsafe_align;
  __temp1206v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1206v,&__temp1207v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1208v=1.0;
  if(!__temp1207v__){
  goto __temp_failure;
  }
  memcpy(__temp1207v__,&__temp1208v,8);
  __temp1209v=1;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1209v,&__temp1210v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1211v=2.0;
  if(!__temp1210v__){
  goto __temp_failure;
  }
  memcpy(__temp1210v__,&__temp1211v,8);
  __temp1212v=1;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1212v,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__value,__temp1213v__,8);
  print__temp353v(__temp1214v__value);
  *__temp1266v=x__unsafe_ptr;
  *__temp1267v=x__unsafe_size;
  *__temp1268v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1220v(char** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, char** __temp1280v, unsigned long long* __temp1281v, unsigned long long* __temp1282v, char** __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v) {
  char* __temp1221v__unsafe_ptr=0;
  unsigned long long __temp1221v__unsafe_size=0;
  unsigned long long __temp1221v__unsafe_align=0;
  char* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  char* __temp1223v__unsafe_ptr=0;
  unsigned long long __temp1223v__unsafe_size=0;
  unsigned long long __temp1223v__unsafe_align=0;
  char* __temp1224v__unsafe_ptr=0;
  unsigned long long __temp1224v__unsafe_size=0;
  unsigned long long __temp1224v__unsafe_align=0;
  unsigned long long __temp1225v=0;
  char* __temp1226v__unsafe_ptr=0;
  unsigned long long __temp1226v__unsafe_size=0;
  unsigned long long __temp1226v__unsafe_align=0;
  char* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1270v=0;
  char __temp1271v=0;
  unsigned long long __temp1275v=0;
  char __temp1276v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1198v(&__temp1221v__unsafe_ptr,&__temp1221v__unsafe_size,&__temp1221v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1221v__unsafe_ptr;
  t__unsafe_size=__temp1221v__unsafe_size;
  t__unsafe_align=__temp1221v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1199v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align);
  __temp1224v__unsafe_ptr=__temp1223v__unsafe_ptr;
  __temp1224v__unsafe_size=__temp1223v__unsafe_size;
  __temp1224v__unsafe_align=__temp1223v__unsafe_align;
  __temp1225v=3;
  __temp_errcode=alloc__temp434v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align,__temp1225v,&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1226v__unsafe_ptr;
  k__unsafe_size=__temp1226v__unsafe_size;
  k__unsafe_align=__temp1226v__unsafe_align;
  *__temp1277v=t__unsafe_ptr;
  *__temp1278v=t__unsafe_size;
  *__temp1279v=t__unsafe_align;
  *__temp1280v=j__unsafe_ptr;
  *__temp1281v=j__unsafe_size;
  *__temp1282v=j__unsafe_align;
  *__temp1283v=k__unsafe_ptr;
  *__temp1284v=k__unsafe_size;
  *__temp1285v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1228v() {
  char* __temp1229v__t__unsafe_ptr=0;
  unsigned long long __temp1229v__t__unsafe_size=0;
  unsigned long long __temp1229v__t__unsafe_align=0;
  char* __temp1229v__j__unsafe_ptr=0;
  unsigned long long __temp1229v__j__unsafe_size=0;
  unsigned long long __temp1229v__j__unsafe_align=0;
  char* __temp1229v__k__unsafe_ptr=0;
  unsigned long long __temp1229v__k__unsafe_size=0;
  unsigned long long __temp1229v__k__unsafe_align=0;
  char* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1231v=0;
  char* __temp1232v__=0;
  double __temp1233v__value=0;
  unsigned long long __temp1289v=0;
  char __temp1290v=0;
  unsigned long long __temp1291v=0;
  char __temp1292v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1220v(&__temp1229v__t__unsafe_ptr,&__temp1229v__t__unsafe_size,&__temp1229v__t__unsafe_align,&__temp1229v__j__unsafe_ptr,&__temp1229v__j__unsafe_size,&__temp1229v__j__unsafe_align,&__temp1229v__k__unsafe_ptr,&__temp1229v__k__unsafe_size,&__temp1229v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1229v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1229v__t__unsafe_size;
  t__t__unsafe_align=__temp1229v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1229v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1229v__j__unsafe_size;
  t__j__unsafe_align=__temp1229v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1229v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1229v__k__unsafe_size;
  t__k__unsafe_align=__temp1229v__k__unsafe_align;
  __temp1231v=1;
  __temp_errcode=get__temp482v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1231v,&__temp1232v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__value,__temp1232v__,8);
  print__temp353v(__temp1233v__value);
  
  __temp_failure:__temp1291v=0;
  neq__temp302v(__temp1229v__k__unsafe_size,__temp1291v,&__temp1292v);
  if(__temp1292v){
  __temp1229v__k__unsafe_size=0;
  free__temp428v(&__temp1229v__k__unsafe_ptr);
  }
  print__temp351v(__temp1216v,__temp575v);
  len__temp486v(__temp1229v__t__unsafe_ptr,__temp1229v__t__unsafe_size,__temp1229v__t__unsafe_align,&__temp1229v__t__unsafe_size);
  print__temp361v(__temp1229v__t__unsafe_size);
  __temp1289v=0;
  neq__temp302v(__temp1229v__t__unsafe_size,__temp1289v,&__temp1290v);
  if(__temp1290v){
  __temp1229v__t__unsafe_size=0;
  free__temp428v(&__temp1229v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1228v();return 0;}