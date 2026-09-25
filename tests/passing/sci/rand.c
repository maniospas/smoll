#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5506t="failure";
const char* const __t5486t="success";
const char* const __t4285t="[";
const char* const __t5763t="bounded rand_nat generates 0";
const char* const __t5707t="bounded rand_nat is below max";
const char* const __t5771t="bounded rand_nat generates 2";
const char* const __t5555t="assert: ";
const char* const __t5684t="second rand is < 1";
const char* const __t5775t="bounded rand_nat generates 3";
const char* const __t5680t="second rand is >= 0";
const char* const __t5549t="assertion failed: ";
const char* const __t5767t="bounded rand_nat generates 1";
const char* const __t5543t=" |- ";
const char* const __t5489t="V";
const char* const __t5676t="rand is < 1";
const char* const __t5723t="rand of 1 always returns 0";
const char* const __t452t="\n";
const char* const __t5694t="rand_nat produces different numbers (may fail with extremely small probability)";
const char* const __t5509t="X";
const char* const __t5687t="rand produces different numbers (may fail with extremely small probability)";
const char* const __t5496t="] ";
const char* const __t440t="";
const char* const __t5672t="rand is >= 0";
static const char* __t_all_errcodes[66] = {"noerr",
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
"user input was not a natural number",
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
"imbalanced brackets",
"arg not found",
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

static inline __attribute__((always_inline)) void console__t425t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void splitmix64__t5609t(uint64_t* __t5777t) {
  char* ts=0;
  uint64_t seed=0;
  struct timespec tss;
  ts=(char*)&tss;
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t5777t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t5604t(uint64_t* __t5778t, uint64_t* __t5779t) {
  uint64_t x=*__t5778t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t5605t=0;
  x=x+0x9E3779B97F4A7C15ULL;
  z=x;
  rot=z>>30;
  z=z^rot;
  z=z*0xBF58476D1CE4E5B9ULL;
  rot=z>>27;
  z=z^rot;
  z=z*0x94D049BB133111EBULL;
  rot=z>>31;
  z=z^rot;
  __t5605t=z;
  goto __t_return;
  __t_return:
  *__t5778t=x;
  *__t5779t=__t5605t;
}

static inline __attribute__((always_inline)) void xoshiro256plusplus__t5621t(uint64_t seed, uint64_t* __t5780t, uint64_t* __t5781t, uint64_t* __t5782t, uint64_t* __t5783t) {
  uint64_t __t5622t=0;
  uint64_t modifying_seed=0;
  uint64_t __t5623t__=0;
  uint64_t __t5624t=0;
  uint64_t s0=0;
  uint64_t __t5625t__=0;
  uint64_t __t5626t=0;
  uint64_t s1=0;
  uint64_t __t5627t__=0;
  uint64_t __t5628t=0;
  uint64_t s2=0;
  uint64_t __t5629t__=0;
  uint64_t __t5630t=0;
  uint64_t s3=0;
  __t5622t=seed;
  modifying_seed=__t5622t;
  splitmix64__t5604t(&modifying_seed,&__t5623t__);
  __t5624t=__t5623t__;
  s0=__t5624t;
  splitmix64__t5604t(&modifying_seed,&__t5625t__);
  __t5626t=__t5625t__;
  s1=__t5626t;
  splitmix64__t5604t(&modifying_seed,&__t5627t__);
  __t5628t=__t5627t__;
  s2=__t5628t;
  splitmix64__t5604t(&modifying_seed,&__t5629t__);
  __t5630t=__t5629t__;
  s3=__t5630t;
  goto __t_return;
  __t_return:
  *__t5780t=s0;
  *__t5781t=s1;
  *__t5782t=s2;
  *__t5783t=s3;
}

static inline __attribute__((always_inline)) void xoshiro256plusplus__t5636t(uint64_t* __t5784t, uint64_t* __t5785t, uint64_t* __t5786t, uint64_t* __t5787t) {
  uint64_t __t5638t__=0;
  uint64_t __t5639t__s0=0;
  uint64_t __t5639t__s1=0;
  uint64_t __t5639t__s2=0;
  uint64_t __t5639t__s3=0;
  splitmix64__t5609t(&__t5638t__);
  xoshiro256plusplus__t5621t(__t5638t__,&__t5639t__s0,&__t5639t__s1,&__t5639t__s2,&__t5639t__s3);
  goto __t_return;
  __t_return:
  *__t5784t=__t5639t__s0;
  *__t5785t=__t5639t__s1;
  *__t5786t=__t5639t__s2;
  *__t5787t=__t5639t__s3;
}

static inline __attribute__((always_inline)) void rotl__t5603t(uint64_t x, uint64_t k, uint64_t* __t5788t) {
  uint64_t left=0;
  uint64_t compk=0;
  uint64_t right=0;
  uint64_t z=0;
  left=x<<k;
  compk=64-k;
  right=x>>compk;
  z=left|right;
  goto __t_return;
  __t_return:
  *__t5788t=z;
}

static inline __attribute__((always_inline)) void rand__t5643t(uint64_t* __t5789t, uint64_t* __t5790t, uint64_t* __t5791t, uint64_t* __t5792t, double* __t5793t) {
  uint64_t RAND__s0=*__t5789t;
  uint64_t RAND__s1=*__t5790t;
  uint64_t RAND__s2=*__t5791t;
  uint64_t RAND__s3=*__t5792t;
  uint64_t sum=0;
  uint64_t __t5644t=0;
  uint64_t __t5645t__=0;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t5646t=0;
  uint64_t __t5647t__=0;
  double denom=0;
  double nom=0;
  double value=0;
  sum=RAND__s0+RAND__s3;
  __t5644t=23;
  rotl__t5603t(sum,__t5644t,&__t5645t__);
  result=__t5645t__;
  result=result+RAND__s0;
  t=RAND__s1<<17;
  RAND__s2=RAND__s2^RAND__s0;
  RAND__s3=RAND__s3^RAND__s1;
  RAND__s1=RAND__s1^RAND__s2;
  RAND__s0=RAND__s0^RAND__s3;
  RAND__s2=RAND__s2^t;
  __t5646t=45;
  rotl__t5603t(RAND__s3,__t5646t,&__t5647t__);
  RAND__s3=__t5647t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t5789t=RAND__s0;
  *__t5790t=RAND__s1;
  *__t5791t=RAND__s2;
  *__t5792t=RAND__s3;
  *__t5793t=value;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5794t) {
  int value=0;
  *__t5794t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5795t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5795t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t5796t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t5796t=__t87t__;
}

static inline __attribute__((always_inline)) void ge__t352t(double x, double y, char* __t5797t) {
  int __t353t__=0;
  char z=0;
  is_different__t85t(x,y,&__t353t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5797t=z;
}

static inline __attribute__((always_inline)) void restore_stdout__t5534t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5535t(int64_t* __t5798t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5798t=saved_stdout;
}

static inline __attribute__((always_inline)) void supports_ansi__t477t(char* __t5799t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5799t=supports;
}

static inline __attribute__((always_inline)) void colors__t478t(char* __t5800t) {
  char __t479t__=0;
  char initialized=0;
  supports_ansi__t477t(&__t479t__);
  initialized=__t479t__;
  goto __t_return;
  __t_return:
  *__t5800t=initialized;
}

static inline __attribute__((always_inline)) void nn__t439t(const char* value, const char** __t5801t, const char** __t5802t) {
  const char* __t441t=0;
  __t441t=__t440t;
  goto __t_return;
  __t_return:
  *__t5801t=value;
  *__t5802t=__t441t;
}

static inline __attribute__((always_inline)) void print__t448t(const char* value, const char* endl) {
  int __t449t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5803t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5803t=z;
}

static inline __attribute__((always_inline)) void set__t484t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t604t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5499t(char colors__initialized) {
  const char* __t5501t__value=0;
  const char* __t5501t____t441t=0;
  int __t5503t=0;
  char __t5504t=0;
  char __t5505t=0;
  const char* __t5510t__value=0;
  const char* __t5510t____t441t=0;
  int __t5512t=0;
  const char* __t5515t__value=0;
  const char* __t5515t____t441t=0;
  nn__t439t(__t4285t,&__t5501t__value,&__t5501t____t441t);
  print__t448t(__t5501t__value,__t5501t____t441t);
  __t5505t=1;
  if(__t5506t!=__t5506t){
  __t5505t=0;
  }
  if(__t5505t){
  __t5504t=1;
  }
  if(__t5504t){
  set__t484t(colors__initialized);
  nn__t439t(__t5509t,&__t5510t__value,&__t5510t____t441t);
  print__t448t(__t5510t__value,__t5510t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5496t,&__t5515t__value,&__t5515t____t441t);
  print__t448t(__t5515t__value,__t5515t____t441t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print__t450t(const char* value) {
  int __t451t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t488t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5480t(char colors__initialized) {
  const char* __t5482t__value=0;
  const char* __t5482t____t441t=0;
  char __t5484t=0;
  char __t5485t=0;
  const char* __t5490t__value=0;
  const char* __t5490t____t441t=0;
  int __t5492t=0;
  int __t5493t=0;
  const char* __t5497t__value=0;
  const char* __t5497t____t441t=0;
  nn__t439t(__t4285t,&__t5482t__value,&__t5482t____t441t);
  print__t448t(__t5482t__value,__t5482t____t441t);
  __t5485t=1;
  if(__t5486t!=__t5486t){
  __t5485t=0;
  }
  if(__t5485t){
  __t5484t=1;
  }
  if(__t5484t){
  set__t488t(colors__initialized);
  nn__t439t(__t5489t,&__t5490t__value,&__t5490t____t441t);
  print__t448t(__t5490t__value,__t5490t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5496t,&__t5497t__value,&__t5497t____t441t);
  print__t448t(__t5497t__value,__t5497t____t441t);
  goto __t_return;
  __t_return:
;}

int assert__t5537t(char condition, const char* text) {
  int64_t __t5538t__=0;
  char __t5540t__initialized=0;
  char __t5542t__initialized=0;
  char colors__initialized=0;
  const char* __t5544t__value=0;
  const char* __t5544t____t441t=0;
  char __t5546t__=0;
  const char* __t5550t__value=0;
  const char* __t5550t____t441t=0;
  const char* __t5556t__value=0;
  const char* __t5556t____t441t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5535t(&__t5538t__);
  colors__t478t(&__t5540t__initialized);
  __t5542t__initialized=__t5540t__initialized;
  colors__initialized=__t5542t__initialized;
  nn__t439t(__t5543t,&__t5544t__value,&__t5544t____t441t);
  print__t448t(__t5544t__value,__t5544t____t441t);
  not__t42t(condition,&__t5546t__);
  if(__t5546t__){
  print_marker__t5499t(colors__initialized);
  nn__t439t(__t5549t,&__t5550t__value,&__t5550t____t441t);
  print__t448t(__t5550t__value,__t5550t____t441t);
  print__t450t(text);
  __t_errcode=65;
  goto __t_failure;
  }
  print_marker__t5480t(colors__initialized);
  nn__t439t(__t5555t,&__t5556t__value,&__t5556t____t441t);
  print__t448t(__t5556t__value,__t5556t____t441t);
  print__t450t(text);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(__t5540t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t5534t(__t5538t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t280t(double x, double y, char* __t5804t) {
  int __t281t__=0;
  char z=0;
  is_different__t85t(x,y,&__t281t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5804t=z;
}

static inline __attribute__((always_inline)) void neq__t136t(double x, double y, char* __t5805t) {
  int __t137t__=0;
  char z=0;
  is_different__t85t(x,y,&__t137t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5805t=z;
}

static inline __attribute__((always_inline)) void rand__t5651t(uint64_t* __t5806t, uint64_t* __t5807t, uint64_t* __t5808t, uint64_t* __t5809t, uint64_t* __t5810t) {
  uint64_t RAND__s0=*__t5806t;
  uint64_t RAND__s1=*__t5807t;
  uint64_t RAND__s2=*__t5808t;
  uint64_t RAND__s3=*__t5809t;
  uint64_t sum=0;
  uint64_t __t5652t=0;
  uint64_t __t5653t__=0;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t5654t=0;
  uint64_t __t5655t__=0;
  sum=RAND__s0+RAND__s3;
  __t5652t=23;
  rotl__t5603t(sum,__t5652t,&__t5653t__);
  result=__t5653t__;
  result=result+RAND__s0;
  t=RAND__s1<<17;
  RAND__s2=RAND__s2^RAND__s0;
  RAND__s3=RAND__s3^RAND__s1;
  RAND__s1=RAND__s1^RAND__s2;
  RAND__s0=RAND__s0^RAND__s3;
  RAND__s2=RAND__s2^t;
  __t5654t=45;
  rotl__t5603t(RAND__s3,__t5654t,&__t5655t__);
  RAND__s3=__t5655t__;
  goto __t_return;
  __t_return:
  *__t5806t=RAND__s0;
  *__t5807t=RAND__s1;
  *__t5808t=RAND__s2;
  *__t5809t=RAND__s3;
  *__t5810t=result;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5811t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5811t=__t111t__;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5812t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5812t=z;
}

static inline __attribute__((always_inline)) void of__t756t(uint64_t to, uint64_t* __t5813t, uint64_t* __t5814t) {
  uint64_t __t757t=0;
  uint64_t from=0;
  __t757t=0;
  from=__t757t;
  goto __t_return;
  __t_return:
  *__t5813t=from;
  *__t5814t=to;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5815t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5815t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5816t) {
  int __t403t__=0;
  int __t404t=0;
  int __t405t=0;
  char __t406t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t403t__);
  lt__t302t(x,y,&__t406t__);
  if(__t406t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5816t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5817t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5817t=z;
}

int rand__t5656t(uint64_t* __t5818t, uint64_t* __t5819t, uint64_t* __t5820t, uint64_t* __t5821t, uint64_t from, uint64_t to, uint64_t* __t5822t) {
  uint64_t RAND__s0=*__t5818t;
  uint64_t RAND__s1=*__t5819t;
  uint64_t RAND__s2=*__t5820t;
  uint64_t RAND__s3=*__t5821t;
  uint64_t __t5657t__=0;
  uint64_t max=0;
  uint64_t __t5659t__=0;
  uint64_t __t5660t=0;
  uint64_t x=0;
  uint64_t low=0;
  char __t5661t__=0;
  uint64_t threshold=0;
  char __t5662t__=0;
  uint64_t __t5664t__=0;
  uint64_t result=0;
  uint64_t __t5665t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(to,from,&__t5657t__);
  if(__t_errcode){
  goto __t_failure;
  }
  max=__t5657t__;
  rand__t5651t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5659t__);
  __t5660t=__t5659t__;
  x=__t5660t;
  __uint128_t product=(__uint128_t)x*(__uint128_t)max;
  low=product;
  lt__t302t(low,max,&__t5661t__);
  if(__t5661t__){
  threshold=-max%max;
  while(1){
  lt__t302t(low,threshold,&__t5662t__);
  if(!__t5662t__){
  break;
  }
  rand__t5651t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5664t__);
  x=__t5664t__;
  product=(__uint128_t)x*(__uint128_t)max;
  low=product;
  }
  }
  result=(product>>64);
  add__t188t(from,result,&__t5665t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5818t=RAND__s0;
  *__t5819t=RAND__s1;
  *__t5820t=RAND__s2;
  *__t5821t=RAND__s3;
  *__t5822t=__t5665t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5823t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5823t=z;
}

static inline __attribute__((always_inline)) void range__t773t(uint64_t _from, uint64_t to, uint64_t* __t5824t, uint64_t* __t5825t) {
  uint64_t __t774t=0;
  uint64_t __t775t__=0;
  uint64_t __t776t=0;
  uint64_t from=0;
  __t774t=0;
  add__t188t(__t774t,_from,&__t775t__);
  __t776t=__t775t__;
  from=__t776t;
  goto __t_return;
  __t_return:
  *__t5824t=from;
  *__t5825t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5826t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5826t=z;
}

static inline __attribute__((always_inline)) int mutget__t778t(uint64_t* __t5827t, uint64_t r__to, uint64_t skipped, uint64_t* __t5828t) {
  uint64_t r__from=*__t5827t;
  char __t779t__=0;
  uint64_t ret=0;
  uint64_t __t780t=0;
  uint64_t __t781t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t779t__);
  if(__t779t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t780t=1;
  add__t188t(ret,__t780t,&__t781t__);
  r__from=__t781t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5827t=r__from;
  *__t5828t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5829t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5829t=z;
}

static inline __attribute__((always_inline)) int main__t5667t(uint64_t* __t5830t, uint64_t* __t5831t, uint64_t* __t5832t, uint64_t* __t5833t) {
  uint64_t RAND__s0=*__t5830t;
  uint64_t RAND__s1=*__t5831t;
  uint64_t RAND__s2=*__t5832t;
  uint64_t RAND__s3=*__t5833t;
  double __t5668t__=0;
  double r1=0;
  double __t5669t__=0;
  double r2=0;
  double __t5670t=0;
  char __t5671t__=0;
  double __t5674t=0;
  char __t5675t__=0;
  double __t5678t=0;
  char __t5679t__=0;
  double __t5682t=0;
  char __t5683t__=0;
  char __t5686t__=0;
  uint64_t __t5690t__=0;
  uint64_t n1=0;
  uint64_t __t5692t__=0;
  uint64_t n2=0;
  char __t5693t__=0;
  uint64_t __t5696t=0;
  uint64_t __t5697t__from=0;
  uint64_t __t5697t__to=0;
  uint64_t __t5698t__=0;
  uint64_t b1=0;
  uint64_t __t5699t=0;
  uint64_t __t5700t__from=0;
  uint64_t __t5700t__to=0;
  uint64_t __t5701t__=0;
  uint64_t b2=0;
  uint64_t __t5702t=0;
  uint64_t __t5703t__from=0;
  uint64_t __t5703t__to=0;
  uint64_t __t5704t__=0;
  uint64_t b3=0;
  uint64_t __t5705t=0;
  char __t5706t__=0;
  uint64_t __t5709t=0;
  char __t5710t__=0;
  uint64_t __t5712t=0;
  char __t5713t__=0;
  uint64_t __t5715t=0;
  uint64_t __t5716t__from=0;
  uint64_t __t5716t__to=0;
  uint64_t __t5717t__=0;
  uint64_t one1=0;
  uint64_t __t5718t=0;
  uint64_t __t5719t__from=0;
  uint64_t __t5719t__to=0;
  uint64_t __t5720t__=0;
  uint64_t one2=0;
  uint64_t __t5721t=0;
  char __t5722t__=0;
  uint64_t __t5725t=0;
  char __t5726t__=0;
  uint64_t __t5728t=0;
  uint64_t __t5729t=0;
  uint64_t c0=0;
  uint64_t __t5730t=0;
  uint64_t __t5731t=0;
  uint64_t c1=0;
  uint64_t __t5732t=0;
  uint64_t __t5733t=0;
  uint64_t c2=0;
  uint64_t __t5734t=0;
  uint64_t __t5735t=0;
  uint64_t c3=0;
  uint64_t __t5736t=0;
  uint64_t __t5737t=0;
  uint64_t __t5738t__from=0;
  uint64_t __t5738t__to=0;
  uint64_t __t5739t__from=0;
  uint64_t __t5739t__to=0;
  char __t5740t=0;
  uint64_t __t5741t__=0;
  uint64_t i=0;
  uint64_t __t5742t=0;
  uint64_t __t5743t__from=0;
  uint64_t __t5743t__to=0;
  uint64_t __t5744t__=0;
  uint64_t value=0;
  uint64_t __t5745t=0;
  char __t5746t__=0;
  uint64_t __t5747t=0;
  uint64_t __t5748t__=0;
  uint64_t __t5749t=0;
  char __t5750t__=0;
  uint64_t __t5751t=0;
  uint64_t __t5752t__=0;
  uint64_t __t5753t=0;
  char __t5754t__=0;
  uint64_t __t5755t=0;
  uint64_t __t5756t__=0;
  uint64_t __t5757t=0;
  char __t5758t__=0;
  uint64_t __t5759t=0;
  uint64_t __t5760t__=0;
  uint64_t __t5761t=0;
  char __t5762t__=0;
  uint64_t __t5765t=0;
  char __t5766t__=0;
  uint64_t __t5769t=0;
  char __t5770t__=0;
  uint64_t __t5773t=0;
  char __t5774t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  rand__t5643t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5668t__);
  r1=__t5668t__;
  rand__t5643t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5669t__);
  r2=__t5669t__;
  __t5670t=0.0;
  ge__t352t(r1,__t5670t,&__t5671t__);
  __t_errcode=assert__t5537t(__t5671t__,__t5672t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5674t=1.0;
  lt__t280t(r1,__t5674t,&__t5675t__);
  __t_errcode=assert__t5537t(__t5675t__,__t5676t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5678t=0.0;
  ge__t352t(r2,__t5678t,&__t5679t__);
  __t_errcode=assert__t5537t(__t5679t__,__t5680t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5682t=1.0;
  lt__t280t(r2,__t5682t,&__t5683t__);
  __t_errcode=assert__t5537t(__t5683t__,__t5684t);
  if(__t_errcode){
  goto __t_failure;
  }
  neq__t136t(r1,r2,&__t5686t__);
  __t_errcode=assert__t5537t(__t5686t__,__t5687t);
  if(__t_errcode){
  goto __t_failure;
  }
  rand__t5651t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5690t__);
  n1=__t5690t__;
  rand__t5651t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5692t__);
  n2=__t5692t__;
  neq__t158t(n1,n2,&__t5693t__);
  __t_errcode=assert__t5537t(__t5693t__,__t5694t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5696t=6;
  of__t756t(__t5696t,&__t5697t__from,&__t5697t__to);
  __t_errcode=rand__t5656t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5697t__from,__t5697t__to,&__t5698t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b1=__t5698t__;
  __t5699t=6;
  of__t756t(__t5699t,&__t5700t__from,&__t5700t__to);
  __t_errcode=rand__t5656t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5700t__from,__t5700t__to,&__t5701t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b2=__t5701t__;
  __t5702t=6;
  of__t756t(__t5702t,&__t5703t__from,&__t5703t__to);
  __t_errcode=rand__t5656t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5703t__from,__t5703t__to,&__t5704t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b3=__t5704t__;
  __t5705t=6;
  lt__t302t(b1,__t5705t,&__t5706t__);
  __t_errcode=assert__t5537t(__t5706t__,__t5707t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5709t=6;
  lt__t302t(b2,__t5709t,&__t5710t__);
  __t_errcode=assert__t5537t(__t5710t__,__t5707t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5712t=6;
  lt__t302t(b3,__t5712t,&__t5713t__);
  __t_errcode=assert__t5537t(__t5713t__,__t5707t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5715t=1;
  of__t756t(__t5715t,&__t5716t__from,&__t5716t__to);
  __t_errcode=rand__t5656t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5716t__from,__t5716t__to,&__t5717t__);
  if(__t_errcode){
  goto __t_failure;
  }
  one1=__t5717t__;
  __t5718t=1;
  of__t756t(__t5718t,&__t5719t__from,&__t5719t__to);
  __t_errcode=rand__t5656t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5719t__from,__t5719t__to,&__t5720t__);
  if(__t_errcode){
  goto __t_failure;
  }
  one2=__t5720t__;
  __t5721t=0;
  eq__t134t(one1,__t5721t,&__t5722t__);
  __t_errcode=assert__t5537t(__t5722t__,__t5723t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5725t=0;
  eq__t134t(one2,__t5725t,&__t5726t__);
  __t_errcode=assert__t5537t(__t5726t__,__t5723t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5728t=0;
  __t5729t=__t5728t;
  c0=__t5729t;
  __t5730t=0;
  __t5731t=__t5730t;
  c1=__t5731t;
  __t5732t=0;
  __t5733t=__t5732t;
  c2=__t5733t;
  __t5734t=0;
  __t5735t=__t5734t;
  c3=__t5735t;
  __t5737t=10000;
  of__t756t(__t5737t,&__t5738t__from,&__t5738t__to);
  range__t773t(__t5738t__from,__t5738t__to,&__t5739t__from,&__t5739t__to);
  __t5736t=0-1;
  while(1){
  __t5736t=__t5736t+1;
  __t_complain=mutget__t778t(&__t5739t__from,__t5739t__to,__t5736t,&__t5741t__);
  __t5740t=__t_complain;
  if(__t_complain){
  goto __t5740t__label;
  }
  i=__t5741t__;
  __t5740t__label:__t5740t=__t5740t==0;
  if(!__t5740t){
  break;
  }
  __t5742t=4;
  of__t756t(__t5742t,&__t5743t__from,&__t5743t__to);
  __t_errcode=rand__t5656t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5743t__from,__t5743t__to,&__t5744t__);
  if(__t_errcode){
  goto __t_failure;
  }
  value=__t5744t__;
  __t5745t=0;
  eq__t134t(value,__t5745t,&__t5746t__);
  if(__t5746t__){
  __t5747t=1;
  add__t188t(c0,__t5747t,&__t5748t__);
  c0=__t5748t__;
  }
  __t5749t=1;
  eq__t134t(value,__t5749t,&__t5750t__);
  if(__t5750t__){
  __t5751t=1;
  add__t188t(c1,__t5751t,&__t5752t__);
  c1=__t5752t__;
  }
  __t5753t=2;
  eq__t134t(value,__t5753t,&__t5754t__);
  if(__t5754t__){
  __t5755t=1;
  add__t188t(c2,__t5755t,&__t5756t__);
  c2=__t5756t__;
  }
  __t5757t=3;
  eq__t134t(value,__t5757t,&__t5758t__);
  if(__t5758t__){
  __t5759t=1;
  add__t188t(c3,__t5759t,&__t5760t__);
  c3=__t5760t__;
  }
  }
  __t5761t=0;
  gt__t326t(c0,__t5761t,&__t5762t__);
  __t_errcode=assert__t5537t(__t5762t__,__t5763t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5765t=0;
  gt__t326t(c1,__t5765t,&__t5766t__);
  __t_errcode=assert__t5537t(__t5766t__,__t5767t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5769t=0;
  gt__t326t(c2,__t5769t,&__t5770t__);
  __t_errcode=assert__t5537t(__t5770t__,__t5771t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5773t=0;
  gt__t326t(c3,__t5773t,&__t5774t__);
  __t_errcode=assert__t5537t(__t5774t__,__t5775t);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5830t=RAND__s0;
  *__t5831t=RAND__s1;
  *__t5832t=RAND__s2;
  *__t5833t=RAND__s3;
  
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
  uint64_t __t5836t__s0=0;
  uint64_t __t5836t__s1=0;
  uint64_t __t5836t__s2=0;
  uint64_t __t5836t__s3=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t425t();
  xoshiro256plusplus__t5636t(&__t5836t__s0,&__t5836t__s1,&__t5836t__s2,&__t5836t__s3);
  __t_errcode=main__t5667t(&__t5836t__s0,&__t5836t__s1,&__t5836t__s2,&__t5836t__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}