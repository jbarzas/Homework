#include <iostream>

using namespace std;

int main()
{
	char name[100];

	cout << "Please enter your first and last name." << endl;

	cin.getline(name, 100);

	cout << name << endl;

	system("pause");
}