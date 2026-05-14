#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1225v="name      ";
const char* const __temp1228v="surnname  ";
const char* const __temp795v="";
const char* const __temp363v="\n";
const char* const __temp1223v="-------------------";
const char* const __temp1250v="mario";
const char* const __temp1248v="it's a me";
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

static inline __attribute__((always_inline)) void Person__temp_buffer__buffer__temp1233v(char** __temp1273v, uint64_t* __temp1274v, uint64_t* __temp1275v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=50;
  *__temp1273v=unsafe_ptr;
  *__temp1274v=unsafe_size;
  *__temp1275v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1276v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1277v) {
  char* allocated=*__temp1277v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1277v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1278v) {
  int value=0;
  *__temp1278v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1279v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1280v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1280v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1281v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1282v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1283v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1284v) {
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
  *__temp1284v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v, uint64_t size, char** __temp1288v, uint64_t* __temp1289v, uint64_t* __temp1290v) {
  char* buffer__unsafe_ptr=*__temp1285v;
  uint64_t buffer__unsafe_size=*__temp1286v;
  uint64_t buffer__unsafe_align=*__temp1287v;
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
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_align;
  *__temp1288v=buffer__unsafe_ptr;
  *__temp1289v=buffer__unsafe_size;
  *__temp1290v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1291v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1291v=__temp445v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1292v, uint64_t* __temp1293v, uint64_t* __temp1294v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1292v=unsafe_ptr;
  *__temp1293v=unsafe_size;
  *__temp1294v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1295v, uint64_t* __temp1296v, uint64_t* __temp1297v) {
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char* __temp543v__unsafe_ptr=0;
  uint64_t __temp543v__unsafe_size=0;
  uint64_t __temp543v__unsafe_align=0;
  char __temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  __temp542v__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp542v__unsafe_size=__temp541v__unsafe_size;
  __temp542v__unsafe_align=__temp541v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align,size,&__temp543v__unsafe_ptr,&__temp543v__unsafe_size,&__temp543v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp543v__unsafe_ptr,&__temp544v____temp469v__);
  if(__temp544v____temp469v__){
  __temp543v__unsafe_size=0;
  __temp543v__unsafe_size=__temp543v__unsafe_size;
  free__temp461v(&__temp543v__unsafe_ptr);
  }
  __temp_return:
  *__temp1295v=__temp543v__unsafe_ptr;
  *__temp1296v=__temp543v__unsafe_size;
  *__temp1297v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp652v(char** __temp1298v, uint64_t* __temp1299v, uint64_t* __temp1300v, char** __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v, uint64_t* __temp1304v) {
  char* buf__unsafe_ptr=*__temp1298v;
  uint64_t buf__unsafe_size=*__temp1299v;
  uint64_t buf__unsafe_align=*__temp1300v;
  uint64_t __temp653v=0;
  uint64_t __temp654v=0;
  uint64_t pos=0;
  __temp653v=0;
  __temp654v=__temp653v;
  pos=__temp654v;
  goto __temp_return;
  __temp_return:
  *__temp1298v=buf__unsafe_ptr;
  *__temp1299v=buf__unsafe_size;
  *__temp1300v=buf__unsafe_align;
  *__temp1301v=buf__unsafe_ptr;
  *__temp1302v=buf__unsafe_size;
  *__temp1303v=buf__unsafe_align;
  *__temp1304v=pos;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1305v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1306v) {
  *__temp1306v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1307v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1307v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1308v, uint64_t* __temp1309v, uint64_t* __temp1310v, uint64_t i, char** __temp1311v) {
  char* buffer__unsafe_ptr=*__temp1308v;
  uint64_t buffer__unsafe_size=*__temp1309v;
  uint64_t buffer__unsafe_align=*__temp1310v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1308v=buffer__unsafe_ptr;
  *__temp1309v=buffer__unsafe_size;
  *__temp1310v=buffer__unsafe_align;
  *__temp1311v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1312v) {
  *__temp1312v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1313v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1314v) {
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
  *__temp1314v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1315v, uint64_t* __temp1316v, uint64_t* __temp1317v, char* __temp1318v) {
  goto __temp_return;
  __temp_return:
  *__temp1315v=unsafe_ptr;
  *__temp1316v=dat__pos;
  *__temp1317v=dat__length;
  *__temp1318v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1319v, uint64_t* __temp1320v, uint64_t* __temp1321v, char* __temp1322v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1319v=__temp580v__unsafe_ptr;
  *__temp1320v=__temp580v__dat__pos;
  *__temp1321v=__temp580v__dat__length;
  *__temp1322v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1323v, uint64_t* __temp1324v, uint64_t* __temp1325v, char* __temp1326v) {
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
  *__temp1323v=__temp610v__unsafe_ptr;
  *__temp1324v=__temp610v__dat__pos;
  *__temp1325v=__temp610v__dat__length;
  *__temp1326v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1327v, uint64_t* __temp1328v, uint64_t* __temp1329v, char* __temp1330v) {
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
  *__temp1327v=__temp618v__unsafe_ptr;
  *__temp1328v=__temp618v__dat__pos;
  *__temp1329v=__temp618v__dat__length;
  *__temp1330v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp619v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1331v) {
  goto __temp_return;
  __temp_return:
  *__temp1331v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1332v) {
  goto __temp_return;
  __temp_return:
  *__temp1332v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1333v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1333v=z;
}

int copy__temp683v(char** __temp1334v, uint64_t* __temp1335v, uint64_t* __temp1336v, uint64_t* __temp1337v, const char* _other, char** __temp1338v, uint64_t* __temp1339v, uint64_t* __temp1340v, char* __temp1341v) {
  char* buf__unsafe_ptr=*__temp1334v;
  uint64_t buf__unsafe_size=*__temp1335v;
  uint64_t buf__unsafe_align=*__temp1336v;
  uint64_t pos=*__temp1337v;
  char* __temp684v__unsafe_ptr=0;
  uint64_t __temp684v__dat__pos=0;
  uint64_t __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp685v__=0;
  uint64_t __temp686v__=0;
  uint64_t next_pos=0;
  uint64_t __temp687v__=0;
  char __temp688v__=0;
  uint64_t __temp689v=0;
  uint64_t __temp690v__=0;
  uint64_t prev_pos=0;
  char* __temp691v__unsafe_ptr=0;
  uint64_t __temp691v__dat__pos=0;
  uint64_t __temp691v__dat__length=0;
  char __temp691v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(_other,&__temp684v__unsafe_ptr,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp684v__unsafe_ptr;
  other__dat__pos=__temp684v__dat__pos;
  other__dat__length=__temp684v__dat__length;
  other__dat__first=__temp684v__dat__first;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp685v__);
  add__temp170v(pos,__temp685v__,&__temp686v__);
  next_pos=__temp686v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp687v__);
  gt__temp271v(next_pos,__temp687v__,&__temp688v__);
  if(__temp688v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp689v=0;
  add__temp170v(pos,__temp689v,&__temp690v__);
  prev_pos=__temp690v__;
  pos=next_pos;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp691v__unsafe_ptr,&__temp691v__dat__pos,&__temp691v__dat__length,&__temp691v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1334v=buf__unsafe_ptr;
  *__temp1335v=buf__unsafe_size;
  *__temp1336v=buf__unsafe_align;
  *__temp1337v=pos;
  *__temp1338v=__temp691v__unsafe_ptr;
  *__temp1339v=__temp691v__dat__pos;
  *__temp1340v=__temp691v__dat__length;
  *__temp1341v=__temp691v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1220v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1342v, uint64_t* __temp1343v, uint64_t* __temp1344v, char* __temp1345v, char** __temp1346v, uint64_t* __temp1347v, uint64_t* __temp1348v, char* __temp1349v) {
  goto __temp_return;
  __temp_return:
  *__temp1342v=name__unsafe_ptr;
  *__temp1343v=name__dat__pos;
  *__temp1344v=name__dat__length;
  *__temp1345v=name__dat__first;
  *__temp1346v=surname__unsafe_ptr;
  *__temp1347v=surname__dat__pos;
  *__temp1348v=surname__dat__length;
  *__temp1349v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp364v(const char* value, const char* endl) {
  int __temp365v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1222v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp361v(__temp1223v);
  print__temp364v(__temp1225v,__temp795v);
  print__temp714v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp364v(__temp1228v,__temp795v);
  print__temp714v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp361v(__temp1223v);
}

static inline __attribute__((always_inline)) int test__temp1232v(char** __temp1350v, uint64_t* __temp1351v, uint64_t* __temp1352v, uint64_t* __temp1353v, char** __temp1354v, uint64_t* __temp1355v, uint64_t* __temp1356v) {
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__unsafe_size=0;
  uint64_t __temp1235v__unsafe_align=0;
  char* __temp1236v__unsafe_ptr=0;
  uint64_t __temp1236v__unsafe_size=0;
  uint64_t __temp1236v__unsafe_align=0;
  uint64_t __temp1237v=0;
  char* __temp1238v__unsafe_ptr=0;
  uint64_t __temp1238v__unsafe_size=0;
  uint64_t __temp1238v__unsafe_align=0;
  char __temp1239v____temp469v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint64_t people__unsafe_align=0;
  uint64_t __temp1240v=0;
  uint64_t __temp1241v__=0;
  char* __temp1242v__unsafe_ptr=0;
  uint64_t __temp1242v__unsafe_size=0;
  uint64_t __temp1242v__unsafe_align=0;
  char __temp1243v____temp544v____temp469v__=0;
  char* __temp1244v__buf__unsafe_ptr=0;
  uint64_t __temp1244v__buf__unsafe_size=0;
  uint64_t __temp1244v__buf__unsafe_align=0;
  uint64_t __temp1244v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1245v=0;
  char* __temp1246v__=0;
  uint64_t __temp1247v=0;
  char* __temp1249v__unsafe_ptr=0;
  uint64_t __temp1249v__dat__pos=0;
  uint64_t __temp1249v__dat__length=0;
  char __temp1249v__dat__first=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__dat__pos=0;
  uint64_t __temp1251v__dat__length=0;
  char __temp1251v__dat__first=0;
  char* __temp1252v__name__unsafe_ptr=0;
  uint64_t __temp1252v__name__dat__pos=0;
  uint64_t __temp1252v__name__dat__length=0;
  char __temp1252v__name__dat__first=0;
  char* __temp1252v__surname__unsafe_ptr=0;
  uint64_t __temp1252v__surname__dat__pos=0;
  uint64_t __temp1252v__surname__dat__length=0;
  char __temp1252v__surname__dat__first=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__=0;
  char* __temp1255v__name__unsafe_ptr=0;
  uint64_t __temp1255v__name__dat__pos=0;
  uint64_t __temp1255v__name__dat__length=0;
  char __temp1255v__name__dat__first=0;
  char* __temp1255v__surname__unsafe_ptr=0;
  uint64_t __temp1255v__surname__dat__pos=0;
  uint64_t __temp1255v__surname__dat__length=0;
  char __temp1255v__surname__dat__first=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__unsafe_size=0;
  uint64_t __temp1257v__unsafe_align=0;
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__unsafe_size=0;
  uint64_t __temp1261v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint64_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person__temp_buffer__buffer__temp1233v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align);
  __temp1236v__unsafe_ptr=__temp1235v__unsafe_ptr;
  __temp1236v__unsafe_size=__temp1235v__unsafe_size;
  __temp1236v__unsafe_align=__temp1235v__unsafe_align;
  __temp1237v=4;
  __temp_errcode=alloc__temp467v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align,__temp1237v,&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1238v__unsafe_ptr;
  people__unsafe_size=__temp1238v__unsafe_size;
  people__unsafe_align=__temp1238v__unsafe_align;
  __temp1240v=4;
  KB__temp443v(__temp1240v,&__temp1241v__);
  __temp_errcode=alloc__temp538v(__temp1241v__,&__temp1242v__unsafe_ptr,&__temp1242v__unsafe_size,&__temp1242v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp652v(&__temp1242v__unsafe_ptr,&__temp1242v__unsafe_size,&__temp1242v__unsafe_align,&__temp1244v__buf__unsafe_ptr,&__temp1244v__buf__unsafe_size,&__temp1244v__buf__unsafe_align,&__temp1244v__pos);
  buf__buf__unsafe_ptr=__temp1244v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1244v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1244v__buf__unsafe_align;
  buf__pos=__temp1244v__pos;
  __temp1245v=0;
  __temp_errcode=mutget__temp529v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1245v,&__temp1246v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1247v=0;
  __temp_errcode=copy__temp683v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1248v,&__temp1249v__unsafe_ptr,&__temp1249v__dat__pos,&__temp1249v__dat__length,&__temp1249v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp683v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1250v,&__temp1251v__unsafe_ptr,&__temp1251v__dat__pos,&__temp1251v__dat__length,&__temp1251v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1220v(__temp1247v,__temp1249v__unsafe_ptr,__temp1249v__dat__pos,__temp1249v__dat__length,__temp1249v__dat__first,__temp1251v__unsafe_ptr,__temp1251v__dat__pos,__temp1251v__dat__length,__temp1251v__dat__first,&__temp1252v__name__unsafe_ptr,&__temp1252v__name__dat__pos,&__temp1252v__name__dat__length,&__temp1252v__name__dat__first,&__temp1252v__surname__unsafe_ptr,&__temp1252v__surname__dat__pos,&__temp1252v__surname__dat__length,&__temp1252v__surname__dat__first);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__,&__temp1252v__name__unsafe_ptr,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+8,&__temp1252v__name__dat__pos,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+16,&__temp1252v__name__dat__length,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+24,&__temp1252v__name__dat__first,1);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+25,&__temp1252v__surname__unsafe_ptr,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+33,&__temp1252v__surname__dat__pos,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+41,&__temp1252v__surname__dat__length,8);
  if(!__temp1246v__){
  goto __temp_failure;
  }
  memcpy(__temp1246v__+49,&__temp1252v__surname__dat__first,1);
  __temp1253v=0;
  __temp_errcode=get__temp533v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1253v,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__name__unsafe_ptr,__temp1254v__,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__name__dat__pos,__temp1254v__+8,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__name__dat__length,__temp1254v__+16,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__name__dat__first,__temp1254v__+24,1);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__surname__unsafe_ptr,__temp1254v__+25,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__surname__dat__pos,__temp1254v__+33,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__surname__dat__length,__temp1254v__+41,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(&__temp1255v__surname__dat__first,__temp1254v__+49,1);
  print__temp1222v(__temp1255v__name__unsafe_ptr,__temp1255v__name__dat__pos,__temp1255v__name__dat__length,__temp1255v__name__dat__first,__temp1255v__surname__unsafe_ptr,__temp1255v__surname__dat__pos,__temp1255v__surname__dat__length,__temp1255v__surname__dat__first);
  __temp1257v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1257v__unsafe_size=people__unsafe_size;
  __temp1257v__unsafe_align=people__unsafe_align;
  __temp1261v__unsafe_ptr=__temp1257v__unsafe_ptr+8;
  __temp1261v__unsafe_size=__temp1257v__unsafe_size;
  __temp1261v__unsafe_align=__temp1257v__unsafe_align;
  dat__unsafe_ptr=__temp1261v__unsafe_ptr;
  dat__unsafe_size=__temp1261v__unsafe_size;
  dat__unsafe_align=__temp1261v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1243v____temp544v____temp469v__);
  if(__temp1243v____temp544v____temp469v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1239v____temp469v__);
  if(__temp1239v____temp469v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp461v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1350v=buf__buf__unsafe_ptr;
  *__temp1351v=buf__buf__unsafe_size;
  *__temp1352v=buf__buf__unsafe_align;
  *__temp1353v=buf__pos;
  *__temp1354v=dat__unsafe_ptr;
  *__temp1355v=dat__unsafe_size;
  *__temp1356v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1265v() {
  char* __temp1266v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1266v__buf__buf__unsafe_size=0;
  uint64_t __temp1266v__buf__buf__unsafe_align=0;
  uint64_t __temp1266v__buf__pos=0;
  char* __temp1266v__dat__unsafe_ptr=0;
  uint64_t __temp1266v__dat__unsafe_size=0;
  uint64_t __temp1266v__dat__unsafe_align=0;
  char __temp1267v____temp1239v____temp469v__=0;
  char __temp1267v____temp1243v____temp544v____temp469v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint64_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint64_t t__dat__unsafe_align=0;
  uint64_t __temp1268v=0;
  char* __temp1269v__=0;
  uint64_t __temp1270v__pos=0;
  uint64_t __temp1270v__length=0;
  char __temp1270v__first=0;
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__dat__pos=0;
  uint64_t __temp1271v__dat__length=0;
  char __temp1271v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1232v(&__temp1266v__buf__buf__unsafe_ptr,&__temp1266v__buf__buf__unsafe_size,&__temp1266v__buf__buf__unsafe_align,&__temp1266v__buf__pos,&__temp1266v__dat__unsafe_ptr,&__temp1266v__dat__unsafe_size,&__temp1266v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1266v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1266v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1266v__buf__buf__unsafe_align;
  t__buf__pos=__temp1266v__buf__pos;
  t__dat__unsafe_ptr=__temp1266v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1266v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1266v__dat__unsafe_align;
  __temp1268v=0;
  __temp_errcode=get__temp533v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1268v,&__temp1269v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1269v__){
  goto __temp_failure;
  }
  memcpy(&__temp1270v__pos,__temp1269v__,8);
  if(!__temp1269v__){
  goto __temp_failure;
  }
  memcpy(&__temp1270v__length,__temp1269v__+8,8);
  if(!__temp1269v__){
  goto __temp_failure;
  }
  memcpy(&__temp1270v__first,__temp1269v__+16,1);
  str__temp579v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1270v__pos,__temp1270v__length,__temp1270v__first,&__temp1271v__unsafe_ptr,&__temp1271v__dat__pos,&__temp1271v__dat__length,&__temp1271v__dat__first);
  print__temp714v(__temp1271v__unsafe_ptr,__temp1271v__dat__pos,__temp1271v__dat__length,__temp1271v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1266v__buf__buf__unsafe_ptr,&__temp1267v____temp1243v____temp544v____temp469v__);
  if(__temp1267v____temp1243v____temp544v____temp469v__){
  __temp1266v__buf__buf__unsafe_size=0;
  __temp1266v__buf__buf__unsafe_size=__temp1266v__buf__buf__unsafe_size;
  free__temp461v(&__temp1266v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1266v__dat__unsafe_ptr,&__temp1267v____temp1239v____temp469v__);
  if(__temp1267v____temp1239v____temp469v__){
  __temp1266v__dat__unsafe_size=0;
  __temp1266v__dat__unsafe_size=__temp1266v__dat__unsafe_size;
  free__temp461v(&__temp1266v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1265v();return 0;}