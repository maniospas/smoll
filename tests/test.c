#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4536t="V";
const char* const __t4704t="correctly modified value";
const char* const __t4553t="failure";
const char* const __t4613t="assertion failed: ";
const char* const __t4528t="[";
const char* const __t4604t="tests/test.s";
const char* const __t4556t="X";
const char* const __t4543t="] ";
const char* const __t4590t="    ";
const char* const __t4699t="correctly stored value";
const char* const __t442t="\n";
const char* const __t4607t="  ";
const char* const __t4533t="success";
const char* const __t430t="";
static const char* __t_all_errcodes[57] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
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
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to flush file contents",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir",
"assertion failed"
};

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void pair__t4676t(uint64_t x, uint64_t y, uint64_t* __t4706t, uint64_t* __t4707t) {
  goto __t_return;
  __t_return:
  *__t4706t=x;
  *__t4707t=y;
}

static inline __attribute__((always_inline)) void data__t4677t(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t* __t4708t, uint64_t* __t4709t, uint64_t* __t4710t, uint64_t* __t4711t) {
  uint64_t __t4678t__x=0;
  uint64_t __t4678t__y=0;
  uint64_t __t4679t__x=0;
  uint64_t __t4679t__y=0;
  uint64_t min__x=0;
  uint64_t min__y=0;
  uint64_t __t4680t__x=0;
  uint64_t __t4680t__y=0;
  uint64_t __t4681t__x=0;
  uint64_t __t4681t__y=0;
  uint64_t max__x=0;
  uint64_t max__y=0;
  pair__t4676t(a,b,&__t4678t__x,&__t4678t__y);
  __t4679t__x=__t4678t__x;
  __t4679t__y=__t4678t__y;
  min__x=__t4679t__x;
  min__y=__t4679t__y;
  pair__t4676t(c,d,&__t4680t__x,&__t4680t__y);
  __t4681t__x=__t4680t__x;
  __t4681t__y=__t4680t__y;
  max__x=__t4681t__x;
  max__y=__t4681t__y;
  goto __t_return;
  __t_return:
  *__t4708t=min__x;
  *__t4709t=min__y;
  *__t4710t=max__x;
  *__t4711t=max__y;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4712t) {
  int value=0;
  *__t4712t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t4713t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t4713t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t4714t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t4714t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t4715t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4715t=z;
}

static inline __attribute__((always_inline)) void restore_stdout__t4581t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t4582t(int64_t* __t4716t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t4716t=saved_stdout;
}

static inline __attribute__((always_inline)) void supports_ansi__t467t(char* __t4717t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t4717t=supports;
}

static inline __attribute__((always_inline)) void colors__t468t(char* __t4718t) {
  char __t469t__=0;
  char initialized=0;
  supports_ansi__t467t(&__t469t__);
  initialized=__t469t__;
  goto __t_return;
  __t_return:
  *__t4718t=initialized;
}

static inline __attribute__((always_inline)) void nn__t429t(const char* value, const char** __t4719t, const char** __t4720t) {
  const char* __t431t=0;
  __t431t=__t430t;
  goto __t_return;
  __t_return:
  *__t4719t=value;
  *__t4720t=__t431t;
}

static inline __attribute__((always_inline)) void print__t438t(const char* value, const char* endl) {
  int __t439t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t4721t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4721t=z;
}

static inline __attribute__((always_inline)) void set__t474t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void set__t594t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t4546t(char colors__initialized) {
  const char* __t4548t__value=0;
  const char* __t4548t____t431t=0;
  int __t4550t=0;
  char __t4551t=0;
  char __t4552t=0;
  const char* __t4557t__value=0;
  const char* __t4557t____t431t=0;
  int __t4559t=0;
  const char* __t4562t__value=0;
  const char* __t4562t____t431t=0;
  nn__t429t(__t4528t,&__t4548t__value,&__t4548t____t431t);
  print__t438t(__t4548t__value,__t4548t____t431t);
  __t4552t=1;
  if(__t4553t!=__t4553t){
  __t4552t=0;
  }
  if(__t4552t){
  __t4551t=1;
  }
  if(__t4551t){
  set__t474t(colors__initialized);
  nn__t429t(__t4556t,&__t4557t__value,&__t4557t____t431t);
  print__t438t(__t4557t__value,__t4557t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4543t,&__t4562t__value,&__t4562t____t431t);
  print__t438t(__t4562t__value,__t4562t____t431t);
}

static inline __attribute__((always_inline)) void print__t440t(const char* value) {
  int __t441t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t478t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t4526t(char colors__initialized) {
  const char* __t4529t__value=0;
  const char* __t4529t____t431t=0;
  char __t4531t=0;
  char __t4532t=0;
  const char* __t4537t__value=0;
  const char* __t4537t____t431t=0;
  int __t4539t=0;
  int __t4540t=0;
  const char* __t4544t__value=0;
  const char* __t4544t____t431t=0;
  nn__t429t(__t4528t,&__t4529t__value,&__t4529t____t431t);
  print__t438t(__t4529t__value,__t4529t____t431t);
  __t4532t=1;
  if(__t4533t!=__t4533t){
  __t4532t=0;
  }
  if(__t4532t){
  __t4531t=1;
  }
  if(__t4531t){
  set__t478t(colors__initialized);
  nn__t429t(__t4536t,&__t4537t__value,&__t4537t____t431t);
  print__t438t(__t4537t__value,__t4537t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4543t,&__t4544t__value,&__t4544t____t431t);
  print__t438t(__t4544t__value,__t4544t____t431t);
}

static inline __attribute__((always_inline)) int assert__t4584t(char condition, const char* text) {
  int64_t __t4585t__=0;
  char __t4587t__initialized=0;
  char __t4589t__initialized=0;
  char colors__initialized=0;
  const char* __t4591t__value=0;
  const char* __t4591t____t431t=0;
  const char* __t4605t__value=0;
  const char* __t4605t____t431t=0;
  const char* __t4608t__value=0;
  const char* __t4608t____t431t=0;
  char __t4610t__=0;
  const char* __t4614t__value=0;
  const char* __t4614t____t431t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t4582t(&__t4585t__);
  colors__t468t(&__t4587t__initialized);
  __t4589t__initialized=__t4587t__initialized;
  colors__initialized=__t4589t__initialized;
  nn__t429t(__t4590t,&__t4591t__value,&__t4591t____t431t);
  print__t438t(__t4591t__value,__t4591t____t431t);
  nn__t429t(__t4604t,&__t4605t__value,&__t4605t____t431t);
  print__t438t(__t4605t__value,__t4605t____t431t);
  nn__t429t(__t4607t,&__t4608t__value,&__t4608t____t431t);
  print__t438t(__t4608t__value,__t4608t____t431t);
  not__t41t(condition,&__t4610t__);
  if(__t4610t__){
  print_marker__t4546t(colors__initialized);
  nn__t429t(__t4613t,&__t4614t__value,&__t4614t____t431t);
  print__t438t(__t4614t__value,__t4614t____t431t);
  print__t440t(text);
  __t_errcode=56;
  goto __t_failure;
  }
  print_marker__t4526t(colors__initialized);
  print__t440t(text);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(__t4587t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t4581t(__t4585t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void zero__t4683t(uint64_t* __t4722t, uint64_t* __t4723t, uint64_t* __t4724t, uint64_t* __t4725t) {
  uint64_t dat__min__x=*__t4722t;
  uint64_t dat__min__y=*__t4723t;
  uint64_t dat__max__x=*__t4724t;
  uint64_t dat__max__y=*__t4725t;
  uint64_t __t4684t=0;
  uint64_t __t4685t=0;
  uint64_t __t4686t=0;
  uint64_t __t4687t=0;
  __t4684t=0;
  __t4685t=0;
  dat__min__x=__t4684t;
  dat__min__y=__t4685t;
  __t4686t=0;
  __t4687t=0;
  dat__max__x=__t4686t;
  dat__max__y=__t4687t;
  *__t4722t=dat__min__x;
  *__t4723t=dat__min__y;
  *__t4724t=dat__max__x;
  *__t4725t=dat__max__y;
}

static inline __attribute__((always_inline)) int main__t4688t() {
  uint64_t __t4691t=0;
  uint64_t __t4692t=0;
  uint64_t __t4693t=0;
  uint64_t __t4694t=0;
  uint64_t __t4695t__min__x=0;
  uint64_t __t4695t__min__y=0;
  uint64_t __t4695t__max__x=0;
  uint64_t __t4695t__max__y=0;
  uint64_t __t4696t__min__x=0;
  uint64_t __t4696t__min__y=0;
  uint64_t __t4696t__max__x=0;
  uint64_t __t4696t__max__y=0;
  uint64_t dat__min__x=0;
  uint64_t dat__min__y=0;
  uint64_t dat__max__x=0;
  uint64_t dat__max__y=0;
  uint64_t __t4697t=0;
  char __t4698t__=0;
  uint64_t __t4702t=0;
  char __t4703t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t418t();
  __t4691t=1;
  __t4692t=2;
  __t4693t=3;
  __t4694t=4;
  data__t4677t(__t4691t,__t4692t,__t4693t,__t4694t,&__t4695t__min__x,&__t4695t__min__y,&__t4695t__max__x,&__t4695t__max__y);
  __t4696t__min__x=__t4695t__min__x;
  __t4696t__min__y=__t4695t__min__y;
  __t4696t__max__x=__t4695t__max__x;
  __t4696t__max__y=__t4695t__max__y;
  dat__min__x=__t4696t__min__x;
  dat__min__y=__t4696t__min__y;
  dat__max__x=__t4696t__max__x;
  dat__max__y=__t4696t__max__y;
  __t4697t=1;
  eq__t133t(dat__min__x,__t4697t,&__t4698t__);
  __t_errcode=assert__t4584t(__t4698t__,__t4699t);
  if(__t_errcode){
  goto __t_failure;
  }
  zero__t4683t(&dat__min__x,&dat__min__y,&dat__max__x,&dat__max__y);
  __t4702t=0;
  eq__t133t(dat__min__x,__t4702t,&__t4703t__);
  __t_errcode=assert__t4584t(__t4703t__,__t4704t);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4688t();
                }