#include "Classes.h"

Cell::Cell()
{
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