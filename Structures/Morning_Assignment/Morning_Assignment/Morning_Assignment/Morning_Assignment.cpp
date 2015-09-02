/*
1. Create a struct to represent a Warrior/Fighter type class/job.
It should have at the least the following properties:
hp, <a resource> this can be energy, mana w/e, attack power, defense, armor

1. Write a function that will create and setup this struct.
2. Write a function to compute the average hp of two fighters, you must pass two fighters into this function and return an integer.

_______________________________________________
|												|
|	Intializing a variable		---> int a;		|
|												|
|	Defining a variable		---> int a = 5;		|
|_______________________________________________|
*/

#include <iostream>

// Declares the namespace "std" to be used globally so you dont have to type "std::" every time.
using namespace std;

// Making a structure named "Mage".
struct Mage
{
	//Declaring and naming all the variables needed for the "Mage" structure.
	int Health;
	int Mana;
};


// Initialize the function prototype of return type "Mage" named "setup" accepting 2 "int" arguments.
Mage setup(int, int);


// Declaring/defining the "setup" function.
Mage setup(int hp, int mp)
{
	// Making a variable named "classMage" to return the created "Mage" structure into.
	Mage classMage;

	// Defining the "Health" and "Mana" variables of "classMage" to the variables "hp" and "mp".
	classMage.Health = hp;
	classMage.Mana = mp;

	// Returning what the function does into the variable "classMage".
	return classMage;
}


// Initialize the function prototype of return type "int" named "average" accepting 2 int arguments.
int average(int, int);


// Declaring/defining the "average" function.
int average(int hp1, int hp2)
{
	// Making a "int" variable named "answer" for the average of the variables "hp1" and "hp2" to return into.
	int answer;
	
	// Defining the variable "answer" to the average of the 2 argument variables.
	answer = (hp1 + hp2) / 2;

	// Returning what the function does into the variable "answer".
	return answer;
}


// This is the main function of return type "int".
int main()
{
	// Initialize 2 new Mage structs named "Player1" and "Player2" defining the function "setup(int hp, int mp)" with the values of 1000 and 100 for Player1 and 2000 and 100 for "Player2".
	Mage Player1 = setup(1000, 100);
	Mage Player2 = setup(2000, 100);

	// Defining the variable answer to the avgHP function defined with Player1s health and Player2s health.
	int answer = average(Player1.Health, Player2.Health);

	// Prints the return of the average function to the console.
	cout << answer << endl;

	// Prompts the user to press any key to continue.
	system("pause");
}
