#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp352v="\n";
const char* const __temp1263v="name";
const char* const __temp1267v="is";
const char* const __temp1255v="hi";
const char* const __temp1259v="my";
const char* const __temp1271v="manios";
const char* const __temp436v="free";
const char* const __temp1244v=" ";
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

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1228v(char** __temp1285v, unsigned long long* __temp1286v, unsigned long long* __temp1287v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=41;
  *__temp1285v=unsafe_ptr;
  *__temp1286v=unsafe_size;
  *__temp1287v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  int __temp351v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1288v) {
  int value=0;
  *__temp1288v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1289v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1289v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1290v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1290v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1291v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1292v) {
  char* allocated=*__temp1292v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1292v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1293v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1293v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1294v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1295v) {
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
  *__temp1295v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1296v, unsigned long long* __temp1297v, unsigned long long* __temp1298v, unsigned long long size, char** __temp1299v, unsigned long long* __temp1300v, unsigned long long* __temp1301v) {
  char* buffer__unsafe_ptr=*__temp1296v;
  unsigned long long buffer__unsafe_size=*__temp1297v;
  unsigned long long buffer__unsafe_align=*__temp1298v;
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
  *__temp1296v=buffer__unsafe_ptr;
  *__temp1297v=buffer__unsafe_size;
  *__temp1298v=buffer__unsafe_align;
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1302v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1303v) {
  *__temp1303v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1304v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1304v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1305v, unsigned long long* __temp1306v, unsigned long long* __temp1307v, unsigned long long i, char** __temp1308v) {
  char* buffer__unsafe_ptr=*__temp1305v;
  unsigned long long buffer__unsafe_size=*__temp1306v;
  unsigned long long buffer__unsafe_align=*__temp1307v;
  char __temp502v__=0;
  unsigned long long __temp503v__=0;
  char* __temp504v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp502v__);
  if(__temp502v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp503v__);
  add__temp430v(buffer__unsafe_ptr,__temp503v__,&__temp504v__);
  unsafe_ptr=__temp504v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_align;
  *__temp1308v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1309v, unsigned long long* __temp1310v, unsigned long long* __temp1311v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1309v=unsafe_ptr;
  *__temp1310v=unsafe_size;
  *__temp1311v=unsafe_align;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1312v) {
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
  *__temp1312v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1313v, unsigned long long* __temp1314v, unsigned long long* __temp1315v, unsigned long long* __temp1316v, unsigned long long* __temp1317v, char* __temp1318v) {
  goto __temp_return;
  __temp_return:
  *__temp1313v=buf__unsafe_ptr;
  *__temp1314v=buf__unsafe_size;
  *__temp1315v=buf__unsafe_align;
  *__temp1316v=dat__pos;
  *__temp1317v=dat__length;
  *__temp1318v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp557v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1319v, unsigned long long* __temp1320v, unsigned long long* __temp1321v, unsigned long long* __temp1322v, unsigned long long* __temp1323v, char* __temp1324v) {
  unsigned long long __temp558v=0;
  char __temp559v__=0;
  char* __temp560v__=0;
  char __temp561v__value=0;
  char first=0;
  char* __temp562v__buf__unsafe_ptr=0;
  unsigned long long __temp562v__buf__unsafe_size=0;
  unsigned long long __temp562v__buf__unsafe_align=0;
  unsigned long long __temp562v__dat__pos=0;
  unsigned long long __temp562v__dat__length=0;
  char __temp562v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp558v=0;
  neq__temp302v(length,__temp558v,&__temp559v__);
  if(__temp559v__){
  __temp_errcode=get__temp505v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp560v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp560v__){
  goto __temp_failure;
  }
  memcpy(&__temp561v__value,__temp560v__,1);
  first=__temp561v__value;
  }
  str__temp547v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp562v__buf__unsafe_ptr,&__temp562v__buf__unsafe_size,&__temp562v__buf__unsafe_align,&__temp562v__dat__pos,&__temp562v__dat__length,&__temp562v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1319v=__temp562v__buf__unsafe_ptr;
  *__temp1320v=__temp562v__buf__unsafe_size;
  *__temp1321v=__temp562v__buf__unsafe_align;
  *__temp1322v=__temp562v__dat__pos;
  *__temp1323v=__temp562v__dat__length;
  *__temp1324v=__temp562v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp563v(const char* c, char** __temp1325v, unsigned long long* __temp1326v, unsigned long long* __temp1327v, unsigned long long* __temp1328v, unsigned long long* __temp1329v, char* __temp1330v) {
  char* __temp564v__unsafe_ptr=0;
  unsigned long long __temp564v__unsafe_size=0;
  unsigned long long __temp564v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp565v=0;
  char* __temp566v__buf__unsafe_ptr=0;
  unsigned long long __temp566v__buf__unsafe_size=0;
  unsigned long long __temp566v__buf__unsafe_align=0;
  unsigned long long __temp566v__dat__pos=0;
  unsigned long long __temp566v__dat__length=0;
  char __temp566v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp564v__unsafe_ptr,&__temp564v__unsafe_size,&__temp564v__unsafe_align);
  buf__unsafe_ptr=__temp564v__unsafe_ptr;
  buf__unsafe_size=__temp564v__unsafe_size;
  buf__unsafe_align=__temp564v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp565v=0;
  __temp_errcode=str__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp565v,length,&__temp566v__buf__unsafe_ptr,&__temp566v__buf__unsafe_size,&__temp566v__buf__unsafe_align,&__temp566v__dat__pos,&__temp566v__dat__length,&__temp566v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1325v=__temp566v__buf__unsafe_ptr;
  *__temp1326v=__temp566v__buf__unsafe_size;
  *__temp1327v=__temp566v__buf__unsafe_align;
  *__temp1328v=__temp566v__dat__pos;
  *__temp1329v=__temp566v__dat__length;
  *__temp1330v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1331v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1331v=__temp412v__;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1332v, unsigned long long* __temp1333v, unsigned long long* __temp1334v) {
  char* __temp513v__unsafe_ptr=0;
  unsigned long long __temp513v__unsafe_size=0;
  unsigned long long __temp513v__unsafe_align=0;
  char* __temp514v__unsafe_ptr=0;
  unsigned long long __temp514v__unsafe_size=0;
  unsigned long long __temp514v__unsafe_align=0;
  char* __temp515v__unsafe_ptr=0;
  unsigned long long __temp515v__unsafe_size=0;
  unsigned long long __temp515v__unsafe_align=0;
  unsigned long long __temp516v____temp438v=0;
  char __temp516v____temp439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  __temp514v__unsafe_ptr=__temp513v__unsafe_ptr;
  __temp514v__unsafe_size=__temp513v__unsafe_size;
  __temp514v__unsafe_align=__temp513v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp514v__unsafe_ptr,&__temp514v__unsafe_size,&__temp514v__unsafe_align,size,&__temp515v__unsafe_ptr,&__temp515v__unsafe_size,&__temp515v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1332v=__temp515v__unsafe_ptr;
  *__temp1333v=__temp515v__unsafe_size;
  *__temp1334v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp621v(char** __temp1335v, unsigned long long* __temp1336v, unsigned long long* __temp1337v, char** __temp1338v, unsigned long long* __temp1339v, unsigned long long* __temp1340v, unsigned long long* __temp1341v) {
  char* buf__unsafe_ptr=*__temp1335v;
  unsigned long long buf__unsafe_size=*__temp1336v;
  unsigned long long buf__unsafe_align=*__temp1337v;
  unsigned long long __temp622v=0;
  unsigned long long __temp623v=0;
  unsigned long long pos=0;
  __temp622v=0;
  __temp623v=__temp622v;
  pos=__temp623v;
  goto __temp_return;
  __temp_return:
  *__temp1335v=buf__unsafe_ptr;
  *__temp1336v=buf__unsafe_size;
  *__temp1337v=buf__unsafe_align;
  *__temp1338v=buf__unsafe_ptr;
  *__temp1339v=buf__unsafe_size;
  *__temp1340v=buf__unsafe_align;
  *__temp1341v=pos;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1342v) {
  goto __temp_return;
  __temp_return:
  *__temp1342v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp402v(unsigned long long to, unsigned long long* __temp1343v, unsigned long long* __temp1344v) {
  int __temp403v=0;
  unsigned long long __temp404v=0;
  unsigned long long _from=0;
  unsigned long long __temp405v=0;
  unsigned long long from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  goto __temp_return;
  __temp_return:
  *__temp1343v=from;
  *__temp1344v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1345v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1345v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(unsigned long long* __temp1346v, unsigned long long r__to, unsigned long long* __temp1347v) {
  unsigned long long r__from=*__temp1346v;
  char __temp407v__=0;
  unsigned long long ret=0;
  unsigned long long __temp408v=0;
  unsigned long long __temp409v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp407v__);
  if(__temp407v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp408v=1;
  add__temp110v(ret,__temp408v,&__temp409v__);
  r__from=__temp409v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1346v=r__from;
  *__temp1347v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp556v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1348v, unsigned long long* __temp1349v, unsigned long long* __temp1350v, unsigned long long* __temp1351v, unsigned long long* __temp1352v, char* __temp1353v) {
  goto __temp_return;
  __temp_return:
  *__temp1348v=other__buf__unsafe_ptr;
  *__temp1349v=other__buf__unsafe_size;
  *__temp1350v=other__buf__unsafe_align;
  *__temp1351v=other__dat__pos;
  *__temp1352v=other__dat__length;
  *__temp1353v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp567v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1354v) {
  goto __temp_return;
  __temp_return:
  *__temp1354v=s__dat__length;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1355v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1355v=z;
}

static inline __attribute__((always_inline)) int copy__temp679v(char** __temp1356v, unsigned long long* __temp1357v, unsigned long long* __temp1358v, unsigned long long* __temp1359v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1360v, unsigned long long* __temp1361v, unsigned long long* __temp1362v, unsigned long long* __temp1363v, unsigned long long* __temp1364v, char* __temp1365v) {
  char* buf__unsafe_ptr=*__temp1356v;
  unsigned long long buf__unsafe_size=*__temp1357v;
  unsigned long long buf__unsafe_align=*__temp1358v;
  unsigned long long pos=*__temp1359v;
  char* __temp680v__buf__unsafe_ptr=0;
  unsigned long long __temp680v__buf__unsafe_size=0;
  unsigned long long __temp680v__buf__unsafe_align=0;
  unsigned long long __temp680v__dat__pos=0;
  unsigned long long __temp680v__dat__length=0;
  char __temp680v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp681v__=0;
  unsigned long long __temp682v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp683v__=0;
  char __temp684v__=0;
  unsigned long long __temp685v=0;
  unsigned long long __temp686v__=0;
  unsigned long long prev_pos=0;
  char* __temp687v__buf__unsafe_ptr=0;
  unsigned long long __temp687v__buf__unsafe_size=0;
  unsigned long long __temp687v__buf__unsafe_align=0;
  unsigned long long __temp687v__dat__pos=0;
  unsigned long long __temp687v__dat__length=0;
  char __temp687v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp556v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp680v__buf__unsafe_ptr,&__temp680v__buf__unsafe_size,&__temp680v__buf__unsafe_align,&__temp680v__dat__pos,&__temp680v__dat__length,&__temp680v__dat__first);
  other__buf__unsafe_ptr=__temp680v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp680v__buf__unsafe_size;
  other__buf__unsafe_align=__temp680v__buf__unsafe_align;
  other__dat__pos=__temp680v__dat__pos;
  other__dat__length=__temp680v__dat__length;
  other__dat__first=__temp680v__dat__first;
  len__temp567v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp681v__);
  add__temp110v(pos,__temp681v__,&__temp682v__);
  next_pos=__temp682v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp683v__);
  gt__temp206v(next_pos,__temp683v__,&__temp684v__);
  if(__temp684v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp685v=0;
  add__temp110v(pos,__temp685v,&__temp686v__);
  prev_pos=__temp686v__;
  pos=next_pos;
  str__temp547v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp687v__buf__unsafe_ptr,&__temp687v__buf__unsafe_size,&__temp687v__buf__unsafe_align,&__temp687v__dat__pos,&__temp687v__dat__length,&__temp687v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1356v=buf__unsafe_ptr;
  *__temp1357v=buf__unsafe_size;
  *__temp1358v=buf__unsafe_align;
  *__temp1359v=pos;
  *__temp1360v=__temp687v__buf__unsafe_ptr;
  *__temp1361v=__temp687v__buf__unsafe_size;
  *__temp1362v=__temp687v__buf__unsafe_align;
  *__temp1363v=__temp687v__dat__pos;
  *__temp1364v=__temp687v__dat__length;
  *__temp1365v=__temp687v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp688v(char** __temp1366v, unsigned long long* __temp1367v, unsigned long long* __temp1368v, unsigned long long* __temp1369v, const char* _other, char** __temp1370v, unsigned long long* __temp1371v, unsigned long long* __temp1372v, unsigned long long* __temp1373v, unsigned long long* __temp1374v, char* __temp1375v) {
  char* buf__unsafe_ptr=*__temp1366v;
  unsigned long long buf__unsafe_size=*__temp1367v;
  unsigned long long buf__unsafe_align=*__temp1368v;
  unsigned long long pos=*__temp1369v;
  char* __temp689v__buf__unsafe_ptr=0;
  unsigned long long __temp689v__buf__unsafe_size=0;
  unsigned long long __temp689v__buf__unsafe_align=0;
  unsigned long long __temp689v__dat__pos=0;
  unsigned long long __temp689v__dat__length=0;
  char __temp689v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp690v__=0;
  unsigned long long __temp691v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp692v__=0;
  char __temp693v__=0;
  unsigned long long __temp694v=0;
  unsigned long long __temp695v__=0;
  unsigned long long prev_pos=0;
  char* __temp696v__buf__unsafe_ptr=0;
  unsigned long long __temp696v__buf__unsafe_size=0;
  unsigned long long __temp696v__buf__unsafe_align=0;
  unsigned long long __temp696v__dat__pos=0;
  unsigned long long __temp696v__dat__length=0;
  char __temp696v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp563v(_other,&__temp689v__buf__unsafe_ptr,&__temp689v__buf__unsafe_size,&__temp689v__buf__unsafe_align,&__temp689v__dat__pos,&__temp689v__dat__length,&__temp689v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp689v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp689v__buf__unsafe_size;
  other__buf__unsafe_align=__temp689v__buf__unsafe_align;
  other__dat__pos=__temp689v__dat__pos;
  other__dat__length=__temp689v__dat__length;
  other__dat__first=__temp689v__dat__first;
  len__temp567v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp690v__);
  add__temp110v(pos,__temp690v__,&__temp691v__);
  next_pos=__temp691v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp692v__);
  gt__temp206v(next_pos,__temp692v__,&__temp693v__);
  if(__temp693v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp694v=0;
  add__temp110v(pos,__temp694v,&__temp695v__);
  prev_pos=__temp695v__;
  pos=next_pos;
  str__temp547v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp696v__buf__unsafe_ptr,&__temp696v__buf__unsafe_size,&__temp696v__buf__unsafe_align,&__temp696v__dat__pos,&__temp696v__dat__length,&__temp696v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1366v=buf__unsafe_ptr;
  *__temp1367v=buf__unsafe_size;
  *__temp1368v=buf__unsafe_align;
  *__temp1369v=pos;
  *__temp1370v=__temp696v__buf__unsafe_ptr;
  *__temp1371v=__temp696v__buf__unsafe_size;
  *__temp1372v=__temp696v__buf__unsafe_align;
  *__temp1373v=__temp696v__dat__pos;
  *__temp1374v=__temp696v__dat__length;
  *__temp1375v=__temp696v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1230v(char** __temp1376v, unsigned long long* __temp1377v, unsigned long long* __temp1378v, char** __temp1379v, unsigned long long* __temp1380v, unsigned long long* __temp1381v, unsigned long long* __temp1382v, unsigned long long* __temp1383v, char* __temp1384v) {
  char* buff__unsafe_ptr=*__temp1376v;
  unsigned long long buff__unsafe_size=*__temp1377v;
  unsigned long long buff__unsafe_align=*__temp1378v;
  unsigned long long __temp1231v=0;
  unsigned long long __temp1232v__=0;
  char* __temp1233v__unsafe_ptr=0;
  unsigned long long __temp1233v__unsafe_size=0;
  unsigned long long __temp1233v__unsafe_align=0;
  unsigned long long __temp1234v____temp516v____temp438v=0;
  char __temp1234v____temp516v____temp439v__=0;
  char* __temp1235v__unsafe_ptr=0;
  unsigned long long __temp1235v__unsafe_size=0;
  unsigned long long __temp1235v__unsafe_align=0;
  char* __temp1236v__buf__unsafe_ptr=0;
  unsigned long long __temp1236v__buf__unsafe_size=0;
  unsigned long long __temp1236v__buf__unsafe_align=0;
  unsigned long long __temp1236v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  unsigned long long mem__buf__unsafe_size=0;
  unsigned long long mem__buf__unsafe_align=0;
  unsigned long long mem__pos=0;
  unsigned long long __temp1237v__=0;
  unsigned long long __temp1238v__from=0;
  unsigned long long __temp1238v__to=0;
  unsigned long long iter__from=0;
  unsigned long long iter__to=0;
  unsigned long long start=0;
  char __temp1239v=0;
  unsigned long long __temp1240v__=0;
  unsigned long long i=0;
  char* __temp1241v__=0;
  char* __temp1242v__buf__unsafe_ptr=0;
  unsigned long long __temp1242v__buf__unsafe_size=0;
  unsigned long long __temp1242v__buf__unsafe_align=0;
  unsigned long long __temp1242v__dat__pos=0;
  unsigned long long __temp1242v__dat__length=0;
  char __temp1242v__dat__first=0;
  char* __temp1243v__buf__unsafe_ptr=0;
  unsigned long long __temp1243v__buf__unsafe_size=0;
  unsigned long long __temp1243v__buf__unsafe_align=0;
  unsigned long long __temp1243v__dat__pos=0;
  unsigned long long __temp1243v__dat__length=0;
  char __temp1243v__dat__first=0;
  char* __temp1245v__buf__unsafe_ptr=0;
  unsigned long long __temp1245v__buf__unsafe_size=0;
  unsigned long long __temp1245v__buf__unsafe_align=0;
  unsigned long long __temp1245v__dat__pos=0;
  unsigned long long __temp1245v__dat__length=0;
  char __temp1245v__dat__first=0;
  char* __temp1246v__buf__unsafe_ptr=0;
  unsigned long long __temp1246v__buf__unsafe_size=0;
  unsigned long long __temp1246v__buf__unsafe_align=0;
  unsigned long long __temp1246v__dat__pos=0;
  unsigned long long __temp1246v__dat__length=0;
  char __temp1246v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1231v=4;
  KB__temp410v(__temp1231v,&__temp1232v__);
  __temp_errcode=alloc__temp510v(__temp1232v__,&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1235v__unsafe_ptr=__temp1233v__unsafe_ptr;
  __temp1235v__unsafe_size=__temp1233v__unsafe_size;
  __temp1235v__unsafe_align=__temp1233v__unsafe_align;
  bufpos__temp621v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align,&__temp1236v__buf__unsafe_ptr,&__temp1236v__buf__unsafe_size,&__temp1236v__buf__unsafe_align,&__temp1236v__pos);
  mem__buf__unsafe_ptr=__temp1236v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1236v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1236v__buf__unsafe_align;
  mem__pos=__temp1236v__pos;
  len__temp509v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1237v__);
  range__temp402v(__temp1237v__,&__temp1238v__from,&__temp1238v__to);
  iter__from=__temp1238v__from;
  iter__to=__temp1238v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp406v(&iter__from,iter__to,&__temp1240v__);
  __temp1239v=__temp_complain;
  i=__temp1240v__;
  __temp1239v=__temp1239v==0;
  if(!__temp1239v){
  break;
  }
  __temp_errcode=get__temp505v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__buf__unsafe_ptr,__temp1241v__,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__buf__unsafe_size,__temp1241v__+8,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__buf__unsafe_align,__temp1241v__+16,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__dat__pos,__temp1241v__+24,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__dat__length,__temp1241v__+32,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v__dat__first,__temp1241v__+40,1);
  __temp_errcode=copy__temp679v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1242v__buf__unsafe_ptr,__temp1242v__buf__unsafe_size,__temp1242v__buf__unsafe_align,__temp1242v__dat__pos,__temp1242v__dat__length,__temp1242v__dat__first,&__temp1243v__buf__unsafe_ptr,&__temp1243v__buf__unsafe_size,&__temp1243v__buf__unsafe_align,&__temp1243v__dat__pos,&__temp1243v__dat__length,&__temp1243v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp688v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1244v,&__temp1245v__buf__unsafe_ptr,&__temp1245v__buf__unsafe_size,&__temp1245v__buf__unsafe_align,&__temp1245v__dat__pos,&__temp1245v__dat__length,&__temp1245v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp557v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1246v__buf__unsafe_ptr,&__temp1246v__buf__unsafe_size,&__temp1246v__buf__unsafe_align,&__temp1246v__dat__pos,&__temp1246v__dat__length,&__temp1246v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1376v=buff__unsafe_ptr;
  *__temp1377v=buff__unsafe_size;
  *__temp1378v=buff__unsafe_align;
  *__temp1379v=__temp1246v__buf__unsafe_ptr;
  *__temp1380v=__temp1246v__buf__unsafe_size;
  *__temp1381v=__temp1246v__buf__unsafe_align;
  *__temp1382v=__temp1246v__dat__pos;
  *__temp1383v=__temp1246v__dat__length;
  *__temp1384v=__temp1246v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value, const char* endl) {
  int __temp362v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp723v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp724v=0;
  const char* endl=0;
  unsigned long long __temp725v__=0;
  char __temp726v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp352v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp725v__);
  gt__temp206v(__temp725v__,s__buf__unsafe_size,&__temp726v__);
  if(__temp726v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1247v() {
  char* __temp1248v__unsafe_ptr=0;
  unsigned long long __temp1248v__unsafe_size=0;
  unsigned long long __temp1248v__unsafe_align=0;
  char* __temp1249v__unsafe_ptr=0;
  unsigned long long __temp1249v__unsafe_size=0;
  unsigned long long __temp1249v__unsafe_align=0;
  unsigned long long __temp1250v=0;
  char* __temp1251v__unsafe_ptr=0;
  unsigned long long __temp1251v__unsafe_size=0;
  unsigned long long __temp1251v__unsafe_align=0;
  unsigned long long __temp1252v____temp438v=0;
  char __temp1252v____temp439v__=0;
  char* buff__unsafe_ptr=0;
  unsigned long long buff__unsafe_size=0;
  unsigned long long buff__unsafe_align=0;
  unsigned long long __temp1253v=0;
  char* __temp1254v__=0;
  char* __temp1256v__buf__unsafe_ptr=0;
  unsigned long long __temp1256v__buf__unsafe_size=0;
  unsigned long long __temp1256v__buf__unsafe_align=0;
  unsigned long long __temp1256v__dat__pos=0;
  unsigned long long __temp1256v__dat__length=0;
  char __temp1256v__dat__first=0;
  unsigned long long __temp1257v=0;
  char* __temp1258v__=0;
  char* __temp1260v__buf__unsafe_ptr=0;
  unsigned long long __temp1260v__buf__unsafe_size=0;
  unsigned long long __temp1260v__buf__unsafe_align=0;
  unsigned long long __temp1260v__dat__pos=0;
  unsigned long long __temp1260v__dat__length=0;
  char __temp1260v__dat__first=0;
  unsigned long long __temp1261v=0;
  char* __temp1262v__=0;
  char* __temp1264v__buf__unsafe_ptr=0;
  unsigned long long __temp1264v__buf__unsafe_size=0;
  unsigned long long __temp1264v__buf__unsafe_align=0;
  unsigned long long __temp1264v__dat__pos=0;
  unsigned long long __temp1264v__dat__length=0;
  char __temp1264v__dat__first=0;
  unsigned long long __temp1265v=0;
  char* __temp1266v__=0;
  char* __temp1268v__buf__unsafe_ptr=0;
  unsigned long long __temp1268v__buf__unsafe_size=0;
  unsigned long long __temp1268v__buf__unsafe_align=0;
  unsigned long long __temp1268v__dat__pos=0;
  unsigned long long __temp1268v__dat__length=0;
  char __temp1268v__dat__first=0;
  unsigned long long __temp1269v=0;
  char* __temp1270v__=0;
  char* __temp1272v__buf__unsafe_ptr=0;
  unsigned long long __temp1272v__buf__unsafe_size=0;
  unsigned long long __temp1272v__buf__unsafe_align=0;
  unsigned long long __temp1272v__dat__pos=0;
  unsigned long long __temp1272v__dat__length=0;
  char __temp1272v__dat__first=0;
  unsigned long long __temp1273v=0;
  char* __temp1274v__=0;
  char* __temp1275v__buf__unsafe_ptr=0;
  unsigned long long __temp1275v__buf__unsafe_size=0;
  unsigned long long __temp1275v__buf__unsafe_align=0;
  unsigned long long __temp1275v__dat__pos=0;
  unsigned long long __temp1275v__dat__length=0;
  char __temp1275v__dat__first=0;
  unsigned long long __temp1276v____temp1234v____temp516v____temp438v=0;
  char __temp1276v____temp1234v____temp516v____temp439v__=0;
  unsigned long long __temp1277v__=0;
  unsigned long long __temp1278v__from=0;
  unsigned long long __temp1278v__to=0;
  unsigned long long full_iter__from=0;
  unsigned long long full_iter__to=0;
  char __temp1279v=0;
  unsigned long long __temp1280v__=0;
  unsigned long long j=0;
  char* __temp1282v__=0;
  char* __temp1283v__buf__unsafe_ptr=0;
  unsigned long long __temp1283v__buf__unsafe_size=0;
  unsigned long long __temp1283v__buf__unsafe_align=0;
  unsigned long long __temp1283v__dat__pos=0;
  unsigned long long __temp1283v__dat__length=0;
  char __temp1283v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1228v(&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align);
  __temp1249v__unsafe_ptr=__temp1248v__unsafe_ptr;
  __temp1249v__unsafe_size=__temp1248v__unsafe_size;
  __temp1249v__unsafe_align=__temp1248v__unsafe_align;
  __temp1250v=6;
  __temp_errcode=alloc__temp434v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_align,__temp1250v,&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1251v__unsafe_ptr;
  buff__unsafe_size=__temp1251v__unsafe_size;
  buff__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=0;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1253v,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp563v(__temp1255v,&__temp1256v__buf__unsafe_ptr,&__temp1256v__buf__unsafe_size,&__temp1256v__buf__unsafe_align,&__temp1256v__dat__pos,&__temp1256v__dat__length,&__temp1256v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__,&__temp1256v__buf__unsafe_ptr,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+8,&__temp1256v__buf__unsafe_size,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+16,&__temp1256v__buf__unsafe_align,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+24,&__temp1256v__dat__pos,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+32,&__temp1256v__dat__length,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+40,&__temp1256v__dat__first,1);
  __temp1257v=1;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1257v,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp563v(__temp1259v,&__temp1260v__buf__unsafe_ptr,&__temp1260v__buf__unsafe_size,&__temp1260v__buf__unsafe_align,&__temp1260v__dat__pos,&__temp1260v__dat__length,&__temp1260v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&__temp1260v__buf__unsafe_ptr,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+8,&__temp1260v__buf__unsafe_size,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+16,&__temp1260v__buf__unsafe_align,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+24,&__temp1260v__dat__pos,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+32,&__temp1260v__dat__length,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+40,&__temp1260v__dat__first,1);
  __temp1261v=2;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp563v(__temp1263v,&__temp1264v__buf__unsafe_ptr,&__temp1264v__buf__unsafe_size,&__temp1264v__buf__unsafe_align,&__temp1264v__dat__pos,&__temp1264v__dat__length,&__temp1264v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(__temp1262v__,&__temp1264v__buf__unsafe_ptr,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(__temp1262v__+8,&__temp1264v__buf__unsafe_size,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(__temp1262v__+16,&__temp1264v__buf__unsafe_align,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(__temp1262v__+24,&__temp1264v__dat__pos,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(__temp1262v__+32,&__temp1264v__dat__length,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(__temp1262v__+40,&__temp1264v__dat__first,1);
  __temp1265v=3;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1265v,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp563v(__temp1267v,&__temp1268v__buf__unsafe_ptr,&__temp1268v__buf__unsafe_size,&__temp1268v__buf__unsafe_align,&__temp1268v__dat__pos,&__temp1268v__dat__length,&__temp1268v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__,&__temp1268v__buf__unsafe_ptr,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+8,&__temp1268v__buf__unsafe_size,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+16,&__temp1268v__buf__unsafe_align,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+24,&__temp1268v__dat__pos,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+32,&__temp1268v__dat__length,8);
  if(!__temp1266v__){
  goto __temp_failure;
  }
  memcpy(__temp1266v__+40,&__temp1268v__dat__first,1);
  __temp1269v=4;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1269v,&__temp1270v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp563v(__temp1271v,&__temp1272v__buf__unsafe_ptr,&__temp1272v__buf__unsafe_size,&__temp1272v__buf__unsafe_align,&__temp1272v__dat__pos,&__temp1272v__dat__length,&__temp1272v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1270v__){
  goto __temp_failure;
  }
  memcpy(__temp1270v__,&__temp1272v__buf__unsafe_ptr,8);
  if(!__temp1270v__){
  goto __temp_failure;
  }
  memcpy(__temp1270v__+8,&__temp1272v__buf__unsafe_size,8);
  if(!__temp1270v__){
  goto __temp_failure;
  }
  memcpy(__temp1270v__+16,&__temp1272v__buf__unsafe_align,8);
  if(!__temp1270v__){
  goto __temp_failure;
  }
  memcpy(__temp1270v__+24,&__temp1272v__dat__pos,8);
  if(!__temp1270v__){
  goto __temp_failure;
  }
  memcpy(__temp1270v__+32,&__temp1272v__dat__length,8);
  if(!__temp1270v__){
  goto __temp_failure;
  }
  memcpy(__temp1270v__+40,&__temp1272v__dat__first,1);
  __temp1273v=5;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1273v,&__temp1274v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1230v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1275v__buf__unsafe_ptr,&__temp1275v__buf__unsafe_size,&__temp1275v__buf__unsafe_align,&__temp1275v__dat__pos,&__temp1275v__dat__length,&__temp1275v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__,&__temp1275v__buf__unsafe_ptr,8);
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__+8,&__temp1275v__buf__unsafe_size,8);
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__+16,&__temp1275v__buf__unsafe_align,8);
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__+24,&__temp1275v__dat__pos,8);
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__+32,&__temp1275v__dat__length,8);
  if(!__temp1274v__){
  goto __temp_failure;
  }
  memcpy(__temp1274v__+40,&__temp1275v__dat__first,1);
  len__temp509v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1277v__);
  range__temp402v(__temp1277v__,&__temp1278v__from,&__temp1278v__to);
  full_iter__from=__temp1278v__from;
  full_iter__to=__temp1278v__to;
  while(1){
  __temp_complain=next__temp406v(&full_iter__from,full_iter__to,&__temp1280v__);
  __temp1279v=__temp_complain;
  j=__temp1280v__;
  __temp1279v=__temp1279v==0;
  if(!__temp1279v){
  break;
  }
  print__temp361v(j,__temp1244v);
  __temp_errcode=get__temp505v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1282v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(&__temp1283v__buf__unsafe_ptr,__temp1282v__,8);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(&__temp1283v__buf__unsafe_size,__temp1282v__+8,8);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(&__temp1283v__buf__unsafe_align,__temp1282v__+16,8);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(&__temp1283v__dat__pos,__temp1282v__+24,8);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(&__temp1283v__dat__length,__temp1282v__+32,8);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(&__temp1283v__dat__first,__temp1282v__+40,1);
  __temp_errcode=print__temp723v(__temp1283v__buf__unsafe_ptr,__temp1283v__buf__unsafe_size,__temp1283v__buf__unsafe_align,__temp1283v__dat__pos,__temp1283v__dat__length,__temp1283v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1247v();return 0;}