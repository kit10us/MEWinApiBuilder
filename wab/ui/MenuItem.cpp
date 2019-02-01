// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#include <wab/ui/MenuItem.h>
#include <wab/create/Create_Menu.h>

using namespace ui;

MenuItem::MenuItem( std::string name, int id, create::MenuItem createMenuItem )
	: m_name{ name }
	, m_id{ id }
	, m_createMenuItem{ createMenuItem }
{
}

std::string MenuItem::GetName() const
{
	return m_name;
}

int MenuItem::GetId() const
{
	return m_id;
}
