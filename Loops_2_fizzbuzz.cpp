//Fizz Buzz
#include <iostream>
int main()
{
	int i = 0;

	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << i << "fizzbuzz" << std::endl;
		}
		else if (i % 3 == 0)
		{
			std::cout << i << "fizz" << std::endl;
		}
		else if (i % 5 == 0)
		{
			std::cout << i << "buzz" << std::endl;
		}
		else
			std::cout << i << std::endl;
	}
	system("pause");
}