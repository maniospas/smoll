#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp797v="";
const char* const __temp365v="\n";
const char* const __temp1225v="-------------------";
const char* const __temp1230v="surnname  ";
const char* const __temp1252v="mario";
const char* const __temp1250v="it's a me";
const char* const __temp1227v="name      ";
static const char* __temp_all_errcodes[30] = {"noerr",
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

static inline __attribute__((always_inline)) void Person____temp_buffer____buffer__temp1235v(char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=50;
  *__temp1275v=unsafe_ptr;
  *__temp1276v=unsafe_size;
  *__temp1277v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1278v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1279v) {
  char* allocated=*__temp1279v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1279v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1280v) {
  int value=0;
  *__temp1280v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1281v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1281v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1282v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1282v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1283v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1284v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1285v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1285v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1286v) {
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
  *__temp1286v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1287v, uint64_t* __temp1288v, uint64_t* __temp1289v, uint64_t size, char** __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v) {
  char* buffer__unsafe_ptr=*__temp1287v;
  uint64_t buffer__unsafe_size=*__temp1288v;
  uint64_t buffer__unsafe_align=*__temp1289v;
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
  *__temp1287v=buffer__unsafe_ptr;
  *__temp1288v=buffer__unsafe_size;
  *__temp1289v=buffer__unsafe_align;
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1293v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1293v=__temp445v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1294v, uint64_t* __temp1295v, uint64_t* __temp1296v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1294v=unsafe_ptr;
  *__temp1295v=unsafe_size;
  *__temp1296v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v) {
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
  char____temp_buffer____buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
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
  *__temp1297v=__temp543v__unsafe_ptr;
  *__temp1298v=__temp543v__unsafe_size;
  *__temp1299v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1300v, uint64_t* __temp1301v, uint64_t* __temp1302v, char** __temp1303v, uint64_t* __temp1304v, uint64_t* __temp1305v, uint64_t* __temp1306v) {
  char* buf__unsafe_ptr=*__temp1300v;
  uint64_t buf__unsafe_size=*__temp1301v;
  uint64_t buf__unsafe_align=*__temp1302v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1300v=buf__unsafe_ptr;
  *__temp1301v=buf__unsafe_size;
  *__temp1302v=buf__unsafe_align;
  *__temp1303v=buf__unsafe_ptr;
  *__temp1304v=buf__unsafe_size;
  *__temp1305v=buf__unsafe_align;
  *__temp1306v=pos;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1307v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1308v) {
  *__temp1308v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1309v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1309v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1310v, uint64_t* __temp1311v, uint64_t* __temp1312v, uint64_t i, char** __temp1313v) {
  char* buffer__unsafe_ptr=*__temp1310v;
  uint64_t buffer__unsafe_size=*__temp1311v;
  uint64_t buffer__unsafe_align=*__temp1312v;
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
  *__temp1310v=buffer__unsafe_ptr;
  *__temp1311v=buffer__unsafe_size;
  *__temp1312v=buffer__unsafe_align;
  *__temp1313v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1314v) {
  *__temp1314v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1315v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1316v) {
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
  *__temp1316v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1317v, uint64_t* __temp1318v, uint64_t* __temp1319v, char* __temp1320v) {
  goto __temp_return;
  __temp_return:
  *__temp1317v=unsafe_ptr;
  *__temp1318v=dat__pos;
  *__temp1319v=dat__length;
  *__temp1320v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1321v, uint64_t* __temp1322v, uint64_t* __temp1323v, char* __temp1324v) {
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
  neq__temp142v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1321v=__temp582v__unsafe_ptr;
  *__temp1322v=__temp582v__dat__pos;
  *__temp1323v=__temp582v__dat__length;
  *__temp1324v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1325v, uint64_t* __temp1326v, uint64_t* __temp1327v, char* __temp1328v) {
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
  neq__temp142v(length,__temp608v,&__temp609v__);
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
  *__temp1325v=__temp612v__unsafe_ptr;
  *__temp1326v=__temp612v__dat__pos;
  *__temp1327v=__temp612v__dat__length;
  *__temp1328v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1329v, uint64_t* __temp1330v, uint64_t* __temp1331v, char* __temp1332v) {
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
  add__temp170v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1329v=__temp620v__unsafe_ptr;
  *__temp1330v=__temp620v__dat__pos;
  *__temp1331v=__temp620v__dat__length;
  *__temp1332v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1333v) {
  goto __temp_return;
  __temp_return:
  *__temp1333v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1334v) {
  goto __temp_return;
  __temp_return:
  *__temp1334v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1335v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1335v=z;
}

int copy__temp685v(char** __temp1336v, uint64_t* __temp1337v, uint64_t* __temp1338v, uint64_t* __temp1339v, const char* _other, char** __temp1340v, uint64_t* __temp1341v, uint64_t* __temp1342v, char* __temp1343v) {
  char* buf__unsafe_ptr=*__temp1336v;
  uint64_t buf__unsafe_size=*__temp1337v;
  uint64_t buf__unsafe_align=*__temp1338v;
  uint64_t pos=*__temp1339v;
  char* __temp686v__unsafe_ptr=0;
  uint64_t __temp686v__dat__pos=0;
  uint64_t __temp686v__dat__length=0;
  char __temp686v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp687v__=0;
  uint64_t __temp688v__=0;
  uint64_t next_pos=0;
  uint64_t __temp689v__=0;
  char __temp690v__=0;
  uint64_t __temp691v=0;
  uint64_t __temp692v__=0;
  uint64_t prev_pos=0;
  char* __temp693v__unsafe_ptr=0;
  uint64_t __temp693v__dat__pos=0;
  uint64_t __temp693v__dat__length=0;
  char __temp693v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(_other,&__temp686v__unsafe_ptr,&__temp686v__dat__pos,&__temp686v__dat__length,&__temp686v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp686v__unsafe_ptr;
  other__dat__pos=__temp686v__dat__pos;
  other__dat__length=__temp686v__dat__length;
  other__dat__first=__temp686v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp687v__);
  add__temp170v(pos,__temp687v__,&__temp688v__);
  next_pos=__temp688v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp689v__);
  gt__temp271v(next_pos,__temp689v__,&__temp690v__);
  if(__temp690v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp691v=0;
  add__temp170v(pos,__temp691v,&__temp692v__);
  prev_pos=__temp692v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp693v__unsafe_ptr,&__temp693v__dat__pos,&__temp693v__dat__length,&__temp693v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1336v=buf__unsafe_ptr;
  *__temp1337v=buf__unsafe_size;
  *__temp1338v=buf__unsafe_align;
  *__temp1339v=pos;
  *__temp1340v=__temp693v__unsafe_ptr;
  *__temp1341v=__temp693v__dat__pos;
  *__temp1342v=__temp693v__dat__length;
  *__temp1343v=__temp693v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1222v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1344v, uint64_t* __temp1345v, uint64_t* __temp1346v, char* __temp1347v, char** __temp1348v, uint64_t* __temp1349v, uint64_t* __temp1350v, char* __temp1351v) {
  goto __temp_return;
  __temp_return:
  *__temp1344v=name__unsafe_ptr;
  *__temp1345v=name__dat__pos;
  *__temp1346v=name__dat__length;
  *__temp1347v=name__dat__first;
  *__temp1348v=surname__unsafe_ptr;
  *__temp1349v=surname__dat__pos;
  *__temp1350v=surname__dat__length;
  *__temp1351v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp719v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1224v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1225v);
  print__temp361v(__temp1227v,__temp797v);
  print__temp718v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1230v,__temp797v);
  print__temp718v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1225v);
}

static inline __attribute__((always_inline)) int test__temp1234v(char** __temp1352v, uint64_t* __temp1353v, uint64_t* __temp1354v, uint64_t* __temp1355v, char** __temp1356v, uint64_t* __temp1357v, uint64_t* __temp1358v) {
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__unsafe_size=0;
  uint64_t __temp1237v__unsafe_align=0;
  char* __temp1238v__unsafe_ptr=0;
  uint64_t __temp1238v__unsafe_size=0;
  uint64_t __temp1238v__unsafe_align=0;
  uint64_t __temp1239v=0;
  char* __temp1240v__unsafe_ptr=0;
  uint64_t __temp1240v__unsafe_size=0;
  uint64_t __temp1240v__unsafe_align=0;
  char __temp1241v____temp469v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint64_t people__unsafe_align=0;
  uint64_t __temp1242v=0;
  uint64_t __temp1243v__=0;
  char* __temp1244v__unsafe_ptr=0;
  uint64_t __temp1244v__unsafe_size=0;
  uint64_t __temp1244v__unsafe_align=0;
  char __temp1245v____temp544v____temp469v__=0;
  char* __temp1246v__buf__unsafe_ptr=0;
  uint64_t __temp1246v__buf__unsafe_size=0;
  uint64_t __temp1246v__buf__unsafe_align=0;
  uint64_t __temp1246v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1247v=0;
  char* __temp1248v__=0;
  uint64_t __temp1249v=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__dat__pos=0;
  uint64_t __temp1251v__dat__length=0;
  char __temp1251v__dat__first=0;
  char* __temp1253v__unsafe_ptr=0;
  uint64_t __temp1253v__dat__pos=0;
  uint64_t __temp1253v__dat__length=0;
  char __temp1253v__dat__first=0;
  char* __temp1254v__name__unsafe_ptr=0;
  uint64_t __temp1254v__name__dat__pos=0;
  uint64_t __temp1254v__name__dat__length=0;
  char __temp1254v__name__dat__first=0;
  char* __temp1254v__surname__unsafe_ptr=0;
  uint64_t __temp1254v__surname__dat__pos=0;
  uint64_t __temp1254v__surname__dat__length=0;
  char __temp1254v__surname__dat__first=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__=0;
  char* __temp1257v__name__unsafe_ptr=0;
  uint64_t __temp1257v__name__dat__pos=0;
  uint64_t __temp1257v__name__dat__length=0;
  char __temp1257v__name__dat__first=0;
  char* __temp1257v__surname__unsafe_ptr=0;
  uint64_t __temp1257v__surname__dat__pos=0;
  uint64_t __temp1257v__surname__dat__length=0;
  char __temp1257v__surname__dat__first=0;
  char* __temp1259v__unsafe_ptr=0;
  uint64_t __temp1259v__unsafe_size=0;
  uint64_t __temp1259v__unsafe_align=0;
  char* __temp1263v__unsafe_ptr=0;
  uint64_t __temp1263v__unsafe_size=0;
  uint64_t __temp1263v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint64_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person____temp_buffer____buffer__temp1235v(&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align);
  __temp1238v__unsafe_ptr=__temp1237v__unsafe_ptr;
  __temp1238v__unsafe_size=__temp1237v__unsafe_size;
  __temp1238v__unsafe_align=__temp1237v__unsafe_align;
  __temp1239v=4;
  __temp_errcode=alloc__temp467v(&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align,__temp1239v,&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1240v__unsafe_ptr;
  people__unsafe_size=__temp1240v__unsafe_size;
  people__unsafe_align=__temp1240v__unsafe_align;
  __temp1242v=4;
  KB__temp443v(__temp1242v,&__temp1243v__);
  __temp_errcode=alloc__temp538v(__temp1243v__,&__temp1244v__unsafe_ptr,&__temp1244v__unsafe_size,&__temp1244v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1244v__unsafe_ptr,&__temp1244v__unsafe_size,&__temp1244v__unsafe_align,&__temp1246v__buf__unsafe_ptr,&__temp1246v__buf__unsafe_size,&__temp1246v__buf__unsafe_align,&__temp1246v__pos);
  buf__buf__unsafe_ptr=__temp1246v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1246v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1246v__buf__unsafe_align;
  buf__pos=__temp1246v__pos;
  __temp1247v=0;
  __temp_errcode=mutget__temp529v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1247v,&__temp1248v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1249v=0;
  __temp_errcode=copy__temp685v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1250v,&__temp1251v__unsafe_ptr,&__temp1251v__dat__pos,&__temp1251v__dat__length,&__temp1251v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp685v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__dat__pos,&__temp1253v__dat__length,&__temp1253v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1222v(__temp1249v,__temp1251v__unsafe_ptr,__temp1251v__dat__pos,__temp1251v__dat__length,__temp1251v__dat__first,__temp1253v__unsafe_ptr,__temp1253v__dat__pos,__temp1253v__dat__length,__temp1253v__dat__first,&__temp1254v__name__unsafe_ptr,&__temp1254v__name__dat__pos,&__temp1254v__name__dat__length,&__temp1254v__name__dat__first,&__temp1254v__surname__unsafe_ptr,&__temp1254v__surname__dat__pos,&__temp1254v__surname__dat__length,&__temp1254v__surname__dat__first);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__,&__temp1254v__name__unsafe_ptr,8);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+8,&__temp1254v__name__dat__pos,8);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+16,&__temp1254v__name__dat__length,8);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+24,&__temp1254v__name__dat__first,1);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+25,&__temp1254v__surname__unsafe_ptr,8);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+33,&__temp1254v__surname__dat__pos,8);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+41,&__temp1254v__surname__dat__length,8);
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__+49,&__temp1254v__surname__dat__first,1);
  __temp1255v=0;
  __temp_errcode=get__temp533v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1255v,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1256v__){
  goto __temp_failure;
  }
  memcpy(&__temp1257v__name__unsafe_ptr,__temp1256v__,8);
  memcpy(&__temp1257v__name__dat__pos,__temp1256v__+8,8);
  memcpy(&__temp1257v__name__dat__length,__temp1256v__+16,8);
  memcpy(&__temp1257v__name__dat__first,__temp1256v__+24,1);
  memcpy(&__temp1257v__surname__unsafe_ptr,__temp1256v__+25,8);
  memcpy(&__temp1257v__surname__dat__pos,__temp1256v__+33,8);
  memcpy(&__temp1257v__surname__dat__length,__temp1256v__+41,8);
  memcpy(&__temp1257v__surname__dat__first,__temp1256v__+49,1);
  print__temp1224v(__temp1257v__name__unsafe_ptr,__temp1257v__name__dat__pos,__temp1257v__name__dat__length,__temp1257v__name__dat__first,__temp1257v__surname__unsafe_ptr,__temp1257v__surname__dat__pos,__temp1257v__surname__dat__length,__temp1257v__surname__dat__first);
  __temp1259v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1259v__unsafe_size=people__unsafe_size;
  __temp1259v__unsafe_align=people__unsafe_align;
  __temp1263v__unsafe_ptr=__temp1259v__unsafe_ptr+8;
  __temp1263v__unsafe_size=__temp1259v__unsafe_size;
  __temp1263v__unsafe_align=__temp1259v__unsafe_align;
  dat__unsafe_ptr=__temp1263v__unsafe_ptr;
  dat__unsafe_size=__temp1263v__unsafe_size;
  dat__unsafe_align=__temp1263v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1245v____temp544v____temp469v__);
  if(__temp1245v____temp544v____temp469v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1241v____temp469v__);
  if(__temp1241v____temp469v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp461v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1352v=buf__buf__unsafe_ptr;
  *__temp1353v=buf__buf__unsafe_size;
  *__temp1354v=buf__buf__unsafe_align;
  *__temp1355v=buf__pos;
  *__temp1356v=dat__unsafe_ptr;
  *__temp1357v=dat__unsafe_size;
  *__temp1358v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1267v() {
  char* __temp1268v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1268v__buf__buf__unsafe_size=0;
  uint64_t __temp1268v__buf__buf__unsafe_align=0;
  uint64_t __temp1268v__buf__pos=0;
  char* __temp1268v__dat__unsafe_ptr=0;
  uint64_t __temp1268v__dat__unsafe_size=0;
  uint64_t __temp1268v__dat__unsafe_align=0;
  char __temp1269v____temp1241v____temp469v__=0;
  char __temp1269v____temp1245v____temp544v____temp469v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint64_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint64_t t__dat__unsafe_align=0;
  uint64_t __temp1270v=0;
  char* __temp1271v__=0;
  uint64_t __temp1272v__pos=0;
  uint64_t __temp1272v__length=0;
  char __temp1272v__first=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__dat__pos=0;
  uint64_t __temp1273v__dat__length=0;
  char __temp1273v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1234v(&__temp1268v__buf__buf__unsafe_ptr,&__temp1268v__buf__buf__unsafe_size,&__temp1268v__buf__buf__unsafe_align,&__temp1268v__buf__pos,&__temp1268v__dat__unsafe_ptr,&__temp1268v__dat__unsafe_size,&__temp1268v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1268v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1268v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1268v__buf__buf__unsafe_align;
  t__buf__pos=__temp1268v__buf__pos;
  t__dat__unsafe_ptr=__temp1268v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1268v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1268v__dat__unsafe_align;
  __temp1270v=0;
  __temp_errcode=get__temp533v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1270v,&__temp1271v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1271v__){
  goto __temp_failure;
  }
  memcpy(&__temp1272v__pos,__temp1271v__,8);
  memcpy(&__temp1272v__length,__temp1271v__+8,8);
  memcpy(&__temp1272v__first,__temp1271v__+16,1);
  __temp_errcode=str__temp579v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1272v__pos,__temp1272v__length,__temp1272v__first,&__temp1273v__unsafe_ptr,&__temp1273v__dat__pos,&__temp1273v__dat__length,&__temp1273v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp718v(__temp1273v__unsafe_ptr,__temp1273v__dat__pos,__temp1273v__dat__length,__temp1273v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1268v__buf__buf__unsafe_ptr,&__temp1269v____temp1245v____temp544v____temp469v__);
  if(__temp1269v____temp1245v____temp544v____temp469v__){
  __temp1268v__buf__buf__unsafe_size=0;
  __temp1268v__buf__buf__unsafe_size=__temp1268v__buf__buf__unsafe_size;
  free__temp461v(&__temp1268v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1268v__dat__unsafe_ptr,&__temp1269v____temp1241v____temp469v__);
  if(__temp1269v____temp1241v____temp469v__){
  __temp1268v__dat__unsafe_size=0;
  __temp1268v__dat__unsafe_size=__temp1268v__dat__unsafe_size;
  free__temp461v(&__temp1268v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1267v();return 0;}