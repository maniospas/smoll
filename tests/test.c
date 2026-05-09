#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/linux.h"
#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/win.h"
#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/mac.h"
#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1639v="README.md";
const char* const __temp352v="\n";
static const char* __temp_all_errcodes[45] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp591v(const char* other, const char** __temp1650v) {
  *__temp1650v=other;
}

static inline __attribute__((always_inline)) void exists__temp398v(void* x, int* __temp1651v) {
  int z=0;
  z=x!=0;
  *__temp1651v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1652v) {
  int z=0;
  z=value?0:1;
  *__temp1652v=z;
}

static inline __attribute__((always_inline)) int read__temp1306v(const char* _path, void** __temp1653v) {
  const char* __temp1307v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1308v__=0;
  int __temp1309v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp591v(_path,&__temp1307v__);
  path=__temp1307v__;
  unsafe_ptr=fopen(path,"r");
  exists__temp398v(unsafe_ptr,&__temp1308v__);
  not__temp18v(__temp1308v__,&__temp1309v__);
  if(__temp1309v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  *__temp1653v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1654v) {
  int value=0;
  *__temp1654v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1655v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1655v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1656v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1656v=__temp87v__;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1657v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1657v=z;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1658v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  *__temp1658v=__temp412v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1659v, unsigned long long* __temp1660v, unsigned long long* __temp1661v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1659v=unsafe_ptr;
  *__temp1660v=unsafe_size;
  *__temp1661v=unsafe_align;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1662v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1662v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1663v) {
  void* allocated=*__temp1663v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1663v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1664v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1664v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, void** __temp1665v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1665v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(void** __temp1666v, unsigned long long* __temp1667v, unsigned long long* __temp1668v, unsigned long long size, void** __temp1669v, unsigned long long* __temp1670v, unsigned long long* __temp1671v) {
  void* buffer__unsafe_ptr=*__temp1666v;
  unsigned long long buffer__unsafe_size=*__temp1667v;
  unsigned long long buffer__unsafe_align=*__temp1668v;
  unsigned long long __temp435v=0;
  int __temp436v__=0;
  int __temp439v__=0;
  unsigned long long __temp440v=0;
  int __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  int __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  void* __temp448v__=0;
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
  *__temp1666v=buffer__unsafe_ptr;
  *__temp1667v=buffer__unsafe_size;
  *__temp1668v=buffer__unsafe_align;
  *__temp1669v=buffer__unsafe_ptr;
  *__temp1670v=buffer__unsafe_size;
  *__temp1671v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1676v, unsigned long long* __temp1677v, unsigned long long* __temp1678v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  void* __temp492v__unsafe_ptr=0;
  unsigned long long __temp492v__unsafe_size=0;
  unsigned long long __temp492v__unsafe_align=0;
  unsigned long long __temp1674v=0;
  int __temp1675v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  __temp491v__unsafe_ptr=__temp490v__unsafe_ptr;
  __temp491v__unsafe_size=__temp490v__unsafe_size;
  __temp491v__unsafe_align=__temp490v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align,size,&__temp492v__unsafe_ptr,&__temp492v__unsafe_size,&__temp492v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1676v=__temp492v__unsafe_ptr;
  *__temp1677v=__temp492v__unsafe_size;
  *__temp1678v=__temp492v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp592v(void** __temp1679v, unsigned long long* __temp1680v, unsigned long long* __temp1681v, void** __temp1682v, unsigned long long* __temp1683v, unsigned long long* __temp1684v, unsigned long long* __temp1685v) {
  void* buf__unsafe_ptr=*__temp1679v;
  unsigned long long buf__unsafe_size=*__temp1680v;
  unsigned long long buf__unsafe_align=*__temp1681v;
  unsigned long long __temp593v=0;
  unsigned long long __temp594v=0;
  unsigned long long pos=0;
  __temp593v=0;
  __temp594v=__temp593v;
  pos=__temp594v;
  *__temp1679v=buf__unsafe_ptr;
  *__temp1680v=buf__unsafe_size;
  *__temp1681v=buf__unsafe_align;
  *__temp1682v=buf__unsafe_ptr;
  *__temp1683v=buf__unsafe_size;
  *__temp1684v=buf__unsafe_align;
  *__temp1685v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1686v) {
  *__temp1686v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1687v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1687v=__temp431v__;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1688v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1688v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1689v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1689v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1690v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1690v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1691v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1691v=z;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1692v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1692v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1693v, unsigned long long* __temp1694v, unsigned long long* __temp1695v, unsigned long long* __temp1696v, unsigned long long* __temp1697v, char* __temp1698v) {
  *__temp1693v=buf__unsafe_ptr;
  *__temp1694v=buf__unsafe_size;
  *__temp1695v=buf__unsafe_align;
  *__temp1696v=dat__pos;
  *__temp1697v=dat__length;
  *__temp1698v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1699v, unsigned long long* __temp1700v, unsigned long long* __temp1701v, unsigned long long* __temp1702v, unsigned long long* __temp1703v, char* __temp1704v) {
  unsigned long long __temp529v=0;
  int __temp530v__=0;
  void* __temp531v__=0;
  char __temp532v__value=0;
  char first=0;
  void* __temp533v__buf__unsafe_ptr=0;
  unsigned long long __temp533v__buf__unsafe_size=0;
  unsigned long long __temp533v__buf__unsafe_align=0;
  unsigned long long __temp533v__dat__pos=0;
  unsigned long long __temp533v__dat__length=0;
  char __temp533v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp529v=0;
  neq__temp302v(length,__temp529v,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp531v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp531v__){
  goto __temp_failure;
  }
  memcpy(&__temp532v__value,(char*)__temp531v__,1);
  first=__temp532v__value;
  }
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp533v__buf__unsafe_ptr,&__temp533v__buf__unsafe_size,&__temp533v__buf__unsafe_align,&__temp533v__dat__pos,&__temp533v__dat__length,&__temp533v__dat__first);
  *__temp1699v=__temp533v__buf__unsafe_ptr;
  *__temp1700v=__temp533v__buf__unsafe_size;
  *__temp1701v=__temp533v__buf__unsafe_align;
  *__temp1702v=__temp533v__dat__pos;
  *__temp1703v=__temp533v__dat__length;
  *__temp1704v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1476v(void** __temp1705v, unsigned long long* __temp1706v, unsigned long long* __temp1707v, unsigned long long* __temp1708v, void** __temp1709v, void** __temp1710v, unsigned long long* __temp1711v, unsigned long long* __temp1712v, unsigned long long* __temp1713v, unsigned long long* __temp1714v, char* __temp1715v) {
  void* buf__unsafe_ptr=*__temp1705v;
  unsigned long long buf__unsafe_size=*__temp1706v;
  unsigned long long buf__unsafe_align=*__temp1707v;
  unsigned long long pos=*__temp1708v;
  void* f__unsafe_ptr=*__temp1709v;
  int __temp1478v__=0;
  int __temp1479v__=0;
  void* __temp1480v__=0;
  void* contents=0;
  unsigned long long __temp1481v__=0;
  unsigned long long size=0;
  int success=0;
  int __temp1482v__=0;
  unsigned long long bytes_read=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp1483v__=0;
  void* __temp1484v__buf__unsafe_ptr=0;
  unsigned long long __temp1484v__buf__unsafe_size=0;
  unsigned long long __temp1484v__buf__unsafe_align=0;
  unsigned long long __temp1484v__dat__pos=0;
  unsigned long long __temp1484v__dat__length=0;
  char __temp1484v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp398v(buf__unsafe_ptr,&__temp1478v__);
  not__temp18v(__temp1478v__,&__temp1479v__);
  if(__temp1479v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  add__temp430v(buf__unsafe_ptr,pos,&__temp1480v__);
  contents=__temp1480v__;
  __temp_errcode=sub__temp330v(buf__unsafe_size,pos,&__temp1481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1481v__;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp18v(success,&__temp1482v__);
  if(__temp1482v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  prev_pos=pos;
  add__temp110v(pos,bytes_read,&__temp1483v__);
  pos=__temp1483v__;
  __temp_errcode=str__temp528v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1484v__buf__unsafe_ptr,&__temp1484v__buf__unsafe_size,&__temp1484v__buf__unsafe_align,&__temp1484v__dat__pos,&__temp1484v__dat__length,&__temp1484v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1705v=buf__unsafe_ptr;
  *__temp1706v=buf__unsafe_size;
  *__temp1707v=buf__unsafe_align;
  *__temp1708v=pos;
  *__temp1709v=f__unsafe_ptr;
  *__temp1710v=__temp1484v__buf__unsafe_ptr;
  *__temp1711v=__temp1484v__buf__unsafe_size;
  *__temp1712v=__temp1484v__buf__unsafe_align;
  *__temp1713v=__temp1484v__dat__pos;
  *__temp1714v=__temp1484v__dat__length;
  *__temp1715v=__temp1484v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1716v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1716v=z;
}

static inline __attribute__((always_inline)) int print__temp694v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp696v__=0;
  int __temp697v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp352v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp696v__);
  gt__temp206v(__temp696v__,s__buf__unsafe_size,&__temp697v__);
  if(__temp697v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1638v() {
  void* __temp1640v__unsafe_ptr=0;
  void* file__unsafe_ptr=0;
  unsigned long long __temp1642v=0;
  unsigned long long __temp1643v__=0;
  void* __temp1644v__unsafe_ptr=0;
  unsigned long long __temp1644v__unsafe_size=0;
  unsigned long long __temp1644v__unsafe_align=0;
  void* __temp1646v__buf__unsafe_ptr=0;
  unsigned long long __temp1646v__buf__unsafe_size=0;
  unsigned long long __temp1646v__buf__unsafe_align=0;
  unsigned long long __temp1646v__pos=0;
  void* buf__buf__unsafe_ptr=0;
  unsigned long long buf__buf__unsafe_size=0;
  unsigned long long buf__buf__unsafe_align=0;
  unsigned long long buf__pos=0;
  int __temp1647v=0;
  void* __temp1648v__buf__unsafe_ptr=0;
  unsigned long long __temp1648v__buf__unsafe_size=0;
  unsigned long long __temp1648v__buf__unsafe_align=0;
  unsigned long long __temp1648v__dat__pos=0;
  unsigned long long __temp1648v__dat__length=0;
  char __temp1648v__dat__first=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__dat__pos=0;
  unsigned long long line__dat__length=0;
  char line__dat__first=0;
  unsigned long long __temp1719v=0;
  int __temp1720v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1306v(__temp1639v,&__temp1640v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  file__unsafe_ptr=__temp1640v__unsafe_ptr;
  __temp1642v=4;
  KB__temp410v(__temp1642v,&__temp1643v__);
  __temp_errcode=alloc__temp487v(__temp1643v__,&__temp1644v__unsafe_ptr,&__temp1644v__unsafe_size,&__temp1644v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp592v(&__temp1644v__unsafe_ptr,&__temp1644v__unsafe_size,&__temp1644v__unsafe_align,&__temp1646v__buf__unsafe_ptr,&__temp1646v__buf__unsafe_size,&__temp1646v__buf__unsafe_align,&__temp1646v__pos);
  buf__buf__unsafe_ptr=__temp1646v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1646v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1646v__buf__unsafe_align;
  buf__pos=__temp1646v__pos;
  while(1){
  __temp_complain=line__temp1476v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,&file__unsafe_ptr,&__temp1648v__buf__unsafe_ptr,&__temp1648v__buf__unsafe_size,&__temp1648v__buf__unsafe_align,&__temp1648v__dat__pos,&__temp1648v__dat__length,&__temp1648v__dat__first);
  __temp1647v=__temp_complain;
  line__buf__unsafe_ptr=__temp1648v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp1648v__buf__unsafe_size;
  line__buf__unsafe_align=__temp1648v__buf__unsafe_align;
  line__dat__pos=__temp1648v__dat__pos;
  line__dat__length=__temp1648v__dat__length;
  line__dat__first=__temp1648v__dat__first;
  __temp1647v=__temp1647v==0;
  if(!__temp1647v)break;
  __temp_errcode=print__temp694v(line__buf__unsafe_ptr,line__buf__unsafe_size,line__buf__unsafe_align,line__dat__pos,line__dat__length,line__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1719v=0;
  neq__temp302v(__temp1644v__unsafe_size,__temp1719v,&__temp1720v);
  if(__temp1720v){
  __temp1644v__unsafe_size=0;
  free__temp428v(&__temp1644v__unsafe_ptr);
  }
  if(__temp1640v__unsafe_ptr)fclose((FILE*)__temp1640v__unsafe_ptr);
  __temp1640v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1638v();return 0;}