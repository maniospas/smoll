# Copyright 2025-2026 maniospas
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

RED   = "\033[31m"
GREEN = "\033[32m"
YELLOW= "\033[33m"
PURPLE= "\033[35m"
RESET = "\033[0m"
symbols = "=\\/+-*@<>!%&#!(){}[]:.',;|"
END_TOKEN = "...]" # impossible for something else to be tokenized as this
START_TOKEN = "[..." # impossible for something else to be tokenized as this
err_code_table: dict[str,int] = dict()
err_code_table["success"] = 0
debug_mode = True
repositories: dict[str, str] = dict()

class CompfailException(Exception): pass
class FastReturnException(Exception): pass
class FatalException(Exception): pass

def pretty_name(name: str):
    return name.replace("__", ".")

temps: list[str]= list()
def create_temp():
    temp = "__temp"+str(len(temps))+"v"
    temps.append(temp)
    return temp

def longest_common_prefix(strings: list[str]) -> str:
    if not strings: return ""
    strings = [s for s in strings]
    strings.sort()
    first, last = strings[0], strings[-1]
    i = 0
    while i < len(first) and first[i] == last[i]: i += 1
    prefix = first[:i]
    if "____temp" in prefix: prefix = prefix[:prefix.rfind("____temp")+2]
    return prefix


class CodeSegment:
    def tostring(self): return ""
    def copy(self, prefix: str): return self
    def is_temp(self): return False

class CodeWord(CodeSegment):
    def __init__(self, name: str): self.name = name
    def tostring(self): return self.name
    def copy(self, prefix: str): return self
