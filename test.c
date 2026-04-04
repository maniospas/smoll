#include <stdio.h>
#include <stdlib.h>

static inline void range__temp353v(unsigned long long to, unsigned long long* __temp372v, unsigned long long* __temp373v) {
  int __temp354v=0;
  unsigned long long __temp355v=0;
  unsigned long long pos=0;
  __temp355v=0;
  pos=__temp355v;
  goto __temp_return;
  __temp_return:
  *__temp372v=pos;
  *__temp373v=to;
}

static inline void false__temp5v(int* __temp374v) {
  int value=0;
  __temp_return:
  *__temp374v=value;
}

static inline void not__temp21v(int __temp_anon0, int* __temp375v) {
  int __temp22v__value=0;
  false__temp5v(&__temp22v__value);
  goto __temp_return;
  __temp_return:
  *__temp375v=__temp22v__value;
}

static inline void is_different__temp79v(unsigned long long x, unsigned long long y, int* __temp376v) {
  int __temp80v=0;
  int __temp81v____temp22v__value=0;
  not__temp21v(__temp80v,&__temp81v____temp22v__value);
  goto __temp_return;
  __temp_return:
  *__temp376v=__temp81v____temp22v__value;
}

static inline void add__temp129v(unsigned long long x, unsigned long long y, unsigned long long* __temp377v) {
  int __temp130v____temp81v____temp22v__value=0;
  unsigned long long z=0;
  is_different__temp79v(x,y,&__temp130v____temp81v____temp22v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp377v=z;
}

static inline void eq__temp297v(unsigned long long x, unsigned long long y, int* __temp378v) {
  int __temp298v____temp81v____temp22v__value=0;
  int z=0;
  is_different__temp79v(x,y,&__temp298v____temp81v____temp22v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp378v=z;
}

static inline void next__temp356v(unsigned long long* __temp379v, unsigned long long r__to, unsigned long long* __temp380v, int* __temp381v) {
  unsigned long long r__pos=*__temp379v;
  unsigned long long value=*__temp380v;
  unsigned long long __temp357v=0;
  unsigned long long __temp358v__z=0;
  unsigned long long next_pos=0;
  int __temp359v__z=0;
  int __temp360v=0;
  int __temp361v=0;
  __temp357v=1;
  add__temp129v(r__pos,__temp357v,&__temp358v__z);
  next_pos=__temp358v__z;
  eq__temp297v(next_pos,r__to,&__temp359v__z);
  if(__temp359v__z){
  __temp360v=0;
  goto __temp_return;
  }
  value=r__pos;
  r__pos=next_pos;
  __temp361v=1;
  __temp360v=__temp361v;
  goto __temp_return;
  __temp_return:
  *__temp379v=r__pos;
  *__temp380v=value;
  *__temp381v=__temp360v;
}

static inline void print__temp97v(unsigned long long value) {
  int __temp98v=0;
  const char* __temp99v=0;
  const char* endl=0;
  __temp99v="\n";
  endl=__temp99v;
  printf("%llu%s",value,endl);
}

static inline void main__temp363v() {
  unsigned long long __temp364v=0;
  unsigned long long __temp365v__pos=0;
  unsigned long long __temp365v__to=0;
  unsigned long long r__pos=0;
  unsigned long long r__to=0;
  unsigned long long __temp366v=0;
  unsigned long long value=0;
  int __temp367v____temp360v=0;
  unsigned long long __temp369v=0;
  unsigned long long __temp370v__z=0;
  __temp364v=10;
  range__temp353v(__temp364v,&__temp365v__pos,&__temp365v__to);
  r__pos=__temp365v__pos;
  r__to=__temp365v__to;
  __temp366v=0;
  value=__temp366v;
  while(1){
  next__temp356v(&r__pos,r__to,&value,&__temp367v____temp360v);
  if(!__temp367v____temp360v)break;
  print__temp97v(value);
  }
  __temp369v=1;
  add__temp129v(value,__temp369v,&__temp370v__z);
  value=__temp370v__z;
  print__temp97v(value);
}

int main() {main__temp363v();return 0;}