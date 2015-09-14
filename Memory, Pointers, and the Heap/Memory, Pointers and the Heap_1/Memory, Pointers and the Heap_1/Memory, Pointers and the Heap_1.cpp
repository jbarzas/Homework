#include <iostream>
using namespace std;

int main()
{
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;	p3 = &d;

	cout << "*p3 = " << *p3 << endl; // (1)

	p3 = p1;

	cout << "*p3 = " << *p3; // (2)

	cout << ", p3 = " << p3 << endl; // (3)

	*p1 = *p2;

	cout << "*p1 = " << *p1; // (4)

	cout << ", p1 = " << p1 << endl; // (5)

	system("pause");
	return 0;
}