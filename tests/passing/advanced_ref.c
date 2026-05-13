#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1228v="123";
const char* const __temp1230v="456";
const char* const __temp364v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1220v(char** __temp1237v, uint64_t* __temp1238v, uint64_t* __temp1239v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1237v=unsafe_ptr;
  *__temp1238v=unsafe_size;
  *__temp1239v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1240v) {
  goto __temp_return;
  __temp_return:
  *__temp1240v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1241v) {
  int value=0;
  *__temp1241v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1242v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1242v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1243v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1243v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1244v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1245v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1246v) {
  char* allocated=*__temp1246v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1246v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1247v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1248v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1249v) {
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
  *__temp1249v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1250v, uint64_t* __temp1251v, uint64_t* __temp1252v, uint64_t size, char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v) {
  char* buffer__unsafe_ptr=*__temp1250v;
  uint64_t buffer__unsafe_size=*__temp1251v;
  uint64_t buffer__unsafe_align=*__temp1252v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1250v=buffer__unsafe_ptr;
  *__temp1251v=buffer__unsafe_size;
  *__temp1252v=buffer__unsafe_align;
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp544v(char** __temp1256v, uint64_t* __temp1257v, uint64_t* __temp1258v, char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v, uint64_t* __temp1262v) {
  char* buffer__unsafe_ptr=*__temp1256v;
  uint64_t buffer__unsafe_size=*__temp1257v;
  uint64_t buffer__unsafe_align=*__temp1258v;
  uint64_t __temp545v=0;
  uint64_t __temp546v__=0;
  char __temp547v__=0;
  uint64_t __temp548v=0;
  char* __temp549v__unsafe_ptr=0;
  uint64_t __temp549v__unsafe_size=0;
  uint64_t __temp549v__unsafe_align=0;
  char __temp550v____temp468v__=0;
  uint64_t __temp551v__=0;
  uint64_t __temp552v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp545v=0;
  len__temp536v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp546v__);
  eq__temp117v(__temp545v,__temp546v__,&__temp547v__);
  if(__temp547v__){
  __temp548v=1;
  __temp_errcode=alloc__temp466v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp548v,&__temp549v__unsafe_ptr,&__temp549v__unsafe_size,&__temp549v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp549v__unsafe_ptr;
  buffer__unsafe_size=__temp549v__unsafe_size;
  buffer__unsafe_align=__temp549v__unsafe_align;
  }
  len__temp536v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp551v__);
  __temp552v=__temp551v__;
  length=__temp552v;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp550v____temp468v__);
  if(__temp550v____temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1256v=buffer__unsafe_ptr;
  *__temp1257v=buffer__unsafe_size;
  *__temp1258v=buffer__unsafe_align;
  *__temp1259v=buffer__unsafe_ptr;
  *__temp1260v=buffer__unsafe_size;
  *__temp1261v=buffer__unsafe_align;
  *__temp1262v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1263v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1264v) {
  *__temp1264v=to;
}

static inline __attribute__((always_inline)) int realloc__temp458v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1265v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp459v__=0;
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
  attach_type__temp19v(new_allocated,allocated__unsafe_ptr,&__temp459v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1265v=__temp459v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1266v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) int resize__temp501v(char** __temp1267v, uint64_t* __temp1268v, uint64_t* __temp1269v, uint64_t size, char** __temp1270v, uint64_t* __temp1271v, uint64_t* __temp1272v) {
  char* buffer__unsafe_ptr=*__temp1267v;
  uint64_t buffer__unsafe_size=*__temp1268v;
  uint64_t buffer__unsafe_align=*__temp1269v;
  char __temp502v__=0;
  uint64_t __temp503v=0;
  char __temp504v__=0;
  uint64_t __temp505v=0;
  uint64_t __temp507v=0;
  char __temp508v__=0;
  uint64_t __temp509v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp510v__=0;
  uint64_t bytes=0;
  char* __temp511v__=0;
  char __temp512v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(buffer__unsafe_size,size,&__temp502v__);
  if(__temp502v__){
  goto __temp_return;
  }
  __temp503v=0;
  eq__temp117v(size,__temp503v,&__temp504v__);
  if(__temp504v__){
  __temp505v=0;
  buffer__unsafe_size=__temp505v;
  free__temp460v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp507v=0;
  eq__temp117v(buffer__unsafe_size,__temp507v,&__temp508v__);
  if(__temp508v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_size,buffer__unsafe_align,&__temp509v__);
  prev_bytes=__temp509v__;
  buffer__unsafe_size=size;
  mul__temp193v(buffer__unsafe_align,size,&__temp510v__);
  bytes=__temp510v__;
  __temp_errcode=realloc__temp458v(buffer__unsafe_ptr,bytes,&__temp511v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp511v__;
  lt__temp246v(prev_bytes,bytes,&__temp512v__);
  if(__temp512v__){
  zero__temp461v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1267v=buffer__unsafe_ptr;
  *__temp1268v=buffer__unsafe_size;
  *__temp1269v=buffer__unsafe_align;
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1273v, uint64_t* __temp1274v, uint64_t* __temp1275v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1273v=unsafe_ptr;
  *__temp1274v=unsafe_size;
  *__temp1275v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1276v) {
  *__temp1276v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1277v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1278v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1278v=__temp463v__;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1279v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1279v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1280v, uint64_t* __temp1281v, uint64_t* __temp1282v, char* __temp1283v) {
  goto __temp_return;
  __temp_return:
  *__temp1280v=unsafe_ptr;
  *__temp1281v=dat__pos;
  *__temp1282v=dat__length;
  *__temp1283v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1284v, uint64_t* __temp1285v, uint64_t* __temp1286v, char* __temp1287v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1284v=__temp579v__unsafe_ptr;
  *__temp1285v=__temp579v__dat__pos;
  *__temp1286v=__temp579v__dat__length;
  *__temp1287v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1288v, uint64_t* __temp1289v, uint64_t* __temp1290v, char* __temp1291v) {
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__=0;
  char __temp608v__value=0;
  char first=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__dat__pos=0;
  uint64_t __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=0;
  neq__temp141v(length,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp607v__){
  goto __temp_failure;
  }
  memcpy(&__temp608v__value,__temp607v__,1);
  first=__temp608v__value;
  }
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp609v__unsafe_ptr,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1288v=__temp609v__unsafe_ptr;
  *__temp1289v=__temp609v__dat__pos;
  *__temp1290v=__temp609v__dat__length;
  *__temp1291v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1292v, uint64_t* __temp1293v, uint64_t* __temp1294v, char* __temp1295v) {
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__unsafe_size=0;
  uint64_t __temp611v__unsafe_align=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp613v__=0;
  uint64_t length=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v__=0;
  uint64_t __temp616v=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp611v__unsafe_ptr,&__temp611v__unsafe_size,&__temp611v__unsafe_align);
  __temp612v__unsafe_ptr=__temp611v__unsafe_ptr;
  __temp612v__unsafe_size=__temp611v__unsafe_size;
  __temp612v__unsafe_align=__temp611v__unsafe_align;
  buf__unsafe_ptr=__temp612v__unsafe_ptr;
  buf__unsafe_size=__temp612v__unsafe_size;
  buf__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp20v(buf__unsafe_ptr,c,&__temp613v__);
  buf__unsafe_ptr=__temp613v__;
  if(c){
  length=strlen(c);
  }
  __temp614v=1;
  add__temp169v(length,__temp614v,&__temp615v__);
  buf__unsafe_size=__temp615v__;
  __temp616v=0;
  __temp_errcode=str__temp604v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp616v,length,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1292v=__temp617v__unsafe_ptr;
  *__temp1293v=__temp617v__dat__pos;
  *__temp1294v=__temp617v__dat__length;
  *__temp1295v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp618v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1296v) {
  goto __temp_return;
  __temp_return:
  *__temp1296v=s__dat__length;
}

static inline __attribute__((always_inline)) int div__temp219v(uint64_t x, uint64_t y, uint64_t* __temp1297v) {
  int __temp220v__=0;
  uint64_t zero=0;
  char __temp221v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp220v__);
  zero=0;
  eq__temp117v(y,zero,&__temp221v__);
  if(__temp221v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x/y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1297v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp603v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1298v, uint64_t* __temp1299v, uint64_t* __temp1300v, char* __temp1301v) {
  goto __temp_return;
  __temp_return:
  *__temp1298v=other__unsafe_ptr;
  *__temp1299v=other__dat__pos;
  *__temp1300v=other__dat__length;
  *__temp1301v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp270v(uint64_t x, uint64_t y, char* __temp1302v) {
  int __temp271v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp271v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) int copy__temp673v(char** __temp1303v, uint64_t* __temp1304v, uint64_t* __temp1305v, uint64_t* __temp1306v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1307v, uint64_t* __temp1308v, uint64_t* __temp1309v, char* __temp1310v) {
  char* buf__unsafe_ptr=*__temp1303v;
  uint64_t buf__unsafe_size=*__temp1304v;
  uint64_t buf__unsafe_align=*__temp1305v;
  uint64_t pos=*__temp1306v;
  char* __temp674v__unsafe_ptr=0;
  uint64_t __temp674v__dat__pos=0;
  uint64_t __temp674v__dat__length=0;
  char __temp674v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp675v__=0;
  uint64_t __temp676v__=0;
  uint64_t next_pos=0;
  uint64_t __temp677v__=0;
  char __temp678v__=0;
  uint64_t __temp679v=0;
  uint64_t __temp680v__=0;
  uint64_t prev_pos=0;
  char* __temp681v__unsafe_ptr=0;
  uint64_t __temp681v__dat__pos=0;
  uint64_t __temp681v__dat__length=0;
  char __temp681v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp603v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp674v__unsafe_ptr,&__temp674v__dat__pos,&__temp674v__dat__length,&__temp674v__dat__first);
  other__unsafe_ptr=__temp674v__unsafe_ptr;
  other__dat__pos=__temp674v__dat__pos;
  other__dat__length=__temp674v__dat__length;
  other__dat__first=__temp674v__dat__first;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp675v__);
  add__temp169v(pos,__temp675v__,&__temp676v__);
  next_pos=__temp676v__;
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp677v__);
  gt__temp270v(next_pos,__temp677v__,&__temp678v__);
  if(__temp678v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp679v=0;
  add__temp169v(pos,__temp679v,&__temp680v__);
  prev_pos=__temp680v__;
  pos=next_pos;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp681v__unsafe_ptr,&__temp681v__dat__pos,&__temp681v__dat__length,&__temp681v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1303v=buf__unsafe_ptr;
  *__temp1304v=buf__unsafe_size;
  *__temp1305v=buf__unsafe_align;
  *__temp1306v=pos;
  *__temp1307v=__temp681v__unsafe_ptr;
  *__temp1308v=__temp681v__dat__pos;
  *__temp1309v=__temp681v__dat__length;
  *__temp1310v=__temp681v__dat__first;
  
  return __temp_errcode;
}

int copy__temp738v(char** __temp1311v, uint64_t* __temp1312v, uint64_t* __temp1313v, uint64_t* __temp1314v, const char* _other, char** __temp1315v, uint64_t* __temp1316v, uint64_t* __temp1317v, char* __temp1318v) {
  char* li__buffer__unsafe_ptr=*__temp1311v;
  uint64_t li__buffer__unsafe_size=*__temp1312v;
  uint64_t li__buffer__unsafe_align=*__temp1313v;
  uint64_t li__length=*__temp1314v;
  char* __temp739v__unsafe_ptr=0;
  uint64_t __temp739v__dat__pos=0;
  uint64_t __temp739v__dat__length=0;
  char __temp739v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp740v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp741v__=0;
  uint64_t __temp742v__=0;
  uint64_t prev_length=0;
  uint64_t __temp743v__=0;
  char __temp744v__=0;
  uint64_t __temp745v=0;
  uint64_t __temp746v__=0;
  uint64_t __temp747v=0;
  uint64_t __temp748v__=0;
  uint64_t __temp749v__=0;
  char* __temp750v__unsafe_ptr=0;
  uint64_t __temp750v__unsafe_size=0;
  uint64_t __temp750v__unsafe_align=0;
  char* __temp751v__unsafe_ptr=0;
  uint64_t __temp751v__dat__pos=0;
  uint64_t __temp751v__dat__length=0;
  char __temp751v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp610v(_other,&__temp739v__unsafe_ptr,&__temp739v__dat__pos,&__temp739v__dat__length,&__temp739v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp739v__unsafe_ptr;
  other__dat__pos=__temp739v__dat__pos;
  other__dat__length=__temp739v__dat__length;
  other__dat__first=__temp739v__dat__first;
  __temp740v=li__length;
  prev_prev_length=__temp740v;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp741v__);
  add__temp169v(li__length,__temp741v__,&__temp742v__);
  prev_length=__temp742v__;
  len__temp536v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp743v__);
  ge__temp318v(prev_length,__temp743v__,&__temp744v__);
  if(__temp744v__){
  __temp745v=2;
  __temp_errcode=div__temp219v(prev_length,__temp745v,&__temp746v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp747v=1;
  add__temp169v(__temp746v__,__temp747v,&__temp748v__);
  add__temp169v(prev_length,__temp748v__,&__temp749v__);
  __temp_errcode=resize__temp501v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp749v__,&__temp750v__unsafe_ptr,&__temp750v__unsafe_size,&__temp750v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp750v__unsafe_ptr;
  li__buffer__unsafe_size=__temp750v__unsafe_size;
  li__buffer__unsafe_align=__temp750v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp673v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp751v__unsafe_ptr,&__temp751v__dat__pos,&__temp751v__dat__length,&__temp751v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1311v=li__buffer__unsafe_ptr;
  *__temp1312v=li__buffer__unsafe_size;
  *__temp1313v=li__buffer__unsafe_align;
  *__temp1314v=li__length;
  *__temp1315v=__temp751v__unsafe_ptr;
  *__temp1316v=__temp751v__dat__pos;
  *__temp1317v=__temp751v__dat__length;
  *__temp1318v=__temp751v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1219v(char** __temp1319v, uint64_t* __temp1320v, uint64_t* __temp1321v, char* __temp1322v, char** __temp1323v, uint64_t* __temp1324v, uint64_t* __temp1325v, char* __temp1326v) {
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  char* __temp1224v__buffer__unsafe_ptr=0;
  uint64_t __temp1224v__buffer__unsafe_size=0;
  uint64_t __temp1224v__buffer__unsafe_align=0;
  uint64_t __temp1224v__length=0;
  char __temp1225v____temp550v____temp468v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint64_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1226v=0;
  char* __temp1227v__unsafe_ptr=0;
  uint64_t __temp1227v__unsafe_size=0;
  uint64_t __temp1227v__unsafe_align=0;
  char* __temp1229v__unsafe_ptr=0;
  uint64_t __temp1229v__dat__pos=0;
  uint64_t __temp1229v__dat__length=0;
  char __temp1229v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1231v__unsafe_ptr=0;
  uint64_t __temp1231v__dat__pos=0;
  uint64_t __temp1231v__dat__length=0;
  char __temp1231v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1220v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  __temp1223v__unsafe_ptr=__temp1222v__unsafe_ptr;
  __temp1223v__unsafe_size=__temp1222v__unsafe_size;
  __temp1223v__unsafe_align=__temp1222v__unsafe_align;
  __temp_errcode=list__temp544v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,&__temp1224v__buffer__unsafe_ptr,&__temp1224v__buffer__unsafe_size,&__temp1224v__buffer__unsafe_align,&__temp1224v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1226v=100;
  __temp_errcode=resize__temp501v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,__temp1226v,&__temp1227v__unsafe_ptr,&__temp1227v__unsafe_size,&__temp1227v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp738v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,&__temp1223v__unsafe_size,__temp1228v,&__temp1229v__unsafe_ptr,&__temp1229v__dat__pos,&__temp1229v__dat__length,&__temp1229v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1229v__dat__pos;
  s1__dat__length=__temp1229v__dat__length;
  s1__dat__first=__temp1229v__dat__first;
  __temp_errcode=copy__temp738v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,&__temp1223v__unsafe_size,__temp1230v,&__temp1231v__unsafe_ptr,&__temp1231v__dat__pos,&__temp1231v__dat__length,&__temp1231v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1231v__dat__pos;
  s2__dat__length=__temp1231v__dat__length;
  s2__dat__first=__temp1231v__dat__first;
  s1__unsafe_ptr=__temp1223v__unsafe_ptr;
  s2__unsafe_ptr=__temp1223v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(s1__unsafe_ptr,&__temp1225v____temp550v____temp468v__);
  if(__temp1225v____temp550v____temp468v__){
  __temp1224v__buffer__unsafe_size=0;
  __temp1224v__buffer__unsafe_size=__temp1224v__buffer__unsafe_size;
  free__temp460v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1319v=s1__unsafe_ptr;
  *__temp1320v=s1__dat__pos;
  *__temp1321v=s1__dat__length;
  *__temp1322v=s1__dat__first;
  *__temp1323v=s2__unsafe_ptr;
  *__temp1324v=s2__dat__pos;
  *__temp1325v=s2__dat__length;
  *__temp1326v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp715v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp716v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1232v() {
  char* __temp1233v__s1__unsafe_ptr=0;
  uint64_t __temp1233v__s1__dat__pos=0;
  uint64_t __temp1233v__s1__dat__length=0;
  char __temp1233v__s1__dat__first=0;
  char* __temp1233v__s2__unsafe_ptr=0;
  uint64_t __temp1233v__s2__dat__pos=0;
  uint64_t __temp1233v__s2__dat__length=0;
  char __temp1233v__s2__dat__first=0;
  char __temp1234v____temp1225v____temp550v____temp468v__=0;
  uint64_t __temp1234v____temp1224v__buffer__unsafe_size=0;
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
  __temp_errcode=test__temp1219v(&__temp1233v__s1__unsafe_ptr,&__temp1233v__s1__dat__pos,&__temp1233v__s1__dat__length,&__temp1233v__s1__dat__first,&__temp1233v__s2__unsafe_ptr,&__temp1233v__s2__dat__pos,&__temp1233v__s2__dat__length,&__temp1233v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1233v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1233v__s1__dat__pos;
  s__s1__dat__length=__temp1233v__s1__dat__length;
  s__s1__dat__first=__temp1233v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1233v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1233v__s2__dat__pos;
  s__s2__dat__length=__temp1233v__s2__dat__length;
  s__s2__dat__first=__temp1233v__s2__dat__first;
  print__temp715v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp715v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp411v(__temp1233v__s1__unsafe_ptr,&__temp1234v____temp1225v____temp550v____temp468v__);
  if(__temp1234v____temp1225v____temp550v____temp468v__){
  __temp1234v____temp1224v__buffer__unsafe_size=0;
  __temp1234v____temp1224v__buffer__unsafe_size=__temp1234v____temp1224v__buffer__unsafe_size;
  free__temp460v(&__temp1233v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1232v();return 0;}