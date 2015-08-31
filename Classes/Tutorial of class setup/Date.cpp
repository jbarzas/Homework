#include "Date.h"
#include <iostream>
using namespace std;
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void Date::PrintDate()
{
	cout << "day:" << day << " month:" << month << " year:" << year << endl;

}