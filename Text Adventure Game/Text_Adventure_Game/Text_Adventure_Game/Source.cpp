#include "Header.h"

newCharacter::newCharacter()
{
	cout << "Please enter your characters information exactly as it appears." << endl;
	cout << "" << endl;

	cout << "Welcome adventurer! Please type your name?" << endl;
	cin >> charName;
	cout << "" << endl;

	cout << "Are you a 'mage', 'warrior', or 'thief'?" << endl;
	cin >> roleName;
	cout << "" << endl;

	cout << "Do you want bring a 'staff', 'sword', or 'lockpick'?" << endl;
	cin >> itemName;
	cout << "" << endl;
}

string newCharacter::getRole()
{
	return roleName;
}

string newCharacter::getName()
{
	return charName;
}

string newCharacter::getItem()
{
	return itemName;
}