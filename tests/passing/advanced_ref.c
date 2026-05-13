#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1197v="456";
const char* const __temp1195v="123";
const char* const __temp353v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1187v(char** __temp1204v, uint64_t* __temp1205v, uint64_t* __temp1206v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1204v=unsafe_ptr;
  *__temp1205v=unsafe_size;
  *__temp1206v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1207v) {
  goto __temp_return;
  __temp_return:
  *__temp1207v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1208v) {
  int value=0;
  *__temp1208v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1209v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1209v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1210v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1210v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1211v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1212v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1213v) {
  char* allocated=*__temp1213v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1213v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1214v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1214v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1215v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1215v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1216v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1216v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1217v, uint64_t* __temp1218v, uint64_t* __temp1219v, uint64_t size, char** __temp1220v, uint64_t* __temp1221v, uint64_t* __temp1222v) {
  char* buffer__unsafe_ptr=*__temp1217v;
  uint64_t buffer__unsafe_size=*__temp1218v;
  uint64_t buffer__unsafe_align=*__temp1219v;
  int __temp438v=0;
  char __temp439v__=0;
  uint64_t __temp440v=0;
  char __temp442v__=0;
  uint64_t __temp443v=0;
  char __temp444v__=0;
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  uint64_t __temp448v=0;
  char __temp449v__=0;
  uint64_t __temp450v__=0;
  uint64_t bytes=0;
  char* __temp451v__=0;
  uint64_t __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp305v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp432v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp305v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp439v__);
  if(__temp439v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1217v=buffer__unsafe_ptr;
  *__temp1218v=buffer__unsafe_size;
  *__temp1219v=buffer__unsafe_align;
  *__temp1220v=buffer__unsafe_ptr;
  *__temp1221v=buffer__unsafe_size;
  *__temp1222v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp515v(char** __temp1223v, uint64_t* __temp1224v, uint64_t* __temp1225v, char** __temp1226v, uint64_t* __temp1227v, uint64_t* __temp1228v, uint64_t* __temp1229v) {
  char* buffer__unsafe_ptr=*__temp1223v;
  uint64_t buffer__unsafe_size=*__temp1224v;
  uint64_t buffer__unsafe_align=*__temp1225v;
  uint64_t __temp516v=0;
  uint64_t __temp517v__=0;
  char __temp518v__=0;
  uint64_t __temp519v=0;
  char* __temp520v__unsafe_ptr=0;
  uint64_t __temp520v__unsafe_size=0;
  uint64_t __temp520v__unsafe_align=0;
  char __temp521v____temp439v__=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp516v=0;
  len__temp507v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp517v__);
  eq__temp281v(__temp516v,__temp517v__,&__temp518v__);
  if(__temp518v__){
  __temp519v=1;
  __temp_errcode=alloc__temp437v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp519v,&__temp520v__unsafe_ptr,&__temp520v__unsafe_size,&__temp520v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp520v__unsafe_ptr;
  buffer__unsafe_size=__temp520v__unsafe_size;
  buffer__unsafe_align=__temp520v__unsafe_align;
  }
  len__temp507v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp522v__);
  __temp523v=__temp522v__;
  length=__temp523v;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp521v____temp439v__);
  if(__temp521v____temp439v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1223v=buffer__unsafe_ptr;
  *__temp1224v=buffer__unsafe_size;
  *__temp1225v=buffer__unsafe_align;
  *__temp1226v=buffer__unsafe_ptr;
  *__temp1227v=buffer__unsafe_size;
  *__temp1228v=buffer__unsafe_align;
  *__temp1229v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1230v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1231v) {
  *__temp1231v=to;
}

static inline __attribute__((always_inline)) int realloc__temp429v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1232v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp430v__=0;
  char* unsafe_ptr=0;
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
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp16v(new_allocated,allocated__unsafe_ptr,&__temp430v__);
  unsafe_ptr=__temp430v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1232v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1233v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1233v=z;
}

static inline __attribute__((always_inline)) int resize__temp472v(char** __temp1234v, uint64_t* __temp1235v, uint64_t* __temp1236v, uint64_t size, char** __temp1237v, uint64_t* __temp1238v, uint64_t* __temp1239v) {
  char* buffer__unsafe_ptr=*__temp1234v;
  uint64_t buffer__unsafe_size=*__temp1235v;
  uint64_t buffer__unsafe_align=*__temp1236v;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp481v__=0;
  uint64_t bytes=0;
  char* __temp482v__=0;
  char __temp483v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  goto __temp_return;
  }
  __temp474v=0;
  eq__temp281v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  buffer__unsafe_size=__temp476v;
  free__temp431v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp478v=0;
  eq__temp281v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_size,buffer__unsafe_align,&__temp480v__);
  prev_bytes=__temp480v__;
  buffer__unsafe_size=size;
  mul__temp137v(buffer__unsafe_align,size,&__temp481v__);
  bytes=__temp481v__;
  __temp_errcode=realloc__temp429v(buffer__unsafe_ptr,bytes,&__temp482v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp482v__;
  lt__temp185v(prev_bytes,bytes,&__temp483v__);
  if(__temp483v__){
  zero__temp432v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1234v=buffer__unsafe_ptr;
  *__temp1235v=buffer__unsafe_size;
  *__temp1236v=buffer__unsafe_align;
  *__temp1237v=buffer__unsafe_ptr;
  *__temp1238v=buffer__unsafe_size;
  *__temp1239v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1240v, uint64_t* __temp1241v, uint64_t* __temp1242v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1240v=unsafe_ptr;
  *__temp1241v=unsafe_size;
  *__temp1242v=unsafe_align;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1243v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1243v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1244v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1244v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1245v, uint64_t* __temp1246v, uint64_t* __temp1247v, char* __temp1248v) {
  goto __temp_return;
  __temp_return:
  *__temp1245v=unsafe_ptr;
  *__temp1246v=dat__pos;
  *__temp1247v=dat__length;
  *__temp1248v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1249v, uint64_t* __temp1250v, uint64_t* __temp1251v, char* __temp1252v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp550v__unsafe_ptr;
  *__temp1250v=__temp550v__dat__pos;
  *__temp1251v=__temp550v__dat__length;
  *__temp1252v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, char* __temp1256v) {
  uint64_t __temp576v=0;
  char __temp577v__=0;
  char* __temp578v__=0;
  char __temp579v__value=0;
  char first=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp576v=0;
  neq__temp305v(length,__temp576v,&__temp577v__);
  if(__temp577v__){
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp578v__){
  goto __temp_failure;
  }
  memcpy(&__temp579v__value,__temp578v__,1);
  first=__temp579v__value;
  }
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1253v=__temp580v__unsafe_ptr;
  *__temp1254v=__temp580v__dat__pos;
  *__temp1255v=__temp580v__dat__length;
  *__temp1256v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1257v, uint64_t* __temp1258v, uint64_t* __temp1259v, char* __temp1260v) {
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__unsafe_size=0;
  uint64_t __temp582v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp583v=0;
  char* __temp584v__unsafe_ptr=0;
  uint64_t __temp584v__dat__pos=0;
  uint64_t __temp584v__dat__length=0;
  char __temp584v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp582v__unsafe_ptr,&__temp582v__unsafe_size,&__temp582v__unsafe_align);
  buf__unsafe_ptr=__temp582v__unsafe_ptr;
  buf__unsafe_size=__temp582v__unsafe_size;
  buf__unsafe_align=__temp582v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp583v=0;
  __temp_errcode=str__temp575v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp583v,length,&__temp584v__unsafe_ptr,&__temp584v__dat__pos,&__temp584v__dat__length,&__temp584v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1257v=__temp584v__unsafe_ptr;
  *__temp1258v=__temp584v__dat__pos;
  *__temp1259v=__temp584v__dat__length;
  *__temp1260v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp585v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1261v) {
  goto __temp_return;
  __temp_return:
  *__temp1261v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1262v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void div__temp161v(uint64_t x, uint64_t y, uint64_t* __temp1263v) {
  int __temp162v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp162v__);
  z=x/y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void str__temp574v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v, char* __temp1267v) {
  goto __temp_return;
  __temp_return:
  *__temp1264v=other__unsafe_ptr;
  *__temp1265v=other__dat__pos;
  *__temp1266v=other__dat__length;
  *__temp1267v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1268v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1268v=z;
}

static inline __attribute__((always_inline)) int copy__temp640v(char** __temp1269v, uint64_t* __temp1270v, uint64_t* __temp1271v, uint64_t* __temp1272v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1273v, uint64_t* __temp1274v, uint64_t* __temp1275v, char* __temp1276v) {
  char* buf__unsafe_ptr=*__temp1269v;
  uint64_t buf__unsafe_size=*__temp1270v;
  uint64_t buf__unsafe_align=*__temp1271v;
  uint64_t pos=*__temp1272v;
  char* __temp641v__unsafe_ptr=0;
  uint64_t __temp641v__dat__pos=0;
  uint64_t __temp641v__dat__length=0;
  char __temp641v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v__=0;
  uint64_t next_pos=0;
  uint64_t __temp644v__=0;
  char __temp645v__=0;
  uint64_t __temp646v=0;
  uint64_t __temp647v__=0;
  uint64_t prev_pos=0;
  char* __temp648v__unsafe_ptr=0;
  uint64_t __temp648v__dat__pos=0;
  uint64_t __temp648v__dat__length=0;
  char __temp648v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp574v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp641v__unsafe_ptr,&__temp641v__dat__pos,&__temp641v__dat__length,&__temp641v__dat__first);
  other__unsafe_ptr=__temp641v__unsafe_ptr;
  other__dat__pos=__temp641v__dat__pos;
  other__dat__length=__temp641v__dat__length;
  other__dat__first=__temp641v__dat__first;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp642v__);
  add__temp113v(pos,__temp642v__,&__temp643v__);
  next_pos=__temp643v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp644v__);
  gt__temp209v(next_pos,__temp644v__,&__temp645v__);
  if(__temp645v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp646v=0;
  add__temp113v(pos,__temp646v,&__temp647v__);
  prev_pos=__temp647v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp648v__unsafe_ptr,&__temp648v__dat__pos,&__temp648v__dat__length,&__temp648v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1269v=buf__unsafe_ptr;
  *__temp1270v=buf__unsafe_size;
  *__temp1271v=buf__unsafe_align;
  *__temp1272v=pos;
  *__temp1273v=__temp648v__unsafe_ptr;
  *__temp1274v=__temp648v__dat__pos;
  *__temp1275v=__temp648v__dat__length;
  *__temp1276v=__temp648v__dat__first;
  
  return __temp_errcode;
}

int copy__temp705v(char** __temp1277v, uint64_t* __temp1278v, uint64_t* __temp1279v, uint64_t* __temp1280v, const char* _other, char** __temp1281v, uint64_t* __temp1282v, uint64_t* __temp1283v, char* __temp1284v) {
  char* li__buffer__unsafe_ptr=*__temp1277v;
  uint64_t li__buffer__unsafe_size=*__temp1278v;
  uint64_t li__buffer__unsafe_align=*__temp1279v;
  uint64_t li__length=*__temp1280v;
  char* __temp706v__unsafe_ptr=0;
  uint64_t __temp706v__dat__pos=0;
  uint64_t __temp706v__dat__length=0;
  char __temp706v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp707v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp708v__=0;
  uint64_t __temp709v__=0;
  uint64_t prev_length=0;
  uint64_t __temp710v__=0;
  char __temp711v__=0;
  uint64_t __temp712v=0;
  uint64_t __temp713v__=0;
  uint64_t __temp714v=0;
  uint64_t __temp715v__=0;
  uint64_t __temp716v__=0;
  char* __temp717v__unsafe_ptr=0;
  uint64_t __temp717v__unsafe_size=0;
  uint64_t __temp717v__unsafe_align=0;
  char* __temp718v__unsafe_ptr=0;
  uint64_t __temp718v__dat__pos=0;
  uint64_t __temp718v__dat__length=0;
  char __temp718v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp581v(_other,&__temp706v__unsafe_ptr,&__temp706v__dat__pos,&__temp706v__dat__length,&__temp706v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp706v__unsafe_ptr;
  other__dat__pos=__temp706v__dat__pos;
  other__dat__length=__temp706v__dat__length;
  other__dat__first=__temp706v__dat__first;
  __temp707v=li__length;
  prev_prev_length=__temp707v;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp708v__);
  add__temp113v(li__length,__temp708v__,&__temp709v__);
  prev_length=__temp709v__;
  len__temp507v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp710v__);
  ge__temp257v(prev_length,__temp710v__,&__temp711v__);
  if(__temp711v__){
  __temp712v=2;
  div__temp161v(prev_length,__temp712v,&__temp713v__);
  __temp714v=1;
  add__temp113v(__temp713v__,__temp714v,&__temp715v__);
  add__temp113v(prev_length,__temp715v__,&__temp716v__);
  __temp_errcode=resize__temp472v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp716v__,&__temp717v__unsafe_ptr,&__temp717v__unsafe_size,&__temp717v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp717v__unsafe_ptr;
  li__buffer__unsafe_size=__temp717v__unsafe_size;
  li__buffer__unsafe_align=__temp717v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp640v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp718v__unsafe_ptr,&__temp718v__dat__pos,&__temp718v__dat__length,&__temp718v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1277v=li__buffer__unsafe_ptr;
  *__temp1278v=li__buffer__unsafe_size;
  *__temp1279v=li__buffer__unsafe_align;
  *__temp1280v=li__length;
  *__temp1281v=__temp718v__unsafe_ptr;
  *__temp1282v=__temp718v__dat__pos;
  *__temp1283v=__temp718v__dat__length;
  *__temp1284v=__temp718v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1186v(char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v, char* __temp1288v, char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, char* __temp1292v) {
  char* __temp1189v__unsafe_ptr=0;
  uint64_t __temp1189v__unsafe_size=0;
  uint64_t __temp1189v__unsafe_align=0;
  char* __temp1190v__unsafe_ptr=0;
  uint64_t __temp1190v__unsafe_size=0;
  uint64_t __temp1190v__unsafe_align=0;
  char* __temp1191v__buffer__unsafe_ptr=0;
  uint64_t __temp1191v__buffer__unsafe_size=0;
  uint64_t __temp1191v__buffer__unsafe_align=0;
  uint64_t __temp1191v__length=0;
  char __temp1192v____temp521v____temp439v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint64_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1193v=0;
  char* __temp1194v__unsafe_ptr=0;
  uint64_t __temp1194v__unsafe_size=0;
  uint64_t __temp1194v__unsafe_align=0;
  char* __temp1196v__unsafe_ptr=0;
  uint64_t __temp1196v__dat__pos=0;
  uint64_t __temp1196v__dat__length=0;
  char __temp1196v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1198v__unsafe_ptr=0;
  uint64_t __temp1198v__dat__pos=0;
  uint64_t __temp1198v__dat__length=0;
  char __temp1198v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1187v(&__temp1189v__unsafe_ptr,&__temp1189v__unsafe_size,&__temp1189v__unsafe_align);
  __temp1190v__unsafe_ptr=__temp1189v__unsafe_ptr;
  __temp1190v__unsafe_size=__temp1189v__unsafe_size;
  __temp1190v__unsafe_align=__temp1189v__unsafe_align;
  __temp_errcode=list__temp515v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align,&__temp1191v__buffer__unsafe_ptr,&__temp1191v__buffer__unsafe_size,&__temp1191v__buffer__unsafe_align,&__temp1191v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1193v=100;
  __temp_errcode=resize__temp472v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align,__temp1193v,&__temp1194v__unsafe_ptr,&__temp1194v__unsafe_size,&__temp1194v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp705v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align,&__temp1190v__unsafe_size,__temp1195v,&__temp1196v__unsafe_ptr,&__temp1196v__dat__pos,&__temp1196v__dat__length,&__temp1196v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1196v__dat__pos;
  s1__dat__length=__temp1196v__dat__length;
  s1__dat__first=__temp1196v__dat__first;
  __temp_errcode=copy__temp705v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align,&__temp1190v__unsafe_size,__temp1197v,&__temp1198v__unsafe_ptr,&__temp1198v__dat__pos,&__temp1198v__dat__length,&__temp1198v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1198v__dat__pos;
  s2__dat__length=__temp1198v__dat__length;
  s2__dat__first=__temp1198v__dat__first;
  s1__unsafe_ptr=__temp1190v__unsafe_ptr;
  s2__unsafe_ptr=__temp1190v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(s1__unsafe_ptr,&__temp1192v____temp521v____temp439v__);
  if(__temp1192v____temp521v____temp439v__){
  __temp1191v__buffer__unsafe_size=0;
  __temp1191v__buffer__unsafe_size=__temp1191v__buffer__unsafe_size;
  free__temp431v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1285v=s1__unsafe_ptr;
  *__temp1286v=s1__dat__pos;
  *__temp1287v=s1__dat__length;
  *__temp1288v=s1__dat__first;
  *__temp1289v=s2__unsafe_ptr;
  *__temp1290v=s2__dat__pos;
  *__temp1291v=s2__dat__length;
  *__temp1292v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp680v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp681v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1199v() {
  char* __temp1200v__s1__unsafe_ptr=0;
  uint64_t __temp1200v__s1__dat__pos=0;
  uint64_t __temp1200v__s1__dat__length=0;
  char __temp1200v__s1__dat__first=0;
  char* __temp1200v__s2__unsafe_ptr=0;
  uint64_t __temp1200v__s2__dat__pos=0;
  uint64_t __temp1200v__s2__dat__length=0;
  char __temp1200v__s2__dat__first=0;
  char __temp1201v____temp1192v____temp521v____temp439v__=0;
  uint64_t __temp1201v____temp1191v__buffer__unsafe_size=0;
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
  __temp_errcode=test__temp1186v(&__temp1200v__s1__unsafe_ptr,&__temp1200v__s1__dat__pos,&__temp1200v__s1__dat__length,&__temp1200v__s1__dat__first,&__temp1200v__s2__unsafe_ptr,&__temp1200v__s2__dat__pos,&__temp1200v__s2__dat__length,&__temp1200v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1200v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1200v__s1__dat__pos;
  s__s1__dat__length=__temp1200v__s1__dat__length;
  s__s1__dat__first=__temp1200v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1200v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1200v__s2__dat__pos;
  s__s2__dat__length=__temp1200v__s2__dat__length;
  s__s2__dat__first=__temp1200v__s2__dat__first;
  print__temp680v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp680v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp401v(__temp1200v__s1__unsafe_ptr,&__temp1201v____temp1192v____temp521v____temp439v__);
  if(__temp1201v____temp1192v____temp521v____temp439v__){
  __temp1201v____temp1191v__buffer__unsafe_size=0;
  __temp1201v____temp1191v__buffer__unsafe_size=__temp1201v____temp1191v__buffer__unsafe_size;
  free__temp431v(&__temp1200v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1199v();return 0;}