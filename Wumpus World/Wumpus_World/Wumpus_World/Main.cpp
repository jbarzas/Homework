#include "Classes.h"

void createGrid(int rows, int cols, Cell g[])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "x: " << i << " y: " << j;
			cout << endl;
		}
	}
}

int main()
{
	Cell grid[16] = 
	{
	//||position||pit||breeze||gold||glimmer||wumpus||stench||robot
	Cell({ 0,0 }, false, false, false, false, false, false, true),
	Cell({ 0,1 }, false, true, false, false, false, false, false),
	Cell({ 0,2 }, false, false, false, false, false, false, false),
	Cell({ 0,3 }, false, false, false, false, false, true, false),
	Cell({ 1,0 }, false, true, false, false, false, false, false),
	Cell({ 1,1 }, true, false, false, false, false, false, false),
	Cell({ 1,2 }, false, true, false, false, false, true, false),
	Cell({ 1,3 }, false, false, false, false, true, false, false),
	Cell({ 2,0 }, false, true, false, false, false, false, false),
	Cell({ 2,1 }, false, true, false, false, false, false, false),
	Cell({ 2,2 }, false, true, false, false, false, false, false),
	Cell({ 2,3 }, false, false, false, true, false, true, false),
	Cell({ 3,0 }, true, false, false, false, false, false, false),
	Cell({ 3,1 }, false, true, false, false, false, false, false),
	Cell({ 3,2 }, true, false, false, false, false, false, false),
	Cell({ 3,3 }, false, false, true, false, false, false, false),
	};

	createGrid(4, 4, grid);


	system("pause");
}