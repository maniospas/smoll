#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1214v="123";
const char* const __temp352v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1206v(char** __temp1220v, unsigned long long* __temp1221v, unsigned long long* __temp1222v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1220v=unsafe_ptr;
  *__temp1221v=unsafe_size;
  *__temp1222v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1223v) {
  *__temp1223v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1224v) {
  int value=0;
  *__temp1224v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1225v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1225v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1226v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1226v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1227v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1227v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1228v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1228v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1229v) {
  char* allocated=*__temp1229v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1229v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1230v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1231v) {
  char* allocated=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1231v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1232v, unsigned long long* __temp1233v, unsigned long long* __temp1234v, unsigned long long size, char** __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v) {
  char* buffer__unsafe_ptr=*__temp1232v;
  unsigned long long buffer__unsafe_size=*__temp1233v;
  unsigned long long buffer__unsafe_align=*__temp1234v;
  unsigned long long __temp435v=0;
  char __temp436v__=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
  unsigned long long __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  __temp_return:
  *__temp1232v=buffer__unsafe_ptr;
  *__temp1233v=buffer__unsafe_size;
  *__temp1234v=buffer__unsafe_align;
  *__temp1235v=buffer__unsafe_ptr;
  *__temp1236v=buffer__unsafe_size;
  *__temp1237v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp494v(char** __temp1241v, unsigned long long* __temp1242v, unsigned long long* __temp1243v, char** __temp1244v, unsigned long long* __temp1245v, unsigned long long* __temp1246v, unsigned long long* __temp1247v) {
  char* buffer__unsafe_ptr=*__temp1241v;
  unsigned long long buffer__unsafe_size=*__temp1242v;
  unsigned long long buffer__unsafe_align=*__temp1243v;
  unsigned long long __temp495v=0;
  unsigned long long __temp496v__=0;
  char __temp497v__=0;
  unsigned long long __temp498v=0;
  char* __temp499v__unsafe_ptr=0;
  unsigned long long __temp499v__unsafe_size=0;
  unsigned long long __temp499v__unsafe_align=0;
  unsigned long long __temp501v__=0;
  unsigned long long __temp502v=0;
  unsigned long long length=0;
  unsigned long long __temp1239v=0;
  char __temp1240v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp495v=0;
  len__temp486v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp496v__);
  eq__temp278v(__temp495v,__temp496v__,&__temp497v__);
  if(__temp497v__){
  __temp498v=1;
  __temp_errcode=alloc__temp434v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp498v,&__temp499v__unsafe_ptr,&__temp499v__unsafe_size,&__temp499v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp499v__unsafe_ptr;
  buffer__unsafe_size=__temp499v__unsafe_size;
  buffer__unsafe_align=__temp499v__unsafe_align;
  }
  len__temp486v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp501v__);
  __temp502v=__temp501v__;
  length=__temp502v;
  *__temp1241v=buffer__unsafe_ptr;
  *__temp1242v=buffer__unsafe_size;
  *__temp1243v=buffer__unsafe_align;
  *__temp1244v=buffer__unsafe_ptr;
  *__temp1245v=buffer__unsafe_size;
  *__temp1246v=buffer__unsafe_align;
  *__temp1247v=length;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1248v) {
  *__temp1248v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1249v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp427v__=0;
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
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  *__temp1249v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1250v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) int resize__temp451v(char** __temp1251v, unsigned long long* __temp1252v, unsigned long long* __temp1253v, unsigned long long size, char** __temp1254v, unsigned long long* __temp1255v, unsigned long long* __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1251v;
  unsigned long long buffer__unsafe_size=*__temp1252v;
  unsigned long long buffer__unsafe_align=*__temp1253v;
  char __temp452v__=0;
  unsigned long long __temp453v=0;
  char __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  char __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  char* __temp461v__=0;
  char __temp462v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp452v__);
  if(__temp452v__){
  goto __temp_return;
  }
  __temp453v=0;
  eq__temp278v(size,__temp453v,&__temp454v__);
  if(__temp454v__){
  __temp455v=0;
  buffer__unsafe_size=__temp455v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp457v=0;
  eq__temp278v(buffer__unsafe_size,__temp457v,&__temp458v__);
  if(__temp458v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp459v__);
  prev_bytes=__temp459v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp460v__);
  bytes=__temp460v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp461v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__;
  lt__temp182v(prev_bytes,bytes,&__temp462v__);
  if(__temp462v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(char** __temp1257v, unsigned long long* __temp1258v, unsigned long long* __temp1259v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1257v=unsafe_ptr;
  *__temp1258v=unsafe_size;
  *__temp1259v=unsafe_align;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1260v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1261v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1261v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1262v) {
  char __temp483v__=0;
  unsigned long long __temp484v__=0;
  char* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1262v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp524v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1263v, unsigned long long* __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v, unsigned long long* __temp1267v, char* __temp1268v) {
  *__temp1263v=buf__unsafe_ptr;
  *__temp1264v=buf__unsafe_size;
  *__temp1265v=buf__unsafe_align;
  *__temp1266v=dat__pos;
  *__temp1267v=dat__length;
  *__temp1268v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp534v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v, unsigned long long* __temp1273v, char* __temp1274v) {
  unsigned long long __temp535v=0;
  char __temp536v__=0;
  char* __temp537v__=0;
  char __temp538v__value=0;
  char first=0;
  char* __temp539v__buf__unsafe_ptr=0;
  unsigned long long __temp539v__buf__unsafe_size=0;
  unsigned long long __temp539v__buf__unsafe_align=0;
  unsigned long long __temp539v__dat__pos=0;
  unsigned long long __temp539v__dat__length=0;
  char __temp539v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp535v=0;
  neq__temp302v(length,__temp535v,&__temp536v__);
  if(__temp536v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp537v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp537v__){
  goto __temp_failure;
  }
  memcpy(&__temp538v__value,__temp537v__,1);
  first=__temp538v__value;
  }
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp539v__buf__unsafe_ptr,&__temp539v__buf__unsafe_size,&__temp539v__buf__unsafe_align,&__temp539v__dat__pos,&__temp539v__dat__length,&__temp539v__dat__first);
  *__temp1269v=__temp539v__buf__unsafe_ptr;
  *__temp1270v=__temp539v__buf__unsafe_size;
  *__temp1271v=__temp539v__buf__unsafe_align;
  *__temp1272v=__temp539v__dat__pos;
  *__temp1273v=__temp539v__dat__length;
  *__temp1274v=__temp539v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp540v(const char* c, char** __temp1276v, unsigned long long* __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, unsigned long long* __temp1280v, char* __temp1281v) {
  char* __temp541v__unsafe_ptr=0;
  unsigned long long __temp541v__unsafe_size=0;
  unsigned long long __temp541v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp542v=0;
  char* __temp543v__buf__unsafe_ptr=0;
  unsigned long long __temp543v__buf__unsafe_size=0;
  unsigned long long __temp543v__buf__unsafe_align=0;
  unsigned long long __temp543v__dat__pos=0;
  unsigned long long __temp543v__dat__length=0;
  char __temp543v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  buf__unsafe_ptr=__temp541v__unsafe_ptr;
  buf__unsafe_size=__temp541v__unsafe_size;
  buf__unsafe_align=__temp541v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp542v=0;
  __temp_errcode=str__temp534v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp542v,length,&__temp543v__buf__unsafe_ptr,&__temp543v__buf__unsafe_size,&__temp543v__buf__unsafe_align,&__temp543v__dat__pos,&__temp543v__dat__length,&__temp543v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1276v=__temp543v__buf__unsafe_ptr;
  *__temp1277v=__temp543v__buf__unsafe_size;
  *__temp1278v=__temp543v__buf__unsafe_align;
  *__temp1279v=__temp543v__dat__pos;
  *__temp1280v=__temp543v__dat__length;
  *__temp1281v=__temp543v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp544v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1282v) {
  *__temp1282v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1283v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void div__temp158v(unsigned long long x, unsigned long long y, unsigned long long* __temp1284v) {
  int __temp159v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp159v__);
  z=x/y;
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void str__temp533v(char* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1285v, unsigned long long* __temp1286v, unsigned long long* __temp1287v, unsigned long long* __temp1288v, unsigned long long* __temp1289v, char* __temp1290v) {
  *__temp1285v=other__buf__unsafe_ptr;
  *__temp1286v=other__buf__unsafe_size;
  *__temp1287v=other__buf__unsafe_align;
  *__temp1288v=other__dat__pos;
  *__temp1289v=other__dat__length;
  *__temp1290v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1291v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) int copy__temp665v(char** __temp1294v, unsigned long long* __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v, char* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1298v, unsigned long long* __temp1299v, unsigned long long* __temp1300v, unsigned long long* __temp1301v, unsigned long long* __temp1302v, char* __temp1303v) {
  char* buf__unsafe_ptr=*__temp1294v;
  unsigned long long buf__unsafe_size=*__temp1295v;
  unsigned long long buf__unsafe_align=*__temp1296v;
  unsigned long long pos=*__temp1297v;
  char* __temp666v__buf__unsafe_ptr=0;
  unsigned long long __temp666v__buf__unsafe_size=0;
  unsigned long long __temp666v__buf__unsafe_align=0;
  unsigned long long __temp666v__dat__pos=0;
  unsigned long long __temp666v__dat__length=0;
  char __temp666v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp667v__=0;
  unsigned long long __temp668v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp669v__=0;
  char __temp670v__=0;
  unsigned long long __temp671v=0;
  unsigned long long __temp672v__=0;
  unsigned long long prev_pos=0;
  char* __temp673v__buf__unsafe_ptr=0;
  unsigned long long __temp673v__buf__unsafe_size=0;
  unsigned long long __temp673v__buf__unsafe_align=0;
  unsigned long long __temp673v__dat__pos=0;
  unsigned long long __temp673v__dat__length=0;
  char __temp673v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp533v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp666v__buf__unsafe_ptr,&__temp666v__buf__unsafe_size,&__temp666v__buf__unsafe_align,&__temp666v__dat__pos,&__temp666v__dat__length,&__temp666v__dat__first);
  other__buf__unsafe_ptr=__temp666v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp666v__buf__unsafe_size;
  other__buf__unsafe_align=__temp666v__buf__unsafe_align;
  other__dat__pos=__temp666v__dat__pos;
  other__dat__length=__temp666v__dat__length;
  other__dat__first=__temp666v__dat__first;
  len__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp667v__);
  add__temp110v(pos,__temp667v__,&__temp668v__);
  next_pos=__temp668v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp669v__);
  gt__temp206v(next_pos,__temp669v__,&__temp670v__);
  if(__temp670v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__buf__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp671v=0;
  add__temp110v(pos,__temp671v,&__temp672v__);
  prev_pos=__temp672v__;
  pos=next_pos;
  str__temp524v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp673v__buf__unsafe_ptr,&__temp673v__buf__unsafe_size,&__temp673v__buf__unsafe_align,&__temp673v__dat__pos,&__temp673v__dat__length,&__temp673v__dat__first);
  *__temp1294v=buf__unsafe_ptr;
  *__temp1295v=buf__unsafe_size;
  *__temp1296v=buf__unsafe_align;
  *__temp1297v=pos;
  *__temp1298v=__temp673v__buf__unsafe_ptr;
  *__temp1299v=__temp673v__buf__unsafe_size;
  *__temp1300v=__temp673v__buf__unsafe_align;
  *__temp1301v=__temp673v__dat__pos;
  *__temp1302v=__temp673v__dat__length;
  *__temp1303v=__temp673v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp711v(char** __temp1307v, unsigned long long* __temp1308v, unsigned long long* __temp1309v, unsigned long long* __temp1310v, const char* _other, char** __temp1311v, unsigned long long* __temp1312v, unsigned long long* __temp1313v, unsigned long long* __temp1314v, unsigned long long* __temp1315v, char* __temp1316v) {
  char* li__buffer__unsafe_ptr=*__temp1307v;
  unsigned long long li__buffer__unsafe_size=*__temp1308v;
  unsigned long long li__buffer__unsafe_align=*__temp1309v;
  unsigned long long li__length=*__temp1310v;
  char* __temp712v__buf__unsafe_ptr=0;
  unsigned long long __temp712v__buf__unsafe_size=0;
  unsigned long long __temp712v__buf__unsafe_align=0;
  unsigned long long __temp712v__dat__pos=0;
  unsigned long long __temp712v__dat__length=0;
  char __temp712v__dat__first=0;
  char* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp713v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp714v__=0;
  unsigned long long __temp715v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp716v__=0;
  char __temp717v__=0;
  unsigned long long __temp718v=0;
  unsigned long long __temp719v__=0;
  unsigned long long __temp720v=0;
  unsigned long long __temp721v__=0;
  unsigned long long __temp722v__=0;
  char* __temp723v__unsafe_ptr=0;
  unsigned long long __temp723v__unsafe_size=0;
  unsigned long long __temp723v__unsafe_align=0;
  char* __temp724v__buf__unsafe_ptr=0;
  unsigned long long __temp724v__buf__unsafe_size=0;
  unsigned long long __temp724v__buf__unsafe_align=0;
  unsigned long long __temp724v__dat__pos=0;
  unsigned long long __temp724v__dat__length=0;
  char __temp724v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp540v(_other,&__temp712v__buf__unsafe_ptr,&__temp712v__buf__unsafe_size,&__temp712v__buf__unsafe_align,&__temp712v__dat__pos,&__temp712v__dat__length,&__temp712v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp712v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp712v__buf__unsafe_size;
  other__buf__unsafe_align=__temp712v__buf__unsafe_align;
  other__dat__pos=__temp712v__dat__pos;
  other__dat__length=__temp712v__dat__length;
  other__dat__first=__temp712v__dat__first;
  __temp713v=li__length;
  prev_prev_length=__temp713v;
  len__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp714v__);
  add__temp110v(li__length,__temp714v__,&__temp715v__);
  prev_length=__temp715v__;
  len__temp486v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp716v__);
  ge__temp254v(prev_length,__temp716v__,&__temp717v__);
  if(__temp717v__){
  __temp718v=2;
  div__temp158v(prev_length,__temp718v,&__temp719v__);
  __temp720v=1;
  add__temp110v(__temp719v__,__temp720v,&__temp721v__);
  add__temp110v(prev_length,__temp721v__,&__temp722v__);
  __temp_errcode=resize__temp451v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp722v__,&__temp723v__unsafe_ptr,&__temp723v__unsafe_size,&__temp723v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp723v__unsafe_ptr;
  li__buffer__unsafe_size=__temp723v__unsafe_size;
  li__buffer__unsafe_align=__temp723v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp665v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp724v__buf__unsafe_ptr,&__temp724v__buf__unsafe_size,&__temp724v__buf__unsafe_align,&__temp724v__dat__pos,&__temp724v__dat__length,&__temp724v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1307v=li__buffer__unsafe_ptr;
  *__temp1308v=li__buffer__unsafe_size;
  *__temp1309v=li__buffer__unsafe_align;
  *__temp1310v=li__length;
  *__temp1311v=__temp724v__buf__unsafe_ptr;
  *__temp1312v=__temp724v__buf__unsafe_size;
  *__temp1313v=__temp724v__buf__unsafe_align;
  *__temp1314v=__temp724v__dat__pos;
  *__temp1315v=__temp724v__dat__length;
  *__temp1316v=__temp724v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp700v(char* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp702v__=0;
  char __temp703v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp352v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp702v__);
  gt__temp206v(__temp702v__,s__buf__unsafe_size,&__temp703v__);
  if(__temp703v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",s__dat__length,s__dat__pos+s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1205v(char** __temp1326v, unsigned long long* __temp1327v, unsigned long long* __temp1328v, unsigned long long* __temp1329v, unsigned long long* __temp1330v, char* __temp1331v) {
  char* __temp1208v__unsafe_ptr=0;
  unsigned long long __temp1208v__unsafe_size=0;
  unsigned long long __temp1208v__unsafe_align=0;
  char* __temp1209v__unsafe_ptr=0;
  unsigned long long __temp1209v__unsafe_size=0;
  unsigned long long __temp1209v__unsafe_align=0;
  char* __temp1210v__buffer__unsafe_ptr=0;
  unsigned long long __temp1210v__buffer__unsafe_size=0;
  unsigned long long __temp1210v__buffer__unsafe_align=0;
  unsigned long long __temp1210v__length=0;
  unsigned long long __temp1212v=0;
  char* __temp1213v__unsafe_ptr=0;
  unsigned long long __temp1213v__unsafe_size=0;
  unsigned long long __temp1213v__unsafe_align=0;
  char* __temp1215v__buf__unsafe_ptr=0;
  unsigned long long __temp1215v__buf__unsafe_size=0;
  unsigned long long __temp1215v__buf__unsafe_align=0;
  unsigned long long __temp1215v__dat__pos=0;
  unsigned long long __temp1215v__dat__length=0;
  char __temp1215v__dat__first=0;
  char* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  unsigned long long __temp1321v=0;
  char __temp1322v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1206v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  __temp1209v__unsafe_ptr=__temp1208v__unsafe_ptr;
  __temp1209v__unsafe_size=__temp1208v__unsafe_size;
  __temp1209v__unsafe_align=__temp1208v__unsafe_align;
  __temp_errcode=list__temp494v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,&__temp1210v__buffer__unsafe_ptr,&__temp1210v__buffer__unsafe_size,&__temp1210v__buffer__unsafe_align,&__temp1210v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1212v=100;
  __temp_errcode=resize__temp451v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,__temp1212v,&__temp1213v__unsafe_ptr,&__temp1213v__unsafe_size,&__temp1213v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp711v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,&__temp1209v__unsafe_size,__temp1214v,&__temp1215v__buf__unsafe_ptr,&__temp1215v__buf__unsafe_size,&__temp1215v__buf__unsafe_align,&__temp1215v__dat__pos,&__temp1215v__dat__length,&__temp1215v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1215v__dat__pos;
  s1__dat__length=__temp1215v__dat__length;
  s1__dat__first=__temp1215v__dat__first;
  __temp_errcode=print__temp700v(__temp1209v__unsafe_ptr,__temp1209v__unsafe_size,__temp1209v__unsafe_align,s1__dat__pos,s1__dat__length,s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__buf__unsafe_ptr=__temp1209v__unsafe_ptr;
  s1__buf__unsafe_size=__temp1209v__unsafe_size;
  s1__buf__unsafe_align=__temp1209v__unsafe_align;
  *__temp1326v=s1__buf__unsafe_ptr;
  *__temp1327v=s1__buf__unsafe_size;
  *__temp1328v=s1__buf__unsafe_align;
  *__temp1329v=s1__dat__pos;
  *__temp1330v=s1__dat__length;
  *__temp1331v=s1__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1217v() {
  char* __temp1218v__buf__unsafe_ptr=0;
  unsigned long long __temp1218v__buf__unsafe_size=0;
  unsigned long long __temp1218v__buf__unsafe_align=0;
  unsigned long long __temp1218v__dat__pos=0;
  unsigned long long __temp1218v__dat__length=0;
  char __temp1218v__dat__first=0;
  char* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1334v=0;
  char __temp1335v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1205v(&__temp1218v__buf__unsafe_ptr,&__temp1218v__buf__unsafe_size,&__temp1218v__buf__unsafe_align,&__temp1218v__dat__pos,&__temp1218v__dat__length,&__temp1218v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1218v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1218v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1218v__buf__unsafe_align;
  s__dat__pos=__temp1218v__dat__pos;
  s__dat__length=__temp1218v__dat__length;
  s__dat__first=__temp1218v__dat__first;
  
  __temp_failure:__temp1334v=0;
  neq__temp302v(__temp1218v__buf__unsafe_size,__temp1334v,&__temp1335v);
  if(__temp1335v){
  __temp1218v__buf__unsafe_size=0;
  free__temp428v(&__temp1218v__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1217v();return 0;}