//Create a program that swaps two numbers.

#include <iostream>

int main()
{
	int a = 1;
	int b = 2;
	int temp;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	temp = a;

	a = b;
	b = temp;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	system("pause");
}