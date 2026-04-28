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

# Run via python (e.g., for development):
# python -m smoll test.s
#
# Can precompile with mypyc with, but this messes with the nuitka binary:
# mypyc src/dist.py
#
# Compile with:
# nuitka --standalone --onefile --lto=yes --output-filename=smoll --python-flag=no_asserts --python-flag=no_site --python-flag=static_hashes smoll.py

import src.dist