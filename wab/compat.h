// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#pragma once

#include <Windows.h>
#include <string>

#ifdef _WIN64

#	define COMPAT_SIZE(A)				(UINT_PTR)(A)
#	define COMPAT_PSTR(A)				(LPSTR)(UINT_PTR)(A)
#	define COMPAT_GetWindowLong(A, B)	(UINT_PTR)(GetWindowLong(A, B))
#	define COMPAT_GetClassInfo(A, B, C)	GetClassInfo( A, (LPSTR)(UINT_PTR)B, C )
#	define COMPAT_GWL_HINSTANCE			GWLP_HINSTANCE
#	define WindowsStringPtr LPSTR


#else // Windows 32

#	define COMPAT_SIZE(A)				(A)
#	define COMPAT_PSTR(A)				A
#	define COMPAT_GetWindowLong(A, B)	GetWindowLong(A, B)
#	define COMPAT_GetClassInfo(A, B, C)	GetClassInfo( A, B, C )
#	define COMPAT_GWL_HINSTANCE		GWL_HINSTANCE
#	define WindowsStringPtr CHAR

#endif

namespace wab
{
#ifdef _WIN64

	std::string ToWindowsString(std::wstring text);

#else // Windows 32

	std::string ToWindowsString(std::wstring text);

#endif
}