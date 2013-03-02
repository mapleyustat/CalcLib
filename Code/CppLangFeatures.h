// CppLangFeatures.h

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

// CppLangFeatures.h
