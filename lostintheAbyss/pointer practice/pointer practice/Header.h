#include <iostream>

class Player
{
private:

	int health;
	int mana;

	int* plrHealth = &health;
	int* plrMana = &mana;

public:
	Player();

};