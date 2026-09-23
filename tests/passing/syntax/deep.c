#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5558t="2";
const char* const __t5613t="no consumption after reuse";
const char* const __t5593t="test2";
const char* const __t452t="\n";
const char* const __t5557t="test";
const char* const __t5447t="X";
const char* const __t5424t="success";
const char* const __t5481t=" |- ";
const char* const __t5596t="correct operations on arena";
const char* const __t5618t="no consumption after complicated reuse";
const char* const __t5487t="assertion failed: ";
const char* const __t4273t="[";
const char* const __t5427t="V";
const char* const __t5493t="assert: ";
const char* const __t5444t="failure";
const char* const __t5434t="] ";
const char* const __t5601t="proper consumption before test ends";
const char* const __t440t="";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1097t(char** __t5620t, uint64_t* __t5621t, uint32_t* __t5622t, uint32_t* __t5623t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5620t=unsafe_ptr;
  *__t5621t=unsafe_size;
  *__t5622t=unsafe_offset;
  *__t5623t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t815t(char** __t5624t) {
  char* allocated=*__t5624t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5624t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5625t) {
  int value=0;
  *__t5625t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5626t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5626t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5627t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5627t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5628t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5628t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5629t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5629t=z;
}

static inline __attribute__((always_inline)) void nat__t695t(uint32_t x, uint64_t* __t5630t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5630t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5631t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5631t=z;
}

static inline __attribute__((always_inline)) void zero__t816t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t654t(char* x, char* __t5632t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5632t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5633t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5633t=z;
}

static inline __attribute__((always_inline)) int alloc__t799t(uint64_t bytes, char** __t5634t) {
  char* allocated=0;
  char __t800t__=0;
  char __t801t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t654t(allocated,&__t800t__);
  not__t42t(__t800t__,&__t801t__);
  if(__t801t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5634t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t940t(char** __t5635t, uint64_t* __t5636t, uint32_t* __t5637t, uint32_t* __t5638t, uint64_t size, char** __t5639t, uint64_t* __t5640t, uint32_t* __t5641t, uint32_t* __t5642t) {
  char* buffer__unsafe_ptr=*__t5635t;
  uint64_t buffer__unsafe_size=*__t5636t;
  uint32_t buffer__unsafe_offset=*__t5637t;
  uint32_t buffer__unsafe_align=*__t5638t;
  int __t941t=0;
  int __t942t=0;
  char __t944t__=0;
  uint64_t __t945t=0;
  char __t946t__=0;
  char __t947t=0;
  uint64_t __t948t=0;
  uint64_t __t949t__=0;
  uint64_t __t950t__=0;
  int __t952t=0;
  uint64_t __t953t=0;
  char __t954t__=0;
  uint64_t __t955t__=0;
  uint64_t __t956t__=0;
  uint64_t bytes=0;
  int __t957t=0;
  uint64_t __t958t=0;
  char __t959t__=0;
  char* __t960t__=0;
  int __t961t=0;
  uint64_t __t962t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t944t__);
  if(__t944t__){
  __t945t=0;
  neq__t158t(size,__t945t,&__t946t__);
  __t947t=__t946t__;
  }
  if(__t947t){
  __t948t=0;
  nat__t695t(buffer__unsafe_align,&__t949t__);
  mul__t212t(__t949t__,size,&__t950t__);
  zero__t816t(buffer__unsafe_ptr,__t948t,__t950t__);
  goto __t_return;
  }
  __t953t=0;
  neq__t158t(buffer__unsafe_size,__t953t,&__t954t__);
  if(__t954t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t955t__);
  mul__t212t(__t955t__,size,&__t956t__);
  bytes=__t956t__;
  __t958t=0;
  eq__t134t(bytes,__t958t,&__t959t__);
  if(__t959t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t799t(bytes,&__t960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t962t=0;
  zero__t816t(__t960t__,__t962t,bytes);
  buffer__unsafe_ptr=__t960t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t815t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5635t=buffer__unsafe_ptr;
  *__t5636t=buffer__unsafe_size;
  *__t5637t=buffer__unsafe_offset;
  *__t5638t=buffer__unsafe_align;
  *__t5639t=buffer__unsafe_ptr;
  *__t5640t=buffer__unsafe_size;
  *__t5641t=buffer__unsafe_offset;
  *__t5642t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1095t(uint64_t size, char** __t5643t, uint64_t* __t5644t, uint32_t* __t5645t, uint32_t* __t5646t) {
  char __t1096t=0;
  char* __t1099t__unsafe_ptr=0;
  uint64_t __t1099t__unsafe_size=0;
  uint32_t __t1099t__unsafe_offset=0;
  uint32_t __t1099t__unsafe_align=0;
  char* __t1100t__unsafe_ptr=0;
  uint64_t __t1100t__unsafe_size=0;
  uint32_t __t1100t__unsafe_offset=0;
  uint32_t __t1100t__unsafe_align=0;
  char* __t1102t__unsafe_ptr=0;
  uint64_t __t1102t__unsafe_size=0;
  uint32_t __t1102t__unsafe_offset=0;
  uint32_t __t1102t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1103t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1097t(&__t1099t__unsafe_ptr,&__t1099t__unsafe_size,&__t1099t__unsafe_offset,&__t1099t__unsafe_align);
  __t_complain=alloc__t940t(&__t1099t__unsafe_ptr,&__t1099t__unsafe_size,&__t1099t__unsafe_offset,&__t1099t__unsafe_align,size,&__t1100t__unsafe_ptr,&__t1100t__unsafe_size,&__t1100t__unsafe_offset,&__t1100t__unsafe_align);
  __t1096t=__t_complain;
  if(__t_complain){
  goto __t1096t__label;
  }
  __t1102t__unsafe_ptr=__t1100t__unsafe_ptr;
  __t1102t__unsafe_size=__t1100t__unsafe_size;
  __t1102t__unsafe_offset=__t1100t__unsafe_offset;
  __t1102t__unsafe_align=__t1100t__unsafe_align;
  ret__unsafe_ptr=__t1102t__unsafe_ptr;
  ret__unsafe_size=__t1102t__unsafe_size;
  ret__unsafe_offset=__t1102t__unsafe_offset;
  ret__unsafe_align=__t1102t__unsafe_align;
  __t1096t__label:__t1096t=__t1096t==0;
  not__t42t(__t1096t,&__t1103t__);
  if(__t1103t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t815t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5643t=ret__unsafe_ptr;
  *__t5644t=ret__unsafe_size;
  *__t5645t=ret__unsafe_offset;
  *__t5646t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t5647t, uint64_t* __t5648t, uint32_t* __t5649t, uint32_t* __t5650t, uint64_t _pos, char** __t5651t, uint64_t* __t5652t, uint32_t* __t5653t, uint32_t* __t5654t, uint64_t* __t5655t) {
  char* buf__unsafe_ptr=*__t5647t;
  uint64_t buf__unsafe_size=*__t5648t;
  uint32_t buf__unsafe_offset=*__t5649t;
  uint32_t buf__unsafe_align=*__t5650t;
  uint64_t __t1212t=0;
  uint64_t pos=0;
  __t1212t=_pos;
  pos=__t1212t;
  goto __t_return;
  __t_return:
  *__t5647t=buf__unsafe_ptr;
  *__t5648t=buf__unsafe_size;
  *__t5649t=buf__unsafe_offset;
  *__t5650t=buf__unsafe_align;
  *__t5651t=buf__unsafe_ptr;
  *__t5652t=buf__unsafe_size;
  *__t5653t=buf__unsafe_offset;
  *__t5654t=buf__unsafe_align;
  *__t5655t=pos;
}

static inline __attribute__((always_inline)) void arena__t1214t(char** __t5656t, uint64_t* __t5657t, uint32_t* __t5658t, uint32_t* __t5659t, char** __t5660t, uint64_t* __t5661t, uint32_t* __t5662t, uint32_t* __t5663t, uint64_t* __t5664t) {
  char* buf__unsafe_ptr=*__t5656t;
  uint64_t buf__unsafe_size=*__t5657t;
  uint32_t buf__unsafe_offset=*__t5658t;
  uint32_t buf__unsafe_align=*__t5659t;
  uint64_t __t1215t=0;
  char* __t1216t__buf__unsafe_ptr=0;
  uint64_t __t1216t__buf__unsafe_size=0;
  uint32_t __t1216t__buf__unsafe_offset=0;
  uint32_t __t1216t__buf__unsafe_align=0;
  uint64_t __t1216t__pos=0;
  __t1215t=0;
  arena__t1211t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1215t,&__t1216t__buf__unsafe_ptr,&__t1216t__buf__unsafe_size,&__t1216t__buf__unsafe_offset,&__t1216t__buf__unsafe_align,&__t1216t__pos);
  goto __t_return;
  __t_return:
  *__t5656t=buf__unsafe_ptr;
  *__t5657t=buf__unsafe_size;
  *__t5658t=buf__unsafe_offset;
  *__t5659t=buf__unsafe_align;
  *__t5660t=__t1216t__buf__unsafe_ptr;
  *__t5661t=__t1216t__buf__unsafe_size;
  *__t5662t=__t1216t__buf__unsafe_offset;
  *__t5663t=__t1216t__buf__unsafe_align;
  *__t5664t=__t1216t__pos;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5665t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5665t=z;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t5666t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5666t=z;
}

static inline __attribute__((always_inline)) void reuse__t4404t(char** __t5667t, uint64_t* __t5668t, uint32_t* __t5669t, uint32_t* __t5670t, uint64_t* __t5671t, uint64_t* __t5672t) {
  char* arn__buf__unsafe_ptr=*__t5667t;
  uint64_t arn__buf__unsafe_size=*__t5668t;
  uint32_t arn__buf__unsafe_offset=*__t5669t;
  uint32_t arn__buf__unsafe_align=*__t5670t;
  uint64_t arn__pos=*__t5671t;
  uint64_t __t4405t=0;
  uint64_t __t4406t__=0;
  uint64_t tracked_position=0;
  uint64_t __t4407t=0;
  uint64_t __t4409t__=0;
  __t4405t=0;
  add__t188t(__t4405t,arn__pos,&__t4406t__);
  tracked_position=__t4406t__;
  goto __t_return;
  __t_return:
  *__t5667t=arn__buf__unsafe_ptr;
  *__t5668t=arn__buf__unsafe_size;
  *__t5669t=arn__buf__unsafe_offset;
  *__t5670t=arn__buf__unsafe_align;
  *__t5671t=arn__pos;
  *__t5672t=tracked_position;
}

static inline __attribute__((always_inline)) void len__t1168t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5673t) {
  goto __t_return;
  __t_return:
  *__t5673t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5674t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5674t=z;
}

static inline __attribute__((always_inline)) void allocated__t1218t(char** __t5675t, uint64_t* __t5676t, uint32_t* __t5677t, uint32_t* __t5678t, uint64_t pos, char** __t5679t, uint64_t* __t5680t, uint32_t* __t5681t, uint32_t* __t5682t, uint64_t* __t5683t) {
  char* buf__unsafe_ptr=*__t5675t;
  uint64_t buf__unsafe_size=*__t5676t;
  uint32_t buf__unsafe_offset=*__t5677t;
  uint32_t buf__unsafe_align=*__t5678t;
  goto __t_return;
  __t_return:
  *__t5675t=buf__unsafe_ptr;
  *__t5676t=buf__unsafe_size;
  *__t5677t=buf__unsafe_offset;
  *__t5678t=buf__unsafe_align;
  *__t5679t=buf__unsafe_ptr;
  *__t5680t=buf__unsafe_size;
  *__t5681t=buf__unsafe_offset;
  *__t5682t=buf__unsafe_align;
  *__t5683t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1293t(char** __t5684t, uint64_t* __t5685t, uint32_t* __t5686t, uint32_t* __t5687t, uint64_t* __t5688t, uint64_t length, char** __t5689t, uint64_t* __t5690t, uint32_t* __t5691t, uint32_t* __t5692t, uint64_t* __t5693t) {
  char* allocator__buf__unsafe_ptr=*__t5684t;
  uint64_t allocator__buf__unsafe_size=*__t5685t;
  uint32_t allocator__buf__unsafe_offset=*__t5686t;
  uint32_t allocator__buf__unsafe_align=*__t5687t;
  uint64_t allocator__pos=*__t5688t;
  int __t1294t=0;
  uint64_t __t1295t__=0;
  uint64_t next_pos=0;
  uint64_t __t1296t__=0;
  char __t1297t__=0;
  uint64_t __t1298t=0;
  uint64_t __t1299t__=0;
  uint64_t pos=0;
  char* __t1300t__buf__unsafe_ptr=0;
  uint64_t __t1300t__buf__unsafe_size=0;
  uint32_t __t1300t__buf__unsafe_offset=0;
  uint32_t __t1300t__buf__unsafe_align=0;
  uint64_t __t1300t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1295t__);
  next_pos=__t1295t__;
  len__t1168t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1296t__);
  gt__t326t(next_pos,__t1296t__,&__t1297t__);
  if(__t1297t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1298t=0;
  add__t188t(allocator__pos,__t1298t,&__t1299t__);
  pos=__t1299t__;
  allocator__pos=next_pos;
  allocated__t1218t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1300t__buf__unsafe_ptr,&__t1300t__buf__unsafe_size,&__t1300t__buf__unsafe_offset,&__t1300t__buf__unsafe_align,&__t1300t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5684t=allocator__buf__unsafe_ptr;
  *__t5685t=allocator__buf__unsafe_size;
  *__t5686t=allocator__buf__unsafe_offset;
  *__t5687t=allocator__buf__unsafe_align;
  *__t5688t=allocator__pos;
  *__t5689t=__t1300t__buf__unsafe_ptr;
  *__t5690t=__t1300t__buf__unsafe_size;
  *__t5691t=__t1300t__buf__unsafe_offset;
  *__t5692t=__t1300t__buf__unsafe_align;
  *__t5693t=__t1300t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int nat32__t689t(uint64_t x, uint32_t* __t5694t) {
  uint64_t __t690t=0;
  char __t691t__=0;
  uint32_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t690t=4294967295;
  gt__t326t(x,__t690t,&__t691t__);
  if(__t691t__){
  __t_errcode=11;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5694t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int slice__t1580t(char** __t5695t, uint64_t* __t5696t, uint32_t* __t5697t, uint32_t* __t5698t, uint64_t* __t5699t, uint64_t length, char** __t5700t, uint64_t* __t5701t, uint32_t* __t5702t, uint32_t* __t5703t) {
  char* surface__buf__unsafe_ptr=*__t5695t;
  uint64_t surface__buf__unsafe_size=*__t5696t;
  uint32_t surface__buf__unsafe_offset=*__t5697t;
  uint32_t surface__buf__unsafe_align=*__t5698t;
  uint64_t surface__pos=*__t5699t;
  char* __t1581t__buf__unsafe_ptr=0;
  uint64_t __t1581t__buf__unsafe_size=0;
  uint32_t __t1581t__buf__unsafe_offset=0;
  uint32_t __t1581t__buf__unsafe_align=0;
  uint64_t __t1581t__pos=0;
  char* __t1582t__buf__unsafe_ptr=0;
  uint64_t __t1582t__buf__unsafe_size=0;
  uint32_t __t1582t__buf__unsafe_offset=0;
  uint32_t __t1582t__buf__unsafe_align=0;
  uint64_t __t1582t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint32_t allocated__buf__unsafe_offset=0;
  uint32_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t1583t__unsafe_ptr=0;
  uint64_t __t1583t__unsafe_size=0;
  uint32_t __t1583t__unsafe_offset=0;
  uint32_t __t1583t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  uint64_t __t1584t__=0;
  uint64_t __t1585t__=0;
  uint64_t __t1586t__=0;
  uint64_t __t1587t__=0;
  uint32_t __t1588t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1293t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,length,&__t1581t__buf__unsafe_ptr,&__t1581t__buf__unsafe_size,&__t1581t__buf__unsafe_offset,&__t1581t__buf__unsafe_align,&__t1581t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1582t__buf__unsafe_ptr=__t1581t__buf__unsafe_ptr;
  __t1582t__buf__unsafe_size=__t1581t__buf__unsafe_size;
  __t1582t__buf__unsafe_offset=__t1581t__buf__unsafe_offset;
  __t1582t__buf__unsafe_align=__t1581t__buf__unsafe_align;
  __t1582t__pos=__t1581t__pos;
  allocated__buf__unsafe_ptr=__t1582t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t1582t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t1582t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t1582t__buf__unsafe_align;
  allocated__pos=__t1582t__pos;
  __t1583t__unsafe_ptr=allocated__buf__unsafe_ptr;
  __t1583t__unsafe_size=allocated__buf__unsafe_size;
  __t1583t__unsafe_offset=allocated__buf__unsafe_offset;
  __t1583t__unsafe_align=allocated__buf__unsafe_align;
  buf__unsafe_ptr=__t1583t__unsafe_ptr;
  buf__unsafe_size=__t1583t__unsafe_size;
  buf__unsafe_offset=__t1583t__unsafe_offset;
  buf__unsafe_align=__t1583t__unsafe_align;
  buf__unsafe_size=length;
  nat__t695t(buf__unsafe_offset,&__t1584t__);
  nat__t695t(buf__unsafe_align,&__t1585t__);
  mul__t212t(__t1585t__,allocated__pos,&__t1586t__);
  add__t188t(__t1584t__,__t1586t__,&__t1587t__);
  __t_errcode=nat32__t689t(__t1587t__,&__t1588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_offset=__t1588t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5695t=surface__buf__unsafe_ptr;
  *__t5696t=surface__buf__unsafe_size;
  *__t5697t=surface__buf__unsafe_offset;
  *__t5698t=surface__buf__unsafe_align;
  *__t5699t=surface__pos;
  *__t5700t=buf__unsafe_ptr;
  *__t5701t=buf__unsafe_size;
  *__t5702t=buf__unsafe_offset;
  *__t5703t=buf__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t5545t(char** __t5704t, uint64_t* __t5705t, uint32_t* __t5706t, uint32_t* __t5707t, uint64_t* __t5708t) {
  char* arn__buf__unsafe_ptr=*__t5704t;
  uint64_t arn__buf__unsafe_size=*__t5705t;
  uint32_t arn__buf__unsafe_offset=*__t5706t;
  uint32_t arn__buf__unsafe_align=*__t5707t;
  uint64_t arn__pos=*__t5708t;
  uint64_t __t5546t__=0;
  uint64_t __t5547t____t4407t=0;
  uint64_t __t5547t____t4409t__=0;
  uint64_t __t5548t=0;
  char* __t5549t__unsafe_ptr=0;
  uint64_t __t5549t__unsafe_size=0;
  uint32_t __t5549t__unsafe_offset=0;
  uint32_t __t5549t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  reuse__t4404t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t5546t__);
  __t5548t=5;
  __t_errcode=slice__t1580t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,__t5548t,&__t5549t__unsafe_ptr,&__t5549t__unsafe_size,&__t5549t__unsafe_offset,&__t5549t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5704t=arn__buf__unsafe_ptr;
  *__t5705t=arn__buf__unsafe_size;
  *__t5706t=arn__buf__unsafe_offset;
  *__t5707t=arn__buf__unsafe_align;
  *__t5708t=arn__pos;
  
  __t_skip_returns:__t5547t____t4407t=0;
  sub__t410t(__t5546t__,__t5547t____t4407t,&__t5547t____t4409t__);
  arn__pos=__t5547t____t4409t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t463t(uint64_t value) {
  int __t464t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void restore_stdout__t5472t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5473t(int64_t* __t5709t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5709t=saved_stdout;
}

static inline __attribute__((always_inline)) void supports_ansi__t477t(char* __t5710t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5710t=supports;
}

static inline __attribute__((always_inline)) void colors__t478t(char* __t5711t) {
  char __t479t__=0;
  char initialized=0;
  supports_ansi__t477t(&__t479t__);
  initialized=__t479t__;
  goto __t_return;
  __t_return:
  *__t5711t=initialized;
}

static inline __attribute__((always_inline)) void nn__t439t(const char* value, const char** __t5712t, const char** __t5713t) {
  const char* __t441t=0;
  __t441t=__t440t;
  goto __t_return;
  __t_return:
  *__t5712t=value;
  *__t5713t=__t441t;
}

static inline __attribute__((always_inline)) void print__t448t(const char* value, const char* endl) {
  int __t449t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

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

static inline __attribute__((always_inline)) void print_marker__t5437t(char colors__initialized) {
  const char* __t5439t__value=0;
  const char* __t5439t____t441t=0;
  int __t5441t=0;
  char __t5442t=0;
  char __t5443t=0;
  const char* __t5448t__value=0;
  const char* __t5448t____t441t=0;
  int __t5450t=0;
  const char* __t5453t__value=0;
  const char* __t5453t____t441t=0;
  nn__t439t(__t4273t,&__t5439t__value,&__t5439t____t441t);
  print__t448t(__t5439t__value,__t5439t____t441t);
  __t5443t=1;
  if(__t5444t!=__t5444t){
  __t5443t=0;
  }
  if(__t5443t){
  __t5442t=1;
  }
  if(__t5442t){
  set__t484t(colors__initialized);
  nn__t439t(__t5447t,&__t5448t__value,&__t5448t____t441t);
  print__t448t(__t5448t__value,__t5448t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5434t,&__t5453t__value,&__t5453t____t441t);
  print__t448t(__t5453t__value,__t5453t____t441t);
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

static inline __attribute__((always_inline)) void print_marker__t5418t(char colors__initialized) {
  const char* __t5420t__value=0;
  const char* __t5420t____t441t=0;
  char __t5422t=0;
  char __t5423t=0;
  const char* __t5428t__value=0;
  const char* __t5428t____t441t=0;
  int __t5430t=0;
  int __t5431t=0;
  const char* __t5435t__value=0;
  const char* __t5435t____t441t=0;
  nn__t439t(__t4273t,&__t5420t__value,&__t5420t____t441t);
  print__t448t(__t5420t__value,__t5420t____t441t);
  __t5423t=1;
  if(__t5424t!=__t5424t){
  __t5423t=0;
  }
  if(__t5423t){
  __t5422t=1;
  }
  if(__t5422t){
  set__t488t(colors__initialized);
  nn__t439t(__t5427t,&__t5428t__value,&__t5428t____t441t);
  print__t448t(__t5428t__value,__t5428t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5434t,&__t5435t__value,&__t5435t____t441t);
  print__t448t(__t5435t__value,__t5435t____t441t);
  goto __t_return;
  __t_return:
;}

int assert__t5475t(char condition, const char* text) {
  int64_t __t5476t__=0;
  char __t5478t__initialized=0;
  char __t5480t__initialized=0;
  char colors__initialized=0;
  const char* __t5482t__value=0;
  const char* __t5482t____t441t=0;
  char __t5484t__=0;
  const char* __t5488t__value=0;
  const char* __t5488t____t441t=0;
  const char* __t5494t__value=0;
  const char* __t5494t____t441t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5473t(&__t5476t__);
  colors__t478t(&__t5478t__initialized);
  __t5480t__initialized=__t5478t__initialized;
  colors__initialized=__t5480t__initialized;
  nn__t439t(__t5481t,&__t5482t__value,&__t5482t____t441t);
  print__t448t(__t5482t__value,__t5482t____t441t);
  not__t42t(condition,&__t5484t__);
  if(__t5484t__){
  print_marker__t5437t(colors__initialized);
  nn__t439t(__t5487t,&__t5488t__value,&__t5488t____t441t);
  print__t448t(__t5488t__value,__t5488t____t441t);
  print__t450t(text);
  __t_errcode=65;
  goto __t_failure;
  }
  print_marker__t5418t(colors__initialized);
  nn__t439t(__t5493t,&__t5494t__value,&__t5494t____t441t);
  print__t448t(__t5494t__value,__t5494t____t441t);
  print__t450t(text);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(__t5478t__initialized){
  printf("\033[0m");
  }
  restore_stdout__t5472t(__t5476t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1593t(char** __t5714t, uint64_t* __t5715t, uint32_t* __t5716t, uint32_t* __t5717t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5714t=unsafe_ptr;
  *__t5715t=unsafe_size;
  *__t5716t=unsafe_offset;
  *__t5717t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5718t) {
  *__t5718t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5719t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5719t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5720t) {
  *__t5720t=to;
}

static inline __attribute__((always_inline)) void add__t817t(char* allocated, uint64_t offset, char** __t5721t) {
  char* element=0;
  char* __t818t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t818t__);
  goto __t_return;
  __t_return:
  *__t5721t=__t818t__;
}

static inline __attribute__((always_inline)) int get__t1160t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5722t) {
  int __t1161t=0;
  char __t1162t__=0;
  uint64_t __t1163t__=0;
  uint64_t __t1164t__=0;
  uint64_t __t1165t__=0;
  uint64_t __t1166t__=0;
  char* __t1167t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1162t__);
  if(__t1162t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t1163t__);
  mul__t212t(i,__t1163t__,&__t1164t__);
  nat__t695t(buffer__unsafe_offset,&__t1165t__);
  add__t188t(__t1164t__,__t1165t__,&__t1166t__);
  add__t817t(buffer__unsafe_ptr,__t1166t__,&__t1167t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5722t=__t1167t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1618t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5723t, uint64_t* __t5724t, uint64_t* __t5725t, char* __t5726t) {
  goto __t_return;
  __t_return:
  *__t5723t=unsafe_ptr;
  *__t5724t=dat__pos;
  *__t5725t=dat__length;
  *__t5726t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1622t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5727t, uint64_t* __t5728t, uint64_t* __t5729t, char* __t5730t) {
  char* unsafe_ptr=0;
  uint64_t __t1623t__=0;
  uint64_t __t1624t=0;
  char __t1625t__=0;
  uint64_t __t1626t__=0;
  uint64_t __t1627t=0;
  char __t1628t__=0;
  char* __t1629t__unsafe_ptr=0;
  uint64_t __t1629t__dat__pos=0;
  uint64_t __t1629t__dat__length=0;
  char __t1629t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t695t(buf__unsafe_align,&__t1623t__);
  __t1624t=1;
  neq__t158t(__t1623t__,__t1624t,&__t1625t__);
  if(__t1625t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t695t(buf__unsafe_offset,&__t1626t__);
  __t1627t=0;
  neq__t158t(__t1626t__,__t1627t,&__t1628t__);
  if(__t1628t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1618t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1629t__unsafe_ptr,&__t1629t__dat__pos,&__t1629t__dat__length,&__t1629t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5727t=__t1629t__unsafe_ptr;
  *__t5728t=__t1629t__dat__pos;
  *__t5729t=__t1629t__dat__length;
  *__t5730t=__t1629t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1656t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5731t, uint64_t* __t5732t, uint64_t* __t5733t, char* __t5734t) {
  uint64_t __t1657t=0;
  char __t1658t__=0;
  char* __t1660t__=0;
  char __t1661t__value=0;
  char first=0;
  char* __t1662t__unsafe_ptr=0;
  uint64_t __t1662t__dat__pos=0;
  uint64_t __t1662t__dat__length=0;
  char __t1662t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1657t=0;
  neq__t158t(length,__t1657t,&__t1658t__);
  if(__t1658t__){
  __t_errcode=get__t1160t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1660t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1660t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1661t__value,__t1660t__,1);
  first=__t1661t__value;
  }
  __t_errcode=str__t1622t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1662t__unsafe_ptr,&__t1662t__dat__pos,&__t1662t__dat__length,&__t1662t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5731t=__t1662t__unsafe_ptr;
  *__t5732t=__t1662t__dat__pos;
  *__t5733t=__t1662t__dat__length;
  *__t5734t=__t1662t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1678t(const char* c, char** __t5735t, uint64_t* __t5736t, uint64_t* __t5737t, char* __t5738t) {
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__unsafe_size=0;
  uint32_t __t1679t__unsafe_offset=0;
  uint32_t __t1679t__unsafe_align=0;
  char* __t1680t__unsafe_ptr=0;
  uint64_t __t1680t__unsafe_size=0;
  uint32_t __t1680t__unsafe_offset=0;
  uint32_t __t1680t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1681t__=0;
  uint64_t length=0;
  uint64_t __t1682t=0;
  uint64_t __t1683t__=0;
  char __t1684t=0;
  uint64_t __t1685t=0;
  char* __t1687t__unsafe_ptr=0;
  uint64_t __t1687t__dat__pos=0;
  uint64_t __t1687t__dat__length=0;
  char __t1687t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1593t(&__t1679t__unsafe_ptr,&__t1679t__unsafe_size,&__t1679t__unsafe_offset,&__t1679t__unsafe_align);
  __t1680t__unsafe_ptr=__t1679t__unsafe_ptr;
  __t1680t__unsafe_size=__t1679t__unsafe_size;
  __t1680t__unsafe_offset=__t1679t__unsafe_offset;
  __t1680t__unsafe_align=__t1679t__unsafe_align;
  buf__unsafe_ptr=__t1680t__unsafe_ptr;
  buf__unsafe_size=__t1680t__unsafe_size;
  buf__unsafe_offset=__t1680t__unsafe_offset;
  buf__unsafe_align=__t1680t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1681t__);
  buf__unsafe_ptr=__t1681t__;
  if(c){
  length=strlen(c);
  }
  __t1682t=1;
  add__t188t(length,__t1682t,&__t1683t__);
  buf__unsafe_size=__t1683t__;
  __t1685t=0;
  __t_complain=str__t1656t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1685t,length,&__t1687t__unsafe_ptr,&__t1687t__dat__pos,&__t1687t__dat__length,&__t1687t__dat__first);
  __t1684t=__t_complain;
  if(__t_complain){
  goto __t1684t__label;
  }
  ret__unsafe_ptr=__t1687t__unsafe_ptr;
  ret__dat__pos=__t1687t__dat__pos;
  ret__dat__length=__t1687t__dat__length;
  ret__dat__first=__t1687t__dat__first;
  __t1684t__label:__t1684t=__t1684t==0;
  goto __t_return;
  __t_return:
  *__t5735t=ret__unsafe_ptr;
  *__t5736t=ret__dat__pos;
  *__t5737t=ret__dat__length;
  *__t5738t=ret__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5739t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5739t=z;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5740t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5740t=z;
}

static inline __attribute__((always_inline)) void len__t1688t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5741t) {
  goto __t_return;
  __t_return:
  *__t5741t=s__dat__length;
}

static inline __attribute__((always_inline)) void status__t1223t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5742t, uint64_t* __t5743t, uint32_t* __t5744t, uint32_t* __t5745t, uint64_t* __t5746t) {
  char* __t1224t__unsafe_ptr=0;
  uint64_t __t1224t__unsafe_size=0;
  uint32_t __t1224t__unsafe_offset=0;
  uint32_t __t1224t__unsafe_align=0;
  uint64_t __t1225t=0;
  __t1224t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1224t__unsafe_size=self__buf__unsafe_size;
  __t1224t__unsafe_offset=self__buf__unsafe_offset;
  __t1224t__unsafe_align=self__buf__unsafe_align;
  __t1225t=self__pos;
  goto __t_return;
  __t_return:
  *__t5742t=__t1224t__unsafe_ptr;
  *__t5743t=__t1224t__unsafe_size;
  *__t5744t=__t1224t__unsafe_offset;
  *__t5745t=__t1224t__unsafe_align;
  *__t5746t=__t1225t;
}

static inline __attribute__((always_inline)) void str__t1655t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5747t, uint64_t* __t5748t, uint64_t* __t5749t, char* __t5750t) {
  goto __t_return;
  __t_return:
  *__t5747t=other__unsafe_ptr;
  *__t5748t=other__dat__pos;
  *__t5749t=other__dat__length;
  *__t5750t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t1754t(char** __t5751t, uint64_t* __t5752t, uint32_t* __t5753t, uint32_t* __t5754t, uint64_t* __t5755t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5756t, uint64_t* __t5757t, uint64_t* __t5758t, char* __t5759t) {
  char* CHARS__buf__unsafe_ptr=*__t5751t;
  uint64_t CHARS__buf__unsafe_size=*__t5752t;
  uint32_t CHARS__buf__unsafe_offset=*__t5753t;
  uint32_t CHARS__buf__unsafe_align=*__t5754t;
  uint64_t CHARS__pos=*__t5755t;
  char* __t1755t__unsafe_ptr=0;
  uint64_t __t1755t__dat__pos=0;
  uint64_t __t1755t__dat__length=0;
  char __t1755t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1756t__buf__unsafe_ptr=0;
  uint64_t __t1756t__buf__unsafe_size=0;
  uint32_t __t1756t__buf__unsafe_offset=0;
  uint32_t __t1756t__buf__unsafe_align=0;
  uint64_t __t1756t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1757t=0;
  char* __t1758t__unsafe_ptr=0;
  uint64_t __t1758t__dat__pos=0;
  uint64_t __t1758t__dat__length=0;
  char __t1758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1655t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1755t__unsafe_ptr,&__t1755t__dat__pos,&__t1755t__dat__length,&__t1755t__dat__first);
  other__unsafe_ptr=__t1755t__unsafe_ptr;
  other__dat__pos=__t1755t__dat__pos;
  other__dat__length=__t1755t__dat__length;
  other__dat__first=__t1755t__dat__first;
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1756t__buf__unsafe_ptr,&__t1756t__buf__unsafe_size,&__t1756t__buf__unsafe_offset,&__t1756t__buf__unsafe_align,&__t1756t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1756t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1756t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1756t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1756t__buf__unsafe_align;
  surface__pos=__t1756t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1622t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1758t__unsafe_ptr,&__t1758t__dat__pos,&__t1758t__dat__length,&__t1758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5751t=CHARS__buf__unsafe_ptr;
  *__t5752t=CHARS__buf__unsafe_size;
  *__t5753t=CHARS__buf__unsafe_offset;
  *__t5754t=CHARS__buf__unsafe_align;
  *__t5755t=CHARS__pos;
  *__t5756t=__t1758t__unsafe_ptr;
  *__t5757t=__t1758t__dat__pos;
  *__t5758t=__t1758t__dat__length;
  *__t5759t=__t1758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1220t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5760t, uint64_t* __t5761t, uint32_t* __t5762t, uint32_t* __t5763t, uint64_t* __t5764t) {
  char* __t1221t__unsafe_ptr=0;
  uint64_t __t1221t__unsafe_size=0;
  uint32_t __t1221t__unsafe_offset=0;
  uint32_t __t1221t__unsafe_align=0;
  uint64_t __t1222t=0;
  __t1221t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1221t__unsafe_size=self__buf__unsafe_size;
  __t1221t__unsafe_offset=self__buf__unsafe_offset;
  __t1221t__unsafe_align=self__buf__unsafe_align;
  __t1222t=self__pos;
  goto __t_return;
  __t_return:
  *__t5760t=__t1221t__unsafe_ptr;
  *__t5761t=__t1221t__unsafe_size;
  *__t5762t=__t1221t__unsafe_offset;
  *__t5763t=__t1221t__unsafe_align;
  *__t5764t=__t1222t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5765t) {
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
  *__t5765t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1674t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5766t, uint64_t* __t5767t, uint64_t* __t5768t, char* __t5769t) {
  uint64_t __t1676t__=0;
  char* __t1677t__unsafe_ptr=0;
  uint64_t __t1677t__dat__pos=0;
  uint64_t __t1677t__dat__length=0;
  char __t1677t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1676t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1656t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1676t__,&__t1677t__unsafe_ptr,&__t1677t__dat__pos,&__t1677t__dat__length,&__t1677t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5766t=__t1677t__unsafe_ptr;
  *__t5767t=__t1677t__dat__pos;
  *__t5768t=__t1677t__dat__length;
  *__t5769t=__t1677t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t3041t(char** __t5770t, uint64_t* __t5771t, uint32_t* __t5772t, uint32_t* __t5773t, uint64_t* __t5774t, const char* _s1, const char* _s2, char** __t5775t, uint64_t* __t5776t, uint64_t* __t5777t, char* __t5778t) {
  char* CHARS__buf__unsafe_ptr=*__t5770t;
  uint64_t CHARS__buf__unsafe_size=*__t5771t;
  uint32_t CHARS__buf__unsafe_offset=*__t5772t;
  uint32_t CHARS__buf__unsafe_align=*__t5773t;
  uint64_t CHARS__pos=*__t5774t;
  char* __t3042t__unsafe_ptr=0;
  uint64_t __t3042t__dat__pos=0;
  uint64_t __t3042t__dat__length=0;
  char __t3042t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3043t__unsafe_ptr=0;
  uint64_t __t3043t__dat__pos=0;
  uint64_t __t3043t__dat__length=0;
  char __t3043t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3044t__=0;
  uint64_t __t3045t__=0;
  char __t3046t__=0;
  char __t3047t=0;
  uint64_t __t3048t__=0;
  char __t3049t__=0;
  char __t3050t=0;
  uint64_t __t3051t__=0;
  char* __t3052t__buf__unsafe_ptr=0;
  uint64_t __t3052t__buf__unsafe_size=0;
  uint32_t __t3052t__buf__unsafe_offset=0;
  uint32_t __t3052t__buf__unsafe_align=0;
  uint64_t __t3052t__pos=0;
  char* __t3053t____t1224t__unsafe_ptr=0;
  uint64_t __t3053t____t1224t__unsafe_size=0;
  uint32_t __t3053t____t1224t__unsafe_offset=0;
  uint32_t __t3053t____t1224t__unsafe_align=0;
  uint64_t __t3053t____t1225t=0;
  char* __t3054t__buf__unsafe_ptr=0;
  uint64_t __t3054t__buf__unsafe_size=0;
  uint32_t __t3054t__buf__unsafe_offset=0;
  uint32_t __t3054t__buf__unsafe_align=0;
  uint64_t __t3054t__pos=0;
  char* __t3055t__buf__unsafe_ptr=0;
  uint64_t __t3055t__buf__unsafe_size=0;
  uint32_t __t3055t__buf__unsafe_offset=0;
  uint32_t __t3055t__buf__unsafe_align=0;
  uint64_t __t3055t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3056t__unsafe_ptr=0;
  uint64_t __t3056t__dat__pos=0;
  uint64_t __t3056t__dat__length=0;
  char __t3056t__dat__first=0;
  char* __t3057t____t1221t__unsafe_ptr=0;
  uint64_t __t3057t____t1221t__unsafe_size=0;
  uint32_t __t3057t____t1221t__unsafe_offset=0;
  uint32_t __t3057t____t1221t__unsafe_align=0;
  uint64_t __t3057t____t1222t=0;
  uint64_t __t3059t=0;
  uint64_t __t3060t__=0;
  char* __t3061t__unsafe_ptr=0;
  uint64_t __t3061t__dat__pos=0;
  uint64_t __t3061t__dat__length=0;
  char __t3061t__dat__first=0;
  char __t3062t__=0;
  char __t3063t__=0;
  char __t3064t=0;
  uint64_t __t3065t__=0;
  char __t3066t__=0;
  char __t3067t=0;
  uint64_t __t3068t__=0;
  char* __t3070t__unsafe_ptr=0;
  uint64_t __t3070t__dat__pos=0;
  uint64_t __t3070t__dat__length=0;
  char __t3070t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3071t__=0;
  uint64_t __t3072t__=0;
  uint64_t __t3073t__=0;
  char* __t3074t__buf__unsafe_ptr=0;
  uint64_t __t3074t__buf__unsafe_size=0;
  uint32_t __t3074t__buf__unsafe_offset=0;
  uint32_t __t3074t__buf__unsafe_align=0;
  uint64_t __t3074t__pos=0;
  char* __t3075t____t1224t__unsafe_ptr=0;
  uint64_t __t3075t____t1224t__unsafe_size=0;
  uint32_t __t3075t____t1224t__unsafe_offset=0;
  uint32_t __t3075t____t1224t__unsafe_align=0;
  uint64_t __t3075t____t1225t=0;
  char* __t3076t__buf__unsafe_ptr=0;
  uint64_t __t3076t__buf__unsafe_size=0;
  uint32_t __t3076t__buf__unsafe_offset=0;
  uint32_t __t3076t__buf__unsafe_align=0;
  uint64_t __t3076t__pos=0;
  char* __t3077t__buf__unsafe_ptr=0;
  uint64_t __t3077t__buf__unsafe_size=0;
  uint32_t __t3077t__buf__unsafe_offset=0;
  uint32_t __t3077t__buf__unsafe_align=0;
  uint64_t __t3077t__pos=0;
  char* __t3078t__unsafe_ptr=0;
  uint64_t __t3078t__dat__pos=0;
  uint64_t __t3078t__dat__length=0;
  char __t3078t__dat__first=0;
  char* __t3079t__unsafe_ptr=0;
  uint64_t __t3079t__dat__pos=0;
  uint64_t __t3079t__dat__length=0;
  char __t3079t__dat__first=0;
  char __t3080t=0;
  char* __t3081t____t1221t__unsafe_ptr=0;
  uint64_t __t3081t____t1221t__unsafe_size=0;
  uint32_t __t3081t____t1221t__unsafe_offset=0;
  uint32_t __t3081t____t1221t__unsafe_align=0;
  uint64_t __t3081t____t1222t=0;
  uint64_t __t3083t=0;
  uint64_t __t3084t__=0;
  char* __t3085t__unsafe_ptr=0;
  uint64_t __t3085t__dat__pos=0;
  uint64_t __t3085t__dat__length=0;
  char __t3085t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1678t(_s1,&__t3042t__unsafe_ptr,&__t3042t__dat__pos,&__t3042t__dat__length,&__t3042t__dat__first);
  s1__unsafe_ptr=__t3042t__unsafe_ptr;
  s1__dat__pos=__t3042t__dat__pos;
  s1__dat__length=__t3042t__dat__length;
  s1__dat__first=__t3042t__dat__first;
  str__t1678t(_s2,&__t3043t__unsafe_ptr,&__t3043t__dat__pos,&__t3043t__dat__length,&__t3043t__dat__first);
  s2__unsafe_ptr=__t3043t__unsafe_ptr;
  s2__dat__pos=__t3043t__dat__pos;
  s2__dat__length=__t3043t__dat__length;
  s2__dat__first=__t3043t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3044t__);
  if(__t3044t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3045t__);
  eq__t134t(CHARS__pos,__t3045t__,&__t3046t__);
  __t3047t=__t3046t__;
  }
  if(__t3047t){
  add__t188t(CHARS__pos,s2__dat__length,&__t3048t__);
  lt__t302t(__t3048t__,CHARS__buf__unsafe_size,&__t3049t__);
  __t3050t=__t3049t__;
  }
  if(__t3050t){
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3051t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3051t__,&__t3052t__buf__unsafe_ptr,&__t3052t__buf__unsafe_size,&__t3052t__buf__unsafe_offset,&__t3052t__buf__unsafe_align,&__t3052t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t3052t__buf__unsafe_ptr,__t3052t__buf__unsafe_size,__t3052t__buf__unsafe_offset,__t3052t__buf__unsafe_align,__t3052t__pos,&__t3053t____t1224t__unsafe_ptr,&__t3053t____t1224t__unsafe_size,&__t3053t____t1224t__unsafe_offset,&__t3053t____t1224t__unsafe_align,&__t3053t____t1225t);
  arena__t1211t(&__t3053t____t1224t__unsafe_ptr,&__t3053t____t1224t__unsafe_size,&__t3053t____t1224t__unsafe_offset,&__t3053t____t1224t__unsafe_align,__t3053t____t1225t,&__t3054t__buf__unsafe_ptr,&__t3054t__buf__unsafe_size,&__t3054t__buf__unsafe_offset,&__t3054t__buf__unsafe_align,&__t3054t__pos);
  __t3055t__buf__unsafe_ptr=__t3054t__buf__unsafe_ptr;
  __t3055t__buf__unsafe_size=__t3054t__buf__unsafe_size;
  __t3055t__buf__unsafe_offset=__t3054t__buf__unsafe_offset;
  __t3055t__buf__unsafe_align=__t3054t__buf__unsafe_align;
  __t3055t__pos=__t3054t__pos;
  surface__buf__unsafe_ptr=__t3055t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3055t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3055t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3055t__buf__unsafe_align;
  surface__pos=__t3055t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3056t__unsafe_ptr,&__t3056t__dat__pos,&__t3056t__dat__length,&__t3056t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3057t____t1221t__unsafe_ptr,&__t3057t____t1221t__unsafe_size,&__t3057t____t1221t__unsafe_offset,&__t3057t____t1221t__unsafe_align,&__t3057t____t1222t);
  __t3059t=0;
  add__t188t(s1__dat__pos,__t3059t,&__t3060t__);
  __t_errcode=str__t1674t(__t3057t____t1221t__unsafe_ptr,__t3057t____t1221t__unsafe_size,__t3057t____t1221t__unsafe_offset,__t3057t____t1221t__unsafe_align,__t3057t____t1222t,__t3060t__,&__t3061t__unsafe_ptr,&__t3061t__dat__pos,&__t3061t__dat__length,&__t3061t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3062t__);
  if(__t3062t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3063t__);
  __t3064t=__t3063t__;
  }
  if(__t3064t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3065t__);
  eq__t134t(s2__dat__pos,__t3065t__,&__t3066t__);
  __t3067t=__t3066t__;
  }
  if(__t3067t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3068t__);
  __t_errcode=str__t1674t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3068t__,s1__dat__pos,&__t3070t__unsafe_ptr,&__t3070t__dat__pos,&__t3070t__dat__length,&__t3070t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3061t__unsafe_ptr=__t3070t__unsafe_ptr;
  __t3061t__dat__pos=__t3070t__dat__pos;
  __t3061t__dat__length=__t3070t__dat__length;
  __t3061t__dat__first=__t3070t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1688t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3071t__);
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3072t__);
  add__t188t(__t3071t__,__t3072t__,&__t3073t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3073t__,&__t3074t__buf__unsafe_ptr,&__t3074t__buf__unsafe_size,&__t3074t__buf__unsafe_offset,&__t3074t__buf__unsafe_align,&__t3074t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t3074t__buf__unsafe_ptr,__t3074t__buf__unsafe_size,__t3074t__buf__unsafe_offset,__t3074t__buf__unsafe_align,__t3074t__pos,&__t3075t____t1224t__unsafe_ptr,&__t3075t____t1224t__unsafe_size,&__t3075t____t1224t__unsafe_offset,&__t3075t____t1224t__unsafe_align,&__t3075t____t1225t);
  arena__t1211t(&__t3075t____t1224t__unsafe_ptr,&__t3075t____t1224t__unsafe_size,&__t3075t____t1224t__unsafe_offset,&__t3075t____t1224t__unsafe_align,__t3075t____t1225t,&__t3076t__buf__unsafe_ptr,&__t3076t__buf__unsafe_size,&__t3076t__buf__unsafe_offset,&__t3076t__buf__unsafe_align,&__t3076t__pos);
  __t3077t__buf__unsafe_ptr=__t3076t__buf__unsafe_ptr;
  __t3077t__buf__unsafe_size=__t3076t__buf__unsafe_size;
  __t3077t__buf__unsafe_offset=__t3076t__buf__unsafe_offset;
  __t3077t__buf__unsafe_align=__t3076t__buf__unsafe_align;
  __t3077t__pos=__t3076t__pos;
  surface__buf__unsafe_ptr=__t3077t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3077t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3077t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3077t__buf__unsafe_align;
  surface__pos=__t3077t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3078t__unsafe_ptr,&__t3078t__dat__pos,&__t3078t__dat__length,&__t3078t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3079t__unsafe_ptr,&__t3079t__dat__pos,&__t3079t__dat__length,&__t3079t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3081t____t1221t__unsafe_ptr,&__t3081t____t1221t__unsafe_size,&__t3081t____t1221t__unsafe_offset,&__t3081t____t1221t__unsafe_align,&__t3081t____t1222t);
  __t3083t=0;
  add__t188t(prev_pos,__t3083t,&__t3084t__);
  __t_complain=str__t1674t(__t3081t____t1221t__unsafe_ptr,__t3081t____t1221t__unsafe_size,__t3081t____t1221t__unsafe_offset,__t3081t____t1221t__unsafe_align,__t3081t____t1222t,__t3084t__,&__t3085t__unsafe_ptr,&__t3085t__dat__pos,&__t3085t__dat__length,&__t3085t__dat__first);
  __t3080t=__t_complain;
  if(__t_complain){
  goto __t3080t__label;
  }
  ret__unsafe_ptr=__t3085t__unsafe_ptr;
  ret__dat__pos=__t3085t__dat__pos;
  ret__dat__length=__t3085t__dat__length;
  ret__dat__first=__t3085t__dat__first;
  __t3080t__label:__t3080t=__t3080t==0;
  __t3061t__unsafe_ptr=ret__unsafe_ptr;
  __t3061t__dat__pos=ret__dat__pos;
  __t3061t__dat__length=ret__dat__length;
  __t3061t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5770t=CHARS__buf__unsafe_ptr;
  *__t5771t=CHARS__buf__unsafe_size;
  *__t5772t=CHARS__buf__unsafe_offset;
  *__t5773t=CHARS__buf__unsafe_align;
  *__t5774t=CHARS__pos;
  *__t5775t=__t3061t__unsafe_ptr;
  *__t5776t=__t3061t__dat__pos;
  *__t5777t=__t3061t__dat__length;
  *__t5778t=__t3061t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t5554t(char** __t5779t, uint64_t* __t5780t, uint32_t* __t5781t, uint32_t* __t5782t, uint64_t* __t5783t, char** __t5784t, uint64_t* __t5785t, uint64_t* __t5786t, char* __t5787t) {
  char* CHARS__buf__unsafe_ptr=*__t5779t;
  uint64_t CHARS__buf__unsafe_size=*__t5780t;
  uint32_t CHARS__buf__unsafe_offset=*__t5781t;
  uint32_t CHARS__buf__unsafe_align=*__t5782t;
  uint64_t CHARS__pos=*__t5783t;
  uint64_t __t5555t__=0;
  uint64_t __t5556t____t4407t=0;
  uint64_t __t5556t____t4409t__=0;
  char* __t5559t__unsafe_ptr=0;
  uint64_t __t5559t__dat__pos=0;
  uint64_t __t5559t__dat__length=0;
  char __t5559t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  reuse__t4404t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5555t__);
  __t_errcode=add__t3041t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5557t,__t5558t,&__t5559t__unsafe_ptr,&__t5559t__dat__pos,&__t5559t__dat__length,&__t5559t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5779t=CHARS__buf__unsafe_ptr;
  *__t5780t=CHARS__buf__unsafe_size;
  *__t5781t=CHARS__buf__unsafe_offset;
  *__t5782t=CHARS__buf__unsafe_align;
  *__t5783t=CHARS__pos;
  *__t5784t=__t5559t__unsafe_ptr;
  *__t5785t=__t5559t__dat__pos;
  *__t5786t=__t5559t__dat__length;
  *__t5787t=__t5559t__dat__first;
  
  __t_skip_returns:__t5556t____t4407t=0;
  sub__t410t(__t5555t__,__t5556t____t4407t,&__t5556t____t4409t__);
  CHARS__pos=__t5556t____t4409t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test3__t5564t(char** __t5788t, uint64_t* __t5789t, uint32_t* __t5790t, uint32_t* __t5791t, uint64_t* __t5792t, char** __t5793t, uint64_t* __t5794t, uint64_t* __t5795t, char* __t5796t) {
  char* CHARS__buf__unsafe_ptr=*__t5788t;
  uint64_t CHARS__buf__unsafe_size=*__t5789t;
  uint32_t CHARS__buf__unsafe_offset=*__t5790t;
  uint32_t CHARS__buf__unsafe_align=*__t5791t;
  uint64_t CHARS__pos=*__t5792t;
  char* __t5565t__unsafe_ptr=0;
  uint64_t __t5565t__dat__pos=0;
  uint64_t __t5565t__dat__length=0;
  char __t5565t__dat__first=0;
  char* __t5566t__unsafe_ptr=0;
  uint64_t __t5566t__dat__pos=0;
  uint64_t __t5566t__dat__length=0;
  char __t5566t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t5554t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5565t__unsafe_ptr,&__t5565t__dat__pos,&__t5565t__dat__length,&__t5565t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1754t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5565t__unsafe_ptr,__t5565t__dat__pos,__t5565t__dat__length,__t5565t__dat__first,&__t5566t__unsafe_ptr,&__t5566t__dat__pos,&__t5566t__dat__length,&__t5566t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5788t=CHARS__buf__unsafe_ptr;
  *__t5789t=CHARS__buf__unsafe_size;
  *__t5790t=CHARS__buf__unsafe_offset;
  *__t5791t=CHARS__buf__unsafe_align;
  *__t5792t=CHARS__pos;
  *__t5793t=__t5566t__unsafe_ptr;
  *__t5794t=__t5566t__dat__pos;
  *__t5795t=__t5566t__dat__length;
  *__t5796t=__t5566t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str____buffer__t5575t(char** __t5797t, uint64_t* __t5798t, uint32_t* __t5799t, uint32_t* __t5800t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=25;
  *__t5797t=unsafe_ptr;
  *__t5798t=unsafe_size;
  *__t5799t=unsafe_offset;
  *__t5800t=unsafe_align;
}

static inline __attribute__((always_inline)) int test4__t5571t(char** __t5801t, uint64_t* __t5802t, uint32_t* __t5803t, uint32_t* __t5804t, uint64_t* __t5805t, char** __t5806t, uint64_t* __t5807t, uint32_t* __t5808t, uint32_t* __t5809t) {
  char* arn__buf__unsafe_ptr=*__t5801t;
  uint64_t arn__buf__unsafe_size=*__t5802t;
  uint32_t arn__buf__unsafe_offset=*__t5803t;
  uint32_t arn__buf__unsafe_align=*__t5804t;
  uint64_t arn__pos=*__t5805t;
  uint64_t __t5572t__=0;
  uint64_t __t5573t____t4407t=0;
  uint64_t __t5573t____t4409t__=0;
  char* __t5574t__unsafe_ptr=0;
  uint64_t __t5574t__dat__pos=0;
  uint64_t __t5574t__dat__length=0;
  char __t5574t__dat__first=0;
  char* __t5577t__unsafe_ptr=0;
  uint64_t __t5577t__unsafe_size=0;
  uint32_t __t5577t__unsafe_offset=0;
  uint32_t __t5577t__unsafe_align=0;
  uint64_t __t5578t=0;
  char* __t5579t__unsafe_ptr=0;
  uint64_t __t5579t__unsafe_size=0;
  uint32_t __t5579t__unsafe_offset=0;
  uint32_t __t5579t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  reuse__t4404t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t5572t__);
  __t_errcode=test3__t5564t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t5574t__unsafe_ptr,&__t5574t__dat__pos,&__t5574t__dat__length,&__t5574t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str____buffer__t5575t(&__t5577t__unsafe_ptr,&__t5577t__unsafe_size,&__t5577t__unsafe_offset,&__t5577t__unsafe_align);
  __t5578t=1;
  __t_errcode=alloc__t940t(&__t5577t__unsafe_ptr,&__t5577t__unsafe_size,&__t5577t__unsafe_offset,&__t5577t__unsafe_align,__t5578t,&__t5579t__unsafe_ptr,&__t5579t__unsafe_size,&__t5579t__unsafe_offset,&__t5579t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5577t__unsafe_ptr,&__t5574t__unsafe_ptr,8);
  memcpy(__t5577t__unsafe_ptr+8,&__t5574t__dat__pos,8);
  memcpy(__t5577t__unsafe_ptr+16,&__t5574t__dat__length,8);
  memcpy(__t5577t__unsafe_ptr+24,&__t5574t__dat__first,1);
  ret__unsafe_ptr=__t5577t__unsafe_ptr;
  ret__unsafe_size=__t5577t__unsafe_size;
  ret__unsafe_offset=__t5577t__unsafe_offset;
  ret__unsafe_align=__t5577t__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t815t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5801t=arn__buf__unsafe_ptr;
  *__t5802t=arn__buf__unsafe_size;
  *__t5803t=arn__buf__unsafe_offset;
  *__t5804t=arn__buf__unsafe_align;
  *__t5805t=arn__pos;
  *__t5806t=ret__unsafe_ptr;
  *__t5807t=ret__unsafe_size;
  *__t5808t=ret__unsafe_offset;
  *__t5809t=ret__unsafe_align;
  
  __t_skip_returns:__t5573t____t4407t=0;
  sub__t410t(__t5572t__,__t5573t____t4407t,&__t5573t____t4409t__);
  arn__pos=__t5573t____t4409t__;
  
  return __t_errcode;
}

void char__t1690t(const char* s, char* __t5810t) {
  char* __t1691t__unsafe_ptr=0;
  uint64_t __t1691t__dat__pos=0;
  uint64_t __t1691t__dat__length=0;
  char __t1691t__dat__first=0;
  str__t1678t(s,&__t1691t__unsafe_ptr,&__t1691t__dat__pos,&__t1691t__dat__length,&__t1691t__dat__first);
  goto __t_return;
  __t_return:
  *__t5810t=__t1691t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1693t(char x, char y, char* __t5811t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5811t=z;
}

static inline __attribute__((always_inline)) void eq__t1825t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5812t) {
  uint64_t __t1826t__=0;
  uint64_t n=0;
  uint64_t __t1827t__=0;
  char __t1828t__=0;
  char __t1829t=0;
  char __t1830t__=0;
  char __t1831t=0;
  char z=0;
  len__t1688t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1826t__);
  n=__t1826t__;
  len__t1688t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1827t__);
  neq__t158t(n,__t1827t__,&__t1828t__);
  if(__t1828t__){
  __t1829t=0;
  goto __t_return;
  }
  neq__t1693t(x__dat__first,y__dat__first,&__t1830t__);
  if(__t1830t__){
  __t1831t=0;
  __t1829t=__t1831t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1829t=z;
  goto __t_return;
  __t_return:
  *__t5812t=__t1829t;
}

void eq__t1838t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5813t) {
  char __t1839t__=0;
  char __t1840t__=0;
  char __t1841t=0;
  char* __t1842t__unsafe_ptr=0;
  uint64_t __t1842t__dat__pos=0;
  uint64_t __t1842t__dat__length=0;
  char __t1842t__dat__first=0;
  char __t1843t__=0;
  char__t1690t(x,&__t1839t__);
  neq__t1693t(y__dat__first,__t1839t__,&__t1840t__);
  if(__t1840t__){
  __t1841t=0;
  goto __t_return;
  }
  str__t1678t(x,&__t1842t__unsafe_ptr,&__t1842t__dat__pos,&__t1842t__dat__length,&__t1842t__dat__first);
  eq__t1825t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t1842t__unsafe_ptr,__t1842t__dat__pos,__t1842t__dat__length,__t1842t__dat__first,&__t1843t__);
  __t1841t=__t1843t__;
  goto __t_return;
  __t_return:
  *__t5813t=__t1841t;
}

static inline __attribute__((always_inline)) void len__t1217t(char* arn__buf__unsafe_ptr, uint64_t arn__buf__unsafe_size, uint32_t arn__buf__unsafe_offset, uint32_t arn__buf__unsafe_align, uint64_t arn__pos, uint64_t* __t5814t) {
  goto __t_return;
  __t_return:
  *__t5814t=arn__pos;
}

static inline __attribute__((always_inline)) int test5__t5585t(char** __t5815t, uint64_t* __t5816t, uint32_t* __t5817t, uint32_t* __t5818t, uint64_t* __t5819t) {
  char* arn__buf__unsafe_ptr=*__t5815t;
  uint64_t arn__buf__unsafe_size=*__t5816t;
  uint32_t arn__buf__unsafe_offset=*__t5817t;
  uint32_t arn__buf__unsafe_align=*__t5818t;
  uint64_t arn__pos=*__t5819t;
  uint64_t __t5586t__=0;
  uint64_t __t5587t____t4407t=0;
  uint64_t __t5587t____t4409t__=0;
  char* __t5588t__unsafe_ptr=0;
  uint64_t __t5588t__unsafe_size=0;
  uint32_t __t5588t__unsafe_offset=0;
  uint32_t __t5588t__unsafe_align=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint32_t x__unsafe_offset=0;
  uint32_t x__unsafe_align=0;
  uint64_t __t5590t=0;
  char* __t5592t__=0;
  char* z=0;
  char* __t5594t__unsafe_ptr=0;
  uint64_t __t5594t__dat__pos=0;
  uint64_t __t5594t__dat__length=0;
  char __t5594t__dat__first=0;
  char __t5595t__=0;
  uint64_t __t5598t=0;
  uint64_t __t5599t__=0;
  char __t5600t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  reuse__t4404t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t5586t__);
  __t_errcode=test4__t5571t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t5588t__unsafe_ptr,&__t5588t__unsafe_size,&__t5588t__unsafe_offset,&__t5588t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5588t__unsafe_ptr;
  x__unsafe_size=__t5588t__unsafe_size;
  x__unsafe_offset=__t5588t__unsafe_offset;
  x__unsafe_align=__t5588t__unsafe_align;
  __t5590t=0;
  __t_errcode=get__t1160t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t5590t,&__t5592t__);
  if(__t_errcode){
  goto __t_failure;
  }
  z=__t5592t__;
  if(!z){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5594t__unsafe_ptr,z,8);
  memcpy(&__t5594t__dat__pos,z+8,8);
  memcpy(&__t5594t__dat__length,z+16,8);
  memcpy(&__t5594t__dat__first,z+24,1);
  eq__t1838t(__t5593t,__t5594t__unsafe_ptr,__t5594t__dat__pos,__t5594t__dat__length,__t5594t__dat__first,&__t5595t__);
  __t_errcode=assert__t5475t(__t5595t__,__t5596t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5598t=10;
  len__t1217t(arn__buf__unsafe_ptr,arn__buf__unsafe_size,arn__buf__unsafe_offset,arn__buf__unsafe_align,arn__pos,&__t5599t__);
  eq__t134t(__t5598t,__t5599t__,&__t5600t__);
  __t_errcode=assert__t5475t(__t5600t__,__t5601t);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5815t=arn__buf__unsafe_ptr;
  *__t5816t=arn__buf__unsafe_size;
  *__t5817t=arn__buf__unsafe_offset;
  *__t5818t=arn__buf__unsafe_align;
  *__t5819t=arn__pos;
  
  __t_skip_returns:free__t815t(&__t5588t__unsafe_ptr);
  __t5587t____t4407t=0;
  sub__t410t(__t5586t__,__t5587t____t4407t,&__t5587t____t4409t__);
  arn__pos=__t5587t____t4409t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5603t() {
  uint64_t __t5604t=0;
  char* __t5605t__unsafe_ptr=0;
  uint64_t __t5605t__unsafe_size=0;
  uint32_t __t5605t__unsafe_offset=0;
  uint32_t __t5605t__unsafe_align=0;
  char* __t5607t__buf__unsafe_ptr=0;
  uint64_t __t5607t__buf__unsafe_size=0;
  uint32_t __t5607t__buf__unsafe_offset=0;
  uint32_t __t5607t__buf__unsafe_align=0;
  uint64_t __t5607t__pos=0;
  char* __t5608t__buf__unsafe_ptr=0;
  uint64_t __t5608t__buf__unsafe_size=0;
  uint32_t __t5608t__buf__unsafe_offset=0;
  uint32_t __t5608t__buf__unsafe_align=0;
  uint64_t __t5608t__pos=0;
  char* arn__buf__unsafe_ptr=0;
  uint64_t arn__buf__unsafe_size=0;
  uint32_t arn__buf__unsafe_offset=0;
  uint32_t arn__buf__unsafe_align=0;
  uint64_t arn__pos=0;
  uint64_t __t5611t=0;
  char __t5612t__=0;
  uint64_t __t5616t=0;
  char __t5617t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5604t=1024;
  __t_errcode=alloc__t1095t(__t5604t,&__t5605t__unsafe_ptr,&__t5605t__unsafe_size,&__t5605t__unsafe_offset,&__t5605t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1214t(&__t5605t__unsafe_ptr,&__t5605t__unsafe_size,&__t5605t__unsafe_offset,&__t5605t__unsafe_align,&__t5607t__buf__unsafe_ptr,&__t5607t__buf__unsafe_size,&__t5607t__buf__unsafe_offset,&__t5607t__buf__unsafe_align,&__t5607t__pos);
  __t5608t__buf__unsafe_ptr=__t5607t__buf__unsafe_ptr;
  __t5608t__buf__unsafe_size=__t5607t__buf__unsafe_size;
  __t5608t__buf__unsafe_offset=__t5607t__buf__unsafe_offset;
  __t5608t__buf__unsafe_align=__t5607t__buf__unsafe_align;
  __t5608t__pos=__t5607t__pos;
  arn__buf__unsafe_ptr=__t5608t__buf__unsafe_ptr;
  arn__buf__unsafe_size=__t5608t__buf__unsafe_size;
  arn__buf__unsafe_offset=__t5608t__buf__unsafe_offset;
  arn__buf__unsafe_align=__t5608t__buf__unsafe_align;
  arn__pos=__t5608t__pos;
  __t_errcode=test1__t5545t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t463t(arn__pos);
  __t5611t=0;
  eq__t134t(arn__pos,__t5611t,&__t5612t__);
  __t_errcode=assert__t5475t(__t5612t__,__t5613t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test5__t5585t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5616t=0;
  eq__t134t(arn__pos,__t5616t,&__t5617t__);
  __t_errcode=assert__t5475t(__t5617t__,__t5618t);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:free__t815t(&__t5605t__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void console__t425t() {
  goto __t_return;
  __t_return:
;}

int main(int argc, char** argv) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t425t();
  __t_errcode=main__t5603t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}