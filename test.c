#include "std/common.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";
const char* const __temp560v="";
const char* const __temp1309v="ls";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1314v, unsigned long long* __temp1315v, unsigned long long* __temp1316v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1314v=unsafe_ptr;
  *__temp1315v=unsafe_size;
  *__temp1316v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1317v) {
  int value=0;
  *__temp1317v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1318v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1318v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1319v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1319v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1320v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) void free__temp422v(void** __temp1321v) {
  void* allocated=*__temp1321v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1321v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1322v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1322v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1323v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1323v=z;
}

static inline __attribute__((always_inline)) void zero__temp423v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp419v(unsigned long long bytes, void** __temp1324v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1324v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp433v(void** __temp1325v, unsigned long long* __temp1326v, unsigned long long* __temp1327v, unsigned long long size, void** __temp1328v, unsigned long long* __temp1329v, unsigned long long* __temp1330v) {
  void* buffer__unsafe_ptr=*__temp1325v;
  unsigned long long buffer__unsafe_size=*__temp1326v;
  unsigned long long buffer__unsafe_align=*__temp1327v;
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
  *__temp1325v=buffer__unsafe_ptr;
  *__temp1326v=buffer__unsafe_size;
  *__temp1327v=buffer__unsafe_align;
  *__temp1328v=buffer__unsafe_ptr;
  *__temp1329v=buffer__unsafe_size;
  *__temp1330v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp487v(unsigned long long size, void** __temp1334v, unsigned long long* __temp1335v, unsigned long long* __temp1336v) {
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  void* __temp491v__unsafe_ptr=0;
  unsigned long long __temp491v__unsafe_size=0;
  unsigned long long __temp491v__unsafe_align=0;
  unsigned long long __temp1332v=0;
  int __temp1333v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp488v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align);
  __temp_errcode=alloc__temp433v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align,size,&__temp491v__unsafe_ptr,&__temp491v__unsafe_size,&__temp491v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1334v=__temp491v__unsafe_ptr;
  *__temp1335v=__temp491v__unsafe_size;
  *__temp1336v=__temp491v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1337v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1337v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1338v) {
  *__temp1338v=to;
}

static inline __attribute__((always_inline)) void add__temp424v(void* allocated, unsigned long long offset, void** __temp1339v) {
  void* element=0;
  void* __temp425v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp425v__);
  *__temp1339v=__temp425v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1340v) {
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
  *__temp1340v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1341v, unsigned long long* __temp1342v, unsigned long long* __temp1343v, unsigned long long* __temp1344v, unsigned long long* __temp1345v, char* __temp1346v) {
  *__temp1341v=buf__unsafe_ptr;
  *__temp1342v=buf__unsafe_size;
  *__temp1343v=buf__unsafe_align;
  *__temp1344v=dat__pos;
  *__temp1345v=dat__length;
  *__temp1346v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1347v, unsigned long long* __temp1348v, unsigned long long* __temp1349v, unsigned long long* __temp1350v, unsigned long long* __temp1351v, char* __temp1352v) {
  unsigned long long __temp520v=0;
  int __temp521v__=0;
  void* __temp522v__=0;
  char __temp523v__value=0;
  char first=0;
  void* __temp524v__buf__unsafe_ptr=0;
  unsigned long long __temp524v__buf__unsafe_size=0;
  unsigned long long __temp524v__buf__unsafe_align=0;
  unsigned long long __temp524v__dat__pos=0;
  unsigned long long __temp524v__dat__length=0;
  char __temp524v__dat__first=0;
  int __temp_errcode=0;
  __temp520v=0;
  neq__temp301v(length,__temp520v,&__temp521v__);
  if(__temp521v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp522v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp522v__){
  goto __temp_failure;
  }
  memcpy(&__temp523v__value,(char*)__temp522v__,1);
  first=__temp523v__value;
  }
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp524v__buf__unsafe_ptr,&__temp524v__buf__unsafe_size,&__temp524v__buf__unsafe_align,&__temp524v__dat__pos,&__temp524v__dat__length,&__temp524v__dat__first);
  *__temp1347v=__temp524v__buf__unsafe_ptr;
  *__temp1348v=__temp524v__buf__unsafe_size;
  *__temp1349v=__temp524v__buf__unsafe_align;
  *__temp1350v=__temp524v__dat__pos;
  *__temp1351v=__temp524v__dat__length;
  *__temp1352v=__temp524v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp525v(const char* c, void** __temp1354v, unsigned long long* __temp1355v, unsigned long long* __temp1356v, unsigned long long* __temp1357v, unsigned long long* __temp1358v, char* __temp1359v) {
  void* __temp526v__unsafe_ptr=0;
  unsigned long long __temp526v__unsafe_size=0;
  unsigned long long __temp526v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp527v=0;
  void* __temp528v__buf__unsafe_ptr=0;
  unsigned long long __temp528v__buf__unsafe_size=0;
  unsigned long long __temp528v__buf__unsafe_align=0;
  unsigned long long __temp528v__dat__pos=0;
  unsigned long long __temp528v__dat__length=0;
  char __temp528v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp488v(&__temp526v__unsafe_ptr,&__temp526v__unsafe_size,&__temp526v__unsafe_align);
  buf__unsafe_ptr=__temp526v__unsafe_ptr;
  buf__unsafe_size=__temp526v__unsafe_size;
  buf__unsafe_align=__temp526v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp527v=0;
  __temp_errcode=str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp527v,length,&__temp528v__buf__unsafe_ptr,&__temp528v__buf__unsafe_size,&__temp528v__buf__unsafe_align,&__temp528v__dat__pos,&__temp528v__dat__length,&__temp528v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1354v=__temp528v__buf__unsafe_ptr;
  *__temp1355v=__temp528v__buf__unsafe_size;
  *__temp1356v=__temp528v__buf__unsafe_align;
  *__temp1357v=__temp528v__dat__pos;
  *__temp1358v=__temp528v__dat__length;
  *__temp1359v=__temp528v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp529v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1360v) {
  *__temp1360v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1361v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1361v=z;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1362v) {
  *__temp1362v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1363v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1363v=z;
}

static inline __attribute__((always_inline)) int copy__temp567v(void** __temp1364v, unsigned long long* __temp1365v, unsigned long long* __temp1366v, unsigned long long* __temp1367v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1368v, unsigned long long* __temp1369v, unsigned long long* __temp1370v, unsigned long long* __temp1371v, unsigned long long* __temp1372v, char* __temp1373v) {
  void* buf__unsafe_ptr=*__temp1364v;
  unsigned long long buf__unsafe_size=*__temp1365v;
  unsigned long long buf__unsafe_align=*__temp1366v;
  unsigned long long pos=*__temp1367v;
  unsigned long long __temp568v__=0;
  unsigned long long __temp569v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp570v__=0;
  int __temp571v__=0;
  unsigned long long __temp572v=0;
  unsigned long long __temp573v__=0;
  unsigned long long prev_pos=0;
  void* __temp574v__buf__unsafe_ptr=0;
  unsigned long long __temp574v__buf__unsafe_size=0;
  unsigned long long __temp574v__buf__unsafe_align=0;
  unsigned long long __temp574v__dat__pos=0;
  unsigned long long __temp574v__dat__length=0;
  char __temp574v__dat__first=0;
  int __temp_errcode=0;
  len__temp529v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp568v__);
  add__temp109v(pos,__temp568v__,&__temp569v__);
  next_pos=__temp569v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp570v__);
  gt__temp205v(next_pos,__temp570v__,&__temp571v__);
  if(__temp571v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp572v=0;
  add__temp109v(pos,__temp572v,&__temp573v__);
  prev_pos=__temp573v__;
  pos=next_pos;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp574v__buf__unsafe_ptr,&__temp574v__buf__unsafe_size,&__temp574v__buf__unsafe_align,&__temp574v__dat__pos,&__temp574v__dat__length,&__temp574v__dat__first);
  *__temp1364v=buf__unsafe_ptr;
  *__temp1365v=buf__unsafe_size;
  *__temp1366v=buf__unsafe_align;
  *__temp1367v=pos;
  *__temp1368v=__temp574v__buf__unsafe_ptr;
  *__temp1369v=__temp574v__buf__unsafe_size;
  *__temp1370v=__temp574v__buf__unsafe_align;
  *__temp1371v=__temp574v__dat__pos;
  *__temp1372v=__temp574v__dat__length;
  *__temp1373v=__temp574v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp582v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp584v__=0;
  int __temp585v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp584v__);
  gt__temp205v(__temp584v__,s__buf__unsafe_size,&__temp585v__);
  if(__temp585v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1374v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1374v=z;
}

static inline __attribute__((always_inline)) void char__temp531v(const char* s, char* __temp1375v) {
  char c=0;
  c=s?s[0]:0;
  *__temp1375v=c;
}

static inline __attribute__((always_inline)) void eq__temp532v(char x, char y, int* __temp1376v) {
  int z=0;
  z=(x==y);
  *__temp1376v=z;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp544v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1380v, unsigned long long* __temp1381v, unsigned long long* __temp1382v, unsigned long long* __temp1383v, unsigned long long* __temp1384v, char* __temp1385v) {
  unsigned long long __temp545v=0;
  unsigned long long __temp546v__=0;
  unsigned long long __temp547v__=0;
  void* __temp548v__unsafe_ptr=0;
  unsigned long long __temp548v__unsafe_size=0;
  unsigned long long __temp548v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp550v=0;
  void* __temp551v__buf__unsafe_ptr=0;
  unsigned long long __temp551v__buf__unsafe_size=0;
  unsigned long long __temp551v__buf__unsafe_align=0;
  unsigned long long __temp551v__dat__pos=0;
  unsigned long long __temp551v__dat__length=0;
  char __temp551v__dat__first=0;
  unsigned long long __temp1378v=0;
  int __temp1379v=0;
  int __temp_errcode=0;
  __temp545v=1;
  len__temp529v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp546v__);
  add__temp109v(__temp545v,__temp546v__,&__temp547v__);
  __temp_errcode=alloc__temp487v(__temp547v__,&__temp548v__unsafe_ptr,&__temp548v__unsafe_size,&__temp548v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp548v__unsafe_ptr;
  buf__unsafe_size=__temp548v__unsafe_size;
  buf__unsafe_align=__temp548v__unsafe_align;
  memcpy(((char*)buf__unsafe_ptr),((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  ((char*)buf__unsafe_ptr)[other__dat__length]=0;
  __temp550v=0;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp550v,other__dat__length,other__dat__first,&__temp551v__buf__unsafe_ptr,&__temp551v__buf__unsafe_size,&__temp551v__buf__unsafe_align,&__temp551v__dat__pos,&__temp551v__dat__length,&__temp551v__dat__first);
  *__temp1380v=__temp551v__buf__unsafe_ptr;
  *__temp1381v=__temp551v__buf__unsafe_size;
  *__temp1382v=__temp551v__buf__unsafe_align;
  *__temp1383v=__temp551v__dat__pos;
  *__temp1384v=__temp551v__dat__length;
  *__temp1385v=__temp551v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int unsafe_temporary_cstr__temp552v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, const char** __temp1390v) {
  unsigned long long __temp553v__=0;
  unsigned long long __temp554v__=0;
  unsigned long long __temp555v__=0;
  int __temp556v__=0;
  unsigned long long __temp557v__=0;
  void* __temp558v__=0;
  char __temp559v__value=0;
  char __temp561v__=0;
  int __temp562v__=0;
  int __temp563v=0;
  void* __temp564v__buf__unsafe_ptr=0;
  unsigned long long __temp564v__buf__unsafe_size=0;
  unsigned long long __temp564v__buf__unsafe_align=0;
  unsigned long long __temp564v__dat__pos=0;
  unsigned long long __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  void* c__buf__unsafe_ptr=0;
  unsigned long long c__buf__unsafe_size=0;
  unsigned long long c__buf__unsafe_align=0;
  unsigned long long c__dat__pos=0;
  unsigned long long c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  unsigned long long __temp1388v=0;
  int __temp1389v=0;
  int __temp_errcode=0;
  len__temp529v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp553v__);
  add__temp109v(__temp553v__,other__dat__pos,&__temp554v__);
  len__temp486v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,&__temp555v__);
  lt__temp181v(__temp554v__,__temp555v__,&__temp556v__);
  if(__temp556v__){
  len__temp529v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp557v__);
  __temp_errcode=get__temp482v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,__temp557v__,&__temp558v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp558v__){
  goto __temp_failure;
  }
  memcpy(&__temp559v__value,(char*)__temp558v__,1);
  char__temp531v(__temp560v,&__temp561v__);
  eq__temp532v(__temp559v__value,__temp561v__,&__temp562v__);
  __temp563v=__temp562v__;
  }
  if(__temp563v){
  c__buf__unsafe_ptr=other__buf__unsafe_ptr;
  c__buf__unsafe_size=other__buf__unsafe_size;
  c__buf__unsafe_align=other__buf__unsafe_align;
  c__dat__pos=other__dat__pos;
  c__dat__length=other__dat__length;
  c__dat__first=other__dat__first;
  }
  else{
  __temp_errcode=copy_null_terminated__temp544v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp564v__buf__unsafe_ptr,&__temp564v__buf__unsafe_size,&__temp564v__buf__unsafe_align,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__buf__unsafe_ptr=__temp564v__buf__unsafe_ptr;
  c__buf__unsafe_size=__temp564v__buf__unsafe_size;
  c__buf__unsafe_align=__temp564v__buf__unsafe_align;
  c__dat__pos=__temp564v__dat__pos;
  c__dat__length=__temp564v__dat__length;
  c__dat__first=__temp564v__dat__first;
  }
  ret=other__buf__unsafe_ptr;
  *__temp1390v=ret;
  
  __temp_failure:__temp1388v=0;
  neq__temp301v(__temp564v__buf__unsafe_size,__temp1388v,&__temp1389v);
  if(__temp1389v){
  __temp564v__buf__unsafe_size=0;
  free__temp422v(&__temp564v__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp375v(unsigned long long x, long long int* __temp1391v) {
  long long int z=0;
  z=x;
  *__temp1391v=z;
}

static inline __attribute__((always_inline)) void is_different__temp72v(long long int x, long long int y, int* __temp1392v) {
  int __temp73v=0;
  int __temp74v__=0;
  not__temp26v(__temp73v,&__temp74v__);
  *__temp1392v=__temp74v__;
}

static inline __attribute__((always_inline)) void neq__temp290v(long long int x, long long int y, int* __temp1393v) {
  int __temp291v__=0;
  int z=0;
  is_different__temp72v(x,y,&__temp291v__);
  z=x!=y?1:0;
  *__temp1393v=z;
}

static inline __attribute__((always_inline)) int system__temp986v(void* _cmd__buf__unsafe_ptr, unsigned long long _cmd__buf__unsafe_size, unsigned long long _cmd__buf__unsafe_align, unsigned long long _cmd__dat__pos, unsigned long long _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp987v__=0;
  const char* cmd=0;
  long long int result=0;
  unsigned long long __temp988v=0;
  long long int __temp989v__=0;
  int __temp990v__=0;
  int __temp_errcode=0;
  __temp_errcode=unsafe_temporary_cstr__temp552v(_cmd__buf__unsafe_ptr,_cmd__buf__unsafe_size,_cmd__buf__unsafe_align,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp987v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp987v__;
  result=system((const char*)cmd);
  __temp988v=0;
  int__temp375v(__temp988v,&__temp989v__);
  neq__temp290v(result,__temp989v__,&__temp990v__);
  if(__temp990v__){
  __temp_errcode=25;
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1304v() {
  unsigned long long __temp1305v=0;
  void* __temp1306v__unsafe_ptr=0;
  unsigned long long __temp1306v__unsafe_size=0;
  unsigned long long __temp1306v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long __temp1308v=0;
  void* __temp1310v__buf__unsafe_ptr=0;
  unsigned long long __temp1310v__buf__unsafe_size=0;
  unsigned long long __temp1310v__buf__unsafe_align=0;
  unsigned long long __temp1310v__dat__pos=0;
  unsigned long long __temp1310v__dat__length=0;
  char __temp1310v__dat__first=0;
  void* __temp1311v__buf__unsafe_ptr=0;
  unsigned long long __temp1311v__buf__unsafe_size=0;
  unsigned long long __temp1311v__buf__unsafe_align=0;
  unsigned long long __temp1311v__dat__pos=0;
  unsigned long long __temp1311v__dat__length=0;
  char __temp1311v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp1395v=0;
  int __temp1396v=0;
  int __temp_errcode=0;
  __temp1305v=2;
  __temp_errcode=alloc__temp487v(__temp1305v,&__temp1306v__unsafe_ptr,&__temp1306v__unsafe_size,&__temp1306v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1306v__unsafe_ptr;
  buf__unsafe_size=__temp1306v__unsafe_size;
  buf__unsafe_align=__temp1306v__unsafe_align;
  __temp1308v=0;
  __temp_errcode=str__temp525v(__temp1309v,&__temp1310v__buf__unsafe_ptr,&__temp1310v__buf__unsafe_size,&__temp1310v__buf__unsafe_align,&__temp1310v__dat__pos,&__temp1310v__dat__length,&__temp1310v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp567v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&__temp1308v,__temp1310v__buf__unsafe_ptr,__temp1310v__buf__unsafe_size,__temp1310v__buf__unsafe_align,__temp1310v__dat__pos,__temp1310v__dat__length,__temp1310v__dat__first,&__temp1311v__buf__unsafe_ptr,&__temp1311v__buf__unsafe_size,&__temp1311v__buf__unsafe_align,&__temp1311v__dat__pos,&__temp1311v__dat__length,&__temp1311v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__buf__unsafe_ptr=__temp1311v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp1311v__buf__unsafe_size;
  s__buf__unsafe_align=__temp1311v__buf__unsafe_align;
  s__dat__pos=__temp1311v__dat__pos;
  s__dat__length=__temp1311v__dat__length;
  s__dat__first=__temp1311v__dat__first;
  __temp_errcode=print__temp582v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=system__temp986v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1395v=0;
  neq__temp301v(__temp1306v__unsafe_size,__temp1395v,&__temp1396v);
  if(__temp1396v){
  __temp1306v__unsafe_size=0;
  free__temp422v(&__temp1306v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1304v();return 0;}