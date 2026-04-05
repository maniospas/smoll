#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp393v(void** __temp404v, unsigned long long* __temp405v, unsigned long long* __temp406v) {
  void* ptr=0;
  unsigned long long size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp404v=ptr;
  *__temp405v=size;
  *__temp406v=align;
}

static inline void false__temp7v(int* __temp407v) {
  int value=0;
  __temp_return:
  *__temp407v=value;
}

static inline void not__temp24v(int __temp_anon0, int* __temp408v) {
  int __temp25v__value=0;
  false__temp7v(&__temp25v__value);
  goto __temp_return;
  __temp_return:
  *__temp408v=__temp25v__value;
}

static inline void is_different__temp82v(unsigned long long x, unsigned long long y, int* __temp409v) {
  int __temp83v=0;
  int __temp84v____temp25v__value=0;
  not__temp24v(__temp83v,&__temp84v____temp25v__value);
  goto __temp_return;
  __temp_return:
  *__temp409v=__temp84v____temp25v__value;
}

static inline void eq__temp275v(unsigned long long x, unsigned long long y, int* __temp410v) {
  int __temp276v____temp84v____temp25v__value=0;
  int z=0;
  is_different__temp82v(x,y,&__temp276v____temp84v____temp25v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp410v=z;
}

static inline void void__temp12v() {
}

static inline void add__temp107v(unsigned long long x, unsigned long long y, unsigned long long* __temp411v) {
  int __temp108v____temp84v____temp25v__value=0;
  unsigned long long z=0;
  is_different__temp82v(x,y,&__temp108v____temp84v____temp25v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp411v=z;
}

static inline void mul__temp131v(unsigned long long x, unsigned long long y, unsigned long long* __temp412v) {
  int __temp132v____temp84v____temp25v__value=0;
  unsigned long long z=0;
  is_different__temp82v(x,y,&__temp132v____temp84v____temp25v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp412v=z;
}

static inline void alloc__temp366v(unsigned long long bytes, void** __temp413v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp413v=allocated;
}

static inline void zero__temp368v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void expect__temp371v(void** __temp414v, unsigned long long* __temp415v, unsigned long long buffer__align, unsigned long long elements) {
  void* buffer__ptr=*__temp414v;
  unsigned long long buffer__size=*__temp415v;
  unsigned long long __temp372v=0;
  int __temp373v__z=0;
  unsigned long long __temp375v__z=0;
  unsigned long long __temp376v__z=0;
  unsigned long long bytes=0;
  void* __temp377v__allocated=0;
  unsigned long long __temp378v=0;
  __temp372v=0;
  eq__temp275v(elements,__temp372v,&__temp373v__z);
  if(__temp373v__z){
  void__temp12v();
  return;
  }
  add__temp107v(buffer__size,elements,&__temp375v__z);
  buffer__size=__temp375v__z;
  mul__temp131v(buffer__align,buffer__size,&__temp376v__z);
  bytes=__temp376v__z;
  alloc__temp366v(bytes,&__temp377v__allocated);
  buffer__ptr=__temp377v__allocated;
  __temp378v=0;
  zero__temp368v(buffer__ptr,__temp378v,bytes);
  __temp_return:
  *__temp414v=buffer__ptr;
  *__temp415v=buffer__size;
}

static inline void print__temp329v(const char* value, const char* endl) {
  int __temp330v=0;
  printf("%s%s",value,endl);
}

static inline void print__temp344v(unsigned long long value, const char* endl) {
  int __temp345v=0;
  printf("%llu%s",value,endl);
}

static inline void print__temp383v(void** __temp416v, unsigned long long* __temp417v, unsigned long long buffer__align) {
  void* buffer__ptr=*__temp416v;
  unsigned long long buffer__size=*__temp417v;
  const char* __temp384v=0;
  const char* __temp385v=0;
  const char* __temp387v=0;
  unsigned long long __temp389v__z=0;
  const char* __temp390v=0;
  __temp384v="buffer: ";
  __temp385v="";
  print__temp329v(__temp384v,__temp385v);
  __temp387v=" elements, ";
  print__temp344v(buffer__size,__temp387v);
  mul__temp131v(buffer__align,buffer__size,&__temp389v__z);
  __temp390v=" bytes\n";
  print__temp344v(__temp389v__z,__temp390v);
  __temp_return:
  *__temp416v=buffer__ptr;
  *__temp417v=buffer__size;
}

static inline void main__temp398v() {
  void* __temp399v__ptr=0;
  unsigned long long __temp399v__size=0;
  unsigned long long __temp399v__align=0;
  void* x__ptr=0;
  unsigned long long x__size=0;
  unsigned long long x__align=0;
  unsigned long long __temp400v=0;
  unsigned long long __temp402v=0;
  float__temp_buffer__buffer__temp393v(&__temp399v__ptr,&__temp399v__size,&__temp399v__align);
  x__ptr=__temp399v__ptr;
  x__size=__temp399v__size;
  x__align=__temp399v__align;
  __temp400v=10;
  expect__temp371v(&x__ptr,&x__size,x__align,__temp400v);
  __temp402v=10;
  memcpy((char*)x__ptr,&__temp402v,8);
  print__temp383v(&x__ptr,&x__size,x__align);
}

int main() {main__temp398v();return 0;}