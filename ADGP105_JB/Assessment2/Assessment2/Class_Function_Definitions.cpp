#include"Objects_Header.h"

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
	onGround = true;
}

// constructor function for the Wumpus class.
// defines the Wumpus position on creation as being at (2, 1) to give a fixed start location.
Wumpus::Wumpus(position p)
{
	location = p;
	alive = true;
}

Wumpus::Wumpus()
{
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

Scanner::Scanner()
{
	charge = 2;
}

void Scanner::useScanner(Scanner s, Player c, Pit p[], Wumpus w, Gold g)
{
	if (s.charge >= 1)
	{
		cout << "Your X, Y position is: " << c.location.x << ", " << c.location.y << endl;

		// loops through the array of Pit class instances.
		// displays the direction of the Pit from the Player with a warning.
		for (int i = 0; i < sizeof(p); i++)
		{
			if ((c.location.x + 1 == p[i].location.x) && (c.location.y == p[i].location.y))
			{

				cout << "The scanner shows a big elevation drop to the East." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x - 1 == p[i].location.x) && (c.location.y == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to your West." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x == p[i].location.x) && (c.location.y + 1 == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to the North." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x == p[i].location.x) && (c.location.y - 1 == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to the South." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x + 1 == p[i].location.x) && (c.location.y + 1 == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to the Northeast." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x - 1 == p[i].location.x) && (c.location.y + 1 == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to the Northwest." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x + 1 == p[i].location.x) && (c.location.y + 1 == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to the Southeast." << endl;
				cout << "" << endl;
			}

			else if ((c.location.x - 1 == p[i].location.x) && (c.location.y + 1 == p[i].location.y))
			{
				cout << "The scanner shows a big elevation drop to the Southwest." << endl;
				cout << "" << endl;
			}
		}

		// displays the direction of the Wumpus from the Player with a warning.
		if ((c.location.x + 1 == w.location.x) && (c.location.y == w.location.y))
		{
			cout << "The scanner detects a large life form to the East..." << endl;
			cout << "" << endl;
		}

		else if ((c.location.x - 1 == w.location.x) && (c.location.y == w.location.y))
		{
			cout << "The scanner detects a large life form to the West..." << endl;
			cout << "" << endl;
		}

		else if ((c.location.x == w.location.x) && (c.location.y + 1 == w.location.y))
		{
			cout << "The scanner detects a large life form to the North..." << endl;
			cout << "" << endl;
		}

		else if ((c.location.x == w.location.x) && (c.location.y - 1 == w.location.y))
		{
			cout << "The scanner detects a large life form to the South" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x + 1 == w.location.x) && (c.location.y + 1 == w.location.y))
		{
			cout << "The scanner detects a large life form to the Northeast" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x - 1 == w.location.x) && (c.location.y + 1 == w.location.y))
		{
			cout << "The scanner detects a large life form to the Northwest" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x + 1 == w.location.x) && (c.location.y + 1 == w.location.y))
		{
			cout << "The scanner detects a large life form to the Southeast" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x - 1 == w.location.x) && (c.location.y + 1 == w.location.y))
		{
			cout << "The scanner detects a large life form to the Southwest" << endl;
			cout << "" << endl;
		}

		// displays the direction of the Wumpus from the Gold with a message.
		if ((c.location.x + 1 == g.location.x) && (c.location.y == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the East..." << endl;
			cout << "" << endl;
		}

		else if ((c.location.x - 1 == g.location.x) && (c.location.y == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the West..." << endl;
			cout << "" << endl;
		}

		else if ((c.location.x == g.location.x) && (c.location.y + 1 == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the North..." << endl;
			cout << "" << endl;
		}

		else if ((c.location.x == g.location.x) && (c.location.y - 1 == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the South" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x + 1 == g.location.x) && (c.location.y + 1 == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the Northeast" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x - 1 == g.location.x) && (c.location.y + 1 == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the Northwest" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x + 1 == g.location.x) && (c.location.y + 1 == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the Southeast" << endl;
			cout << "" << endl;
		}

		else if ((c.location.x - 1 == g.location.x) && (c.location.y + 1 == g.location.y))
		{
			cout << "The scanner detects a large deposit of metals to the Southwest" << endl;
			cout << "" << endl;
		}
	}

	else if (s.charge <= 0)
	{
		cout << "The scanner's battery is drained." << endl;
	}
}

bool Arrow::shootArrow(Arrow a, Player c, Wumpus w)
{
	char input;
	a.location.x = c.location.x, a.location.y = c.location.y;

	cout << "You draw your bow..." << endl;
	cin >> input;

	switch (input)
	{
	case 'w':
		cout << "You shot an arrow to the North..." << endl;
		cout << "" << endl;
		a.location.x, a.location.y += 1;
		break;
	case 's':
		cout << "You shot an arrow to the South..." << endl;
		cout << "" << endl;
		a.location.x, a.location.y -= 1;
		break;

	case 'a':
		cout << "You shot an arrow to the South..." << endl;
		cout << "" << endl;
		a.location.x, a.location.y -= 1;
		break;

	case 'd':
		cout << "You shot an arrow to the South..." << endl;
		cout << "" << endl;
		a.location.x, a.location.y -= 1;
		break;
	}

	if ((a.location.x == w.location.x) && (a.location.y == w.location.y) && (w.alive == true))
	{
		return true;
	}

	else
	{
		return false;
	}
}
