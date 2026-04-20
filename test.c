#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp523v(void** __temp538v, unsigned long long* __temp539v, unsigned long long* __temp540v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  __temp_return:
  *__temp538v=unsafe_ptr;
  *__temp539v=unsafe_size;
  *__temp540v=unsafe_align;
}

static inline void false__temp7v(int* __temp541v) {
  int value=0;
  __temp_return:
  *__temp541v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp542v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp542v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp543v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp543v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp544v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp544v=z;
}

static inline void free__temp417v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp423v(void** __temp545v, unsigned long long* __temp546v, unsigned long long* __temp547v, void** __temp548v, unsigned long long* __temp549v, unsigned long long* __temp550v) {
  void* buffer__unsafe_ptr=*__temp545v;
  unsigned long long buffer__unsafe_size=*__temp546v;
  unsigned long long buffer__unsafe_align=*__temp547v;
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
  *__temp545v=buffer__unsafe_ptr;
  *__temp546v=buffer__unsafe_size;
  *__temp547v=buffer__unsafe_align;
  *__temp548v=buffer__unsafe_ptr;
  *__temp549v=buffer__unsafe_size;
  *__temp550v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp551v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp551v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp552v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp552v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp553v) {
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
  *__temp553v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp554v, unsigned long long* __temp555v, unsigned long long* __temp556v, unsigned long long size, void** __temp557v, unsigned long long* __temp558v, unsigned long long* __temp559v) {
  void* buffer__unsafe_ptr=*__temp554v;
  unsigned long long buffer__unsafe_size=*__temp555v;
  unsigned long long buffer__unsafe_align=*__temp556v;
  void* __temp429v__buffer__unsafe_ptr=0;
  unsigned long long __temp429v__buffer__unsafe_size=0;
  unsigned long long __temp429v__buffer__unsafe_align=0;
  int __temp430v__z=0;
  unsigned long long __temp431v=0;
  int __temp432v__z=0;
  unsigned long long __temp433v=0;
  unsigned long long __temp434v__z=0;
  unsigned long long __temp436v=0;
  int __temp437v__z=0;
  unsigned long long __temp438v__z=0;
  unsigned long long bytes=0;
  void* __temp439v__allocated=0;
  unsigned long long __temp440v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp430v__z);
  if(__temp430v__z){
  __temp431v=0;
  neq__temp300v(size,__temp431v,&__temp432v__z);
  if(__temp432v__z){
  __temp433v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp434v__z);
  zero__temp418v(buffer__unsafe_ptr,__temp433v,__temp434v__z);
  }
  goto __temp_return;
  }
  __temp436v=0;
  neq__temp300v(buffer__unsafe_size,__temp436v,&__temp437v__z);
  if(__temp437v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp438v__z);
  bytes=__temp438v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp414v(bytes,&__temp439v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp439v__allocated;
  __temp440v=0;
  zero__temp418v(buffer__unsafe_ptr,__temp440v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp554v=buffer__unsafe_ptr;
  *__temp555v=buffer__unsafe_size;
  *__temp556v=buffer__unsafe_align;
  *__temp557v=buffer__unsafe_ptr;
  *__temp558v=buffer__unsafe_size;
  *__temp559v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp560v) {
  __temp_return:
  *__temp560v=to;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp561v) {
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
  *__temp561v=__temp416v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp562v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp562v=z;
}

int resize__temp442v(void** __temp563v, unsigned long long* __temp564v, unsigned long long* __temp565v, unsigned long long size, void** __temp566v, unsigned long long* __temp567v, unsigned long long* __temp568v) {
  void* buffer__unsafe_ptr=*__temp563v;
  unsigned long long buffer__unsafe_size=*__temp564v;
  unsigned long long buffer__unsafe_align=*__temp565v;
  int __temp443v__z=0;
  unsigned long long __temp444v=0;
  int __temp445v__z=0;
  void* __temp446v__buffer__unsafe_ptr=0;
  unsigned long long __temp446v__buffer__unsafe_size=0;
  unsigned long long __temp446v__buffer__unsafe_align=0;
  unsigned long long __temp447v=0;
  int __temp448v__z=0;
  void* __temp449v__buffer__unsafe_ptr=0;
  unsigned long long __temp449v__buffer__unsafe_size=0;
  unsigned long long __temp449v__buffer__unsafe_align=0;
  void* __temp450v____temp429v__buffer__unsafe_ptr=0;
  unsigned long long __temp450v____temp429v__buffer__unsafe_size=0;
  unsigned long long __temp450v____temp429v__buffer__unsafe_align=0;
  unsigned long long __temp451v__z=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp452v__z=0;
  unsigned long long bytes=0;
  void* __temp453v____temp416v__to=0;
  int __temp454v__z=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp443v__z);
  if(__temp443v__z){
  goto __temp_return;
  }
  __temp444v=0;
  eq__temp276v(size,__temp444v,&__temp445v__z);
  if(__temp445v__z){
  free__temp423v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp446v__buffer__unsafe_ptr,&__temp446v__buffer__unsafe_size,&__temp446v__buffer__unsafe_align);
  buffer__unsafe_ptr=__temp446v__buffer__unsafe_ptr;
  buffer__unsafe_size=__temp446v__buffer__unsafe_size;
  buffer__unsafe_align=__temp446v__buffer__unsafe_align;
  goto __temp_return;
  }
  __temp447v=0;
  eq__temp276v(buffer__unsafe_size,__temp447v,&__temp448v__z);
  if(__temp448v__z){
  __temp_errcode=alloc__temp428v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp449v__buffer__unsafe_ptr,&__temp449v__buffer__unsafe_size,&__temp449v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__buffer__unsafe_ptr;
  buffer__unsafe_size=__temp449v__buffer__unsafe_size;
  buffer__unsafe_align=__temp449v__buffer__unsafe_align;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__unsafe_align,&__temp451v__z);
  prev_bytes=__temp451v__z;
  buffer__unsafe_size=size;
  mul__temp132v(buffer__unsafe_align,size,&__temp452v__z);
  bytes=__temp452v__z;
  __temp_errcode=realloc__temp415v(buffer__unsafe_ptr,bytes,&__temp453v____temp416v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp453v____temp416v__to;
  lt__temp180v(prev_bytes,bytes,&__temp454v__z);
  if(__temp454v__z){
  zero__temp418v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp563v=buffer__unsafe_ptr;
  *__temp564v=buffer__unsafe_size;
  *__temp565v=buffer__unsafe_align;
  *__temp566v=buffer__unsafe_ptr;
  *__temp567v=buffer__unsafe_size;
  *__temp568v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:free__temp423v(&__temp449v__buffer__unsafe_ptr,&__temp449v__buffer__unsafe_size,&__temp449v__buffer__unsafe_align,&__temp450v____temp429v__buffer__unsafe_ptr,&__temp450v____temp429v__buffer__unsafe_size,&__temp450v____temp429v__buffer__unsafe_align);
  
  return __temp_errcode;
}

static inline void len__temp478v(void** __temp569v, unsigned long long* __temp570v, unsigned long long* __temp571v, unsigned long long* __temp572v) {
  void* buffer__unsafe_ptr=*__temp569v;
  unsigned long long buffer__unsafe_size=*__temp570v;
  unsigned long long buffer__unsafe_align=*__temp571v;
  goto __temp_return;
  __temp_return:
  *__temp569v=buffer__unsafe_ptr;
  *__temp570v=buffer__unsafe_size;
  *__temp571v=buffer__unsafe_align;
  *__temp572v=buffer__unsafe_size;
}

static inline void print__temp354v(unsigned long long value) {
  int __temp355v=0;
  const char* __temp356v=0;
  const char* endl=0;
  __temp356v="\n";
  endl=__temp356v;
  printf("%llu%s",value,endl);
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

static inline int get__temp474v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp575v) {
  int __temp475v__z=0;
  unsigned long long __temp476v__z=0;
  void* __temp477v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp475v__z);
  if(__temp475v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp476v__z);
  add__temp419v(buffer__unsafe_ptr,__temp476v__z,&__temp477v____temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp575v=__temp477v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp344v(double value) {
  int __temp345v=0;
  const char* __temp346v=0;
  const char* endl=0;
  __temp346v="\n";
  endl=__temp346v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp522v() {
  void* __temp525v__unsafe_ptr=0;
  unsigned long long __temp525v__unsafe_size=0;
  unsigned long long __temp525v__unsafe_align=0;
  void* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp526v=0;
  void* __temp527v__buffer__unsafe_ptr=0;
  unsigned long long __temp527v__buffer__unsafe_size=0;
  unsigned long long __temp527v__buffer__unsafe_align=0;
  void* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp528v=0;
  void* __temp529v__buffer__unsafe_ptr=0;
  unsigned long long __temp529v__buffer__unsafe_size=0;
  unsigned long long __temp529v__buffer__unsafe_align=0;
  unsigned long long __temp530v__buffer__unsafe_size=0;
  unsigned long long __temp532v__buffer__unsafe_size=0;
  unsigned long long __temp534v=0;
  void* __temp535v____temp477v____temp420v__to=0;
  double __temp536v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp523v(&__temp525v__unsafe_ptr,&__temp525v__unsafe_size,&__temp525v__unsafe_align);
  buf1__unsafe_ptr=__temp525v__unsafe_ptr;
  buf1__unsafe_size=__temp525v__unsafe_size;
  buf1__unsafe_align=__temp525v__unsafe_align;
  __temp526v=10;
  __temp_errcode=resize__temp442v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp526v,&__temp527v__buffer__unsafe_ptr,&__temp527v__buffer__unsafe_size,&__temp527v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf1__unsafe_ptr=__temp527v__buffer__unsafe_ptr;
  buf1__unsafe_size=__temp527v__buffer__unsafe_size;
  buf1__unsafe_align=__temp527v__buffer__unsafe_align;
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp528v=10000;
  __temp_errcode=resize__temp442v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp528v,&__temp529v__buffer__unsafe_ptr,&__temp529v__buffer__unsafe_size,&__temp529v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=__temp529v__buffer__unsafe_ptr;
  buf2__unsafe_size=__temp529v__buffer__unsafe_size;
  buf2__unsafe_align=__temp529v__buffer__unsafe_align;
  len__temp478v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,&__temp530v__buffer__unsafe_size);
  print__temp354v(__temp530v__buffer__unsafe_size);
  len__temp478v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,&__temp532v__buffer__unsafe_size);
  print__temp354v(__temp532v__buffer__unsafe_size);
  __temp534v=5;
  __temp_errcode=get__temp474v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp534v,&__temp535v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp535v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp536v__z,(char*)__temp535v____temp477v____temp420v__to,8);
  print__temp344v(__temp536v__z);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int main() {main__temp522v();return 0;}