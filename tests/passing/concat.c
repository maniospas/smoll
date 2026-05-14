#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1290v="is";
const char* const __temp363v="\n";
const char* const __temp1278v="hi";
const char* const __temp1282v="my";
const char* const __temp1267v=" ";
const char* const __temp1286v="name";
const char* const __temp1294v="manios";
static const char* __temp_all_errcodes[31] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"'nat' value too large to pack in 'nat16'",
"'nat' value too large to pack in 'nat32'"
};

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1250v(char** __temp1310v, uint64_t* __temp1311v, uint64_t* __temp1312v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=12;
  *__temp1310v=unsafe_ptr;
  *__temp1311v=unsafe_size;
  *__temp1312v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1313v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1314v) {
  char* allocated=*__temp1314v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1314v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1315v) {
  int value=0;
  *__temp1315v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1316v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1316v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1317v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1317v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1318v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1318v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1319v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1319v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1320v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1321v) {
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
  *__temp1321v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1322v, uint64_t* __temp1323v, uint64_t* __temp1324v, uint64_t size, char** __temp1325v, uint64_t* __temp1326v, uint64_t* __temp1327v) {
  char* buffer__unsafe_ptr=*__temp1322v;
  uint64_t buffer__unsafe_size=*__temp1323v;
  uint64_t buffer__unsafe_align=*__temp1324v;
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
  *__temp1322v=buffer__unsafe_ptr;
  *__temp1323v=buffer__unsafe_size;
  *__temp1324v=buffer__unsafe_align;
  *__temp1325v=buffer__unsafe_ptr;
  *__temp1326v=buffer__unsafe_size;
  *__temp1327v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1328v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1328v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1329v) {
  *__temp1329v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1330v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1330v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1331v, uint64_t* __temp1332v, uint64_t* __temp1333v, uint64_t i, char** __temp1334v) {
  char* buffer__unsafe_ptr=*__temp1331v;
  uint64_t buffer__unsafe_size=*__temp1332v;
  uint64_t buffer__unsafe_align=*__temp1333v;
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
  *__temp1331v=buffer__unsafe_ptr;
  *__temp1332v=buffer__unsafe_size;
  *__temp1333v=buffer__unsafe_align;
  *__temp1334v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1335v, uint64_t* __temp1336v, uint64_t* __temp1337v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1335v=unsafe_ptr;
  *__temp1336v=unsafe_size;
  *__temp1337v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1338v) {
  *__temp1338v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1339v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1339v=z;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1340v) {
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
  *__temp1340v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1341v, uint64_t* __temp1342v, uint64_t* __temp1343v, char* __temp1344v) {
  goto __temp_return;
  __temp_return:
  *__temp1341v=unsafe_ptr;
  *__temp1342v=dat__pos;
  *__temp1343v=dat__length;
  *__temp1344v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1345v, uint64_t* __temp1346v, uint64_t* __temp1347v, char* __temp1348v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1345v=__temp580v__unsafe_ptr;
  *__temp1346v=__temp580v__dat__pos;
  *__temp1347v=__temp580v__dat__length;
  *__temp1348v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1349v, uint64_t* __temp1350v, uint64_t* __temp1351v, char* __temp1352v) {
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
  *__temp1349v=__temp610v__unsafe_ptr;
  *__temp1350v=__temp610v__dat__pos;
  *__temp1351v=__temp610v__dat__length;
  *__temp1352v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1353v, uint64_t* __temp1354v, uint64_t* __temp1355v, char* __temp1356v) {
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
  *__temp1353v=__temp618v__unsafe_ptr;
  *__temp1354v=__temp618v__dat__pos;
  *__temp1355v=__temp618v__dat__length;
  *__temp1356v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1357v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1357v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1220v(uint64_t x, uint16_t* __temp1358v) {
  uint64_t __temp1221v=0;
  char __temp1222v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1221v=65535;
  gt__temp271v(x,__temp1221v,&__temp1222v__);
  if(__temp1222v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1358v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1228v(uint64_t _pos, uint64_t _length, uint16_t* __temp1359v, uint16_t* __temp1360v) {
  uint16_t __temp1229v__=0;
  uint16_t pos=0;
  uint16_t __temp1230v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1220v(_pos,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1229v__;
  __temp_errcode=nat16__temp1220v(_length,&__temp1230v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1230v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1359v=pos;
  *__temp1360v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1231v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1361v, uint16_t* __temp1362v, uint16_t* __temp1363v) {
  char* unsafe_ptr=0;
  uint16_t __temp1232v__pos=0;
  uint16_t __temp1232v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1228v(s__dat__pos,s__dat__length,&__temp1232v__pos,&__temp1232v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1232v__pos;
  dat__length=__temp1232v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1361v=unsafe_ptr;
  *__temp1362v=dat__pos;
  *__temp1363v=dat__length;
  
  return __temp_errcode;
}

int str__temp1234v(const char* s, char** __temp1364v, uint16_t* __temp1365v, uint16_t* __temp1366v) {
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__dat__pos=0;
  uint64_t __temp1235v__dat__length=0;
  char __temp1235v__dat__first=0;
  char* __temp1236v__unsafe_ptr=0;
  uint16_t __temp1236v__dat__pos=0;
  uint16_t __temp1236v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(s,&__temp1235v__unsafe_ptr,&__temp1235v__dat__pos,&__temp1235v__dat__length,&__temp1235v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1231v(__temp1235v__unsafe_ptr,__temp1235v__dat__pos,__temp1235v__dat__length,__temp1235v__dat__first,&__temp1236v__unsafe_ptr,&__temp1236v__dat__pos,&__temp1236v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1364v=__temp1236v__unsafe_ptr;
  *__temp1365v=__temp1236v__dat__pos;
  *__temp1366v=__temp1236v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1367v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1367v=__temp445v__;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1368v, uint64_t* __temp1369v, uint64_t* __temp1370v) {
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
  *__temp1368v=__temp543v__unsafe_ptr;
  *__temp1369v=__temp543v__unsafe_size;
  *__temp1370v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp652v(char** __temp1371v, uint64_t* __temp1372v, uint64_t* __temp1373v, char** __temp1374v, uint64_t* __temp1375v, uint64_t* __temp1376v, uint64_t* __temp1377v) {
  char* buf__unsafe_ptr=*__temp1371v;
  uint64_t buf__unsafe_size=*__temp1372v;
  uint64_t buf__unsafe_align=*__temp1373v;
  uint64_t __temp653v=0;
  uint64_t __temp654v=0;
  uint64_t pos=0;
  __temp653v=0;
  __temp654v=__temp653v;
  pos=__temp654v;
  goto __temp_return;
  __temp_return:
  *__temp1371v=buf__unsafe_ptr;
  *__temp1372v=buf__unsafe_size;
  *__temp1373v=buf__unsafe_align;
  *__temp1374v=buf__unsafe_ptr;
  *__temp1375v=buf__unsafe_size;
  *__temp1376v=buf__unsafe_align;
  *__temp1377v=pos;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1378v) {
  goto __temp_return;
  __temp_return:
  *__temp1378v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1379v, uint64_t* __temp1380v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1379v=from;
  *__temp1380v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1381v, uint64_t r__to, uint64_t* __temp1382v) {
  uint64_t r__from=*__temp1381v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1381v=r__from;
  *__temp1382v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void nat__temp1227v(uint16_t x, uint64_t* __temp1383v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1383v=value;
}

static inline __attribute__((always_inline)) void str__temp577v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1384v, uint64_t* __temp1385v, uint64_t* __temp1386v, char* __temp1387v) {
  char* first_pos=0;
  char first=0;
  char* __temp578v__unsafe_ptr=0;
  uint64_t __temp578v__dat__pos=0;
  uint64_t __temp578v__dat__length=0;
  char __temp578v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp575v(unsafe_ptr,pos,length,first,&__temp578v__unsafe_ptr,&__temp578v__dat__pos,&__temp578v__dat__length,&__temp578v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1384v=__temp578v__unsafe_ptr;
  *__temp1385v=__temp578v__dat__pos;
  *__temp1386v=__temp578v__dat__length;
  *__temp1387v=__temp578v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1237v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1388v, uint64_t* __temp1389v, uint64_t* __temp1390v, char* __temp1391v) {
  uint64_t __temp1238v__=0;
  uint64_t __temp1239v__=0;
  char* __temp1240v__unsafe_ptr=0;
  uint64_t __temp1240v__dat__pos=0;
  uint64_t __temp1240v__dat__length=0;
  char __temp1240v__dat__first=0;
  nat__temp1227v(m__dat__pos,&__temp1238v__);
  nat__temp1227v(m__dat__length,&__temp1239v__);
  str__temp577v(m__unsafe_ptr,__temp1238v__,__temp1239v__,&__temp1240v__unsafe_ptr,&__temp1240v__dat__pos,&__temp1240v__dat__length,&__temp1240v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1388v=__temp1240v__unsafe_ptr;
  *__temp1389v=__temp1240v__dat__pos;
  *__temp1390v=__temp1240v__dat__length;
  *__temp1391v=__temp1240v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp604v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1392v, uint64_t* __temp1393v, uint64_t* __temp1394v, char* __temp1395v) {
  goto __temp_return;
  __temp_return:
  *__temp1392v=other__unsafe_ptr;
  *__temp1393v=other__dat__pos;
  *__temp1394v=other__dat__length;
  *__temp1395v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp619v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1396v) {
  goto __temp_return;
  __temp_return:
  *__temp1396v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp674v(char** __temp1397v, uint64_t* __temp1398v, uint64_t* __temp1399v, uint64_t* __temp1400v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1401v, uint64_t* __temp1402v, uint64_t* __temp1403v, char* __temp1404v) {
  char* buf__unsafe_ptr=*__temp1397v;
  uint64_t buf__unsafe_size=*__temp1398v;
  uint64_t buf__unsafe_align=*__temp1399v;
  uint64_t pos=*__temp1400v;
  char* __temp675v__unsafe_ptr=0;
  uint64_t __temp675v__dat__pos=0;
  uint64_t __temp675v__dat__length=0;
  char __temp675v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp676v__=0;
  uint64_t __temp677v__=0;
  uint64_t next_pos=0;
  uint64_t __temp678v__=0;
  char __temp679v__=0;
  uint64_t __temp680v=0;
  uint64_t __temp681v__=0;
  uint64_t prev_pos=0;
  char* __temp682v__unsafe_ptr=0;
  uint64_t __temp682v__dat__pos=0;
  uint64_t __temp682v__dat__length=0;
  char __temp682v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp604v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp675v__unsafe_ptr,&__temp675v__dat__pos,&__temp675v__dat__length,&__temp675v__dat__first);
  other__unsafe_ptr=__temp675v__unsafe_ptr;
  other__dat__pos=__temp675v__dat__pos;
  other__dat__length=__temp675v__dat__length;
  other__dat__first=__temp675v__dat__first;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp676v__);
  add__temp170v(pos,__temp676v__,&__temp677v__);
  next_pos=__temp677v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp678v__);
  gt__temp271v(next_pos,__temp678v__,&__temp679v__);
  if(__temp679v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp680v=0;
  add__temp170v(pos,__temp680v,&__temp681v__);
  prev_pos=__temp681v__;
  pos=next_pos;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp682v__unsafe_ptr,&__temp682v__dat__pos,&__temp682v__dat__length,&__temp682v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1397v=buf__unsafe_ptr;
  *__temp1398v=buf__unsafe_size;
  *__temp1399v=buf__unsafe_align;
  *__temp1400v=pos;
  *__temp1401v=__temp682v__unsafe_ptr;
  *__temp1402v=__temp682v__dat__pos;
  *__temp1403v=__temp682v__dat__length;
  *__temp1404v=__temp682v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp683v(char** __temp1405v, uint64_t* __temp1406v, uint64_t* __temp1407v, uint64_t* __temp1408v, const char* _other, char** __temp1409v, uint64_t* __temp1410v, uint64_t* __temp1411v, char* __temp1412v) {
  char* buf__unsafe_ptr=*__temp1405v;
  uint64_t buf__unsafe_size=*__temp1406v;
  uint64_t buf__unsafe_align=*__temp1407v;
  uint64_t pos=*__temp1408v;
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
  *__temp1405v=buf__unsafe_ptr;
  *__temp1406v=buf__unsafe_size;
  *__temp1407v=buf__unsafe_align;
  *__temp1408v=pos;
  *__temp1409v=__temp691v__unsafe_ptr;
  *__temp1410v=__temp691v__dat__pos;
  *__temp1411v=__temp691v__dat__length;
  *__temp1412v=__temp691v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1252v(char** __temp1413v, uint64_t* __temp1414v, uint64_t* __temp1415v, char** __temp1416v, uint64_t* __temp1417v, uint64_t* __temp1418v, char* __temp1419v) {
  char* buff__unsafe_ptr=*__temp1413v;
  uint64_t buff__unsafe_size=*__temp1414v;
  uint64_t buff__unsafe_align=*__temp1415v;
  uint64_t __temp1253v=0;
  uint64_t __temp1254v__=0;
  char* __temp1255v__unsafe_ptr=0;
  uint64_t __temp1255v__unsafe_size=0;
  uint64_t __temp1255v__unsafe_align=0;
  char __temp1256v____temp544v____temp469v__=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__unsafe_size=0;
  uint64_t __temp1257v__unsafe_align=0;
  char* __temp1258v__buf__unsafe_ptr=0;
  uint64_t __temp1258v__buf__unsafe_size=0;
  uint64_t __temp1258v__buf__unsafe_align=0;
  uint64_t __temp1258v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint64_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1259v__=0;
  uint64_t __temp1260v__from=0;
  uint64_t __temp1260v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1261v=0;
  uint64_t __temp1262v__=0;
  uint64_t i=0;
  char* __temp1263v__=0;
  char* __temp1264v__unsafe_ptr=0;
  uint16_t __temp1264v__dat__pos=0;
  uint16_t __temp1264v__dat__length=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__dat__pos=0;
  uint64_t __temp1265v__dat__length=0;
  char __temp1265v__dat__first=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__dat__pos=0;
  uint64_t __temp1266v__dat__length=0;
  char __temp1266v__dat__first=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__dat__pos=0;
  uint64_t __temp1268v__dat__length=0;
  char __temp1268v__dat__first=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__dat__pos=0;
  uint64_t __temp1269v__dat__length=0;
  char __temp1269v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1253v=4;
  KB__temp443v(__temp1253v,&__temp1254v__);
  __temp_errcode=alloc__temp538v(__temp1254v__,&__temp1255v__unsafe_ptr,&__temp1255v__unsafe_size,&__temp1255v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1257v__unsafe_ptr=__temp1255v__unsafe_ptr;
  __temp1257v__unsafe_size=__temp1255v__unsafe_size;
  __temp1257v__unsafe_align=__temp1255v__unsafe_align;
  bufpos__temp652v(&__temp1257v__unsafe_ptr,&__temp1257v__unsafe_size,&__temp1257v__unsafe_align,&__temp1258v__buf__unsafe_ptr,&__temp1258v__buf__unsafe_size,&__temp1258v__buf__unsafe_align,&__temp1258v__pos);
  mem__buf__unsafe_ptr=__temp1258v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1258v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1258v__buf__unsafe_align;
  mem__pos=__temp1258v__pos;
  len__temp537v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1259v__);
  range__temp435v(__temp1259v__,&__temp1260v__from,&__temp1260v__to);
  iter__from=__temp1260v__from;
  iter__to=__temp1260v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1262v__);
  __temp1261v=__temp_complain;
  i=__temp1262v__;
  __temp1261v=__temp1261v==0;
  if(!__temp1261v){
  break;
  }
  __temp_errcode=get__temp533v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(&__temp1264v__unsafe_ptr,__temp1263v__,8);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(&__temp1264v__dat__pos,__temp1263v__+8,2);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(&__temp1264v__dat__length,__temp1263v__+10,2);
  unpack__temp1237v(__temp1264v__unsafe_ptr,__temp1264v__dat__pos,__temp1264v__dat__length,&__temp1265v__unsafe_ptr,&__temp1265v__dat__pos,&__temp1265v__dat__length,&__temp1265v__dat__first);
  __temp_errcode=copy__temp674v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1265v__unsafe_ptr,__temp1265v__dat__pos,__temp1265v__dat__length,__temp1265v__dat__first,&__temp1266v__unsafe_ptr,&__temp1266v__dat__pos,&__temp1266v__dat__length,&__temp1266v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp683v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1267v,&__temp1268v__unsafe_ptr,&__temp1268v__dat__pos,&__temp1268v__dat__length,&__temp1268v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp605v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1269v__unsafe_ptr,&__temp1269v__dat__pos,&__temp1269v__dat__length,&__temp1269v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1269v__unsafe_ptr,&__temp1256v____temp544v____temp469v__);
  if(__temp1256v____temp544v____temp469v__){
  __temp1255v__unsafe_size=0;
  __temp1255v__unsafe_size=__temp1255v__unsafe_size;
  free__temp461v(&__temp1269v__unsafe_ptr);
  }
  __temp_return:
  *__temp1413v=buff__unsafe_ptr;
  *__temp1414v=buff__unsafe_size;
  *__temp1415v=buff__unsafe_align;
  *__temp1416v=__temp1269v__unsafe_ptr;
  *__temp1417v=__temp1269v__dat__pos;
  *__temp1418v=__temp1269v__dat__length;
  *__temp1419v=__temp1269v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value, const char* endl) {
  int __temp377v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1270v() {
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint64_t __temp1271v__unsafe_align=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint64_t __temp1272v__unsafe_align=0;
  uint64_t __temp1273v=0;
  char* __temp1274v__unsafe_ptr=0;
  uint64_t __temp1274v__unsafe_size=0;
  uint64_t __temp1274v__unsafe_align=0;
  char __temp1275v____temp469v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint64_t buff__unsafe_align=0;
  uint64_t __temp1276v=0;
  char* __temp1277v__=0;
  char* __temp1279v__unsafe_ptr=0;
  uint16_t __temp1279v__dat__pos=0;
  uint16_t __temp1279v__dat__length=0;
  uint64_t __temp1280v=0;
  char* __temp1281v__=0;
  char* __temp1283v__unsafe_ptr=0;
  uint16_t __temp1283v__dat__pos=0;
  uint16_t __temp1283v__dat__length=0;
  uint64_t __temp1284v=0;
  char* __temp1285v__=0;
  char* __temp1287v__unsafe_ptr=0;
  uint16_t __temp1287v__dat__pos=0;
  uint16_t __temp1287v__dat__length=0;
  uint64_t __temp1288v=0;
  char* __temp1289v__=0;
  char* __temp1291v__unsafe_ptr=0;
  uint16_t __temp1291v__dat__pos=0;
  uint16_t __temp1291v__dat__length=0;
  uint64_t __temp1292v=0;
  char* __temp1293v__=0;
  char* __temp1295v__unsafe_ptr=0;
  uint16_t __temp1295v__dat__pos=0;
  uint16_t __temp1295v__dat__length=0;
  uint64_t __temp1296v=0;
  char* __temp1297v__=0;
  char* __temp1298v__unsafe_ptr=0;
  uint64_t __temp1298v__dat__pos=0;
  uint64_t __temp1298v__dat__length=0;
  char __temp1298v__dat__first=0;
  char __temp1299v____temp1256v____temp544v____temp469v__=0;
  uint64_t __temp1299v____temp1255v__unsafe_size=0;
  char* __temp1300v__unsafe_ptr=0;
  uint16_t __temp1300v__dat__pos=0;
  uint16_t __temp1300v__dat__length=0;
  uint64_t __temp1301v__=0;
  uint64_t __temp1302v__from=0;
  uint64_t __temp1302v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1303v=0;
  uint64_t __temp1304v__=0;
  uint64_t j=0;
  char* __temp1306v__=0;
  char* __temp1307v__unsafe_ptr=0;
  uint16_t __temp1307v__dat__pos=0;
  uint16_t __temp1307v__dat__length=0;
  char* __temp1308v__unsafe_ptr=0;
  uint64_t __temp1308v__dat__pos=0;
  uint64_t __temp1308v__dat__length=0;
  char __temp1308v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1250v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_align);
  __temp1272v__unsafe_ptr=__temp1271v__unsafe_ptr;
  __temp1272v__unsafe_size=__temp1271v__unsafe_size;
  __temp1272v__unsafe_align=__temp1271v__unsafe_align;
  __temp1273v=6;
  __temp_errcode=alloc__temp467v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_align,__temp1273v,&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1274v__unsafe_ptr;
  buff__unsafe_size=__temp1274v__unsafe_size;
  buff__unsafe_align=__temp1274v__unsafe_align;
  __temp1276v=0;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1276v,&__temp1277v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1234v(__temp1278v,&__temp1279v__unsafe_ptr,&__temp1279v__dat__pos,&__temp1279v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1277v__){
  goto __temp_failure;
  }
  memcpy(__temp1277v__,&__temp1279v__unsafe_ptr,8);
  if(!__temp1277v__){
  goto __temp_failure;
  }
  memcpy(__temp1277v__+8,&__temp1279v__dat__pos,2);
  if(!__temp1277v__){
  goto __temp_failure;
  }
  memcpy(__temp1277v__+10,&__temp1279v__dat__length,2);
  __temp1280v=1;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1280v,&__temp1281v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1234v(__temp1282v,&__temp1283v__unsafe_ptr,&__temp1283v__dat__pos,&__temp1283v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1281v__){
  goto __temp_failure;
  }
  memcpy(__temp1281v__,&__temp1283v__unsafe_ptr,8);
  if(!__temp1281v__){
  goto __temp_failure;
  }
  memcpy(__temp1281v__+8,&__temp1283v__dat__pos,2);
  if(!__temp1281v__){
  goto __temp_failure;
  }
  memcpy(__temp1281v__+10,&__temp1283v__dat__length,2);
  __temp1284v=2;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1284v,&__temp1285v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1234v(__temp1286v,&__temp1287v__unsafe_ptr,&__temp1287v__dat__pos,&__temp1287v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1285v__){
  goto __temp_failure;
  }
  memcpy(__temp1285v__,&__temp1287v__unsafe_ptr,8);
  if(!__temp1285v__){
  goto __temp_failure;
  }
  memcpy(__temp1285v__+8,&__temp1287v__dat__pos,2);
  if(!__temp1285v__){
  goto __temp_failure;
  }
  memcpy(__temp1285v__+10,&__temp1287v__dat__length,2);
  __temp1288v=3;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1288v,&__temp1289v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1234v(__temp1290v,&__temp1291v__unsafe_ptr,&__temp1291v__dat__pos,&__temp1291v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1289v__){
  goto __temp_failure;
  }
  memcpy(__temp1289v__,&__temp1291v__unsafe_ptr,8);
  if(!__temp1289v__){
  goto __temp_failure;
  }
  memcpy(__temp1289v__+8,&__temp1291v__dat__pos,2);
  if(!__temp1289v__){
  goto __temp_failure;
  }
  memcpy(__temp1289v__+10,&__temp1291v__dat__length,2);
  __temp1292v=4;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1292v,&__temp1293v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1234v(__temp1294v,&__temp1295v__unsafe_ptr,&__temp1295v__dat__pos,&__temp1295v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1293v__){
  goto __temp_failure;
  }
  memcpy(__temp1293v__,&__temp1295v__unsafe_ptr,8);
  if(!__temp1293v__){
  goto __temp_failure;
  }
  memcpy(__temp1293v__+8,&__temp1295v__dat__pos,2);
  if(!__temp1293v__){
  goto __temp_failure;
  }
  memcpy(__temp1293v__+10,&__temp1295v__dat__length,2);
  __temp1296v=5;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1296v,&__temp1297v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1252v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1298v__unsafe_ptr,&__temp1298v__dat__pos,&__temp1298v__dat__length,&__temp1298v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1231v(__temp1298v__unsafe_ptr,__temp1298v__dat__pos,__temp1298v__dat__length,__temp1298v__dat__first,&__temp1300v__unsafe_ptr,&__temp1300v__dat__pos,&__temp1300v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1297v__){
  goto __temp_failure;
  }
  memcpy(__temp1297v__,&__temp1300v__unsafe_ptr,8);
  if(!__temp1297v__){
  goto __temp_failure;
  }
  memcpy(__temp1297v__+8,&__temp1300v__dat__pos,2);
  if(!__temp1297v__){
  goto __temp_failure;
  }
  memcpy(__temp1297v__+10,&__temp1300v__dat__length,2);
  len__temp537v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1301v__);
  range__temp435v(__temp1301v__,&__temp1302v__from,&__temp1302v__to);
  full_iter__from=__temp1302v__from;
  full_iter__to=__temp1302v__to;
  while(1){
  __temp_complain=next__temp439v(&full_iter__from,full_iter__to,&__temp1304v__);
  __temp1303v=__temp_complain;
  j=__temp1304v__;
  __temp1303v=__temp1303v==0;
  if(!__temp1303v){
  break;
  }
  print__temp376v(j,__temp1267v);
  __temp_errcode=get__temp533v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1306v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1306v__){
  goto __temp_failure;
  }
  memcpy(&__temp1307v__unsafe_ptr,__temp1306v__,8);
  if(!__temp1306v__){
  goto __temp_failure;
  }
  memcpy(&__temp1307v__dat__pos,__temp1306v__+8,2);
  if(!__temp1306v__){
  goto __temp_failure;
  }
  memcpy(&__temp1307v__dat__length,__temp1306v__+10,2);
  unpack__temp1237v(__temp1307v__unsafe_ptr,__temp1307v__dat__pos,__temp1307v__dat__length,&__temp1308v__unsafe_ptr,&__temp1308v__dat__pos,&__temp1308v__dat__length,&__temp1308v__dat__first);
  print__temp714v(__temp1308v__unsafe_ptr,__temp1308v__dat__pos,__temp1308v__dat__length,__temp1308v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1298v__unsafe_ptr,&__temp1299v____temp1256v____temp544v____temp469v__);
  if(__temp1299v____temp1256v____temp544v____temp469v__){
  __temp1299v____temp1255v__unsafe_size=0;
  __temp1299v____temp1255v__unsafe_size=__temp1299v____temp1255v__unsafe_size;
  free__temp461v(&__temp1298v__unsafe_ptr);
  }
  exists__temp412v(__temp1274v__unsafe_ptr,&__temp1275v____temp469v__);
  if(__temp1275v____temp469v__){
  __temp1274v__unsafe_size=0;
  __temp1274v__unsafe_size=__temp1274v__unsafe_size;
  free__temp461v(&__temp1274v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1270v();return 0;}