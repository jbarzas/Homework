#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	int input;
	fstream file;

	do
	{
		cout << "Enter your number choice" << endl;
		cout << "What do you want to do with the file?" << endl;
		cout << "1.) Display" << endl;
		cout << "2.) Write" << endl;
		cout << "3.) Clear" << endl;
		cout << "4.) Exit" << endl;
		cout << endl;
		cin >> input;
		cout << endl;

		if (!(input == 1 || input == 2 || input == 3 || input == 4))
		{
			cout << "That number is not a valid option." << endl;
		}
		else if (input == 1)
		{
			file.open("MyLog.txt", ios_base::in);
		}
		else if (input == 2)
		{
			file.open("MyLog.txt", (ios_base::out || ios_base::in));
			file << "hello" << endl;
		}
		else if (input == 3)
		{

		}
		else if (input == 4)
		{
			file.close();
		}
		else
		{
			file.close();
		}
	} while (file.is_open());

	system("pause");
	return 0;
}