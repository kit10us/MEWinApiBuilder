// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#pragma once

#include <wab/ui/POD.h>
#include <wab/ui/IControl.h>

namespace ui
{
	namespace message
	{
		struct ControlCommand
		{
			IControl* control;
			int code;

			bool IsFor( std::string _name ) const
			{
				return unify::string::StringIs( control->GetName(), _name );
			}
		};
	}
}