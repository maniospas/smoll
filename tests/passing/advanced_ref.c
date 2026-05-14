#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1231v="456";
const char* const __temp1229v="123";
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1221v(char** __temp1238v, uint64_t* __temp1239v, uint64_t* __temp1240v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1238v=unsafe_ptr;
  *__temp1239v=unsafe_size;
  *__temp1240v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1241v) {
  goto __temp_return;
  __temp_return:
  *__temp1241v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1242v) {
  int value=0;
  *__temp1242v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1243v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1243v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1244v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1244v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1245v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1246v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1247v) {
  char* allocated=*__temp1247v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1247v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1248v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1249v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1250v) {
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
  *__temp1250v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1251v, uint64_t* __temp1252v, uint64_t* __temp1253v, uint64_t size, char** __temp1254v, uint64_t* __temp1255v, uint64_t* __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1251v;
  uint64_t buffer__unsafe_size=*__temp1252v;
  uint64_t buffer__unsafe_align=*__temp1253v;
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
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp545v(char** __temp1257v, uint64_t* __temp1258v, uint64_t* __temp1259v, char** __temp1260v, uint64_t* __temp1261v, uint64_t* __temp1262v, uint64_t* __temp1263v) {
  char* buffer__unsafe_ptr=*__temp1257v;
  uint64_t buffer__unsafe_size=*__temp1258v;
  uint64_t buffer__unsafe_align=*__temp1259v;
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
  *__temp1257v=buffer__unsafe_ptr;
  *__temp1258v=buffer__unsafe_size;
  *__temp1259v=buffer__unsafe_align;
  *__temp1260v=buffer__unsafe_ptr;
  *__temp1261v=buffer__unsafe_size;
  *__temp1262v=buffer__unsafe_align;
  *__temp1263v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1264v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1265v) {
  *__temp1265v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1266v) {
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
  *__temp1266v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1267v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) int resize__temp502v(char** __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v, uint64_t size, char** __temp1271v, uint64_t* __temp1272v, uint64_t* __temp1273v) {
  char* buffer__unsafe_ptr=*__temp1268v;
  uint64_t buffer__unsafe_size=*__temp1269v;
  uint64_t buffer__unsafe_align=*__temp1270v;
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
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  *__temp1271v=buffer__unsafe_ptr;
  *__temp1272v=buffer__unsafe_size;
  *__temp1273v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1274v=unsafe_ptr;
  *__temp1275v=unsafe_size;
  *__temp1276v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1277v) {
  *__temp1277v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1278v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1279v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1280v) {
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
  *__temp1280v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1281v, uint64_t* __temp1282v, uint64_t* __temp1283v, char* __temp1284v) {
  goto __temp_return;
  __temp_return:
  *__temp1281v=unsafe_ptr;
  *__temp1282v=dat__pos;
  *__temp1283v=dat__length;
  *__temp1284v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v, char* __temp1288v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1285v=__temp580v__unsafe_ptr;
  *__temp1286v=__temp580v__dat__pos;
  *__temp1287v=__temp580v__dat__length;
  *__temp1288v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, char* __temp1292v) {
  uint64_t __temp606v=0;
  char __temp607v__=0;
  char* __temp608v__=0;
  char __temp609v__value=0;
  char first=0;
  char* __temp610v__unsafe_ptr=0;
  uint64_t __temp610v__dat__pos=0;
  uint64_t __temp610v__dat__length=0;
  char __temp610v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp606v=0;
  neq__temp142v(length,__temp606v,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp608v__){
  goto __temp_failure;
  }
  memcpy(&__temp609v__value,__temp608v__,1);
  first=__temp609v__value;
  }
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp610v__unsafe_ptr,&__temp610v__dat__pos,&__temp610v__dat__length,&__temp610v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1289v=__temp610v__unsafe_ptr;
  *__temp1290v=__temp610v__dat__pos;
  *__temp1291v=__temp610v__dat__length;
  *__temp1292v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v, char* __temp1296v) {
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* __temp613v__unsafe_ptr=0;
  uint64_t __temp613v__unsafe_size=0;
  uint64_t __temp613v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp614v__=0;
  uint64_t length=0;
  uint64_t __temp615v=0;
  uint64_t __temp616v__=0;
  uint64_t __temp617v=0;
  char* __temp618v__unsafe_ptr=0;
  uint64_t __temp618v__dat__pos=0;
  uint64_t __temp618v__dat__length=0;
  char __temp618v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp612v__unsafe_ptr,&__temp612v__unsafe_size,&__temp612v__unsafe_align);
  __temp613v__unsafe_ptr=__temp612v__unsafe_ptr;
  __temp613v__unsafe_size=__temp612v__unsafe_size;
  __temp613v__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=__temp613v__unsafe_ptr;
  buf__unsafe_size=__temp613v__unsafe_size;
  buf__unsafe_align=__temp613v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp614v__);
  buf__unsafe_ptr=__temp614v__;
  if(c){
  length=strlen(c);
  }
  __temp615v=1;
  add__temp170v(length,__temp615v,&__temp616v__);
  buf__unsafe_size=__temp616v__;
  __temp617v=0;
  __temp_errcode=str__temp605v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp617v,length,&__temp618v__unsafe_ptr,&__temp618v__dat__pos,&__temp618v__dat__length,&__temp618v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1293v=__temp618v__unsafe_ptr;
  *__temp1294v=__temp618v__dat__pos;
  *__temp1295v=__temp618v__dat__length;
  *__temp1296v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp619v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1297v) {
  goto __temp_return;
  __temp_return:
  *__temp1297v=s__dat__length;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1298v) {
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
  *__temp1298v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp604v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1299v, uint64_t* __temp1300v, uint64_t* __temp1301v, char* __temp1302v) {
  goto __temp_return;
  __temp_return:
  *__temp1299v=other__unsafe_ptr;
  *__temp1300v=other__dat__pos;
  *__temp1301v=other__dat__length;
  *__temp1302v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1303v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) int copy__temp674v(char** __temp1304v, uint64_t* __temp1305v, uint64_t* __temp1306v, uint64_t* __temp1307v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1308v, uint64_t* __temp1309v, uint64_t* __temp1310v, char* __temp1311v) {
  char* buf__unsafe_ptr=*__temp1304v;
  uint64_t buf__unsafe_size=*__temp1305v;
  uint64_t buf__unsafe_align=*__temp1306v;
  uint64_t pos=*__temp1307v;
  char* __temp675v__unsafe_ptr=0;
  uint64_t __temp675v__dat__pos=0;
  uint64_t __temp675v__dat__length=0;
  char __temp675v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp676v__=0;
  uint64_t __temp677v__=0;
  uint64_t next_pos=0;
  uint64_t __temp678v__=0;
  char __temp679v__=0;
  uint64_t __temp680v=0;
  uint64_t __temp681v__=0;
  uint64_t prev_pos=0;
  char* __temp682v__unsafe_ptr=0;
  uint64_t __temp682v__dat__pos=0;
  uint64_t __temp682v__dat__length=0;
  char __temp682v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp604v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp675v__unsafe_ptr,&__temp675v__dat__pos,&__temp675v__dat__length,&__temp675v__dat__first);
  other__unsafe_ptr=__temp675v__unsafe_ptr;
  other__dat__pos=__temp675v__dat__pos;
  other__dat__length=__temp675v__dat__length;
  other__dat__first=__temp675v__dat__first;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp676v__);
  add__temp170v(pos,__temp676v__,&__temp677v__);
  next_pos=__temp677v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp678v__);
  gt__temp271v(next_pos,__temp678v__,&__temp679v__);
  if(__temp679v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp680v=0;
  add__temp170v(pos,__temp680v,&__temp681v__);
  prev_pos=__temp681v__;
  pos=next_pos;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp682v__unsafe_ptr,&__temp682v__dat__pos,&__temp682v__dat__length,&__temp682v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1304v=buf__unsafe_ptr;
  *__temp1305v=buf__unsafe_size;
  *__temp1306v=buf__unsafe_align;
  *__temp1307v=pos;
  *__temp1308v=__temp682v__unsafe_ptr;
  *__temp1309v=__temp682v__dat__pos;
  *__temp1310v=__temp682v__dat__length;
  *__temp1311v=__temp682v__dat__first;
  
  return __temp_errcode;
}

int copy__temp739v(char** __temp1312v, uint64_t* __temp1313v, uint64_t* __temp1314v, uint64_t* __temp1315v, const char* _other, char** __temp1316v, uint64_t* __temp1317v, uint64_t* __temp1318v, char* __temp1319v) {
  char* li__buffer__unsafe_ptr=*__temp1312v;
  uint64_t li__buffer__unsafe_size=*__temp1313v;
  uint64_t li__buffer__unsafe_align=*__temp1314v;
  uint64_t li__length=*__temp1315v;
  char* __temp740v__unsafe_ptr=0;
  uint64_t __temp740v__dat__pos=0;
  uint64_t __temp740v__dat__length=0;
  char __temp740v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp741v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp742v__=0;
  uint64_t __temp743v__=0;
  uint64_t prev_length=0;
  uint64_t __temp744v__=0;
  char __temp745v__=0;
  uint64_t __temp746v=0;
  uint64_t __temp747v__=0;
  uint64_t __temp748v=0;
  uint64_t __temp749v__=0;
  uint64_t __temp750v__=0;
  char* __temp751v__unsafe_ptr=0;
  uint64_t __temp751v__unsafe_size=0;
  uint64_t __temp751v__unsafe_align=0;
  char* __temp752v__unsafe_ptr=0;
  uint64_t __temp752v__dat__pos=0;
  uint64_t __temp752v__dat__length=0;
  char __temp752v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(_other,&__temp740v__unsafe_ptr,&__temp740v__dat__pos,&__temp740v__dat__length,&__temp740v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp740v__unsafe_ptr;
  other__dat__pos=__temp740v__dat__pos;
  other__dat__length=__temp740v__dat__length;
  other__dat__first=__temp740v__dat__first;
  __temp741v=li__length;
  prev_prev_length=__temp741v;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp742v__);
  add__temp170v(li__length,__temp742v__,&__temp743v__);
  prev_length=__temp743v__;
  len__temp537v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp744v__);
  ge__temp319v(prev_length,__temp744v__,&__temp745v__);
  if(__temp745v__){
  __temp746v=2;
  __temp_errcode=div__temp220v(prev_length,__temp746v,&__temp747v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp748v=1;
  add__temp170v(__temp747v__,__temp748v,&__temp749v__);
  add__temp170v(prev_length,__temp749v__,&__temp750v__);
  __temp_errcode=resize__temp502v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp750v__,&__temp751v__unsafe_ptr,&__temp751v__unsafe_size,&__temp751v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp751v__unsafe_ptr;
  li__buffer__unsafe_size=__temp751v__unsafe_size;
  li__buffer__unsafe_align=__temp751v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp674v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp752v__unsafe_ptr,&__temp752v__dat__pos,&__temp752v__dat__length,&__temp752v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1312v=li__buffer__unsafe_ptr;
  *__temp1313v=li__buffer__unsafe_size;
  *__temp1314v=li__buffer__unsafe_align;
  *__temp1315v=li__length;
  *__temp1316v=__temp752v__unsafe_ptr;
  *__temp1317v=__temp752v__dat__pos;
  *__temp1318v=__temp752v__dat__length;
  *__temp1319v=__temp752v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1220v(char** __temp1320v, uint64_t* __temp1321v, uint64_t* __temp1322v, char* __temp1323v, char** __temp1324v, uint64_t* __temp1325v, uint64_t* __temp1326v, char* __temp1327v) {
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  char* __temp1224v__unsafe_ptr=0;
  uint64_t __temp1224v__unsafe_size=0;
  uint64_t __temp1224v__unsafe_align=0;
  char* __temp1225v__buffer__unsafe_ptr=0;
  uint64_t __temp1225v__buffer__unsafe_size=0;
  uint64_t __temp1225v__buffer__unsafe_align=0;
  uint64_t __temp1225v__length=0;
  char __temp1226v____temp551v____temp469v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint64_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1227v=0;
  char* __temp1228v__unsafe_ptr=0;
  uint64_t __temp1228v__unsafe_size=0;
  uint64_t __temp1228v__unsafe_align=0;
  char* __temp1230v__unsafe_ptr=0;
  uint64_t __temp1230v__dat__pos=0;
  uint64_t __temp1230v__dat__length=0;
  char __temp1230v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1232v__unsafe_ptr=0;
  uint64_t __temp1232v__dat__pos=0;
  uint64_t __temp1232v__dat__length=0;
  char __temp1232v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1221v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align);
  __temp1224v__unsafe_ptr=__temp1223v__unsafe_ptr;
  __temp1224v__unsafe_size=__temp1223v__unsafe_size;
  __temp1224v__unsafe_align=__temp1223v__unsafe_align;
  __temp_errcode=list__temp545v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align,&__temp1225v__buffer__unsafe_ptr,&__temp1225v__buffer__unsafe_size,&__temp1225v__buffer__unsafe_align,&__temp1225v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1227v=100;
  __temp_errcode=resize__temp502v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align,__temp1227v,&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp739v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align,&__temp1224v__unsafe_size,__temp1229v,&__temp1230v__unsafe_ptr,&__temp1230v__dat__pos,&__temp1230v__dat__length,&__temp1230v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1230v__dat__pos;
  s1__dat__length=__temp1230v__dat__length;
  s1__dat__first=__temp1230v__dat__first;
  __temp_errcode=copy__temp739v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align,&__temp1224v__unsafe_size,__temp1231v,&__temp1232v__unsafe_ptr,&__temp1232v__dat__pos,&__temp1232v__dat__length,&__temp1232v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1232v__dat__pos;
  s2__dat__length=__temp1232v__dat__length;
  s2__dat__first=__temp1232v__dat__first;
  s1__unsafe_ptr=__temp1224v__unsafe_ptr;
  s2__unsafe_ptr=__temp1224v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(s1__unsafe_ptr,&__temp1226v____temp551v____temp469v__);
  if(__temp1226v____temp551v____temp469v__){
  __temp1225v__buffer__unsafe_size=0;
  __temp1225v__buffer__unsafe_size=__temp1225v__buffer__unsafe_size;
  free__temp461v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1320v=s1__unsafe_ptr;
  *__temp1321v=s1__dat__pos;
  *__temp1322v=s1__dat__length;
  *__temp1323v=s1__dat__first;
  *__temp1324v=s2__unsafe_ptr;
  *__temp1325v=s2__dat__pos;
  *__temp1326v=s2__dat__length;
  *__temp1327v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1233v() {
  char* __temp1234v__s1__unsafe_ptr=0;
  uint64_t __temp1234v__s1__dat__pos=0;
  uint64_t __temp1234v__s1__dat__length=0;
  char __temp1234v__s1__dat__first=0;
  char* __temp1234v__s2__unsafe_ptr=0;
  uint64_t __temp1234v__s2__dat__pos=0;
  uint64_t __temp1234v__s2__dat__length=0;
  char __temp1234v__s2__dat__first=0;
  char __temp1235v____temp1226v____temp551v____temp469v__=0;
  uint64_t __temp1235v____temp1225v__buffer__unsafe_size=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1220v(&__temp1234v__s1__unsafe_ptr,&__temp1234v__s1__dat__pos,&__temp1234v__s1__dat__length,&__temp1234v__s1__dat__first,&__temp1234v__s2__unsafe_ptr,&__temp1234v__s2__dat__pos,&__temp1234v__s2__dat__length,&__temp1234v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1234v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1234v__s1__dat__pos;
  s__s1__dat__length=__temp1234v__s1__dat__length;
  s__s1__dat__first=__temp1234v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1234v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1234v__s2__dat__pos;
  s__s2__dat__length=__temp1234v__s2__dat__length;
  s__s2__dat__first=__temp1234v__s2__dat__first;
  print__temp714v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp714v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp412v(__temp1234v__s1__unsafe_ptr,&__temp1235v____temp1226v____temp551v____temp469v__);
  if(__temp1235v____temp1226v____temp551v____temp469v__){
  __temp1235v____temp1225v__buffer__unsafe_size=0;
  __temp1235v____temp1225v__buffer__unsafe_size=__temp1235v____temp1225v__buffer__unsafe_size;
  free__temp461v(&__temp1234v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1233v();return 0;}