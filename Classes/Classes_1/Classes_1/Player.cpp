#include"Player.h"
using namespace std;

Mage::Mage(int Hp, int Mp, bool Staff)
{
	Health = Hp;
	Mana = Mp;
	Focus = Staff;
}

void Mage::Displaystats()
{
	cout << Health << "\n";
	cout << Mana << "\n";
	cout << Focus << "\n";

}