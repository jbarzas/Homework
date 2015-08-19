//Write a statement that assigns 100 to X if Y is equal to 0.
#include <iostream>

int main()
{
	int y;
	int x;

	std::cout << "Is y equal to 0?" << std::endl;
	std::cin >> y;

	if (y == 0)
	{
		x = 100;
		std::cout << x << std::endl;
	}
	system("pause");
}