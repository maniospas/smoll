#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1231v="123";
const char* const __temp1233v="456";
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative int to id",
"cannot convert negative float to id",
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1223v(char** __temp1240v, uint64_t* __temp1241v, uint64_t* __temp1242v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1240v=unsafe_ptr;
  *__temp1241v=unsafe_size;
  *__temp1242v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1243v) {
  goto __temp_return;
  __temp_return:
  *__temp1243v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1244v) {
  int value=0;
  *__temp1244v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1245v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1245v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(uint64_t x, uint64_t y, int* __temp1246v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1246v=__temp71v__;
}

static inline __attribute__((always_inline)) void eq__temp96v(uint64_t x, uint64_t y, char* __temp1247v) {
  int __temp97v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp97v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1248v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1249v) {
  char* allocated=*__temp1249v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1249v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp120v(uint64_t x, uint64_t y, char* __temp1250v) {
  int __temp121v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp121v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void mul__temp172v(uint64_t x, uint64_t y, uint64_t* __temp1251v) {
  int __temp173v__=0;
  uint64_t z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1252v) {
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
  *__temp1252v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, uint64_t size, char** __temp1256v, uint64_t* __temp1257v, uint64_t* __temp1258v) {
  char* buffer__unsafe_ptr=*__temp1253v;
  uint64_t buffer__unsafe_size=*__temp1254v;
  uint64_t buffer__unsafe_align=*__temp1255v;
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
  eq__temp96v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp120v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp172v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp120v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp172v(buffer__unsafe_align,size,&__temp480v__);
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
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  *__temp1256v=buffer__unsafe_ptr;
  *__temp1257v=buffer__unsafe_size;
  *__temp1258v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp545v(char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v, char** __temp1262v, uint64_t* __temp1263v, uint64_t* __temp1264v, uint64_t* __temp1265v) {
  char* buffer__unsafe_ptr=*__temp1259v;
  uint64_t buffer__unsafe_size=*__temp1260v;
  uint64_t buffer__unsafe_align=*__temp1261v;
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
  eq__temp96v(__temp546v,__temp547v__,&__temp548v__);
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
  *__temp1259v=buffer__unsafe_ptr;
  *__temp1260v=buffer__unsafe_size;
  *__temp1261v=buffer__unsafe_align;
  *__temp1262v=buffer__unsafe_ptr;
  *__temp1263v=buffer__unsafe_size;
  *__temp1264v=buffer__unsafe_align;
  *__temp1265v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp297v(uint64_t x, uint64_t y, char* __temp1266v) {
  int __temp298v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp298v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1267v) {
  *__temp1267v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1268v) {
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
  *__temp1268v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp225v(uint64_t x, uint64_t y, char* __temp1269v) {
  int __temp226v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp226v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) int resize__temp502v(char** __temp1270v, uint64_t* __temp1271v, uint64_t* __temp1272v, uint64_t size, char** __temp1273v, uint64_t* __temp1274v, uint64_t* __temp1275v) {
  char* buffer__unsafe_ptr=*__temp1270v;
  uint64_t buffer__unsafe_size=*__temp1271v;
  uint64_t buffer__unsafe_align=*__temp1272v;
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
  ge__temp297v(buffer__unsafe_size,size,&__temp503v__);
  if(__temp503v__){
  goto __temp_return;
  }
  __temp504v=0;
  eq__temp96v(size,__temp504v,&__temp505v__);
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
  eq__temp96v(buffer__unsafe_size,__temp508v,&__temp509v__);
  if(__temp509v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp172v(buffer__unsafe_size,buffer__unsafe_align,&__temp510v__);
  prev_bytes=__temp510v__;
  buffer__unsafe_size=size;
  mul__temp172v(buffer__unsafe_align,size,&__temp511v__);
  bytes=__temp511v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp512v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp512v__;
  lt__temp225v(prev_bytes,bytes,&__temp513v__);
  if(__temp513v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  *__temp1273v=buffer__unsafe_ptr;
  *__temp1274v=buffer__unsafe_size;
  *__temp1275v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1276v, uint64_t* __temp1277v, uint64_t* __temp1278v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1276v=unsafe_ptr;
  *__temp1277v=unsafe_size;
  *__temp1278v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1279v) {
  *__temp1279v=to;
}

static inline __attribute__((always_inline)) void add__temp148v(uint64_t x, uint64_t y, uint64_t* __temp1280v) {
  int __temp149v__=0;
  uint64_t z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1281v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1281v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1282v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp297v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp172v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1282v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1283v, uint64_t* __temp1284v, uint64_t* __temp1285v, char* __temp1286v) {
  goto __temp_return;
  __temp_return:
  *__temp1283v=unsafe_ptr;
  *__temp1284v=dat__pos;
  *__temp1285v=dat__length;
  *__temp1286v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1287v, uint64_t* __temp1288v, uint64_t* __temp1289v, char* __temp1290v) {
  char* unsafe_ptr=0;
  uint64_t __temp580v=0;
  char __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__dat__pos=0;
  uint64_t __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  __temp580v=1;
  neq__temp120v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1287v=__temp582v__unsafe_ptr;
  *__temp1288v=__temp582v__dat__pos;
  *__temp1289v=__temp582v__dat__length;
  *__temp1290v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1291v, uint64_t* __temp1292v, uint64_t* __temp1293v, char* __temp1294v) {
  uint64_t __temp608v=0;
  char __temp609v__=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char first=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp608v=0;
  neq__temp120v(length,__temp608v,&__temp609v__);
  if(__temp609v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  first=__temp611v__value;
  }
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1291v=__temp612v__unsafe_ptr;
  *__temp1292v=__temp612v__dat__pos;
  *__temp1293v=__temp612v__dat__length;
  *__temp1294v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1295v, uint64_t* __temp1296v, uint64_t* __temp1297v, char* __temp1298v) {
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__unsafe_size=0;
  uint64_t __temp614v__unsafe_align=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__unsafe_size=0;
  uint64_t __temp615v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp616v__=0;
  uint64_t length=0;
  uint64_t __temp617v=0;
  uint64_t __temp618v__=0;
  uint64_t __temp619v=0;
  char* __temp620v__unsafe_ptr=0;
  uint64_t __temp620v__dat__pos=0;
  uint64_t __temp620v__dat__length=0;
  char __temp620v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp614v__unsafe_ptr,&__temp614v__unsafe_size,&__temp614v__unsafe_align);
  __temp615v__unsafe_ptr=__temp614v__unsafe_ptr;
  __temp615v__unsafe_size=__temp614v__unsafe_size;
  __temp615v__unsafe_align=__temp614v__unsafe_align;
  buf__unsafe_ptr=__temp615v__unsafe_ptr;
  buf__unsafe_size=__temp615v__unsafe_size;
  buf__unsafe_align=__temp615v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp616v__);
  buf__unsafe_ptr=__temp616v__;
  if(c){
  length=strlen(c);
  }
  __temp617v=1;
  add__temp148v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1295v=__temp620v__unsafe_ptr;
  *__temp1296v=__temp620v__dat__pos;
  *__temp1297v=__temp620v__dat__length;
  *__temp1298v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1299v) {
  goto __temp_return;
  __temp_return:
  *__temp1299v=s__dat__length;
}

static inline __attribute__((always_inline)) int div__temp196v(uint64_t x, uint64_t y, uint64_t* __temp1300v) {
  int __temp197v__=0;
  uint64_t zero=0;
  char __temp198v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp69v(x,y,&__temp197v__);
  zero=0;
  eq__temp96v(y,zero,&__temp198v__);
  if(__temp198v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x/y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1300v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp606v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v, char* __temp1304v) {
  goto __temp_return;
  __temp_return:
  *__temp1301v=other__unsafe_ptr;
  *__temp1302v=other__dat__pos;
  *__temp1303v=other__dat__length;
  *__temp1304v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp249v(uint64_t x, uint64_t y, char* __temp1305v) {
  int __temp250v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp250v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1306v, uint64_t* __temp1307v, uint64_t* __temp1308v, uint64_t* __temp1309v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1310v, uint64_t* __temp1311v, uint64_t* __temp1312v, char* __temp1313v) {
  char* buf__unsafe_ptr=*__temp1306v;
  uint64_t buf__unsafe_size=*__temp1307v;
  uint64_t buf__unsafe_align=*__temp1308v;
  uint64_t pos=*__temp1309v;
  char* __temp677v__unsafe_ptr=0;
  uint64_t __temp677v__dat__pos=0;
  uint64_t __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp678v__=0;
  uint64_t __temp679v__=0;
  uint64_t next_pos=0;
  uint64_t __temp680v__=0;
  char __temp681v__=0;
  uint64_t __temp682v=0;
  uint64_t __temp683v__=0;
  uint64_t prev_pos=0;
  char* __temp684v__unsafe_ptr=0;
  uint64_t __temp684v__dat__pos=0;
  uint64_t __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp677v__unsafe_ptr,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  other__unsafe_ptr=__temp677v__unsafe_ptr;
  other__dat__pos=__temp677v__dat__pos;
  other__dat__length=__temp677v__dat__length;
  other__dat__first=__temp677v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp678v__);
  add__temp148v(pos,__temp678v__,&__temp679v__);
  next_pos=__temp679v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp680v__);
  gt__temp249v(next_pos,__temp680v__,&__temp681v__);
  if(__temp681v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp682v=0;
  add__temp148v(pos,__temp682v,&__temp683v__);
  prev_pos=__temp683v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp684v__unsafe_ptr,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1306v=buf__unsafe_ptr;
  *__temp1307v=buf__unsafe_size;
  *__temp1308v=buf__unsafe_align;
  *__temp1309v=pos;
  *__temp1310v=__temp684v__unsafe_ptr;
  *__temp1311v=__temp684v__dat__pos;
  *__temp1312v=__temp684v__dat__length;
  *__temp1313v=__temp684v__dat__first;
  
  return __temp_errcode;
}

int copy__temp741v(char** __temp1314v, uint64_t* __temp1315v, uint64_t* __temp1316v, uint64_t* __temp1317v, const char* _other, char** __temp1318v, uint64_t* __temp1319v, uint64_t* __temp1320v, char* __temp1321v) {
  char* li__buffer__unsafe_ptr=*__temp1314v;
  uint64_t li__buffer__unsafe_size=*__temp1315v;
  uint64_t li__buffer__unsafe_align=*__temp1316v;
  uint64_t li__length=*__temp1317v;
  char* __temp742v__unsafe_ptr=0;
  uint64_t __temp742v__dat__pos=0;
  uint64_t __temp742v__dat__length=0;
  char __temp742v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp743v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp744v__=0;
  uint64_t __temp745v__=0;
  uint64_t prev_length=0;
  uint64_t __temp746v__=0;
  char __temp747v__=0;
  uint64_t __temp748v=0;
  uint64_t __temp749v__=0;
  uint64_t __temp750v=0;
  uint64_t __temp751v__=0;
  uint64_t __temp752v__=0;
  char* __temp753v__unsafe_ptr=0;
  uint64_t __temp753v__unsafe_size=0;
  uint64_t __temp753v__unsafe_align=0;
  char* __temp754v__unsafe_ptr=0;
  uint64_t __temp754v__dat__pos=0;
  uint64_t __temp754v__dat__length=0;
  char __temp754v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(_other,&__temp742v__unsafe_ptr,&__temp742v__dat__pos,&__temp742v__dat__length,&__temp742v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp742v__unsafe_ptr;
  other__dat__pos=__temp742v__dat__pos;
  other__dat__length=__temp742v__dat__length;
  other__dat__first=__temp742v__dat__first;
  __temp743v=li__length;
  prev_prev_length=__temp743v;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp744v__);
  add__temp148v(li__length,__temp744v__,&__temp745v__);
  prev_length=__temp745v__;
  len__temp537v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp746v__);
  ge__temp297v(prev_length,__temp746v__,&__temp747v__);
  if(__temp747v__){
  __temp748v=2;
  __temp_errcode=div__temp196v(prev_length,__temp748v,&__temp749v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp750v=1;
  add__temp148v(__temp749v__,__temp750v,&__temp751v__);
  add__temp148v(prev_length,__temp751v__,&__temp752v__);
  __temp_errcode=resize__temp502v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp752v__,&__temp753v__unsafe_ptr,&__temp753v__unsafe_size,&__temp753v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp753v__unsafe_ptr;
  li__buffer__unsafe_size=__temp753v__unsafe_size;
  li__buffer__unsafe_align=__temp753v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp676v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp754v__unsafe_ptr,&__temp754v__dat__pos,&__temp754v__dat__length,&__temp754v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1314v=li__buffer__unsafe_ptr;
  *__temp1315v=li__buffer__unsafe_size;
  *__temp1316v=li__buffer__unsafe_align;
  *__temp1317v=li__length;
  *__temp1318v=__temp754v__unsafe_ptr;
  *__temp1319v=__temp754v__dat__pos;
  *__temp1320v=__temp754v__dat__length;
  *__temp1321v=__temp754v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1222v(char** __temp1322v, uint64_t* __temp1323v, uint64_t* __temp1324v, char* __temp1325v, char** __temp1326v, uint64_t* __temp1327v, uint64_t* __temp1328v, char* __temp1329v) {
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
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint64_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1229v=0;
  char* __temp1230v__unsafe_ptr=0;
  uint64_t __temp1230v__unsafe_size=0;
  uint64_t __temp1230v__unsafe_align=0;
  char* __temp1232v__unsafe_ptr=0;
  uint64_t __temp1232v__dat__pos=0;
  uint64_t __temp1232v__dat__length=0;
  char __temp1232v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1234v__unsafe_ptr=0;
  uint64_t __temp1234v__dat__pos=0;
  uint64_t __temp1234v__dat__length=0;
  char __temp1234v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1223v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp_errcode=list__temp545v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1227v__buffer__unsafe_ptr,&__temp1227v__buffer__unsafe_size,&__temp1227v__buffer__unsafe_align,&__temp1227v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1229v=100;
  __temp_errcode=resize__temp502v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,__temp1229v,&__temp1230v__unsafe_ptr,&__temp1230v__unsafe_size,&__temp1230v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp741v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,__temp1231v,&__temp1232v__unsafe_ptr,&__temp1232v__dat__pos,&__temp1232v__dat__length,&__temp1232v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1232v__dat__pos;
  s1__dat__length=__temp1232v__dat__length;
  s1__dat__first=__temp1232v__dat__first;
  __temp_errcode=copy__temp741v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1226v__unsafe_size,__temp1233v,&__temp1234v__unsafe_ptr,&__temp1234v__dat__pos,&__temp1234v__dat__length,&__temp1234v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1234v__dat__pos;
  s2__dat__length=__temp1234v__dat__length;
  s2__dat__first=__temp1234v__dat__first;
  s1__unsafe_ptr=__temp1226v__unsafe_ptr;
  s2__unsafe_ptr=__temp1226v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(s1__unsafe_ptr,&__temp1228v____temp551v____temp469v__);
  if(__temp1228v____temp551v____temp469v__){
  __temp1227v__buffer__unsafe_size=0;
  __temp1227v__buffer__unsafe_size=__temp1227v__buffer__unsafe_size;
  free__temp461v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1322v=s1__unsafe_ptr;
  *__temp1323v=s1__dat__pos;
  *__temp1324v=s1__dat__length;
  *__temp1325v=s1__dat__first;
  *__temp1326v=s2__unsafe_ptr;
  *__temp1327v=s2__dat__pos;
  *__temp1328v=s2__dat__length;
  *__temp1329v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp716v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp717v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1235v() {
  char* __temp1236v__s1__unsafe_ptr=0;
  uint64_t __temp1236v__s1__dat__pos=0;
  uint64_t __temp1236v__s1__dat__length=0;
  char __temp1236v__s1__dat__first=0;
  char* __temp1236v__s2__unsafe_ptr=0;
  uint64_t __temp1236v__s2__dat__pos=0;
  uint64_t __temp1236v__s2__dat__length=0;
  char __temp1236v__s2__dat__first=0;
  char __temp1237v____temp1228v____temp551v____temp469v__=0;
  uint64_t __temp1237v____temp1227v__buffer__unsafe_size=0;
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
  __temp_errcode=test__temp1222v(&__temp1236v__s1__unsafe_ptr,&__temp1236v__s1__dat__pos,&__temp1236v__s1__dat__length,&__temp1236v__s1__dat__first,&__temp1236v__s2__unsafe_ptr,&__temp1236v__s2__dat__pos,&__temp1236v__s2__dat__length,&__temp1236v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1236v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1236v__s1__dat__pos;
  s__s1__dat__length=__temp1236v__s1__dat__length;
  s__s1__dat__first=__temp1236v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1236v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1236v__s2__dat__pos;
  s__s2__dat__length=__temp1236v__s2__dat__length;
  s__s2__dat__first=__temp1236v__s2__dat__first;
  print__temp716v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp716v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp412v(__temp1236v__s1__unsafe_ptr,&__temp1237v____temp1228v____temp551v____temp469v__);
  if(__temp1237v____temp1228v____temp551v____temp469v__){
  __temp1237v____temp1227v__buffer__unsafe_size=0;
  __temp1237v____temp1227v__buffer__unsafe_size=__temp1237v____temp1227v__buffer__unsafe_size;
  free__temp461v(&__temp1236v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1235v();return 0;}