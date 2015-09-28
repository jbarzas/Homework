#include "Zombie.h"
#include <time.h>
#include <stdio.h>

void fight(Zombie &zom1, Zombie &zom2)
{

		int z1hp = zom1.getHealth(); //set a var of type int = to zombie 1 hp
		int z2hp = zom2.getHealth(); //set a var of type int = to zombie 2 hp

		cout << "zombie " << zom1.getJob() << " VS. zombie " << zom2.getJob() << endl;
		cout << endl;

		do
		{
			z1hp -= zom2.getAttack(); // sets the var we created equal to it self - the zom2 atk
			z2hp -= zom1.getAttack(); //vise versa of previous line
			zom1.setHealth(z1hp); // sets the zombies health = to the value of variable we created
			zom2.setHealth(z2hp);
			cout << "zombie " << zom1.getJob() << "'s health is " << zom1.getHealth() << endl;
			cout << "zombie " << zom2.getJob() << "'s health is " << zom2.getHealth() << endl;

		} while (zom1.getAlive() && zom2.getAlive());

		if (zom1.getAlive() == true)
		{
			cout << "zombie " << zom1.getJob() << " survives" << endl;
		}
		else if (zom2.getAlive() == true)
		{
			cout << "zombie " << zom2.getJob() << " survives" << endl;
		}
}

bool zombiecounter(Zombie zambies[])
{
	int liveZambies = 0;

	for (int i = 0; i < sizeof(zambies); i++)
	{
		if (zambies[i].getAlive())
		{
			liveZambies++;
		}
	}

	if (liveZambies <= 1)
	{
		return true;
	}
	
	
	return false;
}

void stuff()
{
	std::cout << "the things to stop this janky ass program" << std::endl;
}
void main()
{
	Zombie zambies[] = {Zombie(true, 200, 100, "soldier"),
						Zombie(true, 125, 50, "mailman"),
						Zombie(true, 100, 25, "baker"), 
						Zombie(true, 100, 50, "teacher"),
						Zombie(true, 150, 75, "officer") };
	srand(time(NULL));


	do
	{
		int z1 = rand() % (sizeof(zambies) / sizeof(Zombie)); //z1 is a random zombie from zambies
		int z2; //z2 aint shit
		do
		{
  			z2 = rand() % (sizeof(zambies) / sizeof(Zombie));
		} while (z1 == z2);

		if (zambies[z1].getAlive() && zambies[z2].getAlive())
		{
			fight(zambies[z1], zambies[z2]);

		}
		system("pause");

	} while (!zombiecounter(zambies));

	system("pause");
}

