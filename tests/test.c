#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/linux.h"
#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/win.h"
#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/mac.h"
#include "./.cache/maniospas/smoll/refs/heads/main/std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1223v="hello world!";
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative int to id",
"cannot convert negative float to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1222v() {
  print__temp361v(__temp1223v);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1222v();return 0;}