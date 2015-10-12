#include "Classes.h"

// creates a function that creates a grid and returns void.
// takes in the arguments of two intergers and an array of instances of the Cell class.
// loops the amount of times that is placed in the first interger argument.
// loops the amount of times that is placed in the second interger argument.
// defines the "x" location of the "i" position in the array of Cell instances as "i".
// defines the "y" location of the "j" position in the array of Cell instances as "j".
void createGrid(int rows, int cols, Cell g[])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			g[i].location.x = i;
			g[j].location.y = j;
		}
	}
}

int main()
{
	// dynamic memory allocation
	int i = 16;
	Cell* cell;
	cell = new Cell[i];
	
	// creates 3 files to store the "x" position, "y" position, and the gold boolean.
	fstream Xpos;
	fstream Ypos;
	fstream goldBool;

	// makes a bool variable used to define the default win condition as false until changed when certain criteria is met.
	bool winCondition = false;

	// makes a char variable used to store user input to be used in the movement switch case statements.
	char input;

	// creates a instance of the Player class named player defined as the constructor fucntion.
	Player player = Player();

	// creates a instance of the Gold class named gold defined as the constructor fucntion.
	Gold gold = Gold();

	// creates a instance of the Wumpus class named wumpus defined as the constructor fucntion.
	Wumpus wumpus = Wumpus();

	// creates four different instances of the Pit class.
	// each instance of pit is defined its own fixed location.
	Pit pit1 = Pit({ 1,1 });
	Pit pit2 = Pit({ 1,3 });
	Pit pit3 = Pit({ 3,0 });
	Pit pit4 = Pit({ 3,3 });

	// calls the function that creates the grid to be used as the game map defined as a 4 x 4 grid stored inside the dynamic cell array.
	createGrid(4, 4, cell);

	// creates a condition to execute the the following code only if the win conditon isnt met yet.
	if (winCondition == false)
	{
		// displays instructions for the user to the console.
		cout << "Use 'w','a','s','d' as the arrow keys to move, or press 'q' to save or 'e' to load a save." << endl;
		cout << "" << endl;
		cout << "You enter the cave of the Wumpus in search of gold..." << endl;
		cout << "" << endl;

		// creates the game loop.
		do
		{
			// asks the user to  eneter a direction.
			cout << "Which direction do you want to go?" << endl;
			cin >> input;
			cout << "" << endl;

			// tells the user that the wrong input was entered and lists the correct inputs if the wrong input was entered.
			if (!(input == 'w' || input == 'a' || input == 's' || input == 'd' || input == 'q' || input == 'e'))
			{
				cout << "That is not a valid input..." << endl;
				cout << "Use 'w','a','s','d' as the arrow keys to move, or press 'q' to save or 'e' to load a save." << endl;
				cout << "" << endl;
			}

			// creates a switch statment thats accepts the input character variable.
			switch (input)
			{
				// adds 1 to the players "y" cooridinate if 'w' was the input.
			case 'w':
				player.location.x, player.location.y += 1;
				cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
				break;

				// adds 1 to the players "y" cooridinate if 'w' was the input.
			case 's':
				player.location.x, player.location.y -= 1;
				cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
				break;

				// adds 1 to the players "y" cooridinate if 'w' was the input.
			case 'a':
				player.location.x -= 1, player.location.y;
				cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
				break;

				// adds 1 to the players "y" cooridinate if 'w' was the input.
			case 'd':
				player.location.x += 1, player.location.y;
				cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
				break;

				// saves the players data to a file if 'q' was the input.
			case 'q':
				Xpos.open("X position.txt", ios_base::out);
				Ypos.open("Y position.txt", ios_base::out);
				goldBool.open("Gold Bool.txt", ios_base::out);
				Xpos << player.location.x;
				Ypos << player.location.y;
				goldBool << player.gold;
				Xpos.close();
				Ypos.close();
				goldBool.close();
				cout << "Game has been saved." << endl;
				break;

				// loads the players data from a file if 'e' was the input.
			case 'e':
				Xpos.open("X position.txt", ios_base::in);
				Ypos.open("Y position.txt", ios_base::in);
				goldBool.open("Gold Bool.txt", ios_base::in);
				Xpos >> player.location.x;
				Ypos >> player.location.y;
				goldBool >> player.gold;
				Xpos.close();
				Ypos.close();
				goldBool.close();
				cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
				break;

				// if no case statement is met then it breaks out of the switch.
			default:
				break;
			}

			// if the players "x" or "y" coordinate is not on the game map grid it sets the alive bool of the player to false.
			// displays a message to the console that you have died.
			if ((player.location.x == -1) ||
				(player.location.x == 4) ||
				(player.location.y == -1) ||
				(player.location.y == 4))
			{
				player.alive = false;
				cout << "You fall of a ledge to your death..." << endl;
				cout << "" << endl;
			}

			// if the players "x" and "y" coordinates are equal to that of a Pit it sets the alive bool of the player to false.
			// displays a message to the console that you have died.
			if ((player.location.x == pit1.location.x) &&
				(player.location.y == pit1.location.y) ||
				(player.location.x == pit2.location.x) &&
				(player.location.y == pit2.location.y) ||
				(player.location.x == pit3.location.x) &&
				(player.location.y == pit3.location.y) ||
				(player.location.x == pit4.location.x) &&
				(player.location.y == pit4.location.y))
			{
				player.alive = false;
				cout << "You fall in a giant pit and are trapped forever..." << endl;
				cout << "" << endl;
			}

			// if the players "x" and "y" coordinates are equal to that of the Wumpus it sets the alive bool of the player to false.
			// displays a message to the console that you have died.
			if ((player.location.x == wumpus.location.x) && (player.location.y == wumpus.location.y))
			{
				player.alive = false;
				cout << "The Wumpus monster bites your head off.." << endl;
				cout << "" << endl;
			}

			// if the players "x" and "y" coordinates are equal to that of the Gold is sets the gold bool of the player to true.
			// dislplays a message to the colse to tell the play that they have picked up the gold and must leave the cave.
			if ((player.location.x == gold.location.x) && (player.location.y == gold.location.y))
			{
				player.gold = true;
				cout << "You have found the gold, now you must escape the Wumpus cave" << endl;
				cout << "" << endl;
			}

			// if the players "x" and "y" coordinates are equal to the start position (0,0) and the gold bool is true it sets the winCondition to true.
			if ((player.gold == true) && (player.location.x == 0) && (player.location.y == 0))
			{
				winCondition = true;
			}

			// if the players alive bool is false it sets the winCondition bool to false.
			if (player.alive == false)
			{
				winCondition = false;
			}

			// while the winCondition bool is false and the players alive bool is true continue to execute this loop.
		} while ((winCondition == false) && (player.alive == true));
	}
	
	//if the winCondtion bool is true and the players alive bool is true display to the console that they have won the game.
	if ((winCondition == true) && (player.alive == true))
	{
		cout << "" << endl;
		cout << "Congradulations you escaped the cave with the gold!" << endl;
		cout << "" << endl;
		
		// clears the save game files if the winCondition bool is true.
		Xpos.open("X position.txt", ios_base::out);
		Ypos.open("Y position.txt", ios_base::out);
		goldBool.open("Gold Bool.txt", ios_base::out);
		Xpos.close();
		Ypos.close();
		goldBool.close();
	}
	
	// deallocates the dynamic memory of the cell array.
	delete[] cell;

	system("pause");
}