#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[46] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void std_data__t5788t(double* __t5822t, double* __t5823t, uint64_t* __t5824t) {
  double __t5789t=0;
  double __t5790t=0;
  double sum=0;
  double __t5791t=0;
  double __t5792t=0;
  double sqr_sum=0;
  uint64_t __t5793t=0;
  uint64_t __t5794t=0;
  uint64_t num=0;
  __t5789t=0.0;
  __t5790t=__t5789t;
  sum=__t5790t;
  __t5791t=0.0;
  __t5792t=__t5791t;
  sqr_sum=__t5792t;
  __t5793t=0;
  __t5794t=__t5793t;
  num=__t5794t;
  goto __t_return;
  __t_return:
  *__t5822t=sum;
  *__t5823t=sqr_sum;
  *__t5824t=num;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5825t) {
  int value=0;
  *__t5825t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5826t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5826t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5827t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5827t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5828t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5828t=z;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5829t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5829t=z;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5830t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5830t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5831t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5831t=z;
}

static inline __attribute__((always_inline)) void register__t5796t(double* __t5832t, double* __t5833t, uint64_t* __t5834t, double value) {
  double data__sum=*__t5832t;
  double data__sqr_sum=*__t5833t;
  uint64_t data__num=*__t5834t;
  double __t5797t__=0;
  double __t5798t__=0;
  double __t5799t__=0;
  uint64_t __t5800t=0;
  uint64_t __t5801t__=0;
  add__t153t(data__sum,value,&__t5797t__);
  data__sum=__t5797t__;
  mul__t177t(value,value,&__t5798t__);
  add__t153t(data__sqr_sum,__t5798t__,&__t5799t__);
  data__sqr_sum=__t5799t__;
  __t5800t=1;
  add__t175t(data__num,__t5800t,&__t5801t__);
  data__num=__t5801t__;
  *__t5832t=data__sum;
  *__t5833t=data__sqr_sum;
  *__t5834t=data__num;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5835t) {
  int value=0;
  *__t5835t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5836t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5836t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t559t(uint64_t x, double* __t5837t) {
  int __t560t=0;
  int __t561t__=0;
  int __t562t=0;
  double z=0;
  not__t39t(__t560t,&__t561t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5837t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5838t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5838t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5839t) {
  int __t202t__=0;
  double zero=0;
  char __t203t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t71t(x,y,&__t202t__);
  zero=0;
  eq__t98t(y,zero,&__t203t__);
  if(__t203t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5839t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5840t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5840t=z;
}

static inline __attribute__((always_inline)) void pow__t2096t(double x, double y, double* __t5841t) {
  double z=0;
  z=pow(x,y);
  goto __t_return;
  __t_return:
  *__t5841t=z;
}

static inline __attribute__((always_inline)) int std__t5802t(double data__sum, double data__sqr_sum, uint64_t data__num, double* __t5842t) {
  double __t5803t__=0;
  double __t5804t__=0;
  double sqr_mean=0;
  double __t5805t__=0;
  double __t5806t__=0;
  double mean=0;
  double __t5807t__=0;
  double __t5808t__=0;
  double __t5809t=0;
  double __t5810t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float__t559t(data__num,&__t5803t__);
  __t_errcode=div__t201t(data__sqr_sum,__t5803t__,&__t5804t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqr_mean=__t5804t__;
  float__t559t(data__num,&__t5805t__);
  __t_errcode=div__t201t(data__sum,__t5805t__,&__t5806t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mean=__t5806t__;
  mul__t177t(mean,mean,&__t5807t__);
  sub__t326t(sqr_mean,__t5807t__,&__t5808t__);
  __t5809t=0.5;
  pow__t2096t(__t5808t__,__t5809t,&__t5810t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5842t=__t5810t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t5811t() {
  double __t5813t__sum=0;
  double __t5813t__sqr_sum=0;
  uint64_t __t5813t__num=0;
  double data__sum=0;
  double data__sqr_sum=0;
  uint64_t data__num=0;
  double __t5814t=0;
  double __t5816t=0;
  double __t5818t=0;
  double __t5820t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  std_data__t5788t(&__t5813t__sum,&__t5813t__sqr_sum,&__t5813t__num);
  data__sum=__t5813t__sum;
  data__sqr_sum=__t5813t__sqr_sum;
  data__num=__t5813t__num;
  __t5814t=1.0;
  register__t5796t(&data__sum,&data__sqr_sum,&data__num,__t5814t);
  __t5816t=1.0;
  register__t5796t(&data__sum,&data__sqr_sum,&data__num,__t5816t);
  __t5818t=2.3;
  register__t5796t(&data__sum,&data__sqr_sum,&data__num,__t5818t);
  __t_errcode=std__t5802t(data__sum,data__sqr_sum,data__num,&__t5820t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t5820t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t5811t();return 0;}