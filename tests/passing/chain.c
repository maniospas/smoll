#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp1201v="123";
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void eq__temp736v(const char* x, const char* y, int* __temp1204v) {
  int z=0;
  z=(x==y);
  *__temp1204v=z;
}

static inline __attribute__((always_inline)) void print__temp363v(int value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1200v() {
  int __temp1202v__=0;
  eq__temp736v(__temp1201v,__temp1201v,&__temp1202v__);
  print__temp363v(__temp1202v__);
}

int main() {main__temp1200v();return 0;}