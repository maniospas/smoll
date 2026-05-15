#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"vector exceeeds buffer limits",
"different vector sizes"
};

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1227v(char** __temp1706v, uint64_t* __temp1707v, uint64_t* __temp1708v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1706v=unsafe_ptr;
  *__temp1707v=unsafe_size;
  *__temp1708v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1709v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1709v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1710v) {
  char* allocated=*__temp1710v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1710v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1711v) {
  int value=0;
  *__temp1711v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1712v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1712v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(uint64_t x, uint64_t y, int* __temp1713v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1713v=__temp71v__;
}

static inline __attribute__((always_inline)) void eq__temp96v(uint64_t x, uint64_t y, char* __temp1714v) {
  int __temp97v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp97v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1714v=z;
}

static inline __attribute__((always_inline)) void neq__temp120v(uint64_t x, uint64_t y, char* __temp1715v) {
  int __temp121v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp121v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1715v=z;
}

static inline __attribute__((always_inline)) void mul__temp172v(uint64_t x, uint64_t y, uint64_t* __temp1716v) {
  int __temp173v__=0;
  uint64_t z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1716v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1717v) {
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
  *__temp1717v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1718v, uint64_t* __temp1719v, uint64_t* __temp1720v, uint64_t size, char** __temp1721v, uint64_t* __temp1722v, uint64_t* __temp1723v) {
  char* buffer__unsafe_ptr=*__temp1718v;
  uint64_t buffer__unsafe_size=*__temp1719v;
  uint64_t buffer__unsafe_align=*__temp1720v;
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
  eq__temp96v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp120v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp172v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp120v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp172v(buffer__unsafe_align,size,&__temp480v__);
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
  *__temp1718v=buffer__unsafe_ptr;
  *__temp1719v=buffer__unsafe_size;
  *__temp1720v=buffer__unsafe_align;
  *__temp1721v=buffer__unsafe_ptr;
  *__temp1722v=buffer__unsafe_size;
  *__temp1723v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1724v) {
  goto __temp_return;
  __temp_return:
  *__temp1724v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp225v(uint64_t x, uint64_t y, char* __temp1725v) {
  int __temp226v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp226v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1725v=z;
}

static inline __attribute__((always_inline)) int sub__temp321v(uint64_t x, uint64_t y, uint64_t* __temp1726v) {
  int __temp322v__=0;
  int __temp323v=0;
  int __temp324v=0;
  char __temp325v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp69v(x,y,&__temp322v__);
  lt__temp225v(x,y,&__temp325v__);
  if(__temp325v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1726v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp148v(uint64_t x, uint64_t y, uint64_t* __temp1727v) {
  int __temp149v__=0;
  uint64_t z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1727v=z;
}

static inline __attribute__((always_inline)) void circular__temp1226v(char** __temp1728v, uint64_t* __temp1729v, uint64_t* __temp1730v, uint64_t* __temp1731v, uint64_t length, char** __temp1732v, uint64_t* __temp1733v, uint64_t* __temp1734v, uint64_t* __temp1735v, uint64_t* __temp1736v) {
  char* buf__unsafe_ptr=*__temp1728v;
  uint64_t buf__unsafe_size=*__temp1729v;
  uint64_t buf__unsafe_align=*__temp1730v;
  uint64_t pos=*__temp1731v;
  goto __temp_return;
  __temp_return:
  *__temp1728v=buf__unsafe_ptr;
  *__temp1729v=buf__unsafe_size;
  *__temp1730v=buf__unsafe_align;
  *__temp1731v=pos;
  *__temp1732v=buf__unsafe_ptr;
  *__temp1733v=buf__unsafe_size;
  *__temp1734v=buf__unsafe_align;
  *__temp1735v=pos;
  *__temp1736v=length;
}

static inline __attribute__((always_inline)) int circular__temp1251v(char** __temp1737v, uint64_t* __temp1738v, uint64_t* __temp1739v, char** __temp1740v, uint64_t* __temp1741v, uint64_t* __temp1742v, uint64_t* __temp1743v, uint64_t* __temp1744v) {
  char* buf__unsafe_ptr=*__temp1737v;
  uint64_t buf__unsafe_size=*__temp1738v;
  uint64_t buf__unsafe_align=*__temp1739v;
  int __temp1252v=0;
  int __temp1253v=0;
  uint64_t __temp1254v=0;
  uint64_t __temp1255v=0;
  uint64_t pos=0;
  int __temp1256v=0;
  uint64_t __temp1257v__=0;
  uint64_t __temp1258v__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __temp1259v__=0;
  char* __temp1260v__buf__unsafe_ptr=0;
  uint64_t __temp1260v__buf__unsafe_size=0;
  uint64_t __temp1260v__buf__unsafe_align=0;
  uint64_t __temp1260v__pos=0;
  uint64_t __temp1260v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1254v=0;
  __temp1255v=__temp1254v;
  pos=__temp1255v;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp1257v__);
  __temp_errcode=sub__temp321v(__temp1257v__,pos,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1258v__;
  start=pos;
  add__temp148v(pos,length,&__temp1259v__);
  pos=__temp1259v__;
  circular__temp1226v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&start,length,&__temp1260v__buf__unsafe_ptr,&__temp1260v__buf__unsafe_size,&__temp1260v__buf__unsafe_align,&__temp1260v__pos,&__temp1260v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1737v=buf__unsafe_ptr;
  *__temp1738v=buf__unsafe_size;
  *__temp1739v=buf__unsafe_align;
  *__temp1740v=__temp1260v__buf__unsafe_ptr;
  *__temp1741v=__temp1260v__buf__unsafe_size;
  *__temp1742v=__temp1260v__buf__unsafe_align;
  *__temp1743v=__temp1260v__pos;
  *__temp1744v=__temp1260v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1222v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1261v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1745v, uint64_t* __temp1746v, uint64_t* __temp1747v) {
  goto __temp_return;
  __temp_return:
  *__temp1745v=unsafe_ptr;
  *__temp1746v=pos;
  *__temp1747v=length;
}

static inline __attribute__((always_inline)) int vec__temp1263v(uint64_t length, char** __temp1748v, uint64_t* __temp1749v, uint64_t* __temp1750v) {
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__unsafe_size=0;
  uint64_t __temp1264v__unsafe_align=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__unsafe_size=0;
  uint64_t __temp1265v__unsafe_align=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__unsafe_size=0;
  uint64_t __temp1266v__unsafe_align=0;
  char __temp1267v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t __temp1268v=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__pos=0;
  uint64_t __temp1269v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1227v(&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_align);
  __temp1265v__unsafe_ptr=__temp1264v__unsafe_ptr;
  __temp1265v__unsafe_size=__temp1264v__unsafe_size;
  __temp1265v__unsafe_align=__temp1264v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp1265v__unsafe_ptr,&__temp1265v__unsafe_size,&__temp1265v__unsafe_align,length,&__temp1266v__unsafe_ptr,&__temp1266v__unsafe_size,&__temp1266v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1266v__unsafe_ptr;
  buf__unsafe_size=__temp1266v__unsafe_size;
  buf__unsafe_align=__temp1266v__unsafe_align;
  __temp1268v=0;
  vec__temp1261v(buf__unsafe_ptr,__temp1268v,length,&__temp1269v__unsafe_ptr,&__temp1269v__pos,&__temp1269v__length);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1269v__unsafe_ptr,&__temp1267v____temp469v__);
  if(__temp1267v____temp469v__){
  __temp1266v__unsafe_size=0;
  __temp1266v__unsafe_size=__temp1266v__unsafe_size;
  free__temp461v(&__temp1269v__unsafe_ptr);
  }
  __temp_return:
  *__temp1748v=__temp1269v__unsafe_ptr;
  *__temp1749v=__temp1269v__pos;
  *__temp1750v=__temp1269v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1751v) {
  *__temp1751v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1752v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1752v=__temp464v__;
}

static inline __attribute__((always_inline)) void mutget__temp1289v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1753v) {
  uint64_t __temp1290v=0;
  uint64_t __temp1291v__=0;
  uint64_t __temp1292v__=0;
  char* __temp1293v__=0;
  __temp1290v=8;
  add__temp148v(i,v__pos,&__temp1291v__);
  mul__temp172v(__temp1290v,__temp1291v__,&__temp1292v__);
  add__temp463v(v__unsafe_ptr,__temp1292v__,&__temp1293v__);
  goto __temp_return;
  __temp_return:
  *__temp1753v=__temp1293v__;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1754v, uint64_t* __temp1755v) {
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
  *__temp1754v=from;
  *__temp1755v=to;
}

static inline __attribute__((always_inline)) void gt__temp249v(uint64_t x, uint64_t y, char* __temp1756v) {
  int __temp250v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp250v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1756v=z;
}

static inline __attribute__((always_inline)) void ge__temp297v(uint64_t x, uint64_t y, char* __temp1757v) {
  int __temp298v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp298v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) int vec__temp1278v(char** __temp1758v, uint64_t* __temp1759v, uint64_t* __temp1760v, uint64_t* __temp1761v, uint64_t allocator__length, uint64_t length, char** __temp1762v, uint64_t* __temp1763v, uint64_t* __temp1764v) {
  char* allocator__buf__unsafe_ptr=*__temp1758v;
  uint64_t allocator__buf__unsafe_size=*__temp1759v;
  uint64_t allocator__buf__unsafe_align=*__temp1760v;
  uint64_t allocator__pos=*__temp1761v;
  uint64_t __temp1279v=0;
  char __temp1280v__=0;
  uint64_t __temp1281v__=0;
  char __temp1282v__=0;
  uint64_t __temp1283v=0;
  uint64_t start=0;
  uint64_t __temp1284v__=0;
  char __temp1285v__=0;
  uint64_t __temp1286v=0;
  char* __temp1287v__unsafe_ptr=0;
  uint64_t __temp1287v__pos=0;
  uint64_t __temp1287v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1279v=8;
  neq__temp120v(allocator__buf__unsafe_align,__temp1279v,&__temp1280v__);
  if(__temp1280v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  len__temp537v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_align,&__temp1281v__);
  gt__temp249v(length,__temp1281v__,&__temp1282v__);
  if(__temp1282v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  __temp1283v=allocator__pos;
  start=__temp1283v;
  add__temp148v(allocator__pos,length,&__temp1284v__);
  allocator__pos=__temp1284v__;
  ge__temp297v(allocator__pos,allocator__length,&__temp1285v__);
  if(__temp1285v__){
  allocator__pos=length;
  __temp1286v=0;
  start=__temp1286v;
  }
  vec__temp1261v(allocator__buf__unsafe_ptr,start,length,&__temp1287v__unsafe_ptr,&__temp1287v__pos,&__temp1287v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1758v=allocator__buf__unsafe_ptr;
  *__temp1759v=allocator__buf__unsafe_size;
  *__temp1760v=allocator__buf__unsafe_align;
  *__temp1761v=allocator__pos;
  *__temp1762v=__temp1287v__unsafe_ptr;
  *__temp1763v=__temp1287v__pos;
  *__temp1764v=__temp1287v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1765v, uint64_t r__to, uint64_t* __temp1766v) {
  uint64_t r__from=*__temp1765v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp297v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp148v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1765v=r__from;
  *__temp1766v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1294v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1767v) {
  uint64_t __temp1295v=0;
  uint64_t __temp1296v__=0;
  uint64_t __temp1297v__=0;
  char* __temp1298v__=0;
  __temp1295v=8;
  add__temp148v(i,v__pos,&__temp1296v__);
  mul__temp172v(__temp1295v,__temp1296v__,&__temp1297v__);
  add__temp463v(v__unsafe_ptr,__temp1297v__,&__temp1298v__);
  goto __temp_return;
  __temp_return:
  *__temp1767v=__temp1298v__;
}

static inline __attribute__((always_inline)) int at__temp1300v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1768v) {
  char* __temp1301v__=0;
  double __temp1302v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1294v(v__unsafe_ptr,v__pos,v__length,i,&__temp1301v__);
  if(!__temp1301v__){
  goto __temp_failure;
  }
  memcpy(&__temp1302v__z,__temp1301v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1768v=__temp1302v__z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp81v(double x, double y, int* __temp1769v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1769v=__temp83v__;
}

static inline __attribute__((always_inline)) void add__temp159v(double x, double y, double* __temp1770v) {
  int __temp160v__=0;
  double z=0;
  is_different__temp81v(x,y,&__temp160v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1770v=z;
}

int add__temp1339v(char** __temp1771v, uint64_t* __temp1772v, uint64_t* __temp1773v, uint64_t* __temp1774v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1775v, uint64_t* __temp1776v, uint64_t* __temp1777v) {
  char* allocator__buf__unsafe_ptr=*__temp1771v;
  uint64_t allocator__buf__unsafe_size=*__temp1772v;
  uint64_t allocator__buf__unsafe_align=*__temp1773v;
  uint64_t allocator__pos=*__temp1774v;
  int __temp1340v=0;
  char __temp1341v__=0;
  char* __temp1342v__unsafe_ptr=0;
  uint64_t __temp1342v__pos=0;
  uint64_t __temp1342v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1343v__from=0;
  uint64_t __temp1343v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1344v=0;
  uint64_t __temp1345v__=0;
  uint64_t i=0;
  char* __temp1346v__=0;
  char* __temp1347v__=0;
  double __temp1348v__z=0;
  double __temp1349v__=0;
  double __temp1350v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp120v(v1__length,v2__length,&__temp1341v__);
  if(__temp1341v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1278v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1342v__unsafe_ptr,&__temp1342v__pos,&__temp1342v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1342v__unsafe_ptr;
  v__pos=__temp1342v__pos;
  v__length=__temp1342v__length;
  range__temp435v(v1__length,&__temp1343v__from,&__temp1343v__to);
  it__from=__temp1343v__from;
  it__to=__temp1343v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1345v__);
  __temp1344v=__temp_complain;
  i=__temp1345v__;
  __temp1344v=__temp1344v==0;
  if(!__temp1344v){
  break;
  }
  mutget__temp1289v(v__unsafe_ptr,v__pos,v__length,i,&__temp1346v__);
  get__temp1294v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1347v__);
  if(!__temp1347v__){
  goto __temp_failure;
  }
  memcpy(&__temp1348v__z,__temp1347v__,8);
  __temp_errcode=at__temp1300v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1349v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp159v(__temp1348v__z,__temp1349v__,&__temp1350v__);
  if(!__temp1346v__){
  goto __temp_failure;
  }
  memcpy(__temp1346v__,&__temp1350v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1771v=allocator__buf__unsafe_ptr;
  *__temp1772v=allocator__buf__unsafe_size;
  *__temp1773v=allocator__buf__unsafe_align;
  *__temp1774v=allocator__pos;
  *__temp1775v=v__unsafe_ptr;
  *__temp1776v=v__pos;
  *__temp1777v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1299v(double number, uint64_t i, double* __temp1778v) {
  goto __temp_return;
  __temp_return:
  *__temp1778v=number;
}

static inline __attribute__((always_inline)) void mul__temp183v(double x, double y, double* __temp1779v) {
  int __temp184v__=0;
  double z=0;
  is_different__temp81v(x,y,&__temp184v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1779v=z;
}

static inline __attribute__((always_inline)) int mul__temp1505v(char** __temp1780v, uint64_t* __temp1781v, uint64_t* __temp1782v, uint64_t* __temp1783v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1784v, uint64_t* __temp1785v, uint64_t* __temp1786v) {
  char* allocator__buf__unsafe_ptr=*__temp1780v;
  uint64_t allocator__buf__unsafe_size=*__temp1781v;
  uint64_t allocator__buf__unsafe_align=*__temp1782v;
  uint64_t allocator__pos=*__temp1783v;
  int __temp1506v=0;
  char* __temp1507v__unsafe_ptr=0;
  uint64_t __temp1507v__pos=0;
  uint64_t __temp1507v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1508v__from=0;
  uint64_t __temp1508v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1509v=0;
  uint64_t __temp1510v__=0;
  uint64_t i=0;
  char* __temp1511v__=0;
  char* __temp1512v__=0;
  double __temp1513v__z=0;
  double __temp1514v__=0;
  double __temp1515v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1278v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1507v__unsafe_ptr,&__temp1507v__pos,&__temp1507v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1507v__unsafe_ptr;
  v__pos=__temp1507v__pos;
  v__length=__temp1507v__length;
  range__temp435v(v1__length,&__temp1508v__from,&__temp1508v__to);
  it__from=__temp1508v__from;
  it__to=__temp1508v__to;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1510v__);
  __temp1509v=__temp_complain;
  i=__temp1510v__;
  __temp1509v=__temp1509v==0;
  if(!__temp1509v){
  break;
  }
  mutget__temp1289v(v__unsafe_ptr,v__pos,v__length,i,&__temp1511v__);
  get__temp1294v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1512v__);
  if(!__temp1512v__){
  goto __temp_failure;
  }
  memcpy(&__temp1513v__z,__temp1512v__,8);
  at__temp1299v(v2,i,&__temp1514v__);
  mul__temp183v(__temp1513v__z,__temp1514v__,&__temp1515v__);
  if(!__temp1511v__){
  goto __temp_failure;
  }
  memcpy(__temp1511v__,&__temp1515v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1780v=allocator__buf__unsafe_ptr;
  *__temp1781v=allocator__buf__unsafe_size;
  *__temp1782v=allocator__buf__unsafe_align;
  *__temp1783v=allocator__pos;
  *__temp1784v=v__unsafe_ptr;
  *__temp1785v=v__pos;
  *__temp1786v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1554v(char** __temp1787v, uint64_t* __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1791v, uint64_t* __temp1792v, uint64_t* __temp1793v) {
  char* allocator__buf__unsafe_ptr=*__temp1787v;
  uint64_t allocator__buf__unsafe_size=*__temp1788v;
  uint64_t allocator__buf__unsafe_align=*__temp1789v;
  uint64_t allocator__pos=*__temp1790v;
  char* __temp1555v__unsafe_ptr=0;
  uint64_t __temp1555v__pos=0;
  uint64_t __temp1555v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1505v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1555v__unsafe_ptr,&__temp1555v__pos,&__temp1555v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1787v=allocator__buf__unsafe_ptr;
  *__temp1788v=allocator__buf__unsafe_size;
  *__temp1789v=allocator__buf__unsafe_align;
  *__temp1790v=allocator__pos;
  *__temp1791v=__temp1555v__unsafe_ptr;
  *__temp1792v=__temp1555v__pos;
  *__temp1793v=__temp1555v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1657v() {
  char* __temp1658v__unsafe_ptr=0;
  uint64_t __temp1658v__unsafe_size=0;
  uint64_t __temp1658v__unsafe_align=0;
  char* __temp1659v__unsafe_ptr=0;
  uint64_t __temp1659v__unsafe_size=0;
  uint64_t __temp1659v__unsafe_align=0;
  uint64_t __temp1660v=0;
  char* __temp1661v__unsafe_ptr=0;
  uint64_t __temp1661v__unsafe_size=0;
  uint64_t __temp1661v__unsafe_align=0;
  char __temp1662v____temp469v__=0;
  char* __temp1663v__buf__unsafe_ptr=0;
  uint64_t __temp1663v__buf__unsafe_size=0;
  uint64_t __temp1663v__buf__unsafe_align=0;
  uint64_t __temp1663v__pos=0;
  uint64_t __temp1663v__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint64_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __temp1664v__unsafe_ptr=0;
  uint64_t __temp1664v__unsafe_size=0;
  uint64_t __temp1664v__unsafe_align=0;
  char* __temp1665v__unsafe_ptr=0;
  uint64_t __temp1665v__unsafe_size=0;
  uint64_t __temp1665v__unsafe_align=0;
  uint64_t __temp1666v=0;
  char* __temp1667v__unsafe_ptr=0;
  uint64_t __temp1667v__unsafe_size=0;
  uint64_t __temp1667v__unsafe_align=0;
  char __temp1668v____temp469v__=0;
  char* __temp1669v__buf__unsafe_ptr=0;
  uint64_t __temp1669v__buf__unsafe_size=0;
  uint64_t __temp1669v__buf__unsafe_align=0;
  uint64_t __temp1669v__pos=0;
  uint64_t __temp1669v__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint64_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __temp1671v=0;
  char* __temp1672v__unsafe_ptr=0;
  uint64_t __temp1672v__pos=0;
  uint64_t __temp1672v__length=0;
  char __temp1673v____temp1267v____temp469v__=0;
  uint64_t __temp1673v____temp1266v__unsafe_size=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1675v=0;
  char* __temp1676v__unsafe_ptr=0;
  uint64_t __temp1676v__pos=0;
  uint64_t __temp1676v__length=0;
  char __temp1677v____temp1267v____temp469v__=0;
  uint64_t __temp1677v____temp1266v__unsafe_size=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1678v=0;
  char* __temp1679v__=0;
  double __temp1680v=0;
  uint64_t __temp1681v=0;
  char* __temp1682v__=0;
  double __temp1683v=0;
  uint64_t __temp1684v=0;
  uint64_t __temp1685v__from=0;
  uint64_t __temp1685v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1686v=0;
  char* __temp1687v__unsafe_ptr=0;
  uint64_t __temp1687v__pos=0;
  uint64_t __temp1687v__length=0;
  char* __temp1688v__unsafe_ptr=0;
  uint64_t __temp1688v__pos=0;
  uint64_t __temp1688v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1689v=0;
  uint64_t __temp1690v__=0;
  uint64_t i=0;
  double __temp1691v=0;
  char* __temp1692v__unsafe_ptr=0;
  uint64_t __temp1692v__pos=0;
  uint64_t __temp1692v__length=0;
  char* __temp1693v__unsafe_ptr=0;
  uint64_t __temp1693v__pos=0;
  uint64_t __temp1693v__length=0;
  char* __temp1694v__unsafe_ptr=0;
  uint64_t __temp1694v__pos=0;
  uint64_t __temp1694v__length=0;
  uint64_t __temp1695v=0;
  char* __temp1696v__=0;
  double __temp1697v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1227v(&__temp1658v__unsafe_ptr,&__temp1658v__unsafe_size,&__temp1658v__unsafe_align);
  __temp1659v__unsafe_ptr=__temp1658v__unsafe_ptr;
  __temp1659v__unsafe_size=__temp1658v__unsafe_size;
  __temp1659v__unsafe_align=__temp1658v__unsafe_align;
  __temp1660v=200;
  __temp_errcode=alloc__temp467v(&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align,__temp1660v,&__temp1661v__unsafe_ptr,&__temp1661v__unsafe_size,&__temp1661v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1251v(&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align,&__temp1663v__buf__unsafe_ptr,&__temp1663v__buf__unsafe_size,&__temp1663v__buf__unsafe_align,&__temp1663v__pos,&__temp1663v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator__pos=__temp1663v__pos;
  allocator__length=__temp1663v__length;
  float____temp_buffer____buffer__temp1227v(&__temp1664v__unsafe_ptr,&__temp1664v__unsafe_size,&__temp1664v__unsafe_align);
  __temp1665v__unsafe_ptr=__temp1664v__unsafe_ptr;
  __temp1665v__unsafe_size=__temp1664v__unsafe_size;
  __temp1665v__unsafe_align=__temp1664v__unsafe_align;
  __temp1666v=200;
  __temp_errcode=alloc__temp467v(&__temp1665v__unsafe_ptr,&__temp1665v__unsafe_size,&__temp1665v__unsafe_align,__temp1666v,&__temp1667v__unsafe_ptr,&__temp1667v__unsafe_size,&__temp1667v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1251v(&__temp1665v__unsafe_ptr,&__temp1665v__unsafe_size,&__temp1665v__unsafe_align,&__temp1669v__buf__unsafe_ptr,&__temp1669v__buf__unsafe_size,&__temp1669v__buf__unsafe_align,&__temp1669v__pos,&__temp1669v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator2__pos=__temp1669v__pos;
  allocator2__length=__temp1669v__length;
  new__temp1222v();
  __temp1671v=10;
  __temp_errcode=vec__temp1263v(__temp1671v,&__temp1672v__unsafe_ptr,&__temp1672v__pos,&__temp1672v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1672v__unsafe_ptr;
  v1__pos=__temp1672v__pos;
  v1__length=__temp1672v__length;
  new__temp1222v();
  __temp1675v=10;
  __temp_errcode=vec__temp1263v(__temp1675v,&__temp1676v__unsafe_ptr,&__temp1676v__pos,&__temp1676v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1676v__unsafe_ptr;
  v2__pos=__temp1676v__pos;
  v2__length=__temp1676v__length;
  __temp1678v=0;
  mutget__temp1289v(v1__unsafe_ptr,v1__pos,v1__length,__temp1678v,&__temp1679v__);
  __temp1680v=1.0;
  if(!__temp1679v__){
  goto __temp_failure;
  }
  memcpy(__temp1679v__,&__temp1680v,8);
  __temp1681v=0;
  mutget__temp1289v(v2__unsafe_ptr,v2__pos,v2__length,__temp1681v,&__temp1682v__);
  __temp1683v=2.0;
  if(!__temp1682v__){
  goto __temp_failure;
  }
  memcpy(__temp1682v__,&__temp1683v,8);
  __temp1684v=5;
  range__temp435v(__temp1684v,&__temp1685v__from,&__temp1685v__to);
  it__from=__temp1685v__from;
  it__to=__temp1685v__to;
  __temp1686v=10;
  __temp_errcode=vec__temp1278v(&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align,&allocator__pos,allocator__length,__temp1686v,&__temp1687v__unsafe_ptr,&__temp1687v__pos,&__temp1687v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1688v__pos=__temp1687v__pos;
  __temp1688v__length=__temp1687v__length;
  v__pos=__temp1688v__pos;
  v__length=__temp1688v__length;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1690v__);
  __temp1689v=__temp_complain;
  i=__temp1690v__;
  __temp1689v=__temp1689v==0;
  if(!__temp1689v){
  break;
  }
  __temp1691v=2.0;
  __temp_errcode=add__temp1339v(&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1659v__unsafe_ptr,v__pos,v__length,&__temp1692v__unsafe_ptr,&__temp1692v__pos,&__temp1692v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1339v(&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align,&allocator__pos,allocator__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1659v__unsafe_ptr,__temp1692v__pos,__temp1692v__length,&__temp1693v__unsafe_ptr,&__temp1693v__pos,&__temp1693v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1554v(&__temp1659v__unsafe_ptr,&__temp1659v__unsafe_size,&__temp1659v__unsafe_align,&allocator__pos,allocator__length,__temp1691v,__temp1659v__unsafe_ptr,__temp1693v__pos,__temp1693v__length,&__temp1694v__unsafe_ptr,&__temp1694v__pos,&__temp1694v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1694v__pos;
  v__length=__temp1694v__length;
  }
  __temp1695v=0;
  get__temp1294v(__temp1659v__unsafe_ptr,v__pos,v__length,__temp1695v,&__temp1696v__);
  if(!__temp1696v__){
  goto __temp_failure;
  }
  memcpy(&__temp1697v__z,__temp1696v__,8);
  print__temp366v(__temp1697v__z);
  
  __temp_failure:exists__temp412v(__temp1676v__unsafe_ptr,&__temp1677v____temp1267v____temp469v__);
  if(__temp1677v____temp1267v____temp469v__){
  __temp1677v____temp1266v__unsafe_size=0;
  __temp1677v____temp1266v__unsafe_size=__temp1677v____temp1266v__unsafe_size;
  free__temp461v(&__temp1676v__unsafe_ptr);
  }
  exists__temp412v(__temp1672v__unsafe_ptr,&__temp1673v____temp1267v____temp469v__);
  if(__temp1673v____temp1267v____temp469v__){
  __temp1673v____temp1266v__unsafe_size=0;
  __temp1673v____temp1266v__unsafe_size=__temp1673v____temp1266v__unsafe_size;
  free__temp461v(&__temp1672v__unsafe_ptr);
  }
  exists__temp412v(__temp1667v__unsafe_ptr,&__temp1668v____temp469v__);
  if(__temp1668v____temp469v__){
  __temp1667v__unsafe_size=0;
  __temp1667v__unsafe_size=__temp1667v__unsafe_size;
  free__temp461v(&__temp1667v__unsafe_ptr);
  }
  exists__temp412v(__temp1661v__unsafe_ptr,&__temp1662v____temp469v__);
  if(__temp1662v____temp469v__){
  __temp1661v__unsafe_size=0;
  __temp1661v__unsafe_size=__temp1661v__unsafe_size;
  free__temp461v(&__temp1661v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1219v(int64_t value, const char** __temp1794v) {
  int __temp1220v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp363v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1794v=ret;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1699v() {
  char __temp1700v=0;
  char __temp1702v=0;
  int64_t __temp1703v=0;
  int64_t error=0;
  const char* __temp1704v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1657v();
  __temp1700v=__temp_complain;
  __temp1700v=__temp1700v==0;
  __temp1703v=__temp_complain;
  __temp1702v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1703v;
  __temp1702v=__temp1702v==0;
  if(__temp1702v){
  cstr__temp1219v(error,&__temp1704v__);
  print__temp361v(__temp1704v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1699v();return 0;}