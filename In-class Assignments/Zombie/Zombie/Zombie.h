#pragma once

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Zombie
{
private:
	bool alive;
	int health;
	int attack;
	string job;

public:
	Zombie(bool, int, int, string);
	
	bool getAlive();
	int getHealth();
	int getAttack();
	string getJob();

	int setAttack(int);
	int setHealth(int);
	bool setAlive(bool);
	string setJob(string);
};