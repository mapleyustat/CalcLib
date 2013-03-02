// Override.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

#pragma once

#ifdef __LINUX__

#define GCC_VERSION	( \
			__GNUC__ * 1000 + \
			__GNUC_MINOR * 100 + \
			__GNUC_PATCHLEVEL \
			)

#if GCC_VERSION < 40800
#	define OVERRIDE
#else
#	define OVERRIDE	override
#endif //GCC_VERSION

#else //__LINUX__

#define OVERRIDE override

#endif //__LINUX__

// Override.h
