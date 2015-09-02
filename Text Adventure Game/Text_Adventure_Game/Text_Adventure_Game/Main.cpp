#include "Header.h"

int main()
{
	newCharacter Player1 = newCharacter();
	
	int input;
	bool test;

	cout << Player1.getName() << " the " << Player1.getRole() << " brought a " << Player1.getItem() << " and is ready to adventure!" << endl;
	cout << "" << endl;
	
	cout << "Please enter the number of your choice and press enter." << endl;
	cout << "" << endl;
	
	cout << "You approach old dungeon with a locked door what do you do?" << endl;
	cout << "1) Knock on the door." << endl;
	cout << "2) Bash the door in." << endl;
	cout << "3) Pick the lock." << endl;	
	cout << "" << endl;
	
	cin >> input;
	cout << "" << endl;	

	if ((input == 2) && (Player1.getRole() == "warrior" || Player1.getItem() == "sword"))
	{
		cout << "The door collapses..." << endl;
		test = true;
	}
	else if ((input == 3) && (Player1.getRole() == "thief" || Player1.getItem() == "lockpick"))
	{
		cout << "You successfully unlock the door..." << endl;
		test = true;
	}
	else if (input == 1) 
	{
		cout << "Nothing happens it didn't work..." << endl;
		test = false;
	}
	cout << "" << endl;

	system("pause");
}