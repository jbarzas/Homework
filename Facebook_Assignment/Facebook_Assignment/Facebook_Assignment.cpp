#include <iostream>

using namespace std;

//
// I do not completely know what knowledge I am missing to complete this assignment so I will try to list everything that I can see I know and what I do not.
// I understand what a function is.
// I do not understand what the paramaters in this case would be or how to differentiate when to make something a paramater vs. a variable inside a function.
// I do not understand why a function is needed and all of this can't be done inside of the int main().
// I do not understand what return type to use in any given situation.
// I do not understand what the function in this situation is supposed to return if anything.
// I do not know how to print something stored in a variable to ASCII, I do not remember ever being taught this specfically 
// and the slides give zero information on this other than a definition of what ASCII is.
//

	char nametoASCII(char a, char b, char c)
	{
		char name[100];

		cin.getline(name, 100);

		cout << ((int)name) << endl;
		
		return 0;
	}

int main()
{
	//
	// I understand what a variable is and how to use them and what they are used for.
	// I understand what an array is and how to use them.
	// I understand what a loop is and that one is needed for this.
	// I do not understand what type of loop needs to be used for this.
	// If a for loop is used for this I do not understand what to put inside the for(????).
	//																				{
	//																					
	char fullName[3][100];
	char name[100];

	cin.getline(name, 100);

	cout << ((int)name) << endl;

	system("pause");
	return 0;
}