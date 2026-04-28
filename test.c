#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void char__temp_buffer__buffer__temp824v(void** __temp832v, unsigned long long* __temp833v, unsigned long long* __temp834v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp832v=unsafe_ptr;
  *__temp833v=unsafe_size;
  *__temp834v=unsafe_align;
}

static inline void len__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp835v) {
  *__temp835v=buffer__unsafe_size;
}

static inline void list__temp489v(void** __temp836v, unsigned long long* __temp837v, unsigned long long* __temp838v, void** __temp839v, unsigned long long* __temp840v, unsigned long long* __temp841v, unsigned long long* __temp842v) {
  void* buffer__unsafe_ptr=*__temp836v;
  unsigned long long buffer__unsafe_size=*__temp837v;
  unsigned long long buffer__unsafe_align=*__temp838v;
  unsigned long long __temp490v__=0;
  unsigned long long length=0;
  len__temp482v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp490v__);
  length=__temp490v__;
  *__temp836v=buffer__unsafe_ptr;
  *__temp837v=buffer__unsafe_size;
  *__temp838v=buffer__unsafe_align;
  *__temp839v=buffer__unsafe_ptr;
  *__temp840v=buffer__unsafe_size;
  *__temp841v=buffer__unsafe_align;
  *__temp842v=length;
}

static inline void char__temp_buffer__buffer__temp484v(void** __temp843v, unsigned long long* __temp844v, unsigned long long* __temp845v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp843v=unsafe_ptr;
  *__temp844v=unsafe_size;
  *__temp845v=unsafe_align;
}

static inline void false__temp7v(int* __temp846v) {
  int value=0;
  *__temp846v=value;
}

static inline void not__temp26v(int __temp_anon0, int* __temp847v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp847v=__temp27v__;
}

static inline void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp848v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp848v=__temp86v__;
}

static inline void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp849v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp849v=z;
}

static inline void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp850v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp850v=z;
}

static inline void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp851v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp851v=z;
}

static inline void attach_type__temp12v(void* to, void* from, void** __temp852v) {
  *__temp852v=to;
}

static inline void add__temp420v(void* allocated, unsigned long long offset, void** __temp853v) {
  void* element=0;
  void* __temp421v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp421v__);
  *__temp853v=__temp421v__;
}

static inline int get__temp478v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp854v) {
  int __temp479v__=0;
  unsigned long long __temp480v__=0;
  void* __temp481v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 95 column 14\n");
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp480v__);
  add__temp420v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp854v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void str__temp511v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp855v, unsigned long long* __temp856v, unsigned long long* __temp857v, unsigned long long* __temp858v, unsigned long long* __temp859v, char* __temp860v) {
  *__temp855v=buf__unsafe_ptr;
  *__temp856v=buf__unsafe_size;
  *__temp857v=buf__unsafe_align;
  *__temp858v=dat__pos;
  *__temp859v=dat__length;
  *__temp860v=dat__first;
}

static inline int str__temp512v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp861v, unsigned long long* __temp862v, unsigned long long* __temp863v, unsigned long long* __temp864v, unsigned long long* __temp865v, char* __temp866v) {
  unsigned long long __temp513v=0;
  int __temp514v__=0;
  void* __temp515v__=0;
  char __temp516v__value=0;
  char first=0;
  void* __temp517v__buf__unsafe_ptr=0;
  unsigned long long __temp517v__buf__unsafe_size=0;
  unsigned long long __temp517v__buf__unsafe_align=0;
  unsigned long long __temp517v__dat__pos=0;
  unsigned long long __temp517v__dat__length=0;
  char __temp517v__dat__first=0;
  int __temp_errcode=0;
  __temp513v=0;
  neq__temp301v(length,__temp513v,&__temp514v__);
  if(__temp514v__){
  __temp_errcode=get__temp478v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp515v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/string.s line 28 column 20\n   unhandled error from get(const any[], nat i) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp515v__){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/core/string.s line 28 column 20\n");
  goto __temp_failure;
  }
  memcpy(&__temp516v__value,(char*)__temp515v__,1);
  first=__temp516v__value;
  }
  str__temp511v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp517v__buf__unsafe_ptr,&__temp517v__buf__unsafe_size,&__temp517v__buf__unsafe_align,&__temp517v__dat__pos,&__temp517v__dat__length,&__temp517v__dat__first);
  *__temp861v=__temp517v__buf__unsafe_ptr;
  *__temp862v=__temp517v__buf__unsafe_size;
  *__temp863v=__temp517v__buf__unsafe_align;
  *__temp864v=__temp517v__dat__pos;
  *__temp865v=__temp517v__dat__length;
  *__temp866v=__temp517v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int str__temp518v(const char* c, void** __temp868v, unsigned long long* __temp869v, unsigned long long* __temp870v, unsigned long long* __temp871v, unsigned long long* __temp872v, char* __temp873v) {
  void* __temp519v__unsafe_ptr=0;
  unsigned long long __temp519v__unsafe_size=0;
  unsigned long long __temp519v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp520v=0;
  void* __temp521v__buf__unsafe_ptr=0;
  unsigned long long __temp521v__buf__unsafe_size=0;
  unsigned long long __temp521v__buf__unsafe_align=0;
  unsigned long long __temp521v__dat__pos=0;
  unsigned long long __temp521v__dat__length=0;
  char __temp521v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp484v(&__temp519v__unsafe_ptr,&__temp519v__unsafe_size,&__temp519v__unsafe_align);
  buf__unsafe_ptr=__temp519v__unsafe_ptr;
  buf__unsafe_size=__temp519v__unsafe_size;
  buf__unsafe_align=__temp519v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp520v=0;
  __temp_errcode=str__temp512v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp520v,length,&__temp521v__buf__unsafe_ptr,&__temp521v__buf__unsafe_size,&__temp521v__buf__unsafe_align,&__temp521v__dat__pos,&__temp521v__dat__length,&__temp521v__dat__first);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/string.s line 36 column 12\n   unhandled error from str(const char[], nat pos, nat length) -> (const char[], nat, nat, char)\n");
  goto __temp_failure;
  }
  *__temp868v=__temp521v__buf__unsafe_ptr;
  *__temp869v=__temp521v__buf__unsafe_size;
  *__temp870v=__temp521v__buf__unsafe_align;
  *__temp871v=__temp521v__dat__pos;
  *__temp872v=__temp521v__dat__length;
  *__temp873v=__temp521v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp522v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp874v) {
  *__temp874v=s__dat__length;
}

static inline void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp875v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp875v=z;
}

static inline void div__temp157v(unsigned long long x, unsigned long long y, unsigned long long* __temp876v) {
  int __temp158v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp158v__);
  z=x/y;
  *__temp876v=z;
}

static inline void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp877v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp877v=z;
}

static inline void free__temp418v(void** __temp878v) {
  void* allocated=*__temp878v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp878v=allocated;
}

static inline void free__temp424v(void** __temp879v, unsigned long long* __temp880v, unsigned long long* __temp881v, void** __temp882v, unsigned long long* __temp883v, unsigned long long* __temp884v) {
  void* buffer__unsafe_ptr=*__temp879v;
  unsigned long long buffer__unsafe_size=*__temp880v;
  unsigned long long buffer__unsafe_align=*__temp881v;
  unsigned long long __temp425v=0;
  int __temp426v__=0;
  unsigned long long __temp427v=0;
  __temp425v=0;
  eq__temp277v(buffer__unsafe_size,__temp425v,&__temp426v__);
  if(__temp426v__){
  goto __temp_return;
  }
  __temp427v=0;
  buffer__unsafe_size=__temp427v;
  free__temp418v(&buffer__unsafe_ptr);
  __temp_return:
  *__temp879v=buffer__unsafe_ptr;
  *__temp880v=buffer__unsafe_size;
  *__temp881v=buffer__unsafe_align;
  *__temp882v=buffer__unsafe_ptr;
  *__temp883v=buffer__unsafe_size;
  *__temp884v=buffer__unsafe_align;
}

static inline void zero__temp419v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp415v(unsigned long long bytes, void** __temp885v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 22 column 14\n");
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp885v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp429v(void** __temp886v, unsigned long long* __temp887v, unsigned long long* __temp888v, unsigned long long size, void** __temp889v, unsigned long long* __temp890v, unsigned long long* __temp891v) {
  void* buffer__unsafe_ptr=*__temp886v;
  unsigned long long buffer__unsafe_size=*__temp887v;
  unsigned long long buffer__unsafe_align=*__temp888v;
  unsigned long long __temp430v=0;
  int __temp431v__=0;
  int __temp434v__=0;
  unsigned long long __temp435v=0;
  int __temp436v__=0;
  unsigned long long __temp437v=0;
  unsigned long long __temp438v__=0;
  unsigned long long __temp440v=0;
  int __temp441v__=0;
  unsigned long long __temp442v__=0;
  unsigned long long bytes=0;
  void* __temp443v__=0;
  unsigned long long __temp444v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp434v__);
  if(__temp434v__){
  __temp435v=0;
  neq__temp301v(size,__temp435v,&__temp436v__);
  if(__temp436v__){
  __temp437v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp438v__);
  zero__temp419v(buffer__unsafe_ptr,__temp437v,__temp438v__);
  }
  goto __temp_return;
  }
  __temp440v=0;
  neq__temp301v(buffer__unsafe_size,__temp440v,&__temp441v__);
  if(__temp441v__){
  printf("%s", "\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/core/array.s line 41 column 14\n");
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp442v__);
  bytes=__temp442v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp415v(bytes,&__temp443v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/array.s line 44 column 36\n   unhandled error from alloc(nat bytes) -> (any ptr allocated)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp443v__;
  __temp444v=0;
  zero__temp419v(buffer__unsafe_ptr,__temp444v,bytes);
  __temp_return:
  *__temp886v=buffer__unsafe_ptr;
  *__temp887v=buffer__unsafe_size;
  *__temp888v=buffer__unsafe_align;
  *__temp889v=buffer__unsafe_ptr;
  *__temp890v=buffer__unsafe_size;
  *__temp891v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int realloc__temp416v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp892v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp417v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m reallocation failed\n\033[31mat\033[0m std/unsafe.s line 29 column 14\n");
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp12v(new_allocated,allocated__unsafe_ptr,&__temp417v__);
  *__temp892v=__temp417v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp893v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp893v=z;
}

int resize__temp446v(void** __temp898v, unsigned long long* __temp899v, unsigned long long* __temp900v, unsigned long long size, void** __temp901v, unsigned long long* __temp902v, unsigned long long* __temp903v) {
  void* buffer__unsafe_ptr=*__temp898v;
  unsigned long long buffer__unsafe_size=*__temp899v;
  unsigned long long buffer__unsafe_align=*__temp900v;
  int __temp447v__=0;
  unsigned long long __temp448v=0;
  int __temp449v__=0;
  void* __temp450v__unsafe_ptr=0;
  unsigned long long __temp450v__unsafe_size=0;
  unsigned long long __temp450v__unsafe_align=0;
  unsigned long long __temp451v=0;
  int __temp452v__=0;
  void* __temp453v__unsafe_ptr=0;
  unsigned long long __temp453v__unsafe_size=0;
  unsigned long long __temp453v__unsafe_align=0;
  unsigned long long __temp455v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp456v__=0;
  unsigned long long bytes=0;
  void* __temp457v__=0;
  int __temp458v__=0;
  unsigned long long __temp896v=0;
  int __temp897v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp447v__);
  if(__temp447v__){
  goto __temp_return;
  }
  __temp448v=0;
  eq__temp277v(size,__temp448v,&__temp449v__);
  if(__temp449v__){
  free__temp424v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp450v__unsafe_ptr,&__temp450v__unsafe_size,&__temp450v__unsafe_align);
  buffer__unsafe_ptr=__temp450v__unsafe_ptr;
  buffer__unsafe_size=__temp450v__unsafe_size;
  buffer__unsafe_align=__temp450v__unsafe_align;
  goto __temp_return;
  }
  __temp451v=0;
  eq__temp277v(buffer__unsafe_size,__temp451v,&__temp452v__);
  if(__temp452v__){
  __temp_errcode=alloc__temp429v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp453v__unsafe_ptr,&__temp453v__unsafe_size,&__temp453v__unsafe_align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/array.s line 68 column 25\n   unhandled error from alloc(mut any[], nat size) -> (mut any[])\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp453v__unsafe_ptr;
  buffer__unsafe_size=__temp453v__unsafe_size;
  buffer__unsafe_align=__temp453v__unsafe_align;
  goto __temp_return;
  }
  mul__temp133v(buffer__unsafe_size,buffer__unsafe_align,&__temp455v__);
  prev_bytes=__temp455v__;
  buffer__unsafe_size=size;
  mul__temp133v(buffer__unsafe_align,size,&__temp456v__);
  bytes=__temp456v__;
  __temp_errcode=realloc__temp416v(buffer__unsafe_ptr,bytes,&__temp457v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/array.s line 73 column 53\n   unhandled error from realloc(any ptr allocated.unsafe_ptr, nat bytes) -> (any ptr)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp457v__;
  lt__temp181v(prev_bytes,bytes,&__temp458v__);
  if(__temp458v__){
  zero__temp419v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp898v=buffer__unsafe_ptr;
  *__temp899v=buffer__unsafe_size;
  *__temp900v=buffer__unsafe_align;
  *__temp901v=buffer__unsafe_ptr;
  *__temp902v=buffer__unsafe_size;
  *__temp903v=buffer__unsafe_align;
  
  __temp_failure:__temp896v=0;
  neq__temp301v(__temp453v__unsafe_size,__temp896v,&__temp897v);
  if(__temp897v){
  __temp453v__unsafe_size=0;
  free__temp418v(&__temp453v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline int copy__temp523v(void** __temp904v, unsigned long long* __temp905v, unsigned long long* __temp906v, unsigned long long* __temp907v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp908v, unsigned long long* __temp909v, unsigned long long* __temp910v, unsigned long long* __temp911v, unsigned long long* __temp912v, char* __temp913v) {
  void* buf__unsafe_ptr=*__temp904v;
  unsigned long long buf__unsafe_size=*__temp905v;
  unsigned long long buf__unsafe_align=*__temp906v;
  unsigned long long pos=*__temp907v;
  unsigned long long __temp524v__=0;
  unsigned long long __temp525v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp526v__=0;
  int __temp527v__=0;
  unsigned long long prev_pos=0;
  void* __temp528v__buf__unsafe_ptr=0;
  unsigned long long __temp528v__buf__unsafe_size=0;
  unsigned long long __temp528v__buf__unsafe_align=0;
  unsigned long long __temp528v__dat__pos=0;
  unsigned long long __temp528v__dat__length=0;
  char __temp528v__dat__first=0;
  int __temp_errcode=0;
  len__temp522v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp524v__);
  add__temp109v(pos,__temp524v__,&__temp525v__);
  next_pos=__temp525v__;
  len__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp526v__);
  ge__temp253v(next_pos,__temp526v__,&__temp527v__);
  if(__temp527v__){
  printf("%s", "\033[31mfail\033[0m string buffer out of memory\n\033[31mat\033[0m std/core/string.s line 44 column 14\n");
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  prev_pos=pos;
  pos=next_pos;
  str__temp511v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp528v__buf__unsafe_ptr,&__temp528v__buf__unsafe_size,&__temp528v__buf__unsafe_align,&__temp528v__dat__pos,&__temp528v__dat__length,&__temp528v__dat__first);
  *__temp904v=buf__unsafe_ptr;
  *__temp905v=buf__unsafe_size;
  *__temp906v=buf__unsafe_align;
  *__temp907v=pos;
  *__temp908v=__temp528v__buf__unsafe_ptr;
  *__temp909v=__temp528v__buf__unsafe_size;
  *__temp910v=__temp528v__buf__unsafe_align;
  *__temp911v=__temp528v__dat__pos;
  *__temp912v=__temp528v__dat__length;
  *__temp913v=__temp528v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int copy__temp553v(void** __temp916v, unsigned long long* __temp917v, unsigned long long* __temp918v, unsigned long long* __temp919v, const char* _other, void** __temp920v, unsigned long long* __temp921v, unsigned long long* __temp922v, unsigned long long* __temp923v, unsigned long long* __temp924v, char* __temp925v) {
  void* li__buffer__unsafe_ptr=*__temp916v;
  unsigned long long li__buffer__unsafe_size=*__temp917v;
  unsigned long long li__buffer__unsafe_align=*__temp918v;
  unsigned long long li__length=*__temp919v;
  void* __temp554v__buf__unsafe_ptr=0;
  unsigned long long __temp554v__buf__unsafe_size=0;
  unsigned long long __temp554v__buf__unsafe_align=0;
  unsigned long long __temp554v__dat__pos=0;
  unsigned long long __temp554v__dat__length=0;
  char __temp554v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp555v__=0;
  unsigned long long __temp556v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp557v__=0;
  int __temp558v__=0;
  unsigned long long __temp559v=0;
  unsigned long long __temp560v__=0;
  unsigned long long __temp561v=0;
  unsigned long long __temp562v__=0;
  unsigned long long __temp563v__=0;
  void* __temp564v__unsafe_ptr=0;
  unsigned long long __temp564v__unsafe_size=0;
  unsigned long long __temp564v__unsafe_align=0;
  void* __temp565v__buf__unsafe_ptr=0;
  unsigned long long __temp565v__buf__unsafe_size=0;
  unsigned long long __temp565v__buf__unsafe_align=0;
  unsigned long long __temp565v__dat__pos=0;
  unsigned long long __temp565v__dat__length=0;
  char __temp565v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp518v(_other,&__temp554v__buf__unsafe_ptr,&__temp554v__buf__unsafe_size,&__temp554v__buf__unsafe_align,&__temp554v__dat__pos,&__temp554v__dat__length,&__temp554v__dat__first);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/string.s line 62 column 13\n   unhandled error from str(cstr c) -> (const char[], nat, nat, char)\n");
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp554v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp554v__buf__unsafe_size;
  other__buf__unsafe_align=__temp554v__buf__unsafe_align;
  other__dat__pos=__temp554v__dat__pos;
  other__dat__length=__temp554v__dat__length;
  other__dat__first=__temp554v__dat__first;
  prev_prev_length=li__length;
  len__temp522v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp555v__);
  add__temp109v(li__length,__temp555v__,&__temp556v__);
  prev_length=__temp556v__;
  len__temp482v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp557v__);
  ge__temp253v(prev_length,__temp557v__,&__temp558v__);
  if(__temp558v__){
  __temp559v=2;
  div__temp157v(prev_length,__temp559v,&__temp560v__);
  __temp561v=1;
  add__temp109v(__temp560v__,__temp561v,&__temp562v__);
  add__temp109v(prev_length,__temp562v__,&__temp563v__);
  __temp_errcode=resize__temp446v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp563v__,&__temp564v__unsafe_ptr,&__temp564v__unsafe_size,&__temp564v__unsafe_align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/string.s line 66 column 31\n   unhandled error from resize(mut any[], nat size) -> (mut any[])\n");
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp564v__unsafe_ptr;
  li__buffer__unsafe_size=__temp564v__unsafe_size;
  li__buffer__unsafe_align=__temp564v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp523v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp565v__buf__unsafe_ptr,&__temp565v__buf__unsafe_size,&__temp565v__buf__unsafe_align,&__temp565v__dat__pos,&__temp565v__dat__length,&__temp565v__dat__first);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/string.s line 68 column 12\n   unhandled error from copy(char[], mut nat pos, const char[], nat other.dat.pos, nat other.dat.length, char other.dat.first) -> (const char[], nat, nat, char)\n");
  goto __temp_failure;
  }
  *__temp916v=li__buffer__unsafe_ptr;
  *__temp917v=li__buffer__unsafe_size;
  *__temp918v=li__buffer__unsafe_align;
  *__temp919v=li__length;
  *__temp920v=__temp565v__buf__unsafe_ptr;
  *__temp921v=__temp565v__buf__unsafe_size;
  *__temp922v=__temp565v__buf__unsafe_align;
  *__temp923v=__temp565v__dat__pos;
  *__temp924v=__temp565v__dat__length;
  *__temp925v=__temp565v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int get__temp566v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long i, void** __temp926v) {
  unsigned long long __temp567v__=0;
  void* __temp568v__=0;
  int __temp_errcode=0;
  add__temp109v(s__dat__pos,i,&__temp567v__);
  __temp_errcode=get__temp478v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,__temp567v__,&__temp568v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/string.s line 71 column 17\n   unhandled error from get(const any[], nat i) -> (any ptr)\n");
  goto __temp_failure;
  }
  *__temp926v=__temp568v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void char__temp570v(const char* s, char* __temp927v) {
  char c=0;
  c=s?s[0]:0;
  *__temp927v=c;
}

static inline void eq__temp571v(char x, char y, int* __temp928v) {
  int z=0;
  z=(x==y);
  *__temp928v=z;
}

static inline void not__temp17v(int value, int* __temp929v) {
  int z=0;
  z=value?0:1;
  *__temp929v=z;
}

static inline void is_different__temp60v(double x, double y, int* __temp930v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp930v=__temp62v__;
}

static inline void mul__temp111v(double x, double y, double* __temp931v) {
  int __temp112v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp112v__);
  z=x*y;
  *__temp931v=z;
}

static inline void add__temp87v(double x, double y, double* __temp932v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp932v=z;
}

static inline void sub__temp303v(double x, double y, double* __temp933v) {
  int __temp304v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp304v__);
  z=x-y;
  *__temp933v=z;
}

static inline int float__temp762v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, double* __temp935v) {
  void* __temp763v__buf__unsafe_ptr=0;
  unsigned long long __temp763v__buf__unsafe_size=0;
  unsigned long long __temp763v__buf__unsafe_align=0;
  unsigned long long __temp763v__dat__pos=0;
  unsigned long long __temp763v__dat__length=0;
  char __temp763v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp764v=0;
  unsigned long long __temp765v__=0;
  int __temp766v__=0;
  double __temp767v=0;
  double number=0;
  unsigned long long __temp768v=0;
  unsigned long long i=0;
  unsigned long long __temp769v=0;
  unsigned long long __temp770v__=0;
  int __temp771v__=0;
  unsigned long long __temp772v=0;
  unsigned long long __temp773v=0;
  void* __temp774v__=0;
  char __temp775v__value=0;
  const char* __temp776v=0;
  char __temp777v__=0;
  int __temp778v__=0;
  int negative=0;
  void* __temp783v__=0;
  char __temp784v__value=0;
  const char* __temp785v=0;
  char __temp786v__=0;
  int __temp787v__=0;
  unsigned long long __temp788v=0;
  unsigned long long __temp789v__=0;
  unsigned long long __temp790v__=0;
  int __temp791v__=0;
  unsigned long long __temp779v=0;
  unsigned long long __temp780v__=0;
  unsigned long long __temp781v__=0;
  int __temp782v__=0;
  unsigned long long __temp792v__=0;
  int __temp793v__=0;
  void* __temp794v__=0;
  char __temp795v__value=0;
  char c=0;
  int is_digit=0;
  double digit=0;
  const char* __temp796v=0;
  char __temp797v__=0;
  int __temp798v__=0;
  int is_dot=0;
  unsigned long long __temp799v=0;
  unsigned long long __temp800v__=0;
  int __temp801v__=0;
  double __temp802v=0;
  double __temp803v__=0;
  double __temp804v__=0;
  unsigned long long __temp805v=0;
  unsigned long long __temp806v__=0;
  unsigned long long __temp807v__=0;
  int __temp808v__=0;
  double __temp809v=0;
  double base=0;
  unsigned long long __temp810v__=0;
  int __temp811v__=0;
  void* __temp812v__=0;
  char __temp813v__value=0;
  char d=0;
  int is_decimal_digit=0;
  double decimal_digit=0;
  int __temp814v__=0;
  double __temp815v__=0;
  double __temp816v__=0;
  double __temp817v=0;
  double __temp818v__=0;
  unsigned long long __temp819v=0;
  unsigned long long __temp820v__=0;
  double __temp821v=0;
  double __temp822v__=0;
  int __temp_errcode=0;
  str__temp511v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp763v__buf__unsafe_ptr,&__temp763v__buf__unsafe_size,&__temp763v__buf__unsafe_align,&__temp763v__dat__pos,&__temp763v__dat__length,&__temp763v__dat__first);
  s__buf__unsafe_ptr=__temp763v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp763v__buf__unsafe_size;
  s__buf__unsafe_align=__temp763v__buf__unsafe_align;
  s__dat__pos=__temp763v__dat__pos;
  s__dat__length=__temp763v__dat__length;
  s__dat__first=__temp763v__dat__first;
  __temp764v=0;
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp765v__);
  eq__temp277v(__temp764v,__temp765v__,&__temp766v__);
  if(__temp766v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from empty string\n\033[31mat\033[0m std/core/convertstr.s line 93 column 14\n");
  __temp_errcode=18;
  goto __temp_failure;
  }
  __temp767v=0.0;
  number=__temp767v;
  __temp768v=0;
  i=__temp768v;
  __temp769v=0;
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp770v__);
  eq__temp277v(__temp769v,__temp770v__,&__temp771v__);
  if(__temp771v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from empty string\n\033[31mat\033[0m std/core/convertstr.s line 97 column 14\n");
  __temp_errcode=18;
  goto __temp_failure;
  }
  __temp772v=0;
  i=__temp772v;
  __temp773v=0;
  __temp_errcode=get__temp566v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,__temp773v,&__temp774v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/convertstr.s line 99 column 17\n   unhandled error from get(const char[], nat s.dat.pos, nat s.dat.length, char s.dat.first, nat i) -> (char ptr)\n");
  goto __temp_failure;
  }
  if(!__temp774v__){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/core/convertstr.s line 99 column 17\n");
  goto __temp_failure;
  }
  memcpy(&__temp775v__value,(char*)__temp774v__,1);
  __temp776v="-";
  char__temp570v(__temp776v,&__temp777v__);
  eq__temp571v(__temp775v__value,__temp777v__,&__temp778v__);
  negative=__temp778v__;
  if(negative){
  __temp779v=1;
  add__temp109v(i,__temp779v,&__temp780v__);
  i=__temp780v__;
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp781v__);
  eq__temp277v(i,__temp781v__,&__temp782v__);
  if(__temp782v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from string with only a sign\n\033[31mat\033[0m std/core/convertstr.s line 103 column 18\n");
  __temp_errcode=19;
  goto __temp_failure;
  }
  }
  else{
  __temp_errcode=get__temp566v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp783v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/convertstr.s line 104 column 14\n   unhandled error from get(const char[], nat s.dat.pos, nat s.dat.length, char s.dat.first, nat i) -> (char ptr)\n");
  goto __temp_failure;
  }
  if(!__temp783v__){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/core/convertstr.s line 104 column 14\n");
  goto __temp_failure;
  }
  memcpy(&__temp784v__value,(char*)__temp783v__,1);
  __temp785v="+";
  char__temp570v(__temp785v,&__temp786v__);
  eq__temp571v(__temp784v__value,__temp786v__,&__temp787v__);
  if(__temp787v__){
  __temp788v=1;
  add__temp109v(i,__temp788v,&__temp789v__);
  i=__temp789v__;
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp790v__);
  eq__temp277v(i,__temp790v__,&__temp791v__);
  if(__temp791v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from string with only a sign\n\033[31mat\033[0m std/core/convertstr.s line 107 column 18\n");
  __temp_errcode=19;
  goto __temp_failure;
  }
  }
  }
  while(1){
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp792v__);
  lt__temp181v(i,__temp792v__,&__temp793v__);
  if(!__temp793v__)break;
  __temp_errcode=get__temp566v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp794v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/convertstr.s line 109 column 14\n   unhandled error from get(const char[], nat s.dat.pos, nat s.dat.length, char s.dat.first, nat i) -> (char ptr)\n");
  goto __temp_failure;
  }
  if(!__temp794v__){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/core/convertstr.s line 109 column 14\n");
  goto __temp_failure;
  }
  memcpy(&__temp795v__value,(char*)__temp794v__,1);
  c=__temp795v__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  __temp796v=".";
  char__temp570v(__temp796v,&__temp797v__);
  eq__temp571v(c,__temp797v__,&__temp798v__);
  is_dot=__temp798v__;
  if(is_dot){
  __temp799v=1;
  add__temp109v(i,__temp799v,&__temp800v__);
  i=__temp800v__;
  break;
  }
  not__temp17v(is_digit,&__temp801v__);
  if(__temp801v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from non-number string\n\033[31mat\033[0m std/core/convertstr.s line 116 column 18\n");
  __temp_errcode=20;
  goto __temp_failure;
  }
  __temp802v=10.0;
  mul__temp111v(number,__temp802v,&__temp803v__);
  add__temp87v(__temp803v__,digit,&__temp804v__);
  number=__temp804v__;
  __temp805v=1;
  add__temp109v(i,__temp805v,&__temp806v__);
  i=__temp806v__;
  }
  if(is_dot){
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp807v__);
  eq__temp277v(i,__temp807v__,&__temp808v__);
  if(__temp808v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from string without a value after the dot\n\033[31mat\033[0m std/core/convertstr.s line 121 column 18\n");
  __temp_errcode=21;
  goto __temp_failure;
  }
  __temp809v=0.1;
  base=__temp809v;
  while(1){
  len__temp522v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp810v__);
  lt__temp181v(i,__temp810v__,&__temp811v__);
  if(!__temp811v__)break;
  __temp_errcode=get__temp566v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp812v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/core/convertstr.s line 124 column 18\n   unhandled error from get(const char[], nat s.dat.pos, nat s.dat.length, char s.dat.first, nat i) -> (char ptr)\n");
  goto __temp_failure;
  }
  if(!__temp812v__){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m std/core/convertstr.s line 124 column 18\n");
  goto __temp_failure;
  }
  memcpy(&__temp813v__value,(char*)__temp812v__,1);
  d=__temp813v__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__temp17v(is_decimal_digit,&__temp814v__);
  if(__temp814v__){
  printf("%s", "\033[31mfail\033[0m invalid float conversion from non-number string\n\033[31mat\033[0m std/core/convertstr.s line 127 column 22\n");
  __temp_errcode=20;
  goto __temp_failure;
  }
  mul__temp111v(decimal_digit,base,&__temp815v__);
  add__temp87v(number,__temp815v__,&__temp816v__);
  number=__temp816v__;
  __temp817v=0.1;
  mul__temp111v(base,__temp817v,&__temp818v__);
  base=__temp818v__;
  __temp819v=1;
  add__temp109v(i,__temp819v,&__temp820v__);
  i=__temp820v__;
  }
  }
  if(negative){
  __temp821v=0.0;
  sub__temp303v(__temp821v,number,&__temp822v__);
  number=__temp822v__;
  }
  *__temp935v=number;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp345v(double value) {
  const char* __temp347v=0;
  const char* endl=0;
  __temp347v="\n";
  endl=__temp347v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp823v() {
  void* __temp826v__unsafe_ptr=0;
  unsigned long long __temp826v__unsafe_size=0;
  unsigned long long __temp826v__unsafe_align=0;
  void* __temp827v__buffer__unsafe_ptr=0;
  unsigned long long __temp827v__buffer__unsafe_size=0;
  unsigned long long __temp827v__buffer__unsafe_align=0;
  unsigned long long __temp827v__length=0;
  void* mem__buffer__unsafe_ptr=0;
  unsigned long long mem__buffer__unsafe_size=0;
  unsigned long long mem__buffer__unsafe_align=0;
  unsigned long long mem__length=0;
  const char* __temp828v=0;
  void* __temp829v__buf__unsafe_ptr=0;
  unsigned long long __temp829v__buf__unsafe_size=0;
  unsigned long long __temp829v__buf__unsafe_align=0;
  unsigned long long __temp829v__dat__pos=0;
  unsigned long long __temp829v__dat__length=0;
  char __temp829v__dat__first=0;
  double __temp830v__=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp824v(&__temp826v__unsafe_ptr,&__temp826v__unsafe_size,&__temp826v__unsafe_align);
  list__temp489v(&__temp826v__unsafe_ptr,&__temp826v__unsafe_size,&__temp826v__unsafe_align,&__temp827v__buffer__unsafe_ptr,&__temp827v__buffer__unsafe_size,&__temp827v__buffer__unsafe_align,&__temp827v__length);
  mem__buffer__unsafe_ptr=__temp827v__buffer__unsafe_ptr;
  mem__buffer__unsafe_size=__temp827v__buffer__unsafe_size;
  mem__buffer__unsafe_align=__temp827v__buffer__unsafe_align;
  mem__length=__temp827v__length;
  __temp828v="123";
  __temp_errcode=copy__temp553v(&mem__buffer__unsafe_ptr,&mem__buffer__unsafe_size,&mem__buffer__unsafe_align,&mem__length,__temp828v,&__temp829v__buf__unsafe_ptr,&__temp829v__buf__unsafe_size,&__temp829v__buf__unsafe_align,&__temp829v__dat__pos,&__temp829v__dat__length,&__temp829v__dat__first);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 7 column 21\n   unhandled error from copy(list, cstr _other) -> (const char[], nat, nat, char)\n");
  goto __temp_failure;
  }
  __temp_errcode=float__temp762v(__temp829v__buf__unsafe_ptr,__temp829v__buf__unsafe_size,__temp829v__buf__unsafe_align,__temp829v__dat__pos,__temp829v__dat__length,__temp829v__dat__first,&__temp830v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 7 column 11\n   unhandled error from float(const char[], nat _s.dat.pos, nat _s.dat.length, char _s.dat.first) -> (mut float number)\n");
  goto __temp_failure;
  }
  print__temp345v(__temp830v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp823v();return 0;}