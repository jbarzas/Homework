#pragma once
#include <iostream>
#include <string>

using namespace std;

class newCharacter
{
	private:
		string charName;
		string roleName;
		string itemName;
	
	public:
		newCharacter();

		string getRole();
		string getName();
		string getItem();
};