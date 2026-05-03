#ifndef SMOLAMBDA_OS_MACOS_H
#define SMOLAMBDA_OS_MACOS_H
#if defined(__APPLE__) && defined(__MACH__)

#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <mach/mach_time.h>

/* ── sleep ── */
static inline void __smo_exact_sleep(double duration) {
    struct timespec ts;
    ts.tv_sec  = (time_t)duration;
    ts.tv_nsec = (long)((duration - ts.tv_sec) * 1000000000ULL);
    if (ts.tv_sec > 0 || ts.tv_nsec > 0)
        nanosleep(&ts, NULL);
}

/* ── monotonic time (mach_absolute_time for sub-ms accuracy) ── */
static mach_timebase_info_data_t __smo_timebase_m;
static uint64_t                  __smo_time_start_m   = 0;
static int                       __smo_time_initialized_m = 0;

static inline double __smo_time_eta(void) {
    if (!__smo_time_initialized_m) {
        mach_timebase_info(&__smo_timebase_m);
        __smo_time_start_m       = mach_absolute_time();
        __smo_time_initialized_m = 1;
        return 0.0;
    }
    uint64_t now     = mach_absolute_time();
    uint64_t elapsed = now - __smo_time_start_m;
    /* convert to seconds via numer/denom */
    return (double)(elapsed * __smo_timebase_m.numer / __smo_timebase_m.denom) / 1e9;
}

/* ── file size ── */
static inline uint64_t __smo_file_size(FILE* fp) {
    if (!fp) return 0;
    struct stat st;
    if (fstat(fileno(fp), &st) == 0)
        return (uint64_t)st.st_size;
    return 0;
}

/* ── filesystem ── */
static inline int __smo_is_file(const char* path) {
    FILE* f = fopen(path, "r");
    if (!f) return 0;
    fclose(f);
    return 1;
}

static inline int __smo_is_dir(const char* path) {
    struct stat st;
    if (stat(path, &st) != 0) return 0;
    return (st.st_mode & S_IFMT) == S_IFDIR;
}

static inline int __smo_create_dir(const char* path) {
    return mkdir(path, 0777) == 0;
}

static inline int __smo_remove_file(const char* path) {
    return remove(path) == 0;
}

/* ── console open/close (Terminal.app via open -a) ── */
static inline FILE* __smo_open_console(void) {
    int pty_fd = posix_openpt(O_RDWR | O_NOCTTY);
    if (pty_fd < 0 || grantpt(pty_fd) != 0 || unlockpt(pty_fd) != 0)
        return NULL;

    char pts_name[128];
    if (ptsname_r(pty_fd, pts_name, sizeof(pts_name)) != 0)
        return NULL;

    struct termios tio;
    tcgetattr(pty_fd, &tio);
    tio.c_lflag &= ~(ECHO | ICANON);
    tcsetattr(pty_fd, TCSANOW, &tio);

    /* Try iTerm2 first, fall back to Terminal.app */
    const char* terms[] = {"iTerm", "Terminal"};
    const char* found = NULL;
    for (int i = 0; i < 2 && !found; i++) {
        char cmd[128];
        snprintf(cmd, sizeof(cmd),
            "osascript -e 'id of app \"%s\"' >/dev/null 2>&1", terms[i]);
        if (system(cmd) == 0) found = terms[i];
    }

    if (found) {
        char cmd[256];
        snprintf(cmd, sizeof(cmd),
            "osascript -e 'tell app \"%s\" to do script \"socat - %s\"' >/dev/null 2>&1",
            found, pts_name);
        pid_t pid = fork();
        if (pid == 0) {
            execl("/bin/sh", "sh", "-c", cmd, NULL);
            _exit(1);
        }
    }

    FILE* f = fdopen(pty_fd, "r+");
    if (f) setvbuf(f, NULL, _IONBF, 0);
    return f;
}

static inline void __smo_close_console(FILE* f) {
    if (f) fclose(f);
}

/* ── has display ── */
static inline int __smo_has_display(void) {
    /* on macOS, GUI is available unless explicitly headless (CI, SSH without X) */
    if (getenv("CI"))             return 0;
    if (getenv("SSH_CONNECTION") && !getenv("DISPLAY")) return 0;
    return 1;
}

/* ── key press ── */
static inline int64_t __smo_next_key_press(void) {
    unsigned char seq[8] = {0};
    int64_t code = 0;
    ssize_t n = read(STDIN_FILENO, &seq[0], 1);
    if (n > 0 && seq[0] == 27) {
        ssize_t r1 = read(STDIN_FILENO, &seq[1], 1);
        ssize_t r2 = read(STDIN_FILENO, &seq[2], 1);
        (void)r1; (void)r2;
        code = ((int64_t)seq[0] << 16) | ((int64_t)seq[1] << 8) | (int64_t)seq[2];
    } else if (n > 0) {
        code = (int64_t)seq[0];
    }
    return code;
}

#endif /* __APPLE__ && __MACH__ */
#endif /* SMOLAMBDA_OS_MACOS_H */