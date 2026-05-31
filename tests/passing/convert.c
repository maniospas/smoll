#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1230t=".";
const char* const __t1086t="-";
const char* const __t1322t="123";
const char* const __t371t="\n";
const char* const __t1095t="+";
static const char* __t_all_errcodes[36] = {"noerr",
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
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1325t, uint64_t* __t1326t, uint16_t* __t1327t, uint16_t* __t1328t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1325t=unsafe_ptr;
  *__t1326t=unsafe_size;
  *__t1327t=unsafe_offset;
  *__t1328t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1329t) {
  *__t1329t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1330t) {
  int value=0;
  *__t1330t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1331t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1331t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1332t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1332t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1333t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1333t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1334t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1334t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1335t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1335t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1336t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1336t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1337t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1337t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1338t) {
  *__t1338t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1339t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1339t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1340t) {
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t593t__);
  mul__t195t(i,__t593t__,&__t594t__);
  nat__t506t(buffer__unsafe_offset,&__t595t__);
  add__t171t(__t594t__,__t595t__,&__t596t__);
  add__t504t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1340t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1341t, uint64_t* __t1342t, uint64_t* __t1343t, char* __t1344t) {
  goto __t_return;
  __t_return:
  *__t1341t=unsafe_ptr;
  *__t1342t=dat__pos;
  *__t1343t=dat__length;
  *__t1344t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1345t, uint64_t* __t1346t, uint64_t* __t1347t, char* __t1348t) {
  char* unsafe_ptr=0;
  uint64_t __t631t__=0;
  uint64_t __t632t=0;
  char __t633t__=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  char* __t637t__unsafe_ptr=0;
  uint64_t __t637t__dat__pos=0;
  uint64_t __t637t__dat__length=0;
  char __t637t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t631t__);
  __t632t=1;
  neq__t143t(__t631t__,__t632t,&__t633t__);
  if(__t633t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t634t__);
  __t635t=0;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t626t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t637t__unsafe_ptr,&__t637t__dat__pos,&__t637t__dat__length,&__t637t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1345t=__t637t__unsafe_ptr;
  *__t1346t=__t637t__dat__pos;
  *__t1347t=__t637t__dat__length;
  *__t1348t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1349t, uint64_t* __t1350t, uint64_t* __t1351t, char* __t1352t) {
  uint64_t __t663t=0;
  char __t664t__=0;
  char* __t665t__=0;
  char __t666t__value=0;
  char first=0;
  char* __t667t__unsafe_ptr=0;
  uint64_t __t667t__dat__pos=0;
  uint64_t __t667t__dat__length=0;
  char __t667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t663t=0;
  neq__t143t(length,__t663t,&__t664t__);
  if(__t664t__){
  __t_errcode=get__t591t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t665t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t666t__value,__t665t__,1);
  first=__t666t__value;
  }
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t667t__unsafe_ptr,&__t667t__dat__pos,&__t667t__dat__length,&__t667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1349t=__t667t__unsafe_ptr;
  *__t1350t=__t667t__dat__pos;
  *__t1351t=__t667t__dat__length;
  *__t1352t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1353t, uint64_t* __t1354t, uint64_t* __t1355t, char* __t1356t) {
  char* __t669t__unsafe_ptr=0;
  uint64_t __t669t__unsafe_size=0;
  uint16_t __t669t__unsafe_offset=0;
  uint16_t __t669t__unsafe_align=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__unsafe_size=0;
  uint16_t __t670t__unsafe_offset=0;
  uint16_t __t670t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t671t__=0;
  uint64_t length=0;
  uint64_t __t672t=0;
  uint64_t __t673t__=0;
  uint64_t __t674t=0;
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__dat__pos=0;
  uint64_t __t675t__dat__length=0;
  char __t675t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t669t__unsafe_ptr,&__t669t__unsafe_size,&__t669t__unsafe_offset,&__t669t__unsafe_align);
  __t670t__unsafe_ptr=__t669t__unsafe_ptr;
  __t670t__unsafe_size=__t669t__unsafe_size;
  __t670t__unsafe_offset=__t669t__unsafe_offset;
  __t670t__unsafe_align=__t669t__unsafe_align;
  buf__unsafe_ptr=__t670t__unsafe_ptr;
  buf__unsafe_size=__t670t__unsafe_size;
  buf__unsafe_offset=__t670t__unsafe_offset;
  buf__unsafe_align=__t670t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t671t__);
  buf__unsafe_ptr=__t671t__;
  if(c){
  length=strlen(c);
  }
  __t672t=1;
  add__t171t(length,__t672t,&__t673t__);
  buf__unsafe_size=__t673t__;
  __t674t=0;
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t674t,length,&__t675t__unsafe_ptr,&__t675t__dat__pos,&__t675t__dat__length,&__t675t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1353t=__t675t__unsafe_ptr;
  *__t1354t=__t675t__dat__pos;
  *__t1355t=__t675t__dat__length;
  *__t1356t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1357t) {
  goto __t_return;
  __t_return:
  *__t1357t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1358t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1358t=z;
}

static inline __attribute__((always_inline)) void get__t819t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1359t) {
  uint64_t __t820t__=0;
  char* __t821t__=0;
  add__t171t(s__dat__pos,i,&__t820t__);
  add__t504t(s__unsafe_ptr,__t820t__,&__t821t__);
  goto __t_return;
  __t_return:
  *__t1359t=__t821t__;
}

static inline __attribute__((always_inline)) void char__t678t(const char* s, char* __t1360t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1360t=c;
}

static inline __attribute__((always_inline)) void eq__t679t(char x, char y, char* __t1361t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1361t=z;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1362t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1362t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1363t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1364t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1364t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t1365t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1365t=z;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1366t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1366t=z;
}

static inline __attribute__((always_inline)) void sub__t322t(double x, double y, double* __t1367t) {
  int __t323t__=0;
  int __t324t=0;
  int __t325t=0;
  double z=0;
  is_different__t70t(x,y,&__t323t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1367t=z;
}

static inline __attribute__((always_inline)) int float__t1195t(const char* _s, double* __t1368t) {
  char* __t1196t__unsafe_ptr=0;
  uint64_t __t1196t__dat__pos=0;
  uint64_t __t1196t__dat__length=0;
  char __t1196t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1197t=0;
  uint64_t __t1198t__=0;
  char __t1199t__=0;
  double __t1200t=0;
  double __t1201t=0;
  double number=0;
  uint64_t __t1202t=0;
  uint64_t __t1203t=0;
  uint64_t i=0;
  uint64_t __t1204t=0;
  uint64_t __t1205t__=0;
  char __t1206t__=0;
  uint64_t __t1207t=0;
  uint64_t __t1208t=0;
  uint64_t __t1209t=0;
  char* __t1210t__=0;
  char __t1211t__value=0;
  char __t1212t__=0;
  char __t1213t__=0;
  char negative=0;
  char* __t1218t__=0;
  char __t1219t__value=0;
  char __t1220t__=0;
  char __t1221t__=0;
  uint64_t __t1222t=0;
  uint64_t __t1223t__=0;
  uint64_t __t1224t__=0;
  char __t1225t__=0;
  uint64_t __t1214t=0;
  uint64_t __t1215t__=0;
  uint64_t __t1216t__=0;
  char __t1217t__=0;
  uint64_t __t1226t__=0;
  char __t1227t__=0;
  char* __t1228t__=0;
  char __t1229t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1231t__=0;
  char __t1232t__=0;
  char is_dot=0;
  uint64_t __t1233t=0;
  uint64_t __t1234t__=0;
  char __t1235t__=0;
  double __t1236t=0;
  double __t1237t__=0;
  double __t1238t__=0;
  uint64_t __t1239t=0;
  uint64_t __t1240t__=0;
  uint64_t __t1241t__=0;
  char __t1242t__=0;
  double __t1243t=0;
  double __t1244t=0;
  double base=0;
  uint64_t __t1245t__=0;
  char __t1246t__=0;
  char* __t1247t__=0;
  char __t1248t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1249t__=0;
  double __t1250t__=0;
  double __t1251t__=0;
  double __t1252t=0;
  double __t1253t__=0;
  uint64_t __t1254t=0;
  uint64_t __t1255t__=0;
  double __t1256t=0;
  double __t1257t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(_s,&__t1196t__unsafe_ptr,&__t1196t__dat__pos,&__t1196t__dat__length,&__t1196t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1196t__unsafe_ptr;
  s__dat__pos=__t1196t__dat__pos;
  s__dat__length=__t1196t__dat__length;
  s__dat__first=__t1196t__dat__first;
  __t1197t=0;
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1198t__);
  eq__t119t(__t1197t,__t1198t__,&__t1199t__);
  if(__t1199t__){
  __t_errcode=32;
  goto __t_failure;
  }
  __t1200t=0.0;
  __t1201t=__t1200t;
  number=__t1201t;
  __t1202t=0;
  __t1203t=__t1202t;
  i=__t1203t;
  __t1204t=0;
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1205t__);
  eq__t119t(__t1204t,__t1205t__,&__t1206t__);
  if(__t1206t__){
  __t_errcode=32;
  goto __t_failure;
  }
  __t1207t=0;
  __t1208t=__t1207t;
  i=__t1208t;
  __t1209t=0;
  get__t819t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1209t,&__t1210t__);
  if(!__t1210t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1211t__value,__t1210t__,1);
  char__t678t(__t1086t,&__t1212t__);
  eq__t679t(__t1211t__value,__t1212t__,&__t1213t__);
  negative=__t1213t__;
  if(negative){
  __t1214t=1;
  add__t171t(i,__t1214t,&__t1215t__);
  i=__t1215t__;
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1216t__);
  eq__t119t(i,__t1216t__,&__t1217t__);
  if(__t1217t__){
  __t_errcode=33;
  goto __t_failure;
  }
  }
  else{
  get__t819t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1218t__);
  if(!__t1218t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1219t__value,__t1218t__,1);
  char__t678t(__t1095t,&__t1220t__);
  eq__t679t(__t1219t__value,__t1220t__,&__t1221t__);
  if(__t1221t__){
  __t1222t=1;
  add__t171t(i,__t1222t,&__t1223t__);
  i=__t1223t__;
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1224t__);
  eq__t119t(i,__t1224t__,&__t1225t__);
  if(__t1225t__){
  __t_errcode=33;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1226t__);
  lt__t248t(i,__t1226t__,&__t1227t__);
  if(!__t1227t__){
  break;
  }
  get__t819t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1228t__);
  if(!__t1228t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1229t__value,__t1228t__,1);
  c=__t1229t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t678t(__t1230t,&__t1231t__);
  eq__t679t(c,__t1231t__,&__t1232t__);
  is_dot=__t1232t__;
  if(is_dot){
  __t1233t=1;
  add__t171t(i,__t1233t,&__t1234t__);
  i=__t1234t__;
  break;
  }
  not__t27t(is_digit,&__t1235t__);
  if(__t1235t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1236t=10.0;
  mul__t173t(number,__t1236t,&__t1237t__);
  add__t149t(__t1237t__,digit,&__t1238t__);
  number=__t1238t__;
  __t1239t=1;
  add__t171t(i,__t1239t,&__t1240t__);
  i=__t1240t__;
  }
  if(is_dot){
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1241t__);
  eq__t119t(i,__t1241t__,&__t1242t__);
  if(__t1242t__){
  __t_errcode=35;
  goto __t_failure;
  }
  __t1243t=0.1;
  __t1244t=__t1243t;
  base=__t1244t;
  while(1){
  len__t676t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1245t__);
  lt__t248t(i,__t1245t__,&__t1246t__);
  if(!__t1246t__){
  break;
  }
  get__t819t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1247t__);
  if(!__t1247t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1248t__value,__t1247t__,1);
  d=__t1248t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t27t(is_decimal_digit,&__t1249t__);
  if(__t1249t__){
  __t_errcode=34;
  goto __t_failure;
  }
  mul__t173t(decimal_digit,base,&__t1250t__);
  add__t149t(number,__t1250t__,&__t1251t__);
  number=__t1251t__;
  __t1252t=0.1;
  mul__t173t(base,__t1252t,&__t1253t__);
  base=__t1253t__;
  __t1254t=1;
  add__t171t(i,__t1254t,&__t1255t__);
  i=__t1255t__;
  }
  }
  if(negative){
  __t1256t=0.0;
  sub__t322t(__t1256t,number,&__t1257t__);
  number=__t1257t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1368t=number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1321t() {
  double __t1323t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=float__t1195t(__t1322t,&__t1323t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t374t(__t1323t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1321t();return 0;}