#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[31] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1223v(char** __temp1246v, uint64_t* __temp1247v, uint64_t* __temp1248v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1246v=unsafe_ptr;
  *__temp1247v=unsafe_size;
  *__temp1248v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1249v) {
  goto __temp_return;
  __temp_return:
  *__temp1249v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1250v) {
  int value=0;
  *__temp1250v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1251v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1251v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1252v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1252v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1253v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1253v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1254v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1255v) {
  char* allocated=*__temp1255v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1255v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1256v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1257v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1257v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1258v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1258v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v, uint64_t size, char** __temp1262v, uint64_t* __temp1263v, uint64_t* __temp1264v) {
  char* buffer__unsafe_ptr=*__temp1259v;
  uint64_t buffer__unsafe_size=*__temp1260v;
  uint64_t buffer__unsafe_align=*__temp1261v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1259v=buffer__unsafe_ptr;
  *__temp1260v=buffer__unsafe_size;
  *__temp1261v=buffer__unsafe_align;
  *__temp1262v=buffer__unsafe_ptr;
  *__temp1263v=buffer__unsafe_size;
  *__temp1264v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp545v(char** __temp1265v, uint64_t* __temp1266v, uint64_t* __temp1267v, char** __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v, uint64_t* __temp1271v) {
  char* buffer__unsafe_ptr=*__temp1265v;
  uint64_t buffer__unsafe_size=*__temp1266v;
  uint64_t buffer__unsafe_align=*__temp1267v;
  uint64_t __temp546v=0;
  uint64_t __temp547v__=0;
  char __temp548v__=0;
  uint64_t __temp549v=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__unsafe_size=0;
  uint64_t __temp550v__unsafe_align=0;
  char __temp551v____temp469v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp546v=0;
  len__temp537v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp547v__);
  eq__temp118v(__temp546v,__temp547v__,&__temp548v__);
  if(__temp548v__){
  __temp549v=1;
  __temp_errcode=alloc__temp467v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp549v,&__temp550v__unsafe_ptr,&__temp550v__unsafe_size,&__temp550v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp550v__unsafe_ptr;
  buffer__unsafe_size=__temp550v__unsafe_size;
  buffer__unsafe_align=__temp550v__unsafe_align;
  }
  len__temp537v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp552v__);
  __temp553v=__temp552v__;
  length=__temp553v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp551v____temp469v__);
  if(__temp551v____temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  *__temp1271v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1272v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1273v) {
  int __temp221v__=0;
  uint64_t zero=0;
  char __temp222v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp221v__);
  zero=0;
  eq__temp118v(y,zero,&__temp222v__);
  if(__temp222v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x/y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1273v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1274v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1275v) {
  *__temp1275v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1276v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp460v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated__unsafe_ptr){
  new_allocated=realloc(allocated__unsafe_ptr,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=9;
  goto __temp_failure;
  }
  attach_type__temp20v(new_allocated,allocated__unsafe_ptr,&__temp460v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1276v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1277v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) int resize__temp502v(char** __temp1278v, uint64_t* __temp1279v, uint64_t* __temp1280v, uint64_t size, char** __temp1281v, uint64_t* __temp1282v, uint64_t* __temp1283v) {
  char* buffer__unsafe_ptr=*__temp1278v;
  uint64_t buffer__unsafe_size=*__temp1279v;
  uint64_t buffer__unsafe_align=*__temp1280v;
  char __temp503v__=0;
  uint64_t __temp504v=0;
  char __temp505v__=0;
  uint64_t __temp506v=0;
  uint64_t __temp508v=0;
  char __temp509v__=0;
  uint64_t __temp510v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp511v__=0;
  uint64_t bytes=0;
  char* __temp512v__=0;
  char __temp513v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp503v__);
  if(__temp503v__){
  goto __temp_return;
  }
  __temp504v=0;
  eq__temp118v(size,__temp504v,&__temp505v__);
  if(__temp505v__){
  __temp506v=0;
  buffer__unsafe_size=__temp506v;
  free__temp461v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp508v=0;
  eq__temp118v(buffer__unsafe_size,__temp508v,&__temp509v__);
  if(__temp509v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_size,buffer__unsafe_align,&__temp510v__);
  prev_bytes=__temp510v__;
  buffer__unsafe_size=size;
  mul__temp194v(buffer__unsafe_align,size,&__temp511v__);
  bytes=__temp511v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp512v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp512v__;
  lt__temp247v(prev_bytes,bytes,&__temp513v__);
  if(__temp513v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1278v=buffer__unsafe_ptr;
  *__temp1279v=buffer__unsafe_size;
  *__temp1280v=buffer__unsafe_align;
  *__temp1281v=buffer__unsafe_ptr;
  *__temp1282v=buffer__unsafe_size;
  *__temp1283v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1284v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1284v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v, uint64_t i, char** __temp1288v) {
  char* buffer__unsafe_ptr=*__temp1285v;
  uint64_t buffer__unsafe_size=*__temp1286v;
  uint64_t buffer__unsafe_align=*__temp1287v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_align;
  *__temp1288v=__temp532v__;
  
  return __temp_errcode;
}

int push__temp561v(char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v, char** __temp1293v) {
  char* l__buffer__unsafe_ptr=*__temp1289v;
  uint64_t l__buffer__unsafe_size=*__temp1290v;
  uint64_t l__buffer__unsafe_align=*__temp1291v;
  uint64_t l__length=*__temp1292v;
  uint64_t prev_length=0;
  uint64_t __temp562v__=0;
  char __temp563v__=0;
  uint64_t __temp564v=0;
  uint64_t __temp565v__=0;
  uint64_t __temp566v=0;
  uint64_t __temp567v__=0;
  uint64_t __temp568v__=0;
  char* __temp569v__unsafe_ptr=0;
  uint64_t __temp569v__unsafe_size=0;
  uint64_t __temp569v__unsafe_align=0;
  uint64_t __temp570v=0;
  uint64_t __temp571v__=0;
  char* __temp572v__=0;
  char* val=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  prev_length=l__length;
  len__temp537v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_align,&__temp562v__);
  ge__temp319v(prev_length,__temp562v__,&__temp563v__);
  if(__temp563v__){
  __temp564v=2;
  __temp_errcode=div__temp220v(prev_length,__temp564v,&__temp565v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp566v=1;
  add__temp170v(__temp565v__,__temp566v,&__temp567v__);
  add__temp170v(prev_length,__temp567v__,&__temp568v__);
  __temp_errcode=resize__temp502v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,__temp568v__,&__temp569v__unsafe_ptr,&__temp569v__unsafe_size,&__temp569v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  l__buffer__unsafe_ptr=__temp569v__unsafe_ptr;
  l__buffer__unsafe_size=__temp569v__unsafe_size;
  l__buffer__unsafe_align=__temp569v__unsafe_align;
  }
  __temp570v=1;
  add__temp170v(prev_length,__temp570v,&__temp571v__);
  l__length=__temp571v__;
  __temp_errcode=mutget__temp529v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,prev_length,&__temp572v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  val=__temp572v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1289v=l__buffer__unsafe_ptr;
  *__temp1290v=l__buffer__unsafe_size;
  *__temp1291v=l__buffer__unsafe_align;
  *__temp1292v=l__length;
  *__temp1293v=val;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp558v(char** __temp1294v, uint64_t* __temp1295v, uint64_t* __temp1296v, uint64_t* __temp1297v, uint64_t pos, char** __temp1298v) {
  char* l__buffer__unsafe_ptr=*__temp1294v;
  uint64_t l__buffer__unsafe_size=*__temp1295v;
  uint64_t l__buffer__unsafe_align=*__temp1296v;
  uint64_t l__length=*__temp1297v;
  char __temp559v__=0;
  char* __temp560v__=0;
  char* ret=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp559v__);
  if(__temp559v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp529v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,pos,&__temp560v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret=__temp560v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1294v=l__buffer__unsafe_ptr;
  *__temp1295v=l__buffer__unsafe_size;
  *__temp1296v=l__buffer__unsafe_align;
  *__temp1297v=l__length;
  *__temp1298v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1299v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1299v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp555v(char** __temp1300v, uint64_t* __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v, uint64_t pos, char** __temp1304v) {
  char* l__buffer__unsafe_ptr=*__temp1300v;
  uint64_t l__buffer__unsafe_size=*__temp1301v;
  uint64_t l__buffer__unsafe_align=*__temp1302v;
  uint64_t l__length=*__temp1303v;
  char __temp556v__=0;
  char* __temp557v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp556v__);
  if(__temp556v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp_errcode=get__temp533v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_align,pos,&__temp557v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1300v=l__buffer__unsafe_ptr;
  *__temp1301v=l__buffer__unsafe_size;
  *__temp1302v=l__buffer__unsafe_align;
  *__temp1303v=l__length;
  *__temp1304v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1222v() {
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char* __temp1226v__unsafe_ptr=0;
  uint64_t __temp1226v__unsafe_size=0;
  uint64_t __temp1226v__unsafe_align=0;
  char* __temp1227v__buffer__unsafe_ptr=0;
  uint64_t __temp1227v__buffer__unsafe_size=0;
  uint64_t __temp1227v__buffer__unsafe_align=0;
  uint64_t __temp1227v__length=0;
  char __temp1228v____temp551v____temp469v__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint64_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __temp1229v__=0;
  double __temp1230v=0;
  char* __temp1231v__=0;
  double __temp1232v=0;
  char* __temp1233v__=0;
  double __temp1234v=0;
  uint64_t __temp1235v=0;
  char* __temp1236v__=0;
  double __temp1237v=0;
  uint64_t __temp1238v=0;
  char* __temp1239v__=0;
  double __temp1240v__value=0;
  uint64_t __temp1242v=0;
  char* __temp1243v__=0;
  double __temp1244v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1223v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp_errcode=list__temp545v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1227v__buffer__unsafe_ptr,&__temp1227v__buffer__unsafe_size,&__temp1227v__buffer__unsafe_align,&__temp1227v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=push__temp561v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1230v=0.1;
  if(!__temp1229v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1229v__,&__temp1230v,8);
  __temp_errcode=push__temp561v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1232v=0.1;
  if(!__temp1231v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1231v__,&__temp1232v,8);
  __temp_errcode=push__temp561v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1234v=0.1;
  if(!__temp1233v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1233v__,&__temp1234v,8);
  __temp1235v=1;
  __temp_errcode=mutget__temp558v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,__temp1235v,&__temp1236v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1237v=0.2;
  if(!__temp1236v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1236v__,&__temp1237v,8);
  __temp1238v=0;
  __temp_errcode=get__temp555v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,__temp1238v,&__temp1239v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1239v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1240v__value,__temp1239v__,8);
  print__temp368v(__temp1240v__value);
  __temp1242v=1;
  __temp_errcode=get__temp555v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,__temp1242v,&__temp1243v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1243v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1244v__value,__temp1243v__,8);
  print__temp368v(__temp1244v__value);
  
  __temp_failure:exists__temp412v(__temp1227v__buffer__unsafe_ptr,&__temp1228v____temp551v____temp469v__);
  if(__temp1228v____temp551v____temp469v__){
  __temp1227v__buffer__unsafe_size=0;
  __temp1227v__buffer__unsafe_size=__temp1227v__buffer__unsafe_size;
  free__temp461v(&__temp1227v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1222v();return 0;}