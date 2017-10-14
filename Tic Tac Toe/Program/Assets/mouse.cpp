/****************************************************************************************** 
 *	Chili DirectX Framework Version 11.12.17											  *	
 *	Keyboard.cpp																		  *
 *	Copyright 2011 PlanetChili.net														  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "Mouse.h"


MouseClient::MouseClient( const MouseServer& kServer )
	: server( mServer )
{}

bool MouseClient::UpIsPressed() const
{
	return server.upIsPressed;
}
bool MouseClient::DownIsPressed() const
{
	return server.downIsPressed;
}
bool MouseClient::LeftIsPressed() const
{
	return server.leftIsPressed;
}
bool MouseClient::RightIsPressed() const
{
	return server.rightIsPressed;
}
bool MouseClient::SpaceIsPressed() const
{
	return server.spaceIsPressed;
}
bool MouseClient::EnterIsPressed() const
{
	return server.enterIsPressed;
}



MouseServer::MouseServer()
:	upIsPressed( false ),
	downIsPressed( false ),
	leftIsPressed( false ),
	rightIsPressed( false ),
	spaceIsPressed( false ),
	enterIsPressed( false )
{}

void MouseServer::OnUpPressed()
{
	upIsPressed = true;
}
void MouseServer::OnDownPressed()
{
	downIsPressed = true;
}
void MouseServer::OnLeftPressed()
{
	leftIsPressed = true;
}
void MouseServer::OnRightPressed()
{
	rightIsPressed = true;
}
void MouseServer::OnSpacePressed()
{
	spaceIsPressed = true;
}
void MouseServer::OnEnterPressed()
{
	enterIsPressed = true;
}

void MouseServer::OnUpReleased()
{
	upIsPressed = false;
}
void MouseServer::OnDownReleased()
{
	downIsPressed = false;
}
void MouseServer::OnLeftReleased()
{
	leftIsPressed = false;
}
void MouseServer::OnRightReleased()
{
	rightIsPressed = false;
}
void MouseServer::OnSpaceReleased()
{
	spaceIsPressed = false;
}
void MouseServer::OnEnterReleased()
{
	enterIsPressed = false;
}