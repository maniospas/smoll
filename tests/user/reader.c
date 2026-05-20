#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1280v="!\n";
const char* const __temp994v=" ";
const char* const __temp1287v="invalid number";
const char* const __temp1289v="this is its square";
const char* const __temp1278v="hello";
const char* const __temp365v="\n";
const char* const __temp1275v="what's your name";
const char* const __temp1283v="Please give a number:";
static const char* __temp_all_errcodes[34] = {"noerr",
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
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void console__temp990v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1268v(char** __temp1293v, uint64_t* __temp1294v, uint16_t* __temp1295v, uint16_t* __temp1296v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1293v=unsafe_ptr;
  *__temp1294v=unsafe_size;
  *__temp1295v=unsafe_offset;
  *__temp1296v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1297v) {
  int value=0;
  *__temp1297v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1298v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1299v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1299v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1300v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1301v) {
  char* allocated=*__temp1301v;
  if(allocated){
  free(allocated);
  }
  *__temp1301v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1302v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1303v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1303v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1304v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1305v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1306v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1307v) {
  char* allocated=0;
  char __temp460v__=0;
  char __temp461v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  exists__temp412v(allocated,&__temp460v__);
  not__temp26v(__temp460v__,&__temp461v__);
  if(__temp461v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1307v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1308v, uint64_t* __temp1309v, uint16_t* __temp1310v, uint16_t* __temp1311v, uint64_t size, char** __temp1312v, uint64_t* __temp1313v, uint16_t* __temp1314v, uint16_t* __temp1315v) {
  char* buffer__unsafe_ptr=*__temp1308v;
  uint64_t buffer__unsafe_size=*__temp1309v;
  uint16_t buffer__unsafe_offset=*__temp1310v;
  uint16_t buffer__unsafe_align=*__temp1311v;
  int __temp474v=0;
  uint64_t __temp475v=0;
  char __temp476v__=0;
  uint64_t __temp477v=0;
  char* ptr=0;
  char __temp479v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v=0;
  uint64_t __temp483v__=0;
  uint64_t __temp484v__=0;
  char* __temp486v__unsafe_ptr=0;
  uint64_t __temp486v__unsafe_size=0;
  uint16_t __temp486v__unsafe_offset=0;
  uint16_t __temp486v__unsafe_align=0;
  uint64_t __temp487v=0;
  char __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t __temp490v__=0;
  uint64_t bytes=0;
  char* __temp491v__=0;
  uint64_t __temp492v=0;
  char* __temp494v__unsafe_ptr=0;
  uint64_t __temp494v__unsafe_size=0;
  uint16_t __temp494v__unsafe_offset=0;
  uint16_t __temp494v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp479v__);
  if(__temp479v__){
  __temp480v=0;
  neq__temp142v(size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp482v=0;
  nat__temp470v(buffer__unsafe_align,&__temp483v__);
  mul__temp194v(__temp483v__,size,&__temp484v__);
  zero__temp467v(buffer__unsafe_ptr,__temp482v,__temp484v__);
  }
  __temp486v__unsafe_ptr=buffer__unsafe_ptr;
  __temp486v__unsafe_size=buffer__unsafe_size;
  __temp486v__unsafe_offset=buffer__unsafe_offset;
  __temp486v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp487v=0;
  neq__temp142v(buffer__unsafe_size,__temp487v,&__temp488v__);
  if(__temp488v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp489v__);
  mul__temp194v(__temp489v__,size,&__temp490v__);
  bytes=__temp490v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp491v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp491v__;
  __temp492v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp492v,bytes);
  __temp494v__unsafe_ptr=buffer__unsafe_ptr;
  __temp494v__unsafe_size=buffer__unsafe_size;
  __temp494v__unsafe_offset=buffer__unsafe_offset;
  __temp494v__unsafe_align=buffer__unsafe_align;
  __temp486v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp486v__unsafe_size=__temp494v__unsafe_size;
  __temp486v__unsafe_offset=__temp494v__unsafe_offset;
  __temp486v__unsafe_align=__temp494v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp475v=0;
  neq__temp142v(__temp486v__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp486v__unsafe_size=0;
  __temp486v__unsafe_size=__temp486v__unsafe_size;
  __temp486v__unsafe_ptr=__temp486v__unsafe_ptr;
  free__temp466v(&__temp486v__unsafe_ptr);
  }
  __temp_return:
  *__temp1308v=buffer__unsafe_ptr;
  *__temp1309v=buffer__unsafe_size;
  *__temp1310v=buffer__unsafe_offset;
  *__temp1311v=buffer__unsafe_align;
  *__temp1312v=__temp486v__unsafe_ptr;
  *__temp1313v=__temp486v__unsafe_size;
  *__temp1314v=__temp486v__unsafe_offset;
  *__temp1315v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp675v(char** __temp1316v, uint64_t* __temp1317v, uint16_t* __temp1318v, uint16_t* __temp1319v, char** __temp1320v, uint64_t* __temp1321v, uint16_t* __temp1322v, uint16_t* __temp1323v, uint64_t* __temp1324v) {
  char* buf__unsafe_ptr=*__temp1316v;
  uint64_t buf__unsafe_size=*__temp1317v;
  uint16_t buf__unsafe_offset=*__temp1318v;
  uint16_t buf__unsafe_align=*__temp1319v;
  uint64_t __temp676v=0;
  uint64_t __temp677v=0;
  uint64_t pos=0;
  __temp676v=0;
  __temp677v=__temp676v;
  pos=__temp677v;
  goto __temp_return;
  __temp_return:
  *__temp1316v=buf__unsafe_ptr;
  *__temp1317v=buf__unsafe_size;
  *__temp1318v=buf__unsafe_offset;
  *__temp1319v=buf__unsafe_align;
  *__temp1320v=buf__unsafe_ptr;
  *__temp1321v=buf__unsafe_size;
  *__temp1322v=buf__unsafe_offset;
  *__temp1323v=buf__unsafe_align;
  *__temp1324v=pos;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1325v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1325v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1326v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1326v=z;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1327v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1327v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1328v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1328v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1329v) {
  *__temp1329v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1330v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1330v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1331v) {
  char __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  uint64_t __temp557v__=0;
  char* __temp558v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp553v__);
  if(__temp553v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp554v__);
  mul__temp194v(i,__temp554v__,&__temp555v__);
  nat__temp470v(buffer__unsafe_offset,&__temp556v__);
  add__temp170v(__temp555v__,__temp556v__,&__temp557v__);
  add__temp468v(buffer__unsafe_ptr,__temp557v__,&__temp558v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1331v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1332v, uint64_t* __temp1333v, uint64_t* __temp1334v, char* __temp1335v) {
  goto __temp_return;
  __temp_return:
  *__temp1332v=unsafe_ptr;
  *__temp1333v=dat__pos;
  *__temp1334v=dat__length;
  *__temp1335v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1336v, uint64_t* __temp1337v, uint64_t* __temp1338v, char* __temp1339v) {
  char* unsafe_ptr=0;
  uint64_t __temp594v__=0;
  uint64_t __temp595v=0;
  char __temp596v__=0;
  uint64_t __temp597v__=0;
  uint64_t __temp598v=0;
  char __temp599v__=0;
  char* __temp600v__unsafe_ptr=0;
  uint64_t __temp600v__dat__pos=0;
  uint64_t __temp600v__dat__length=0;
  char __temp600v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp594v__);
  __temp595v=1;
  neq__temp142v(__temp594v__,__temp595v,&__temp596v__);
  if(__temp596v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp597v__);
  __temp598v=0;
  neq__temp142v(__temp597v__,__temp598v,&__temp599v__);
  if(__temp599v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp587v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp600v__unsafe_ptr,&__temp600v__dat__pos,&__temp600v__dat__length,&__temp600v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1336v=__temp600v__unsafe_ptr;
  *__temp1337v=__temp600v__dat__pos;
  *__temp1338v=__temp600v__dat__length;
  *__temp1339v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1340v, uint64_t* __temp1341v, uint64_t* __temp1342v, char* __temp1343v) {
  uint64_t __temp626v=0;
  char __temp627v__=0;
  char* __temp628v__=0;
  char __temp629v__value=0;
  char first=0;
  char* __temp630v__unsafe_ptr=0;
  uint64_t __temp630v__dat__pos=0;
  uint64_t __temp630v__dat__length=0;
  char __temp630v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp626v=0;
  neq__temp142v(length,__temp626v,&__temp627v__);
  if(__temp627v__){
  __temp_errcode=get__temp552v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp628v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp628v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp629v__value,__temp628v__,1);
  first=__temp629v__value;
  }
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp630v__unsafe_ptr,&__temp630v__dat__pos,&__temp630v__dat__length,&__temp630v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1340v=__temp630v__unsafe_ptr;
  *__temp1341v=__temp630v__dat__pos;
  *__temp1342v=__temp630v__dat__length;
  *__temp1343v=__temp630v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1005v(char** __temp1344v, uint64_t* __temp1345v, uint16_t* __temp1346v, uint16_t* __temp1347v, uint64_t* __temp1348v, char** __temp1349v, uint64_t* __temp1350v, uint64_t* __temp1351v, char* __temp1352v) {
  char* buf__unsafe_ptr=*__temp1344v;
  uint64_t buf__unsafe_size=*__temp1345v;
  uint16_t buf__unsafe_offset=*__temp1346v;
  uint16_t buf__unsafe_align=*__temp1347v;
  uint64_t pos=*__temp1348v;
  uint64_t __temp1006v__=0;
  uint64_t __temp1007v=0;
  char __temp1008v__=0;
  uint64_t __temp1009v__=0;
  uint64_t __temp1010v=0;
  char __temp1011v__=0;
  uint64_t start=0;
  char __temp1012v=0;
  int64_t _c=0;
  char __temp1013v__=0;
  uint64_t __temp1014v=0;
  uint64_t __temp1015v__=0;
  uint64_t __temp1016v__=0;
  char* __temp1017v__unsafe_ptr=0;
  uint64_t __temp1017v__dat__pos=0;
  uint64_t __temp1017v__dat__length=0;
  char __temp1017v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp470v(buf__unsafe_align,&__temp1006v__);
  __temp1007v=1;
  neq__temp142v(__temp1006v__,__temp1007v,&__temp1008v__);
  if(__temp1008v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp1009v__);
  __temp1010v=0;
  neq__temp142v(__temp1009v__,__temp1010v,&__temp1011v__);
  if(__temp1011v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  start=pos;
  while(1){
  __temp1012v=1;
  if(!__temp1012v){
  break;
  }
  _c=getchar();
  if(_c=='\n'||_c=='\r'||_c==EOF){
  break;
  }
  ge__temp319v(pos,buf__unsafe_size,&__temp1013v__);
  if(__temp1013v__){
  __temp_errcode=23;
  goto __temp_failure;
  }
  buf__unsafe_ptr[pos]=_c;
  __temp1014v=1;
  add__temp170v(pos,__temp1014v,&__temp1015v__);
  pos=__temp1015v__;
  }
  __temp_errcode=sub__temp347v(pos,start,&__temp1016v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp625v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,start,__temp1016v__,&__temp1017v__unsafe_ptr,&__temp1017v__dat__pos,&__temp1017v__dat__length,&__temp1017v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1344v=buf__unsafe_ptr;
  *__temp1345v=buf__unsafe_size;
  *__temp1346v=buf__unsafe_offset;
  *__temp1347v=buf__unsafe_align;
  *__temp1348v=pos;
  *__temp1349v=__temp1017v__unsafe_ptr;
  *__temp1350v=__temp1017v__dat__pos;
  *__temp1351v=__temp1017v__dat__length;
  *__temp1352v=__temp1017v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp739v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __temp740v=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void char__temp641v(const char* s, char* __temp1353v) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __temp_return;
  __temp_return:
  *__temp1353v=c;
}

static inline __attribute__((always_inline)) int float__temp1000v(double* __temp1354v) {
  char __temp1001v__=0;
  char SPACE=0;
  int64_t _c=0;
  char _neg=0;
  double number=0;
  char _has=0;
  double _base=0;
  char success=0;
  char __temp1002v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp641v(__temp994v,&__temp1001v__);
  SPACE=__temp1001v__;
  _c;
  while((_c=getchar())==SPACE||_c=='\t');
  _neg=(_c=='-');
  if(_neg||_c=='+')_c=getchar();
  number=0.0;
  _has=0;
  while(_c>='0'&&_c<='9'){
  number=number*10.0+(_c-'0');
  _has=1;
  _c=getchar();
  }
  if(_c=='.'){
  _c=getchar();
  _base=0.1;
  while(_c>='0'&&_c<='9'){
  number+=(_c-'0')*_base;
  _base*=0.1;
  _has=1;
  _c=getchar();
  }
  }
  if(_neg)number=-number;
  success=_has&&(_c=='\n'||_c=='\r'||_c==EOF);
  not__temp26v(success,&__temp1002v__);
  if(__temp1002v__){
  while(_c!='\n'&&_c!='\r'&&_c!=EOF)_c=getchar();
  __temp_errcode=22;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1354v=number;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1355v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1355v=__temp71v__;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1356v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1356v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1266v() {
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__unsafe_size=0;
  uint16_t __temp1270v__unsafe_offset=0;
  uint16_t __temp1270v__unsafe_align=0;
  uint64_t __temp1271v=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint16_t __temp1272v__unsafe_offset=0;
  uint16_t __temp1272v__unsafe_align=0;
  uint64_t __temp1273v____temp475v=0;
  char __temp1273v____temp476v__=0;
  char* __temp1274v__buf__unsafe_ptr=0;
  uint64_t __temp1274v__buf__unsafe_size=0;
  uint16_t __temp1274v__buf__unsafe_offset=0;
  uint16_t __temp1274v__buf__unsafe_align=0;
  uint64_t __temp1274v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  char* __temp1277v__unsafe_ptr=0;
  uint64_t __temp1277v__dat__pos=0;
  uint64_t __temp1277v__dat__length=0;
  char __temp1277v__dat__first=0;
  char* name__unsafe_ptr=0;
  uint64_t name__dat__pos=0;
  uint64_t name__dat__length=0;
  char name__dat__first=0;
  char __temp1282v=0;
  double __temp1285v__=0;
  double x=0;
  char __temp1286v__=0;
  double __temp1291v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  console__temp990v();
  char____temp_buffer____buffer__temp1268v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_offset,&__temp1270v__unsafe_align);
  __temp1271v=1024;
  __temp_errcode=alloc__temp473v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_offset,&__temp1270v__unsafe_align,__temp1271v,&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp675v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align,&__temp1274v__buf__unsafe_ptr,&__temp1274v__buf__unsafe_size,&__temp1274v__buf__unsafe_offset,&__temp1274v__buf__unsafe_align,&__temp1274v__pos);
  mem__buf__unsafe_ptr=__temp1274v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1274v__buf__unsafe_size;
  mem__buf__unsafe_offset=__temp1274v__buf__unsafe_offset;
  mem__buf__unsafe_align=__temp1274v__buf__unsafe_align;
  mem__pos=__temp1274v__pos;
  print__temp363v(__temp1275v);
  __temp_errcode=str__temp1005v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_offset,&mem__buf__unsafe_align,&mem__pos,&__temp1277v__unsafe_ptr,&__temp1277v__dat__pos,&__temp1277v__dat__length,&__temp1277v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  name__unsafe_ptr=__temp1277v__unsafe_ptr;
  name__dat__pos=__temp1277v__dat__pos;
  name__dat__length=__temp1277v__dat__length;
  name__dat__first=__temp1277v__dat__first;
  print__temp361v(__temp1278v,__temp994v);
  print__temp739v(name__unsafe_ptr,name__dat__pos,name__dat__length,name__dat__first,__temp1280v);
  while(1){
  print__temp363v(__temp1283v);
  __temp_complain=float__temp1000v(&__temp1285v__);
  __temp1282v=__temp_complain;
  x=__temp1285v__;
  __temp1282v=__temp1282v==0;
  not__temp26v(__temp1282v,&__temp1286v__);
  if(!__temp1286v__){
  break;
  }
  print__temp363v(__temp1287v);
  }
  print__temp363v(__temp1289v);
  mul__temp172v(x,x,&__temp1291v__);
  print__temp368v(__temp1291v__);
  
  __temp_failure:__temp1273v____temp475v=0;
  neq__temp142v(__temp1272v__unsafe_size,__temp1273v____temp475v,&__temp1273v____temp476v__);
  if(__temp1273v____temp476v__){
  __temp1272v__unsafe_size=0;
  __temp1272v__unsafe_size=__temp1272v__unsafe_size;
  __temp1272v__unsafe_ptr=__temp1272v__unsafe_ptr;
  free__temp466v(&__temp1272v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1266v();return 0;}