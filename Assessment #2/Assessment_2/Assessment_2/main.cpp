#include "Header.h"

void createGrid(int rows, int cols, Cell g[])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			g[i].x = i;
			g[j].y = j;
			
			
			/*
				sets its position values to a vaule of i or j
				and the values will the set value of either the cells x or y 
				position
			*/
			cout << g[i].x << " , " << g[j].y << endl;
			cout << endl;
		}
	}
}

int main()
{
	char input;

	Player robot = Player({ 0,0 }, true);

	Cell grid[16];

	createGrid(4, 4, grid);

	do
	{
		cout << "Use 'w','a','s','d' as the arrow keys to move." << endl;
		cout << "You enter a dark cave which direction do you go?" << endl;

		cin >> input;

		if (!(input == 'w' || input == 'a' || input == 's' || input == 'd'))
		{
			cout << "That is not a valid input..." << endl;
			cout << "Use 'w','a','s','d' as the arrow keys to move." << endl;
		}
		
		switch (input)
		{
		case 'w':
			robot.setLocation(robot.getLocation().x, robot.getLocation().y + 1);
			break;



		default:
			break;
		}
	} while (robot.alive == true);

	system("pause");
}