#include <iostream>
using namespace std;

int main()
{
	int *p;
	int i;
	int k;

	i = 42;
	k = i;
	p = &i;

	// The answer is D.
	*p = 75;


	cout << "i = " << i;
	cout << endl;

	system("pause");
	return 0;
}