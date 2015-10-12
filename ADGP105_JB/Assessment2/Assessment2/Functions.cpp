#include "Classes.h"

// constructor function for the Cell class.
Cell::Cell()
{
}

/* constructor function for the Player class.
 defines the Players position on creation as being at (0, 0) to give it a fixed start location.
 defines the Player on creation as alive.
 defines the Player on creation as not having the gold.
*/
Player::Player()
{
	location = { 0,0 };
	alive = true;
	gold = false;
}

// constructor function for the Gold class.
// defines the Golds position on creation as being at (3, 1) to give a fixed start location.
Gold::Gold()
{
	location = { 3,1 };
}

// constructor function for the Wumpus class.
// defines the Wumpus position on creation as being at (2, 1) to give a fixed start location.
Wumpus::Wumpus()
{
	location = { 2,1 };
	alive = true;
}

// constructor function for the Pit class.
// function takes in the argument of a position struct to be bale to make multiple pits at different locations.
Pit::Pit(position p)
{
	location = p;
}

Arrow::Arrow()
{
	location = { 0, 0 };
}