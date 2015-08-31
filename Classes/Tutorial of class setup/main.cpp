#include "Date.h"
#include <iostream>

int main()
{
	Date date1(8, 31, 2015);
	Date date2(9, 25, 2011);
	Date date3(7, 4, 2018);
	date1.PrintDate();
	date2.PrintDate();
	date3.PrintDate();
	
	system("pause");

	return 0;
}