#include <iostream>
#include <string>

using namespace std;

struct position
{
	float x;
	float y;
};

struct velocity
{
	float distance;
	float time;
};

struct Player
{
	string name;
	int health;
	int score;
	position p;
	velocity v;
};

int main()
{
	Player Player1 = { "Player 1", 100, 10000, {3.2, 5.4}, {6.8, 9.4} };
	Player Player2 = { "Player 2", 750, 7500, { 34.8, 7.3 },{ 1.3, 3.8 } };

	cout << "Score Screen" << endl;

	cout << "" << endl;

	cout << Player1.name << endl;
	cout << "Health: " << Player1.health << endl;
	cout << "Score: " << Player1.score << endl;

	cout << "" << endl;

	cout << Player2.name << endl;
	cout << "Health: " << Player2.health << endl;
	cout << "Score: " << Player2.score << endl;

	cout << "" << endl;

	system("pause");
}