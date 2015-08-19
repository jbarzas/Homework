//Ask the user for 5 whole numbers. Output the average of these numbers.
#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	
	std::cout << "Type 5 whole numbers." << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	f = (a + b + c + d + e) / 5;

	std::cout << f << std::endl;

	system("pause");
	return 0;
}