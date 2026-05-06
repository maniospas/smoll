#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1590v="hello world";
const char* const __temp1587v="tmp.txt";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp589v(const char* other, const char** __temp1592v) {
  *__temp1592v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1593v) {
  int z=0;
  z=x!=0;
  *__temp1593v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1594v) {
  int z=0;
  z=value?0:1;
  *__temp1594v=z;
}

static inline __attribute__((always_inline)) int write__temp1247v(const char* _path, void** __temp1595v) {
  const char* __temp1248v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1249v__=0;
  int __temp1250v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp589v(_path,&__temp1248v__);
  path=__temp1248v__;
  unsafe_ptr=fopen(path,"wx+");
  exists__temp393v(unsafe_ptr,&__temp1249v__);
  not__temp17v(__temp1249v__,&__temp1250v__);
  if(__temp1250v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  *__temp1595v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1512v(void** __temp1596v, const char* text) {
  void* f__unsafe_ptr=*__temp1596v;
  int __temp1513v__=0;
  int __temp1514v__=0;
  int __temp_errcode=0;
  exists__temp393v(f__unsafe_ptr,&__temp1513v__);
  not__temp17v(__temp1513v__,&__temp1514v__);
  if(__temp1514v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  *__temp1596v=f__unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1586v() {
  void* __temp1588v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  int __temp_errcode=0;
  __temp_errcode=write__temp1247v(__temp1587v,&__temp1588v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1588v__unsafe_ptr;
  __temp_errcode=print__temp1512v(&f__unsafe_ptr,__temp1590v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1588v__unsafe_ptr)fclose((FILE*)__temp1588v__unsafe_ptr);
  __temp1588v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1586v();return 0;}