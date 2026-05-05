#ifndef SMOLAMBDA_OS_WINDOWS_H
#define SMOLAMBDA_OS_WINDOWS_H
#if defined(_WIN32) || defined(_WIN64)

#include <windows.h>
#include <io.h>
#include <direct.h>
#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/* ── process ── */
#define popen  _popen
#define pclose _pclose

/* ── memory-mapped file (fallback: tmpfile) ── */
static inline FILE* fmemopen(void* buf, size_t size, const char* mode) {
    (void)buf; (void)size; (void)mode;
    return tmpfile();
}

/* ── sleep ── */
static inline void __smo_exact_sleep(double duration) {
    unsigned long ms = (unsigned long)(duration * 1000.0);
    if (ms) Sleep(ms);
}

/* ── monotonic time ── */
static LARGE_INTEGER __smo_time_freq_w;
static LARGE_INTEGER __smo_time_start_w;
static int           __smo_time_initialized_w = 0;

static inline double __smo_time_eta(void) {
    if (!__smo_time_initialized_w) {
        QueryPerformanceFrequency(&__smo_time_freq_w);
        QueryPerformanceCounter(&__smo_time_start_w);
        __smo_time_initialized_w = 1;
        return 0.0;
    }
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    return (double)(now.QuadPart - __smo_time_start_w.QuadPart) /
           (double)__smo_time_freq_w.QuadPart;
}

/* ── file size ── */
static inline uint64_t __smo_file_size(FILE* fp) {
    if (!fp) return 0;
    struct _stat64 st;
    if (_fstat64(_fileno(fp), &st) == 0)
        return (uint64_t)st.st_size;
    return 0;
}

/* ── filesystem ── */
static inline int __smo_is_file(const char* path) {
    struct stat st;
    if (_stat(path, &st) != 0) return 0;
    return S_ISREG(st.st_mode);
}

static inline int __smo_is_dir(const char* path) {
    struct _stat st;
    if (_stat(path, &st) != 0) return 0;
    return (st.st_mode & _S_IFMT) == _S_IFDIR;
}

static inline int __smo_create_dir(const char* path) {
    return _mkdir(path) == 0;
}

static inline int __smo_remove_file(const char* path) {
    return remove(path) == 0;
}

/* ── console open/close ── */
static inline FILE* __smo_open_console(void) {
    AllocConsole();
    HANDLE hIn = CreateFileA(
        "CONIN$", GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL, OPEN_EXISTING, 0, NULL);
    if (hIn == INVALID_HANDLE_VALUE) return NULL;
    int fd = _open_osfhandle((intptr_t)hIn, 0);
    if (fd == -1) return NULL;
    FILE* f = _fdopen(fd, "r+");
    if (f) setvbuf(f, NULL, _IONBF, 0);
    return f;
}

static inline void __smo_close_console(FILE* f) {
    if (f) fclose(f);
    FreeConsole();
}

/* ── key press ── */
static inline int64_t __smo_next_key_press(void) {
    HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD record;
    DWORD readCount;
    int64_t code = -1;

    DWORD mode;
    GetConsoleMode(hIn, &mode);
    SetConsoleMode(hIn, mode & ~(ENABLE_LINE_INPUT | ENABLE_ECHO_INPUT));

    while (1) {
        if (!ReadConsoleInputW(hIn, &record, 1, &readCount)) break;
        if (record.EventType == KEY_EVENT && record.Event.KeyEvent.bKeyDown) {
            code = ((int64_t)record.Event.KeyEvent.wVirtualKeyCode << 16)
                 |  (int64_t)record.Event.KeyEvent.wVirtualScanCode;
            break;
        }
    }

    SetConsoleMode(hIn, mode);
    return code;
}

#endif /* _WIN32 || _WIN64 */
#endif /* SMOLAMBDA_OS_WINDOWS_H */