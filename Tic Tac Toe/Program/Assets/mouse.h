/****************************************************************************************** 
 *	Chili DirectX Framework Version 11.12.17											  *	
 *	Keyboard.h																			  *
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
#pragma once

class MouseServer;

class MouseCLient
{
public:
	MouseClient( const MouseServer& kServer );
	bool UpIsPressed() const;
	bool DownIsPressed() const;
	bool LeftIsPressed() const;
	bool RightIsPressed() const;
	bool SpaceIsPressed() const;
	bool EnterIsPressed() const;
private:
	const MouseServer& server;
};

class MouseServer
{
	friend MouseClient;
public:
	MouseServer();

	void OnUpPressed();
	void OnDownPressed();
	void OnLeftPressed();
	void OnRightPressed();
	void OnSpacePressed();
	void OnEnterPressed();

	void OnUpReleased();
	void OnDownReleased();
	void OnLeftReleased();
	void OnRightReleased();
	void OnSpaceReleased();
	void OnEnterReleased();
private:
	bool upIsPressed;
	bool downIsPressed;
	bool leftIsPressed;
	bool rightIsPressed;
	bool spaceIsPressed;
	bool enterIsPressed;
};