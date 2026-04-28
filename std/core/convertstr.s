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

local import "std/core/numbers.s"
local import "std/core/convert.s"
local import "std/core/range.s"
local import "std/core/string.s"

def console()
    return class()

def int(console)
    {builtins::int number=0;builtins::char ch=0;}
    {builtins::int result=scanf("%lld%c", &number, &ch);}
    {builtins::bool success = (result == 2 && (ch == 13 || ch == 10));}
    if not success
        fail "user input was not an int" 
    return number

def nat(console)
    {builtins::nat number = 0; builtins::char ch = 0;}
    {builtins::bool success = 0;}
    {builtins::char first = getchar();}
    {if(first != "-"[0] && first != EOF) {ungetc(first, stdin);builtins::int result = scanf("%lu%c", &number, &ch);success = (result == 2 && (ch == 13 || ch == 10));}}
    if not success
        fail "user input was not a nat"
    return number

def float(console)
    {builtins::float number = 0; builtins::char ch = 0;}
    {builtins::int result = scanf("%lf%c", &number, &ch);}
    {builtins::bool success = (result == 2 && (ch == 13 || ch == 10));}
    if not success
        fail "user input was not a float"
    return number

def int(str s)
    if 0==len s
        fail "invalid int conversion from empty string"
    number = mut int 0
    i = mut 0
    negative = s[0]==char "-"
    if negative
        i = i+1
        if i==len s
            fail "invalid int conversion from string with only a sign"
    else if s[i]==char "+"
        i = i+1
        if i==len s
            fail "invalid int conversion from string with only a sign"
    while i<len s
        c = s[i]
        {builtins::bool is_digit=c>='0' && c<='9'; builtins::int digit=c-'0';}
        if not is_digit
            fail "invalid integer int from non-number string"
        number = number*int(10)+digit
        i = i+1
    if negative 
        number = int(0)-number
    return const number

def nat(str s)
    if 0==len s
        fail "invalid nat conversion from empty string"
    number = mut nat 0
    it = range len s
    while try i=next it
        c = s[i]
        {builtins::bool is_digit=c>='0' && c<='9'; builtins::nat digit=c-'0';}
        if not is_digit
            fail "invalid nat conversion from non-number string"
        number = number*10+digit
    return const number

def int(cstr s)
    return int str s

def nat(cstr s)
    return nat str s

# def convert(@access f64, String _s)
#     s = _s.str()
#     @c_body{
#         f64 number = 0.0;
#         bool success = true;
#         bool negative = false;

#         if(s__length == 0) 
#             success = false;
#         else {
#             char *chars = (char*)s__contents;
#             u64 i = 0;
#             if(chars[0] == '-') {
#                 negative = true;
#                 i++;
#                 if(i == s__length) success = false;
#             } else if(chars[0] == '+') {
#                 i++;
#                 if(i == s__length) success = false;
#             }
#             for(; i < s__length && success; i++) {
#                 char c = chars[i];
#                 if(c >= '0' && c <= '9') {number = number * 10.0 + (c - '0');} 
#                 else if(c == '.') {i++;break;} 
#                 else {success = false;}
#             }
#             if(success && i < s__length) {
#                 f64 frac = 0.0;
#                 f64 base = 0.1;
#                 for(; i < s__length && success; i++) {
#                     char c = chars[i];
#                     if(c >= '0' && c <= '9') {
#                         frac += (c - '0') * base;
#                         base *= 0.1;
#                     } else if(c == 'e' || c == 'E') {
#                         i++;
#                         break;
#                     } else { success = false; }
#                 }
#                 number += frac;
#             }
#             if(success && i < s__length) {
#                 bool expNeg = false;
#                 if(chars[i] == '-') {expNeg = true; i++;} 
#                 else if(chars[i] == '+') {i++;}
#                 if(i == s__length) success = false;
#                 i64 expVal = 0;
#                 for(; i < s__length && success; i++) {
#                     char c = chars[i];
#                     if(c >= '0' && c <= '9') {expVal = expVal * 10 + (c - '0');} 
#                     else { success = false; }
#                 }
#                 if(expNeg) expVal = -expVal;
#                 number *= pow(10.0, expVal);
#             }
#             if(negative) 
#                 number = -number;
#         }
#     }
#     if success.not() 
#         @c_fail{printf("Error: invalid floating-point conversion from string\n");}
#     return number
