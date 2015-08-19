//Using a for loop to interate backwards, print the values 100 to 0.
#include <iostream>

int main()
{

	int i = 100;

	for (int i = 100; i >= 0; i--)
	{
		std::cout << i << std::endl;

		if (i < 0)
		{
			break;
		}
	}

	system("pause");
}

//Modify the look to include 0 and not 100.
#include <iostream>

int main()
{

	int i = 100;

	for (int i = 99; i >= 0; i--)
	{
		std::cout << i << std::endl;

		if (i < 0)
		{
			break;
		}
	}

	system("pause");
}

//Modify the loop to not include 0 and include 100.
#include <iostream>

int main()
{

	int i = 100;

	for (int i = 100; i >= 1; i--)
	{
		std::cout << i << std::endl;

		if (i < 0)
		{
			break;
		}
	}

	system("pause");
}

//Modify the loop to decrement by 2
#include <iostream>

int main()
{
	int i = 100;

	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
		if (i < 0)
		{
			break;
		}
	}
	system("pause");
}
