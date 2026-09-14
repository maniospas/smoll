#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t443t="\n";
const char* const __t5135t="[";
const char* const __t5150t="] ";
const char* const __t5209t="assert: ";
const char* const __t5290t="correctly retrieved data from mask";
const char* const __t5143t="V";
const char* const __t5203t="assertion failed: ";
const char* const __t5160t="failure";
const char* const __t431t="";
const char* const __t5197t=" |- ";
const char* const __t5140t="success";
const char* const __t5163t="X";
static const char* __t_all_errcodes[63] = {"noerr",
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
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to flush file contents",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir",
"assert failed"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void bits__t646t(uint64_t value, uint64_t* __t5292t) {
  goto __t_return;
  __t_return:
  *__t5292t=value;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5293t) {
  int value=0;
  *__t5293t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5294t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5294t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5295t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5295t=__t111t__;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5296t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5296t=z;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5297t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5297t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5298t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5298t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5299t) {
  int __t402t__=0;
  int __t403t=0;
  int __t404t=0;
  char __t405t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t402t__);
  lt__t301t(x,y,&__t405t__);
  if(__t405t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5299t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5300t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5300t=z;
}

static inline __attribute__((always_inline)) void lshift__t656t(uint64_t x__value, uint64_t y, uint64_t* __t5301t) {
  uint64_t z=0;
  uint64_t __t657t__value=0;
  z=(x__value<<y);
  bits__t646t(z,&__t657t__value);
  goto __t_return;
  __t_return:
  *__t5301t=__t657t__value;
}

static inline __attribute__((always_inline)) void bnot__t666t(uint64_t x__value, uint64_t* __t5302t) {
  uint64_t z=0;
  uint64_t __t667t__value=0;
  z=~x__value;
  bits__t646t(z,&__t667t__value);
  goto __t_return;
  __t_return:
  *__t5302t=__t667t__value;
}

static inline __attribute__((always_inline)) void band__t662t(uint64_t x__value, uint64_t y__value, uint64_t* __t5303t) {
  uint64_t z=0;
  uint64_t __t663t__value=0;
  z=(x__value&y__value);
  bits__t646t(z,&__t663t__value);
  goto __t_return;
  __t_return:
  *__t5303t=__t663t__value;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5304t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5304t=z;
}

static inline __attribute__((always_inline)) void bor__t664t(uint64_t x__value, uint64_t y__value, uint64_t* __t5305t) {
  uint64_t z=0;
  uint64_t __t665t__value=0;
  z=(x__value|y__value);
  bits__t646t(z,&__t665t__value);
  goto __t_return;
  __t_return:
  *__t5305t=__t665t__value;
}

static inline __attribute__((always_inline)) int mask__t719t(uint64_t self__value, uint64_t from, uint64_t to, uint64_t other__value, uint64_t* __t5306t) {
  char __t720t__=0;
  uint64_t __t721t=0;
  char __t722t__=0;
  uint64_t __t723t__=0;
  uint64_t width=0;
  uint64_t __t724t=0;
  char __t725t__=0;
  uint64_t __t726t=0;
  uint64_t __t727t__value=0;
  uint64_t __t728t__value=0;
  uint64_t __t729t=0;
  uint64_t __t730t__=0;
  uint64_t __t731t__value=0;
  uint64_t mask__value=0;
  uint64_t __t732t__value=0;
  uint64_t __t733t__value=0;
  uint64_t __t734t=0;
  char __t735t__=0;
  uint64_t __t736t__value=0;
  uint64_t effective_range__value=0;
  uint64_t __t737t__value=0;
  uint64_t __t738t__value=0;
  uint64_t cleared__value=0;
  uint64_t __t739t__value=0;
  uint64_t replacement__value=0;
  uint64_t __t740t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(from,to,&__t720t__);
  if(__t720t__){
  __t_errcode=14;
  goto __t_failure;
  }
  __t721t=64;
  gt__t325t(to,__t721t,&__t722t__);
  if(__t722t__){
  __t_errcode=13;
  goto __t_failure;
  }
  __t_errcode=sub__t401t(to,from,&__t723t__);
  if(__t_errcode){
  goto __t_failure;
  }
  width=__t723t__;
  __t724t=64;
  eq__t134t(width,__t724t,&__t725t__);
  if(__t725t__){
  goto __t_return;
  }
  __t726t=1;
  bits__t646t(__t726t,&__t727t__value);
  lshift__t656t(__t727t__value,width,&__t728t__value);
  __t729t=1;
  __t_errcode=sub__t401t(__t728t__value,__t729t,&__t730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  bits__t646t(__t730t__,&__t731t__value);
  mask__value=__t731t__value;
  bnot__t666t(mask__value,&__t732t__value);
  band__t662t(other__value,__t732t__value,&__t733t__value);
  __t734t=0;
  neq__t158t(__t733t__value,__t734t,&__t735t__);
  if(__t735t__){
  __t_errcode=15;
  goto __t_failure;
  }
  lshift__t656t(mask__value,from,&__t736t__value);
  effective_range__value=__t736t__value;
  bnot__t666t(effective_range__value,&__t737t__value);
  band__t662t(self__value,__t737t__value,&__t738t__value);
  cleared__value=__t738t__value;
  lshift__t656t(other__value,from,&__t739t__value);
  replacement__value=__t739t__value;
  bor__t664t(cleared__value,replacement__value,&__t740t__value);
  other__value=__t740t__value;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5306t=other__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t642t(uint64_t x, uint64_t* __t5307t) {
  int __t643t=0;
  int __t644t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5307t=value;
}

static inline __attribute__((always_inline)) void rshift__t658t(uint64_t x__value, uint64_t y, uint64_t* __t5308t) {
  uint64_t z=0;
  uint64_t __t659t__value=0;
  z=(x__value>>y);
  bits__t646t(z,&__t659t__value);
  goto __t_return;
  __t_return:
  *__t5308t=__t659t__value;
}

static inline __attribute__((always_inline)) int slice__t702t(uint64_t self__value, uint64_t from, uint64_t to, uint64_t* __t5309t) {
  char __t703t__=0;
  uint64_t __t704t=0;
  char __t705t__=0;
  char __t706t__=0;
  uint64_t __t707t=0;
  uint64_t __t708t__=0;
  uint64_t __t709t__value=0;
  uint64_t __t710t=0;
  uint64_t __t711t__value=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__value=0;
  uint64_t __t714t=0;
  uint64_t __t715t__=0;
  uint64_t __t716t__value=0;
  uint64_t mask__value=0;
  uint64_t __t717t__value=0;
  uint64_t __t718t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  gt__t325t(from,to,&__t703t__);
  if(__t703t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t704t=64;
  gt__t325t(to,__t704t,&__t705t__);
  if(__t705t__){
  __t_errcode=13;
  goto __t_failure;
  }
  eq__t134t(from,to,&__t706t__);
  if(__t706t__){
  __t707t=0;
  nat__t642t(__t707t,&__t708t__);
  bits__t646t(__t708t__,&__t709t__value);
  goto __t_return;
  }
  __t710t=1;
  bits__t646t(__t710t,&__t711t__value);
  __t_errcode=sub__t401t(to,from,&__t712t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lshift__t656t(__t711t__value,__t712t__,&__t713t__value);
  __t714t=1;
  __t_errcode=sub__t401t(__t713t__value,__t714t,&__t715t__);
  if(__t_errcode){
  goto __t_failure;
  }
  bits__t646t(__t715t__,&__t716t__value);
  mask__value=__t716t__value;
  rshift__t658t(self__value,from,&__t717t__value);
  band__t662t(__t717t__value,mask__value,&__t718t__value);
  __t709t__value=__t718t__value;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5309t=__t709t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t652t(uint64_t x__value, uint64_t* __t5310t) {
  uint64_t __t653t__=0;
  nat__t642t(x__value,&__t653t__);
  goto __t_return;
  __t_return:
  *__t5310t=__t653t__;
}

static inline __attribute__((always_inline)) void restore_stdout__t5188t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5189t(int64_t* __t5311t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5311t=saved_stdout;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5312t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5312t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5313t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5313t=initialized;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5314t, const char** __t5315t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5314t=value;
  *__t5315t=__t432t;
}

static inline __attribute__((always_inline)) void print__t439t(const char* value, const char* endl) {
  int __t440t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5316t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5316t=z;
}

static inline __attribute__((always_inline)) void set__t475t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void set__t595t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t5153t(char colors__initialized) {
  const char* __t5155t__value=0;
  const char* __t5155t____t432t=0;
  int __t5157t=0;
  char __t5158t=0;
  char __t5159t=0;
  const char* __t5164t__value=0;
  const char* __t5164t____t432t=0;
  int __t5166t=0;
  const char* __t5169t__value=0;
  const char* __t5169t____t432t=0;
  nn__t430t(__t5135t,&__t5155t__value,&__t5155t____t432t);
  print__t439t(__t5155t__value,__t5155t____t432t);
  __t5159t=1;
  if(__t5160t!=__t5160t){
  __t5159t=0;
  }
  if(__t5159t){
  __t5158t=1;
  }
  if(__t5158t){
  set__t475t(colors__initialized);
  nn__t430t(__t5163t,&__t5164t__value,&__t5164t____t432t);
  print__t439t(__t5164t__value,__t5164t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5150t,&__t5169t__value,&__t5169t____t432t);
  print__t439t(__t5169t__value,__t5169t____t432t);
}

static inline __attribute__((always_inline)) void print__t441t(const char* value) {
  int __t442t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t479t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t5133t(char colors__initialized) {
  const char* __t5136t__value=0;
  const char* __t5136t____t432t=0;
  char __t5138t=0;
  char __t5139t=0;
  const char* __t5144t__value=0;
  const char* __t5144t____t432t=0;
  int __t5146t=0;
  int __t5147t=0;
  const char* __t5151t__value=0;
  const char* __t5151t____t432t=0;
  nn__t430t(__t5135t,&__t5136t__value,&__t5136t____t432t);
  print__t439t(__t5136t__value,__t5136t____t432t);
  __t5139t=1;
  if(__t5140t!=__t5140t){
  __t5139t=0;
  }
  if(__t5139t){
  __t5138t=1;
  }
  if(__t5138t){
  set__t479t(colors__initialized);
  nn__t430t(__t5143t,&__t5144t__value,&__t5144t____t432t);
  print__t439t(__t5144t__value,__t5144t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5150t,&__t5151t__value,&__t5151t____t432t);
  print__t439t(__t5151t__value,__t5151t____t432t);
}

static inline __attribute__((always_inline)) int assert__t5191t(char condition, const char* text) {
  int64_t __t5192t__=0;
  char __t5194t__initialized=0;
  char __t5196t__initialized=0;
  char colors__initialized=0;
  const char* __t5198t__value=0;
  const char* __t5198t____t432t=0;
  char __t5200t__=0;
  const char* __t5204t__value=0;
  const char* __t5204t____t432t=0;
  const char* __t5210t__value=0;
  const char* __t5210t____t432t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5189t(&__t5192t__);
  colors__t469t(&__t5194t__initialized);
  __t5196t__initialized=__t5194t__initialized;
  colors__initialized=__t5196t__initialized;
  nn__t430t(__t5197t,&__t5198t__value,&__t5198t____t432t);
  print__t439t(__t5198t__value,__t5198t____t432t);
  not__t42t(condition,&__t5200t__);
  if(__t5200t__){
  print_marker__t5153t(colors__initialized);
  nn__t430t(__t5203t,&__t5204t__value,&__t5204t____t432t);
  print__t439t(__t5204t__value,__t5204t____t432t);
  print__t441t(text);
  __t_errcode=62;
  goto __t_failure;
  }
  print_marker__t5133t(colors__initialized);
  nn__t430t(__t5209t,&__t5210t__value,&__t5210t____t432t);
  print__t439t(__t5210t__value,__t5210t____t432t);
  print__t441t(text);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(__t5194t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t5188t(__t5192t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5275t() {
  uint64_t __t5278t=0;
  uint64_t __t5279t__value=0;
  uint64_t __t5280t__value=0;
  uint64_t x__value=0;
  uint64_t __t5281t____t5274t__first__from=0;
  uint64_t __t5281t____t5274t__first__to=0;
  uint64_t __t5281t____t5274t__second__from=0;
  uint64_t __t5281t____t5274t__second__to=0;
  uint64_t __t5282t=0;
  uint64_t __t5283t__value=0;
  uint64_t __t5284t__value=0;
  uint64_t __t5285t=0;
  uint64_t __t5286t____t5274t__first__from=0;
  uint64_t __t5286t____t5274t__first__to=0;
  uint64_t __t5286t____t5274t__second__from=0;
  uint64_t __t5286t____t5274t__second__to=0;
  uint64_t __t5287t__value=0;
  uint64_t __t5288t__=0;
  char __t5289t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t5278t=0;
  bits__t646t(__t5278t,&__t5279t__value);
  __t5280t__value=__t5279t__value;
  x__value=__t5280t__value;
  __t5281t____t5274t__first__from=0;
  __t5281t____t5274t__first__to=3;
  __t5281t____t5274t__second__from=3;
  __t5281t____t5274t__second__to=5;
  __t5282t=5;
  bits__t646t(__t5282t,&__t5283t__value);
  __t_errcode=mask__t719t(x__value,__t5281t____t5274t__first__from,__t5281t____t5274t__first__to,__t5283t__value,&__t5284t__value);
  if(__t_errcode){
  goto __t_failure;
  }
  x__value=__t5284t__value;
  __t5285t=5;
  __t5286t____t5274t__first__from=0;
  __t5286t____t5274t__first__to=3;
  __t5286t____t5274t__second__from=3;
  __t5286t____t5274t__second__to=5;
  __t_errcode=slice__t702t(x__value,__t5286t____t5274t__first__from,__t5286t____t5274t__first__to,&__t5287t__value);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t652t(__t5287t__value,&__t5288t__);
  eq__t134t(__t5285t,__t5288t__,&__t5289t__);
  __t_errcode=assert__t5191t(__t5289t__,__t5290t);
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
                    return main__t5275t();
                }