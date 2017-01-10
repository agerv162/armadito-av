/***

Copyright (C) 2015, 2016 Teclib'

This file is part of Armadito core.

Armadito core is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Armadito core is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with Armadito core.  If not, see <http://www.gnu.org/licenses/>.

***/

#include <libjrpc/marshall.h>

JRPC_ENUM(a6o_file_status)
	JRPC_ENUM_VALUE(A6O_FILE_UNDECIDED)
	JRPC_ENUM_VALUE(A6O_FILE_CLEAN)
	JRPC_ENUM_VALUE(A6O_FILE_UNKNOWN_TYPE)
	JRPC_ENUM_VALUE(A6O_FILE_EINVAL)
	JRPC_ENUM_VALUE(A6O_FILE_IERROR)
	JRPC_ENUM_VALUE(A6O_FILE_SUSPICIOUS)
	JRPC_ENUM_VALUE(A6O_FILE_WHITE_LISTED)
	JRPC_ENUM_VALUE(A6O_FILE_MALWARE)
JRPC_ENUM_END

JRPC_ENUM(a6o_update_status)
	JRPC_ENUM_VALUE(A6O_UPDATE_OK)
	JRPC_ENUM_VALUE(A6O_UPDATE_LATE)
	JRPC_ENUM_VALUE(A6O_UPDATE_CRITICAL)
	JRPC_ENUM_VALUE(A6O_UPDATE_NON_AVAILABLE)
JRPC_ENUM_END

JRPC_STRUCT(a6o_base_info)
	JRPC_STRUCT_FIELD_STRING(name)
	JRPC_STRUCT_FIELD_INT(time_t, base_update_ts)
	JRPC_STRUCT_FIELD_STRING(version)
	JRPC_STRUCT_FIELD_INT(size_t, signature_count)
	JRPC_STRUCT_FIELD_STRING(full_path)
JRPC_STRUCT_END

JRPC_STRUCT(a6o_module_info)
	JRPC_STRUCT_FIELD_STRING(name)
	JRPC_STRUCT_FIELD_ENUM(a6o_update_status, mod_status)
	JRPC_STRUCT_FIELD_INT(time_t, mod_update_ts)
	JRPC_STRUCT_FIELD_PTR_ARRAY(a6o_base_info, base_infos)
JRPC_STRUCT_END
