#ifndef SMOLAMBDA_OS_LINUX_H
#define SMOLAMBDA_OS_LINUX_H
#if defined(__linux__)

/* _XOPEN_SOURCE >= 600 is required for posix_openpt, grantpt, unlockpt, ptsname_r */
#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif

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
#include <pty.h>

const char* const __temp_osname = "linux";

/* ── sleep ── */
static inline void __smo_exact_sleep(double duration) {
    struct timespec ts;
    ts.tv_sec  = (time_t)duration;
    ts.tv_nsec = (long)((duration - ts.tv_sec) * 1000000000ULL);
    if (ts.tv_sec > 0 || ts.tv_nsec > 0)
        nanosleep(&ts, NULL);
}

/* ── monotonic time ── */
static struct timespec __smo_time_start_l;
static int             __smo_time_initialized_l = 0;

static inline double __smo_time_eta(void) {
    if (!__smo_time_initialized_l) {
        clock_gettime(CLOCK_MONOTONIC, &__smo_time_start_l);
        __smo_time_initialized_l = 1;
        return 0.0;
    }
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    return (now.tv_sec  - __smo_time_start_l.tv_sec) +
           (now.tv_nsec - __smo_time_start_l.tv_nsec) / 1e9;
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
    struct stat st;
    if (stat(path, &st) != 0) return 0;
    return S_ISREG(st.st_mode);
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

/* ── console open/close (pty + xterm/konsole) ──
 *
 * Matches the reference implementation exactly:
 * - open pty master, get slave name
 * - fork and exec xterm/konsole with the slave pts path as the -e argument
 *   so the terminal emulator opens it as its own stdio
 * - parent keeps the master fd as a plain FILE*
 * - no polling, no greeting drain, no struct wrapper needed
 */
static inline FILE* __smo_open_console(void) {
    // int pty_fd = posix_openpt(O_RDWR | O_NOCTTY);
    // if (pty_fd < 0 || grantpt(pty_fd) != 0 || unlockpt(pty_fd) != 0)
    //     return NULL;

    // char pts_name[128];
    // if (ptsname_r(pty_fd, pts_name, sizeof(pts_name)) != 0) {
    //     close(pty_fd);
    //     return NULL;
    // }

    // struct termios tio;
    // if (tcgetattr(pty_fd, &tio) == 0) {
    //     tio.c_lflag &= ~(ECHO | ICANON);
    //     tcsetattr(pty_fd, TCSANOW, &tio);
    // }

    // /* find a terminal emulator */
    // const char* found = NULL;
    // {
    //     const char* terms[] = {"xterm", "konsole"};
    //     for (int i = 0; i < 2 && !found; i++) {
    //         char cmd[64];
    //         snprintf(cmd, sizeof(cmd), "command -v %s >/dev/null 2>&1", terms[i]);
    //         if (system(cmd) == 0) found = terms[i];
    //     }
    // }
    // if (!found) {
    //     close(pty_fd);
    //     return NULL;
    // }

    // pid_t pid = fork();
    // if (pid < 0) {
    //     close(pty_fd);
    //     return NULL;
    // }
    // if (pid == 0) {
    //     close(pty_fd); /* child does not need master */
    //     /* Build a shell command that redirects its own stdio to the slave
    //      * pts device, then execs a shell — this is what the terminal emulator
    //      * will display.  xterm runs this via -e sh -c "..." */
    //     char sh_cmd[256];
    //     snprintf(sh_cmd, sizeof(sh_cmd),
    //         "exec sh <%s >%s 2>&1", pts_name, pts_name);
    //     if (strcmp(found, "xterm") == 0)
    //         execlp("xterm", "xterm", "-e", "sh", "-c", sh_cmd, NULL);
    //     else
    //         execlp("konsole", "konsole", "-e", "sh", "-c", sh_cmd, NULL);
    //     _exit(1);
    // }

    // /* parent: wait until xterm has opened the slave end.
    //  * We do this by trying to open the slave ourselves with O_NONBLOCK — once
    //  * xterm has set up its session the slave will have a controlling process
    //  * and reads/writes on the master will work.  We also impose a short
    //  * minimum delay so the window has time to appear before the caller writes. */
    // {
    //     struct timespec ts = {0, 50000000L}; /* 50 ms per poll */
    //     int ready = 0;
    //     for (int i = 0; i < 60 && !ready; i++) { /* up to 3 s */
    //         nanosleep(&ts, NULL);
    //         int sfd = open(pts_name, O_RDWR | O_NOCTTY | O_NONBLOCK);
    //         if (sfd >= 0) {
    //             close(sfd);
    //             ready = 1;
    //         }
    //     }
    //     if (!ready) {
    //         kill(pid, SIGTERM);
    //         waitpid(pid, NULL, 0);
    //         close(pty_fd);
    //         return NULL;
    //     }
    //     /* extra settle — xterm opened the slave but may not have drawn yet */
    //     struct timespec settle = {0, 300000000L}; /* 300 ms */
    //     nanosleep(&settle, NULL);
    // }

    // /* parent: wrap master fd as unbuffered FILE* and return */
    // FILE* f = fdopen(pty_fd, "r+");
    // if (!f) {
    //     kill(pid, SIGTERM);
    //     waitpid(pid, NULL, 0);
    //     close(pty_fd);
    //     return NULL;
    // }
    // setvbuf(f, NULL, _IONBF, 0);
    // return f;
    return NULL;
}

static inline void __smo_close_console(FILE* f) {
    if (f) fclose(f);
}

/* ── has display (for console guard) ── */
static inline int __smo_has_display(void) {
    int has = getenv("DISPLAY") != NULL || getenv("WAYLAND_DISPLAY") != NULL;
    if (getenv("SSH_CONNECTION") && !has)    has = 0;
    if (getenv("TERM_PROGRAM")   && !has)    has = 1;
    /* WSL check */
    FILE* wsl = fopen("/proc/version", "r");
    if (wsl) {
        char buf[256];
        buf[0] = 0;
        if (fread(buf, 1, sizeof(buf) - 1, wsl) > 0) {
            buf[sizeof(buf) - 1] = 0;
            if (strstr(buf, "Microsoft") || strstr(buf, "WSL"))
                has = getenv("DISPLAY") != NULL;
        }
        fclose(wsl);
    }
    if (getenv("MSYSTEM") || getenv("CYGWIN")) has = 0;
#ifdef __EMSCRIPTEN__
    has = 0;
#else
    if (!has && isatty(STDIN_FILENO)) has = 0;
#endif
    return has;
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

#endif /* __linux__ */
#endif /* SMOLAMBDA_OS_LINUX_H */