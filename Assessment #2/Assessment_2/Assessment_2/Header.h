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

public:
	int x;
	int y;
	//Cell(position, bool, bool, bool, bool, bool, bool);
	Cell();
	position* locationPtr = &location;
	bool* pitPtr = &pit;
	bool* breezePtr = &breeze;
	bool* goldPtr = &gold;
	bool* glimmerPtr = &glimmer;
	bool* wumpusPtr = &wumpus;
	bool* stenchPtr = &stench;
	position setLocation(int, int);
	position getLocation();
};

class Player
{
private:
	position location;
	bool alive;

public:
	Player(position, bool);
	position setLocation(int x, int y);
	position* locationPtr = &location;
	bool* alivePtr = &alive;
	position getLocation();
};