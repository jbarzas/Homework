#include "Classes.h"

Cell::Cell(position l, bool h, bool b, bool g, bool glim, bool w, bool s, bool r)
{
	location = l;
	pit = h;
	breeze = b;
	gold = g;
	glimmer = glim;
	wumpus = w;
	stench = s;
	robot = r;
}

bool Cell::getRobot()
{
	return robot;
}

bool Cell::setRobot(bool r)
{
	robot = r;
	return robot;
}

bool Cell::getBreeze()
{
	return breeze;
}

bool Cell::getStench()
{
	return stench;
}

bool Cell::getGlimmer()
{
	return glimmer;
}
