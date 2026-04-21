#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp526v(void** __temp542v, unsigned long long* __temp543v, unsigned long long* __temp544v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  __temp_return:
  *__temp542v=unsafe_ptr;
  *__temp543v=unsafe_size;
  *__temp544v=unsafe_align;
}

static inline void false__temp7v(int* __temp545v) {
  int value=0;
  __temp_return:
  *__temp545v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp546v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp546v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp547v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp547v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp548v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp548v=z;
}

static inline void free__temp417v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp423v(void** __temp549v, unsigned long long* __temp550v, unsigned long long* __temp551v, void** __temp552v, unsigned long long* __temp553v, unsigned long long* __temp554v) {
  void* buffer__unsafe_ptr=*__temp549v;
  unsigned long long buffer__unsafe_size=*__temp550v;
  unsigned long long buffer__unsafe_align=*__temp551v;
  unsigned long long __temp424v=0;
  int __temp425v__z=0;
  unsigned long long __temp426v=0;
  __temp424v=0;
  eq__temp276v(buffer__unsafe_size,__temp424v,&__temp425v__z);
  if(__temp425v__z){
  goto __temp_return;
  }
  __temp426v=0;
  buffer__unsafe_size=__temp426v;
  free__temp417v(buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp549v=buffer__unsafe_ptr;
  *__temp550v=buffer__unsafe_size;
  *__temp551v=buffer__unsafe_align;
  *__temp552v=buffer__unsafe_ptr;
  *__temp553v=buffer__unsafe_size;
  *__temp554v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp555v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp555v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp556v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp556v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp557v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp557v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp558v, unsigned long long* __temp559v, unsigned long long* __temp560v, unsigned long long size, void** __temp561v, unsigned long long* __temp562v, unsigned long long* __temp563v) {
  void* buffer__unsafe_ptr=*__temp558v;
  unsigned long long buffer__unsafe_size=*__temp559v;
  unsigned long long buffer__unsafe_align=*__temp560v;
  unsigned long long __temp429v=0;
  int __temp430v__z=0;
  unsigned long long __temp431v=0;
  int __temp433v__z=0;
  unsigned long long __temp434v=0;
  int __temp435v__z=0;
  unsigned long long __temp436v=0;
  unsigned long long __temp437v__z=0;
  unsigned long long __temp439v=0;
  int __temp440v__z=0;
  unsigned long long __temp441v__z=0;
  unsigned long long bytes=0;
  void* __temp442v__allocated=0;
  unsigned long long __temp443v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp433v__z);
  if(__temp433v__z){
  __temp434v=0;
  neq__temp300v(size,__temp434v,&__temp435v__z);
  if(__temp435v__z){
  __temp436v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp437v__z);
  zero__temp418v(buffer__unsafe_ptr,__temp436v,__temp437v__z);
  }
  goto __temp_return;
  }
  __temp439v=0;
  neq__temp300v(buffer__unsafe_size,__temp439v,&__temp440v__z);
  if(__temp440v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp441v__z);
  bytes=__temp441v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp414v(bytes,&__temp442v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp442v__allocated;
  __temp443v=0;
  zero__temp418v(buffer__unsafe_ptr,__temp443v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp558v=buffer__unsafe_ptr;
  *__temp559v=buffer__unsafe_size;
  *__temp560v=buffer__unsafe_align;
  *__temp561v=buffer__unsafe_ptr;
  *__temp562v=buffer__unsafe_size;
  *__temp563v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp564v) {
  __temp_return:
  *__temp564v=to;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp565v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp416v__to=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated__unsafe_ptr,&__temp416v__to);
  goto __temp_return;
  __temp_return:
  *__temp565v=__temp416v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp566v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp566v=z;
}

int resize__temp445v(void** __temp567v, unsigned long long* __temp568v, unsigned long long* __temp569v, unsigned long long size, void** __temp570v, unsigned long long* __temp571v, unsigned long long* __temp572v) {
  void* buffer__unsafe_ptr=*__temp567v;
  unsigned long long buffer__unsafe_size=*__temp568v;
  unsigned long long buffer__unsafe_align=*__temp569v;
  int __temp446v__z=0;
  unsigned long long __temp447v=0;
  int __temp448v__z=0;
  void* __temp449v__buffer__unsafe_ptr=0;
  unsigned long long __temp449v__buffer__unsafe_size=0;
  unsigned long long __temp449v__buffer__unsafe_align=0;
  unsigned long long __temp450v=0;
  int __temp451v__z=0;
  void* __temp452v__buffer__unsafe_ptr=0;
  unsigned long long __temp452v__buffer__unsafe_size=0;
  unsigned long long __temp452v__buffer__unsafe_align=0;
  unsigned long long __temp453v____temp429v=0;
  int __temp453v____temp430v__z=0;
  unsigned long long __temp454v__z=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp455v__z=0;
  unsigned long long bytes=0;
  void* __temp456v____temp416v__to=0;
  int __temp457v__z=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp446v__z);
  if(__temp446v__z){
  goto __temp_return;
  }
  __temp447v=0;
  eq__temp276v(size,__temp447v,&__temp448v__z);
  if(__temp448v__z){
  free__temp423v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp449v__buffer__unsafe_ptr,&__temp449v__buffer__unsafe_size,&__temp449v__buffer__unsafe_align);
  buffer__unsafe_ptr=__temp449v__buffer__unsafe_ptr;
  buffer__unsafe_size=__temp449v__buffer__unsafe_size;
  buffer__unsafe_align=__temp449v__buffer__unsafe_align;
  goto __temp_return;
  }
  __temp450v=0;
  eq__temp276v(buffer__unsafe_size,__temp450v,&__temp451v__z);
  if(__temp451v__z){
  __temp_errcode=alloc__temp428v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp452v__buffer__unsafe_ptr,&__temp452v__buffer__unsafe_size,&__temp452v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp452v__buffer__unsafe_ptr;
  buffer__unsafe_size=__temp452v__buffer__unsafe_size;
  buffer__unsafe_align=__temp452v__buffer__unsafe_align;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__unsafe_align,&__temp454v__z);
  prev_bytes=__temp454v__z;
  buffer__unsafe_size=size;
  mul__temp132v(buffer__unsafe_align,size,&__temp455v__z);
  bytes=__temp455v__z;
  __temp_errcode=realloc__temp415v(buffer__unsafe_ptr,bytes,&__temp456v____temp416v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp456v____temp416v__to;
  lt__temp180v(prev_bytes,bytes,&__temp457v__z);
  if(__temp457v__z){
  zero__temp418v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp567v=buffer__unsafe_ptr;
  *__temp568v=buffer__unsafe_size;
  *__temp569v=buffer__unsafe_align;
  *__temp570v=buffer__unsafe_ptr;
  *__temp571v=buffer__unsafe_size;
  *__temp572v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:__temp453v____temp429v=0;
  neq__temp300v(__temp452v__buffer__unsafe_size,__temp453v____temp429v,&__temp453v____temp430v__z);
  if(__temp453v____temp430v__z){
  __temp452v__buffer__unsafe_size=0;
  __temp452v__buffer__unsafe_size=__temp452v__buffer__unsafe_size;
  free__temp417v(__temp452v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp573v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp573v=z;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp574v) {
  void* element=0;
  void* __temp420v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp574v=__temp420v__to;
}

static inline int mutget__temp473v(void** __temp575v, unsigned long long* __temp576v, unsigned long long* __temp577v, unsigned long long i, void** __temp578v) {
  void* buffer__unsafe_ptr=*__temp575v;
  unsigned long long buffer__unsafe_size=*__temp576v;
  unsigned long long buffer__unsafe_align=*__temp577v;
  int __temp474v__z=0;
  unsigned long long __temp475v__z=0;
  void* __temp476v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp474v__z);
  if(__temp474v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp475v__z);
  add__temp419v(buffer__unsafe_ptr,__temp475v__z,&__temp476v____temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp575v=buffer__unsafe_ptr;
  *__temp576v=buffer__unsafe_size;
  *__temp577v=buffer__unsafe_align;
  *__temp578v=__temp476v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void len__temp481v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp579v) {
  goto __temp_return;
  __temp_return:
  *__temp579v=buffer__unsafe_size;
}

static inline void print__temp352v(unsigned long long value) {
  int __temp353v=0;
  const char* __temp354v=0;
  const char* endl=0;
  __temp354v="\n";
  endl=__temp354v;
  printf("%llu%s",value,endl);
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp580v) {
  int __temp478v__z=0;
  unsigned long long __temp479v__z=0;
  void* __temp480v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp478v__z);
  if(__temp478v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp479v__z);
  add__temp419v(buffer__unsafe_ptr,__temp479v__z,&__temp480v____temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp580v=__temp480v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp342v(double value) {
  int __temp343v=0;
  const char* __temp344v=0;
  const char* endl=0;
  __temp344v="\n";
  endl=__temp344v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp525v() {
  void* __temp528v__unsafe_ptr=0;
  unsigned long long __temp528v__unsafe_size=0;
  unsigned long long __temp528v__unsafe_align=0;
  void* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp529v=0;
  void* __temp530v__buffer__unsafe_ptr=0;
  unsigned long long __temp530v__buffer__unsafe_size=0;
  unsigned long long __temp530v__buffer__unsafe_align=0;
  void* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp531v=0;
  void* __temp532v____temp476v____temp420v__to=0;
  double __temp533v=0;
  unsigned long long __temp534v__buffer__unsafe_size=0;
  unsigned long long __temp536v__buffer__unsafe_size=0;
  unsigned long long __temp538v=0;
  void* __temp539v____temp480v____temp420v__to=0;
  double __temp540v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp526v(&__temp528v__unsafe_ptr,&__temp528v__unsafe_size,&__temp528v__unsafe_align);
  buf1__unsafe_ptr=__temp528v__unsafe_ptr;
  buf1__unsafe_size=__temp528v__unsafe_size;
  buf1__unsafe_align=__temp528v__unsafe_align;
  __temp529v=10;
  __temp_errcode=resize__temp445v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp529v,&__temp530v__buffer__unsafe_ptr,&__temp530v__buffer__unsafe_size,&__temp530v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp531v=0;
  __temp_errcode=mutget__temp473v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp531v,&__temp532v____temp476v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp533v=1.0;
  if(!__temp532v____temp476v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp532v____temp476v____temp420v__to,&__temp533v,8);
  len__temp481v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp534v__buffer__unsafe_size);
  print__temp352v(__temp534v__buffer__unsafe_size);
  len__temp481v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp536v__buffer__unsafe_size);
  print__temp352v(__temp536v__buffer__unsafe_size);
  __temp538v=0;
  __temp_errcode=get__temp477v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp538v,&__temp539v____temp480v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp539v____temp480v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp540v__z,(char*)__temp539v____temp480v____temp420v__to,8);
  print__temp342v(__temp540v__z);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int main() {main__temp525v();return 0;}