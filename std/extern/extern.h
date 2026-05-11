#include <stdio.h>
#include <dirent.h>
#include <alloca.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

#define ptr_memzero(allocated, from, to) memset(((char*)(allocated))+(from), 0, (to)-(from))
