/*
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
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

#include "chpltypes.h"

// TODO: header ifdef guard
// TODO: these should have "plugin" in the name

// create a plugin channel to attach to the qio channel
syserr chpl_qio_setup_plugin_channel(void* file, void** plugin_ch, int64_t start, int64_t end, qio_channel_t* qio_ch);
// Reads amt bytes (or more) into the channel buffer
syserr chpl_qio_read_atleast(void* plugin_ch, int64_t amt);
// Writes amt bytes from the channel buffer
syserr chpl_qio_write(void* plugin_ch, int64_t amt);
// close the channel
syserr chpl_qio_channel_close(void* ch);

// get the length of a file
syserr chpl_qio_filelength(void* file, int64_t* length);
// get the path to a file
syserr chpl_qio_getpath(void* file, const char** str, int64_t* len);
// sync the file to disk
syserr chpl_qio_fsync(void* file);
// get the optimial i/o size for the channel
syserr chpl_qio_get_chunk(void* file, int64_t* length);
// get the locales for a region
syserr chpl_qio_get_locales_for_region(void* file, int64_t start, int64_t end,
    const char*** localeNames, int64_t* nLocales);

// close a file
syserr chpl_qio_file_close(void* file);
