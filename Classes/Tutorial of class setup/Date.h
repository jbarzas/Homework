#ifndef DATE_H
#define DATE_H
/*
PostCondition: a Date object that will contain the day month
and year specifried by user
Usage: Date <variable name>(31, 08, 2015);
*/
class Date
{
	public:
		Date(int, int, int);
		void PrintDate();

	private:
		int day;
		int month;
		int year;
};

#endif
