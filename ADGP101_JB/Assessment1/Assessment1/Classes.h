#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>

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
	Gold();
};

// creates a class for the Wumpus that contains a position struct for location.
// contains a function to create the Wumpus.
class Wumpus
{
public:
	position location;
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

#endif