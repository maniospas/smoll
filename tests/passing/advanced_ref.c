#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1236v="456";
const char* const __temp1234v="123";
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1226v(char** __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1243v=unsafe_ptr;
  *__temp1244v=unsafe_size;
  *__temp1245v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1246v) {
  *__temp1246v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1247v) {
  int value=0;
  *__temp1247v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1248v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1248v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1249v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1249v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1250v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1251v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1252v) {
  char* allocated=*__temp1252v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1252v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1253v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1253v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1254v) {
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
  *__temp1254v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v, unsigned long long size, char** __temp1258v, unsigned long long* __temp1259v, unsigned long long* __temp1260v) {
  char* buffer__unsafe_ptr=*__temp1255v;
  unsigned long long buffer__unsafe_size=*__temp1256v;
  unsigned long long buffer__unsafe_align=*__temp1257v;
  unsigned long long __temp436v=0;
  char __temp437v__=0;
  char __temp440v__=0;
  unsigned long long __temp441v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  char __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  char* __temp449v__=0;
  unsigned long long __temp450v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  neq__temp302v(size,__temp441v,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp444v__);
  zero__temp429v(buffer__unsafe_ptr,__temp443v,__temp444v__);
  }
  goto __temp_return;
  }
  __temp446v=0;
  neq__temp302v(buffer__unsafe_size,__temp446v,&__temp447v__);
  if(__temp447v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp448v__);
  bytes=__temp448v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp450v,bytes);
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  *__temp1258v=buffer__unsafe_ptr;
  *__temp1259v=buffer__unsafe_size;
  *__temp1260v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp514v(char** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v, char** __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v) {
  char* buffer__unsafe_ptr=*__temp1264v;
  unsigned long long buffer__unsafe_size=*__temp1265v;
  unsigned long long buffer__unsafe_align=*__temp1266v;
  unsigned long long __temp515v=0;
  unsigned long long __temp516v__=0;
  char __temp517v__=0;
  unsigned long long __temp518v=0;
  char* __temp519v__unsafe_ptr=0;
  unsigned long long __temp519v__unsafe_size=0;
  unsigned long long __temp519v__unsafe_align=0;
  unsigned long long __temp521v__=0;
  unsigned long long __temp522v=0;
  unsigned long long length=0;
  unsigned long long __temp1262v=0;
  char __temp1263v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp515v=0;
  len__temp506v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp516v__);
  eq__temp278v(__temp515v,__temp516v__,&__temp517v__);
  if(__temp517v__){
  __temp518v=1;
  __temp_errcode=alloc__temp434v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp518v,&__temp519v__unsafe_ptr,&__temp519v__unsafe_size,&__temp519v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp519v__unsafe_ptr;
  buffer__unsafe_size=__temp519v__unsafe_size;
  buffer__unsafe_align=__temp519v__unsafe_align;
  }
  len__temp506v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp521v__);
  __temp522v=__temp521v__;
  length=__temp522v;
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  *__temp1267v=buffer__unsafe_ptr;
  *__temp1268v=buffer__unsafe_size;
  *__temp1269v=buffer__unsafe_align;
  *__temp1270v=length;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1271v) {
  *__temp1271v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1272v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp427v__=0;
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
  *__temp1272v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1273v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) int resize__temp471v(char** __temp1274v, unsigned long long* __temp1275v, unsigned long long* __temp1276v, unsigned long long size, char** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v) {
  char* buffer__unsafe_ptr=*__temp1274v;
  unsigned long long buffer__unsafe_size=*__temp1275v;
  unsigned long long buffer__unsafe_align=*__temp1276v;
  char __temp472v__=0;
  unsigned long long __temp473v=0;
  char __temp474v__=0;
  unsigned long long __temp475v=0;
  unsigned long long __temp477v=0;
  char __temp478v__=0;
  unsigned long long __temp479v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp480v__=0;
  unsigned long long bytes=0;
  char* __temp481v__=0;
  char __temp482v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  goto __temp_return;
  }
  __temp473v=0;
  eq__temp278v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  buffer__unsafe_size=__temp475v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp477v=0;
  eq__temp278v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp479v__);
  prev_bytes=__temp479v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  lt__temp182v(prev_bytes,bytes,&__temp482v__);
  if(__temp482v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  *__temp1277v=buffer__unsafe_ptr;
  *__temp1278v=buffer__unsafe_size;
  *__temp1279v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp508v(char** __temp1280v, unsigned long long* __temp1281v, unsigned long long* __temp1282v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1280v=unsafe_ptr;
  *__temp1281v=unsafe_size;
  *__temp1282v=unsafe_align;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1283v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1284v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1284v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1285v) {
  char __temp503v__=0;
  unsigned long long __temp504v__=0;
  char* __temp505v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp503v__);
  if(__temp503v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp504v__);
  add__temp430v(buffer__unsafe_ptr,__temp504v__,&__temp505v__);
  *__temp1285v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp544v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1286v, unsigned long long* __temp1287v, unsigned long long* __temp1288v, unsigned long long* __temp1289v, unsigned long long* __temp1290v, char* __temp1291v) {
  *__temp1286v=buf__unsafe_ptr;
  *__temp1287v=buf__unsafe_size;
  *__temp1288v=buf__unsafe_align;
  *__temp1289v=dat__pos;
  *__temp1290v=dat__length;
  *__temp1291v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp554v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1292v, unsigned long long* __temp1293v, unsigned long long* __temp1294v, unsigned long long* __temp1295v, unsigned long long* __temp1296v, char* __temp1297v) {
  unsigned long long __temp555v=0;
  char __temp556v__=0;
  char* __temp557v__=0;
  char __temp558v__value=0;
  char first=0;
  char* __temp559v__buf__unsafe_ptr=0;
  unsigned long long __temp559v__buf__unsafe_size=0;
  unsigned long long __temp559v__buf__unsafe_align=0;
  unsigned long long __temp559v__dat__pos=0;
  unsigned long long __temp559v__dat__length=0;
  char __temp559v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp555v=0;
  neq__temp302v(length,__temp555v,&__temp556v__);
  if(__temp556v__){
  __temp_errcode=get__temp502v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp557v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp557v__){
  goto __temp_failure;
  }
  memcpy(&__temp558v__value,__temp557v__,1);
  first=__temp558v__value;
  }
  str__temp544v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp559v__buf__unsafe_ptr,&__temp559v__buf__unsafe_size,&__temp559v__buf__unsafe_align,&__temp559v__dat__pos,&__temp559v__dat__length,&__temp559v__dat__first);
  *__temp1292v=__temp559v__buf__unsafe_ptr;
  *__temp1293v=__temp559v__buf__unsafe_size;
  *__temp1294v=__temp559v__buf__unsafe_align;
  *__temp1295v=__temp559v__dat__pos;
  *__temp1296v=__temp559v__dat__length;
  *__temp1297v=__temp559v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp560v(const char* c, char** __temp1299v, unsigned long long* __temp1300v, unsigned long long* __temp1301v, unsigned long long* __temp1302v, unsigned long long* __temp1303v, char* __temp1304v) {
  char* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__unsafe_size=0;
  unsigned long long __temp561v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp562v=0;
  char* __temp563v__buf__unsafe_ptr=0;
  unsigned long long __temp563v__buf__unsafe_size=0;
  unsigned long long __temp563v__buf__unsafe_align=0;
  unsigned long long __temp563v__dat__pos=0;
  unsigned long long __temp563v__dat__length=0;
  char __temp563v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp508v(&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_align);
  buf__unsafe_ptr=__temp561v__unsafe_ptr;
  buf__unsafe_size=__temp561v__unsafe_size;
  buf__unsafe_align=__temp561v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp562v=0;
  __temp_errcode=str__temp554v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp562v,length,&__temp563v__buf__unsafe_ptr,&__temp563v__buf__unsafe_size,&__temp563v__buf__unsafe_align,&__temp563v__dat__pos,&__temp563v__dat__length,&__temp563v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1299v=__temp563v__buf__unsafe_ptr;
  *__temp1300v=__temp563v__buf__unsafe_size;
  *__temp1301v=__temp563v__buf__unsafe_align;
  *__temp1302v=__temp563v__dat__pos;
  *__temp1303v=__temp563v__dat__length;
  *__temp1304v=__temp563v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp564v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1305v) {
  *__temp1305v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1306v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void div__temp158v(unsigned long long x, unsigned long long y, unsigned long long* __temp1307v) {
  int __temp159v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp159v__);
  z=x/y;
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void str__temp553v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1308v, unsigned long long* __temp1309v, unsigned long long* __temp1310v, unsigned long long* __temp1311v, unsigned long long* __temp1312v, char* __temp1313v) {
  *__temp1308v=other__buf__unsafe_ptr;
  *__temp1309v=other__buf__unsafe_size;
  *__temp1310v=other__buf__unsafe_align;
  *__temp1311v=other__dat__pos;
  *__temp1312v=other__dat__length;
  *__temp1313v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1314v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1317v, unsigned long long* __temp1318v, unsigned long long* __temp1319v, unsigned long long* __temp1320v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1321v, unsigned long long* __temp1322v, unsigned long long* __temp1323v, unsigned long long* __temp1324v, unsigned long long* __temp1325v, char* __temp1326v) {
  char* buf__unsafe_ptr=*__temp1317v;
  unsigned long long buf__unsafe_size=*__temp1318v;
  unsigned long long buf__unsafe_align=*__temp1319v;
  unsigned long long pos=*__temp1320v;
  char* __temp677v__buf__unsafe_ptr=0;
  unsigned long long __temp677v__buf__unsafe_size=0;
  unsigned long long __temp677v__buf__unsafe_align=0;
  unsigned long long __temp677v__dat__pos=0;
  unsigned long long __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp678v__=0;
  unsigned long long __temp679v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp680v__=0;
  char __temp681v__=0;
  unsigned long long __temp682v=0;
  unsigned long long __temp683v__=0;
  unsigned long long prev_pos=0;
  char* __temp684v__buf__unsafe_ptr=0;
  unsigned long long __temp684v__buf__unsafe_size=0;
  unsigned long long __temp684v__buf__unsafe_align=0;
  unsigned long long __temp684v__dat__pos=0;
  unsigned long long __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp553v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp677v__buf__unsafe_ptr,&__temp677v__buf__unsafe_size,&__temp677v__buf__unsafe_align,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  other__buf__unsafe_ptr=__temp677v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp677v__buf__unsafe_size;
  other__buf__unsafe_align=__temp677v__buf__unsafe_align;
  other__dat__pos=__temp677v__dat__pos;
  other__dat__length=__temp677v__dat__length;
  other__dat__first=__temp677v__dat__first;
  len__temp564v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp678v__);
  add__temp110v(pos,__temp678v__,&__temp679v__);
  next_pos=__temp679v__;
  len__temp506v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp680v__);
  gt__temp206v(next_pos,__temp680v__,&__temp681v__);
  if(__temp681v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp682v=0;
  add__temp110v(pos,__temp682v,&__temp683v__);
  prev_pos=__temp683v__;
  pos=next_pos;
  str__temp544v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp684v__buf__unsafe_ptr,&__temp684v__buf__unsafe_size,&__temp684v__buf__unsafe_align,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  *__temp1317v=buf__unsafe_ptr;
  *__temp1318v=buf__unsafe_size;
  *__temp1319v=buf__unsafe_align;
  *__temp1320v=pos;
  *__temp1321v=__temp684v__buf__unsafe_ptr;
  *__temp1322v=__temp684v__buf__unsafe_size;
  *__temp1323v=__temp684v__buf__unsafe_align;
  *__temp1324v=__temp684v__dat__pos;
  *__temp1325v=__temp684v__dat__length;
  *__temp1326v=__temp684v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp745v(char** __temp1330v, unsigned long long* __temp1331v, unsigned long long* __temp1332v, unsigned long long* __temp1333v, const char* _other, char** __temp1334v, unsigned long long* __temp1335v, unsigned long long* __temp1336v, unsigned long long* __temp1337v, unsigned long long* __temp1338v, char* __temp1339v) {
  char* li__buffer__unsafe_ptr=*__temp1330v;
  unsigned long long li__buffer__unsafe_size=*__temp1331v;
  unsigned long long li__buffer__unsafe_align=*__temp1332v;
  unsigned long long li__length=*__temp1333v;
  char* __temp746v__buf__unsafe_ptr=0;
  unsigned long long __temp746v__buf__unsafe_size=0;
  unsigned long long __temp746v__buf__unsafe_align=0;
  unsigned long long __temp746v__dat__pos=0;
  unsigned long long __temp746v__dat__length=0;
  char __temp746v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp747v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp748v__=0;
  unsigned long long __temp749v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp750v__=0;
  char __temp751v__=0;
  unsigned long long __temp752v=0;
  unsigned long long __temp753v__=0;
  unsigned long long __temp754v=0;
  unsigned long long __temp755v__=0;
  unsigned long long __temp756v__=0;
  char* __temp757v__unsafe_ptr=0;
  unsigned long long __temp757v__unsafe_size=0;
  unsigned long long __temp757v__unsafe_align=0;
  char* __temp758v__buf__unsafe_ptr=0;
  unsigned long long __temp758v__buf__unsafe_size=0;
  unsigned long long __temp758v__buf__unsafe_align=0;
  unsigned long long __temp758v__dat__pos=0;
  unsigned long long __temp758v__dat__length=0;
  char __temp758v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp560v(_other,&__temp746v__buf__unsafe_ptr,&__temp746v__buf__unsafe_size,&__temp746v__buf__unsafe_align,&__temp746v__dat__pos,&__temp746v__dat__length,&__temp746v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp746v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp746v__buf__unsafe_size;
  other__buf__unsafe_align=__temp746v__buf__unsafe_align;
  other__dat__pos=__temp746v__dat__pos;
  other__dat__length=__temp746v__dat__length;
  other__dat__first=__temp746v__dat__first;
  __temp747v=li__length;
  prev_prev_length=__temp747v;
  len__temp564v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp748v__);
  add__temp110v(li__length,__temp748v__,&__temp749v__);
  prev_length=__temp749v__;
  len__temp506v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp750v__);
  ge__temp254v(prev_length,__temp750v__,&__temp751v__);
  if(__temp751v__){
  __temp752v=2;
  div__temp158v(prev_length,__temp752v,&__temp753v__);
  __temp754v=1;
  add__temp110v(__temp753v__,__temp754v,&__temp755v__);
  add__temp110v(prev_length,__temp755v__,&__temp756v__);
  __temp_errcode=resize__temp471v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp756v__,&__temp757v__unsafe_ptr,&__temp757v__unsafe_size,&__temp757v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp757v__unsafe_ptr;
  li__buffer__unsafe_size=__temp757v__unsafe_size;
  li__buffer__unsafe_align=__temp757v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp676v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp758v__buf__unsafe_ptr,&__temp758v__buf__unsafe_size,&__temp758v__buf__unsafe_align,&__temp758v__dat__pos,&__temp758v__dat__length,&__temp758v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1330v=li__buffer__unsafe_ptr;
  *__temp1331v=li__buffer__unsafe_size;
  *__temp1332v=li__buffer__unsafe_align;
  *__temp1333v=li__length;
  *__temp1334v=__temp758v__buf__unsafe_ptr;
  *__temp1335v=__temp758v__buf__unsafe_size;
  *__temp1336v=__temp758v__buf__unsafe_align;
  *__temp1337v=__temp758v__dat__pos;
  *__temp1338v=__temp758v__dat__length;
  *__temp1339v=__temp758v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1225v(char** __temp1351v, unsigned long long* __temp1352v, unsigned long long* __temp1353v, unsigned long long* __temp1354v, unsigned long long* __temp1355v, char* __temp1356v, char** __temp1357v, unsigned long long* __temp1358v, unsigned long long* __temp1359v, unsigned long long* __temp1360v, unsigned long long* __temp1361v, char* __temp1362v) {
  char* __temp1228v__unsafe_ptr=0;
  unsigned long long __temp1228v__unsafe_size=0;
  unsigned long long __temp1228v__unsafe_align=0;
  char* __temp1229v__unsafe_ptr=0;
  unsigned long long __temp1229v__unsafe_size=0;
  unsigned long long __temp1229v__unsafe_align=0;
  char* __temp1230v__buffer__unsafe_ptr=0;
  unsigned long long __temp1230v__buffer__unsafe_size=0;
  unsigned long long __temp1230v__buffer__unsafe_align=0;
  unsigned long long __temp1230v__length=0;
  unsigned long long __temp1232v=0;
  char* __temp1233v__unsafe_ptr=0;
  unsigned long long __temp1233v__unsafe_size=0;
  unsigned long long __temp1233v__unsafe_align=0;
  char* __temp1235v__buf__unsafe_ptr=0;
  unsigned long long __temp1235v__buf__unsafe_size=0;
  unsigned long long __temp1235v__buf__unsafe_align=0;
  unsigned long long __temp1235v__dat__pos=0;
  unsigned long long __temp1235v__dat__length=0;
  char __temp1235v__dat__first=0;
  char* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1237v__buf__unsafe_ptr=0;
  unsigned long long __temp1237v__buf__unsafe_size=0;
  unsigned long long __temp1237v__buf__unsafe_align=0;
  unsigned long long __temp1237v__dat__pos=0;
  unsigned long long __temp1237v__dat__length=0;
  char __temp1237v__dat__first=0;
  char* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  unsigned long long __temp1344v=0;
  char __temp1345v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1226v(&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  __temp1229v__unsafe_ptr=__temp1228v__unsafe_ptr;
  __temp1229v__unsafe_size=__temp1228v__unsafe_size;
  __temp1229v__unsafe_align=__temp1228v__unsafe_align;
  __temp_errcode=list__temp514v(&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align,&__temp1230v__buffer__unsafe_ptr,&__temp1230v__buffer__unsafe_size,&__temp1230v__buffer__unsafe_align,&__temp1230v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1232v=100;
  __temp_errcode=resize__temp471v(&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align,__temp1232v,&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp745v(&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align,&__temp1229v__unsafe_size,__temp1234v,&__temp1235v__buf__unsafe_ptr,&__temp1235v__buf__unsafe_size,&__temp1235v__buf__unsafe_align,&__temp1235v__dat__pos,&__temp1235v__dat__length,&__temp1235v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1235v__dat__pos;
  s1__dat__length=__temp1235v__dat__length;
  s1__dat__first=__temp1235v__dat__first;
  __temp_errcode=copy__temp745v(&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align,&__temp1229v__unsafe_size,__temp1236v,&__temp1237v__buf__unsafe_ptr,&__temp1237v__buf__unsafe_size,&__temp1237v__buf__unsafe_align,&__temp1237v__dat__pos,&__temp1237v__dat__length,&__temp1237v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1237v__dat__pos;
  s2__dat__length=__temp1237v__dat__length;
  s2__dat__first=__temp1237v__dat__first;
  s1__buf__unsafe_ptr=__temp1229v__unsafe_ptr;
  s1__buf__unsafe_size=__temp1229v__unsafe_size;
  s1__buf__unsafe_align=__temp1229v__unsafe_align;
  s2__buf__unsafe_ptr=__temp1229v__unsafe_ptr;
  s2__buf__unsafe_size=__temp1229v__unsafe_size;
  s2__buf__unsafe_align=__temp1229v__unsafe_align;
  *__temp1351v=s1__buf__unsafe_ptr;
  *__temp1352v=s1__buf__unsafe_size;
  *__temp1353v=s1__buf__unsafe_align;
  *__temp1354v=s1__dat__pos;
  *__temp1355v=s1__dat__length;
  *__temp1356v=s1__dat__first;
  *__temp1357v=s2__buf__unsafe_ptr;
  *__temp1358v=s2__buf__unsafe_size;
  *__temp1359v=s2__buf__unsafe_align;
  *__temp1360v=s2__dat__pos;
  *__temp1361v=s2__dat__length;
  *__temp1362v=s2__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp716v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp718v__=0;
  char __temp719v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp350v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp718v__);
  gt__temp206v(__temp718v__,s__buf__unsafe_size,&__temp719v__);
  if(__temp719v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1238v() {
  char* __temp1239v__s1__buf__unsafe_ptr=0;
  unsigned long long __temp1239v__s1__buf__unsafe_size=0;
  unsigned long long __temp1239v__s1__buf__unsafe_align=0;
  unsigned long long __temp1239v__s1__dat__pos=0;
  unsigned long long __temp1239v__s1__dat__length=0;
  char __temp1239v__s1__dat__first=0;
  char* __temp1239v__s2__buf__unsafe_ptr=0;
  unsigned long long __temp1239v__s2__buf__unsafe_size=0;
  unsigned long long __temp1239v__s2__buf__unsafe_align=0;
  unsigned long long __temp1239v__s2__dat__pos=0;
  unsigned long long __temp1239v__s2__dat__length=0;
  char __temp1239v__s2__dat__first=0;
  char* s__s1__buf__unsafe_ptr=0;
  unsigned long long s__s1__buf__unsafe_size=0;
  unsigned long long s__s1__buf__unsafe_align=0;
  unsigned long long s__s1__dat__pos=0;
  unsigned long long s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__buf__unsafe_ptr=0;
  unsigned long long s__s2__buf__unsafe_size=0;
  unsigned long long s__s2__buf__unsafe_align=0;
  unsigned long long s__s2__dat__pos=0;
  unsigned long long s__s2__dat__length=0;
  char s__s2__dat__first=0;
  unsigned long long __temp1367v=0;
  char __temp1368v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1225v(&__temp1239v__s1__buf__unsafe_ptr,&__temp1239v__s1__buf__unsafe_size,&__temp1239v__s1__buf__unsafe_align,&__temp1239v__s1__dat__pos,&__temp1239v__s1__dat__length,&__temp1239v__s1__dat__first,&__temp1239v__s2__buf__unsafe_ptr,&__temp1239v__s2__buf__unsafe_size,&__temp1239v__s2__buf__unsafe_align,&__temp1239v__s2__dat__pos,&__temp1239v__s2__dat__length,&__temp1239v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__buf__unsafe_ptr=__temp1239v__s1__buf__unsafe_ptr;
  s__s1__buf__unsafe_size=__temp1239v__s1__buf__unsafe_size;
  s__s1__buf__unsafe_align=__temp1239v__s1__buf__unsafe_align;
  s__s1__dat__pos=__temp1239v__s1__dat__pos;
  s__s1__dat__length=__temp1239v__s1__dat__length;
  s__s1__dat__first=__temp1239v__s1__dat__first;
  s__s2__buf__unsafe_ptr=__temp1239v__s2__buf__unsafe_ptr;
  s__s2__buf__unsafe_size=__temp1239v__s2__buf__unsafe_size;
  s__s2__buf__unsafe_align=__temp1239v__s2__buf__unsafe_align;
  s__s2__dat__pos=__temp1239v__s2__dat__pos;
  s__s2__dat__length=__temp1239v__s2__dat__length;
  s__s2__dat__first=__temp1239v__s2__dat__first;
  __temp_errcode=print__temp716v(s__s1__buf__unsafe_ptr,s__s1__buf__unsafe_size,s__s1__buf__unsafe_align,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp716v(s__s2__buf__unsafe_ptr,s__s2__buf__unsafe_size,s__s2__buf__unsafe_align,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1238v();return 0;}