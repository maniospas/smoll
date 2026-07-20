#ifdef _WIN32
#include <windows.h>
typedef CRITICAL_SECTION mutex_t;
typedef HANDLE thread_t;
typedef DWORD (WINAPI *thread_func_t)(LPVOID);

void mutex_init(mutex_t *m)    { InitializeCriticalSection(m); }
void mutex_lock(mutex_t *m)    { EnterCriticalSection(m); }
void mutex_unlock(mutex_t *m)  { LeaveCriticalSection(m); }
void mutex_destroy(mutex_t *m) { DeleteCriticalSection(m); }

_Static_assert(sizeof(thread_t) <= sizeof(void*), "thread_t must fit in a void*");

void *thread_create(thread_func_t func, void *arg) {
    HANDLE h = CreateThread(NULL, 0, func, arg, 0, NULL);
    void *out = NULL;
    memcpy(&out, &h, sizeof(h)); // NULL bits on failure since h == NULL
    return out;
}
void thread_join(void *handle) {
    thread_t t;
    memcpy(&t, &handle, sizeof(t));
    WaitForSingleObject(t, INFINITE);
    CloseHandle(t);
}

#else
#include <pthread.h>
#include <string.h>
typedef pthread_mutex_t mutex_t;
typedef pthread_t thread_t;
typedef void *(*thread_func_t)(void *);

void mutex_init(mutex_t *m) {
    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(m, &attr);
    pthread_mutexattr_destroy(&attr);
}
void mutex_lock(mutex_t *m)    { pthread_mutex_lock(m); }
void mutex_unlock(mutex_t *m)  { pthread_mutex_unlock(m); }
void mutex_destroy(mutex_t *m) { pthread_mutex_destroy(m); }

_Static_assert(sizeof(thread_t) <= sizeof(void*), "thread_t must fit in a void*");

void *thread_create(thread_func_t func, void *arg) {
    thread_t t;
    void *out = NULL; // zero bits = failure sentinel
    if (pthread_create(&t, NULL, func, arg) != 0) {
        return out;
    }
    memcpy(&out, &t, sizeof(t));
    return out;
}
void thread_join(void *handle) {
    thread_t t;
    memcpy(&t, &handle, sizeof(t));
    pthread_join(t, NULL);
}

#endif