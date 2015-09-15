#include "Header.h"

int main()
{
	newCharacter Player1 = newCharacter();
	
	int input;
	bool test;

	cout << "Please enter the number of your choice and press enter." << endl;
	cout << "" << endl;

	do
	{
		cout << Player1.getName() << " the " << Player1.getRole() << " has a " << Player1.getItem() << endl;
		cout << "" << endl;

		cout << "You approach an old dungeon with a locked door what do you do?" << endl;
		cout << "1) Knock on the door." << endl;
		cout << "2) Bash the door in." << endl;
		cout << "3) Pick the lock." << endl;	
		cout << "" << endl;
	
		cin >> input;
		cout << "" << endl;	
	
		if (!(input == 1 || input == 2 || input == 3))
		{
			test = false;
			cout << "That is not the number of an option." << endl;
			cout << "" << endl;
		}
		else if (input == 1)
		{
			test = false;
			cout << "Nothing happens it didn't work..." << endl;
			cout << "" << endl;

		}
		else if ((input == 2) && (Player1.getRole() == "warrior" || Player1.getItem() == "sword"))
		{
			test = true;
			cout << "The door collapses..." << endl;
			cout << "" << endl;		
		}
		else if ((input == 3) && (Player1.getRole() == "thief" || Player1.getItem() == "lockpick"))
		{
			test = true;
			cout << "You successfully unlock the door..." << endl;
			cout << "" << endl;			
		}
		else 
		{
			test = false;
			cout << "It did not work..." << endl;
			cout << "" << endl;
		}
	} while (test == false);
	cout << "You delve further into the dungeon..." << endl;
	cout << "" << endl;
	system("pause");
	system("cls");

	system("pause");
}