#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1193v="456";
const char* const __temp1191v="123";
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
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1183v(char** __temp1200v, uint64_t* __temp1201v, uint64_t* __temp1202v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1200v=unsafe_ptr;
  *__temp1201v=unsafe_size;
  *__temp1202v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1203v) {
  goto __temp_return;
  __temp_return:
  *__temp1203v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1204v) {
  int value=0;
  *__temp1204v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1205v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1205v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1206v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1206v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1207v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1207v=z;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1208v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1208v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1209v) {
  char* allocated=*__temp1209v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1209v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1210v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1210v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1211v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1212v) {
  char* unsafe_ptr=0;
  uint8_t failed=0;
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
  *__temp1212v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1213v, uint64_t* __temp1214v, uint64_t* __temp1215v, uint64_t size, char** __temp1216v, uint64_t* __temp1217v, uint64_t* __temp1218v) {
  char* buffer__unsafe_ptr=*__temp1213v;
  uint64_t buffer__unsafe_size=*__temp1214v;
  uint64_t buffer__unsafe_align=*__temp1215v;
  int __temp435v=0;
  uint8_t __temp436v__=0;
  uint64_t __temp437v=0;
  uint8_t __temp439v__=0;
  uint64_t __temp440v=0;
  uint8_t __temp441v__=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  uint64_t __temp445v=0;
  uint8_t __temp446v__=0;
  uint64_t __temp447v__=0;
  uint64_t bytes=0;
  char* __temp448v__=0;
  uint64_t __temp449v=0;
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
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp436v__);
  if(__temp436v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1213v=buffer__unsafe_ptr;
  *__temp1214v=buffer__unsafe_size;
  *__temp1215v=buffer__unsafe_align;
  *__temp1216v=buffer__unsafe_ptr;
  *__temp1217v=buffer__unsafe_size;
  *__temp1218v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp512v(char** __temp1219v, uint64_t* __temp1220v, uint64_t* __temp1221v, char** __temp1222v, uint64_t* __temp1223v, uint64_t* __temp1224v, uint64_t* __temp1225v) {
  char* buffer__unsafe_ptr=*__temp1219v;
  uint64_t buffer__unsafe_size=*__temp1220v;
  uint64_t buffer__unsafe_align=*__temp1221v;
  uint64_t __temp513v=0;
  uint64_t __temp514v__=0;
  uint8_t __temp515v__=0;
  uint64_t __temp516v=0;
  char* __temp517v__unsafe_ptr=0;
  uint64_t __temp517v__unsafe_size=0;
  uint64_t __temp517v__unsafe_align=0;
  uint8_t __temp518v____temp436v__=0;
  uint64_t __temp519v__=0;
  uint64_t __temp520v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp513v=0;
  len__temp504v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp514v__);
  eq__temp278v(__temp513v,__temp514v__,&__temp515v__);
  if(__temp515v__){
  __temp516v=1;
  __temp_errcode=alloc__temp434v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp516v,&__temp517v__unsafe_ptr,&__temp517v__unsafe_size,&__temp517v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp517v__unsafe_ptr;
  buffer__unsafe_size=__temp517v__unsafe_size;
  buffer__unsafe_align=__temp517v__unsafe_align;
  }
  len__temp504v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp519v__);
  __temp520v=__temp519v__;
  length=__temp520v;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp518v____temp436v__);
  if(__temp518v____temp436v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1219v=buffer__unsafe_ptr;
  *__temp1220v=buffer__unsafe_size;
  *__temp1221v=buffer__unsafe_align;
  *__temp1222v=buffer__unsafe_ptr;
  *__temp1223v=buffer__unsafe_size;
  *__temp1224v=buffer__unsafe_align;
  *__temp1225v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1226v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1226v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1227v) {
  *__temp1227v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1228v) {
  char* new_allocated=0;
  uint8_t failed=0;
  char* __temp427v__=0;
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
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  unsafe_ptr=__temp427v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1228v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1229v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1229v=z;
}

static inline __attribute__((always_inline)) int resize__temp469v(char** __temp1230v, uint64_t* __temp1231v, uint64_t* __temp1232v, uint64_t size, char** __temp1233v, uint64_t* __temp1234v, uint64_t* __temp1235v) {
  char* buffer__unsafe_ptr=*__temp1230v;
  uint64_t buffer__unsafe_size=*__temp1231v;
  uint64_t buffer__unsafe_align=*__temp1232v;
  uint8_t __temp470v__=0;
  uint64_t __temp471v=0;
  uint8_t __temp472v__=0;
  uint64_t __temp473v=0;
  uint64_t __temp475v=0;
  uint8_t __temp476v__=0;
  uint64_t __temp477v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp478v__=0;
  uint64_t bytes=0;
  char* __temp479v__=0;
  uint8_t __temp480v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp470v__);
  if(__temp470v__){
  goto __temp_return;
  }
  __temp471v=0;
  eq__temp278v(size,__temp471v,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  buffer__unsafe_size=__temp473v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp475v=0;
  eq__temp278v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp477v__);
  prev_bytes=__temp477v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp478v__);
  bytes=__temp478v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp479v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp479v__;
  lt__temp182v(prev_bytes,bytes,&__temp480v__);
  if(__temp480v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1230v=buffer__unsafe_ptr;
  *__temp1231v=buffer__unsafe_size;
  *__temp1232v=buffer__unsafe_align;
  *__temp1233v=buffer__unsafe_ptr;
  *__temp1234v=buffer__unsafe_size;
  *__temp1235v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp506v(char** __temp1236v, uint64_t* __temp1237v, uint64_t* __temp1238v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1236v=unsafe_ptr;
  *__temp1237v=unsafe_size;
  *__temp1238v=unsafe_align;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1239v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1239v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1240v) {
  uint8_t __temp501v__=0;
  uint64_t __temp502v__=0;
  char* __temp503v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp501v__);
  if(__temp501v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp502v__);
  add__temp430v(buffer__unsafe_ptr,__temp502v__,&__temp503v__);
  unsafe_ptr=__temp503v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1240v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp542v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1241v, uint64_t* __temp1242v, uint64_t* __temp1243v, int8_t* __temp1244v) {
  goto __temp_return;
  __temp_return:
  *__temp1241v=unsafe_ptr;
  *__temp1242v=dat__pos;
  *__temp1243v=dat__length;
  *__temp1244v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp546v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1245v, uint64_t* __temp1246v, uint64_t* __temp1247v, int8_t* __temp1248v) {
  char* unsafe_ptr=0;
  char* __temp547v__unsafe_ptr=0;
  uint64_t __temp547v__dat__pos=0;
  uint64_t __temp547v__dat__length=0;
  int8_t __temp547v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp542v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp547v__unsafe_ptr,&__temp547v__dat__pos,&__temp547v__dat__length,&__temp547v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1245v=__temp547v__unsafe_ptr;
  *__temp1246v=__temp547v__dat__pos;
  *__temp1247v=__temp547v__dat__length;
  *__temp1248v=__temp547v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp556v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1249v, uint64_t* __temp1250v, uint64_t* __temp1251v, int8_t* __temp1252v) {
  uint64_t __temp557v=0;
  uint8_t __temp558v__=0;
  char* __temp559v__=0;
  int8_t __temp560v__value=0;
  int8_t first=0;
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__dat__pos=0;
  uint64_t __temp561v__dat__length=0;
  int8_t __temp561v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp557v=0;
  neq__temp302v(length,__temp557v,&__temp558v__);
  if(__temp558v__){
  __temp_errcode=get__temp500v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp559v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp559v__){
  goto __temp_failure;
  }
  memcpy(&__temp560v__value,__temp559v__,1);
  first=__temp560v__value;
  }
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp561v__unsafe_ptr,&__temp561v__dat__pos,&__temp561v__dat__length,&__temp561v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1249v=__temp561v__unsafe_ptr;
  *__temp1250v=__temp561v__dat__pos;
  *__temp1251v=__temp561v__dat__length;
  *__temp1252v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp562v(const char* c, char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, int8_t* __temp1256v) {
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint64_t __temp563v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp564v=0;
  char* __temp565v__unsafe_ptr=0;
  uint64_t __temp565v__dat__pos=0;
  uint64_t __temp565v__dat__length=0;
  int8_t __temp565v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp506v(&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_align);
  buf__unsafe_ptr=__temp563v__unsafe_ptr;
  buf__unsafe_size=__temp563v__unsafe_size;
  buf__unsafe_align=__temp563v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp564v=0;
  __temp_errcode=str__temp556v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp564v,length,&__temp565v__unsafe_ptr,&__temp565v__dat__pos,&__temp565v__dat__length,&__temp565v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1253v=__temp565v__unsafe_ptr;
  *__temp1254v=__temp565v__dat__pos;
  *__temp1255v=__temp565v__dat__length;
  *__temp1256v=__temp565v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp566v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first, uint64_t* __temp1257v) {
  goto __temp_return;
  __temp_return:
  *__temp1257v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1258v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void div__temp158v(uint64_t x, uint64_t y, uint64_t* __temp1259v) {
  int __temp159v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp159v__);
  z=x/y;
  goto __temp_return;
  __temp_return:
  *__temp1259v=z;
}

static inline __attribute__((always_inline)) void str__temp555v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, int8_t other__dat__first, char** __temp1260v, uint64_t* __temp1261v, uint64_t* __temp1262v, int8_t* __temp1263v) {
  goto __temp_return;
  __temp_return:
  *__temp1260v=other__unsafe_ptr;
  *__temp1261v=other__dat__pos;
  *__temp1262v=other__dat__length;
  *__temp1263v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp206v(uint64_t x, uint64_t y, uint8_t* __temp1264v) {
  int __temp207v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) int copy__temp636v(char** __temp1265v, uint64_t* __temp1266v, uint64_t* __temp1267v, uint64_t* __temp1268v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, int8_t _other__dat__first, char** __temp1269v, uint64_t* __temp1270v, uint64_t* __temp1271v, int8_t* __temp1272v) {
  char* buf__unsafe_ptr=*__temp1265v;
  uint64_t buf__unsafe_size=*__temp1266v;
  uint64_t buf__unsafe_align=*__temp1267v;
  uint64_t pos=*__temp1268v;
  char* __temp637v__unsafe_ptr=0;
  uint64_t __temp637v__dat__pos=0;
  uint64_t __temp637v__dat__length=0;
  int8_t __temp637v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  int8_t other__dat__first=0;
  uint64_t __temp638v__=0;
  uint64_t __temp639v__=0;
  uint64_t next_pos=0;
  uint64_t __temp640v__=0;
  uint8_t __temp641v__=0;
  uint64_t __temp642v=0;
  uint64_t __temp643v__=0;
  uint64_t prev_pos=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  int8_t __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp555v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp637v__unsafe_ptr,&__temp637v__dat__pos,&__temp637v__dat__length,&__temp637v__dat__first);
  other__unsafe_ptr=__temp637v__unsafe_ptr;
  other__dat__pos=__temp637v__dat__pos;
  other__dat__length=__temp637v__dat__length;
  other__dat__first=__temp637v__dat__first;
  len__temp566v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp638v__);
  add__temp110v(pos,__temp638v__,&__temp639v__);
  next_pos=__temp639v__;
  len__temp504v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp640v__);
  gt__temp206v(next_pos,__temp640v__,&__temp641v__);
  if(__temp641v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp642v=0;
  add__temp110v(pos,__temp642v,&__temp643v__);
  prev_pos=__temp643v__;
  pos=next_pos;
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1265v=buf__unsafe_ptr;
  *__temp1266v=buf__unsafe_size;
  *__temp1267v=buf__unsafe_align;
  *__temp1268v=pos;
  *__temp1269v=__temp644v__unsafe_ptr;
  *__temp1270v=__temp644v__dat__pos;
  *__temp1271v=__temp644v__dat__length;
  *__temp1272v=__temp644v__dat__first;
  
  return __temp_errcode;
}

int copy__temp701v(char** __temp1273v, uint64_t* __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v, const char* _other, char** __temp1277v, uint64_t* __temp1278v, uint64_t* __temp1279v, int8_t* __temp1280v) {
  char* li__buffer__unsafe_ptr=*__temp1273v;
  uint64_t li__buffer__unsafe_size=*__temp1274v;
  uint64_t li__buffer__unsafe_align=*__temp1275v;
  uint64_t li__length=*__temp1276v;
  char* __temp702v__unsafe_ptr=0;
  uint64_t __temp702v__dat__pos=0;
  uint64_t __temp702v__dat__length=0;
  int8_t __temp702v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  int8_t other__dat__first=0;
  uint64_t __temp703v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp704v__=0;
  uint64_t __temp705v__=0;
  uint64_t prev_length=0;
  uint64_t __temp706v__=0;
  uint8_t __temp707v__=0;
  uint64_t __temp708v=0;
  uint64_t __temp709v__=0;
  uint64_t __temp710v=0;
  uint64_t __temp711v__=0;
  uint64_t __temp712v__=0;
  char* __temp713v__unsafe_ptr=0;
  uint64_t __temp713v__unsafe_size=0;
  uint64_t __temp713v__unsafe_align=0;
  char* __temp714v__unsafe_ptr=0;
  uint64_t __temp714v__dat__pos=0;
  uint64_t __temp714v__dat__length=0;
  int8_t __temp714v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp562v(_other,&__temp702v__unsafe_ptr,&__temp702v__dat__pos,&__temp702v__dat__length,&__temp702v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp702v__unsafe_ptr;
  other__dat__pos=__temp702v__dat__pos;
  other__dat__length=__temp702v__dat__length;
  other__dat__first=__temp702v__dat__first;
  __temp703v=li__length;
  prev_prev_length=__temp703v;
  len__temp566v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp704v__);
  add__temp110v(li__length,__temp704v__,&__temp705v__);
  prev_length=__temp705v__;
  len__temp504v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp706v__);
  ge__temp254v(prev_length,__temp706v__,&__temp707v__);
  if(__temp707v__){
  __temp708v=2;
  div__temp158v(prev_length,__temp708v,&__temp709v__);
  __temp710v=1;
  add__temp110v(__temp709v__,__temp710v,&__temp711v__);
  add__temp110v(prev_length,__temp711v__,&__temp712v__);
  __temp_errcode=resize__temp469v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp712v__,&__temp713v__unsafe_ptr,&__temp713v__unsafe_size,&__temp713v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp713v__unsafe_ptr;
  li__buffer__unsafe_size=__temp713v__unsafe_size;
  li__buffer__unsafe_align=__temp713v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp636v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp714v__unsafe_ptr,&__temp714v__dat__pos,&__temp714v__dat__length,&__temp714v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1273v=li__buffer__unsafe_ptr;
  *__temp1274v=li__buffer__unsafe_size;
  *__temp1275v=li__buffer__unsafe_align;
  *__temp1276v=li__length;
  *__temp1277v=__temp714v__unsafe_ptr;
  *__temp1278v=__temp714v__dat__pos;
  *__temp1279v=__temp714v__dat__length;
  *__temp1280v=__temp714v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1182v(char** __temp1281v, uint64_t* __temp1282v, uint64_t* __temp1283v, int8_t* __temp1284v, char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v, int8_t* __temp1288v) {
  char* __temp1185v__unsafe_ptr=0;
  uint64_t __temp1185v__unsafe_size=0;
  uint64_t __temp1185v__unsafe_align=0;
  char* __temp1186v__unsafe_ptr=0;
  uint64_t __temp1186v__unsafe_size=0;
  uint64_t __temp1186v__unsafe_align=0;
  char* __temp1187v__buffer__unsafe_ptr=0;
  uint64_t __temp1187v__buffer__unsafe_size=0;
  uint64_t __temp1187v__buffer__unsafe_align=0;
  uint64_t __temp1187v__length=0;
  uint8_t __temp1188v____temp518v____temp436v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint64_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1189v=0;
  char* __temp1190v__unsafe_ptr=0;
  uint64_t __temp1190v__unsafe_size=0;
  uint64_t __temp1190v__unsafe_align=0;
  char* __temp1192v__unsafe_ptr=0;
  uint64_t __temp1192v__dat__pos=0;
  uint64_t __temp1192v__dat__length=0;
  int8_t __temp1192v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  int8_t s1__dat__first=0;
  char* __temp1194v__unsafe_ptr=0;
  uint64_t __temp1194v__dat__pos=0;
  uint64_t __temp1194v__dat__length=0;
  int8_t __temp1194v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  int8_t s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1183v(&__temp1185v__unsafe_ptr,&__temp1185v__unsafe_size,&__temp1185v__unsafe_align);
  __temp1186v__unsafe_ptr=__temp1185v__unsafe_ptr;
  __temp1186v__unsafe_size=__temp1185v__unsafe_size;
  __temp1186v__unsafe_align=__temp1185v__unsafe_align;
  __temp_errcode=list__temp512v(&__temp1186v__unsafe_ptr,&__temp1186v__unsafe_size,&__temp1186v__unsafe_align,&__temp1187v__buffer__unsafe_ptr,&__temp1187v__buffer__unsafe_size,&__temp1187v__buffer__unsafe_align,&__temp1187v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1189v=100;
  __temp_errcode=resize__temp469v(&__temp1186v__unsafe_ptr,&__temp1186v__unsafe_size,&__temp1186v__unsafe_align,__temp1189v,&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp701v(&__temp1186v__unsafe_ptr,&__temp1186v__unsafe_size,&__temp1186v__unsafe_align,&__temp1186v__unsafe_size,__temp1191v,&__temp1192v__unsafe_ptr,&__temp1192v__dat__pos,&__temp1192v__dat__length,&__temp1192v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1192v__dat__pos;
  s1__dat__length=__temp1192v__dat__length;
  s1__dat__first=__temp1192v__dat__first;
  __temp_errcode=copy__temp701v(&__temp1186v__unsafe_ptr,&__temp1186v__unsafe_size,&__temp1186v__unsafe_align,&__temp1186v__unsafe_size,__temp1193v,&__temp1194v__unsafe_ptr,&__temp1194v__dat__pos,&__temp1194v__dat__length,&__temp1194v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1194v__dat__pos;
  s2__dat__length=__temp1194v__dat__length;
  s2__dat__first=__temp1194v__dat__first;
  s1__unsafe_ptr=__temp1186v__unsafe_ptr;
  s2__unsafe_ptr=__temp1186v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(s1__unsafe_ptr,&__temp1188v____temp518v____temp436v__);
  if(__temp1188v____temp518v____temp436v__){
  __temp1187v__buffer__unsafe_size=0;
  __temp1187v__buffer__unsafe_size=__temp1187v__buffer__unsafe_size;
  free__temp428v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1281v=s1__unsafe_ptr;
  *__temp1282v=s1__dat__pos;
  *__temp1283v=s1__dat__length;
  *__temp1284v=s1__dat__first;
  *__temp1285v=s2__unsafe_ptr;
  *__temp1286v=s2__dat__pos;
  *__temp1287v=s2__dat__length;
  *__temp1288v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp676v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first) {
  int __temp677v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1195v() {
  char* __temp1196v__s1__unsafe_ptr=0;
  uint64_t __temp1196v__s1__dat__pos=0;
  uint64_t __temp1196v__s1__dat__length=0;
  int8_t __temp1196v__s1__dat__first=0;
  char* __temp1196v__s2__unsafe_ptr=0;
  uint64_t __temp1196v__s2__dat__pos=0;
  uint64_t __temp1196v__s2__dat__length=0;
  int8_t __temp1196v__s2__dat__first=0;
  uint8_t __temp1197v____temp1188v____temp518v____temp436v__=0;
  uint64_t __temp1197v____temp1187v__buffer__unsafe_size=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  int8_t s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  int8_t s__s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1182v(&__temp1196v__s1__unsafe_ptr,&__temp1196v__s1__dat__pos,&__temp1196v__s1__dat__length,&__temp1196v__s1__dat__first,&__temp1196v__s2__unsafe_ptr,&__temp1196v__s2__dat__pos,&__temp1196v__s2__dat__length,&__temp1196v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1196v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1196v__s1__dat__pos;
  s__s1__dat__length=__temp1196v__s1__dat__length;
  s__s1__dat__first=__temp1196v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1196v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1196v__s2__dat__pos;
  s__s2__dat__length=__temp1196v__s2__dat__length;
  s__s2__dat__first=__temp1196v__s2__dat__first;
  print__temp676v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp676v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp398v(__temp1196v__s1__unsafe_ptr,&__temp1197v____temp1188v____temp518v____temp436v__);
  if(__temp1197v____temp1188v____temp518v____temp436v__){
  __temp1197v____temp1187v__buffer__unsafe_size=0;
  __temp1197v____temp1187v__buffer__unsafe_size=__temp1197v____temp1187v__buffer__unsafe_size;
  free__temp428v(&__temp1196v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1195v();return 0;}