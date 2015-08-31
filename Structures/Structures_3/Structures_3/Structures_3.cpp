#include <iostream>
#include <string>

using namespace std;

struct Player
{
	string name;
	int STR;
	int INT;
	int DEX;
};

Player createCharacter(string name, int STR, int INT, int DEX)
{
	Player newCharacter;

	cout << "Enter you characters name: " << endl;
	cin >> newCharacter.name;

	cout << "Enter your characters strength:  " << endl;
	cin >> newCharacter.STR;

	cout << "Enter your characters intelligence:  " << endl;
	cin >> newCharacter.INT;

	cout << "Enter your characters dexterity:  " << endl;
	cin >> newCharacter.DEX;

}

int main()
{
	
	system("pause");

}