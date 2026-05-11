#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1198v="456";
const char* const __temp350v="\n";
const char* const __temp1196v="123";
const char* const __temp436v="free";
static const char* __temp_all_errcodes[27] = {"noerr",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1188v(char** __temp1205v, unsigned long long* __temp1206v, unsigned long long* __temp1207v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1205v=unsafe_ptr;
  *__temp1206v=unsafe_size;
  *__temp1207v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1208v) {
  goto __temp_return;
  __temp_return:
  *__temp1208v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1209v) {
  int value=0;
  *__temp1209v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1210v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1210v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1211v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1211v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1212v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1213v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1213v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1214v) {
  char* allocated=*__temp1214v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1214v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1215v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1215v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1216v) {
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

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v, unsigned long long size, char** __temp1220v, unsigned long long* __temp1221v, unsigned long long* __temp1222v) {
  char* buffer__unsafe_ptr=*__temp1217v;
  unsigned long long buffer__unsafe_size=*__temp1218v;
  unsigned long long buffer__unsafe_align=*__temp1219v;
  int __temp435v=0;
  unsigned long long __temp438v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  char __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  char __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  char* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp302v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp429v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp302v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1217v=buffer__unsafe_ptr;
  *__temp1218v=buffer__unsafe_size;
  *__temp1219v=buffer__unsafe_align;
  *__temp1220v=buffer__unsafe_ptr;
  *__temp1221v=buffer__unsafe_size;
  *__temp1222v=buffer__unsafe_align;
  
  return __temp_errcode;
}

int list__temp517v(char** __temp1223v, unsigned long long* __temp1224v, unsigned long long* __temp1225v, char** __temp1226v, unsigned long long* __temp1227v, unsigned long long* __temp1228v, unsigned long long* __temp1229v) {
  char* buffer__unsafe_ptr=*__temp1223v;
  unsigned long long buffer__unsafe_size=*__temp1224v;
  unsigned long long buffer__unsafe_align=*__temp1225v;
  unsigned long long __temp518v=0;
  unsigned long long __temp519v__=0;
  char __temp520v__=0;
  unsigned long long __temp521v=0;
  char* __temp522v__unsafe_ptr=0;
  unsigned long long __temp522v__unsafe_size=0;
  unsigned long long __temp522v__unsafe_align=0;
  unsigned long long __temp523v____temp438v=0;
  char __temp523v____temp439v__=0;
  unsigned long long __temp524v__=0;
  unsigned long long __temp525v=0;
  unsigned long long length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp518v=0;
  len__temp509v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp519v__);
  eq__temp278v(__temp518v,__temp519v__,&__temp520v__);
  if(__temp520v__){
  __temp521v=1;
  __temp_errcode=alloc__temp434v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp521v,&__temp522v__unsafe_ptr,&__temp522v__unsafe_size,&__temp522v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp522v__unsafe_ptr;
  buffer__unsafe_size=__temp522v__unsafe_size;
  buffer__unsafe_align=__temp522v__unsafe_align;
  }
  len__temp509v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp524v__);
  __temp525v=__temp524v__;
  length=__temp525v;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1223v=buffer__unsafe_ptr;
  *__temp1224v=buffer__unsafe_size;
  *__temp1225v=buffer__unsafe_align;
  *__temp1226v=buffer__unsafe_ptr;
  *__temp1227v=buffer__unsafe_size;
  *__temp1228v=buffer__unsafe_align;
  *__temp1229v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1230v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1231v) {
  *__temp1231v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1232v) {
  char* new_allocated=0;
  char failed=0;
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
  *__temp1232v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1233v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1233v=z;
}

static inline __attribute__((always_inline)) int resize__temp474v(char** __temp1234v, unsigned long long* __temp1235v, unsigned long long* __temp1236v, unsigned long long size, char** __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v) {
  char* buffer__unsafe_ptr=*__temp1234v;
  unsigned long long buffer__unsafe_size=*__temp1235v;
  unsigned long long buffer__unsafe_align=*__temp1236v;
  char __temp475v__=0;
  unsigned long long __temp476v=0;
  char __temp477v__=0;
  unsigned long long __temp478v=0;
  unsigned long long __temp480v=0;
  char __temp481v__=0;
  unsigned long long __temp482v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp483v__=0;
  unsigned long long bytes=0;
  char* __temp484v__=0;
  char __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp475v__);
  if(__temp475v__){
  goto __temp_return;
  }
  __temp476v=0;
  eq__temp278v(size,__temp476v,&__temp477v__);
  if(__temp477v__){
  __temp478v=0;
  buffer__unsafe_size=__temp478v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp480v=0;
  eq__temp278v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp482v__);
  prev_bytes=__temp482v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp483v__);
  bytes=__temp483v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  lt__temp182v(prev_bytes,bytes,&__temp485v__);
  if(__temp485v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1240v, unsigned long long* __temp1241v, unsigned long long* __temp1242v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1240v=unsafe_ptr;
  *__temp1241v=unsafe_size;
  *__temp1242v=unsafe_align;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1243v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1243v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1244v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1244v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1245v, unsigned long long* __temp1246v, unsigned long long* __temp1247v, char* __temp1248v) {
  goto __temp_return;
  __temp_return:
  *__temp1245v=unsafe_ptr;
  *__temp1246v=dat__pos;
  *__temp1247v=dat__length;
  *__temp1248v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1249v, unsigned long long* __temp1250v, unsigned long long* __temp1251v, char* __temp1252v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp552v__unsafe_ptr;
  *__temp1250v=__temp552v__dat__pos;
  *__temp1251v=__temp552v__dat__length;
  *__temp1252v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1253v, unsigned long long* __temp1254v, unsigned long long* __temp1255v, char* __temp1256v) {
  unsigned long long __temp562v=0;
  char __temp563v__=0;
  char* __temp564v__=0;
  char __temp565v__value=0;
  char first=0;
  char* __temp566v__unsafe_ptr=0;
  unsigned long long __temp566v__dat__pos=0;
  unsigned long long __temp566v__dat__length=0;
  char __temp566v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp562v=0;
  neq__temp302v(length,__temp562v,&__temp563v__);
  if(__temp563v__){
  __temp_errcode=get__temp505v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp564v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp564v__){
  goto __temp_failure;
  }
  memcpy(&__temp565v__value,__temp564v__,1);
  first=__temp565v__value;
  }
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp566v__unsafe_ptr,&__temp566v__dat__pos,&__temp566v__dat__length,&__temp566v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1253v=__temp566v__unsafe_ptr;
  *__temp1254v=__temp566v__dat__pos;
  *__temp1255v=__temp566v__dat__length;
  *__temp1256v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1257v, unsigned long long* __temp1258v, unsigned long long* __temp1259v, char* __temp1260v) {
  char* __temp568v__unsafe_ptr=0;
  unsigned long long __temp568v__unsafe_size=0;
  unsigned long long __temp568v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp569v=0;
  char* __temp570v__unsafe_ptr=0;
  unsigned long long __temp570v__dat__pos=0;
  unsigned long long __temp570v__dat__length=0;
  char __temp570v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp568v__unsafe_ptr,&__temp568v__unsafe_size,&__temp568v__unsafe_align);
  buf__unsafe_ptr=__temp568v__unsafe_ptr;
  buf__unsafe_size=__temp568v__unsafe_size;
  buf__unsafe_align=__temp568v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp569v=0;
  __temp_errcode=str__temp561v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp569v,length,&__temp570v__unsafe_ptr,&__temp570v__dat__pos,&__temp570v__dat__length,&__temp570v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1257v=__temp570v__unsafe_ptr;
  *__temp1258v=__temp570v__dat__pos;
  *__temp1259v=__temp570v__dat__length;
  *__temp1260v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp571v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1261v) {
  goto __temp_return;
  __temp_return:
  *__temp1261v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1262v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void div__temp158v(unsigned long long x, unsigned long long y, unsigned long long* __temp1263v) {
  int __temp159v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp159v__);
  z=x/y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void str__temp560v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v, char* __temp1267v) {
  goto __temp_return;
  __temp_return:
  *__temp1264v=other__unsafe_ptr;
  *__temp1265v=other__dat__pos;
  *__temp1266v=other__dat__length;
  *__temp1267v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1268v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1268v=z;
}

static inline __attribute__((always_inline)) int copy__temp641v(char** __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v, char* _other__unsafe_ptr, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1273v, unsigned long long* __temp1274v, unsigned long long* __temp1275v, char* __temp1276v) {
  char* buf__unsafe_ptr=*__temp1269v;
  unsigned long long buf__unsafe_size=*__temp1270v;
  unsigned long long buf__unsafe_align=*__temp1271v;
  unsigned long long pos=*__temp1272v;
  char* __temp642v__unsafe_ptr=0;
  unsigned long long __temp642v__dat__pos=0;
  unsigned long long __temp642v__dat__length=0;
  char __temp642v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp643v__=0;
  unsigned long long __temp644v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp645v__=0;
  char __temp646v__=0;
  unsigned long long __temp647v=0;
  unsigned long long __temp648v__=0;
  unsigned long long prev_pos=0;
  char* __temp649v__unsafe_ptr=0;
  unsigned long long __temp649v__dat__pos=0;
  unsigned long long __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp560v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp642v__unsafe_ptr,&__temp642v__dat__pos,&__temp642v__dat__length,&__temp642v__dat__first);
  other__unsafe_ptr=__temp642v__unsafe_ptr;
  other__dat__pos=__temp642v__dat__pos;
  other__dat__length=__temp642v__dat__length;
  other__dat__first=__temp642v__dat__first;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp643v__);
  add__temp110v(pos,__temp643v__,&__temp644v__);
  next_pos=__temp644v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp645v__);
  gt__temp206v(next_pos,__temp645v__,&__temp646v__);
  if(__temp646v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp647v=0;
  add__temp110v(pos,__temp647v,&__temp648v__);
  prev_pos=__temp648v__;
  pos=next_pos;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1269v=buf__unsafe_ptr;
  *__temp1270v=buf__unsafe_size;
  *__temp1271v=buf__unsafe_align;
  *__temp1272v=pos;
  *__temp1273v=__temp649v__unsafe_ptr;
  *__temp1274v=__temp649v__dat__pos;
  *__temp1275v=__temp649v__dat__length;
  *__temp1276v=__temp649v__dat__first;
  
  return __temp_errcode;
}

int copy__temp706v(char** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, unsigned long long* __temp1280v, const char* _other, char** __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v, char* __temp1284v) {
  char* li__buffer__unsafe_ptr=*__temp1277v;
  unsigned long long li__buffer__unsafe_size=*__temp1278v;
  unsigned long long li__buffer__unsafe_align=*__temp1279v;
  unsigned long long li__length=*__temp1280v;
  char* __temp707v__unsafe_ptr=0;
  unsigned long long __temp707v__dat__pos=0;
  unsigned long long __temp707v__dat__length=0;
  char __temp707v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp708v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp709v__=0;
  unsigned long long __temp710v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp711v__=0;
  char __temp712v__=0;
  unsigned long long __temp713v=0;
  unsigned long long __temp714v__=0;
  unsigned long long __temp715v=0;
  unsigned long long __temp716v__=0;
  unsigned long long __temp717v__=0;
  char* __temp718v__unsafe_ptr=0;
  unsigned long long __temp718v__unsafe_size=0;
  unsigned long long __temp718v__unsafe_align=0;
  char* __temp719v__unsafe_ptr=0;
  unsigned long long __temp719v__dat__pos=0;
  unsigned long long __temp719v__dat__length=0;
  char __temp719v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp567v(_other,&__temp707v__unsafe_ptr,&__temp707v__dat__pos,&__temp707v__dat__length,&__temp707v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp707v__unsafe_ptr;
  other__dat__pos=__temp707v__dat__pos;
  other__dat__length=__temp707v__dat__length;
  other__dat__first=__temp707v__dat__first;
  __temp708v=li__length;
  prev_prev_length=__temp708v;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp709v__);
  add__temp110v(li__length,__temp709v__,&__temp710v__);
  prev_length=__temp710v__;
  len__temp509v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp711v__);
  ge__temp254v(prev_length,__temp711v__,&__temp712v__);
  if(__temp712v__){
  __temp713v=2;
  div__temp158v(prev_length,__temp713v,&__temp714v__);
  __temp715v=1;
  add__temp110v(__temp714v__,__temp715v,&__temp716v__);
  add__temp110v(prev_length,__temp716v__,&__temp717v__);
  __temp_errcode=resize__temp474v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp717v__,&__temp718v__unsafe_ptr,&__temp718v__unsafe_size,&__temp718v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp718v__unsafe_ptr;
  li__buffer__unsafe_size=__temp718v__unsafe_size;
  li__buffer__unsafe_align=__temp718v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp641v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp719v__unsafe_ptr,&__temp719v__dat__pos,&__temp719v__dat__length,&__temp719v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1277v=li__buffer__unsafe_ptr;
  *__temp1278v=li__buffer__unsafe_size;
  *__temp1279v=li__buffer__unsafe_align;
  *__temp1280v=li__length;
  *__temp1281v=__temp719v__unsafe_ptr;
  *__temp1282v=__temp719v__dat__pos;
  *__temp1283v=__temp719v__dat__length;
  *__temp1284v=__temp719v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1187v(char** __temp1285v, unsigned long long* __temp1286v, unsigned long long* __temp1287v, char* __temp1288v, char** __temp1289v, unsigned long long* __temp1290v, unsigned long long* __temp1291v, char* __temp1292v) {
  char* __temp1190v__unsafe_ptr=0;
  unsigned long long __temp1190v__unsafe_size=0;
  unsigned long long __temp1190v__unsafe_align=0;
  char* __temp1191v__unsafe_ptr=0;
  unsigned long long __temp1191v__unsafe_size=0;
  unsigned long long __temp1191v__unsafe_align=0;
  char* __temp1192v__buffer__unsafe_ptr=0;
  unsigned long long __temp1192v__buffer__unsafe_size=0;
  unsigned long long __temp1192v__buffer__unsafe_align=0;
  unsigned long long __temp1192v__length=0;
  unsigned long long __temp1193v____temp523v____temp438v=0;
  char __temp1193v____temp523v____temp439v__=0;
  char* mem__buffer__unsafe_ptr=0;
  unsigned long long mem__buffer__unsafe_size=0;
  unsigned long long mem__buffer__unsafe_align=0;
  unsigned long long mem__length=0;
  unsigned long long __temp1194v=0;
  char* __temp1195v__unsafe_ptr=0;
  unsigned long long __temp1195v__unsafe_size=0;
  unsigned long long __temp1195v__unsafe_align=0;
  char* __temp1197v__unsafe_ptr=0;
  unsigned long long __temp1197v__dat__pos=0;
  unsigned long long __temp1197v__dat__length=0;
  char __temp1197v__dat__first=0;
  char* s1__unsafe_ptr=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1199v__unsafe_ptr=0;
  unsigned long long __temp1199v__dat__pos=0;
  unsigned long long __temp1199v__dat__length=0;
  char __temp1199v__dat__first=0;
  char* s2__unsafe_ptr=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1188v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align);
  __temp1191v__unsafe_ptr=__temp1190v__unsafe_ptr;
  __temp1191v__unsafe_size=__temp1190v__unsafe_size;
  __temp1191v__unsafe_align=__temp1190v__unsafe_align;
  __temp_errcode=list__temp517v(&__temp1191v__unsafe_ptr,&__temp1191v__unsafe_size,&__temp1191v__unsafe_align,&__temp1192v__buffer__unsafe_ptr,&__temp1192v__buffer__unsafe_size,&__temp1192v__buffer__unsafe_align,&__temp1192v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1194v=100;
  __temp_errcode=resize__temp474v(&__temp1191v__unsafe_ptr,&__temp1191v__unsafe_size,&__temp1191v__unsafe_align,__temp1194v,&__temp1195v__unsafe_ptr,&__temp1195v__unsafe_size,&__temp1195v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp706v(&__temp1191v__unsafe_ptr,&__temp1191v__unsafe_size,&__temp1191v__unsafe_align,&__temp1191v__unsafe_size,__temp1196v,&__temp1197v__unsafe_ptr,&__temp1197v__dat__pos,&__temp1197v__dat__length,&__temp1197v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1197v__dat__pos;
  s1__dat__length=__temp1197v__dat__length;
  s1__dat__first=__temp1197v__dat__first;
  __temp_errcode=copy__temp706v(&__temp1191v__unsafe_ptr,&__temp1191v__unsafe_size,&__temp1191v__unsafe_align,&__temp1191v__unsafe_size,__temp1198v,&__temp1199v__unsafe_ptr,&__temp1199v__dat__pos,&__temp1199v__dat__length,&__temp1199v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1199v__dat__pos;
  s2__dat__length=__temp1199v__dat__length;
  s2__dat__first=__temp1199v__dat__first;
  s1__unsafe_ptr=__temp1191v__unsafe_ptr;
  s2__unsafe_ptr=__temp1191v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:__temp_return:
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

static inline __attribute__((always_inline)) void print__temp681v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp682v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1200v() {
  char* __temp1201v__s1__unsafe_ptr=0;
  unsigned long long __temp1201v__s1__dat__pos=0;
  unsigned long long __temp1201v__s1__dat__length=0;
  char __temp1201v__s1__dat__first=0;
  char* __temp1201v__s2__unsafe_ptr=0;
  unsigned long long __temp1201v__s2__dat__pos=0;
  unsigned long long __temp1201v__s2__dat__length=0;
  char __temp1201v__s2__dat__first=0;
  unsigned long long __temp1202v____temp1193v____temp523v____temp438v=0;
  unsigned long long __temp1202v____temp1192v__buffer__unsafe_size=0;
  char __temp1202v____temp1193v____temp523v____temp439v__=0;
  char* s__s1__unsafe_ptr=0;
  unsigned long long s__s1__dat__pos=0;
  unsigned long long s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  unsigned long long s__s2__dat__pos=0;
  unsigned long long s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1187v(&__temp1201v__s1__unsafe_ptr,&__temp1201v__s1__dat__pos,&__temp1201v__s1__dat__length,&__temp1201v__s1__dat__first,&__temp1201v__s2__unsafe_ptr,&__temp1201v__s2__dat__pos,&__temp1201v__s2__dat__length,&__temp1201v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1201v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1201v__s1__dat__pos;
  s__s1__dat__length=__temp1201v__s1__dat__length;
  s__s1__dat__first=__temp1201v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1201v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1201v__s2__dat__pos;
  s__s2__dat__length=__temp1201v__s2__dat__length;
  s__s2__dat__first=__temp1201v__s2__dat__first;
  print__temp681v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp681v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1200v();return 0;}