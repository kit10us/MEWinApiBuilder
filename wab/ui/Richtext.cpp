// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#include <wab/ui/Richtext.h>
#include <Richedit.h>

using namespace ui;

Richtext::Richtext( HWND parent, HWND handle, create::IControl * createControl )
	: Control( parent, handle, createControl )
{
}

Richtext::~Richtext()
{
}
