/*
 *  libfork, a base library for the Fork language
 *  Copyright (C) Marco Cilloni <marco.cilloni@yahoo.com> 2014, 2015, 2016
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *  Exhibit B is not attached; this software is compatible with the
 *  licenses expressed under Section 1.12 of the MPL v2.
 *
 */

#include <inttypes.h>
#include <stdio.h>


void outint(uint64_t n) {
  printf("%" PRIu64, n);
}
