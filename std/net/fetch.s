# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

local import std.core
local import std.unsafe as unsafe
local import "std/extern/curl.h"

local def response(nat status, str body)
    return compiler::args()

def ok(response response)
    return (response.status >= 200) and (response.status < 300)

def HttpMethod("GET"|"POST" _method)
    method = compiler::value _method
    return class method

def HttpOptions(HttpMethod method, cstr|blank body, cstr|blank content_type)
    if body is blank
        body = cstr() # get a null string
    if content_type is blank
        content_type = cstr()
    return class(method, body, content_type)

def request(effect edit new|arena<char::tag>|circular<char::tag> CHARS, str|cstr _url, HttpOptions opts)
    {"-lcurl"}
    {builtins::compiler::ptr curl = curl_easy_init();}
    if not exists curl fail "curl initialization failed"
    url = cstr unsafe_temp _url
    if CHARS is new
        buf = edit char[]
        pos = 0
        defer
            if exists buf.unsafe_ptr buf.unsafe_ptr.unsafe::free()
    if CHARS is arena<char::tag>
        buf = CHARS.buf
        pos = CHARS.pos
    if CHARS is circular<char::tag>
        buf = CHARS.buf
        pos = 0
    if CHARS is arena<char::tag>|circular<char::tag>
        if buf.unsafe_align.nat()!=1 fail "can only define strings on contiguous buffers"
        if buf.unsafe_offset.nat()!=0 fail "can only define strings on non-offset buffers"
    {
        __smoll_buf_for_callback __buf = {buf__unsafe_ptr, pos, buf__unsafe_size};
        struct curl_slist *__headers = NULL;
        curl_easy_setopt((CURL*)curl, CURLOPT_URL,            url);
        curl_easy_setopt((CURL*)curl, CURLOPT_CUSTOMREQUEST,  opts__method__method);
        curl_easy_setopt((CURL*)curl, CURLOPT_FOLLOWLOCATION, 1);
        curl_easy_setopt((CURL*)curl, CURLOPT_DEFAULT_PROTOCOL, "https");
        curl_easy_setopt((CURL*)curl, CURLOPT_WRITEFUNCTION,  __smoll_write_curl_callback);
        curl_easy_setopt((CURL*)curl, CURLOPT_WRITEDATA,      &__buf);
    }
    if exists opts.body
    {
        curl_easy_setopt((CURL*)curl, CURLOPT_POSTFIELDS, opts__body);
        char __ct[15 + strlen(opts__content_type) + 1];
        snprintf(__ct, sizeof(__ct), "Content-Type: %s", opts__content_type);
        __headers = curl_slist_append(__headers, __ct);
        curl_easy_setopt((CURL*)curl, CURLOPT_HTTPHEADER, __headers);
    }
    {
        builtins::nat status = 0;
        if (curl_easy_perform((CURL*)curl) == CURLE_OK)
            curl_easy_getinfo((CURL*)curl, CURLINFO_RESPONSE_CODE, &status);
        curl_easy_cleanup((CURL*)curl);
        if (__headers) curl_slist_free_all(__headers);
    }
    { builtins::bool has_read = __buf.data!=0; }
    if not has_read fail "out of memory while reading response"
    {buf__unsafe_size = __buf.size;}
    {buf__unsafe_ptr = __buf.data;}
    return response(status, str(buf, pos to buf.unsafe_size))

def get(effect edit new|arena<char::tag>|circular<char::tag> CHARS, str|cstr url)
    doc "a get request"
    return url.request HttpOptions HttpMethod type "GET"

def post(effect edit new|arena<char::tag>|circular<char::tag> CHARS, str|cstr url, str|cstr _body, cstr|blank content_type)
    doc "a post request"
    if content_type is blank
        doc "The default application/json content type is used."
        content_type = "application/json"
    body = cstr unsafe_temp _body
    return url.request HttpOptions(HttpMethod type "POST", body, content_type)