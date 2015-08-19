//Write a program that asks the user for two numbers and then display the larger number to the console.

#include <iostream>

int main()
{
	int a;
	int b;
	
	std::cout << "Type two numbers." << std::endl;

	std::cin >> a;
	std::cin >> b;

	if(a > b)
	{
		std::cout << a << std::endl;
	}
	else if(a < b)
	{
		std::cout << b << std::endl;
	}		
	else if(a == b)
	{
		std::cout << "Please make sure the numbers are different." << std::endl;	
	}
	
	system("pause");
}