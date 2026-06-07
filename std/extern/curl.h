#include <curl/curl.h>
#include <stdlib.h>
#include <string.h>

typedef struct { char *data; size_t size; size_t fixed_size;} __smoll_buf_for_callback;
static size_t __smoll_write_curl_callback(void *ptr, size_t size, size_t nmemb, void *userdata) {
    __smoll_buf_for_callback *b = (__smoll_buf_for_callback*)userdata;
    size_t incoming = size * nmemb;
    size_t new_size = b->size + incoming + 1;
    size_t fixed_size = b->fixed_size;
    if(!fixed_size) b->data = realloc(b->data, new_size);
    else if(new_size>=fixed_size) b->data=0;
    if(!b->data) return 0;
    memcpy(b->data + b->size, ptr, incoming);
    b->size += incoming;
    b->data[b->size] = 0;
    return incoming;
}