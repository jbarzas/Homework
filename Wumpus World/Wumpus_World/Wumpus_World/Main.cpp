#include <iostream>

using namespace std;

struct position
{
	int x;
	int y;
};

class player
{
private:
	position p = {0,0};
	facing

public:
	player();
};

player::player()
{
}

class cell
{
private:
	position location;
	bool gold;
	bool breeze;
	bool wumpus;
	bool hole;

public:
	cell(bool, bool, bool, bool, position);
};

cell::cell(bool g, bool b, bool w, bool h, position p)
{
	gold = g;
	breeze = b;
	wumpus = w;
	hole = h;
	location = p;
}

void createGrid(int x, int y, cell g[])
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "x: " << i << " y: " << j;
			cout << endl;
		}
	}
}

int main()
{
	cell grid[16] = 
	{
	cell(false, false, false, false,{ 0,0 }),
	cell(false, false, false, false,{ 0,1 }),
	cell(false, false, false, false,{ 0,2 }),
	cell(false, false, false, false,{ 0,3 }),
	cell(false, false, false, false,{ 1,0 }),
	cell(false, false, false, false,{ 1,1 }),
	cell(false, false, false, false,{ 1,2 }),
	cell(false, false, false, false,{ 1,3 }),
	cell(false, false, false, false,{ 2,0 }),
	cell(false, false, false, false,{ 2,1 }),
	cell(false, false, false, false,{ 2,2 }),
	cell(false, false, false, false,{ 2,3 }),
	cell(false, false, false, false,{ 3,0 }),
	cell(false, false, false, false,{ 3,1 }),
	cell(false, false, false, false,{ 3,2 }),
	cell(false, false, false, false,{ 3,3 }),
	};
	
	createGrid(4, 4, grid);

	player robot();

	system("pause");
}