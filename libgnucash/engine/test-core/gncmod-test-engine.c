/*********************************************************************
 * gncmod-test-engine.c
 * module definition/initialization for the engine test infrastructure
 *
 * Copyright (c) 2001 Linux Developers Group, Inc.
 *********************************************************************/
/********************************************************************\
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 51 Franklin Street, Fifth Floor    Fax:    +1-617-542-2652       *
 * Boston, MA  02110-1301,  USA       gnu@gnu.org                   *
 *                                                                  *
\********************************************************************/


#include <stdio.h>
#include <gmodule.h>

#include "gnc-module.h"
#include "gnc-module-api.h"

GNC_MODULE_API_DECL(libgncmod_test_engine)

/* version of the gnc module system interface we require */
int libgncmod_test_engine_gnc_module_system_interface = 0;

/* module versioning uses libtool semantics. */
int libgncmod_test_engine_gnc_module_current  = 0;
int libgncmod_test_engine_gnc_module_revision = 0;
int libgncmod_test_engine_gnc_module_age      = 0;


char *
libgncmod_test_engine_gnc_module_path(void)
{
    return g_strdup("gnucash/engine/test");
}

char *
libgncmod_test_engine_gnc_module_description(void)
{
    return g_strdup("GnuCash Engine test infrastructure.");
}

int
libgncmod_test_engine_gnc_module_init(int refcount)
{
    return TRUE;
}

int
libgncmod_test_engine_gnc_module_end(int refcount)
{
    return TRUE;
}
