#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4378t="hello ";
const char* const __t4377t="hello {x} world\n";
const char* const __t4387t=" world\n";
const char* const __t431t="";
static const char* __t_all_errcodes[44] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"slice start cannot be greater than slice end",
"cannot slice beyond 64 bits",
"slice start cannot be greater than or equal to slice end",
"value does not fit in bit slice",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
"unexpected end of console read",
"user input was not a float",
"read string does not fit on buffer",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot",
"imbalanced brackets"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t4391t, const char** __t4392t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t4391t=value;
  *__t4392t=__t432t;
}

static inline __attribute__((always_inline)) void print__t439t(const char* value, const char* endl) {
  int __t440t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t4393t, const char** __t4394t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t4393t=value;
  *__t4394t=__t438t;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void ____buffer__t4383t(char** __t4395t, uint64_t* __t4396t, uint32_t* __t4397t, uint32_t* __t4398t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=0;
  *__t4395t=unsafe_ptr;
  *__t4396t=unsafe_size;
  *__t4397t=unsafe_offset;
  *__t4398t=unsafe_align;
}

static inline __attribute__((always_inline)) void main__t4373t() {
  uint64_t __t4376t=0;
  uint64_t x=0;
  const char* __t4379t__value=0;
  const char* __t4379t____t432t=0;
  uint64_t __t4385t__value=0;
  const char* __t4385t____t438t=0;
  const char* __t4388t__value=0;
  const char* __t4388t____t432t=0;
  char* __t4390t__unsafe_ptr=0;
  uint64_t __t4390t__unsafe_size=0;
  uint32_t __t4390t__unsafe_offset=0;
  uint32_t __t4390t__unsafe_align=0;
  console__t419t();
  __t4376t=2;
  x=__t4376t;
  nn__t430t(__t4378t,&__t4379t__value,&__t4379t____t432t);
  print__t439t(__t4379t__value,__t4379t____t432t);
  nn__t437t(x,&__t4385t__value,&__t4385t____t438t);
  print__t452t(__t4385t__value,__t4385t____t438t);
  nn__t430t(__t4387t,&__t4388t__value,&__t4388t____t432t);
  print__t439t(__t4388t__value,__t4388t____t432t);
  ____buffer__t4383t(&__t4390t__unsafe_ptr,&__t4390t__unsafe_size,&__t4390t__unsafe_offset,&__t4390t__unsafe_align);
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    main__t4373t();
                    return 0;
                }