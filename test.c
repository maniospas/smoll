#include "std/common.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1349v="./std";
const char* const __temp345v="\n";
const char* const __temp1347v="TEEEEE";

static inline __attribute__((always_inline)) void print__temp343v(const char* value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp573v(const char* other, const char** __temp1358v) {
  *__temp1358v=other;
}

static inline __attribute__((always_inline)) void exists__temp391v(void* x, int* __temp1359v) {
  int z=0;
  z=x!=0;
  *__temp1359v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1360v) {
  int z=0;
  z=value?0:1;
  *__temp1360v=z;
}

static inline __attribute__((always_inline)) int read__temp1311v(const char* _path, void** __temp1361v) {
  const char* __temp1312v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1313v__=0;
  int __temp1314v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp573v(_path,&__temp1312v__);
  path=__temp1312v__;
  unsafe_ptr=opendir(path);
  exists__temp391v(unsafe_ptr,&__temp1313v__);
  not__temp17v(__temp1313v__,&__temp1314v__);
  if(__temp1314v__){
  __temp_errcode=26;
  goto __temp_failure;
  }
  *__temp1361v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1362v, unsigned long long* __temp1363v, unsigned long long* __temp1364v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1362v=unsafe_ptr;
  *__temp1363v=unsafe_size;
  *__temp1364v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1365v) {
  int value=0;
  *__temp1365v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1366v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1366v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1367v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1367v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1368v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1368v=z;
}

static inline __attribute__((always_inline)) void free__temp422v(void** __temp1369v) {
  void* allocated=*__temp1369v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1369v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1370v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1370v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1371v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1371v=z;
}

static inline __attribute__((always_inline)) void zero__temp423v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp419v(unsigned long long bytes, void** __temp1372v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1372v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp433v(void** __temp1373v, unsigned long long* __temp1374v, unsigned long long* __temp1375v, unsigned long long size, void** __temp1376v, unsigned long long* __temp1377v, unsigned long long* __temp1378v) {
  void* buffer__unsafe_ptr=*__temp1373v;
  unsigned long long buffer__unsafe_size=*__temp1374v;
  unsigned long long buffer__unsafe_align=*__temp1375v;
  unsigned long long __temp434v=0;
  int __temp435v__=0;
  int __temp438v__=0;
  unsigned long long __temp439v=0;
  int __temp440v__=0;
  unsigned long long __temp441v=0;
  unsigned long long __temp442v__=0;
  unsigned long long __temp444v=0;
  int __temp445v__=0;
  unsigned long long __temp446v__=0;
  unsigned long long bytes=0;
  void* __temp447v__=0;
  unsigned long long __temp448v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp438v__);
  if(__temp438v__){
  __temp439v=0;
  neq__temp301v(size,__temp439v,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp442v__);
  zero__temp423v(buffer__unsafe_ptr,__temp441v,__temp442v__);
  }
  goto __temp_return;
  }
  __temp444v=0;
  neq__temp301v(buffer__unsafe_size,__temp444v,&__temp445v__);
  if(__temp445v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp446v__);
  bytes=__temp446v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp419v(bytes,&__temp447v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp447v__;
  __temp448v=0;
  zero__temp423v(buffer__unsafe_ptr,__temp448v,bytes);
  __temp_return:
  *__temp1373v=buffer__unsafe_ptr;
  *__temp1374v=buffer__unsafe_size;
  *__temp1375v=buffer__unsafe_align;
  *__temp1376v=buffer__unsafe_ptr;
  *__temp1377v=buffer__unsafe_size;
  *__temp1378v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1382v, unsigned long long* __temp1383v, unsigned long long* __temp1384v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  unsigned long long __temp1380v=0;
  int __temp1381v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp488v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  __temp_errcode=alloc__temp433v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align,size,&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1382v=__temp491v__unsafe_ptr;
  *__temp1383v=__temp491v__unsafe_size;
  *__temp1384v=__temp491v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1385v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1385v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1386v) {
  *__temp1386v=to;
}

static inline __attribute__((always_inline)) void add__temp424v(void* allocated, unsigned long long offset, void** __temp1387v) {
  void* element=0;
  void* __temp425v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp425v__);
  *__temp1387v=__temp425v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1388v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp484v__);
  add__temp424v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1388v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1389v, unsigned long long* __temp1390v, unsigned long long* __temp1391v, unsigned long long* __temp1392v, unsigned long long* __temp1393v, char* __temp1394v) {
  *__temp1389v=buf__unsafe_ptr;
  *__temp1390v=buf__unsafe_size;
  *__temp1391v=buf__unsafe_align;
  *__temp1392v=dat__pos;
  *__temp1393v=dat__length;
  *__temp1394v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp526v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1395v, unsigned long long* __temp1396v, unsigned long long* __temp1397v, unsigned long long* __temp1398v, unsigned long long* __temp1399v, char* __temp1400v) {
  unsigned long long __temp527v=0;
  int __temp528v__=0;
  void* __temp529v__=0;
  char __temp530v__value=0;
  char first=0;
  void* __temp531v__buf__unsafe_ptr=0;
  unsigned long long __temp531v__buf__unsafe_size=0;
  unsigned long long __temp531v__buf__unsafe_align=0;
  unsigned long long __temp531v__dat__pos=0;
  unsigned long long __temp531v__dat__length=0;
  char __temp531v__dat__first=0;
  int __temp_errcode=0;
  __temp527v=0;
  neq__temp301v(length,__temp527v,&__temp528v__);
  if(__temp528v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp529v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp529v__){
  goto __temp_failure;
  }
  memcpy(&__temp530v__value,(char*)__temp529v__,1);
  first=__temp530v__value;
  }
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp531v__buf__unsafe_ptr,&__temp531v__buf__unsafe_size,&__temp531v__buf__unsafe_align,&__temp531v__dat__pos,&__temp531v__dat__length,&__temp531v__dat__first);
  *__temp1395v=__temp531v__buf__unsafe_ptr;
  *__temp1396v=__temp531v__buf__unsafe_size;
  *__temp1397v=__temp531v__buf__unsafe_align;
  *__temp1398v=__temp531v__dat__pos;
  *__temp1399v=__temp531v__dat__length;
  *__temp1400v=__temp531v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp532v(const char* c, void** __temp1402v, unsigned long long* __temp1403v, unsigned long long* __temp1404v, unsigned long long* __temp1405v, unsigned long long* __temp1406v, char* __temp1407v) {
  void* __temp533v__unsafe_ptr=0;
  unsigned long long __temp533v__unsafe_size=0;
  unsigned long long __temp533v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp534v=0;
  void* __temp535v__buf__unsafe_ptr=0;
  unsigned long long __temp535v__buf__unsafe_size=0;
  unsigned long long __temp535v__buf__unsafe_align=0;
  unsigned long long __temp535v__dat__pos=0;
  unsigned long long __temp535v__dat__length=0;
  char __temp535v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp488v(&__temp533v__unsafe_ptr,&__temp533v__unsafe_size,&__temp533v__unsafe_align);
  buf__unsafe_ptr=__temp533v__unsafe_ptr;
  buf__unsafe_size=__temp533v__unsafe_size;
  buf__unsafe_align=__temp533v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp534v=0;
  __temp_errcode=str__temp526v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp534v,length,&__temp535v__buf__unsafe_ptr,&__temp535v__buf__unsafe_size,&__temp535v__buf__unsafe_align,&__temp535v__dat__pos,&__temp535v__dat__length,&__temp535v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1402v=__temp535v__buf__unsafe_ptr;
  *__temp1403v=__temp535v__buf__unsafe_size;
  *__temp1404v=__temp535v__buf__unsafe_align;
  *__temp1405v=__temp535v__dat__pos;
  *__temp1406v=__temp535v__dat__length;
  *__temp1407v=__temp535v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp536v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1408v) {
  *__temp1408v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1409v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1409v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1410v) {
  *__temp1410v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1411v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1411v=z;
}

static inline __attribute__((always_inline)) int copy__temp574v(void** __temp1412v, unsigned long long* __temp1413v, unsigned long long* __temp1414v, unsigned long long* __temp1415v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1416v, unsigned long long* __temp1417v, unsigned long long* __temp1418v, unsigned long long* __temp1419v, unsigned long long* __temp1420v, char* __temp1421v) {
  void* buf__unsafe_ptr=*__temp1412v;
  unsigned long long buf__unsafe_size=*__temp1413v;
  unsigned long long buf__unsafe_align=*__temp1414v;
  unsigned long long pos=*__temp1415v;
  unsigned long long __temp575v__=0;
  unsigned long long __temp576v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp577v__=0;
  int __temp578v__=0;
  unsigned long long __temp579v=0;
  unsigned long long __temp580v__=0;
  unsigned long long prev_pos=0;
  void* __temp581v__buf__unsafe_ptr=0;
  unsigned long long __temp581v__buf__unsafe_size=0;
  unsigned long long __temp581v__buf__unsafe_align=0;
  unsigned long long __temp581v__dat__pos=0;
  unsigned long long __temp581v__dat__length=0;
  char __temp581v__dat__first=0;
  int __temp_errcode=0;
  len__temp536v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp575v__);
  add__temp109v(pos,__temp575v__,&__temp576v__);
  next_pos=__temp576v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp577v__);
  gt__temp205v(next_pos,__temp577v__,&__temp578v__);
  if(__temp578v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp579v=0;
  add__temp109v(pos,__temp579v,&__temp580v__);
  prev_pos=__temp580v__;
  pos=next_pos;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp581v__buf__unsafe_ptr,&__temp581v__buf__unsafe_size,&__temp581v__buf__unsafe_align,&__temp581v__dat__pos,&__temp581v__dat__length,&__temp581v__dat__first);
  *__temp1412v=buf__unsafe_ptr;
  *__temp1413v=buf__unsafe_size;
  *__temp1414v=buf__unsafe_align;
  *__temp1415v=pos;
  *__temp1416v=__temp581v__buf__unsafe_ptr;
  *__temp1417v=__temp581v__buf__unsafe_size;
  *__temp1418v=__temp581v__buf__unsafe_align;
  *__temp1419v=__temp581v__dat__pos;
  *__temp1420v=__temp581v__dat__length;
  *__temp1421v=__temp581v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp582v(void** __temp1424v, unsigned long long* __temp1425v, unsigned long long* __temp1426v, unsigned long long* __temp1427v, const char* other, void** __temp1428v, unsigned long long* __temp1429v, unsigned long long* __temp1430v, unsigned long long* __temp1431v, unsigned long long* __temp1432v, char* __temp1433v) {
  void* buf__unsafe_ptr=*__temp1424v;
  unsigned long long buf__unsafe_size=*__temp1425v;
  unsigned long long buf__unsafe_align=*__temp1426v;
  unsigned long long pos=*__temp1427v;
  void* __temp583v__buf__unsafe_ptr=0;
  unsigned long long __temp583v__buf__unsafe_size=0;
  unsigned long long __temp583v__buf__unsafe_align=0;
  unsigned long long __temp583v__dat__pos=0;
  unsigned long long __temp583v__dat__length=0;
  char __temp583v__dat__first=0;
  void* __temp584v__buf__unsafe_ptr=0;
  unsigned long long __temp584v__buf__unsafe_size=0;
  unsigned long long __temp584v__buf__unsafe_align=0;
  unsigned long long __temp584v__dat__pos=0;
  unsigned long long __temp584v__dat__length=0;
  char __temp584v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp532v(other,&__temp583v__buf__unsafe_ptr,&__temp583v__buf__unsafe_size,&__temp583v__buf__unsafe_align,&__temp583v__dat__pos,&__temp583v__dat__length,&__temp583v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp574v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp583v__buf__unsafe_ptr,__temp583v__buf__unsafe_size,__temp583v__buf__unsafe_align,__temp583v__dat__pos,__temp583v__dat__length,__temp583v__dat__first,&__temp584v__buf__unsafe_ptr,&__temp584v__buf__unsafe_size,&__temp584v__buf__unsafe_align,&__temp584v__dat__pos,&__temp584v__dat__length,&__temp584v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1424v=buf__unsafe_ptr;
  *__temp1425v=buf__unsafe_size;
  *__temp1426v=buf__unsafe_align;
  *__temp1427v=pos;
  *__temp1428v=__temp584v__buf__unsafe_ptr;
  *__temp1429v=__temp584v__buf__unsafe_size;
  *__temp1430v=__temp584v__buf__unsafe_align;
  *__temp1431v=__temp584v__dat__pos;
  *__temp1432v=__temp584v__dat__length;
  *__temp1433v=__temp584v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1338v(void** __temp1434v, unsigned long long* __temp1435v, unsigned long long* __temp1436v, void** __temp1437v, void** __temp1438v, unsigned long long* __temp1439v, unsigned long long* __temp1440v, unsigned long long* __temp1441v, unsigned long long* __temp1442v, char* __temp1443v) {
  void* buf__unsafe_ptr=*__temp1434v;
  unsigned long long buf__unsafe_size=*__temp1435v;
  unsigned long long buf__unsafe_align=*__temp1436v;
  void* f__unsafe_ptr=*__temp1437v;
  unsigned long long __temp1340v=0;
  unsigned long long pos=0;
  int __temp1341v__=0;
  int __temp1342v__=0;
  void* de=0;
  int __temp1343v__=0;
  int __temp1344v__=0;
  const char* dirname=0;
  void* __temp1345v__buf__unsafe_ptr=0;
  unsigned long long __temp1345v__buf__unsafe_size=0;
  unsigned long long __temp1345v__buf__unsafe_align=0;
  unsigned long long __temp1345v__dat__pos=0;
  unsigned long long __temp1345v__dat__length=0;
  char __temp1345v__dat__first=0;
  int __temp_errcode=0;
  __temp1340v=0;
  pos=__temp1340v;
  exists__temp391v(f__unsafe_ptr,&__temp1341v__);
  not__temp17v(__temp1341v__,&__temp1342v__);
  if(__temp1342v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  de=readdir((DIR*)f__unsafe_ptr);
  exists__temp391v(de,&__temp1343v__);
  not__temp17v(__temp1343v__,&__temp1344v__);
  if(__temp1344v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=copy__temp582v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,dirname,&__temp1345v__buf__unsafe_ptr,&__temp1345v__buf__unsafe_size,&__temp1345v__buf__unsafe_align,&__temp1345v__dat__pos,&__temp1345v__dat__length,&__temp1345v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1434v=buf__unsafe_ptr;
  *__temp1435v=buf__unsafe_size;
  *__temp1436v=buf__unsafe_align;
  *__temp1437v=f__unsafe_ptr;
  *__temp1438v=__temp1345v__buf__unsafe_ptr;
  *__temp1439v=__temp1345v__buf__unsafe_size;
  *__temp1440v=__temp1345v__buf__unsafe_align;
  *__temp1441v=__temp1345v__dat__pos;
  *__temp1442v=__temp1345v__dat__length;
  *__temp1443v=__temp1345v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp589v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp591v__=0;
  int __temp592v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp591v__);
  gt__temp205v(__temp591v__,s__buf__unsafe_size,&__temp592v__);
  if(__temp592v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1346v() {
  void* __temp1350v__unsafe_ptr=0;
  void* dir__unsafe_ptr=0;
  unsigned long long __temp1352v=0;
  void* __temp1353v__unsafe_ptr=0;
  unsigned long long __temp1353v__unsafe_size=0;
  unsigned long long __temp1353v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  int __temp1355v=0;
  void* __temp1356v__buf__unsafe_ptr=0;
  unsigned long long __temp1356v__buf__unsafe_size=0;
  unsigned long long __temp1356v__buf__unsafe_align=0;
  unsigned long long __temp1356v__dat__pos=0;
  unsigned long long __temp1356v__dat__length=0;
  char __temp1356v__dat__first=0;
  void* entry__buf__unsafe_ptr=0;
  unsigned long long entry__buf__unsafe_size=0;
  unsigned long long entry__buf__unsafe_align=0;
  unsigned long long entry__dat__pos=0;
  unsigned long long entry__dat__length=0;
  char entry__dat__first=0;
  unsigned long long __temp1446v=0;
  int __temp1447v=0;
  int __temp_errcode=0;
  print__temp343v(__temp1347v);
  __temp_errcode=read__temp1311v(__temp1349v,&__temp1350v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dir__unsafe_ptr=__temp1350v__unsafe_ptr;
  __temp1352v=128;
  __temp_errcode=alloc__temp487v(__temp1352v,&__temp1353v__unsafe_ptr,&__temp1353v__unsafe_size,&__temp1353v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1353v__unsafe_ptr;
  buf__unsafe_size=__temp1353v__unsafe_size;
  buf__unsafe_align=__temp1353v__unsafe_align;
  while(1){
  __temp1355v=entry__temp1338v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&dir__unsafe_ptr,&__temp1356v__buf__unsafe_ptr,&__temp1356v__buf__unsafe_size,&__temp1356v__buf__unsafe_align,&__temp1356v__dat__pos,&__temp1356v__dat__length,&__temp1356v__dat__first);
  entry__buf__unsafe_ptr=__temp1356v__buf__unsafe_ptr;
  entry__buf__unsafe_size=__temp1356v__buf__unsafe_size;
  entry__buf__unsafe_align=__temp1356v__buf__unsafe_align;
  entry__dat__pos=__temp1356v__dat__pos;
  entry__dat__length=__temp1356v__dat__length;
  entry__dat__first=__temp1356v__dat__first;
  __temp1355v=__temp1355v==0;
  if(!__temp1355v)break;
  __temp_errcode=print__temp589v(entry__buf__unsafe_ptr,entry__buf__unsafe_size,entry__buf__unsafe_align,entry__dat__pos,entry__dat__length,entry__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:__temp1446v=0;
  neq__temp301v(__temp1353v__unsafe_size,__temp1446v,&__temp1447v);
  if(__temp1447v){
  __temp1353v__unsafe_size=0;
  free__temp422v(&__temp1353v__unsafe_ptr);
  }
  if(__temp1350v__unsafe_ptr)closedir((DIR*)__temp1350v__unsafe_ptr);
  __temp1350v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1346v();return 0;}