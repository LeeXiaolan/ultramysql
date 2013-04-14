/* Copyright (c) 2006, 2010, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA */

#ifndef PASSWORD_INCLUDED
#define PASSWORD_INCLUDED

#include <stddef.h>
#define SCRAMBLE_LENGTH_323 8
typedef unsigned char uchar;
typedef unsigned int  uint;
typedef unsigned long ulong;

#ifdef __cplusplus
extern "C" {
#endif
struct rand_struct {
  unsigned long seed1,seed2,max_value;
  double max_value_dbl;
};

void scramble_323(char *to, const char *message, const char *password);

#ifdef __cplusplus
}
#endif
#endif /* PASSWORD_INCLUDED */
