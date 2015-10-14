#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <fstream>
#include "time.h"

using namespace std;

// creates a struct that contains two intergers for other classes to use as a position for location.
struct position
{
	int x;
	int y;
};

// creates a class that is a grid cell that contains a position struct for location,
// contains a fucntion to create cells to build the grid with.
class Cell
{
public:
	position location;
	Cell();
};

// creates a class for the players character that contains a position struct for location,
// contains a function to create a player character,
// contains two bool variables to hold the information on wether the player is alive or has gold.
class Player
{
public:
	position location;
	bool alive;
	bool gold;
	Player();
};

// creates a class for the Gold that contains a position struct for location.
// contains a function to create the gold.
class Gold
{
public:
	position location;
	bool onGround = true;
	Gold();
};

// creates a class for the Wumpus that contains a position struct for location.
// contains a function to create the Wumpus.
class Wumpus
{
public:
	position location;
	bool alive;
	Wumpus(position);
	Wumpus();
};

// creates a class for the Wumpus that contains a position struct for location.
// contains a fucntion to create the Wumpus and give it position.
class Pit
{
public:
	position location;
	Pit(position);
};

class Arrow
{
public:
	position location;
	Arrow();
	bool shootArrow(Arrow, Player, Wumpus);
};

class Scanner
{
public:
	int charge;
	Scanner();
	void useScanner(Scanner, Player, Pit[], Wumpus, Gold);
};

#endif