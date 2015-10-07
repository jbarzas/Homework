#include "Classes.h"

void createGrid(int rows, int cols, Cell g[])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			g[i].location.x = i;
			g[j].location.y = j;

			cout << g[i].location.x << " , " << g[j].location.y << endl;
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
			robot.setLocation(robot.location.x, robot.location.y += 1);
			break;

		case 's':
			robot.setLocation(robot.location.x, robot.location.y -= 1);
			break;

		case 'a':
			robot.setLocation(robot.location.x -= 1, robot.location.y);
			break;

		case 'd':
			robot.setLocation(robot.location.x += 1, robot.location.y);
			break;

		default:
			break;
		}
	} while (robot.alive == true);

	system("pause");
}