// Utilities.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

#pragma once

#include <stdio.h>
#include <string.h>

#ifdef __LINUX__
#	define sprintf_s		snprintf
#	define vsprintf_s		vsnprintf
#	define strcat_s( d, n, s )	strncat( d, s, (n) )
#	define strcpy_s( d, n, s )	strncpy( d, s, (n) )
#	define strncpy_s( d, n, s, x )	strncpy( d, s, ( (n) < (x) ? (n) : (x) ) )
#endif //__LINUX__

namespace Utilities
{
	class List;
	class MultiList;
	template< typename EntryType > class Map;
	template< typename Type > class ScopeDelete;
}

#include "List.h"
#include "MultiList.h"
#include "Map.h"
#include "ScopeDelete.h"

// TODO: Move these out of the Utilities stuff.
#define PRINT_BUFFER_SIZE_LARGE		( 1024 * 16 )
#define PRINT_BUFFER_SIZE_SMALL		( 1024 * 8 )

// Utilities.h
