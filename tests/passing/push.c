#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
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
"cannot resize a buffer with offset",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1247v(char** __temp1270v, uint64_t* __temp1271v, uint16_t* __temp1272v, uint16_t* __temp1273v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1270v=unsafe_ptr;
  *__temp1271v=unsafe_size;
  *__temp1272v=unsafe_offset;
  *__temp1273v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1274v) {
  goto __temp_return;
  __temp_return:
  *__temp1274v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1275v) {
  int value=0;
  *__temp1275v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1276v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1277v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1277v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1279v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1280v) {
  char* allocated=*__temp1280v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1280v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1281v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1282v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1282v=value;
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

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1285v, uint64_t* __temp1286v, uint16_t* __temp1287v, uint16_t* __temp1288v, uint64_t size, char** __temp1289v, uint64_t* __temp1290v, uint16_t* __temp1291v, uint16_t* __temp1292v) {
  char* buffer__unsafe_ptr=*__temp1285v;
  uint64_t buffer__unsafe_size=*__temp1286v;
  uint16_t buffer__unsafe_offset=*__temp1287v;
  uint16_t buffer__unsafe_align=*__temp1288v;
  int __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp477v__=0;
  uint64_t __temp478v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t bytes=0;
  char* __temp484v__=0;
  uint64_t __temp485v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  neq__temp142v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  nat__temp465v(buffer__unsafe_align,&__temp477v__);
  mul__temp194v(__temp477v__,size,&__temp478v__);
  zero__temp462v(buffer__unsafe_ptr,__temp476v,__temp478v__);
  }
  goto __temp_return;
  }
  __temp480v=0;
  neq__temp142v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  bytes=__temp483v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  __temp485v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp485v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp470v__);
  if(__temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_offset;
  *__temp1288v=buffer__unsafe_align;
  *__temp1289v=buffer__unsafe_ptr;
  *__temp1290v=buffer__unsafe_size;
  *__temp1291v=buffer__unsafe_offset;
  *__temp1292v=buffer__unsafe_align;
  
  return __temp_errcode;
}

int list__temp563v(char** __temp1293v, uint64_t* __temp1294v, uint16_t* __temp1295v, uint16_t* __temp1296v, char** __temp1297v, uint64_t* __temp1298v, uint16_t* __temp1299v, uint16_t* __temp1300v, uint64_t* __temp1301v) {
  char* buffer__unsafe_ptr=*__temp1293v;
  uint64_t buffer__unsafe_size=*__temp1294v;
  uint16_t buffer__unsafe_offset=*__temp1295v;
  uint16_t buffer__unsafe_align=*__temp1296v;
  uint64_t __temp564v=0;
  uint64_t __temp565v__=0;
  char __temp566v__=0;
  uint64_t __temp567v=0;
  char* __temp568v__unsafe_ptr=0;
  uint64_t __temp568v__unsafe_size=0;
  uint16_t __temp568v__unsafe_offset=0;
  uint16_t __temp568v__unsafe_align=0;
  char __temp569v____temp470v__=0;
  uint64_t __temp570v__=0;
  uint64_t __temp571v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp564v=0;
  len__temp555v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp565v__);
  eq__temp118v(__temp564v,__temp565v__,&__temp566v__);
  if(__temp566v__){
  __temp567v=1;
  __temp_errcode=alloc__temp468v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp567v,&__temp568v__unsafe_ptr,&__temp568v__unsafe_size,&__temp568v__unsafe_offset,&__temp568v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp568v__unsafe_ptr;
  buffer__unsafe_size=__temp568v__unsafe_size;
  buffer__unsafe_offset=__temp568v__unsafe_offset;
  buffer__unsafe_align=__temp568v__unsafe_align;
  }
  len__temp555v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp570v__);
  __temp571v=__temp570v__;
  length=__temp571v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp569v____temp470v__);
  if(__temp569v____temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_offset;
  *__temp1296v=buffer__unsafe_align;
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_offset;
  *__temp1300v=buffer__unsafe_align;
  *__temp1301v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1302v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1303v) {
  int __temp221v__=0;
  uint64_t zero=0;
  char __temp222v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp221v__);
  zero=0;
  eq__temp118v(y,zero,&__temp222v__);
  if(__temp222v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x/y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1303v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1304v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1305v) {
  *__temp1305v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1306v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp460v__=0;
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
  __temp_errcode=9;
  goto __temp_failure;
  }
  attach_type__temp20v(new_allocated,allocated__unsafe_ptr,&__temp460v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1306v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1307v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) int resize__temp507v(char** __temp1308v, uint64_t* __temp1309v, uint16_t* __temp1310v, uint16_t* __temp1311v, uint64_t size, char** __temp1312v, uint64_t* __temp1313v, uint16_t* __temp1314v, uint16_t* __temp1315v) {
  char* buffer__unsafe_ptr=*__temp1308v;
  uint64_t buffer__unsafe_size=*__temp1309v;
  uint16_t buffer__unsafe_offset=*__temp1310v;
  uint16_t buffer__unsafe_align=*__temp1311v;
  char __temp508v__=0;
  uint64_t __temp509v=0;
  char __temp510v__=0;
  uint64_t __temp511v=0;
  uint64_t __temp513v=0;
  char __temp514v__=0;
  uint64_t __temp515v__=0;
  uint64_t __temp516v=0;
  char __temp517v__=0;
  uint64_t __temp518v__=0;
  uint64_t __temp519v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t bytes=0;
  char* __temp522v__=0;
  char __temp523v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp508v__);
  if(__temp508v__){
  goto __temp_return;
  }
  __temp509v=0;
  eq__temp118v(size,__temp509v,&__temp510v__);
  if(__temp510v__){
  __temp511v=0;
  buffer__unsafe_size=__temp511v;
  free__temp461v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp513v=0;
  eq__temp118v(buffer__unsafe_size,__temp513v,&__temp514v__);
  if(__temp514v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_offset,&__temp515v__);
  __temp516v=0;
  neq__temp142v(__temp515v__,__temp516v,&__temp517v__);
  if(__temp517v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp518v__);
  mul__temp194v(buffer__unsafe_size,__temp518v__,&__temp519v__);
  prev_bytes=__temp519v__;
  buffer__unsafe_size=size;
  nat__temp465v(buffer__unsafe_align,&__temp520v__);
  mul__temp194v(__temp520v__,size,&__temp521v__);
  bytes=__temp521v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp522v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp522v__;
  lt__temp247v(prev_bytes,bytes,&__temp523v__);
  if(__temp523v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1308v=buffer__unsafe_ptr;
  *__temp1309v=buffer__unsafe_size;
  *__temp1310v=buffer__unsafe_offset;
  *__temp1311v=buffer__unsafe_align;
  *__temp1312v=buffer__unsafe_ptr;
  *__temp1313v=buffer__unsafe_size;
  *__temp1314v=buffer__unsafe_offset;
  *__temp1315v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1316v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1316v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp541v(char** __temp1317v, uint64_t* __temp1318v, uint16_t* __temp1319v, uint16_t* __temp1320v, uint64_t i, char** __temp1321v) {
  char* buffer__unsafe_ptr=*__temp1317v;
  uint64_t buffer__unsafe_size=*__temp1318v;
  uint16_t buffer__unsafe_offset=*__temp1319v;
  uint16_t buffer__unsafe_align=*__temp1320v;
  char __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  char* __temp547v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp542v__);
  if(__temp542v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp543v__);
  mul__temp194v(i,__temp543v__,&__temp544v__);
  nat__temp465v(buffer__unsafe_offset,&__temp545v__);
  add__temp170v(__temp544v__,__temp545v__,&__temp546v__);
  add__temp463v(buffer__unsafe_ptr,__temp546v__,&__temp547v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1317v=buffer__unsafe_ptr;
  *__temp1318v=buffer__unsafe_size;
  *__temp1319v=buffer__unsafe_offset;
  *__temp1320v=buffer__unsafe_align;
  *__temp1321v=__temp547v__;
  
  return __temp_errcode;
}

int push__temp579v(char** __temp1322v, uint64_t* __temp1323v, uint16_t* __temp1324v, uint16_t* __temp1325v, uint64_t* __temp1326v, char** __temp1327v) {
  char* l__buffer__unsafe_ptr=*__temp1322v;
  uint64_t l__buffer__unsafe_size=*__temp1323v;
  uint16_t l__buffer__unsafe_offset=*__temp1324v;
  uint16_t l__buffer__unsafe_align=*__temp1325v;
  uint64_t l__length=*__temp1326v;
  uint64_t prev_length=0;
  uint64_t __temp580v__=0;
  char __temp581v__=0;
  uint64_t __temp582v=0;
  uint64_t __temp583v__=0;
  uint64_t __temp584v=0;
  uint64_t __temp585v__=0;
  uint64_t __temp586v__=0;
  char* __temp587v__unsafe_ptr=0;
  uint64_t __temp587v__unsafe_size=0;
  uint16_t __temp587v__unsafe_offset=0;
  uint16_t __temp587v__unsafe_align=0;
  uint64_t __temp588v=0;
  uint64_t __temp589v__=0;
  char* __temp590v__=0;
  char* val=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  prev_length=l__length;
  len__temp555v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__temp580v__);
  ge__temp319v(prev_length,__temp580v__,&__temp581v__);
  if(__temp581v__){
  __temp582v=2;
  __temp_errcode=div__temp220v(prev_length,__temp582v,&__temp583v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp584v=1;
  add__temp170v(__temp583v__,__temp584v,&__temp585v__);
  add__temp170v(prev_length,__temp585v__,&__temp586v__);
  __temp_errcode=resize__temp507v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__temp586v__,&__temp587v__unsafe_ptr,&__temp587v__unsafe_size,&__temp587v__unsafe_offset,&__temp587v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  l__buffer__unsafe_ptr=__temp587v__unsafe_ptr;
  l__buffer__unsafe_size=__temp587v__unsafe_size;
  l__buffer__unsafe_offset=__temp587v__unsafe_offset;
  l__buffer__unsafe_align=__temp587v__unsafe_align;
  }
  __temp588v=1;
  add__temp170v(prev_length,__temp588v,&__temp589v__);
  l__length=__temp589v__;
  __temp_errcode=mutget__temp541v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__temp590v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  val=__temp590v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1322v=l__buffer__unsafe_ptr;
  *__temp1323v=l__buffer__unsafe_size;
  *__temp1324v=l__buffer__unsafe_offset;
  *__temp1325v=l__buffer__unsafe_align;
  *__temp1326v=l__length;
  *__temp1327v=val;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp576v(char** __temp1328v, uint64_t* __temp1329v, uint16_t* __temp1330v, uint16_t* __temp1331v, uint64_t* __temp1332v, uint64_t pos, char** __temp1333v) {
  char* l__buffer__unsafe_ptr=*__temp1328v;
  uint64_t l__buffer__unsafe_size=*__temp1329v;
  uint16_t l__buffer__unsafe_offset=*__temp1330v;
  uint16_t l__buffer__unsafe_align=*__temp1331v;
  uint64_t l__length=*__temp1332v;
  char __temp577v__=0;
  char* __temp578v__=0;
  char* ret=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp577v__);
  if(__temp577v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp541v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret=__temp578v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1328v=l__buffer__unsafe_ptr;
  *__temp1329v=l__buffer__unsafe_size;
  *__temp1330v=l__buffer__unsafe_offset;
  *__temp1331v=l__buffer__unsafe_align;
  *__temp1332v=l__length;
  *__temp1333v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1334v) {
  char __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  char* __temp554v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp549v__);
  if(__temp549v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp550v__);
  mul__temp194v(i,__temp550v__,&__temp551v__);
  nat__temp465v(buffer__unsafe_offset,&__temp552v__);
  add__temp170v(__temp551v__,__temp552v__,&__temp553v__);
  add__temp463v(buffer__unsafe_ptr,__temp553v__,&__temp554v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1334v=__temp554v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp573v(char** __temp1335v, uint64_t* __temp1336v, uint16_t* __temp1337v, uint16_t* __temp1338v, uint64_t* __temp1339v, uint64_t pos, char** __temp1340v) {
  char* l__buffer__unsafe_ptr=*__temp1335v;
  uint64_t l__buffer__unsafe_size=*__temp1336v;
  uint16_t l__buffer__unsafe_offset=*__temp1337v;
  uint16_t l__buffer__unsafe_align=*__temp1338v;
  uint64_t l__length=*__temp1339v;
  char __temp574v__=0;
  char* __temp575v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp574v__);
  if(__temp574v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  __temp_errcode=get__temp548v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__temp575v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1335v=l__buffer__unsafe_ptr;
  *__temp1336v=l__buffer__unsafe_size;
  *__temp1337v=l__buffer__unsafe_offset;
  *__temp1338v=l__buffer__unsafe_align;
  *__temp1339v=l__length;
  *__temp1340v=__temp575v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1246v() {
  char* __temp1249v__unsafe_ptr=0;
  uint64_t __temp1249v__unsafe_size=0;
  uint16_t __temp1249v__unsafe_offset=0;
  uint16_t __temp1249v__unsafe_align=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__buffer__unsafe_ptr=0;
  uint64_t __temp1251v__buffer__unsafe_size=0;
  uint16_t __temp1251v__buffer__unsafe_offset=0;
  uint16_t __temp1251v__buffer__unsafe_align=0;
  uint64_t __temp1251v__length=0;
  char __temp1252v____temp569v____temp470v__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __temp1253v__=0;
  double __temp1254v=0;
  char* __temp1255v__=0;
  double __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  uint64_t __temp1259v=0;
  char* __temp1260v__=0;
  double __temp1261v=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__=0;
  double __temp1264v__value=0;
  uint64_t __temp1266v=0;
  char* __temp1267v__=0;
  double __temp1268v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1247v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_offset,&__temp1249v__unsafe_align);
  __temp1250v__unsafe_ptr=__temp1249v__unsafe_ptr;
  __temp1250v__unsafe_size=__temp1249v__unsafe_size;
  __temp1250v__unsafe_offset=__temp1249v__unsafe_offset;
  __temp1250v__unsafe_align=__temp1249v__unsafe_align;
  __temp_errcode=list__temp563v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1251v__buffer__unsafe_ptr,&__temp1251v__buffer__unsafe_size,&__temp1251v__buffer__unsafe_offset,&__temp1251v__buffer__unsafe_align,&__temp1251v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=push__temp579v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,&__temp1253v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1254v=0.1;
  if(!__temp1253v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1253v__,&__temp1254v,8);
  __temp_errcode=push__temp579v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1256v=0.1;
  if(!__temp1255v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1255v__,&__temp1256v,8);
  __temp_errcode=push__temp579v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=0.1;
  if(!__temp1257v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1258v,8);
  __temp1259v=1;
  __temp_errcode=mutget__temp576v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,__temp1259v,&__temp1260v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1261v=0.2;
  if(!__temp1260v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1260v__,&__temp1261v,8);
  __temp1262v=0;
  __temp_errcode=get__temp573v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1263v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1264v__value,__temp1263v__,8);
  print__temp368v(__temp1264v__value);
  __temp1266v=1;
  __temp_errcode=get__temp573v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,__temp1266v,&__temp1267v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1267v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1268v__value,__temp1267v__,8);
  print__temp368v(__temp1268v__value);
  
  __temp_failure:exists__temp412v(__temp1251v__buffer__unsafe_ptr,&__temp1252v____temp569v____temp470v__);
  if(__temp1252v____temp569v____temp470v__){
  __temp1251v__buffer__unsafe_size=0;
  __temp1251v__buffer__unsafe_size=__temp1251v__buffer__unsafe_size;
  free__temp461v(&__temp1251v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1246v();return 0;}