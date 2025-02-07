/* vim: set tabstop=8 shiftwidth=4 softtabstop=4 expandtab smarttab colorcolumn=80: */
/*
 * Copyright 2016 Red Hat, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <jansson.h>

// Supports json_auto_t on older jansson versions.
#if (defined(__GNUC__) || defined(__clang__)) && !defined(json_auto_t)
static JSON_INLINE
void json_decrefp(json_t **json)
{
    if(json) {
        json_decref(*json);
        *json = NULL;
    }
}

#define json_auto_t json_t __attribute__((cleanup(json_decrefp)))
#endif
