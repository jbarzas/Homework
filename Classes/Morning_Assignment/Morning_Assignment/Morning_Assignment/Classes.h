/*
1. Create a struct to represent a Warrior/Fighter type class/job.
It should have at the least the following properties.
hp, <a resource> this can be energy, mana w/e, attack power, defense, armor

1. Write a function that will create and setup this struct.
2. Write a function to compute the average hp of two fighters, you must pass two fighters into this function and return an integer.
*/

#pragma once
#include <iostream>

class Warrior
{
	public:
		int health;
		int rage;
		int defense;
		int attack;

		Warrior(int, int, int, int);
};
