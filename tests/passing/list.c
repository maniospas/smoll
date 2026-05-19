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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1248v(char** __temp1271v, uint64_t* __temp1272v, uint16_t* __temp1273v, uint16_t* __temp1274v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1271v=unsafe_ptr;
  *__temp1272v=unsafe_size;
  *__temp1273v=unsafe_offset;
  *__temp1274v=unsafe_align;
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

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1279v) {
  char* allocated=*__temp1279v;
  if(allocated){
  free(allocated);
  }
  *__temp1279v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1280v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1281v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1281v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1282v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1283v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1284v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1285v) {
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
  *__temp1285v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1286v, uint64_t* __temp1287v, uint16_t* __temp1288v, uint16_t* __temp1289v, uint64_t size, char** __temp1290v, uint64_t* __temp1291v, uint16_t* __temp1292v, uint16_t* __temp1293v) {
  char* buffer__unsafe_ptr=*__temp1286v;
  uint64_t buffer__unsafe_size=*__temp1287v;
  uint16_t buffer__unsafe_offset=*__temp1288v;
  uint16_t buffer__unsafe_align=*__temp1289v;
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
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_offset;
  *__temp1289v=buffer__unsafe_align;
  *__temp1290v=__temp486v__unsafe_ptr;
  *__temp1291v=__temp486v__unsafe_size;
  *__temp1292v=__temp486v__unsafe_offset;
  *__temp1293v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1294v) {
  goto __temp_return;
  __temp_return:
  *__temp1294v=buffer__unsafe_size;
}

int list__temp560v(char** __temp1295v, uint64_t* __temp1296v, uint16_t* __temp1297v, uint16_t* __temp1298v, char** __temp1299v, uint64_t* __temp1300v, uint16_t* __temp1301v, uint16_t* __temp1302v, uint64_t* __temp1303v) {
  char* _buffer__unsafe_ptr=*__temp1295v;
  uint64_t _buffer__unsafe_size=*__temp1296v;
  uint16_t _buffer__unsafe_offset=*__temp1297v;
  uint16_t _buffer__unsafe_align=*__temp1298v;
  uint64_t __temp561v=0;
  char* __temp562v__unsafe_ptr=0;
  uint64_t __temp562v__unsafe_size=0;
  uint16_t __temp562v__unsafe_offset=0;
  uint16_t __temp562v__unsafe_align=0;
  uint64_t __temp563v____temp475v=0;
  char __temp563v____temp476v__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __temp564v__=0;
  uint64_t __temp565v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp561v=1;
  __temp_errcode=alloc__temp473v(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__temp561v,&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_offset,&__temp562v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp562v__unsafe_ptr;
  buffer__unsafe_size=__temp562v__unsafe_size;
  buffer__unsafe_offset=__temp562v__unsafe_offset;
  buffer__unsafe_align=__temp562v__unsafe_align;
  len__temp559v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp564v__);
  __temp565v=__temp564v__;
  length=__temp565v;
  goto __temp_return;
  
  __temp_failure:__temp563v____temp475v=0;
  neq__temp142v(buffer__unsafe_size,__temp563v____temp475v,&__temp563v____temp476v__);
  if(__temp563v____temp476v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1295v=_buffer__unsafe_ptr;
  *__temp1296v=_buffer__unsafe_size;
  *__temp1297v=_buffer__unsafe_offset;
  *__temp1298v=_buffer__unsafe_align;
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_offset;
  *__temp1302v=buffer__unsafe_align;
  *__temp1303v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1304v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1305v) {
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
  *__temp1305v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1306v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1307v) {
  *__temp1307v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1308v) {
  char* new_allocated=0;
  char __temp463v__=0;
  char __temp464v__=0;
  char* __temp465v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__temp412v(new_allocated,&__temp463v__);
  not__temp26v(__temp463v__,&__temp464v__);
  if(__temp464v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  allocated=new_allocated;
  attach_type__temp20v(new_allocated,allocated,&__temp465v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1308v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1309v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) int resize__temp518v(char** __temp1310v, uint64_t* __temp1311v, uint16_t* __temp1312v, uint16_t* __temp1313v, uint64_t size, char** __temp1314v, uint64_t* __temp1315v, uint16_t* __temp1316v, uint16_t* __temp1317v) {
  char* buffer__unsafe_ptr=*__temp1310v;
  uint64_t buffer__unsafe_size=*__temp1311v;
  uint16_t buffer__unsafe_offset=*__temp1312v;
  uint16_t buffer__unsafe_align=*__temp1313v;
  char __temp519v__=0;
  uint64_t __temp520v=0;
  char __temp521v__=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp524v__=0;
  uint64_t __temp525v__=0;
  uint64_t bytes=0;
  char* __temp526v__=0;
  char __temp527v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp519v__);
  if(__temp519v__){
  goto __temp_return;
  }
  __temp520v=0;
  eq__temp118v(buffer__unsafe_size,__temp520v,&__temp521v__);
  if(__temp521v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp522v__);
  mul__temp194v(buffer__unsafe_size,__temp522v__,&__temp523v__);
  prev_bytes=__temp523v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp524v__);
  mul__temp194v(__temp524v__,size,&__temp525v__);
  bytes=__temp525v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp526v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp526v__;
  lt__temp247v(prev_bytes,bytes,&__temp527v__);
  if(__temp527v__){
  zero__temp467v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1310v=buffer__unsafe_ptr;
  *__temp1311v=buffer__unsafe_size;
  *__temp1312v=buffer__unsafe_offset;
  *__temp1313v=buffer__unsafe_align;
  *__temp1314v=buffer__unsafe_ptr;
  *__temp1315v=buffer__unsafe_size;
  *__temp1316v=buffer__unsafe_offset;
  *__temp1317v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1318v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1318v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1319v, uint64_t* __temp1320v, uint16_t* __temp1321v, uint16_t* __temp1322v, uint64_t i, char** __temp1323v) {
  char* buffer__unsafe_ptr=*__temp1319v;
  uint64_t buffer__unsafe_size=*__temp1320v;
  uint16_t buffer__unsafe_offset=*__temp1321v;
  uint16_t buffer__unsafe_align=*__temp1322v;
  char __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  char* __temp551v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp546v__);
  if(__temp546v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp547v__);
  mul__temp194v(i,__temp547v__,&__temp548v__);
  nat__temp470v(buffer__unsafe_offset,&__temp549v__);
  add__temp170v(__temp548v__,__temp549v__,&__temp550v__);
  add__temp468v(buffer__unsafe_ptr,__temp550v__,&__temp551v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1319v=buffer__unsafe_ptr;
  *__temp1320v=buffer__unsafe_size;
  *__temp1321v=buffer__unsafe_offset;
  *__temp1322v=buffer__unsafe_align;
  *__temp1323v=__temp551v__;
  
  return __temp_errcode;
}

int push__temp573v(char** __temp1324v, uint64_t* __temp1325v, uint16_t* __temp1326v, uint16_t* __temp1327v, uint64_t* __temp1328v, char** __temp1329v) {
  char* l__buffer__unsafe_ptr=*__temp1324v;
  uint64_t l__buffer__unsafe_size=*__temp1325v;
  uint16_t l__buffer__unsafe_offset=*__temp1326v;
  uint16_t l__buffer__unsafe_align=*__temp1327v;
  uint64_t l__length=*__temp1328v;
  uint64_t prev_length=0;
  uint64_t __temp574v__=0;
  char __temp575v__=0;
  uint64_t __temp576v=0;
  uint64_t __temp577v__=0;
  uint64_t __temp578v=0;
  uint64_t __temp579v__=0;
  uint64_t __temp580v__=0;
  char* __temp581v__unsafe_ptr=0;
  uint64_t __temp581v__unsafe_size=0;
  uint16_t __temp581v__unsafe_offset=0;
  uint16_t __temp581v__unsafe_align=0;
  uint64_t __temp582v=0;
  uint64_t __temp583v__=0;
  char* __temp584v__=0;
  char* val=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  prev_length=l__length;
  len__temp559v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__temp574v__);
  ge__temp319v(prev_length,__temp574v__,&__temp575v__);
  if(__temp575v__){
  __temp576v=2;
  __temp_errcode=div__temp220v(prev_length,__temp576v,&__temp577v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp578v=1;
  add__temp170v(__temp577v__,__temp578v,&__temp579v__);
  add__temp170v(prev_length,__temp579v__,&__temp580v__);
  __temp_errcode=resize__temp518v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__temp580v__,&__temp581v__unsafe_ptr,&__temp581v__unsafe_size,&__temp581v__unsafe_offset,&__temp581v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  l__buffer__unsafe_ptr=__temp581v__unsafe_ptr;
  l__buffer__unsafe_size=__temp581v__unsafe_size;
  l__buffer__unsafe_offset=__temp581v__unsafe_offset;
  l__buffer__unsafe_align=__temp581v__unsafe_align;
  }
  __temp582v=1;
  add__temp170v(prev_length,__temp582v,&__temp583v__);
  l__length=__temp583v__;
  __temp_errcode=mutget__temp545v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__temp584v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  val=__temp584v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1324v=l__buffer__unsafe_ptr;
  *__temp1325v=l__buffer__unsafe_size;
  *__temp1326v=l__buffer__unsafe_offset;
  *__temp1327v=l__buffer__unsafe_align;
  *__temp1328v=l__length;
  *__temp1329v=val;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp570v(char** __temp1330v, uint64_t* __temp1331v, uint16_t* __temp1332v, uint16_t* __temp1333v, uint64_t* __temp1334v, uint64_t pos, char** __temp1335v) {
  char* l__buffer__unsafe_ptr=*__temp1330v;
  uint64_t l__buffer__unsafe_size=*__temp1331v;
  uint16_t l__buffer__unsafe_offset=*__temp1332v;
  uint16_t l__buffer__unsafe_align=*__temp1333v;
  uint64_t l__length=*__temp1334v;
  char __temp571v__=0;
  char* __temp572v__=0;
  char* ret=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp571v__);
  if(__temp571v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp545v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__temp572v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret=__temp572v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1330v=l__buffer__unsafe_ptr;
  *__temp1331v=l__buffer__unsafe_size;
  *__temp1332v=l__buffer__unsafe_offset;
  *__temp1333v=l__buffer__unsafe_align;
  *__temp1334v=l__length;
  *__temp1335v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1336v) {
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
  *__temp1336v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp567v(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __temp1337v) {
  char __temp568v__=0;
  char* __temp569v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp568v__);
  if(__temp568v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp_errcode=get__temp552v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__temp569v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1337v=__temp569v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1247v() {
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__buffer__unsafe_ptr=0;
  uint64_t __temp1252v__buffer__unsafe_size=0;
  uint16_t __temp1252v__buffer__unsafe_offset=0;
  uint16_t __temp1252v__buffer__unsafe_align=0;
  uint64_t __temp1252v__length=0;
  uint64_t __temp1253v____temp563v____temp475v=0;
  char __temp1253v____temp563v____temp476v__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __temp1254v__=0;
  double __temp1255v=0;
  char* __temp1256v__=0;
  double __temp1257v=0;
  char* __temp1258v__=0;
  double __temp1259v=0;
  uint64_t __temp1260v=0;
  char* __temp1261v__=0;
  double __temp1262v=0;
  uint64_t __temp1263v=0;
  char* __temp1264v__=0;
  double __temp1265v__value=0;
  uint64_t __temp1267v=0;
  char* __temp1268v__=0;
  double __temp1269v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1248v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_offset=__temp1250v__unsafe_offset;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  __temp_errcode=list__temp560v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=push__temp573v(&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=0.1;
  if(!__temp1254v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1254v__,&__temp1255v,8);
  __temp_errcode=push__temp573v(&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1257v=0.1;
  if(!__temp1256v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1256v__,&__temp1257v,8);
  __temp_errcode=push__temp573v(&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1259v=0.1;
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&__temp1259v,8);
  __temp1260v=1;
  __temp_errcode=mutget__temp570v(&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length,__temp1260v,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1262v=0.2;
  if(!__temp1261v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1261v__,&__temp1262v,8);
  __temp1263v=0;
  __temp_errcode=get__temp567v(__temp1252v__buffer__unsafe_ptr,__temp1252v__buffer__unsafe_size,__temp1252v__buffer__unsafe_offset,__temp1252v__buffer__unsafe_align,__temp1252v__length,__temp1263v,&__temp1264v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1264v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1265v__value,__temp1264v__,8);
  print__temp368v(__temp1265v__value);
  __temp1267v=1;
  __temp_errcode=get__temp567v(__temp1252v__buffer__unsafe_ptr,__temp1252v__buffer__unsafe_size,__temp1252v__buffer__unsafe_offset,__temp1252v__buffer__unsafe_align,__temp1252v__length,__temp1267v,&__temp1268v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1268v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1269v__value,__temp1268v__,8);
  print__temp368v(__temp1269v__value);
  
  __temp_failure:__temp1253v____temp563v____temp475v=0;
  neq__temp142v(__temp1252v__buffer__unsafe_size,__temp1253v____temp563v____temp475v,&__temp1253v____temp563v____temp476v__);
  if(__temp1253v____temp563v____temp476v__){
  __temp1252v__buffer__unsafe_size=0;
  __temp1252v__buffer__unsafe_size=__temp1252v__buffer__unsafe_size;
  __temp1252v__buffer__unsafe_ptr=__temp1252v__buffer__unsafe_ptr;
  free__temp466v(&__temp1252v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1247v();return 0;}