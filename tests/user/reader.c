#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1260v="this is its square";
const char* const __temp1258v="invalid number";
const char* const __temp994v=" ";
const char* const __temp1254v="Please give a number:";
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void console__temp990v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void char__temp641v(const char* s, char* __temp1264v) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __temp_return;
  __temp_return:
  *__temp1264v=c;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1265v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) int float__temp1000v(double* __temp1266v) {
  char __temp1001v__=0;
  char SPACE=0;
  int64_t _c=0;
  char _neg=0;
  double number=0;
  char _has=0;
  double _base=0;
  char success=0;
  char __temp1002v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp641v(__temp994v,&__temp1001v__);
  SPACE=__temp1001v__;
  _c;
  while((_c=getchar())==SPACE||_c=='\t');
  _neg=(_c=='-');
  if(_neg||_c=='+')_c=getchar();
  number=0.0;
  _has=0;
  while(_c>='0'&&_c<='9'){
  number=number*10.0+(_c-'0');
  _has=1;
  _c=getchar();
  }
  if(_c=='.'){
  _c=getchar();
  _base=0.1;
  while(_c>='0'&&_c<='9'){
  number+=(_c-'0')*_base;
  _base*=0.1;
  _has=1;
  _c=getchar();
  }
  }
  if(_neg)number=-number;
  success=_has&&(_c=='\n'||_c=='\r'||_c==EOF);
  not__temp26v(success,&__temp1002v__);
  if(__temp1002v__){
  while(_c!='\n'&&_c!='\r'&&_c!=EOF)_c=getchar();
  __temp_errcode=22;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1266v=number;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1267v) {
  int value=0;
  *__temp1267v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1268v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1268v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1269v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1269v=__temp71v__;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1270v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1251v() {
  char __temp1253v=0;
  double __temp1256v__=0;
  double x=0;
  char __temp1257v__=0;
  double __temp1262v__=0;
  int __temp_complain=0;
  console__temp990v();
  while(1){
  print__temp363v(__temp1254v);
  __temp_complain=float__temp1000v(&__temp1256v__);
  __temp1253v=__temp_complain;
  x=__temp1256v__;
  __temp1253v=__temp1253v==0;
  not__temp26v(__temp1253v,&__temp1257v__);
  if(!__temp1257v__){
  break;
  }
  print__temp363v(__temp1258v);
  }
  print__temp363v(__temp1260v);
  mul__temp172v(x,x,&__temp1262v__);
  print__temp368v(__temp1262v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1251v();return 0;}