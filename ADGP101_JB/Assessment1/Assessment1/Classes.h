#ifndef CLASSES.H
#define CLASSES.H

#include <iostream>

using namespace std;

struct position
{
	int x;
	int y;
};

class Cell
{
public:
	position location;
	Cell();
	position setLocation(int, int);
	position getLocation();
};

class Player
{
public:
	position location;
	bool alive;
	Player(position, bool);
	position setLocation(int x, int y);
	position getLocation();
};


class Gold
{
public:

};
#endif