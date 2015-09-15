#include<iostream>
#include<string>

// declares the namespace "std" globally.
using namespace std;

// makes a function that returns nothing, named "RevStr" that takes in the argument of a character pointer.
void RevStr(char *arry)
{
	// creates a character variable named "temp" to be used for temporary storage in the function.
	char temp;

	// loops through a character array while "i" (which is equal to the length of the character array) is not equal to the middle of the array decrementing by 1.
	for (int i = strlen(arry); i > strlen(arry) / 2; i--)
	{ 
		cout << "hit";
		temp = *arry - strlen(arry);
		temp = *arry + strlen(arry);
	}
}

int main()
{
	// creates a character array to store the input called "name" and is of size 30.
	char name[30];

	// creates a pointer named "namePtr" that points to the character array "name".
	char *namePtr = &name[0];

	// allows the user to populate the character array.
	cin.getline(name, 30);
	
	// calls the function, defining the argument as the pointer "namePtr".
	RevStr(namePtr);

	// displays to the console for testing purposes.
	cout << name << endl;

	// prompts the user to press any key to continue.
	system("pause");

	// returns the value of 0.
	return 0;
}