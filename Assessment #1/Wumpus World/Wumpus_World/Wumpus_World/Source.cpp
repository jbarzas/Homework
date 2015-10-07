#include "Classes.h"

Cell::Cell(position l)
{
	location = l;
}

Player::Player(position l, bool a)
{
	location = l;
	alive = a;
}

position Player::getLocation()
{
	return position();
}