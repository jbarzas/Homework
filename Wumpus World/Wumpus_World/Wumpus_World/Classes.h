#pragma once
#include <iostream>
using namespace std;

struct position
{
	int x;
	int y;
};

class Cell
{
private:
	position location;
	bool pit;
	bool breeze;
	bool gold;
	bool glimmer;
	bool wumpus;
	bool stench;
	bool robot;

public:
	Cell(position, bool, bool, bool, bool ,bool, bool, bool);
	bool getRobot();
	bool setRobot(bool);
	bool getBreeze();
	bool getStench();
	bool getGlimmer();
};
