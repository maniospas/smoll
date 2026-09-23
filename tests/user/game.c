#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/raysupport.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t436t="";
const char* const __t5081t="overlap";
const char* const __t4964t="Create a safe failure (F), or unsafely crash (C)?\n";
const char* const __t5082t="std/ArianaVioleta-dz2K.ttf";
const char* const __t4959t="SIGINT: ";
static const char* __t_all_errcodes[53] = {"noerr",
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
"imbalanced brackets",
"failed to open window",
"already drawing on window",
"arg not found",
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed"
};

static inline __attribute__((always_inline)) void console__t424t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5128t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5128t=z;
}

static inline __attribute__((always_inline)) void exists__t1613t(const char* c, char* __t5129t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5129t=z;
}

static inline __attribute__((always_inline)) int unsafe_open_window__t4412t(double size__width, double size__height, const char* title, const char* font_path) {
  char ready=0;
  char __t4413t__=0;
  char __t4414t__=0;
  int64_t __smolambda_n=0;
  int64_t c=0;
  int __t_errcode=0;
  int __t_complain=0;
  SetTraceLogLevel(LOG_NONE);
  InitWindow(size__width,size__height,title);
  ready=IsWindowReady();
  not__t42t(ready,&__t4413t__);
  if(__t4413t__){
  __t_errcode=44;
  goto __t_failure;
  }
  exists__t1613t(font_path,&__t4414t__);
  if(__t4414t__){
  __smolambda_n=0;
  for(c=32;
  c<=126;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_codepoints[__smolambda_n++]=0x2018;
  __smolambda_codepoints[__smolambda_n++]=0x2019;
  for(int c=0x2500;
  c<=0x257F;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_font=__smo_load_font(font_path,128,__smolambda_codepoints,__smolambda_n);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int window__t4415t(double size__width, double size__height, const char* title, const char* font_path, double* __t5130t, double* __t5131t, const char** __t5132t, char* __t5133t) {
  int __t4420t=0;
  int __t4425t=0;
  char __t4426t=0;
  char __t4427t=0;
  char ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4426t=0;
  __t4427t=__t4426t;
  ready=__t4427t;
  __t_errcode=unsafe_open_window__t4412t(size__width,size__height,title,font_path);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5130t=size__width;
  *__t5131t=size__height;
  *__t5132t=title;
  *__t5133t=ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_open__t4430t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5134t, char* __t5135t) {
  char WINDOW__ready=*__t5134t;
  char ret=0;
  char __t4431t__=0;
  ret=WindowShouldClose();
  not__t42t(ret,&__t4431t__);
  goto __t_return;
  __t_return:
  *__t5134t=WINDOW__ready;
  *__t5135t=__t4431t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5136t) {
  int value=0;
  *__t5136t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5137t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5137t=__t54t__;
}

static inline __attribute__((always_inline)) void supports_ansi__t473t(char* __t5138t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5138t=supports;
}

static inline __attribute__((always_inline)) void colors__t474t(char* __t5139t) {
  char __t475t__=0;
  char initialized=0;
  supports_ansi__t473t(&__t475t__);
  initialized=__t475t__;
  goto __t_return;
  __t_return:
  *__t5139t=initialized;
}

static inline __attribute__((always_inline)) void set__t480t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void nn__t435t(const char* value, const char** __t5140t, const char** __t5141t) {
  const char* __t437t=0;
  __t437t=__t436t;
  goto __t_return;
  __t_return:
  *__t5140t=value;
  *__t5141t=__t437t;
}

static inline __attribute__((always_inline)) void print__t444t(const char* value, const char* endl) {
  int __t445t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t488t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) int breakpoint__t4945t() {
  int __t4947t=0;
  int __t4952t=0;
  int __t4953t__=0;
  char has_failed=0;
  char __t4954t__=0;
  char __t4955t__initialized=0;
  char color__initialized=0;
  const char* __t4960t__value=0;
  const char* __t4960t____t437t=0;
  const char* __t4965t__value=0;
  const char* __t4965t____t437t=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t53t(__t4952t,&__t4953t__);
  has_failed=__t_interrupted;
  not__t42t(has_failed,&__t4954t__);
  if(__t4954t__){
  goto __t_return;
  }
  colors__t474t(&__t4955t__initialized);
  color__initialized=__t4955t__initialized;
  set__t480t(color__initialized);
  nn__t435t(__t4959t,&__t4960t__value,&__t4960t____t437t);
  print__t444t(__t4960t__value,__t4960t____t437t);
  set__t488t(color__initialized);
  nn__t435t(__t4964t,&__t4965t__value,&__t4965t____t437t);
  print__t444t(__t4965t__value,__t4965t____t437t);
  if(__t4955t__initialized){
  printf("\033[0m");
  }
  while(1){
  c=getchar();
  if(c=='F'){
  has_failed=0;
  break;
  }
  if(c=='f'){
  has_failed=0;
  break;
  }
  if(c=='C'){
  break;
  }
  if(c=='c'){
  break;
  }
  }
  if(has_failed){
  _exit(1);
  }
  __t_errcode=47;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_begin_drawing__t4432t() {
  BeginDrawing();
}

static inline __attribute__((always_inline)) void unsafe_end_drawing__t4433t() {
  int __t4435t=0;
  EndDrawing();
}

static inline __attribute__((always_inline)) int draw__t4436t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5142t, char* __t5143t) {
  char WINDOW__ready=*__t5142t;
  char __t4437t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(WINDOW__ready){
  __t_errcode=45;
  goto __t_failure;
  }
  __t4437t=1;
  is_drawing=__t4437t;
  unsafe_begin_drawing__t4432t();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  unsafe_end_drawing__t4433t();
  }
  
  goto __t_skip_returns;__t_return:
  *__t5142t=WINDOW__ready;
  *__t5143t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5144t) {
  int value=0;
  *__t5144t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5145t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5145t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5146t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5146t=__t111t__;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5147t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5147t=z;
}

static inline __attribute__((always_inline)) int nat8__t673t(uint64_t x, uint8_t* __t5148t) {
  uint64_t __t674t=0;
  char __t675t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t674t=255;
  gt__t325t(x,__t674t,&__t675t__);
  if(__t675t__){
  __t_errcode=9;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5148t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t4403t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t5149t, uint8_t* __t5150t, uint8_t* __t5151t, uint8_t* __t5152t) {
  int __t4404t=0;
  uint64_t __t4405t=0;
  uint64_t _a=0;
  uint8_t __t4406t__=0;
  uint8_t r=0;
  uint8_t __t4407t__=0;
  uint8_t g=0;
  uint8_t __t4408t__=0;
  uint8_t b=0;
  uint8_t __t4409t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4405t=255;
  _a=__t4405t;
  __t_errcode=nat8__t673t(_r,&__t4406t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t4406t__;
  __t_errcode=nat8__t673t(_g,&__t4407t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t4407t__;
  __t_errcode=nat8__t673t(_b,&__t4408t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t4408t__;
  __t_errcode=nat8__t673t(_a,&__t4409t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t4409t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5149t=r;
  *__t5150t=g;
  *__t5151t=b;
  *__t5152t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t4440t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5153t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5153t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  *__t5153t=WINDOW__ready;
}

static inline __attribute__((always_inline)) int color__t4397t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t5154t, uint8_t* __t5155t, uint8_t* __t5156t, uint8_t* __t5157t) {
  int __t4398t=0;
  uint8_t __t4399t__=0;
  uint8_t r=0;
  uint8_t __t4400t__=0;
  uint8_t g=0;
  uint8_t __t4401t__=0;
  uint8_t b=0;
  uint8_t __t4402t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t673t(_r,&__t4399t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t4399t__;
  __t_errcode=nat8__t673t(_g,&__t4400t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t4400t__;
  __t_errcode=nat8__t673t(_b,&__t4401t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t4401t__;
  __t_errcode=nat8__t673t(_a,&__t4402t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t4402t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5154t=r;
  *__t5155t=g;
  *__t5156t=b;
  *__t5157t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ__t4506t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5158t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5158t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t5158t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void float__t621t(uint64_t x, double* __t5159t) {
  int __t622t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5159t=z;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t5160t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t5160t=__t87t__;
}

static inline __attribute__((always_inline)) void gt__t303t(double x, double y, char* __t5161t) {
  int __t304t__=0;
  char z=0;
  is_different__t85t(x,y,&__t304t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5161t=z;
}

static inline __attribute__((always_inline)) void sub__t375t(double x, double y, double* __t5162t) {
  int __t376t__=0;
  int __t377t=0;
  int __t378t=0;
  double z=0;
  is_different__t85t(x,y,&__t376t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5162t=z;
}

static inline __attribute__((always_inline)) void circ__t4518t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5163t, double pos__x, double pos__y, double radius, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5163t;
  double __t4519t__=0;
  char __t4520t__=0;
  double __t4523t=0;
  double inner=0;
  double __t4521t__=0;
  double __t4522t__=0;
  double outer=0;
  float__t621t(thickness,&__t4519t__);
  gt__t303t(radius,__t4519t__,&__t4520t__);
  if(__t4520t__){
  float__t621t(thickness,&__t4521t__);
  sub__t375t(radius,__t4521t__,&__t4522t__);
  inner=__t4522t__;
  }
  else{
  __t4523t=0.0;
  inner=__t4523t;
  }
  outer=(float)radius;
  DrawRing((Vector2){
  (float)pos__x,(float)pos__y}
  ,inner,outer,0,360,64,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t5163t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void rect__t4513t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5164t, double pos__x, double pos__y, double size__width, double size__height, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5164t;
  DrawRectangle(pos__x,pos__y,size__width,size__height,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t5164t=WINDOW__ready;
}

static inline __attribute__((always_inline)) void rect__t4514t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t5165t, double pos__x, double pos__y, double size__width, double size__height, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__ready=*__t5165t;
  DrawRectangleLinesEx((Rectangle){
  (float)pos__x,(float)pos__y,(float)size__width,(float)size__height}
  ,(int)thickness,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t5165t=WINDOW__ready;
}

static inline __attribute__((always_inline)) int main__t5076t() {
  double __t5079t=0;
  double __t5080t=0;
  double __t5083t__size__width=0;
  double __t5083t__size__height=0;
  const char* __t5083t__title=0;
  char __t5083t__ready=0;
  double __t5084t__size__width=0;
  double __t5084t__size__height=0;
  const char* __t5084t__title=0;
  char __t5084t__ready=0;
  double WINDOW__size__width=0;
  double WINDOW__size__height=0;
  const char* WINDOW__title=0;
  char WINDOW__ready=0;
  double __t5085t=0;
  double __t5086t=0;
  double __t5087t=0;
  double circ_state____t5085t=0;
  double circ_state____t5086t=0;
  double circ_state____t5087t=0;
  double __t5088t=0;
  double __t5089t=0;
  double __t5090t=0;
  double __t5091t=0;
  double rect_state____t5088t=0;
  double rect_state____t5089t=0;
  double rect_state____t5090t=0;
  double rect_state____t5091t=0;
  uint64_t __t5092t=0;
  uint64_t thickness=0;
  char __t5093t__=0;
  char __t5095t__=0;
  char frame=0;
  uint64_t __t5097t=0;
  uint64_t __t5098t=0;
  uint64_t __t5099t=0;
  uint8_t __t5100t__r=0;
  uint8_t __t5100t__g=0;
  uint8_t __t5100t__b=0;
  uint8_t __t5100t__a=0;
  uint64_t __t5103t=0;
  uint64_t __t5104t=0;
  uint64_t __t5105t=0;
  uint64_t __t5106t=0;
  uint8_t __t5107t__r=0;
  uint8_t __t5107t__g=0;
  uint8_t __t5107t__b=0;
  uint8_t __t5107t__a=0;
  uint64_t __t5110t=0;
  uint64_t __t5111t=0;
  uint64_t __t5112t=0;
  uint8_t __t5113t__r=0;
  uint8_t __t5113t__g=0;
  uint8_t __t5113t__b=0;
  uint8_t __t5113t__a=0;
  uint64_t __t5116t=0;
  uint64_t __t5117t=0;
  uint64_t __t5118t=0;
  uint64_t __t5119t=0;
  uint8_t __t5120t__r=0;
  uint8_t __t5120t__g=0;
  uint8_t __t5120t__b=0;
  uint8_t __t5120t__a=0;
  uint64_t __t5123t=0;
  uint64_t __t5124t=0;
  uint64_t __t5125t=0;
  uint8_t __t5126t__r=0;
  uint8_t __t5126t__g=0;
  uint8_t __t5126t__b=0;
  uint8_t __t5126t__a=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t424t();
  __t5079t=800.0;
  __t5080t=600.0;
  __t_errcode=window__t4415t(__t5079t,__t5080t,__t5081t,__t5082t,&__t5083t__size__width,&__t5083t__size__height,&__t5083t__title,&__t5083t__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5084t__size__width=__t5083t__size__width;
  __t5084t__size__height=__t5083t__size__height;
  __t5084t__title=__t5083t__title;
  __t5084t__ready=__t5083t__ready;
  WINDOW__size__width=__t5084t__size__width;
  WINDOW__size__height=__t5084t__size__height;
  WINDOW__title=__t5084t__title;
  WINDOW__ready=__t5084t__ready;
  __t5085t=100.0;
  __t5086t=100.0;
  __t5087t=50.0;
  circ_state____t5085t=__t5085t;
  circ_state____t5086t=__t5086t;
  circ_state____t5087t=__t5087t;
  __t5088t=120.0;
  __t5089t=120.0;
  __t5090t=200.0;
  __t5091t=50.0;
  rect_state____t5088t=__t5088t;
  rect_state____t5089t=__t5089t;
  rect_state____t5090t=__t5090t;
  rect_state____t5091t=__t5091t;
  __t5092t=3;
  thickness=__t5092t;
  while(1){
  is_open__t4430t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,&__t5093t__);
  if(!__t5093t__){
  break;
  }
  __t_errcode=breakpoint__t4945t();
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=draw__t4436t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,&__t5095t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t5095t__;
  __t5097t=255;
  __t5098t=255;
  __t5099t=255;
  __t_errcode=color__t4403t(__t5097t,__t5098t,__t5099t,&__t5100t__r,&__t5100t__g,&__t5100t__b,&__t5100t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t4440t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,__t5100t__r,__t5100t__g,__t5100t__b,__t5100t__a);
  __t5103t=255;
  __t5104t=0;
  __t5105t=0;
  __t5106t=128;
  __t_errcode=color__t4397t(__t5103t,__t5104t,__t5105t,__t5106t,&__t5107t__r,&__t5107t__g,&__t5107t__b,&__t5107t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t4506t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,circ_state____t5085t,circ_state____t5086t,circ_state____t5087t,__t5107t__r,__t5107t__g,__t5107t__b,__t5107t__a);
  __t5110t=128;
  __t5111t=0;
  __t5112t=0;
  __t_errcode=color__t4403t(__t5110t,__t5111t,__t5112t,&__t5113t__r,&__t5113t__g,&__t5113t__b,&__t5113t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t4518t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,circ_state____t5085t,circ_state____t5086t,circ_state____t5087t,thickness,__t5113t__r,__t5113t__g,__t5113t__b,__t5113t__a);
  __t5116t=0;
  __t5117t=255;
  __t5118t=0;
  __t5119t=128;
  __t_errcode=color__t4397t(__t5116t,__t5117t,__t5118t,__t5119t,&__t5120t__r,&__t5120t__g,&__t5120t__b,&__t5120t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  rect__t4513t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,rect_state____t5088t,rect_state____t5089t,rect_state____t5090t,rect_state____t5091t,__t5120t__r,__t5120t__g,__t5120t__b,__t5120t__a);
  __t5123t=0;
  __t5124t=128;
  __t5125t=0;
  __t_errcode=color__t4403t(__t5123t,__t5124t,__t5125t,&__t5126t__r,&__t5126t__g,&__t5126t__b,&__t5126t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  rect__t4514t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__ready,rect_state____t5088t,rect_state____t5089t,rect_state____t5090t,rect_state____t5091t,thickness,__t5126t__r,__t5126t__g,__t5126t__b,__t5126t__a);
  if(__t5095t__){
  unsafe_end_drawing__t4433t();
  }
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
                    return main__t5076t();
                }