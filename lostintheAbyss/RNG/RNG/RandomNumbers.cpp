#include <iostream>
#include "time.h"

using namespace std;

int RNG()
{
	srand(time(NULL));
	int temp = rand() % 16;

	return temp;
}


void main()
{	
	int randomNumber = RNG();

	cout << "Random number is: " << randomNumber << endl;

	system("pause");
}