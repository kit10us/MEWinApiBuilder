// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#pragma once

#include <wab/ui/Control.h>
#include <string>

namespace ui
{
	class Richtext : public Control
	{
	public:		   			
		Richtext( HWND parent, HWND handle, create::IControl * createControl );

		virtual ~Richtext();
	};
}