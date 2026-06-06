#include <stdio.h>
#include <dirent.h>
#include <alloca.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

#define ptr_memzero(allocated, from, to) memset(((char*)(allocated))+(from), 0, (to)-(from))

int __smo_ansi_supported() {
#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE) return 0;
    DWORD mode = 0;
    if (!GetConsoleMode(hOut, &mode)) return 0;
    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    return SetConsoleMode(hOut, mode) != 0;
#else
    if (!isatty(STDOUT_FILENO)) return 0;
    const char *term = getenv("TERM");
    if (!term || strcmp(term, "dumb") == 0) return 0;
    return 1;
#endif
}


#include <signal.h>
static volatile sig_atomic_t __t_interrupted = 0;
static void __t_handle_sigint(int sig) {
    (void)sig;
    __t_interrupted = 1;
}
#define DECLARE_HANDLERS struct sigaction __t_sa = { .sa_handler = __t_handle_sigint };\
    sigemptyset(&__t_sa.sa_mask);\
    __t_sa.sa_flags = 0;\
    sigaction(SIGINT, &__t_sa, NULL);

    