#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* const __temp886v="test2";
const char* const __temp343v="\n";

static inline __attribute__((always_inline)) void test1__temp883v() {
}

static inline __attribute__((always_inline)) void print__temp341v(const char* value) {
  const char* endl=0;
  endl=__temp343v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void test2__temp885v() {
  print__temp341v(__temp886v);
  test1__temp883v();
}

static inline __attribute__((always_inline)) void main__temp893v() {
  test1__temp883v();
  test2__temp885v();
}

int main() {main__temp893v();return 0;}