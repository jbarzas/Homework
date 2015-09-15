#include <iostream>
#include <string>

using namespace std;
 
class Character
{
	private:
		int Health;
		int Attack;
		int Defense;

	public:
		Character(int, int, int);
		int* healthPtr = &Health;
		int* attackPtr = &Attack;
		int* defensePtr = &Defense;
		Character* newChar;		
};

Character::Character(int h, int a, int d)
{
	Health = h;
	Attack = a;
	Defense = d;
}

int main()
{
	Character Dude1 = Character(200, 50, 100);
	Character Dude2 = Character(100, 100, 50);
	Character Dude3 = Character(150, 75, 75);

	Dude1.newChar = &Dude2;
	Dude2.newChar = &Dude3;
	Dude3.newChar = NULL;

	cout << "Dude1 Health: " << *Dude1.healthPtr << endl;
	cout << "Dude1 Attack: " << *Dude1.attackPtr << endl;
	cout << "Dude1 Defense: " << *Dude1.defensePtr << endl;
	
	cout << endl;

	cout << "Dude2 Health: " << *Dude2.healthPtr << endl;
	cout << "Dude2 Attack: " << *Dude2.attackPtr << endl;
	cout << "Dude2 Defense: " << *Dude2.defensePtr << endl;

	cout << endl;

	cout << "Dude3 Health: " << *Dude3.healthPtr << endl;
	cout << "Dude3 Attack: " << *Dude3.attackPtr << endl;
	cout << "Dude3 Defense: " << *Dude3.defensePtr << endl;

	system("pause");
	
	return 0;
}