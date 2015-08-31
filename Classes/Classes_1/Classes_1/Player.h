#pragma once
#include <iostream>
class Mage
{
private:
	int Health;
	int Mana;
	bool Focus;
public:
	Mage(int, int, bool);
	void Displaystats();
};