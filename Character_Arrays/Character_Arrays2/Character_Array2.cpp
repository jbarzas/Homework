#include <iostream>

int main()
{
	char firstName[100];
	char lastName[100];

	std::cout << "Please enter your first and last name." << std::endl;

	std::cin >> firstName >> lastName;

	std::cout << lastName << " " << firstName << std::endl;

	system("pause");
}