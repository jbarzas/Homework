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
	Cell(position, bool, bool, bool, bool ,bool, bool);
	position* locationPtr = &location;
	bool* pitPtr = &pit;
	bool* breezePtr = &breeze;
	bool* goldPtr = &gold;
	bool* glimmerPtr = &glimmer;
	bool* wumpusPtr = &wumpus;
	bool* stenchPtr = &stench;
};

class Player
{
	private:
		position location;
		bool alive;

	public:
		Player(position, bool);
		position* locationPtr = &location;
		bool* alivePtr = &alive;
};