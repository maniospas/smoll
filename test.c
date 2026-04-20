#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void exists__temp389v(void* x, int* __temp537v) {
  int z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp537v=z;
}

static inline void not__temp16v(int value, int* __temp538v) {
  int z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp538v=z;
}

static inline void print__temp337v(const char* value, const char* endl) {
  int __temp338v=0;
  printf("%s%s",value,endl);
}

static inline void print__temp339v(const char* value) {
  int __temp340v=0;
  const char* __temp341v=0;
  const char* endl=0;
  __temp341v="\n";
  endl=__temp341v;
  printf("%s%s",value,endl);
}

static inline int read__temp472v(const char* path, void** __temp539v) {
  void* unsafe_contents=0;
  int __temp473v__z=0;
  int __temp474v__z=0;
  const char* __temp475v=0;
  const char* __temp476v=0;
  int __temp_errcode=0;
  unsafe_contents=fopen(path,"r");
  exists__temp389v(unsafe_contents,&__temp473v__z);
  not__temp16v(__temp473v__z,&__temp474v__z);
  if(__temp474v__z){
  __temp475v="Failed to open file:";
  __temp476v=" ";
  print__temp337v(__temp475v,__temp476v);
  print__temp339v(path);
  __temp_errcode=9;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp539v=unsafe_contents;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void char__temp_buffer__buffer__temp522v(void** __temp540v, unsigned long long* __temp541v, unsigned long long* __temp542v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  __temp_return:
  *__temp540v=unsafe_ptr;
  *__temp541v=unsafe_size;
  *__temp542v=unsafe_align;
}

static inline void false__temp7v(int* __temp543v) {
  int value=0;
  __temp_return:
  *__temp543v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp544v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp544v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp545v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp545v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp546v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp546v=z;
}

static inline void free__temp410v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp416v(void** __temp547v, unsigned long long* __temp548v, unsigned long long* __temp549v, void** __temp550v, unsigned long long* __temp551v, unsigned long long* __temp552v) {
  void* buffer__unsafe_ptr=*__temp547v;
  unsigned long long buffer__unsafe_size=*__temp548v;
  unsigned long long buffer__unsafe_align=*__temp549v;
  unsigned long long __temp417v=0;
  int __temp418v__z=0;
  unsigned long long __temp419v=0;
  __temp417v=0;
  eq__temp276v(buffer__unsafe_size,__temp417v,&__temp418v__z);
  if(__temp418v__z){
  goto __temp_return;
  }
  __temp419v=0;
  buffer__unsafe_size=__temp419v;
  free__temp410v(buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp547v=buffer__unsafe_ptr;
  *__temp548v=buffer__unsafe_size;
  *__temp549v=buffer__unsafe_align;
  *__temp550v=buffer__unsafe_ptr;
  *__temp551v=buffer__unsafe_size;
  *__temp552v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp553v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp553v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp554v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp554v=z;
}

static inline void zero__temp411v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp407v(unsigned long long bytes, void** __temp555v) {
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
  *__temp555v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp421v(void** __temp556v, unsigned long long* __temp557v, unsigned long long* __temp558v, unsigned long long size, void** __temp559v, unsigned long long* __temp560v, unsigned long long* __temp561v) {
  void* buffer__unsafe_ptr=*__temp556v;
  unsigned long long buffer__unsafe_size=*__temp557v;
  unsigned long long buffer__unsafe_align=*__temp558v;
  void* __temp422v__buffer__unsafe_ptr=0;
  unsigned long long __temp422v__buffer__unsafe_size=0;
  unsigned long long __temp422v__buffer__unsafe_align=0;
  int __temp423v__z=0;
  unsigned long long __temp424v=0;
  int __temp425v__z=0;
  unsigned long long __temp426v=0;
  unsigned long long __temp427v__z=0;
  unsigned long long __temp429v=0;
  int __temp430v__z=0;
  unsigned long long __temp431v__z=0;
  unsigned long long bytes=0;
  void* __temp432v__allocated=0;
  unsigned long long __temp433v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp423v__z);
  if(__temp423v__z){
  __temp424v=0;
  neq__temp300v(size,__temp424v,&__temp425v__z);
  if(__temp425v__z){
  __temp426v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp427v__z);
  zero__temp411v(buffer__unsafe_ptr,__temp426v,__temp427v__z);
  }
  goto __temp_return;
  }
  __temp429v=0;
  neq__temp300v(buffer__unsafe_size,__temp429v,&__temp430v__z);
  if(__temp430v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp431v__z);
  bytes=__temp431v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp407v(bytes,&__temp432v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp432v__allocated;
  __temp433v=0;
  zero__temp411v(buffer__unsafe_ptr,__temp433v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp556v=buffer__unsafe_ptr;
  *__temp557v=buffer__unsafe_size;
  *__temp558v=buffer__unsafe_align;
  *__temp559v=buffer__unsafe_ptr;
  *__temp560v=buffer__unsafe_size;
  *__temp561v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp562v) {
  __temp_return:
  *__temp562v=to;
}

static inline void add__temp412v(void* allocated, unsigned long long offset, void** __temp563v) {
  void* element=0;
  void* __temp413v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp413v__to);
  goto __temp_return;
  __temp_return:
  *__temp563v=__temp413v__to;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp564v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp564v=z;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp565v) {
  int __temp327v____temp85v____temp26v__value=0;
  int __temp328v=0;
  int __temp329v__z=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp83v(x,y,&__temp327v____temp85v____temp26v__value);
  lt__temp180v(x,y,&__temp329v__z);
  if(__temp329v__z){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp565v=z;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp566v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp566v=z;
}

static inline void str__temp401v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char first_character, void** __temp567v, unsigned long long* __temp568v, unsigned long long* __temp569v, unsigned long long* __temp570v, unsigned long long* __temp571v, char* __temp572v) {
  goto __temp_return;
  __temp_return:
  *__temp567v=buf__unsafe_ptr;
  *__temp568v=buf__unsafe_size;
  *__temp569v=buf__unsafe_align;
  *__temp570v=pos;
  *__temp571v=length;
  *__temp572v=first_character;
}

static inline int line__temp510v(void** __temp573v, unsigned long long* __temp574v, unsigned long long* __temp575v, void** __temp576v, void** __temp577v, unsigned long long* __temp578v, unsigned long long* __temp579v, unsigned long long* __temp580v, unsigned long long* __temp581v, char* __temp582v) {
  void* buf__unsafe_ptr=*__temp573v;
  unsigned long long buf__unsafe_size=*__temp574v;
  unsigned long long buf__unsafe_align=*__temp575v;
  void* f__unsafe_contents=*__temp576v;
  int __temp511v=0;
  unsigned long long __temp512v=0;
  unsigned long long pos=0;
  void* __temp513v____temp413v__to=0;
  void* contents=0;
  unsigned long long __temp514v__z=0;
  unsigned long long size=0;
  int success=0;
  int __temp515v__z=0;
  unsigned long long bytes_read=0;
  char first=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp516v__z=0;
  void* __temp517v__buf__unsafe_ptr=0;
  unsigned long long __temp517v__buf__unsafe_size=0;
  unsigned long long __temp517v__buf__unsafe_align=0;
  unsigned long long __temp517v__pos=0;
  unsigned long long __temp517v__length=0;
  char __temp517v__first_character=0;
  int __temp_errcode=0;
  __temp512v=0;
  pos=__temp512v;
  add__temp412v(buf__unsafe_ptr,pos,&__temp513v____temp413v__to);
  contents=__temp513v____temp413v__to;
  __temp_errcode=sub__temp326v(buf__unsafe_size,pos,&__temp514v__z);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp514v__z;
  success=f__unsafe_contents?fgets((char*)contents,size,(FILE*)f__unsafe_contents)!=0:0;
  not__temp16v(success,&__temp515v__z);
  if(__temp515v__z){
  __temp_errcode=12;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  first=bytes_read?((char*)contents)[0]:0;
  prev_pos=pos;
  add__temp108v(pos,bytes_read,&__temp516v__z);
  pos=__temp516v__z;
  str__temp401v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,first,&__temp517v__buf__unsafe_ptr,&__temp517v__buf__unsafe_size,&__temp517v__buf__unsafe_align,&__temp517v__pos,&__temp517v__length,&__temp517v__first_character);
  goto __temp_return;
  __temp_return:
  *__temp573v=buf__unsafe_ptr;
  *__temp574v=buf__unsafe_size;
  *__temp575v=buf__unsafe_align;
  *__temp576v=f__unsafe_contents;
  *__temp577v=__temp517v__buf__unsafe_ptr;
  *__temp578v=__temp517v__buf__unsafe_size;
  *__temp579v=__temp517v__buf__unsafe_align;
  *__temp580v=__temp517v__pos;
  *__temp581v=__temp517v__length;
  *__temp582v=__temp517v__first_character;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp402v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__pos, unsigned long long s__length, char s__first_character, const char* endl) {
  int __temp403v=0;
  printf("%.*s%s",(int)s__length,s__pos+(const char*)s__buf__unsafe_ptr,endl);
}

static inline int main__temp518v() {
  const char* __temp519v=0;
  void* __temp520v__unsafe_contents=0;
  void* f__unsafe_contents=0;
  void* __temp524v__unsafe_ptr=0;
  unsigned long long __temp524v__unsafe_size=0;
  unsigned long long __temp524v__unsafe_align=0;
  unsigned long long __temp525v=0;
  void* __temp526v__buffer__unsafe_ptr=0;
  unsigned long long __temp526v__buffer__unsafe_size=0;
  unsigned long long __temp526v__buffer__unsafe_align=0;
  void* __temp527v____temp422v__buffer__unsafe_ptr=0;
  unsigned long long __temp527v____temp422v__buffer__unsafe_size=0;
  unsigned long long __temp527v____temp422v__buffer__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  int __temp528v=0;
  void* __temp529v____temp517v__buf__unsafe_ptr=0;
  unsigned long long __temp529v____temp517v__buf__unsafe_size=0;
  unsigned long long __temp529v____temp517v__buf__unsafe_align=0;
  unsigned long long __temp529v____temp517v__pos=0;
  unsigned long long __temp529v____temp517v__length=0;
  char __temp529v____temp517v__first_character=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__pos=0;
  unsigned long long line__length=0;
  char line__first_character=0;
  const char* __temp530v=0;
  const char* __temp531v=0;
  const char* __temp533v=0;
  const char* __temp535v=0;
  int __temp_errcode=0;
  __temp519v="README.md";
  __temp_errcode=read__temp472v(__temp519v,&__temp520v__unsafe_contents);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_contents=__temp520v__unsafe_contents;
  char__temp_buffer__buffer__temp522v(&__temp524v__unsafe_ptr,&__temp524v__unsafe_size,&__temp524v__unsafe_align);
  __temp525v=1024;
  __temp_errcode=alloc__temp421v(&__temp524v__unsafe_ptr,&__temp524v__unsafe_size,&__temp524v__unsafe_align,__temp525v,&__temp526v__buffer__unsafe_ptr,&__temp526v__buffer__unsafe_size,&__temp526v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp526v__buffer__unsafe_ptr;
  mem__unsafe_size=__temp526v__buffer__unsafe_size;
  mem__unsafe_align=__temp526v__buffer__unsafe_align;
  while(1){
  __temp528v=line__temp510v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&f__unsafe_contents,&__temp529v____temp517v__buf__unsafe_ptr,&__temp529v____temp517v__buf__unsafe_size,&__temp529v____temp517v__buf__unsafe_align,&__temp529v____temp517v__pos,&__temp529v____temp517v__length,&__temp529v____temp517v__first_character);
  line__buf__unsafe_ptr=__temp529v____temp517v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp529v____temp517v__buf__unsafe_size;
  line__buf__unsafe_align=__temp529v____temp517v__buf__unsafe_align;
  line__pos=__temp529v____temp517v__pos;
  line__length=__temp529v____temp517v__length;
  line__first_character=__temp529v____temp517v__first_character;
  __temp528v=__temp528v==0;
  if(!__temp528v)break;
  __temp530v="|";
  __temp531v="";
  print__temp337v(__temp530v,__temp531v);
  __temp533v="";
  print__temp402v(line__buf__unsafe_ptr,line__buf__unsafe_size,line__buf__unsafe_align,line__pos,line__length,line__first_character,__temp533v);
  }
  __temp535v="";
  print__temp339v(__temp535v);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:free__temp416v(&__temp526v__buffer__unsafe_ptr,&__temp526v__buffer__unsafe_size,&__temp526v__buffer__unsafe_align,&__temp527v____temp422v__buffer__unsafe_ptr,&__temp527v____temp422v__buffer__unsafe_size,&__temp527v____temp422v__buffer__unsafe_align);
  if(__temp520v__unsafe_contents)fclose((FILE*)__temp520v__unsafe_contents);
  __temp520v__unsafe_contents=0;
  
  return __temp_errcode;
}

int main() {main__temp518v();return 0;}