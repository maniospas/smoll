#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void char__temp_buffer__buffer__temp483v(void** __temp634v, unsigned long long* __temp635v, unsigned long long* __temp636v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp634v=unsafe_ptr;
  *__temp635v=unsafe_size;
  *__temp636v=unsafe_align;
}

static inline void false__temp7v(int* __temp637v) {
  int value=0;
  *__temp637v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp638v) {
  int __temp26v__=0;
  false__temp7v(&__temp26v__);
  *__temp638v=__temp26v__;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp639v) {
  int __temp84v=0;
  int __temp85v__=0;
  not__temp25v(__temp84v,&__temp85v__);
  *__temp639v=__temp85v__;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp640v) {
  int __temp301v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v__);
  z=x!=y?1:0;
  *__temp640v=z;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp641v) {
  int __temp253v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v__);
  z=x>=y?1:0;
  *__temp641v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp642v) {
  int __temp133v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v__);
  z=x*y;
  *__temp642v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp643v) {
  *__temp643v=to;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp644v) {
  void* element=0;
  void* __temp420v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__);
  *__temp644v=__temp420v__;
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp645v) {
  int __temp478v__=0;
  unsigned long long __temp479v__=0;
  void* __temp480v__=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp479v__);
  add__temp419v(buffer__unsafe_ptr,__temp479v__,&__temp480v__);
  *__temp645v=__temp480v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void str__temp510v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp646v, unsigned long long* __temp647v, unsigned long long* __temp648v, unsigned long long* __temp649v, unsigned long long* __temp650v, char* __temp651v) {
  *__temp646v=buf__unsafe_ptr;
  *__temp647v=buf__unsafe_size;
  *__temp648v=buf__unsafe_align;
  *__temp649v=dat__pos;
  *__temp650v=dat__length;
  *__temp651v=dat__first;
}

static inline int str__temp511v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp652v, unsigned long long* __temp653v, unsigned long long* __temp654v, unsigned long long* __temp655v, unsigned long long* __temp656v, char* __temp657v) {
  unsigned long long __temp512v=0;
  int __temp513v__=0;
  void* __temp514v__=0;
  char __temp515v__value=0;
  char first=0;
  void* __temp516v__buf__unsafe_ptr=0;
  unsigned long long __temp516v__buf__unsafe_size=0;
  unsigned long long __temp516v__buf__unsafe_align=0;
  unsigned long long __temp516v__dat__pos=0;
  unsigned long long __temp516v__dat__length=0;
  char __temp516v__dat__first=0;
  int __temp_errcode=0;
  __temp512v=0;
  neq__temp300v(length,__temp512v,&__temp513v__);
  if(__temp513v__){
  __temp_errcode=get__temp477v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp514v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp514v__){
  goto __temp_failure;
  }
  memcpy(&__temp515v__value,(char*)__temp514v__,1);
  first=__temp515v__value;
  }
  str__temp510v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp516v__buf__unsafe_ptr,&__temp516v__buf__unsafe_size,&__temp516v__buf__unsafe_align,&__temp516v__dat__pos,&__temp516v__dat__length,&__temp516v__dat__first);
  *__temp652v=__temp516v__buf__unsafe_ptr;
  *__temp653v=__temp516v__buf__unsafe_size;
  *__temp654v=__temp516v__buf__unsafe_align;
  *__temp655v=__temp516v__dat__pos;
  *__temp656v=__temp516v__dat__length;
  *__temp657v=__temp516v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int str__temp517v(const char* c, void** __temp659v, unsigned long long* __temp660v, unsigned long long* __temp661v, unsigned long long* __temp662v, unsigned long long* __temp663v, char* __temp664v) {
  void* __temp518v__unsafe_ptr=0;
  unsigned long long __temp518v__unsafe_size=0;
  unsigned long long __temp518v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp519v=0;
  void* __temp520v__buf__unsafe_ptr=0;
  unsigned long long __temp520v__buf__unsafe_size=0;
  unsigned long long __temp520v__buf__unsafe_align=0;
  unsigned long long __temp520v__dat__pos=0;
  unsigned long long __temp520v__dat__length=0;
  char __temp520v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp483v(&__temp518v__unsafe_ptr,&__temp518v__unsafe_size,&__temp518v__unsafe_align);
  buf__unsafe_ptr=__temp518v__unsafe_ptr;
  buf__unsafe_size=__temp518v__unsafe_size;
  buf__unsafe_align=__temp518v__unsafe_align;
  buf__unsafe_ptr=c;
  length=strlen(c);
  buf__unsafe_size=length+1;
  __temp519v=0;
  __temp_errcode=str__temp511v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp519v,length,&__temp520v__buf__unsafe_ptr,&__temp520v__buf__unsafe_size,&__temp520v__buf__unsafe_align,&__temp520v__dat__pos,&__temp520v__dat__length,&__temp520v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp659v=__temp520v__buf__unsafe_ptr;
  *__temp660v=__temp520v__buf__unsafe_size;
  *__temp661v=__temp520v__buf__unsafe_align;
  *__temp662v=__temp520v__dat__pos;
  *__temp663v=__temp520v__dat__length;
  *__temp664v=__temp520v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp521v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp665v) {
  *__temp665v=s__dat__length;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp666v) {
  int __temp277v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v__);
  z=x==y?1:0;
  *__temp666v=z;
}

static inline void nat__temp386v(unsigned long long x, unsigned long long* __temp667v) {
  unsigned long long value=0;
  value=x;
  *__temp667v=value;
}

static inline void range__temp390v(unsigned long long to, unsigned long long* __temp668v, unsigned long long* __temp669v) {
  unsigned long long __temp392v=0;
  unsigned long long from=0;
  __temp392v=0;
  from=__temp392v;
  *__temp668v=from;
  *__temp669v=to;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp670v) {
  int __temp109v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v__);
  z=x+y;
  *__temp670v=z;
}

static inline int next__temp395v(unsigned long long* __temp671v, unsigned long long r__to, unsigned long long* __temp672v) {
  unsigned long long r__from=*__temp671v;
  int __temp396v__=0;
  unsigned long long ret=0;
  unsigned long long __temp397v=0;
  unsigned long long __temp398v__=0;
  int __temp_errcode=0;
  ge__temp252v(r__from,r__to,&__temp396v__);
  if(__temp396v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  ret=r__from;
  __temp397v=1;
  add__temp108v(ret,__temp397v,&__temp398v__);
  r__from=__temp398v__;
  *__temp671v=r__from;
  *__temp672v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int get__temp554v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long i, void** __temp673v) {
  unsigned long long __temp555v__=0;
  void* __temp556v__=0;
  int __temp_errcode=0;
  add__temp108v(s__dat__pos,i,&__temp555v__);
  __temp_errcode=get__temp477v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,__temp555v__,&__temp556v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp673v=__temp556v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void not__temp16v(int value, int* __temp674v) {
  int z=0;
  z=value?0:1;
  *__temp674v=z;
}

static inline int nat__temp608v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp675v) {
  unsigned long long __temp609v=0;
  unsigned long long __temp610v__=0;
  int __temp611v__=0;
  unsigned long long __temp612v=0;
  unsigned long long __temp613v__=0;
  unsigned long long number=0;
  unsigned long long __temp614v__=0;
  unsigned long long __temp615v__from=0;
  unsigned long long __temp615v__to=0;
  unsigned long long it__from=0;
  unsigned long long it__to=0;
  int __temp616v=0;
  unsigned long long __temp617v__=0;
  unsigned long long i=0;
  void* __temp618v__=0;
  char __temp619v__value=0;
  char c=0;
  int is_digit=0;
  unsigned long long digit=0;
  int __temp620v__=0;
  unsigned long long __temp621v=0;
  unsigned long long __temp622v__=0;
  unsigned long long __temp623v__=0;
  int __temp_errcode=0;
  __temp609v=0;
  len__temp521v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp610v__);
  eq__temp276v(__temp609v,__temp610v__,&__temp611v__);
  if(__temp611v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  __temp612v=0;
  nat__temp386v(__temp612v,&__temp613v__);
  number=__temp613v__;
  len__temp521v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp614v__);
  range__temp390v(__temp614v__,&__temp615v__from,&__temp615v__to);
  it__from=__temp615v__from;
  it__to=__temp615v__to;
  while(1){
  __temp616v=next__temp395v(&it__from,it__to,&__temp617v__);
  i=__temp617v__;
  __temp616v=__temp616v==0;
  if(!__temp616v)break;
  __temp_errcode=get__temp554v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp618v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp618v__){
  goto __temp_failure;
  }
  memcpy(&__temp619v__value,(char*)__temp618v__,1);
  c=__temp619v__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  not__temp16v(is_digit,&__temp620v__);
  if(__temp620v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  __temp621v=10;
  mul__temp132v(number,__temp621v,&__temp622v__);
  add__temp108v(__temp622v__,digit,&__temp623v__);
  number=__temp623v__;
  }
  *__temp675v=number;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int nat__temp627v(const char* s, unsigned long long* __temp677v) {
  void* __temp628v__buf__unsafe_ptr=0;
  unsigned long long __temp628v__buf__unsafe_size=0;
  unsigned long long __temp628v__buf__unsafe_align=0;
  unsigned long long __temp628v__dat__pos=0;
  unsigned long long __temp628v__dat__length=0;
  char __temp628v__dat__first=0;
  unsigned long long __temp629v__=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp517v(s,&__temp628v__buf__unsafe_ptr,&__temp628v__buf__unsafe_size,&__temp628v__buf__unsafe_align,&__temp628v__dat__pos,&__temp628v__dat__length,&__temp628v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=nat__temp608v(__temp628v__buf__unsafe_ptr,__temp628v__buf__unsafe_size,__temp628v__buf__unsafe_align,__temp628v__dat__pos,__temp628v__dat__length,__temp628v__dat__first,&__temp629v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp677v=__temp629v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp354v(unsigned long long value) {
  const char* __temp356v=0;
  const char* endl=0;
  __temp356v="\n";
  endl=__temp356v;
  printf("%llu%s",value,endl);
}

static inline int main__temp630v() {
  const char* __temp631v=0;
  unsigned long long __temp632v__=0;
  int __temp_errcode=0;
  __temp631v="123";
  __temp_errcode=nat__temp627v(__temp631v,&__temp632v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp354v(__temp632v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp630v();return 0;}