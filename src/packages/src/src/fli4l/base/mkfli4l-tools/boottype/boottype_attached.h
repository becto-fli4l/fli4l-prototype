/*----------------------------------------------------------------------------
 *  boottype_attached.h - functions for handling attached boot types
 *
 *  Copyright (c) 2012-2016 The fli4l team
 *
 *  This file is part of fli4l.
 *
 *  fli4l is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  fli4l is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with fli4l.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Last Update: $Id: boottype_attached.h 44026 2016-01-14 21:14:28Z florian $
 *----------------------------------------------------------------------------
 */

#ifndef MKFLI4L_BOOTTYPE_ATTACHED_H_
#define MKFLI4L_BOOTTYPE_ATTACHED_H_

#include "boottype.h"

/**
 * Returns a backend for attached boot types.
 * @return
 *  A pointer to an boot_type_backend_t object for attached boot types.
 */
struct boot_type_backend_t *create_attached_boot_type_backend(void);

#endif
