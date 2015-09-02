#include "Header.h"

newCharacter::newCharacter()
{
	bool roleTest;
	bool itemTest;

	cout << "Welcome adventurer! Please type your name?" << endl;
	cin >> charName;
	cout << "" << endl;
	
	system("pause");
	system("cls");
	
	do
	{
		cout << "Please enter your role exactly as the option appears." << endl;
		cout << "" << endl;

		cout << "Are you a 'mage', 'warrior', or 'thief'?" << endl;
		cin >> roleName;
		cout << "" << endl;

		if (!(roleName == "mage" || roleName == "warrior" || roleName == "thief"))
		{
			cout << "Your input doesn't match the listed options." << endl;
			roleTest = false;
			
		}
		else if (roleName == "mage" || roleName == "warrior" || roleName == "thief")
		{
			roleTest = true;
			cout << charName << " is a " << roleName << endl;
			cout << "" << endl;
		}
	} while (roleTest == false);	
	system("pause");
	system("cls");

	do
	{
		cout << "You are a " << roleName << endl;
		cout << "" << endl;

		cout << "Please enter your item exactly as the option appears." << endl;
		cout << "" << endl;

		cout << "Do you want bring a 'staff', 'sword', or 'lockpick'?" << endl;
		cin >> itemName;
		cout << "" << endl;

		if (!(itemName == "staff" || itemName == "sword" || itemName == "lockpick"))
		{
			cout << "Your input doesn't match the listed options." << endl;
			itemTest = false;
		}
		else if (itemName == "staff" || itemName == "sword" || itemName == "lockpick")
		{
			itemTest = true;
			cout << charName << " the " << roleName << " has chosen a " << itemName << endl;
			cout << "" << endl;			
		}
	} while (itemTest == false);
	system("pause");
	system("cls");
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