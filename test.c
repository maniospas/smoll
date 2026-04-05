#include <stdio.h>
#include <stdlib.h>

static inline void float__temp_buffer__buffer__temp404v(void** __temp411v, unsigned long long* __temp412v, unsigned long long* __temp413v) {
  void* ptr=0;
  unsigned long long size=0;
  unsigned long long align=0;
  __temp_return:
  *__temp411v=ptr;
  *__temp412v=size;
  *__temp413v=align;
}

static inline void alloc__temp382v(unsigned long long bytes, void** __temp414v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp414v=allocated;
}

static inline void expect__temp394v(void* buffer__ptr, unsigned long long* __temp415v, unsigned long long* __temp416v, unsigned long long elements) {
  unsigned long long buffer__size=*__temp415v;
  unsigned long long buffer__align=*__temp416v;
  void* __temp395v__allocated=0;
  alloc__temp382v(buffer__align,&__temp395v__allocated);
  buffer__ptr=__temp395v__allocated;
  __temp_return:
  *__temp415v=buffer__size;
  *__temp416v=buffer__align;
}

static inline void print__temp330v(const char* value) {
  int __temp331v=0;
  const char* __temp332v=0;
  const char* endl=0;
  __temp332v="\n";
  endl=__temp332v;
  printf("%s%s",value,endl);
}

static inline void main__temp403v() {
  void* __temp406v__ptr=0;
  unsigned long long __temp406v__size=0;
  unsigned long long __temp406v__align=0;
  void* x__ptr=0;
  unsigned long long x__size=0;
  unsigned long long x__align=0;
  unsigned long long __temp407v=0;
  const char* __temp409v=0;
  float__temp_buffer__buffer__temp404v(&__temp406v__ptr,&__temp406v__size,&__temp406v__align);
  x__ptr=__temp406v__ptr;
  x__size=__temp406v__size;
  x__align=__temp406v__align;
  __temp407v=10;
  expect__temp394v(x__ptr,&x__size,&x__align,__temp407v);
  __temp409v="hi";
  print__temp330v(__temp409v);
}

int main() {main__temp403v();return 0;}