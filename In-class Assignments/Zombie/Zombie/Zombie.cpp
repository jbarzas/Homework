#include "Zombie.h"

Zombie::Zombie(bool life, int hp, int ap, string stuff)
{
	alive = life;
	health = hp;
	attack = ap;
	job = stuff;
}

bool Zombie::getAlive()
{
	return alive;
}

int Zombie::getHealth()
{
	return health;
}

int Zombie::getAttack()
{
	return attack;
}

string Zombie::getJob()
{
	return job;
}

bool Zombie::setAlive(bool state)
{
	alive = state;
	return alive;
}

int Zombie::setHealth(int hp)
{
	health = hp;
	if (health <= 0)
		alive = false;
	return health;
}

int Zombie::setAttack(int ap)
{
	attack = ap;
	return attack;
}

string Zombie::setJob(string stuff)
{
	job = stuff;
	return job;
}