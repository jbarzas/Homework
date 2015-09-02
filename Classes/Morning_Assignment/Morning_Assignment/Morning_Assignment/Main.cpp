#include "Classes.h"

using namespace std;

int average(int hp1, int hp2)
{
	int answer;

	answer = (hp1 + hp2) / 2;

	return answer;
}

int main()
{
	Warrior Player1 = Warrior(1000, 100, 500, 250);
	Warrior Player2 = Warrior(2000, 200, 1000, 500);

	int avgHP = average(Player1.health, Player2.health);

	cout << avgHP << endl;

	system("pause");
}