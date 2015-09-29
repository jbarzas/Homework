#include "Classes.h"

Cell::Cell(position l, bool h, bool b, bool g, bool glim, bool w, bool s)
{
	location = l;
	pit = h;
	breeze = b;
	gold = g;
	glimmer = glim;
	wumpus = w;
	stench = s;
}

Player::Player(position l, bool a)
{
	location = l;
	alive = a;
}