#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void print__temp454v(const char* value) {
  const char* __temp455v=0;
  const char* __temp457v=0;
  const char* __temp458v=0;
  const char* endl=0;
  __temp455v="prints a cstr";
  __temp457v="automatically ends the line too";
  __temp458v="\n";
  endl=__temp458v;
  printf("%s%s",value,endl);
}

static inline void console__temp790v() {
  const char* __temp791v=0;
  __temp791v="references the system console";
}

static inline void not__temp19v(int value, int* __temp1059v) {
  const char* __temp20v=0;
  int z=0;
  __temp20v="logical inverse";
  z=value?0:1;
  *__temp1059v=z;
}

static inline int float__temp799v(double* __temp1060v) {
  const char* __temp800v=0;
  double number=0;
  char ch=0;
  long long int result=0;
  int success=0;
  int __temp801v__=0;
  int __temp_errcode=0;
  __temp800v="reads a float from the console";
  number=0;
  ch=0;
  result=scanf("%lf%c",&number,&ch);
  success=(result==2&&(ch==13||ch==10));
  not__temp19v(success,&__temp801v__);
  if(__temp801v__){
  char c;
  while((c=getchar())!='\n'&&c!=EOF);
  __temp_errcode=12;
  goto __temp_failure;
  }
  *__temp1060v=number;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void false__temp7v(int* __temp1061v) {
  int value=0;
  *__temp1061v=value;
}

static inline void not__temp33v(int __temp_anon0, int* __temp1062v) {
  const char* __temp34v=0;
  int __temp35v__=0;
  __temp34v="logical inverse";
  false__temp7v(&__temp35v__);
  *__temp1062v=__temp35v__;
}

static inline void is_different__temp81v(double x, double y, int* __temp1063v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp33v(__temp82v,&__temp83v__);
  *__temp1063v=__temp83v__;
}

static inline void mul__temp141v(double x, double y, double* __temp1064v) {
  const char* __temp142v=0;
  int __temp143v__=0;
  double z=0;
  __temp142v="multiply with";
  is_different__temp81v(x,y,&__temp143v__);
  z=x*y;
  *__temp1064v=z;
}

static inline void print__temp462v(double value) {
  const char* __temp463v=0;
  const char* __temp465v=0;
  const char* __temp466v=0;
  const char* endl=0;
  __temp463v="prints a float";
  __temp465v="automatically ends the line too";
  __temp466v="\n";
  endl=__temp466v;
  printf("%.6f%s",value,endl);
}

static inline void main__temp1046v() {
  int __temp1047v=0;
  const char* __temp1048v=0;
  double __temp1051v__=0;
  double x=0;
  int __temp1052v__=0;
  const char* __temp1053v=0;
  const char* __temp1055v=0;
  double __temp1057v__=0;
  while(1){
  __temp1048v="Please give a number:";
  print__temp454v(__temp1048v);
  console__temp790v();
  __temp1047v=float__temp799v(&__temp1051v__);
  x=__temp1051v__;
  __temp1047v=__temp1047v==0;
  not__temp19v(__temp1047v,&__temp1052v__);
  if(!__temp1052v__)break;
  __temp1053v="invalid number";
  print__temp454v(__temp1053v);
  }
  __temp1055v="this is its square";
  print__temp454v(__temp1055v);
  mul__temp141v(x,x,&__temp1057v__);
  print__temp462v(__temp1057v__);
}

int main() {main__temp1046v();return 0;}