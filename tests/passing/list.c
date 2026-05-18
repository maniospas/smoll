#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
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

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1275v) {
  goto __temp_return;
  __temp_return:
  *__temp1275v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1276v) {
  int value=0;
  *__temp1276v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1277v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1277v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1278v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1278v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1279v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1280v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1281v) {
  char* allocated=*__temp1281v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1281v=allocated;
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

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1283v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1283v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1284v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1285v) {
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
  *__temp1285v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1286v, uint64_t* __temp1287v, uint16_t* __temp1288v, uint16_t* __temp1289v, uint64_t size, char** __temp1290v, uint64_t* __temp1291v, uint16_t* __temp1292v, uint16_t* __temp1293v) {
  char* buffer__unsafe_ptr=*__temp1286v;
  uint64_t buffer__unsafe_size=*__temp1287v;
  uint16_t buffer__unsafe_offset=*__temp1288v;
  uint16_t buffer__unsafe_align=*__temp1289v;
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
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_offset;
  *__temp1289v=buffer__unsafe_align;
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_offset;
  *__temp1293v=buffer__unsafe_align;
  
  return __temp_errcode;
}

int list__temp566v(char** __temp1294v, uint64_t* __temp1295v, uint16_t* __temp1296v, uint16_t* __temp1297v, char** __temp1298v, uint64_t* __temp1299v, uint16_t* __temp1300v, uint16_t* __temp1301v, uint64_t* __temp1302v) {
  char* buffer__unsafe_ptr=*__temp1294v;
  uint64_t buffer__unsafe_size=*__temp1295v;
  uint16_t buffer__unsafe_offset=*__temp1296v;
  uint16_t buffer__unsafe_align=*__temp1297v;
  uint64_t __temp567v=0;
  uint64_t __temp568v__=0;
  char __temp569v__=0;
  uint64_t __temp570v=0;
  char* __temp571v__unsafe_ptr=0;
  uint64_t __temp571v__unsafe_size=0;
  uint16_t __temp571v__unsafe_offset=0;
  uint16_t __temp571v__unsafe_align=0;
  char __temp572v____temp470v__=0;
  uint64_t __temp573v__=0;
  uint64_t __temp574v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp567v=0;
  len__temp558v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp568v__);
  eq__temp118v(__temp567v,__temp568v__,&__temp569v__);
  if(__temp569v__){
  __temp570v=1;
  __temp_errcode=alloc__temp468v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp570v,&__temp571v__unsafe_ptr,&__temp571v__unsafe_size,&__temp571v__unsafe_offset,&__temp571v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp571v__unsafe_ptr;
  buffer__unsafe_size=__temp571v__unsafe_size;
  buffer__unsafe_offset=__temp571v__unsafe_offset;
  buffer__unsafe_align=__temp571v__unsafe_align;
  }
  len__temp558v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp573v__);
  __temp574v=__temp573v__;
  length=__temp574v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp572v____temp470v__);
  if(__temp572v____temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1294v=buffer__unsafe_ptr;
  *__temp1295v=buffer__unsafe_size;
  *__temp1296v=buffer__unsafe_offset;
  *__temp1297v=buffer__unsafe_align;
  *__temp1298v=buffer__unsafe_ptr;
  *__temp1299v=buffer__unsafe_size;
  *__temp1300v=buffer__unsafe_offset;
  *__temp1301v=buffer__unsafe_align;
  *__temp1302v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1303v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1304v) {
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
  *__temp1304v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1305v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1306v) {
  *__temp1306v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1307v) {
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
  *__temp1307v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1308v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) int resize__temp507v(char** __temp1309v, uint64_t* __temp1310v, uint16_t* __temp1311v, uint16_t* __temp1312v, uint64_t size, char** __temp1313v, uint64_t* __temp1314v, uint16_t* __temp1315v, uint16_t* __temp1316v) {
  char* buffer__unsafe_ptr=*__temp1309v;
  uint64_t buffer__unsafe_size=*__temp1310v;
  uint16_t buffer__unsafe_offset=*__temp1311v;
  uint16_t buffer__unsafe_align=*__temp1312v;
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
  uint64_t __temp519v=0;
  char __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t __temp522v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp523v__=0;
  uint64_t __temp524v__=0;
  uint64_t bytes=0;
  char* __temp525v__=0;
  char __temp526v__=0;
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
  __temp519v=1;
  neq__temp142v(__temp518v__,__temp519v,&__temp520v__);
  if(__temp520v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp521v__);
  mul__temp194v(buffer__unsafe_size,__temp521v__,&__temp522v__);
  prev_bytes=__temp522v__;
  buffer__unsafe_size=size;
  nat__temp465v(buffer__unsafe_align,&__temp523v__);
  mul__temp194v(__temp523v__,size,&__temp524v__);
  bytes=__temp524v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp525v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp525v__;
  lt__temp247v(prev_bytes,bytes,&__temp526v__);
  if(__temp526v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1309v=buffer__unsafe_ptr;
  *__temp1310v=buffer__unsafe_size;
  *__temp1311v=buffer__unsafe_offset;
  *__temp1312v=buffer__unsafe_align;
  *__temp1313v=buffer__unsafe_ptr;
  *__temp1314v=buffer__unsafe_size;
  *__temp1315v=buffer__unsafe_offset;
  *__temp1316v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1317v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1317v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp544v(char** __temp1318v, uint64_t* __temp1319v, uint16_t* __temp1320v, uint16_t* __temp1321v, uint64_t i, char** __temp1322v) {
  char* buffer__unsafe_ptr=*__temp1318v;
  uint64_t buffer__unsafe_size=*__temp1319v;
  uint16_t buffer__unsafe_offset=*__temp1320v;
  uint16_t buffer__unsafe_align=*__temp1321v;
  char __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  char* __temp550v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp545v__);
  if(__temp545v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp546v__);
  mul__temp194v(i,__temp546v__,&__temp547v__);
  nat__temp465v(buffer__unsafe_offset,&__temp548v__);
  add__temp170v(__temp547v__,__temp548v__,&__temp549v__);
  add__temp463v(buffer__unsafe_ptr,__temp549v__,&__temp550v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1318v=buffer__unsafe_ptr;
  *__temp1319v=buffer__unsafe_size;
  *__temp1320v=buffer__unsafe_offset;
  *__temp1321v=buffer__unsafe_align;
  *__temp1322v=__temp550v__;
  
  return __temp_errcode;
}

int push__temp582v(char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v, uint64_t* __temp1327v, char** __temp1328v) {
  char* l__buffer__unsafe_ptr=*__temp1323v;
  uint64_t l__buffer__unsafe_size=*__temp1324v;
  uint16_t l__buffer__unsafe_offset=*__temp1325v;
  uint16_t l__buffer__unsafe_align=*__temp1326v;
  uint64_t l__length=*__temp1327v;
  uint64_t prev_length=0;
  uint64_t __temp583v__=0;
  char __temp584v__=0;
  uint64_t __temp585v=0;
  uint64_t __temp586v__=0;
  uint64_t __temp587v=0;
  uint64_t __temp588v__=0;
  uint64_t __temp589v__=0;
  char* __temp590v__unsafe_ptr=0;
  uint64_t __temp590v__unsafe_size=0;
  uint16_t __temp590v__unsafe_offset=0;
  uint16_t __temp590v__unsafe_align=0;
  uint64_t __temp591v=0;
  uint64_t __temp592v__=0;
  char* __temp593v__=0;
  char* val=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  prev_length=l__length;
  len__temp558v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__temp583v__);
  ge__temp319v(prev_length,__temp583v__,&__temp584v__);
  if(__temp584v__){
  __temp585v=2;
  __temp_errcode=div__temp220v(prev_length,__temp585v,&__temp586v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp587v=1;
  add__temp170v(__temp586v__,__temp587v,&__temp588v__);
  add__temp170v(prev_length,__temp588v__,&__temp589v__);
  __temp_errcode=resize__temp507v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__temp589v__,&__temp590v__unsafe_ptr,&__temp590v__unsafe_size,&__temp590v__unsafe_offset,&__temp590v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  l__buffer__unsafe_ptr=__temp590v__unsafe_ptr;
  l__buffer__unsafe_size=__temp590v__unsafe_size;
  l__buffer__unsafe_offset=__temp590v__unsafe_offset;
  l__buffer__unsafe_align=__temp590v__unsafe_align;
  }
  __temp591v=1;
  add__temp170v(prev_length,__temp591v,&__temp592v__);
  l__length=__temp592v__;
  __temp_errcode=mutget__temp544v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__temp593v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  val=__temp593v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1323v=l__buffer__unsafe_ptr;
  *__temp1324v=l__buffer__unsafe_size;
  *__temp1325v=l__buffer__unsafe_offset;
  *__temp1326v=l__buffer__unsafe_align;
  *__temp1327v=l__length;
  *__temp1328v=val;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp579v(char** __temp1329v, uint64_t* __temp1330v, uint16_t* __temp1331v, uint16_t* __temp1332v, uint64_t* __temp1333v, uint64_t pos, char** __temp1334v) {
  char* l__buffer__unsafe_ptr=*__temp1329v;
  uint64_t l__buffer__unsafe_size=*__temp1330v;
  uint16_t l__buffer__unsafe_offset=*__temp1331v;
  uint16_t l__buffer__unsafe_align=*__temp1332v;
  uint64_t l__length=*__temp1333v;
  char __temp580v__=0;
  char* __temp581v__=0;
  char* ret=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp580v__);
  if(__temp580v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp544v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__temp581v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret=__temp581v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1329v=l__buffer__unsafe_ptr;
  *__temp1330v=l__buffer__unsafe_size;
  *__temp1331v=l__buffer__unsafe_offset;
  *__temp1332v=l__buffer__unsafe_align;
  *__temp1333v=l__length;
  *__temp1334v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1335v) {
  char __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  char* __temp557v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp552v__);
  if(__temp552v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp553v__);
  mul__temp194v(i,__temp553v__,&__temp554v__);
  nat__temp465v(buffer__unsafe_offset,&__temp555v__);
  add__temp170v(__temp554v__,__temp555v__,&__temp556v__);
  add__temp463v(buffer__unsafe_ptr,__temp556v__,&__temp557v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1335v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp576v(char** __temp1336v, uint64_t* __temp1337v, uint16_t* __temp1338v, uint16_t* __temp1339v, uint64_t* __temp1340v, uint64_t pos, char** __temp1341v) {
  char* l__buffer__unsafe_ptr=*__temp1336v;
  uint64_t l__buffer__unsafe_size=*__temp1337v;
  uint16_t l__buffer__unsafe_offset=*__temp1338v;
  uint16_t l__buffer__unsafe_align=*__temp1339v;
  uint64_t l__length=*__temp1340v;
  char __temp577v__=0;
  char* __temp578v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(pos,l__length,&__temp577v__);
  if(__temp577v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp_errcode=get__temp551v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1336v=l__buffer__unsafe_ptr;
  *__temp1337v=l__buffer__unsafe_size;
  *__temp1338v=l__buffer__unsafe_offset;
  *__temp1339v=l__buffer__unsafe_align;
  *__temp1340v=l__length;
  *__temp1341v=__temp578v__;
  
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
  char __temp1253v____temp572v____temp470v__=0;
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
  __temp_errcode=list__temp566v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=push__temp582v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=0.1;
  if(!__temp1254v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1254v__,&__temp1255v,8);
  __temp_errcode=push__temp582v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1257v=0.1;
  if(!__temp1256v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1256v__,&__temp1257v,8);
  __temp_errcode=push__temp582v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,&__temp1258v__);
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
  __temp_errcode=mutget__temp579v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,__temp1260v,&__temp1261v__);
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
  __temp_errcode=get__temp576v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,__temp1263v,&__temp1264v__);
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
  __temp_errcode=get__temp576v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,__temp1267v,&__temp1268v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1268v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1269v__value,__temp1268v__,8);
  print__temp368v(__temp1269v__value);
  
  __temp_failure:exists__temp412v(__temp1252v__buffer__unsafe_ptr,&__temp1253v____temp572v____temp470v__);
  if(__temp1253v____temp572v____temp470v__){
  __temp1252v__buffer__unsafe_size=0;
  __temp1252v__buffer__unsafe_size=__temp1252v__buffer__unsafe_size;
  free__temp461v(&__temp1252v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1247v();return 0;}