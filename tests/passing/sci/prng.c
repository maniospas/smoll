#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5790t="rand is in [0,1)";
const char* const __t5575t="assertion failed: ";
const char* const __t5529t="failure";
const char* const __t5859t=" digit out of 6 almost uniformly distributed";
const char* const __t4308t="[";
const char* const __t5807t="min expected to be near 0";
const char* const __t5944t="rand of 1 always returns 0";
const char* const __t463t="";
const char* const __t5957t="rand of 6 is in [0,6)";
const char* const __t5532t="X";
const char* const __t5803t="float mean to be expected near 0.5";
const char* const __t5512t="V";
const char* const __t5936t="serial correlaction expected near 0";
const char* const __t5584t="assert: ";
const char* const __t5889t="last bit almost uniformly distributed";
const char* const __t5519t="] ";
const char* const __t5509t="success";
const char* const __t5811t="max expected to be near 1";
const char* const __t475t="\n";
const char* const __t5570t=" |- ";
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

static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void splitmix64__t5690t(uint64_t* __t5966t) {
  char* ts=0;
  uint64_t seed=0;
  struct timespec tss;
  ts=(char*)&tss;
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t5966t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t5685t(uint64_t* __t5967t, uint64_t* __t5968t) {
  uint64_t x=*__t5967t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t5686t=0;
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
  __t5686t=z;
  goto __t_return;
  __t_return:
  *__t5967t=x;
  *__t5968t=__t5686t;
}

static inline __attribute__((always_inline)) void xoshiro256plusplus__t5702t(uint64_t seed, uint64_t* __t5969t, uint64_t* __t5970t, uint64_t* __t5971t, uint64_t* __t5972t) {
  uint64_t __t5703t=0;
  uint64_t modifying_seed=0;
  uint64_t __t5704t__=0;
  uint64_t __t5705t=0;
  uint64_t s0=0;
  uint64_t __t5706t__=0;
  uint64_t __t5707t=0;
  uint64_t s1=0;
  uint64_t __t5708t__=0;
  uint64_t __t5709t=0;
  uint64_t s2=0;
  uint64_t __t5710t__=0;
  uint64_t __t5711t=0;
  uint64_t s3=0;
  __t5703t=seed;
  modifying_seed=__t5703t;
  splitmix64__t5685t(&modifying_seed,&__t5704t__);
  __t5705t=__t5704t__;
  s0=__t5705t;
  splitmix64__t5685t(&modifying_seed,&__t5706t__);
  __t5707t=__t5706t__;
  s1=__t5707t;
  splitmix64__t5685t(&modifying_seed,&__t5708t__);
  __t5709t=__t5708t__;
  s2=__t5709t;
  splitmix64__t5685t(&modifying_seed,&__t5710t__);
  __t5711t=__t5710t__;
  s3=__t5711t;
  goto __t_return;
  __t_return:
  *__t5969t=s0;
  *__t5970t=s1;
  *__t5971t=s2;
  *__t5972t=s3;
}

static inline __attribute__((always_inline)) void xoshiro256plusplus__t5717t(uint64_t* __t5973t, uint64_t* __t5974t, uint64_t* __t5975t, uint64_t* __t5976t) {
  uint64_t __t5719t__=0;
  uint64_t __t5720t__s0=0;
  uint64_t __t5720t__s1=0;
  uint64_t __t5720t__s2=0;
  uint64_t __t5720t__s3=0;
  splitmix64__t5690t(&__t5719t__);
  xoshiro256plusplus__t5702t(__t5719t__,&__t5720t__s0,&__t5720t__s1,&__t5720t__s2,&__t5720t__s3);
  goto __t_return;
  __t_return:
  *__t5973t=__t5720t__s0;
  *__t5974t=__t5720t__s1;
  *__t5975t=__t5720t__s2;
  *__t5976t=__t5720t__s3;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t5977t, uint64_t* __t5978t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t5977t=from;
  *__t5978t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5979t) {
  int value=0;
  *__t5979t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5980t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5980t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5981t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5981t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5982t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5982t=z;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t5983t, uint64_t* __t5984t) {
  uint64_t __t797t=0;
  uint64_t __t798t__=0;
  uint64_t __t799t=0;
  uint64_t from=0;
  __t797t=0;
  add__t188t(__t797t,_from,&__t798t__);
  __t799t=__t798t__;
  from=__t799t;
  goto __t_return;
  __t_return:
  *__t5983t=from;
  *__t5984t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5985t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5985t=z;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t5986t, uint64_t r__to, uint64_t skipped, uint64_t* __t5987t) {
  uint64_t r__from=*__t5986t;
  char __t802t__=0;
  uint64_t ret=0;
  uint64_t __t803t=0;
  uint64_t __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t802t__);
  if(__t802t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t803t=1;
  add__t188t(ret,__t803t,&__t804t__);
  r__from=__t804t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5986t=r__from;
  *__t5987t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void rotl__t5684t(uint64_t x, uint64_t k, uint64_t* __t5988t) {
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
  *__t5988t=z;
}

static inline __attribute__((always_inline)) void rand__t5724t(uint64_t* __t5989t, uint64_t* __t5990t, uint64_t* __t5991t, uint64_t* __t5992t, double* __t5993t) {
  uint64_t RAND__s0=*__t5989t;
  uint64_t RAND__s1=*__t5990t;
  uint64_t RAND__s2=*__t5991t;
  uint64_t RAND__s3=*__t5992t;
  uint64_t sum=0;
  uint64_t __t5725t=0;
  uint64_t __t5726t__=0;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t5727t=0;
  uint64_t __t5728t__=0;
  double denom=0;
  double nom=0;
  double value=0;
  sum=RAND__s0+RAND__s3;
  __t5725t=23;
  rotl__t5684t(sum,__t5725t,&__t5726t__);
  result=__t5726t__;
  result=result+RAND__s0;
  t=RAND__s1<<17;
  RAND__s2=RAND__s2^RAND__s0;
  RAND__s3=RAND__s3^RAND__s1;
  RAND__s1=RAND__s1^RAND__s2;
  RAND__s0=RAND__s0^RAND__s3;
  RAND__s2=RAND__s2^t;
  __t5727t=45;
  rotl__t5684t(RAND__s3,__t5727t,&__t5728t__);
  RAND__s3=__t5728t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t5989t=RAND__s0;
  *__t5990t=RAND__s1;
  *__t5991t=RAND__s2;
  *__t5992t=RAND__s3;
  *__t5993t=value;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t5994t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t5994t=__t87t__;
}

static inline __attribute__((always_inline)) void ge__t352t(double x, double y, char* __t5995t) {
  int __t353t__=0;
  char z=0;
  is_different__t85t(x,y,&__t353t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5995t=z;
}

static inline __attribute__((always_inline)) void lt__t280t(double x, double y, char* __t5996t) {
  int __t281t__=0;
  char z=0;
  is_different__t85t(x,y,&__t281t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5996t=z;
}

static inline __attribute__((always_inline)) void restore_stdout__t5557t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5558t(int64_t* __t5997t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5997t=saved_stdout;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t5998t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5998t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t5999t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t5999t=initialized;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t6000t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6000t=z;
}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t6001t, const char** __t6002t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t6001t=value;
  *__t6002t=__t464t;
}

static inline __attribute__((always_inline)) void print__t471t(const char* value, const char* endl) {
  int __t472t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t507t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t627t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5522t(char colors__initialized) {
  const char* __t5524t__value=0;
  const char* __t5524t____t464t=0;
  int __t5526t=0;
  char __t5527t=0;
  char __t5528t=0;
  const char* __t5533t__value=0;
  const char* __t5533t____t464t=0;
  int __t5535t=0;
  const char* __t5538t__value=0;
  const char* __t5538t____t464t=0;
  nn__t462t(__t4308t,&__t5524t__value,&__t5524t____t464t);
  print__t471t(__t5524t__value,__t5524t____t464t);
  __t5528t=1;
  if(__t5529t!=__t5529t){
  __t5528t=0;
  }
  if(__t5528t){
  __t5527t=1;
  }
  if(__t5527t){
  set__t507t(colors__initialized);
  nn__t462t(__t5532t,&__t5533t__value,&__t5533t____t464t);
  print__t471t(__t5533t__value,__t5533t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5519t,&__t5538t__value,&__t5538t____t464t);
  print__t471t(__t5538t__value,__t5538t____t464t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print__t473t(const char* value) {
  int __t474t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int assert__t5588t(char condition, const char* text) {
  int64_t __t5589t__=0;
  char __t5591t__initialized=0;
  char __t5593t__initialized=0;
  char colors__initialized=0;
  char __t5594t__=0;
  const char* __t5595t__value=0;
  const char* __t5595t____t464t=0;
  const char* __t5599t__value=0;
  const char* __t5599t____t464t=0;
  int __t5602t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5558t(&__t5589t__);
  colors__t501t(&__t5591t__initialized);
  __t5593t__initialized=__t5591t__initialized;
  colors__initialized=__t5593t__initialized;
  not__t42t(condition,&__t5594t__);
  if(__t5594t__){
  nn__t462t(__t5570t,&__t5595t__value,&__t5595t____t464t);
  print__t471t(__t5595t__value,__t5595t____t464t);
  print_marker__t5522t(colors__initialized);
  nn__t462t(__t5575t,&__t5599t__value,&__t5599t____t464t);
  print__t471t(__t5599t__value,__t5599t____t464t);
  print__t473t(text);
  __t_errcode=65;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(__t5591t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t5557t(__t5589t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t6003t) {
  int __t167t__=0;
  double z=0;
  is_different__t85t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6003t=z;
}

static inline __attribute__((always_inline)) void gt__t304t(double x, double y, char* __t6004t) {
  int __t305t__=0;
  char z=0;
  is_different__t85t(x,y,&__t305t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6004t=z;
}

static inline __attribute__((always_inline)) void float__t648t(uint64_t x, double* __t6005t) {
  int __t649t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t6005t=z;
}

static inline __attribute__((always_inline)) void eq__t112t(double x, double y, char* __t6006t) {
  int __t113t__=0;
  char z=0;
  is_different__t85t(x,y,&__t113t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6006t=z;
}

static inline __attribute__((always_inline)) int div__t220t(double x, double y, double* __t6007t) {
  int __t221t__=0;
  int __t222t=0;
  double zero=0;
  char __t223t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t85t(x,y,&__t221t__);
  zero=0;
  eq__t112t(y,zero,&__t223t__);
  if(__t223t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6007t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t376t(double x, double y, double* __t6008t) {
  int __t377t__=0;
  int __t378t=0;
  int __t379t=0;
  double z=0;
  is_different__t85t(x,y,&__t377t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6008t=z;
}

static inline __attribute__((always_inline)) void neg__t163t(double x, double* __t6009t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t6009t=z;
}

static inline __attribute__((always_inline)) void abs__t5748t(double x, double* __t6010t) {
  double __t5749t=0;
  char __t5750t__=0;
  double __t5751t__=0;
  __t5749t=0.0;
  lt__t280t(x,__t5749t,&__t5750t__);
  if(__t5750t__){
  neg__t163t(x,&__t5751t__);
  goto __t_return;
  }
  __t5751t__=x;
  goto __t_return;
  __t_return:
  *__t6010t=__t5751t__;
}

static inline __attribute__((always_inline)) void set__t511t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5503t(char colors__initialized) {
  const char* __t5505t__value=0;
  const char* __t5505t____t464t=0;
  char __t5507t=0;
  char __t5508t=0;
  const char* __t5513t__value=0;
  const char* __t5513t____t464t=0;
  int __t5515t=0;
  int __t5516t=0;
  const char* __t5520t__value=0;
  const char* __t5520t____t464t=0;
  nn__t462t(__t4308t,&__t5505t__value,&__t5505t____t464t);
  print__t471t(__t5505t__value,__t5505t____t464t);
  __t5508t=1;
  if(__t5509t!=__t5509t){
  __t5508t=0;
  }
  if(__t5508t){
  __t5507t=1;
  }
  if(__t5507t){
  set__t511t(colors__initialized);
  nn__t462t(__t5512t,&__t5513t__value,&__t5513t____t464t);
  print__t471t(__t5513t__value,__t5513t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5519t,&__t5520t__value,&__t5520t____t464t);
  print__t471t(__t5520t__value,__t5520t____t464t);
  goto __t_return;
  __t_return:
;}

int assert__t5563t(char condition, const char* text) {
  int64_t __t5564t__=0;
  char __t5566t__initialized=0;
  char __t5568t__initialized=0;
  char colors__initialized=0;
  char __t5569t__=0;
  const char* __t5571t__value=0;
  const char* __t5571t____t464t=0;
  const char* __t5576t__value=0;
  const char* __t5576t____t464t=0;
  int __t5579t=0;
  const char* __t5580t__value=0;
  const char* __t5580t____t464t=0;
  const char* __t5585t__value=0;
  const char* __t5585t____t464t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5558t(&__t5564t__);
  colors__t501t(&__t5566t__initialized);
  __t5568t__initialized=__t5566t__initialized;
  colors__initialized=__t5568t__initialized;
  not__t42t(condition,&__t5569t__);
  if(__t5569t__){
  nn__t462t(__t5570t,&__t5571t__value,&__t5571t____t464t);
  print__t471t(__t5571t__value,__t5571t____t464t);
  print_marker__t5522t(colors__initialized);
  nn__t462t(__t5575t,&__t5576t__value,&__t5576t____t464t);
  print__t471t(__t5576t__value,__t5576t____t464t);
  print__t473t(text);
  __t_errcode=65;
  goto __t_failure;
  }
  nn__t462t(__t5570t,&__t5580t__value,&__t5580t____t464t);
  print__t471t(__t5580t__value,__t5580t____t464t);
  print_marker__t5503t(colors__initialized);
  nn__t462t(__t5584t,&__t5585t__value,&__t5585t____t464t);
  print__t471t(__t5585t__value,__t5585t____t464t);
  print__t473t(text);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(__t5566t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t5557t(__t5564t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test_float__t5771t(uint64_t* __t6011t, uint64_t* __t6012t, uint64_t* __t6013t, uint64_t* __t6014t) {
  uint64_t RAND__s0=*__t6011t;
  uint64_t RAND__s1=*__t6012t;
  uint64_t RAND__s2=*__t6013t;
  uint64_t RAND__s3=*__t6014t;
  uint64_t __t5772t=0;
  uint64_t n=0;
  double __t5773t=0;
  double __t5774t=0;
  double sum=0;
  double __t5775t=0;
  double __t5776t=0;
  double min=0;
  double __t5777t=0;
  double __t5778t=0;
  double max=0;
  uint64_t __t5779t=0;
  uint64_t __t5780t__from=0;
  uint64_t __t5780t__to=0;
  uint64_t __t5781t__from=0;
  uint64_t __t5781t__to=0;
  char __t5782t=0;
  uint64_t __t5783t__=0;
  uint64_t i=0;
  double __t5784t__=0;
  double x=0;
  double __t5785t=0;
  char __t5786t__=0;
  double __t5787t=0;
  char __t5788t__=0;
  char __t5789t=0;
  double __t5793t__=0;
  char __t5794t__=0;
  char __t5795t__=0;
  double __t5796t__=0;
  double __t5797t__=0;
  double __t5798t=0;
  double __t5799t__=0;
  double __t5800t__=0;
  double __t5801t=0;
  char __t5802t__=0;
  double __t5805t=0;
  char __t5806t__=0;
  double __t5809t=0;
  char __t5810t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5772t=100000;
  n=__t5772t;
  __t5773t=0.0;
  __t5774t=__t5773t;
  sum=__t5774t;
  __t5775t=1.0;
  __t5776t=__t5775t;
  min=__t5776t;
  __t5777t=0.0;
  __t5778t=__t5777t;
  max=__t5778t;
  of__t779t(n,&__t5780t__from,&__t5780t__to);
  range__t796t(__t5780t__from,__t5780t__to,&__t5781t__from,&__t5781t__to);
  __t5779t=0-1;
  while(1){
  __t5779t=__t5779t+1;
  __t_complain=mutget__t801t(&__t5781t__from,__t5781t__to,__t5779t,&__t5783t__);
  __t5782t=__t_complain;
  if(__t_complain){
  goto __t5782t__label;
  }
  i=__t5783t__;
  __t5782t__label:__t5782t=__t5782t==0;
  if(!__t5782t){
  break;
  }
  rand__t5724t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5784t__);
  x=__t5784t__;
  __t5785t=0.0;
  ge__t352t(x,__t5785t,&__t5786t__);
  if(__t5786t__){
  __t5787t=1.0;
  lt__t280t(x,__t5787t,&__t5788t__);
  __t5789t=__t5788t__;
  }
  else{
  __t5789t=0;
  }
  __t_errcode=assert__t5588t(__t5789t,__t5790t);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t166t(sum,x,&__t5793t__);
  sum=__t5793t__;
  lt__t280t(x,min,&__t5794t__);
  if(__t5794t__){
  min=x;
  }
  gt__t304t(x,max,&__t5795t__);
  if(__t5795t__){
  max=x;
  }
  }
  float__t648t(n,&__t5796t__);
  __t_errcode=div__t220t(sum,__t5796t__,&__t5797t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5798t=0.5;
  sub__t376t(__t5797t__,__t5798t,&__t5799t__);
  abs__t5748t(__t5799t__,&__t5800t__);
  __t5801t=0.01;
  lt__t280t(__t5800t__,__t5801t,&__t5802t__);
  __t_errcode=assert__t5563t(__t5802t__,__t5803t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5805t=0.01;
  lt__t280t(min,__t5805t,&__t5806t__);
  __t_errcode=assert__t5563t(__t5806t__,__t5807t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5809t=0.99;
  gt__t304t(max,__t5809t,&__t5810t__);
  __t_errcode=assert__t5563t(__t5810t__,__t5811t);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6011t=RAND__s0;
  *__t6012t=RAND__s1;
  *__t6013t=RAND__s2;
  *__t6014t=RAND__s3;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat____buffer__t5816t(char** __t6015t, uint64_t* __t6016t, uint32_t* __t6017t, uint32_t* __t6018t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t6015t=unsafe_ptr;
  *__t6016t=unsafe_size;
  *__t6017t=unsafe_offset;
  *__t6018t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t6019t) {
  char* allocated=*__t6019t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t6019t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t6020t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6020t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t6021t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6021t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t6022t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6022t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6023t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6023t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t6024t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6024t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t6025t) {
  char* allocated=0;
  char __t829t__=0;
  char __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t683t(allocated,&__t829t__);
  not__t42t(__t829t__,&__t830t__);
  if(__t830t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6025t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t969t(char** __t6026t, uint64_t* __t6027t, uint32_t* __t6028t, uint32_t* __t6029t, uint64_t size, char** __t6030t, uint64_t* __t6031t, uint32_t* __t6032t, uint32_t* __t6033t) {
  char* buffer__unsafe_ptr=*__t6026t;
  uint64_t buffer__unsafe_size=*__t6027t;
  uint32_t buffer__unsafe_offset=*__t6028t;
  uint32_t buffer__unsafe_align=*__t6029t;
  int __t970t=0;
  int __t971t=0;
  char __t973t__=0;
  uint64_t __t974t=0;
  char __t975t__=0;
  char __t976t=0;
  uint64_t __t977t=0;
  uint64_t __t978t__=0;
  uint64_t __t979t__=0;
  int __t981t=0;
  uint64_t __t982t=0;
  char __t983t__=0;
  uint64_t __t984t__=0;
  uint64_t __t985t__=0;
  uint64_t bytes=0;
  int __t986t=0;
  uint64_t __t987t=0;
  char __t988t__=0;
  char* __t989t__=0;
  int __t990t=0;
  uint64_t __t991t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t973t__);
  if(__t973t__){
  __t974t=0;
  neq__t158t(size,__t974t,&__t975t__);
  __t976t=__t975t__;
  }
  if(__t976t){
  __t977t=0;
  nat__t724t(buffer__unsafe_align,&__t978t__);
  mul__t212t(__t978t__,size,&__t979t__);
  zero__t845t(buffer__unsafe_ptr,__t977t,__t979t__);
  goto __t_return;
  }
  __t982t=0;
  neq__t158t(buffer__unsafe_size,__t982t,&__t983t__);
  if(__t983t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t984t__);
  mul__t212t(__t984t__,size,&__t985t__);
  bytes=__t985t__;
  __t987t=0;
  eq__t134t(bytes,__t987t,&__t988t__);
  if(__t988t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t989t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t991t=0;
  zero__t845t(__t989t__,__t991t,bytes);
  buffer__unsafe_ptr=__t989t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t844t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6026t=buffer__unsafe_ptr;
  *__t6027t=buffer__unsafe_size;
  *__t6028t=buffer__unsafe_offset;
  *__t6029t=buffer__unsafe_align;
  *__t6030t=buffer__unsafe_ptr;
  *__t6031t=buffer__unsafe_size;
  *__t6032t=buffer__unsafe_offset;
  *__t6033t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t6034t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6034t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t6035t) {
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
  *__t6035t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void rand__t5732t(uint64_t* __t6036t, uint64_t* __t6037t, uint64_t* __t6038t, uint64_t* __t6039t, uint64_t* __t6040t) {
  uint64_t RAND__s0=*__t6036t;
  uint64_t RAND__s1=*__t6037t;
  uint64_t RAND__s2=*__t6038t;
  uint64_t RAND__s3=*__t6039t;
  uint64_t sum=0;
  uint64_t __t5733t=0;
  uint64_t __t5734t__=0;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t5735t=0;
  uint64_t __t5736t__=0;
  sum=RAND__s0+RAND__s3;
  __t5733t=23;
  rotl__t5684t(sum,__t5733t,&__t5734t__);
  result=__t5734t__;
  result=result+RAND__s0;
  t=RAND__s1<<17;
  RAND__s2=RAND__s2^RAND__s0;
  RAND__s3=RAND__s3^RAND__s1;
  RAND__s1=RAND__s1^RAND__s2;
  RAND__s0=RAND__s0^RAND__s3;
  RAND__s2=RAND__s2^t;
  __t5735t=45;
  rotl__t5684t(RAND__s3,__t5735t,&__t5736t__);
  RAND__s3=__t5736t__;
  goto __t_return;
  __t_return:
  *__t6036t=RAND__s0;
  *__t6037t=RAND__s1;
  *__t6038t=RAND__s2;
  *__t6039t=RAND__s3;
  *__t6040t=result;
}

int rand__t5737t(uint64_t* __t6041t, uint64_t* __t6042t, uint64_t* __t6043t, uint64_t* __t6044t, uint64_t from, uint64_t to, uint64_t* __t6045t) {
  uint64_t RAND__s0=*__t6041t;
  uint64_t RAND__s1=*__t6042t;
  uint64_t RAND__s2=*__t6043t;
  uint64_t RAND__s3=*__t6044t;
  uint64_t __t5738t__=0;
  uint64_t max=0;
  uint64_t __t5740t__=0;
  uint64_t __t5741t=0;
  uint64_t x=0;
  uint64_t low=0;
  char __t5742t__=0;
  uint64_t threshold=0;
  char __t5743t__=0;
  uint64_t __t5745t__=0;
  uint64_t result=0;
  uint64_t __t5746t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(to,from,&__t5738t__);
  if(__t_errcode){
  goto __t_failure;
  }
  max=__t5738t__;
  rand__t5732t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5740t__);
  __t5741t=__t5740t__;
  x=__t5741t;
  __uint128_t product=(__uint128_t)x*(__uint128_t)max;
  low=product;
  lt__t302t(low,max,&__t5742t__);
  if(__t5742t__){
  threshold=-max%max;
  while(1){
  lt__t302t(low,threshold,&__t5743t__);
  if(!__t5743t__){
  break;
  }
  rand__t5732t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5745t__);
  x=__t5745t__;
  product=(__uint128_t)x*(__uint128_t)max;
  low=product;
  }
  }
  result=(product>>64);
  add__t188t(from,result,&__t5746t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6041t=RAND__s0;
  *__t6042t=RAND__s1;
  *__t6043t=RAND__s2;
  *__t6044t=RAND__s3;
  *__t6045t=__t5746t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6046t) {
  *__t6046t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t6047t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t6047t=__t847t__;
}

static inline __attribute__((always_inline)) int mutget__t1174t(char** __t6048t, uint64_t* __t6049t, uint32_t* __t6050t, uint32_t* __t6051t, uint64_t i, char** __t6052t) {
  char* buffer__unsafe_ptr=*__t6048t;
  uint64_t buffer__unsafe_size=*__t6049t;
  uint32_t buffer__unsafe_offset=*__t6050t;
  uint32_t buffer__unsafe_align=*__t6051t;
  int __t1175t=0;
  char __t1176t__=0;
  uint64_t __t1177t__=0;
  uint64_t __t1178t__=0;
  uint64_t __t1179t__=0;
  uint64_t __t1180t__=0;
  char* __t1181t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1176t__);
  if(__t1176t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1177t__);
  mul__t212t(i,__t1177t__,&__t1178t__);
  nat__t724t(buffer__unsafe_offset,&__t1179t__);
  add__t188t(__t1178t__,__t1179t__,&__t1180t__);
  add__t846t(buffer__unsafe_ptr,__t1180t__,&__t1181t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6048t=buffer__unsafe_ptr;
  *__t6049t=buffer__unsafe_size;
  *__t6050t=buffer__unsafe_offset;
  *__t6051t=buffer__unsafe_align;
  *__t6052t=__t1181t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t6053t) {
  int __t271t__=0;
  int __t272t=0;
  uint64_t zero=0;
  char __t273t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t271t__);
  zero=0;
  eq__t134t(y,zero,&__t273t__);
  if(__t273t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6053t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1198t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t6054t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6054t=z;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t6055t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6055t=z;
}

static inline __attribute__((always_inline)) void absdiff__t441t(uint64_t x, uint64_t y, uint64_t* __t6056t) {
  int __t442t__=0;
  char __t443t__=0;
  uint64_t __t445t__=0;
  uint64_t __t447t__=0;
  is_different__t109t(x,y,&__t442t__);
  gt__t326t(x,y,&__t443t__);
  if(__t443t__){
  sub__t410t(x,y,&__t445t__);
  goto __t_return;
  }
  sub__t410t(y,x,&__t447t__);
  __t445t__=__t447t__;
  goto __t_return;
  __t_return:
  *__t6056t=__t445t__;
}

static inline __attribute__((always_inline)) void div__t267t(uint64_t x, uint64_t y, uint64_t* __t6057t) {
  int __t268t__=0;
  int __t269t=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t268t__);
  z=x/y;
  goto __t_return;
  __t_return:
  *__t6057t=z;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1628t(char** __t6058t, uint64_t* __t6059t, uint32_t* __t6060t, uint32_t* __t6061t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6058t=unsafe_ptr;
  *__t6059t=unsafe_size;
  *__t6060t=unsafe_offset;
  *__t6061t=unsafe_align;
}

static inline __attribute__((always_inline)) void allocated__t1249t(char** __t6062t, uint64_t* __t6063t, uint32_t* __t6064t, uint32_t* __t6065t, uint64_t pos, char** __t6066t, uint64_t* __t6067t, uint32_t* __t6068t, uint32_t* __t6069t, uint64_t* __t6070t) {
  char* buf__unsafe_ptr=*__t6062t;
  uint64_t buf__unsafe_size=*__t6063t;
  uint32_t buf__unsafe_offset=*__t6064t;
  uint32_t buf__unsafe_align=*__t6065t;
  goto __t_return;
  __t_return:
  *__t6062t=buf__unsafe_ptr;
  *__t6063t=buf__unsafe_size;
  *__t6064t=buf__unsafe_offset;
  *__t6065t=buf__unsafe_align;
  *__t6066t=buf__unsafe_ptr;
  *__t6067t=buf__unsafe_size;
  *__t6068t=buf__unsafe_offset;
  *__t6069t=buf__unsafe_align;
  *__t6070t=pos;
}

int alloc__t1639t(uint64_t length, char** __t6071t, uint64_t* __t6072t, uint32_t* __t6073t, uint32_t* __t6074t, uint64_t* __t6075t) {
  char __t1640t=0;
  char* __t1641t__unsafe_ptr=0;
  uint64_t __t1641t__unsafe_size=0;
  uint32_t __t1641t__unsafe_offset=0;
  uint32_t __t1641t__unsafe_align=0;
  char* __t1642t__unsafe_ptr=0;
  uint64_t __t1642t__unsafe_size=0;
  uint32_t __t1642t__unsafe_offset=0;
  uint32_t __t1642t__unsafe_align=0;
  uint64_t __t1644t=0;
  char* __t1645t__buf__unsafe_ptr=0;
  uint64_t __t1645t__buf__unsafe_size=0;
  uint32_t __t1645t__buf__unsafe_offset=0;
  uint32_t __t1645t__buf__unsafe_align=0;
  uint64_t __t1645t__pos=0;
  char* __t1646t__buf__unsafe_ptr=0;
  uint64_t __t1646t__buf__unsafe_size=0;
  uint32_t __t1646t__buf__unsafe_offset=0;
  uint32_t __t1646t__buf__unsafe_align=0;
  uint64_t __t1646t__pos=0;
  char* ret__buf__unsafe_ptr=0;
  uint64_t ret__buf__unsafe_size=0;
  uint32_t ret__buf__unsafe_offset=0;
  uint32_t ret__buf__unsafe_align=0;
  uint64_t ret__pos=0;
  char __t1647t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1628t(&__t1641t__unsafe_ptr,&__t1641t__unsafe_size,&__t1641t__unsafe_offset,&__t1641t__unsafe_align);
  __t_complain=alloc__t969t(&__t1641t__unsafe_ptr,&__t1641t__unsafe_size,&__t1641t__unsafe_offset,&__t1641t__unsafe_align,length,&__t1642t__unsafe_ptr,&__t1642t__unsafe_size,&__t1642t__unsafe_offset,&__t1642t__unsafe_align);
  __t1640t=__t_complain;
  if(__t_complain){
  goto __t1640t__label;
  }
  __t1644t=0;
  allocated__t1249t(&__t1642t__unsafe_ptr,&__t1642t__unsafe_size,&__t1642t__unsafe_offset,&__t1642t__unsafe_align,__t1644t,&__t1645t__buf__unsafe_ptr,&__t1645t__buf__unsafe_size,&__t1645t__buf__unsafe_offset,&__t1645t__buf__unsafe_align,&__t1645t__pos);
  __t1646t__buf__unsafe_ptr=__t1645t__buf__unsafe_ptr;
  __t1646t__buf__unsafe_size=__t1645t__buf__unsafe_size;
  __t1646t__buf__unsafe_offset=__t1645t__buf__unsafe_offset;
  __t1646t__buf__unsafe_align=__t1645t__buf__unsafe_align;
  __t1646t__pos=__t1645t__pos;
  ret__buf__unsafe_ptr=__t1646t__buf__unsafe_ptr;
  ret__buf__unsafe_size=__t1646t__buf__unsafe_size;
  ret__buf__unsafe_offset=__t1646t__buf__unsafe_offset;
  ret__buf__unsafe_align=__t1646t__buf__unsafe_align;
  ret__pos=__t1646t__pos;
  __t1640t__label:__t1640t=__t1640t==0;
  not__t42t(__t1640t,&__t1647t__);
  if(__t1647t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&ret__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6071t=ret__buf__unsafe_ptr;
  *__t6072t=ret__buf__unsafe_size;
  *__t6073t=ret__buf__unsafe_offset;
  *__t6074t=ret__buf__unsafe_align;
  *__t6075t=ret__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mod__t274t(uint64_t x, uint64_t y, uint64_t* __t6076t) {
  int __t275t=0;
  uint64_t z=0;
  z=x%y;
  goto __t_return;
  __t_return:
  *__t6076t=z;
}

static inline __attribute__((always_inline)) void status__t1254t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6077t, uint64_t* __t6078t, uint32_t* __t6079t, uint32_t* __t6080t, uint64_t* __t6081t) {
  char* __t1255t__unsafe_ptr=0;
  uint64_t __t1255t__unsafe_size=0;
  uint32_t __t1255t__unsafe_offset=0;
  uint32_t __t1255t__unsafe_align=0;
  uint64_t __t1256t=0;
  __t1255t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1255t__unsafe_size=self__buf__unsafe_size;
  __t1255t__unsafe_offset=self__buf__unsafe_offset;
  __t1255t__unsafe_align=self__buf__unsafe_align;
  __t1256t=self__pos;
  goto __t_return;
  __t_return:
  *__t6077t=__t1255t__unsafe_ptr;
  *__t6078t=__t1255t__unsafe_size;
  *__t6079t=__t1255t__unsafe_offset;
  *__t6080t=__t1255t__unsafe_align;
  *__t6081t=__t1256t;
}

static inline __attribute__((always_inline)) int get__t1189t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t6082t) {
  int __t1190t=0;
  char __t1191t__=0;
  uint64_t __t1192t__=0;
  uint64_t __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t __t1195t__=0;
  char* __t1196t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1191t__);
  if(__t1191t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1192t__);
  mul__t212t(i,__t1192t__,&__t1193t__);
  nat__t724t(buffer__unsafe_offset,&__t1194t__);
  add__t188t(__t1193t__,__t1194t__,&__t1195t__);
  add__t846t(buffer__unsafe_ptr,__t1195t__,&__t1196t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6082t=__t1196t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1658t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t6083t, uint64_t* __t6084t, uint64_t* __t6085t, char* __t6086t) {
  goto __t_return;
  __t_return:
  *__t6083t=unsafe_ptr;
  *__t6084t=dat__pos;
  *__t6085t=dat__length;
  *__t6086t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t6087t, uint64_t* __t6088t, uint64_t* __t6089t, char* __t6090t) {
  char* unsafe_ptr=0;
  uint64_t __t1663t__=0;
  uint64_t __t1664t=0;
  char __t1665t__=0;
  uint64_t __t1666t__=0;
  uint64_t __t1667t=0;
  char __t1668t__=0;
  char* __t1669t__unsafe_ptr=0;
  uint64_t __t1669t__dat__pos=0;
  uint64_t __t1669t__dat__length=0;
  char __t1669t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1663t__);
  __t1664t=1;
  neq__t158t(__t1663t__,__t1664t,&__t1665t__);
  if(__t1665t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1666t__);
  __t1667t=0;
  neq__t158t(__t1666t__,__t1667t,&__t1668t__);
  if(__t1668t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1658t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1669t__unsafe_ptr,&__t1669t__dat__pos,&__t1669t__dat__length,&__t1669t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6087t=__t1669t__unsafe_ptr;
  *__t6088t=__t1669t__dat__pos;
  *__t6089t=__t1669t__dat__length;
  *__t6090t=__t1669t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1696t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t6091t, uint64_t* __t6092t, uint64_t* __t6093t, char* __t6094t) {
  uint64_t __t1697t=0;
  char __t1698t__=0;
  char* __t1700t__=0;
  char __t1701t__value=0;
  char first=0;
  char* __t1702t__unsafe_ptr=0;
  uint64_t __t1702t__dat__pos=0;
  uint64_t __t1702t__dat__length=0;
  char __t1702t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1697t=0;
  neq__t158t(length,__t1697t,&__t1698t__);
  if(__t1698t__){
  __t_errcode=get__t1189t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1700t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1700t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1701t__value,__t1700t__,1);
  first=__t1701t__value;
  }
  __t_errcode=str__t1662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1702t__unsafe_ptr,&__t1702t__dat__pos,&__t1702t__dat__length,&__t1702t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6091t=__t1702t__unsafe_ptr;
  *__t6092t=__t1702t__dat__pos;
  *__t6093t=__t1702t__dat__length;
  *__t6094t=__t1702t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t3135t(uint64_t n, char** __t6095t, uint64_t* __t6096t, uint64_t* __t6097t, char* __t6098t) {
  int __t3136t=0;
  int __t3137t=0;
  int __t3138t=0;
  int __t3139t=0;
  uint64_t __t3140t=0;
  uint64_t v=0;
  uint64_t __t3141t=0;
  uint64_t __t3142t=0;
  uint64_t digits=0;
  uint64_t __t3143t=0;
  char __t3144t__=0;
  uint64_t __t3145t=0;
  uint64_t __t3147t__=0;
  uint64_t __t3148t=0;
  uint64_t __t3149t__=0;
  char* __t3150t__buf__unsafe_ptr=0;
  uint64_t __t3150t__buf__unsafe_size=0;
  uint32_t __t3150t__buf__unsafe_offset=0;
  uint32_t __t3150t__buf__unsafe_align=0;
  uint64_t __t3150t__pos=0;
  char* __t3152t__buf__unsafe_ptr=0;
  uint64_t __t3152t__buf__unsafe_size=0;
  uint32_t __t3152t__buf__unsafe_offset=0;
  uint32_t __t3152t__buf__unsafe_align=0;
  uint64_t __t3152t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t3153t=0;
  uint64_t __t3154t__from=0;
  uint64_t __t3154t__to=0;
  uint64_t __t3155t__from=0;
  uint64_t __t3155t__to=0;
  char __t3156t=0;
  uint64_t __t3157t__=0;
  uint64_t i=0;
  uint64_t __t3158t=0;
  uint64_t __t3160t__=0;
  uint64_t dig=0;
  char digit=0;
  uint64_t __t3161t__=0;
  uint64_t __t3162t=0;
  uint64_t __t3163t__=0;
  uint64_t __t3164t__=0;
  char* __t3166t__=0;
  uint64_t __t3167t=0;
  uint64_t __t3169t__=0;
  char* __t3170t____t1255t__unsafe_ptr=0;
  uint64_t __t3170t____t1255t__unsafe_size=0;
  uint32_t __t3170t____t1255t__unsafe_offset=0;
  uint32_t __t3170t____t1255t__unsafe_align=0;
  uint64_t __t3170t____t1256t=0;
  char* __t3172t__unsafe_ptr=0;
  uint64_t __t3172t__dat__pos=0;
  uint64_t __t3172t__dat__length=0;
  char __t3172t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3140t=n;
  v=__t3140t;
  __t3141t=1;
  __t3142t=__t3141t;
  digits=__t3142t;
  while(1){
  __t3143t=10;
  ge__t374t(v,__t3143t,&__t3144t__);
  if(!__t3144t__){
  break;
  }
  __t3145t=10;
  div__t267t(v,__t3145t,&__t3147t__);
  v=__t3147t__;
  __t3148t=1;
  add__t188t(digits,__t3148t,&__t3149t__);
  digits=__t3149t__;
  }
  __t_errcode=alloc__t1639t(digits,&__t3150t__buf__unsafe_ptr,&__t3150t__buf__unsafe_size,&__t3150t__buf__unsafe_offset,&__t3150t__buf__unsafe_align,&__t3150t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3152t__buf__unsafe_ptr=__t3150t__buf__unsafe_ptr;
  __t3152t__buf__unsafe_size=__t3150t__buf__unsafe_size;
  __t3152t__buf__unsafe_offset=__t3150t__buf__unsafe_offset;
  __t3152t__buf__unsafe_align=__t3150t__buf__unsafe_align;
  __t3152t__pos=__t3150t__pos;
  surface__buf__unsafe_ptr=__t3152t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3152t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3152t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3152t__buf__unsafe_align;
  surface__pos=__t3152t__pos;
  v=n;
  of__t779t(digits,&__t3154t__from,&__t3154t__to);
  range__t796t(__t3154t__from,__t3154t__to,&__t3155t__from,&__t3155t__to);
  __t3153t=0-1;
  while(1){
  __t3153t=__t3153t+1;
  __t_complain=mutget__t801t(&__t3155t__from,__t3155t__to,__t3153t,&__t3157t__);
  __t3156t=__t_complain;
  if(__t_complain){
  goto __t3156t__label;
  }
  i=__t3157t__;
  __t3156t__label:__t3156t=__t3156t==0;
  if(!__t3156t){
  break;
  }
  __t3158t=10;
  mod__t274t(v,__t3158t,&__t3160t__);
  dig=__t3160t__;
  digit='0'+dig;
  add__t188t(surface__pos,digits,&__t3161t__);
  __t3162t=1;
  add__t188t(i,__t3162t,&__t3163t__);
  __t_errcode=sub__t402t(__t3161t__,__t3163t__,&__t3164t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t1174t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,__t3164t__,&__t3166t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3166t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t3166t__,&digit,1);
  __t3167t=10;
  div__t267t(v,__t3167t,&__t3169t__);
  v=__t3169t__;
  }
  status__t1254t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3170t____t1255t__unsafe_ptr,&__t3170t____t1255t__unsafe_size,&__t3170t____t1255t__unsafe_offset,&__t3170t____t1255t__unsafe_align,&__t3170t____t1256t);
  __t_errcode=str__t1696t(__t3170t____t1255t__unsafe_ptr,__t3170t____t1255t__unsafe_size,__t3170t____t1255t__unsafe_offset,__t3170t____t1255t__unsafe_align,__t3170t____t1256t,digits,&__t3172t__unsafe_ptr,&__t3172t__dat__pos,&__t3172t__dat__length,&__t3172t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&__t3172t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6095t=__t3172t__unsafe_ptr;
  *__t6096t=__t3172t__dat__pos;
  *__t6097t=__t3172t__dat__length;
  *__t6098t=__t3172t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1695t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6099t, uint64_t* __t6100t, uint64_t* __t6101t, char* __t6102t) {
  goto __t_return;
  __t_return:
  *__t6099t=other__unsafe_ptr;
  *__t6100t=other__dat__pos;
  *__t6101t=other__dat__length;
  *__t6102t=other__dat__first;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t6103t) {
  *__t6103t=to;
}

void str__t1718t(const char* c, char** __t6104t, uint64_t* __t6105t, uint64_t* __t6106t, char* __t6107t) {
  char* __t1719t__unsafe_ptr=0;
  uint64_t __t1719t__unsafe_size=0;
  uint32_t __t1719t__unsafe_offset=0;
  uint32_t __t1719t__unsafe_align=0;
  char* __t1720t__unsafe_ptr=0;
  uint64_t __t1720t__unsafe_size=0;
  uint32_t __t1720t__unsafe_offset=0;
  uint32_t __t1720t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1721t__=0;
  uint64_t length=0;
  uint64_t __t1722t=0;
  uint64_t __t1723t__=0;
  char __t1724t=0;
  uint64_t __t1725t=0;
  char* __t1727t__unsafe_ptr=0;
  uint64_t __t1727t__dat__pos=0;
  uint64_t __t1727t__dat__length=0;
  char __t1727t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1628t(&__t1719t__unsafe_ptr,&__t1719t__unsafe_size,&__t1719t__unsafe_offset,&__t1719t__unsafe_align);
  __t1720t__unsafe_ptr=__t1719t__unsafe_ptr;
  __t1720t__unsafe_size=__t1719t__unsafe_size;
  __t1720t__unsafe_offset=__t1719t__unsafe_offset;
  __t1720t__unsafe_align=__t1719t__unsafe_align;
  buf__unsafe_ptr=__t1720t__unsafe_ptr;
  buf__unsafe_size=__t1720t__unsafe_size;
  buf__unsafe_offset=__t1720t__unsafe_offset;
  buf__unsafe_align=__t1720t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1721t__);
  buf__unsafe_ptr=__t1721t__;
  if(c){
  length=strlen(c);
  }
  __t1722t=1;
  add__t188t(length,__t1722t,&__t1723t__);
  buf__unsafe_size=__t1723t__;
  __t1725t=0;
  __t_complain=str__t1696t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1725t,length,&__t1727t__unsafe_ptr,&__t1727t__dat__pos,&__t1727t__dat__length,&__t1727t__dat__first);
  __t1724t=__t_complain;
  if(__t_complain){
  goto __t1724t__label;
  }
  ret__unsafe_ptr=__t1727t__unsafe_ptr;
  ret__dat__pos=__t1727t__dat__pos;
  ret__dat__length=__t1727t__dat__length;
  ret__dat__first=__t1727t__dat__first;
  __t1724t__label:__t1724t=__t1724t==0;
  goto __t_return;
  __t_return:
  *__t6104t=ret__unsafe_ptr;
  *__t6105t=ret__dat__pos;
  *__t6106t=ret__dat__length;
  *__t6107t=ret__dat__first;
}

static inline __attribute__((always_inline)) void len__t1728t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t6108t) {
  goto __t_return;
  __t_return:
  *__t6108t=s__dat__length;
}

static inline __attribute__((always_inline)) void arena__t1242t(char** __t6109t, uint64_t* __t6110t, uint32_t* __t6111t, uint32_t* __t6112t, uint64_t _pos, char** __t6113t, uint64_t* __t6114t, uint32_t* __t6115t, uint32_t* __t6116t, uint64_t* __t6117t) {
  char* buf__unsafe_ptr=*__t6109t;
  uint64_t buf__unsafe_size=*__t6110t;
  uint32_t buf__unsafe_offset=*__t6111t;
  uint32_t buf__unsafe_align=*__t6112t;
  uint64_t __t1243t=0;
  uint64_t pos=0;
  __t1243t=_pos;
  pos=__t1243t;
  goto __t_return;
  __t_return:
  *__t6109t=buf__unsafe_ptr;
  *__t6110t=buf__unsafe_size;
  *__t6111t=buf__unsafe_offset;
  *__t6112t=buf__unsafe_align;
  *__t6113t=buf__unsafe_ptr;
  *__t6114t=buf__unsafe_size;
  *__t6115t=buf__unsafe_offset;
  *__t6116t=buf__unsafe_align;
  *__t6117t=pos;
}

static inline __attribute__((always_inline)) void len__t1197t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t6118t) {
  goto __t_return;
  __t_return:
  *__t6118t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int alloc__t1324t(char** __t6119t, uint64_t* __t6120t, uint32_t* __t6121t, uint32_t* __t6122t, uint64_t* __t6123t, uint64_t length, char** __t6124t, uint64_t* __t6125t, uint32_t* __t6126t, uint32_t* __t6127t, uint64_t* __t6128t) {
  char* allocator__buf__unsafe_ptr=*__t6119t;
  uint64_t allocator__buf__unsafe_size=*__t6120t;
  uint32_t allocator__buf__unsafe_offset=*__t6121t;
  uint32_t allocator__buf__unsafe_align=*__t6122t;
  uint64_t allocator__pos=*__t6123t;
  int __t1325t=0;
  uint64_t __t1326t__=0;
  uint64_t next_pos=0;
  uint64_t __t1327t__=0;
  char __t1328t__=0;
  uint64_t __t1329t=0;
  uint64_t __t1330t__=0;
  uint64_t pos=0;
  char* __t1331t__buf__unsafe_ptr=0;
  uint64_t __t1331t__buf__unsafe_size=0;
  uint32_t __t1331t__buf__unsafe_offset=0;
  uint32_t __t1331t__buf__unsafe_align=0;
  uint64_t __t1331t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1326t__);
  next_pos=__t1326t__;
  len__t1197t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1327t__);
  gt__t326t(next_pos,__t1327t__,&__t1328t__);
  if(__t1328t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1329t=0;
  add__t188t(allocator__pos,__t1329t,&__t1330t__);
  pos=__t1330t__;
  allocator__pos=next_pos;
  allocated__t1249t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1331t__buf__unsafe_ptr,&__t1331t__buf__unsafe_size,&__t1331t__buf__unsafe_offset,&__t1331t__buf__unsafe_align,&__t1331t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6119t=allocator__buf__unsafe_ptr;
  *__t6120t=allocator__buf__unsafe_size;
  *__t6121t=allocator__buf__unsafe_offset;
  *__t6122t=allocator__buf__unsafe_align;
  *__t6123t=allocator__pos;
  *__t6124t=__t1331t__buf__unsafe_ptr;
  *__t6125t=__t1331t__buf__unsafe_size;
  *__t6126t=__t1331t__buf__unsafe_offset;
  *__t6127t=__t1331t__buf__unsafe_align;
  *__t6128t=__t1331t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1787t(char** __t6129t, uint64_t* __t6130t, uint32_t* __t6131t, uint32_t* __t6132t, uint64_t* __t6133t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t6134t, uint64_t* __t6135t, uint64_t* __t6136t, char* __t6137t) {
  char* CHARS__buf__unsafe_ptr=*__t6129t;
  uint64_t CHARS__buf__unsafe_size=*__t6130t;
  uint32_t CHARS__buf__unsafe_offset=*__t6131t;
  uint32_t CHARS__buf__unsafe_align=*__t6132t;
  uint64_t CHARS__pos=*__t6133t;
  char* __t1788t__unsafe_ptr=0;
  uint64_t __t1788t__dat__pos=0;
  uint64_t __t1788t__dat__length=0;
  char __t1788t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1789t__buf__unsafe_ptr=0;
  uint64_t __t1789t__buf__unsafe_size=0;
  uint32_t __t1789t__buf__unsafe_offset=0;
  uint32_t __t1789t__buf__unsafe_align=0;
  uint64_t __t1789t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1790t=0;
  char* __t1791t__unsafe_ptr=0;
  uint64_t __t1791t__dat__pos=0;
  uint64_t __t1791t__dat__length=0;
  char __t1791t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1788t__unsafe_ptr,&__t1788t__dat__pos,&__t1788t__dat__length,&__t1788t__dat__first);
  other__unsafe_ptr=__t1788t__unsafe_ptr;
  other__dat__pos=__t1788t__dat__pos;
  other__dat__length=__t1788t__dat__length;
  other__dat__first=__t1788t__dat__first;
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1789t__buf__unsafe_ptr,&__t1789t__buf__unsafe_size,&__t1789t__buf__unsafe_offset,&__t1789t__buf__unsafe_align,&__t1789t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1789t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1789t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1789t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1789t__buf__unsafe_align;
  surface__pos=__t1789t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1662t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1791t__unsafe_ptr,&__t1791t__dat__pos,&__t1791t__dat__length,&__t1791t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6129t=CHARS__buf__unsafe_ptr;
  *__t6130t=CHARS__buf__unsafe_size;
  *__t6131t=CHARS__buf__unsafe_offset;
  *__t6132t=CHARS__buf__unsafe_align;
  *__t6133t=CHARS__pos;
  *__t6134t=__t1791t__unsafe_ptr;
  *__t6135t=__t1791t__dat__pos;
  *__t6136t=__t1791t__dat__length;
  *__t6137t=__t1791t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1251t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6138t, uint64_t* __t6139t, uint32_t* __t6140t, uint32_t* __t6141t, uint64_t* __t6142t) {
  char* __t1252t__unsafe_ptr=0;
  uint64_t __t1252t__unsafe_size=0;
  uint32_t __t1252t__unsafe_offset=0;
  uint32_t __t1252t__unsafe_align=0;
  uint64_t __t1253t=0;
  __t1252t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1252t__unsafe_size=self__buf__unsafe_size;
  __t1252t__unsafe_offset=self__buf__unsafe_offset;
  __t1252t__unsafe_align=self__buf__unsafe_align;
  __t1253t=self__pos;
  goto __t_return;
  __t_return:
  *__t6138t=__t1252t__unsafe_ptr;
  *__t6139t=__t1252t__unsafe_size;
  *__t6140t=__t1252t__unsafe_offset;
  *__t6141t=__t1252t__unsafe_align;
  *__t6142t=__t1253t;
}

int str__t1714t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t6143t, uint64_t* __t6144t, uint64_t* __t6145t, char* __t6146t) {
  uint64_t __t1716t__=0;
  char* __t1717t__unsafe_ptr=0;
  uint64_t __t1717t__dat__pos=0;
  uint64_t __t1717t__dat__length=0;
  char __t1717t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1696t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1716t__,&__t1717t__unsafe_ptr,&__t1717t__dat__pos,&__t1717t__dat__length,&__t1717t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6143t=__t1717t__unsafe_ptr;
  *__t6144t=__t1717t__dat__pos;
  *__t6145t=__t1717t__dat__length;
  *__t6146t=__t1717t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2641t(char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6147t, uint64_t* __t6148t, uint64_t* __t6149t, char* __t6150t) {
  char* __t2642t__unsafe_ptr=0;
  uint64_t __t2642t__dat__pos=0;
  uint64_t __t2642t__dat__length=0;
  char __t2642t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2643t__unsafe_ptr=0;
  uint64_t __t2643t__dat__pos=0;
  uint64_t __t2643t__dat__length=0;
  char __t2643t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t2644t__=0;
  uint64_t __t2645t__=0;
  uint64_t __t2646t__=0;
  char* __t2647t__buf__unsafe_ptr=0;
  uint64_t __t2647t__buf__unsafe_size=0;
  uint32_t __t2647t__buf__unsafe_offset=0;
  uint32_t __t2647t__buf__unsafe_align=0;
  uint64_t __t2647t__pos=0;
  char* __t2649t____t1255t__unsafe_ptr=0;
  uint64_t __t2649t____t1255t__unsafe_size=0;
  uint32_t __t2649t____t1255t__unsafe_offset=0;
  uint32_t __t2649t____t1255t__unsafe_align=0;
  uint64_t __t2649t____t1256t=0;
  char* charalloc____t1255t__unsafe_ptr=0;
  uint64_t charalloc____t1255t__unsafe_size=0;
  uint32_t charalloc____t1255t__unsafe_offset=0;
  uint32_t charalloc____t1255t__unsafe_align=0;
  uint64_t charalloc____t1256t=0;
  char* __t2650t__buf__unsafe_ptr=0;
  uint64_t __t2650t__buf__unsafe_size=0;
  uint32_t __t2650t__buf__unsafe_offset=0;
  uint32_t __t2650t__buf__unsafe_align=0;
  uint64_t __t2650t__pos=0;
  char* __t2651t__buf__unsafe_ptr=0;
  uint64_t __t2651t__buf__unsafe_size=0;
  uint32_t __t2651t__buf__unsafe_offset=0;
  uint32_t __t2651t__buf__unsafe_align=0;
  uint64_t __t2651t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t2652t=0;
  uint64_t __t2653t__=0;
  uint64_t start=0;
  int __t2654t=0;
  char __t2655t=0;
  char* __t2656t__unsafe_ptr=0;
  uint64_t __t2656t__dat__pos=0;
  uint64_t __t2656t__dat__length=0;
  char __t2656t__dat__first=0;
  char __t2657t=0;
  char* __t2658t__unsafe_ptr=0;
  uint64_t __t2658t__dat__pos=0;
  uint64_t __t2658t__dat__length=0;
  char __t2658t__dat__first=0;
  char __t2659t=0;
  char* __t2660t____t1252t__unsafe_ptr=0;
  uint64_t __t2660t____t1252t__unsafe_size=0;
  uint32_t __t2660t____t1252t__unsafe_offset=0;
  uint32_t __t2660t____t1252t__unsafe_align=0;
  uint64_t __t2660t____t1253t=0;
  char* __t2662t__unsafe_ptr=0;
  uint64_t __t2662t__dat__pos=0;
  uint64_t __t2662t__dat__length=0;
  char __t2662t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2642t__unsafe_ptr,&__t2642t__dat__pos,&__t2642t__dat__length,&__t2642t__dat__first);
  s1__unsafe_ptr=__t2642t__unsafe_ptr;
  s1__dat__pos=__t2642t__dat__pos;
  s1__dat__length=__t2642t__dat__length;
  s1__dat__first=__t2642t__dat__first;
  str__t1718t(_s2,&__t2643t__unsafe_ptr,&__t2643t__dat__pos,&__t2643t__dat__length,&__t2643t__dat__first);
  s2__unsafe_ptr=__t2643t__unsafe_ptr;
  s2__dat__pos=__t2643t__dat__pos;
  s2__dat__length=__t2643t__dat__length;
  s2__dat__first=__t2643t__dat__first;
  len__t1728t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2644t__);
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2645t__);
  add__t188t(__t2644t__,__t2645t__,&__t2646t__);
  __t_errcode=alloc__t1639t(__t2646t__,&__t2647t__buf__unsafe_ptr,&__t2647t__buf__unsafe_size,&__t2647t__buf__unsafe_offset,&__t2647t__buf__unsafe_align,&__t2647t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t2647t__buf__unsafe_ptr,__t2647t__buf__unsafe_size,__t2647t__buf__unsafe_offset,__t2647t__buf__unsafe_align,__t2647t__pos,&__t2649t____t1255t__unsafe_ptr,&__t2649t____t1255t__unsafe_size,&__t2649t____t1255t__unsafe_offset,&__t2649t____t1255t__unsafe_align,&__t2649t____t1256t);
  charalloc____t1255t__unsafe_ptr=__t2649t____t1255t__unsafe_ptr;
  charalloc____t1255t__unsafe_size=__t2649t____t1255t__unsafe_size;
  charalloc____t1255t__unsafe_offset=__t2649t____t1255t__unsafe_offset;
  charalloc____t1255t__unsafe_align=__t2649t____t1255t__unsafe_align;
  charalloc____t1256t=__t2649t____t1256t;
  arena__t1242t(&charalloc____t1255t__unsafe_ptr,&charalloc____t1255t__unsafe_size,&charalloc____t1255t__unsafe_offset,&charalloc____t1255t__unsafe_align,charalloc____t1256t,&__t2650t__buf__unsafe_ptr,&__t2650t__buf__unsafe_size,&__t2650t__buf__unsafe_offset,&__t2650t__buf__unsafe_align,&__t2650t__pos);
  __t2651t__buf__unsafe_ptr=__t2650t__buf__unsafe_ptr;
  __t2651t__buf__unsafe_size=__t2650t__buf__unsafe_size;
  __t2651t__buf__unsafe_offset=__t2650t__buf__unsafe_offset;
  __t2651t__buf__unsafe_align=__t2650t__buf__unsafe_align;
  __t2651t__pos=__t2650t__pos;
  surface__buf__unsafe_ptr=__t2651t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2651t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2651t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2651t__buf__unsafe_align;
  surface__pos=__t2651t__pos;
  __t2652t=0;
  add__t188t(surface__pos,__t2652t,&__t2653t__);
  start=__t2653t__;
  __t_complain=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2656t__unsafe_ptr,&__t2656t__dat__pos,&__t2656t__dat__length,&__t2656t__dat__first);
  __t2655t=__t_complain;
  if(__t_complain){
  goto __t2655t__label;
  }
  __t2655t__label:__t2655t=__t2655t==0;
  __t_complain=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2658t__unsafe_ptr,&__t2658t__dat__pos,&__t2658t__dat__length,&__t2658t__dat__first);
  __t2657t=__t_complain;
  if(__t_complain){
  goto __t2657t__label;
  }
  __t2657t__label:__t2657t=__t2657t==0;
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2660t____t1252t__unsafe_ptr,&__t2660t____t1252t__unsafe_size,&__t2660t____t1252t__unsafe_offset,&__t2660t____t1252t__unsafe_align,&__t2660t____t1253t);
  __t_complain=str__t1714t(__t2660t____t1252t__unsafe_ptr,__t2660t____t1252t__unsafe_size,__t2660t____t1252t__unsafe_offset,__t2660t____t1252t__unsafe_align,__t2660t____t1253t,start,&__t2662t__unsafe_ptr,&__t2662t__dat__pos,&__t2662t__dat__length,&__t2662t__dat__first);
  __t2659t=__t_complain;
  if(__t_complain){
  goto __t2659t__label;
  }
  ret__unsafe_ptr=__t2662t__unsafe_ptr;
  ret__dat__pos=__t2662t__dat__pos;
  ret__dat__length=__t2662t__dat__length;
  ret__dat__first=__t2662t__dat__first;
  __t2659t__label:__t2659t=__t2659t==0;
  goto __t_return;
  
  __t_failure:free__t844t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6147t=ret__unsafe_ptr;
  *__t6148t=ret__dat__pos;
  *__t6149t=ret__dat__length;
  *__t6150t=ret__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1924t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1925t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int assert__t5603t(char condition, char* text__unsafe_ptr, uint64_t text__dat__pos, uint64_t text__dat__length, char text__dat__first) {
  int64_t __t5604t__=0;
  char __t5606t__initialized=0;
  char __t5608t__initialized=0;
  char colors__initialized=0;
  char __t5609t__=0;
  const char* __t5610t__value=0;
  const char* __t5610t____t464t=0;
  const char* __t5614t__value=0;
  const char* __t5614t____t464t=0;
  int __t5617t=0;
  const char* __t5618t__value=0;
  const char* __t5618t____t464t=0;
  const char* __t5622t__value=0;
  const char* __t5622t____t464t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5558t(&__t5604t__);
  colors__t501t(&__t5606t__initialized);
  __t5608t__initialized=__t5606t__initialized;
  colors__initialized=__t5608t__initialized;
  not__t42t(condition,&__t5609t__);
  if(__t5609t__){
  nn__t462t(__t5570t,&__t5610t__value,&__t5610t____t464t);
  print__t471t(__t5610t__value,__t5610t____t464t);
  print_marker__t5522t(colors__initialized);
  nn__t462t(__t5575t,&__t5614t__value,&__t5614t____t464t);
  print__t471t(__t5614t__value,__t5614t____t464t);
  print__t1924t(text__unsafe_ptr,text__dat__pos,text__dat__length,text__dat__first);
  __t_errcode=65;
  goto __t_failure;
  }
  nn__t462t(__t5570t,&__t5618t__value,&__t5618t____t464t);
  print__t471t(__t5618t__value,__t5618t____t464t);
  print_marker__t5503t(colors__initialized);
  nn__t462t(__t5584t,&__t5622t__value,&__t5622t____t464t);
  print__t471t(__t5622t__value,__t5622t____t464t);
  print__t1924t(text__unsafe_ptr,text__dat__pos,text__dat__length,text__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(__t5606t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t5557t(__t5604t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test_bounded__t5813t(uint64_t* __t6151t, uint64_t* __t6152t, uint64_t* __t6153t, uint64_t* __t6154t) {
  uint64_t RAND__s0=*__t6151t;
  uint64_t RAND__s1=*__t6152t;
  uint64_t RAND__s2=*__t6153t;
  uint64_t RAND__s3=*__t6154t;
  uint64_t __t5814t=0;
  uint64_t n=0;
  uint64_t __t5815t=0;
  uint64_t __t5818t=0;
  uint64_t __t5819t=0;
  uint64_t __t5820t=0;
  uint64_t __t5821t=0;
  uint64_t __t5822t=0;
  char* __t5823t__unsafe_ptr=0;
  uint64_t __t5823t__unsafe_size=0;
  uint32_t __t5823t__unsafe_offset=0;
  uint32_t __t5823t__unsafe_align=0;
  uint64_t __t5824t=0;
  char* __t5825t__unsafe_ptr=0;
  uint64_t __t5825t__unsafe_size=0;
  uint32_t __t5825t__unsafe_offset=0;
  uint32_t __t5825t__unsafe_align=0;
  char* __t5827t__unsafe_ptr=0;
  uint64_t __t5827t__unsafe_size=0;
  uint32_t __t5827t__unsafe_offset=0;
  uint32_t __t5827t__unsafe_align=0;
  char* counts__unsafe_ptr=0;
  uint64_t counts__unsafe_size=0;
  uint32_t counts__unsafe_offset=0;
  uint32_t counts__unsafe_align=0;
  uint64_t __t5828t=0;
  uint64_t __t5829t__from=0;
  uint64_t __t5829t__to=0;
  uint64_t __t5830t__from=0;
  uint64_t __t5830t__to=0;
  char __t5831t=0;
  uint64_t __t5832t__=0;
  uint64_t i=0;
  uint64_t __t5833t=0;
  uint64_t __t5834t__from=0;
  uint64_t __t5834t__to=0;
  uint64_t __t5835t__=0;
  uint64_t x=0;
  char* __t5837t__=0;
  char* __t5839t__=0;
  uint64_t __t5840t__value=0;
  uint64_t __t5841t=0;
  uint64_t __t5842t__=0;
  uint64_t __t5843t=0;
  uint64_t __t5844t=0;
  uint64_t __t5845t__=0;
  uint64_t expected=0;
  uint64_t __t5847t=0;
  char __t5848t=0;
  char* __t5849t__=0;
  uint64_t __t5850t__value=0;
  uint64_t count=0;
  uint64_t __t5851t__=0;
  uint64_t __t5852t=0;
  uint64_t __t5853t__=0;
  char __t5854t__=0;
  uint64_t __t5855t=0;
  uint64_t __t5856t__=0;
  char* __t5857t__unsafe_ptr=0;
  uint64_t __t5857t__dat__pos=0;
  uint64_t __t5857t__dat__length=0;
  char __t5857t__dat__first=0;
  char* __t5860t__unsafe_ptr=0;
  uint64_t __t5860t__dat__pos=0;
  uint64_t __t5860t__dat__length=0;
  char __t5860t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5814t=100000;
  n=__t5814t;
  __t5815t=0;
  __t5818t=0;
  __t5819t=0;
  __t5820t=0;
  __t5821t=0;
  __t5822t=0;
  nat____buffer__t5816t(&__t5823t__unsafe_ptr,&__t5823t__unsafe_size,&__t5823t__unsafe_offset,&__t5823t__unsafe_align);
  __t5824t=6;
  __t_errcode=alloc__t969t(&__t5823t__unsafe_ptr,&__t5823t__unsafe_size,&__t5823t__unsafe_offset,&__t5823t__unsafe_align,__t5824t,&__t5825t__unsafe_ptr,&__t5825t__unsafe_size,&__t5825t__unsafe_offset,&__t5825t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5823t__unsafe_ptr,&__t5815t,8);
  memcpy(__t5823t__unsafe_ptr+8,&__t5818t,8);
  memcpy(__t5823t__unsafe_ptr+16,&__t5819t,8);
  memcpy(__t5823t__unsafe_ptr+24,&__t5820t,8);
  memcpy(__t5823t__unsafe_ptr+32,&__t5821t,8);
  memcpy(__t5823t__unsafe_ptr+40,&__t5822t,8);
  __t5827t__unsafe_ptr=__t5823t__unsafe_ptr;
  __t5827t__unsafe_size=__t5823t__unsafe_size;
  __t5827t__unsafe_offset=__t5823t__unsafe_offset;
  __t5827t__unsafe_align=__t5823t__unsafe_align;
  counts__unsafe_ptr=__t5827t__unsafe_ptr;
  counts__unsafe_size=__t5827t__unsafe_size;
  counts__unsafe_offset=__t5827t__unsafe_offset;
  counts__unsafe_align=__t5827t__unsafe_align;
  of__t779t(n,&__t5829t__from,&__t5829t__to);
  range__t796t(__t5829t__from,__t5829t__to,&__t5830t__from,&__t5830t__to);
  __t5828t=0-1;
  while(1){
  __t5828t=__t5828t+1;
  __t_complain=mutget__t801t(&__t5830t__from,__t5830t__to,__t5828t,&__t5832t__);
  __t5831t=__t_complain;
  if(__t_complain){
  goto __t5831t__label;
  }
  i=__t5832t__;
  __t5831t__label:__t5831t=__t5831t==0;
  if(!__t5831t){
  break;
  }
  __t5833t=6;
  of__t779t(__t5833t,&__t5834t__from,&__t5834t__to);
  __t_errcode=rand__t5737t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5834t__from,__t5834t__to,&__t5835t__);
  if(__t_errcode){
  goto __t_failure;
  }
  x=__t5835t__;
  __t_errcode=mutget__t1174t(&counts__unsafe_ptr,&counts__unsafe_size,&counts__unsafe_offset,&counts__unsafe_align,x,&__t5837t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t1174t(&counts__unsafe_ptr,&counts__unsafe_size,&counts__unsafe_offset,&counts__unsafe_align,x,&__t5839t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5839t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5840t__value,__t5839t__,8);
  __t5841t=1;
  add__t188t(__t5840t__value,__t5841t,&__t5842t__);
  if(!__t5837t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5837t__,&__t5842t__,8);
  }
  __t5843t=100000;
  __t5844t=6;
  __t_errcode=div__t270t(__t5843t,__t5844t,&__t5845t__);
  if(__t_errcode){
  goto __t_failure;
  }
  expected=__t5845t__;
  new__t1198t();
  __t5847t=0-1;
  while(1){
  __t5847t=__t5847t+1;
  __t_complain=mutget__t1174t(&counts__unsafe_ptr,&counts__unsafe_size,&counts__unsafe_offset,&counts__unsafe_align,__t5847t,&__t5849t__);
  __t5848t=__t_complain;
  if(__t_complain){
  goto __t5848t__label;
  }
  if(!__t5849t__){
  __t_complain=2;
  goto __t5848t__label;
  }
  else{
  memcpy(&__t5850t__value,__t5849t__,8);
  }
  count=__t5850t__value;
  __t5848t__label:__t5848t=__t5848t==0;
  if(!__t5848t){
  break;
  }
  absdiff__t441t(expected,count,&__t5851t__);
  __t5852t=50;
  __t_errcode=div__t270t(expected,__t5852t,&__t5853t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t302t(__t5851t__,__t5853t__,&__t5854t__);
  __t5855t=1;
  add__t188t(__t5847t,__t5855t,&__t5856t__);
  __t_errcode=copy__t3135t(__t5856t__,&__t5857t__unsafe_ptr,&__t5857t__dat__pos,&__t5857t__dat__length,&__t5857t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2641t(__t5857t__unsafe_ptr,__t5857t__dat__pos,__t5857t__dat__length,__t5857t__dat__first,__t5859t,&__t5860t__unsafe_ptr,&__t5860t__dat__pos,&__t5860t__dat__length,&__t5860t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=assert__t5603t(__t5854t__,__t5860t__unsafe_ptr,__t5860t__dat__pos,__t5860t__dat__length,__t5860t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  free__t844t(&__t5857t__unsafe_ptr);
  free__t844t(&__t5860t__unsafe_ptr);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6151t=RAND__s0;
  *__t6152t=RAND__s1;
  *__t6153t=RAND__s2;
  *__t6154t=RAND__s3;
  
  __t_skip_returns:free__t844t(&__t5825t__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t684t(uint64_t value, uint64_t* __t6155t) {
  goto __t_return;
  __t_return:
  *__t6155t=value;
}

static inline __attribute__((always_inline)) void band__t700t(uint64_t x__value, uint64_t y__value, uint64_t* __t6156t) {
  uint64_t z=0;
  uint64_t __t701t__value=0;
  z=(x__value&y__value);
  bits__t684t(z,&__t701t__value);
  goto __t_return;
  __t_return:
  *__t6156t=__t701t__value;
}

static inline __attribute__((always_inline)) void nat__t678t(uint64_t x, uint64_t* __t6157t) {
  int __t679t=0;
  int __t680t__=0;
  int __t681t=0;
  int __t682t=0;
  uint64_t value=0;
  not__t51t(__t679t,&__t680t__);
  value=x;
  goto __t_return;
  __t_return:
  *__t6157t=value;
}

static inline __attribute__((always_inline)) void nat__t690t(uint64_t x__value, uint64_t* __t6158t) {
  uint64_t __t691t__=0;
  nat__t678t(x__value,&__t691t__);
  goto __t_return;
  __t_return:
  *__t6158t=__t691t__;
}

static inline __attribute__((always_inline)) int test_low_bit__t5863t(uint64_t* __t6159t, uint64_t* __t6160t, uint64_t* __t6161t, uint64_t* __t6162t) {
  uint64_t RAND__s0=*__t6159t;
  uint64_t RAND__s1=*__t6160t;
  uint64_t RAND__s2=*__t6161t;
  uint64_t RAND__s3=*__t6162t;
  uint64_t __t5864t=0;
  uint64_t n=0;
  uint64_t __t5865t=0;
  uint64_t __t5866t=0;
  uint64_t zeros=0;
  uint64_t __t5867t=0;
  uint64_t __t5868t__from=0;
  uint64_t __t5868t__to=0;
  uint64_t __t5869t__from=0;
  uint64_t __t5869t__to=0;
  char __t5870t=0;
  uint64_t __t5871t__=0;
  uint64_t i=0;
  uint64_t __t5873t__=0;
  uint64_t __t5874t__value=0;
  uint64_t __t5875t=0;
  uint64_t __t5876t__value=0;
  uint64_t __t5877t__value=0;
  uint64_t __t5878t__=0;
  uint64_t __t5879t=0;
  char __t5880t__=0;
  uint64_t __t5881t=0;
  uint64_t __t5882t__=0;
  uint64_t __t5883t=0;
  uint64_t __t5884t__=0;
  uint64_t __t5885t__=0;
  uint64_t __t5886t=0;
  uint64_t __t5887t__=0;
  char __t5888t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5864t=100000;
  n=__t5864t;
  __t5865t=0;
  __t5866t=__t5865t;
  zeros=__t5866t;
  of__t779t(n,&__t5868t__from,&__t5868t__to);
  range__t796t(__t5868t__from,__t5868t__to,&__t5869t__from,&__t5869t__to);
  __t5867t=0-1;
  while(1){
  __t5867t=__t5867t+1;
  __t_complain=mutget__t801t(&__t5869t__from,__t5869t__to,__t5867t,&__t5871t__);
  __t5870t=__t_complain;
  if(__t_complain){
  goto __t5870t__label;
  }
  i=__t5871t__;
  __t5870t__label:__t5870t=__t5870t==0;
  if(!__t5870t){
  break;
  }
  rand__t5732t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5873t__);
  bits__t684t(__t5873t__,&__t5874t__value);
  __t5875t=1;
  bits__t684t(__t5875t,&__t5876t__value);
  band__t700t(__t5874t__value,__t5876t__value,&__t5877t__value);
  nat__t690t(__t5877t__value,&__t5878t__);
  __t5879t=0;
  eq__t134t(__t5878t__,__t5879t,&__t5880t__);
  if(__t5880t__){
  __t5881t=1;
  add__t188t(zeros,__t5881t,&__t5882t__);
  zeros=__t5882t__;
  }
  }
  __t5883t=2;
  __t_errcode=div__t270t(n,__t5883t,&__t5884t__);
  if(__t_errcode){
  goto __t_failure;
  }
  absdiff__t441t(zeros,__t5884t__,&__t5885t__);
  __t5886t=300;
  __t_errcode=div__t270t(n,__t5886t,&__t5887t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t302t(__t5885t__,__t5887t__,&__t5888t__);
  __t_errcode=assert__t5563t(__t5888t__,__t5889t);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6159t=RAND__s0;
  *__t6160t=RAND__s1;
  *__t6161t=RAND__s2;
  *__t6162t=RAND__s3;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t190t(double x, double y, double* __t6163t) {
  int __t191t__=0;
  double z=0;
  is_different__t85t(x,y,&__t191t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6163t=z;
}

static inline __attribute__((always_inline)) void sqrt__t5757t(double x, double* __t6164t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t6164t=z;
}

static inline __attribute__((always_inline)) int test_correlation__t5891t(uint64_t* __t6165t, uint64_t* __t6166t, uint64_t* __t6167t, uint64_t* __t6168t) {
  uint64_t RAND__s0=*__t6165t;
  uint64_t RAND__s1=*__t6166t;
  uint64_t RAND__s2=*__t6167t;
  uint64_t RAND__s3=*__t6168t;
  uint64_t __t5892t=0;
  uint64_t n=0;
  double __t5893t__=0;
  double __t5894t=0;
  double prev=0;
  double __t5895t=0;
  double __t5896t=0;
  double sx=0;
  double __t5897t=0;
  double __t5898t=0;
  double sy=0;
  double __t5899t=0;
  double __t5900t=0;
  double xy=0;
  double __t5901t=0;
  double __t5902t=0;
  double x2=0;
  double __t5903t=0;
  double __t5904t=0;
  double y2=0;
  uint64_t __t5905t=0;
  uint64_t __t5906t__from=0;
  uint64_t __t5906t__to=0;
  uint64_t __t5907t__from=0;
  uint64_t __t5907t__to=0;
  char __t5908t=0;
  uint64_t __t5909t__=0;
  uint64_t i=0;
  double __t5910t__=0;
  double next=0;
  double __t5911t__=0;
  double __t5912t__=0;
  double __t5913t__=0;
  double __t5914t__=0;
  double __t5915t__=0;
  double __t5916t__=0;
  double __t5917t__=0;
  double __t5918t__=0;
  double __t5919t__=0;
  double fn=0;
  double __t5920t__=0;
  double mx=0;
  double __t5921t__=0;
  double my=0;
  double __t5922t__=0;
  double __t5923t__=0;
  double __t5924t__=0;
  double __t5925t__=0;
  double __t5926t__=0;
  double __t5927t__=0;
  double __t5928t__=0;
  double __t5929t__=0;
  double __t5930t__=0;
  double __t5931t__=0;
  double __t5932t__=0;
  double __t5933t__=0;
  double corr=0;
  double __t5934t=0;
  char __t5935t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5892t=100000;
  n=__t5892t;
  rand__t5724t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5893t__);
  __t5894t=__t5893t__;
  prev=__t5894t;
  __t5895t=0.0;
  __t5896t=__t5895t;
  sx=__t5896t;
  __t5897t=0.0;
  __t5898t=__t5897t;
  sy=__t5898t;
  __t5899t=0.0;
  __t5900t=__t5899t;
  xy=__t5900t;
  __t5901t=0.0;
  __t5902t=__t5901t;
  x2=__t5902t;
  __t5903t=0.0;
  __t5904t=__t5903t;
  y2=__t5904t;
  of__t779t(n,&__t5906t__from,&__t5906t__to);
  range__t796t(__t5906t__from,__t5906t__to,&__t5907t__from,&__t5907t__to);
  __t5905t=0-1;
  while(1){
  __t5905t=__t5905t+1;
  __t_complain=mutget__t801t(&__t5907t__from,__t5907t__to,__t5905t,&__t5909t__);
  __t5908t=__t_complain;
  if(__t_complain){
  goto __t5908t__label;
  }
  i=__t5909t__;
  __t5908t__label:__t5908t=__t5908t==0;
  if(!__t5908t){
  break;
  }
  rand__t5724t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,&__t5910t__);
  next=__t5910t__;
  add__t166t(sx,prev,&__t5911t__);
  sx=__t5911t__;
  add__t166t(sy,next,&__t5912t__);
  sy=__t5912t__;
  mul__t190t(prev,next,&__t5913t__);
  add__t166t(xy,__t5913t__,&__t5914t__);
  xy=__t5914t__;
  mul__t190t(prev,prev,&__t5915t__);
  add__t166t(x2,__t5915t__,&__t5916t__);
  x2=__t5916t__;
  mul__t190t(next,next,&__t5917t__);
  add__t166t(y2,__t5917t__,&__t5918t__);
  y2=__t5918t__;
  prev=next;
  }
  float__t648t(n,&__t5919t__);
  fn=__t5919t__;
  __t_errcode=div__t220t(sx,fn,&__t5920t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mx=__t5920t__;
  __t_errcode=div__t220t(sy,fn,&__t5921t__);
  if(__t_errcode){
  goto __t_failure;
  }
  my=__t5921t__;
  __t_errcode=div__t220t(xy,fn,&__t5922t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t190t(mx,my,&__t5923t__);
  sub__t376t(__t5922t__,__t5923t__,&__t5924t__);
  __t_errcode=div__t220t(x2,fn,&__t5925t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t190t(mx,mx,&__t5926t__);
  sub__t376t(__t5925t__,__t5926t__,&__t5927t__);
  __t_errcode=div__t220t(y2,fn,&__t5928t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t190t(my,my,&__t5929t__);
  sub__t376t(__t5928t__,__t5929t__,&__t5930t__);
  mul__t190t(__t5927t__,__t5930t__,&__t5931t__);
  sqrt__t5757t(__t5931t__,&__t5932t__);
  __t_errcode=div__t220t(__t5924t__,__t5932t__,&__t5933t__);
  if(__t_errcode){
  goto __t_failure;
  }
  corr=__t5933t__;
  __t5934t=0.01;
  lt__t280t(corr,__t5934t,&__t5935t__);
  __t_errcode=assert__t5563t(__t5935t__,__t5936t);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6165t=RAND__s0;
  *__t6166t=RAND__s1;
  *__t6167t=RAND__s2;
  *__t6168t=RAND__s3;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test_bounds__t5938t(uint64_t* __t6169t, uint64_t* __t6170t, uint64_t* __t6171t, uint64_t* __t6172t) {
  uint64_t RAND__s0=*__t6169t;
  uint64_t RAND__s1=*__t6170t;
  uint64_t RAND__s2=*__t6171t;
  uint64_t RAND__s3=*__t6172t;
  uint64_t __t5939t=0;
  uint64_t __t5940t=0;
  uint64_t __t5941t__from=0;
  uint64_t __t5941t__to=0;
  uint64_t __t5942t__=0;
  char __t5943t__=0;
  uint64_t __t5946t=0;
  uint64_t __t5947t=0;
  uint64_t __t5948t__from=0;
  uint64_t __t5948t__to=0;
  uint64_t __t5949t__from=0;
  uint64_t __t5949t__to=0;
  char __t5950t=0;
  uint64_t __t5951t__=0;
  uint64_t i=0;
  uint64_t __t5952t=0;
  uint64_t __t5953t__from=0;
  uint64_t __t5953t__to=0;
  uint64_t __t5954t__=0;
  uint64_t x=0;
  uint64_t __t5955t=0;
  char __t5956t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5939t=0;
  __t5940t=1;
  of__t779t(__t5940t,&__t5941t__from,&__t5941t__to);
  __t_errcode=rand__t5737t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5941t__from,__t5941t__to,&__t5942t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t134t(__t5939t,__t5942t__,&__t5943t__);
  __t_errcode=assert__t5563t(__t5943t__,__t5944t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5947t=10000;
  of__t779t(__t5947t,&__t5948t__from,&__t5948t__to);
  range__t796t(__t5948t__from,__t5948t__to,&__t5949t__from,&__t5949t__to);
  __t5946t=0-1;
  while(1){
  __t5946t=__t5946t+1;
  __t_complain=mutget__t801t(&__t5949t__from,__t5949t__to,__t5946t,&__t5951t__);
  __t5950t=__t_complain;
  if(__t_complain){
  goto __t5950t__label;
  }
  i=__t5951t__;
  __t5950t__label:__t5950t=__t5950t==0;
  if(!__t5950t){
  break;
  }
  __t5952t=6;
  of__t779t(__t5952t,&__t5953t__from,&__t5953t__to);
  __t_errcode=rand__t5737t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3,__t5953t__from,__t5953t__to,&__t5954t__);
  if(__t_errcode){
  goto __t_failure;
  }
  x=__t5954t__;
  __t5955t=6;
  lt__t302t(x,__t5955t,&__t5956t__);
  __t_errcode=assert__t5588t(__t5956t__,__t5957t);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6169t=RAND__s0;
  *__t6170t=RAND__s1;
  *__t6171t=RAND__s2;
  *__t6172t=RAND__s3;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5960t(uint64_t* __t6173t, uint64_t* __t6174t, uint64_t* __t6175t, uint64_t* __t6176t) {
  uint64_t RAND__s0=*__t6173t;
  uint64_t RAND__s1=*__t6174t;
  uint64_t RAND__s2=*__t6175t;
  uint64_t RAND__s3=*__t6176t;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test_float__t5771t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test_bounded__t5813t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test_low_bit__t5863t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test_correlation__t5891t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test_bounds__t5938t(&RAND__s0,&RAND__s1,&RAND__s2,&RAND__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6173t=RAND__s0;
  *__t6174t=RAND__s1;
  *__t6175t=RAND__s2;
  *__t6176t=RAND__s3;
  
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
  uint64_t __t6179t__s0=0;
  uint64_t __t6179t__s1=0;
  uint64_t __t6179t__s2=0;
  uint64_t __t6179t__s3=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t448t();
  xoshiro256plusplus__t5717t(&__t6179t__s0,&__t6179t__s1,&__t6179t__s2,&__t6179t__s3);
  __t_errcode=main__t5960t(&__t6179t__s0,&__t6179t__s1,&__t6179t__s2,&__t6179t__s3);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}