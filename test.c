#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void print__temp339v(const char* value) {
  int __temp340v=0;
  const char* __temp341v=0;
  const char* endl=0;
  __temp341v="\n";
  endl=__temp341v;
  printf("%s%s",value,endl);
}

static inline void exists__temp389v(void* x, int* __temp558v) {
  int z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp558v=z;
}

static inline void not__temp16v(int value, int* __temp559v) {
  int z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp559v=z;
}

static inline void print__temp337v(const char* value, const char* endl) {
  int __temp338v=0;
  printf("%s%s",value,endl);
}

static inline int read__temp491v(const char* path, void** __temp560v) {
  void* unsafe_ptr=0;
  const char* __temp492v=0;
  int __temp494v__z=0;
  int __temp495v__z=0;
  const char* __temp496v=0;
  const char* __temp497v=0;
  int __temp_errcode=0;
  unsafe_ptr=fopen(path,"r");
  exists__temp389v(unsafe_ptr,&__temp494v__z);
  not__temp16v(__temp494v__z,&__temp495v__z);
  if(__temp495v__z){
  __temp496v="Failed to open file:";
  __temp497v=" ";
  print__temp337v(__temp496v,__temp497v);
  print__temp339v(path);
  __temp_errcode=9;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp560v=unsafe_ptr;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void false__temp7v(int* __temp561v) {
  int value=0;
  __temp_return:
  *__temp561v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp562v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp562v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp563v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp563v=__temp85v____temp26v__value;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp564v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp564v=z;
}

static inline void KB__temp399v(unsigned long long x, unsigned long long* __temp565v) {
  unsigned long long __temp400v=0;
  unsigned long long __temp401v__z=0;
  __temp400v=1024;
  mul__temp132v(x,__temp400v,&__temp401v__z);
  goto __temp_return;
  __temp_return:
  *__temp565v=__temp401v__z;
}

static inline void char__temp_buffer__buffer__temp414v(void** __temp566v, unsigned long long* __temp567v, unsigned long long* __temp568v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  __temp_return:
  *__temp566v=unsafe_ptr;
  *__temp567v=unsafe_size;
  *__temp568v=unsafe_align;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp569v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp569v=z;
}

static inline void free__temp425v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp431v(void** __temp570v, unsigned long long* __temp571v, unsigned long long* __temp572v, void** __temp573v, unsigned long long* __temp574v, unsigned long long* __temp575v) {
  void* buffer__unsafe_ptr=*__temp570v;
  unsigned long long buffer__unsafe_size=*__temp571v;
  unsigned long long buffer__unsafe_align=*__temp572v;
  unsigned long long __temp432v=0;
  int __temp433v__z=0;
  unsigned long long __temp434v=0;
  __temp432v=0;
  eq__temp276v(buffer__unsafe_size,__temp432v,&__temp433v__z);
  if(__temp433v__z){
  goto __temp_return;
  }
  __temp434v=0;
  buffer__unsafe_size=__temp434v;
  free__temp425v(buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp570v=buffer__unsafe_ptr;
  *__temp571v=buffer__unsafe_size;
  *__temp572v=buffer__unsafe_align;
  *__temp573v=buffer__unsafe_ptr;
  *__temp574v=buffer__unsafe_size;
  *__temp575v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp576v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp576v=z;
}

static inline void zero__temp426v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp422v(unsigned long long bytes, void** __temp577v) {
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
  *__temp577v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp436v(void** __temp578v, unsigned long long* __temp579v, unsigned long long* __temp580v, unsigned long long size, void** __temp581v, unsigned long long* __temp582v, unsigned long long* __temp583v) {
  void* buffer__unsafe_ptr=*__temp578v;
  unsigned long long buffer__unsafe_size=*__temp579v;
  unsigned long long buffer__unsafe_align=*__temp580v;
  void* __temp437v__buffer__unsafe_ptr=0;
  unsigned long long __temp437v__buffer__unsafe_size=0;
  unsigned long long __temp437v__buffer__unsafe_align=0;
  int __temp438v__z=0;
  unsigned long long __temp439v=0;
  int __temp440v__z=0;
  unsigned long long __temp441v=0;
  unsigned long long __temp442v__z=0;
  unsigned long long __temp444v=0;
  int __temp445v__z=0;
  unsigned long long __temp446v__z=0;
  unsigned long long bytes=0;
  void* __temp447v__allocated=0;
  unsigned long long __temp448v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp438v__z);
  if(__temp438v__z){
  __temp439v=0;
  neq__temp300v(size,__temp439v,&__temp440v__z);
  if(__temp440v__z){
  __temp441v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp442v__z);
  zero__temp426v(buffer__unsafe_ptr,__temp441v,__temp442v__z);
  }
  goto __temp_return;
  }
  __temp444v=0;
  neq__temp300v(buffer__unsafe_size,__temp444v,&__temp445v__z);
  if(__temp445v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp446v__z);
  bytes=__temp446v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp422v(bytes,&__temp447v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp447v__allocated;
  __temp448v=0;
  zero__temp426v(buffer__unsafe_ptr,__temp448v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp578v=buffer__unsafe_ptr;
  *__temp579v=buffer__unsafe_size;
  *__temp580v=buffer__unsafe_align;
  *__temp581v=buffer__unsafe_ptr;
  *__temp582v=buffer__unsafe_size;
  *__temp583v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp487v(unsigned long long size, void** __temp584v, unsigned long long* __temp585v, unsigned long long* __temp586v) {
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__unsafe_align=0;
  void* __temp489v__buffer__unsafe_ptr=0;
  unsigned long long __temp489v__buffer__unsafe_size=0;
  unsigned long long __temp489v__buffer__unsafe_align=0;
  void* __temp490v____temp437v__buffer__unsafe_ptr=0;
  unsigned long long __temp490v____temp437v__buffer__unsafe_size=0;
  unsigned long long __temp490v____temp437v__buffer__unsafe_align=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp414v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align);
  __temp_errcode=alloc__temp436v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align,size,&__temp489v__buffer__unsafe_ptr,&__temp489v__buffer__unsafe_size,&__temp489v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp584v=__temp489v__buffer__unsafe_ptr;
  *__temp585v=__temp489v__buffer__unsafe_size;
  *__temp586v=__temp489v__buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp587v) {
  __temp_return:
  *__temp587v=to;
}

static inline void add__temp427v(void* allocated, unsigned long long offset, void** __temp588v) {
  void* element=0;
  void* __temp428v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp428v__to);
  goto __temp_return;
  __temp_return:
  *__temp588v=__temp428v__to;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp589v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp589v=z;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp590v) {
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
  *__temp590v=z;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp591v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp591v=z;
}

static inline void str__temp416v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char first_character, void** __temp592v, unsigned long long* __temp593v, unsigned long long* __temp594v, unsigned long long* __temp595v, unsigned long long* __temp596v, char* __temp597v) {
  goto __temp_return;
  __temp_return:
  *__temp592v=buf__unsafe_ptr;
  *__temp593v=buf__unsafe_size;
  *__temp594v=buf__unsafe_align;
  *__temp595v=pos;
  *__temp596v=length;
  *__temp597v=first_character;
}

static inline int line__temp531v(void** __temp598v, unsigned long long* __temp599v, unsigned long long* __temp600v, void** __temp601v, void** __temp602v, unsigned long long* __temp603v, unsigned long long* __temp604v, unsigned long long* __temp605v, unsigned long long* __temp606v, char* __temp607v) {
  void* buf__unsafe_ptr=*__temp598v;
  unsigned long long buf__unsafe_size=*__temp599v;
  unsigned long long buf__unsafe_align=*__temp600v;
  void* f__unsafe_ptr=*__temp601v;
  int __temp532v=0;
  unsigned long long __temp533v=0;
  unsigned long long pos=0;
  void* __temp534v____temp428v__to=0;
  void* contents=0;
  unsigned long long __temp535v__z=0;
  unsigned long long size=0;
  int success=0;
  int __temp536v__z=0;
  unsigned long long bytes_read=0;
  char first=0;
  unsigned long long prev_pos=0;
  unsigned long long __temp537v__z=0;
  void* __temp538v__buf__unsafe_ptr=0;
  unsigned long long __temp538v__buf__unsafe_size=0;
  unsigned long long __temp538v__buf__unsafe_align=0;
  unsigned long long __temp538v__pos=0;
  unsigned long long __temp538v__length=0;
  char __temp538v__first_character=0;
  int __temp_errcode=0;
  __temp533v=0;
  pos=__temp533v;
  add__temp427v(buf__unsafe_ptr,pos,&__temp534v____temp428v__to);
  contents=__temp534v____temp428v__to;
  __temp_errcode=sub__temp326v(buf__unsafe_size,pos,&__temp535v__z);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp535v__z;
  success=f__unsafe_ptr?fgets((char*)contents,size,(FILE*)f__unsafe_ptr)!=0:0;
  not__temp16v(success,&__temp536v__z);
  if(__temp536v__z){
  __temp_errcode=12;
  goto __temp_failure;
  }
  bytes_read=strlen((char*)contents);
  first=bytes_read?((char*)contents)[0]:0;
  prev_pos=pos;
  add__temp108v(pos,bytes_read,&__temp537v__z);
  pos=__temp537v__z;
  str__temp416v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,first,&__temp538v__buf__unsafe_ptr,&__temp538v__buf__unsafe_size,&__temp538v__buf__unsafe_align,&__temp538v__pos,&__temp538v__length,&__temp538v__first_character);
  goto __temp_return;
  __temp_return:
  *__temp598v=buf__unsafe_ptr;
  *__temp599v=buf__unsafe_size;
  *__temp600v=buf__unsafe_align;
  *__temp601v=f__unsafe_ptr;
  *__temp602v=__temp538v__buf__unsafe_ptr;
  *__temp603v=__temp538v__buf__unsafe_size;
  *__temp604v=__temp538v__buf__unsafe_align;
  *__temp605v=__temp538v__pos;
  *__temp606v=__temp538v__length;
  *__temp607v=__temp538v__first_character;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp417v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__pos, unsigned long long s__length, char s__first_character, const char* endl) {
  int __temp418v=0;
  printf("%.*s%s",(int)s__length,s__pos+(const char*)s__buf__unsafe_ptr,endl);
}

static inline int main__temp539v() {
  const char* __temp540v=0;
  void* __temp541v__unsafe_ptr=0;
  const char* __temp542v____temp492v=0;
  void* f__unsafe_ptr=0;
  unsigned long long __temp543v=0;
  unsigned long long __temp544v____temp401v__z=0;
  void* __temp545v____temp489v__buffer__unsafe_ptr=0;
  unsigned long long __temp545v____temp489v__buffer__unsafe_size=0;
  unsigned long long __temp545v____temp489v__buffer__unsafe_align=0;
  void* __temp546v____temp490v____temp437v__buffer__unsafe_ptr=0;
  unsigned long long __temp546v____temp490v____temp437v__buffer__unsafe_size=0;
  unsigned long long __temp546v____temp490v____temp437v__buffer__unsafe_align=0;
  void* mem__unsafe_ptr=0;
  unsigned long long mem__unsafe_size=0;
  unsigned long long mem__unsafe_align=0;
  int __temp547v=0;
  void* __temp548v____temp538v__buf__unsafe_ptr=0;
  unsigned long long __temp548v____temp538v__buf__unsafe_size=0;
  unsigned long long __temp548v____temp538v__buf__unsafe_align=0;
  unsigned long long __temp548v____temp538v__pos=0;
  unsigned long long __temp548v____temp538v__length=0;
  char __temp548v____temp538v__first_character=0;
  void* line__buf__unsafe_ptr=0;
  unsigned long long line__buf__unsafe_size=0;
  unsigned long long line__buf__unsafe_align=0;
  unsigned long long line__pos=0;
  unsigned long long line__length=0;
  char line__first_character=0;
  const char* __temp549v=0;
  const char* __temp550v=0;
  const char* __temp552v=0;
  const char* __temp554v=0;
  const char* __temp556v=0;
  int __temp_errcode=0;
  __temp540v="README.md";
  __temp_errcode=read__temp491v(__temp540v,&__temp541v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp543v=4;
  KB__temp399v(__temp543v,&__temp544v____temp401v__z);
  __temp_errcode=alloc__temp487v(__temp544v____temp401v__z,&__temp545v____temp489v__buffer__unsafe_ptr,&__temp545v____temp489v__buffer__unsafe_size,&__temp545v____temp489v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp545v____temp489v__buffer__unsafe_ptr;
  mem__unsafe_size=__temp545v____temp489v__buffer__unsafe_size;
  mem__unsafe_align=__temp545v____temp489v__buffer__unsafe_align;
  while(1){
  __temp547v=line__temp531v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&f__unsafe_ptr,&__temp548v____temp538v__buf__unsafe_ptr,&__temp548v____temp538v__buf__unsafe_size,&__temp548v____temp538v__buf__unsafe_align,&__temp548v____temp538v__pos,&__temp548v____temp538v__length,&__temp548v____temp538v__first_character);
  line__buf__unsafe_ptr=__temp548v____temp538v__buf__unsafe_ptr;
  line__buf__unsafe_size=__temp548v____temp538v__buf__unsafe_size;
  line__buf__unsafe_align=__temp548v____temp538v__buf__unsafe_align;
  line__pos=__temp548v____temp538v__pos;
  line__length=__temp548v____temp538v__length;
  line__first_character=__temp548v____temp538v__first_character;
  __temp547v=__temp547v==0;
  if(!__temp547v)break;
  __temp549v="|";
  __temp550v="";
  print__temp337v(__temp549v,__temp550v);
  __temp552v="";
  print__temp417v(line__buf__unsafe_ptr,line__buf__unsafe_size,line__buf__unsafe_align,line__pos,line__length,line__first_character,__temp552v);
  }
  __temp554v="";
  print__temp339v(__temp554v);
  __temp542v____temp492v="releasing fle";
  print__temp339v(__temp542v____temp492v);
  if(__temp541v__unsafe_ptr)fclose((FILE*)__temp541v__unsafe_ptr);
  __temp541v__unsafe_ptr=0;
  __temp556v="THE END";
  print__temp339v(__temp556v);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:free__temp431v(&__temp545v____temp489v__buffer__unsafe_ptr,&__temp545v____temp489v__buffer__unsafe_size,&__temp545v____temp489v__buffer__unsafe_align,&__temp546v____temp490v____temp437v__buffer__unsafe_ptr,&__temp546v____temp490v____temp437v__buffer__unsafe_size,&__temp546v____temp490v____temp437v__buffer__unsafe_align);
  
  return __temp_errcode;
}

int main() {main__temp539v();return 0;}