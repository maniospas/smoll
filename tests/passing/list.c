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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1249v(char** __temp1272v, uint64_t* __temp1273v, uint16_t* __temp1274v, uint16_t* __temp1275v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1272v=unsafe_ptr;
  *__temp1273v=unsafe_size;
  *__temp1274v=unsafe_offset;
  *__temp1275v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1276v) {
  goto __temp_return;
  __temp_return:
  *__temp1276v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1277v) {
  int value=0;
  *__temp1277v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1278v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1278v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1279v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp95v__;
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1281v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1282v) {
  char* allocated=*__temp1282v;
  if(allocated){
  free(allocated);
  }
  *__temp1282v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1283v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1284v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1284v=value;
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

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1286v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1287v) {
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
  *__temp1287v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1288v, uint64_t* __temp1289v, uint16_t* __temp1290v, uint16_t* __temp1291v, uint64_t size, char** __temp1292v, uint64_t* __temp1293v, uint16_t* __temp1294v, uint16_t* __temp1295v) {
  char* buffer__unsafe_ptr=*__temp1288v;
  uint64_t buffer__unsafe_size=*__temp1289v;
  uint16_t buffer__unsafe_offset=*__temp1290v;
  uint16_t buffer__unsafe_align=*__temp1291v;
  int __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  char* __temp485v__unsafe_ptr=0;
  uint64_t __temp485v__unsafe_size=0;
  uint16_t __temp485v__unsafe_offset=0;
  uint16_t __temp485v__unsafe_align=0;
  uint64_t __temp486v=0;
  char __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t bytes=0;
  char* __temp490v__=0;
  uint64_t __temp491v=0;
  char* __temp493v__unsafe_ptr=0;
  uint64_t __temp493v__unsafe_size=0;
  uint16_t __temp493v__unsafe_offset=0;
  uint16_t __temp493v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp478v__);
  if(__temp478v__){
  __temp479v=0;
  neq__temp142v(size,__temp479v,&__temp480v__);
  if(__temp480v__){
  __temp481v=0;
  nat__temp470v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  zero__temp467v(buffer__unsafe_ptr,__temp481v,__temp483v__);
  }
  __temp485v__unsafe_ptr=buffer__unsafe_ptr;
  __temp485v__unsafe_size=buffer__unsafe_size;
  __temp485v__unsafe_offset=buffer__unsafe_offset;
  __temp485v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp486v=0;
  neq__temp142v(buffer__unsafe_size,__temp486v,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp488v__);
  mul__temp194v(__temp488v__,size,&__temp489v__);
  bytes=__temp489v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp490v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp490v__;
  __temp491v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp491v,bytes);
  __temp493v__unsafe_ptr=buffer__unsafe_ptr;
  __temp493v__unsafe_size=buffer__unsafe_size;
  __temp493v__unsafe_offset=buffer__unsafe_offset;
  __temp493v__unsafe_align=buffer__unsafe_align;
  __temp485v__unsafe_ptr=__temp493v__unsafe_ptr;
  __temp485v__unsafe_size=__temp493v__unsafe_size;
  __temp485v__unsafe_offset=__temp493v__unsafe_offset;
  __temp485v__unsafe_align=__temp493v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp485v__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  __temp485v__unsafe_size=0;
  __temp485v__unsafe_size=__temp485v__unsafe_size;
  __temp485v__unsafe_ptr=__temp485v__unsafe_ptr;
  free__temp466v(&__temp485v__unsafe_ptr);
  }
  __temp_return:
  *__temp1288v=buffer__unsafe_ptr;
  *__temp1289v=buffer__unsafe_size;
  *__temp1290v=buffer__unsafe_offset;
  *__temp1291v=buffer__unsafe_align;
  *__temp1292v=__temp485v__unsafe_ptr;
  *__temp1293v=__temp485v__unsafe_size;
  *__temp1294v=__temp485v__unsafe_offset;
  *__temp1295v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

int list__temp558v(char** __temp1296v, uint64_t* __temp1297v, uint16_t* __temp1298v, uint16_t* __temp1299v, char** __temp1300v, uint64_t* __temp1301v, uint16_t* __temp1302v, uint16_t* __temp1303v, uint64_t* __temp1304v) {
  char* buffer__unsafe_ptr=*__temp1296v;
  uint64_t buffer__unsafe_size=*__temp1297v;
  uint16_t buffer__unsafe_offset=*__temp1298v;
  uint16_t buffer__unsafe_align=*__temp1299v;
  uint64_t __temp559v=0;
  uint64_t __temp560v__=0;
  char __temp561v__=0;
  uint64_t __temp562v=0;
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint16_t __temp563v__unsafe_offset=0;
  uint16_t __temp563v__unsafe_align=0;
  char __temp564v____temp475v__=0;
  uint64_t __temp565v__=0;
  uint64_t __temp566v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp559v=0;
  len__temp557v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp560v__);
  eq__temp118v(__temp559v,__temp560v__,&__temp561v__);
  if(__temp561v__){
  __temp562v=1;
  __temp_errcode=alloc__temp473v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp562v,&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_offset,&__temp563v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp563v__unsafe_ptr;
  buffer__unsafe_size=__temp563v__unsafe_size;
  buffer__unsafe_offset=__temp563v__unsafe_offset;
  buffer__unsafe_align=__temp563v__unsafe_align;
  }
  len__temp557v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp565v__);
  __temp566v=__temp565v__;
  length=__temp566v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp564v____temp475v__);
  if(__temp564v____temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1296v=buffer__unsafe_ptr;
  *__temp1297v=buffer__unsafe_size;
  *__temp1298v=buffer__unsafe_offset;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=buffer__unsafe_ptr;
  *__temp1301v=buffer__unsafe_size;
  *__temp1302v=buffer__unsafe_offset;
  *__temp1303v=buffer__unsafe_align;
  *__temp1304v=length;
  
  return __temp_errcode;
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

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1306v) {
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
  *__temp1306v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1307v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1308v) {
  *__temp1308v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1309v) {
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
  *__temp1309v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1310v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1311v, uint64_t* __temp1312v, uint16_t* __temp1313v, uint16_t* __temp1314v, uint64_t size, char** __temp1315v, uint64_t* __temp1316v, uint16_t* __temp1317v, uint16_t* __temp1318v) {
  char* buffer__unsafe_ptr=*__temp1311v;
  uint64_t buffer__unsafe_size=*__temp1312v;
  uint16_t buffer__unsafe_offset=*__temp1313v;
  uint16_t buffer__unsafe_align=*__temp1314v;
  char __temp517v__=0;
  uint64_t __temp518v=0;
  char __temp519v__=0;
  uint64_t __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  uint64_t bytes=0;
  char* __temp524v__=0;
  char __temp525v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp517v__);
  if(__temp517v__){
  goto __temp_return;
  }
  __temp518v=0;
  eq__temp118v(buffer__unsafe_size,__temp518v,&__temp519v__);
  if(__temp519v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp520v__);
  mul__temp194v(buffer__unsafe_size,__temp520v__,&__temp521v__);
  prev_bytes=__temp521v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp522v__);
  mul__temp194v(__temp522v__,size,&__temp523v__);
  bytes=__temp523v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp524v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp524v__;
  lt__temp247v(prev_bytes,bytes,&__temp525v__);
  if(__temp525v__){
  zero__temp467v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1311v=buffer__unsafe_ptr;
  *__temp1312v=buffer__unsafe_size;
  *__temp1313v=buffer__unsafe_offset;
  *__temp1314v=buffer__unsafe_align;
  *__temp1315v=buffer__unsafe_ptr;
  *__temp1316v=buffer__unsafe_size;
  *__temp1317v=buffer__unsafe_offset;
  *__temp1318v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1319v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1319v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1320v, uint64_t* __temp1321v, uint16_t* __temp1322v, uint16_t* __temp1323v, uint64_t i, char** __temp1324v) {
  char* buffer__unsafe_ptr=*__temp1320v;
  uint64_t buffer__unsafe_size=*__temp1321v;
  uint16_t buffer__unsafe_offset=*__temp1322v;
  uint16_t buffer__unsafe_align=*__temp1323v;
  char __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  char* __temp549v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp544v__);
  if(__temp544v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp545v__);
  mul__temp194v(i,__temp545v__,&__temp546v__);
  nat__temp470v(buffer__unsafe_offset,&__temp547v__);
  add__temp170v(__temp546v__,__temp547v__,&__temp548v__);
  add__temp468v(buffer__unsafe_ptr,__temp548v__,&__temp549v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1320v=buffer__unsafe_ptr;
  *__temp1321v=buffer__unsafe_size;
  *__temp1322v=buffer__unsafe_offset;
  *__temp1323v=buffer__unsafe_align;
  *__temp1324v=__temp549v__;
  
  return __temp_errcode;
}

int push__temp574v(char** __temp1325v, uint64_t* __temp1326v, uint16_t* __temp1327v, uint16_t* __temp1328v, uint64_t* __temp1329v, char** __temp1330v) {
  char* l__buffer__unsafe_ptr=*__temp1325v;
  uint64_t l__buffer__unsafe_size=*__temp1326v;
  uint16_t l__buffer__unsafe_offset=*__temp1327v;
  uint16_t l__buffer__unsafe_align=*__temp1328v;
  uint64_t l__length=*__temp1329v;
  uint64_t prev_length=0;
  uint64_t __temp575v__=0;
  char __temp576v__=0;
  uint64_t __temp577v=0;
  uint64_t __temp578v__=0;
  uint64_t __temp579v=0;
  uint64_t __temp580v__=0;
  uint64_t __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__unsafe_size=0;
  uint16_t __temp582v__unsafe_offset=0;
  uint16_t __temp582v__unsafe_align=0;
  uint64_t __temp583v=0;
  uint64_t __temp584v__=0;
  char* __temp585v__=0;
  char* val=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  prev_length=l__length;
  len__temp557v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__temp575v__);
  ge__temp319v(prev_length,__temp575v__,&__temp576v__);
  if(__temp576v__){
  __temp577v=2;
  __temp_errcode=div__temp220v(prev_length,__temp577v,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp579v=1;
  add__temp170v(__temp578v__,__temp579v,&__temp580v__);
  add__temp170v(prev_length,__temp580v__,&__temp581v__);
  __temp_errcode=resize__temp516v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__temp581v__,&__temp582v__unsafe_ptr,&__temp582v__unsafe_size,&__temp582v__unsafe_offset,&__temp582v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  l__buffer__unsafe_ptr=__temp582v__unsafe_ptr;
  l__buffer__unsafe_size=__temp582v__unsafe_size;
  l__buffer__unsafe_offset=__temp582v__unsafe_offset;
  l__buffer__unsafe_align=__temp582v__unsafe_align;
  }
  __temp583v=1;
  add__temp170v(prev_length,__temp583v,&__temp584v__);
  l__length=__temp584v__;
  __temp_errcode=mutget__temp543v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__temp585v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  val=__temp585v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1325v=l__buffer__unsafe_ptr;
  *__temp1326v=l__buffer__unsafe_size;
  *__temp1327v=l__buffer__unsafe_offset;
  *__temp1328v=l__buffer__unsafe_align;
  *__temp1329v=l__length;
  *__temp1330v=val;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp571v(char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v, uint64_t* __temp1335v, uint64_t pos, char** __temp1336v) {
  char* l__buffer__unsafe_ptr=*__temp1331v;
  uint64_t l__buffer__unsafe_size=*__temp1332v;
  uint16_t l__buffer__unsafe_offset=*__temp1333v;
  uint16_t l__buffer__unsafe_align=*__temp1334v;
  uint64_t l__length=*__temp1335v;
  char __temp572v__=0;
  char* __temp573v__=0;
  char* ret=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp572v__);
  if(__temp572v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp543v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__temp573v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret=__temp573v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1331v=l__buffer__unsafe_ptr;
  *__temp1332v=l__buffer__unsafe_size;
  *__temp1333v=l__buffer__unsafe_offset;
  *__temp1334v=l__buffer__unsafe_align;
  *__temp1335v=l__length;
  *__temp1336v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1337v) {
  char __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  char* __temp556v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp551v__);
  if(__temp551v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp552v__);
  mul__temp194v(i,__temp552v__,&__temp553v__);
  nat__temp470v(buffer__unsafe_offset,&__temp554v__);
  add__temp170v(__temp553v__,__temp554v__,&__temp555v__);
  add__temp468v(buffer__unsafe_ptr,__temp555v__,&__temp556v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1337v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp568v(char** __temp1338v, uint64_t* __temp1339v, uint16_t* __temp1340v, uint16_t* __temp1341v, uint64_t* __temp1342v, uint64_t pos, char** __temp1343v) {
  char* l__buffer__unsafe_ptr=*__temp1338v;
  uint64_t l__buffer__unsafe_size=*__temp1339v;
  uint16_t l__buffer__unsafe_offset=*__temp1340v;
  uint16_t l__buffer__unsafe_align=*__temp1341v;
  uint64_t l__length=*__temp1342v;
  char __temp569v__=0;
  char* __temp570v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp569v__);
  if(__temp569v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp_errcode=get__temp550v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__temp570v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1338v=l__buffer__unsafe_ptr;
  *__temp1339v=l__buffer__unsafe_size;
  *__temp1340v=l__buffer__unsafe_offset;
  *__temp1341v=l__buffer__unsafe_align;
  *__temp1342v=l__length;
  *__temp1343v=__temp570v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1248v() {
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint16_t __temp1252v__unsafe_offset=0;
  uint16_t __temp1252v__unsafe_align=0;
  char* __temp1253v__buffer__unsafe_ptr=0;
  uint64_t __temp1253v__buffer__unsafe_size=0;
  uint16_t __temp1253v__buffer__unsafe_offset=0;
  uint16_t __temp1253v__buffer__unsafe_align=0;
  uint64_t __temp1253v__length=0;
  char __temp1254v____temp564v____temp475v__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __temp1255v__=0;
  double __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  char* __temp1259v__=0;
  double __temp1260v=0;
  uint64_t __temp1261v=0;
  char* __temp1262v__=0;
  double __temp1263v=0;
  uint64_t __temp1264v=0;
  char* __temp1265v__=0;
  double __temp1266v__value=0;
  uint64_t __temp1268v=0;
  char* __temp1269v__=0;
  double __temp1270v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_offset=__temp1251v__unsafe_offset;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp_errcode=list__temp558v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=push__temp574v(&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1256v=0.1;
  if(!__temp1255v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1255v__,&__temp1256v,8);
  __temp_errcode=push__temp574v(&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=0.1;
  if(!__temp1257v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1258v,8);
  __temp_errcode=push__temp574v(&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1260v=0.1;
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1259v__,&__temp1260v,8);
  __temp1261v=1;
  __temp_errcode=mutget__temp571v(&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1263v=0.2;
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1262v__,&__temp1263v,8);
  __temp1264v=0;
  __temp_errcode=get__temp568v(&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length,__temp1264v,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1265v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1266v__value,__temp1265v__,8);
  print__temp368v(__temp1266v__value);
  __temp1268v=1;
  __temp_errcode=get__temp568v(&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length,__temp1268v,&__temp1269v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1269v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1270v__value,__temp1269v__,8);
  print__temp368v(__temp1270v__value);
  
  __temp_failure:exists__temp412v(__temp1253v__buffer__unsafe_ptr,&__temp1254v____temp564v____temp475v__);
  if(__temp1254v____temp564v____temp475v__){
  __temp1253v__buffer__unsafe_size=0;
  __temp1253v__buffer__unsafe_size=__temp1253v__buffer__unsafe_size;
  __temp1253v__buffer__unsafe_ptr=__temp1253v__buffer__unsafe_ptr;
  free__temp466v(&__temp1253v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}