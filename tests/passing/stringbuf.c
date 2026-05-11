#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1236v="surnname  ";
const char* const __temp1231v="-------------------";
const char* const __temp1233v="name      ";
const char* const __temp1256v="it's a me";
const char* const __temp604v="";
const char* const __temp352v="\n";
const char* const __temp1258v="mario";
const char* const __temp436v="free";
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

static inline __attribute__((always_inline)) void Person__temp_buffer__buffer__temp1241v(char** __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=82;
  *__temp1281v=unsafe_ptr;
  *__temp1282v=unsafe_size;
  *__temp1283v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp350v(const char* value) {
  int __temp351v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1284v) {
  int value=0;
  *__temp1284v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1285v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1285v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1286v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1286v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1287v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1288v) {
  char* allocated=*__temp1288v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1288v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1289v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1290v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1290v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1291v) {
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
  *__temp1291v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1292v, unsigned long long* __temp1293v, unsigned long long* __temp1294v, unsigned long long size, char** __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v) {
  char* buffer__unsafe_ptr=*__temp1292v;
  unsigned long long buffer__unsafe_size=*__temp1293v;
  unsigned long long buffer__unsafe_align=*__temp1294v;
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
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_align;
  *__temp1295v=buffer__unsafe_ptr;
  *__temp1296v=buffer__unsafe_size;
  *__temp1297v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1298v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp412v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1299v, unsigned long long* __temp1300v, unsigned long long* __temp1301v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1299v=unsafe_ptr;
  *__temp1300v=unsafe_size;
  *__temp1301v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1302v, unsigned long long* __temp1303v, unsigned long long* __temp1304v) {
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
  *__temp1302v=__temp515v__unsafe_ptr;
  *__temp1303v=__temp515v__unsafe_size;
  *__temp1304v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp621v(char** __temp1305v, unsigned long long* __temp1306v, unsigned long long* __temp1307v, char** __temp1308v, unsigned long long* __temp1309v, unsigned long long* __temp1310v, unsigned long long* __temp1311v) {
  char* buf__unsafe_ptr=*__temp1305v;
  unsigned long long buf__unsafe_size=*__temp1306v;
  unsigned long long buf__unsafe_align=*__temp1307v;
  unsigned long long __temp622v=0;
  unsigned long long __temp623v=0;
  unsigned long long pos=0;
  __temp622v=0;
  __temp623v=__temp622v;
  pos=__temp623v;
  goto __temp_return;
  __temp_return:
  *__temp1305v=buf__unsafe_ptr;
  *__temp1306v=buf__unsafe_size;
  *__temp1307v=buf__unsafe_align;
  *__temp1308v=buf__unsafe_ptr;
  *__temp1309v=buf__unsafe_size;
  *__temp1310v=buf__unsafe_align;
  *__temp1311v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1312v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1313v) {
  *__temp1313v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1314v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1314v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1315v, unsigned long long* __temp1316v, unsigned long long* __temp1317v, unsigned long long i, char** __temp1318v) {
  char* buffer__unsafe_ptr=*__temp1315v;
  unsigned long long buffer__unsafe_size=*__temp1316v;
  unsigned long long buffer__unsafe_align=*__temp1317v;
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
  *__temp1315v=buffer__unsafe_ptr;
  *__temp1316v=buffer__unsafe_size;
  *__temp1317v=buffer__unsafe_align;
  *__temp1318v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1319v) {
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
  *__temp1319v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1320v, unsigned long long* __temp1321v, unsigned long long* __temp1322v, unsigned long long* __temp1323v, unsigned long long* __temp1324v, char* __temp1325v) {
  goto __temp_return;
  __temp_return:
  *__temp1320v=buf__unsafe_ptr;
  *__temp1321v=buf__unsafe_size;
  *__temp1322v=buf__unsafe_align;
  *__temp1323v=dat__pos;
  *__temp1324v=dat__length;
  *__temp1325v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp557v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1326v, unsigned long long* __temp1327v, unsigned long long* __temp1328v, unsigned long long* __temp1329v, unsigned long long* __temp1330v, char* __temp1331v) {
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
  *__temp1326v=__temp562v__buf__unsafe_ptr;
  *__temp1327v=__temp562v__buf__unsafe_size;
  *__temp1328v=__temp562v__buf__unsafe_align;
  *__temp1329v=__temp562v__dat__pos;
  *__temp1330v=__temp562v__dat__length;
  *__temp1331v=__temp562v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp563v(const char* c, char** __temp1332v, unsigned long long* __temp1333v, unsigned long long* __temp1334v, unsigned long long* __temp1335v, unsigned long long* __temp1336v, char* __temp1337v) {
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
  *__temp1332v=__temp566v__buf__unsafe_ptr;
  *__temp1333v=__temp566v__buf__unsafe_size;
  *__temp1334v=__temp566v__buf__unsafe_align;
  *__temp1335v=__temp566v__dat__pos;
  *__temp1336v=__temp566v__dat__length;
  *__temp1337v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp567v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1338v) {
  goto __temp_return;
  __temp_return:
  *__temp1338v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1339v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1339v=z;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1340v) {
  goto __temp_return;
  __temp_return:
  *__temp1340v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1341v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1341v=z;
}

int copy__temp688v(char** __temp1342v, unsigned long long* __temp1343v, unsigned long long* __temp1344v, unsigned long long* __temp1345v, const char* _other, char** __temp1346v, unsigned long long* __temp1347v, unsigned long long* __temp1348v, unsigned long long* __temp1349v, unsigned long long* __temp1350v, char* __temp1351v) {
  char* buf__unsafe_ptr=*__temp1342v;
  unsigned long long buf__unsafe_size=*__temp1343v;
  unsigned long long buf__unsafe_align=*__temp1344v;
  unsigned long long pos=*__temp1345v;
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
  *__temp1342v=buf__unsafe_ptr;
  *__temp1343v=buf__unsafe_size;
  *__temp1344v=buf__unsafe_align;
  *__temp1345v=pos;
  *__temp1346v=__temp696v__buf__unsafe_ptr;
  *__temp1347v=__temp696v__buf__unsafe_size;
  *__temp1348v=__temp696v__buf__unsafe_align;
  *__temp1349v=__temp696v__dat__pos;
  *__temp1350v=__temp696v__dat__length;
  *__temp1351v=__temp696v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1228v(unsigned long long id, char* name__buf__unsafe_ptr, unsigned long long name__buf__unsafe_size, unsigned long long name__buf__unsafe_align, unsigned long long name__dat__pos, unsigned long long name__dat__length, char name__dat__first, char* surname__buf__unsafe_ptr, unsigned long long surname__buf__unsafe_size, unsigned long long surname__buf__unsafe_align, unsigned long long surname__dat__pos, unsigned long long surname__dat__length, char surname__dat__first, char** __temp1352v, unsigned long long* __temp1353v, unsigned long long* __temp1354v, unsigned long long* __temp1355v, unsigned long long* __temp1356v, char* __temp1357v, char** __temp1358v, unsigned long long* __temp1359v, unsigned long long* __temp1360v, unsigned long long* __temp1361v, unsigned long long* __temp1362v, char* __temp1363v) {
  goto __temp_return;
  __temp_return:
  *__temp1352v=name__buf__unsafe_ptr;
  *__temp1353v=name__buf__unsafe_size;
  *__temp1354v=name__buf__unsafe_align;
  *__temp1355v=name__dat__pos;
  *__temp1356v=name__dat__length;
  *__temp1357v=name__dat__first;
  *__temp1358v=surname__buf__unsafe_ptr;
  *__temp1359v=surname__buf__unsafe_size;
  *__temp1360v=surname__buf__unsafe_align;
  *__temp1361v=surname__dat__pos;
  *__temp1362v=surname__dat__length;
  *__temp1363v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value, const char* endl) {
  int __temp349v=0;
  printf("%s%s",value,endl);
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

static inline __attribute__((always_inline)) int print__temp1230v(char* p__name__buf__unsafe_ptr, unsigned long long p__name__buf__unsafe_size, unsigned long long p__name__buf__unsafe_align, unsigned long long p__name__dat__pos, unsigned long long p__name__dat__length, char p__name__dat__first, char* p__surname__buf__unsafe_ptr, unsigned long long p__surname__buf__unsafe_size, unsigned long long p__surname__buf__unsafe_align, unsigned long long p__surname__dat__pos, unsigned long long p__surname__dat__length, char p__surname__dat__first) {
  int __temp_errcode=0;
  int __temp_complain=0;
  print__temp350v(__temp1231v);
  print__temp348v(__temp1233v,__temp604v);
  __temp_errcode=print__temp723v(p__name__buf__unsafe_ptr,p__name__buf__unsafe_size,p__name__buf__unsafe_align,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp348v(__temp1236v,__temp604v);
  __temp_errcode=print__temp723v(p__surname__buf__unsafe_ptr,p__surname__buf__unsafe_size,p__surname__buf__unsafe_align,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp350v(__temp1231v);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1240v(char** __temp1364v, unsigned long long* __temp1365v, unsigned long long* __temp1366v, unsigned long long* __temp1367v, char** __temp1368v, unsigned long long* __temp1369v, unsigned long long* __temp1370v) {
  char* __temp1243v__unsafe_ptr=0;
  unsigned long long __temp1243v__unsafe_size=0;
  unsigned long long __temp1243v__unsafe_align=0;
  char* __temp1244v__unsafe_ptr=0;
  unsigned long long __temp1244v__unsafe_size=0;
  unsigned long long __temp1244v__unsafe_align=0;
  unsigned long long __temp1245v=0;
  char* __temp1246v__unsafe_ptr=0;
  unsigned long long __temp1246v__unsafe_size=0;
  unsigned long long __temp1246v__unsafe_align=0;
  unsigned long long __temp1247v____temp438v=0;
  char __temp1247v____temp439v__=0;
  char* people__unsafe_ptr=0;
  unsigned long long people__unsafe_size=0;
  unsigned long long people__unsafe_align=0;
  unsigned long long __temp1248v=0;
  unsigned long long __temp1249v__=0;
  char* __temp1250v__unsafe_ptr=0;
  unsigned long long __temp1250v__unsafe_size=0;
  unsigned long long __temp1250v__unsafe_align=0;
  unsigned long long __temp1251v____temp516v____temp438v=0;
  char __temp1251v____temp516v____temp439v__=0;
  char* __temp1252v__buf__unsafe_ptr=0;
  unsigned long long __temp1252v__buf__unsafe_size=0;
  unsigned long long __temp1252v__buf__unsafe_align=0;
  unsigned long long __temp1252v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  unsigned long long buf__buf__unsafe_size=0;
  unsigned long long buf__buf__unsafe_align=0;
  unsigned long long buf__pos=0;
  unsigned long long __temp1253v=0;
  char* __temp1254v__=0;
  unsigned long long __temp1255v=0;
  char* __temp1257v__buf__unsafe_ptr=0;
  unsigned long long __temp1257v__buf__unsafe_size=0;
  unsigned long long __temp1257v__buf__unsafe_align=0;
  unsigned long long __temp1257v__dat__pos=0;
  unsigned long long __temp1257v__dat__length=0;
  char __temp1257v__dat__first=0;
  char* __temp1259v__buf__unsafe_ptr=0;
  unsigned long long __temp1259v__buf__unsafe_size=0;
  unsigned long long __temp1259v__buf__unsafe_align=0;
  unsigned long long __temp1259v__dat__pos=0;
  unsigned long long __temp1259v__dat__length=0;
  char __temp1259v__dat__first=0;
  char* __temp1260v__name__buf__unsafe_ptr=0;
  unsigned long long __temp1260v__name__buf__unsafe_size=0;
  unsigned long long __temp1260v__name__buf__unsafe_align=0;
  unsigned long long __temp1260v__name__dat__pos=0;
  unsigned long long __temp1260v__name__dat__length=0;
  char __temp1260v__name__dat__first=0;
  char* __temp1260v__surname__buf__unsafe_ptr=0;
  unsigned long long __temp1260v__surname__buf__unsafe_size=0;
  unsigned long long __temp1260v__surname__buf__unsafe_align=0;
  unsigned long long __temp1260v__surname__dat__pos=0;
  unsigned long long __temp1260v__surname__dat__length=0;
  char __temp1260v__surname__dat__first=0;
  unsigned long long __temp1261v=0;
  char* __temp1262v__=0;
  char* __temp1263v__name__buf__unsafe_ptr=0;
  unsigned long long __temp1263v__name__buf__unsafe_size=0;
  unsigned long long __temp1263v__name__buf__unsafe_align=0;
  unsigned long long __temp1263v__name__dat__pos=0;
  unsigned long long __temp1263v__name__dat__length=0;
  char __temp1263v__name__dat__first=0;
  char* __temp1263v__surname__buf__unsafe_ptr=0;
  unsigned long long __temp1263v__surname__buf__unsafe_size=0;
  unsigned long long __temp1263v__surname__buf__unsafe_align=0;
  unsigned long long __temp1263v__surname__dat__pos=0;
  unsigned long long __temp1263v__surname__dat__length=0;
  char __temp1263v__surname__dat__first=0;
  char* __temp1265v__unsafe_ptr=0;
  unsigned long long __temp1265v__unsafe_size=0;
  unsigned long long __temp1265v__unsafe_align=0;
  char* __temp1269v__unsafe_ptr=0;
  unsigned long long __temp1269v__unsafe_size=0;
  unsigned long long __temp1269v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  unsigned long long dat__unsafe_size=0;
  unsigned long long dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person__temp_buffer__buffer__temp1241v(&__temp1243v__unsafe_ptr,&__temp1243v__unsafe_size,&__temp1243v__unsafe_align);
  __temp1244v__unsafe_ptr=__temp1243v__unsafe_ptr;
  __temp1244v__unsafe_size=__temp1243v__unsafe_size;
  __temp1244v__unsafe_align=__temp1243v__unsafe_align;
  __temp1245v=4;
  __temp_errcode=alloc__temp434v(&__temp1244v__unsafe_ptr,&__temp1244v__unsafe_size,&__temp1244v__unsafe_align,__temp1245v,&__temp1246v__unsafe_ptr,&__temp1246v__unsafe_size,&__temp1246v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1246v__unsafe_ptr;
  people__unsafe_size=__temp1246v__unsafe_size;
  people__unsafe_align=__temp1246v__unsafe_align;
  __temp1248v=4;
  KB__temp410v(__temp1248v,&__temp1249v__);
  __temp_errcode=alloc__temp510v(__temp1249v__,&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp621v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align,&__temp1252v__buf__unsafe_ptr,&__temp1252v__buf__unsafe_size,&__temp1252v__buf__unsafe_align,&__temp1252v__pos);
  buf__buf__unsafe_ptr=__temp1252v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1252v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1252v__buf__unsafe_align;
  buf__pos=__temp1252v__pos;
  __temp1253v=0;
  __temp_errcode=mutget__temp501v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1253v,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=0;
  __temp_errcode=copy__temp688v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1256v,&__temp1257v__buf__unsafe_ptr,&__temp1257v__buf__unsafe_size,&__temp1257v__buf__unsafe_align,&__temp1257v__dat__pos,&__temp1257v__dat__length,&__temp1257v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp688v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1258v,&__temp1259v__buf__unsafe_ptr,&__temp1259v__buf__unsafe_size,&__temp1259v__buf__unsafe_align,&__temp1259v__dat__pos,&__temp1259v__dat__length,&__temp1259v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1228v(__temp1255v,__temp1257v__buf__unsafe_ptr,__temp1257v__buf__unsafe_size,__temp1257v__buf__unsafe_align,__temp1257v__dat__pos,__temp1257v__dat__length,__temp1257v__dat__first,__temp1259v__buf__unsafe_ptr,__temp1259v__buf__unsafe_size,__temp1259v__buf__unsafe_align,__temp1259v__dat__pos,__temp1259v__dat__length,__temp1259v__dat__first,&__temp1260v__name__buf__unsafe_ptr,&__temp1260v__name__buf__unsafe_size,&__temp1260v__name__buf__unsafe_align,&__temp1260v__name__dat__pos,&__temp1260v__name__dat__length,&__temp1260v__name__dat__first,&__temp1260v__surname__buf__unsafe_ptr,&__temp1260v__surname__buf__unsafe_size,&__temp1260v__surname__buf__unsafe_align,&__temp1260v__surname__dat__pos,&__temp1260v__surname__dat__length,&__temp1260v__surname__dat__first);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__,&__temp1260v__name__buf__unsafe_ptr,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+8,&__temp1260v__name__buf__unsafe_size,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+16,&__temp1260v__name__buf__unsafe_align,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+24,&__temp1260v__name__dat__pos,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+32,&__temp1260v__name__dat__length,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+40,&__temp1260v__name__dat__first,1);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+41,&__temp1260v__surname__buf__unsafe_ptr,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+49,&__temp1260v__surname__buf__unsafe_size,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+57,&__temp1260v__surname__buf__unsafe_align,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+65,&__temp1260v__surname__dat__pos,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+73,&__temp1260v__surname__dat__length,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+81,&__temp1260v__surname__dat__first,1);
  __temp1261v=0;
  __temp_errcode=get__temp505v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__name__buf__unsafe_ptr,__temp1262v__,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__name__buf__unsafe_size,__temp1262v__+8,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__name__buf__unsafe_align,__temp1262v__+16,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__name__dat__pos,__temp1262v__+24,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__name__dat__length,__temp1262v__+32,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__name__dat__first,__temp1262v__+40,1);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__surname__buf__unsafe_ptr,__temp1262v__+41,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__surname__buf__unsafe_size,__temp1262v__+49,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__surname__buf__unsafe_align,__temp1262v__+57,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__surname__dat__pos,__temp1262v__+65,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__surname__dat__length,__temp1262v__+73,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__surname__dat__first,__temp1262v__+81,1);
  __temp_errcode=print__temp1230v(__temp1263v__name__buf__unsafe_ptr,__temp1263v__name__buf__unsafe_size,__temp1263v__name__buf__unsafe_align,__temp1263v__name__dat__pos,__temp1263v__name__dat__length,__temp1263v__name__dat__first,__temp1263v__surname__buf__unsafe_ptr,__temp1263v__surname__buf__unsafe_size,__temp1263v__surname__buf__unsafe_align,__temp1263v__surname__dat__pos,__temp1263v__surname__dat__length,__temp1263v__surname__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1265v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1265v__unsafe_size=people__unsafe_size;
  __temp1265v__unsafe_align=people__unsafe_align;
  __temp1269v__unsafe_ptr=__temp1265v__unsafe_ptr+24;
  __temp1269v__unsafe_size=__temp1265v__unsafe_size;
  __temp1269v__unsafe_align=__temp1265v__unsafe_align;
  dat__unsafe_ptr=__temp1269v__unsafe_ptr;
  dat__unsafe_size=__temp1269v__unsafe_size;
  dat__unsafe_align=__temp1269v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1364v=buf__buf__unsafe_ptr;
  *__temp1365v=buf__buf__unsafe_size;
  *__temp1366v=buf__buf__unsafe_align;
  *__temp1367v=buf__pos;
  *__temp1368v=dat__unsafe_ptr;
  *__temp1369v=dat__unsafe_size;
  *__temp1370v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1273v() {
  char* __temp1274v__buf__buf__unsafe_ptr=0;
  unsigned long long __temp1274v__buf__buf__unsafe_size=0;
  unsigned long long __temp1274v__buf__buf__unsafe_align=0;
  unsigned long long __temp1274v__buf__pos=0;
  char* __temp1274v__dat__unsafe_ptr=0;
  unsigned long long __temp1274v__dat__unsafe_size=0;
  unsigned long long __temp1274v__dat__unsafe_align=0;
  unsigned long long __temp1275v____temp1247v____temp438v=0;
  char __temp1275v____temp1247v____temp439v__=0;
  unsigned long long __temp1275v____temp1251v____temp516v____temp438v=0;
  char __temp1275v____temp1251v____temp516v____temp439v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  unsigned long long t__buf__buf__unsafe_size=0;
  unsigned long long t__buf__buf__unsafe_align=0;
  unsigned long long t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  unsigned long long t__dat__unsafe_size=0;
  unsigned long long t__dat__unsafe_align=0;
  unsigned long long __temp1276v=0;
  char* __temp1277v__=0;
  unsigned long long __temp1278v__pos=0;
  unsigned long long __temp1278v__length=0;
  char __temp1278v__first=0;
  char* __temp1279v__buf__unsafe_ptr=0;
  unsigned long long __temp1279v__buf__unsafe_size=0;
  unsigned long long __temp1279v__buf__unsafe_align=0;
  unsigned long long __temp1279v__dat__pos=0;
  unsigned long long __temp1279v__dat__length=0;
  char __temp1279v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1240v(&__temp1274v__buf__buf__unsafe_ptr,&__temp1274v__buf__buf__unsafe_size,&__temp1274v__buf__buf__unsafe_align,&__temp1274v__buf__pos,&__temp1274v__dat__unsafe_ptr,&__temp1274v__dat__unsafe_size,&__temp1274v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1274v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1274v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1274v__buf__buf__unsafe_align;
  t__buf__pos=__temp1274v__buf__pos;
  t__dat__unsafe_ptr=__temp1274v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1274v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1274v__dat__unsafe_align;
  __temp1276v=0;
  __temp_errcode=get__temp505v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1276v,&__temp1277v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1277v__){
  goto __temp_failure;
  }
  memcpy(&__temp1278v__pos,__temp1277v__,8);
  if(!__temp1277v__){
  goto __temp_failure;
  }
  memcpy(&__temp1278v__length,__temp1277v__+8,8);
  if(!__temp1277v__){
  goto __temp_failure;
  }
  memcpy(&__temp1278v__first,__temp1277v__+16,1);
  str__temp547v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1278v__pos,__temp1278v__length,__temp1278v__first,&__temp1279v__buf__unsafe_ptr,&__temp1279v__buf__unsafe_size,&__temp1279v__buf__unsafe_align,&__temp1279v__dat__pos,&__temp1279v__dat__length,&__temp1279v__dat__first);
  __temp_errcode=print__temp723v(__temp1279v__buf__unsafe_ptr,__temp1279v__buf__unsafe_size,__temp1279v__buf__unsafe_align,__temp1279v__dat__pos,__temp1279v__dat__length,__temp1279v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1273v();return 0;}