/* Copy extended attributes between files - default check callback */

/* Copyright (C) 2003 Andreas Gruenbacher <agruen@suse.de>, SuSE Linux AG.

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#include <string.h>
#include "error_context.h"
#include "attr/libattr.h"

int
attr_copy_check_permissions(const char *name, struct error_context *ctx)
{
	return attr_copy_action(name, ctx) == 0;
}
