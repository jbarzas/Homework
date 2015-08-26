#include <iostream>

using namespace std;

int main()
{
	bool symbol;
	bool number;
	bool caps;
	char user[25];
	char pass[25];
	
	do
	{
		symbol = false;
		number = false;
		caps = false;

		cout << "Please enter a username." << endl;

		cin.getline(user, 25);

		cout << "Please enter a password." << endl;

		cin.getline(pass, 25);

		if (strlen(pass) >= 8)
		{
			for (int a = 0; a <= strlen(pass); a++)
			{
				if (((char)pass[a] >= 33 && (char)pass[a] <= 37)     
					||     
					((char)pass[a] >= 58 && (char)pass[a] <= 64) 
					||
					((char)pass[a] >= 91 && (char)pass[a] <= 96) 
					||
					((char)pass[a] >= 123 && (char)pass[a] <= 126))
				{
					symbol = true;
				}

				else if ((char)pass[a] >= 48 && (char)pass[a] <= 57)
				{
					number = true;
				}

				else if ((char)pass[a] >= 65 && (char)pass[a] <= 90)
				{
					caps = true;
				}
			}
		}
		
		else
		{
			cout << "Password is not long enough. \n";
			
		}
		
		if (!(symbol && number && caps))
		{
			cout << "Try again with a different password. \n";
		}
		
		system("pause");
	
	} while (!(symbol && number && caps));

	cout << "You login information has been saved. \n";
	
	system("pause");
}