#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1556v="tmp.txt";
const char* const __temp1559v="hello world";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp586v(const char* other, const char** __temp1561v) {
  *__temp1561v=other;
}

static inline __attribute__((always_inline)) void exists__temp393v(void* x, int* __temp1562v) {
  int z=0;
  z=x!=0;
  *__temp1562v=z;
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp1563v) {
  int z=0;
  z=value?0:1;
  *__temp1563v=z;
}

static inline __attribute__((always_inline)) int write__temp1216v(const char* _path, void** __temp1564v) {
  const char* __temp1217v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1218v__=0;
  int __temp1219v__=0;
  int __temp_errcode=0;
  unsafe_temporary_cstr__temp586v(_path,&__temp1217v__);
  path=__temp1217v__;
  unsafe_ptr=fopen(path,"wx+");
  exists__temp393v(unsafe_ptr,&__temp1218v__);
  not__temp17v(__temp1218v__,&__temp1219v__);
  if(__temp1219v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  *__temp1564v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1487v(void** __temp1565v, const char* text) {
  void* f__unsafe_ptr=*__temp1565v;
  int __temp1488v__=0;
  int __temp1489v__=0;
  int __temp_errcode=0;
  exists__temp393v(f__unsafe_ptr,&__temp1488v__);
  not__temp17v(__temp1488v__,&__temp1489v__);
  if(__temp1489v__){
  __temp_errcode=36;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  *__temp1565v=f__unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1555v() {
  void* __temp1557v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  int __temp_errcode=0;
  __temp_errcode=write__temp1216v(__temp1556v,&__temp1557v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1557v__unsafe_ptr;
  __temp_errcode=print__temp1487v(&f__unsafe_ptr,__temp1559v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1557v__unsafe_ptr)fclose((FILE*)__temp1557v__unsafe_ptr);
  __temp1557v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1555v();return 0;}