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
public:
	position location;
	Cell(position);
};

class Player
{
public:
	position location;
	bool alive;
	Player(position, bool);
	position getLocation();
};