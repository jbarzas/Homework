#include <iostream>

using namespace std;


int main()
{
	const int numNames = 5;
	char names[numNames][100];
	char name[100];

	cout << "Enter five names, pressing enter after each one." << endl;

	for (int a = 0; a < numNames; a++) //loops through the # of names in the array of names.
	{
		cin.getline(name, 100); //this gets the names from the user and stores them in the array. ("name"<--array name, "100"<--alloted array size in memory)

		for (int b = 0; b < 100; b++) //loops through each char in the name array forwards in memory.
		{
			names[a][b] = name[b]; //sets the size of each name here.
		}
	}
	 
	for (int a = 0; a < numNames; a++) //loops through the # of names in the array of names.
	{
		for (int b = strlen(names[a]); b >= 0; b--) //loops backwards through each name in the array starting from the last char for each name.
		{
			cout << names[a][b]; // prints the names in reverse order.
		}
		
		cout << endl;
	}

	system("pause");
}