#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp1662v="hello world";
const char* const __temp1659v="tmp.txt";

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp592v(const char* other, const char** __temp1664v) {
  *__temp1664v=other;
}

static inline __attribute__((always_inline)) void exists__temp396v(void* x, int* __temp1665v) {
  int z=0;
  z=x!=0;
  *__temp1665v=z;
}

static inline __attribute__((always_inline)) void not__temp18v(int value, int* __temp1666v) {
  int z=0;
  z=value?0:1;
  *__temp1666v=z;
}

static inline __attribute__((always_inline)) int write__temp1319v(const char* _path, void** __temp1667v) {
  const char* __temp1320v__=0;
  const char* path=0;
  void* unsafe_ptr=0;
  int __temp1321v__=0;
  int __temp1322v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp592v(_path,&__temp1320v__);
  path=__temp1320v__;
  unsafe_ptr=fopen(path,"wx+");
  exists__temp396v(unsafe_ptr,&__temp1321v__);
  not__temp18v(__temp1321v__,&__temp1322v__);
  if(__temp1322v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  *__temp1667v=unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1587v(void** __temp1668v, const char* text) {
  void* f__unsafe_ptr=*__temp1668v;
  int __temp1588v__=0;
  int __temp1589v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp396v(f__unsafe_ptr,&__temp1588v__);
  not__temp18v(__temp1588v__,&__temp1589v__);
  if(__temp1589v__){
  __temp_errcode=39;
  goto __temp_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  *__temp1668v=f__unsafe_ptr;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1658v() {
  void* __temp1660v__unsafe_ptr=0;
  void* f__unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=write__temp1319v(__temp1659v,&__temp1660v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1660v__unsafe_ptr;
  __temp_errcode=print__temp1587v(&f__unsafe_ptr,__temp1662v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:if(__temp1660v__unsafe_ptr)fclose((FILE*)__temp1660v__unsafe_ptr);
  __temp1660v__unsafe_ptr=0;
  
  return __temp_errcode;
}

int main() {main__temp1658v();return 0;}