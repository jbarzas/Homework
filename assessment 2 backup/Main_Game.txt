#include "Objects_Header.h"

int RNG(int mod)
{
	int temp = rand() % mod;

	return temp;
}

// creates a function that creates a grid and returns void.
// takes in the arguments of an interger and an array of instances of the Cell class.
 void createGrid(int size, Cell g[])
{
	// defines the "x" location of the "i" position in the array of Cell instances as the value of "i".
	// defines the "y" location of the "j" position in the array of Cell instances as the value of "j".
	for (int i = 0; i < size; i++)
	{		
		for (int j = 0; j < size; j++)
		{
			g[j].location.y = j;
			g[i].location.x = i;
		}
	}
}

void main()
{
	srand(time(NULL));
	
	// dynamic memory allocation
	// creates an array of instances of the Cell class with a dynamic size.
	// this is setup in a way so that you could ask the user for an array size and it would allocate the required amout of memory.
	Cell* cell;
	cell = new Cell[16];

	// calls the function that creates the grid to be used as the game map defined as a 4 x 4 grid stored inside the dynamic cell array.
	createGrid(4, cell);

	// creates a varible to be used as a text file.
	fstream gameSave;

	// makes a bool variable used to define the default win condition as false until changed when certain criteria is met.
	bool winCondition = false;

	// creates an instance of the Player class named player defined as the constructor function.
	Player player = Player();

	// creates an instance of the Scanner class name scanner defined as the constructor function.
	Scanner scanner = Scanner();

	// creates an instance of the Gold class named gold defined as the constructor function.
	Gold gold = Gold();

	// creates an instance of the Wumpus class named wumpus defined as the constructor function.
	Wumpus wumpus = Wumpus({ RNG(4),RNG(4) });

	cout << "Wumpus location: " << wumpus.location.x << " = x, " << wumpus.location.y << " = y" << endl;
	cout << "\n";

	// creates an array of instances of the Pit class.
	Pit pits[4] = { Pit({1,1}), Pit({ 1,3 }), Pit({ 3,0 }), Pit({ 3,3 }) };

	// creates an instance of the Arrow class name arrow defined as the constructor function.
	Arrow arrow = Arrow();

	// displays instructions for the user to the console.
	cout << "Type your input then press enter to do actions" << endl;
	cout << "Use 'w','a','s','d' as the arrow keys to move." << endl;
	cout << "Use 'f' to draw your bow then 'w','a','s','d' to shoot in a direction ." << endl;
	cout << "Use 'r' to check your scanner." << endl;
	cout << "Use 'q' to save, and 'e' to load a save" << endl;
	cout << "\n";
		
	cout << "You enter the cave of the Wumpus monsters in search of gold..." << endl;
	cout << "\n";
	
	cout << "Which direction do you want to go?" << endl;
	cout << "\n";

	// starts the game loop.
	do
	{
		// makes a char variable used to store user input to be used in the movement switch case statements.
		char input;

		// takes in the users input to be check against the switch/case statments.
		cin >> input;
		cout << "\n";

		// tells the user that the wrong input was entered and lists the correct inputs if the wrong input was entered.
		if (!(input == 'w' || input == 'a' || input == 's' || input == 'd' || input == 'q' || input == 'e' || input == 'f' || input == 'r'))
		{
			cout << "That is not a valid input..." << endl;
			cout << "Use 'w','a','s','d' as the arrow keys to move." << endl;
			cout << "Use 'f' to draw your bow then 'w','a','s','d' to shoot in a direction ." << endl;
			cout << "Use 'r' to check your scanner, you only have 2." << endl;
			cout << "Use 'q' to save, and 'e' to load a save." << endl;
			cout << "\n";
		}

		// creates a switch/case statment thats accepts the character variable "input".
		switch (input)
		{
			// adds 1 to the players "y" cooridinate if 'w' was the input.
		case 'w':
			player.location.x, player.location.y += 1;
			cout << "You moved to the North..." << endl;
			cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
			cout << "\n";
				break;

			// subtracts 1 from the players "y" cooridinate if 's' was the input.
		case 's':
			player.location.x, player.location.y -= 1;
			cout << "You moved to the South..." << endl;
			cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
			cout << "\n";
				break;

			// subtracts 1 to the players "x" cooridinate if 'a' was the input.
		case 'a':
			player.location.x -= 1, player.location.y;
			cout << "You moved to the West..." << endl;
			cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
			cout << "\n";
				break;

			// adds 1 to the players "x" cooridinate if 'd' was the input.
		case 'd':
			player.location.x += 1, player.location.y;
			cout << "You moved to the East..." << endl;
			cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
			cout << "\n";
				break;

			// calls the useScanner function to scan the area if 'r' was the input.
		case 'r':
			scanner.useScanner(scanner, player, pits, wumpus, gold);
			scanner.charge -= 1;
			break;

			// calls the shootArrow function to shoot an arrow in the direction of the user input.
		case 'f':
			if (arrow.shootArrow(arrow, player, wumpus) == true)
			{
				wumpus.alive = false;
				cout << "You have killed the Wumpus monster!" << endl;
				cout << "\n";
			}

			else
			{
				cout << "You didnt hit anything..." << endl;
				cout << "\n";
			}
				break;

			// saves the players data to a file if 'q' was the input.
		case 'q':

			gameSave.open("gameSave.txt", ios_base::out);
	
			gameSave << player.location.x << "\n" <<  player.location.y << "\n" << player.gold << "\n" << wumpus.alive;

			gameSave.close();
				
			cout << "Game has been saved." << endl;
			cout << "\n";
				break;

			// loads the players data from a file if 'e' was the input.
		case 'e':
		
			gameSave.open("gameSave.txt", ios_base::in);
				
			gameSave >> player.location.x >> player.location.y >> player.gold >> wumpus.alive;
			
			gameSave.close();
				
			cout << "Game has been loaded." << endl;
			cout << "\n";
			cout << "Your X, Y position is: " << player.location.x << ", " << player.location.y << endl;
			cout << "\n";
				break;
			
		default:
				break;
		}
	
		if ((player.location.x == pits[0].location.x) && (player.location.y == pits[0].location.y))
		{
			player.alive = false;
			cout << "You fall in a giant pit and are trapped forever..." << endl;
			cout << "\n";
		}

		if ((player.location.x == pits[1].location.x) && (player.location.y == pits[1].location.y))
		{
			player.alive = false;
			cout << "You fall in a giant pit and are trapped forever..." << endl;
			cout << "\n";
		}

		if ((player.location.x == pits[2].location.x) && (player.location.y == pits[2].location.y))
		{
			player.alive = false;
			cout << "You fall in a giant pit and are trapped forever..." << endl;
			cout << "\n";
		}

		if ((player.location.x == pits[3].location.x) && (player.location.y == pits[3].location.y))
		{
			player.alive = false;
			cout << "You fall in a giant pit and are trapped forever..." << endl;
			cout << "\n";
		}

		// displays a message to the console that you have died if the Player's "x" or "y" coordinate is not on the game map grid it sets the Alive bool of the Player to false.
		if ((player.location.x == -1) ||
		(player.location.x == 4) ||
		(player.location.y == -1) ||
		(player.location.y == 4))
		{
			player.alive = false;
			cout << "You fall of a ledge to your death..." << endl;
			cout << "\n";
		}

		// displays a message to the console that you have died if the players "x" and "y" coordinates are equal to that of the Wumpus it sets the alive bool of the Player to false.
		if ((player.location.x == wumpus.location.x) && (player.location.y == wumpus.location.y) && (wumpus.alive == true))
		{
			player.alive = false;
			cout << "A Wumpus monster bites your head off.." << endl;
			cout << "\n";
		}

		// if the Player's "x" and "y" coordinates are equal to that of the Gold it sets the Gold bool of the Player to true.
		// dislplays a message to the colse to tell the play that they have picked up the gold and must leave the cave.
		if ((player.location.x == gold.location.x) && (player.location.y == gold.location.y) && (gold.onGround == true))
		{
			player.gold = true;
			gold.onGround = false;
			cout << "You have found the gold, now you must escape the Wumpus cave" << endl;
			cout << "\n";
		}

		// if the players alive bool is false it sets the winCondition bool to false.
		if (player.alive == false)
		{
			winCondition = false;
		}
			
		// if the players "x" and "y" coordinates are equal to the start position (0,0) and the gold bool is true it sets the winCondition to true.
		if ((player.gold == true) && (player.location.x == 0) && (player.location.y == 0))
		{
			winCondition = true;
		}

		// while the winCondition bool is false and the players alive bool is true continue to execute this loop.
	} while ((winCondition == false) && (player.alive == true));
	
	//if the winCondtion bool is true and the players alive bool is true display to the console that they have won the game.
	if ((winCondition == true) && (player.alive == true))
	{
		cout << "\n";
		cout << "\n";
		cout << "Congradulations you escaped the cave with the gold!" << endl;
		cout << "\n";
		
		// clears the save game file if the winCondition bool is true.
		gameSave.open("gameSave.txt", ios_base::out);
		
		gameSave.close();
	}
	
	// deallocates the dynamic memory of the Cell array.
	delete[] cell;

	system("pause");
}