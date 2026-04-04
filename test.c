#include <stdio.h>
#include <stdlib.h>

static inline void range__temp354v(unsigned long long to, unsigned long long* __temp372v, unsigned long long* __temp373v) {
  int __temp355v=0;
  unsigned long long __temp356v=0;
  unsigned long long start=0;
  unsigned long long pos=0;
  __temp356v=0;
  start=__temp356v;
  pos=start;
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

static inline void le__temp249v(unsigned long long x, unsigned long long y, int* __temp378v) {
  int __temp250v____temp81v____temp22v__value=0;
  int z=0;
  is_different__temp79v(x,y,&__temp250v____temp81v____temp22v__value);
  z=x<=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp378v=z;
}

static inline void next__temp362v(unsigned long long* __temp379v, unsigned long long r__to, unsigned long long* __temp380v, int* __temp381v) {
  unsigned long long r__pos=*__temp379v;
  unsigned long long value=*__temp380v;
  unsigned long long __temp363v=0;
  unsigned long long __temp364v__z=0;
  int __temp365v__z=0;
  value=r__pos;
  __temp363v=1;
  add__temp129v(r__pos,__temp363v,&__temp364v__z);
  r__pos=__temp364v__z;
  le__temp249v(r__pos,r__to,&__temp365v__z);
  goto __temp_return;
  __temp_return:
  *__temp379v=r__pos;
  *__temp380v=value;
  *__temp381v=__temp365v__z;
}

static inline void print__temp97v(unsigned long long value) {
  int __temp98v=0;
  const char* __temp99v=0;
  const char* endl=0;
  __temp99v="\n";
  endl=__temp99v;
  printf("%llu%s",value,endl);
}

static inline void main__temp366v() {
  unsigned long long __temp367v=0;
  unsigned long long __temp368v__pos=0;
  unsigned long long __temp368v__to=0;
  unsigned long long r__pos=0;
  unsigned long long r__to=0;
  unsigned long long __temp369v=0;
  unsigned long long value=0;
  int __temp370v____temp365v__z=0;
  __temp367v=10;
  range__temp354v(__temp367v,&__temp368v__pos,&__temp368v__to);
  r__pos=__temp368v__pos;
  r__to=__temp368v__to;
  __temp369v=0;
  value=__temp369v;
  while(1){
  next__temp362v(&r__pos,r__to,&value,&__temp370v____temp365v__z);
  if(!__temp370v____temp365v__z)break;
  print__temp97v(value);
  }
}

int main() {main__temp366v();return 0;}