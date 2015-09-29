#include "Header.h"

//Cell::Cell(position l, bool h, bool b, bool g, bool glim, bool w, bool s)
//{
//	location = l;
//	pit = h;
//	breeze = b;
//	gold = g;
//	glimmer = glim;
//	wumpus = w;
//	stench = s;
//}

Cell::Cell()
{
	pit = false;
	breeze = false;
	gold = false;
	glimmer = false;
	wumpus = false;
	stench = false;
}

position Cell::setLocation(int x, int y)
{
	location = { x,y };
	return location;
}
position Cell::getLocation()
{
	return location;
}

Player::Player(position l, bool a)
{
	location = l;
	alive = a;
}

position Player::setLocation(int x, int y)
{
	location = { x,y };
	return location;
}

position Player::getLocation()
{
	return location;
}
