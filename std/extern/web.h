#ifndef SMOLAMBDA_OS_EMSCRIPTEN_H
#define SMOLAMBDA_OS_EMSCRIPTEN_H

#if defined(__EMSCRIPTEN__)

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>

#include <emscripten.h>
#include <emscripten/fetch.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline void __smo_exact_sleep(double duration) { (void)duration; }

static double __smo_time_start_e = 0.0;
static int __smo_time_initialized_e = 0;

static inline double __smo_time_eta(void) {
    double now = (double)clock() / CLOCKS_PER_SEC;
    if (!__smo_time_initialized_e) {
        __smo_time_start_e = now;
        __smo_time_initialized_e = 1;
        return 0.0;
    }
    return now - __smo_time_start_e;
}

static volatile int __smo_fs_ready = 0;

EM_JS(void, __smo_fs_initialize, (int *ready_ptr), {
    try { 
        FS.mkdir("/smol"); 
        FS.mount(IDBFS, {}, "/smol");
    } catch (e) {}

    var synced = false;

    FS.syncfs(true, function(err) {
        if (err) console.error("IDBFS syncfs error:", err);
        synced = true;
        HEAP32[ready_ptr >> 2] = 1;
    });

    setTimeout(function() {
        if (!synced) {
            console.warn("IDBFS syncfs timed out, continuing without persisted data");
            HEAP32[ready_ptr >> 2] = 1;
        }
    }, 3000);
});

static inline int __smo_fs_initialized(void) {
    return __smo_fs_ready;
}

EM_JS(void, __smo_flush_fs, (), {
    FS.syncfs(false, function(err) {});
});

static inline uint64_t __smo_file_size(FILE *fp) {
    if (!fp) return 0;
    struct stat st;
    if (fstat(fileno(fp), &st) == 0) return (uint64_t)st.st_size;
    return 0;
}

/* every local filesystem path in this file needs to live under smol/,
   since that's the only mounted/persisted directory. this builds that
   full path from a caller-supplied relative path. */
static inline int __smo_full_path(char *out, size_t outsz, const char *path) {
    int n = snprintf(out, outsz, "/smol/%s", path);
    return n > 0 && (size_t)n < outsz;
}

static inline int __smo_create_dir(const char *path) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return 0;
    return mkdir(full, 0777) == 0;
}

static inline int __smo_remove_file(const char *path) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return 0;
    return remove(full) == 0;
}

static inline int __smo_is_dir(const char *path) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return 0;
    struct stat st;
    return stat(full, &st) == 0 && S_ISDIR(st.st_mode);
}

#define __SMO_MAX_PENDING 16

enum {
    __SMO_FETCH_PENDING = 0,
    __SMO_FETCH_SUCCESS = 1,
    __SMO_FETCH_FAILED = -1
};

struct __smo_pending_fetch {
    char path[1024];
    volatile int state;
    volatile int in_use;
    uint64_t request_id;
};

struct __smo_fetch_ctx {
    struct __smo_pending_fetch *slot;
    uint64_t request_id;
};

static struct __smo_pending_fetch __smo_pending[__SMO_MAX_PENDING];
static uint64_t __smo_request_counter = 0;

/* creates directories under smol/ leading up to full_path (which is
   already smol/-prefixed) */
static inline void __smo_mkdirs(const char *full_path) {
    char tmp[1024];
    size_t n = strlen(full_path);
    if (n >= sizeof(tmp)) return;

    memcpy(tmp, full_path, n + 1);

    for (char *p = tmp + 1; *p; ++p) {
        if (*p == '/') {
            *p = '\0';
            mkdir(tmp, 0777);
            *p = '/';
        }
    }
}

static struct __smo_pending_fetch *__smo_pending_find(const char *path) {
    for (int i = 0; i < __SMO_MAX_PENDING; ++i)
        if (__smo_pending[i].in_use && strcmp(__smo_pending[i].path, path) == 0)
            return &__smo_pending[i];

    return NULL;
}

static struct __smo_pending_fetch *__smo_pending_alloc(void) {
    static int next = 0;

    for (int i = 0; i < __SMO_MAX_PENDING; ++i) {
        if (!__smo_pending[i].in_use)
            return &__smo_pending[i];
    }

    /* nothing free — forcibly reuse the round-robin slot and mark
       whatever it was tracking as failed so nothing waits on it forever */
    struct __smo_pending_fetch *p = &__smo_pending[next];
    next = (next + 1) % __SMO_MAX_PENDING;

    p->state = __SMO_FETCH_FAILED;

    return p;
}

static void __smo_fetch_onsuccess(emscripten_fetch_t *fetch) {
    struct __smo_fetch_ctx *ctx = (struct __smo_fetch_ctx *)fetch->userData;
    struct __smo_pending_fetch *p = ctx->slot;

    if (p->request_id != ctx->request_id) {
        free(ctx);
        emscripten_fetch_close(fetch);
        return;
    }

    char full[1024];

    if (!__smo_full_path(full, sizeof(full), p->path)) {
        p->state = __SMO_FETCH_FAILED;
        p->in_use = 0;
        free(ctx);
        emscripten_fetch_close(fetch);
        return;
    }

    __smo_mkdirs(full);

    FILE *f = fopen(full, "wb");

    if (f) {
        fwrite(fetch->data, 1, fetch->numBytes, f);
        fclose(f);
        __smo_flush_fs();
        p->state = __SMO_FETCH_SUCCESS;
    } else {
        p->state = __SMO_FETCH_FAILED;
    }

    p->in_use = 0;

    free(ctx);
    emscripten_fetch_close(fetch);
}

static void __smo_fetch_onerror(emscripten_fetch_t *fetch) {
    struct __smo_fetch_ctx *ctx = (struct __smo_fetch_ctx *)fetch->userData;
    struct __smo_pending_fetch *p = ctx->slot;

    if (p->request_id == ctx->request_id) {
        p->state = __SMO_FETCH_FAILED;
        p->in_use = 0;
    }

    free(ctx);
    emscripten_fetch_close(fetch);
}

static inline int __smo_is_file(const char* path) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return 0;
    struct stat st;
    if (stat(full, &st) != 0) return 0;
    return S_ISREG(st.st_mode);
}

static inline int __smo_await_file(const char *path) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return 0;

    struct stat st;
    if (stat(full, &st) == 0 && S_ISREG(st.st_mode))
        return 1;

    /* pending-fetch bookkeeping is keyed on the original (non-prefixed)
       path, since that's also what's used as the fetch URL */
    struct __smo_pending_fetch *p = __smo_pending_find(path);

    if (!p) {
        p = __smo_pending_alloc();

        memset(p, 0, sizeof(*p));

        p->in_use = 1;
        p->state = __SMO_FETCH_PENDING;
        p->request_id = ++__smo_request_counter;

        strncpy(p->path, path, sizeof(p->path) - 1);
        p->path[sizeof(p->path) - 1] = '\0';

        struct __smo_fetch_ctx *ctx = malloc(sizeof(*ctx));

        if (!ctx)
            return 0;

        ctx->slot = p;
        ctx->request_id = p->request_id;

        emscripten_fetch_attr_t attr;

        emscripten_fetch_attr_init(&attr);

        strcpy(attr.requestMethod, "GET");
        attr.attributes = EMSCRIPTEN_FETCH_LOAD_TO_MEMORY;
        attr.userData = ctx;
        attr.onsuccess = __smo_fetch_onsuccess;
        attr.onerror = __smo_fetch_onerror;

        emscripten_fetch(&attr, path);

        emscripten_sleep(0);

        return 0;
    }

    if (p->state == __SMO_FETCH_PENDING) {
        emscripten_sleep(0);
        return 0;
    }

    if (p->state == __SMO_FETCH_FAILED) {
        return 0;
    }

    if (p->state == __SMO_FETCH_SUCCESS) {
        return stat(full, &st) == 0 && S_ISREG(st.st_mode);
    }

    return 0;
}
static inline FILE *__smo_fopen(const char *path, const char *mode) {
    char full[1024];
    if (!__smo_full_path(full, sizeof(full), path)) return NULL;
    return fopen(full, mode);
}

#define fopen(path, mode) __smo_fopen(path, mode)
static inline FILE *__smo_open_console(void) { return NULL; }
static inline void __smo_close_console(FILE *f) { (void)f; }
static inline int __smo_has_display(void) { return 0; }
static inline int64_t __smo_next_key_press(void) { return 0; }

#ifdef __cplusplus
}
#endif

#endif /* __EMSCRIPTEN__ */
#endif /* SMOLAMBDA_OS_EMSCRIPTEN_H */