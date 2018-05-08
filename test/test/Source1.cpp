#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int gold = 100;
	int sword = 50, armor = 30, potion = 10, rope = 5;
	int choice;

	cout << "Would you like to buy: \n [1] Sword \n [2] Armor \n [3] Potion \n [4] Rope" << endl;
	cout << "Input answer: ";
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		if (gold < sword)
		{
			cout << "\n You don't have enough gold!" << endl;
		}
		else if (gold >= sword)
		{
			cout << "\n You purchased a sword! \n Adding to inventory..." << endl;
		}
	case 2:
		if (gold < armor)
		{
			cout << "\n You don't have enough gold!" << endl;
		}
		else if (gold >= armor)
		{
			cout << "\n You purchased armor! \n Adding to inventory..." << endl;
		}
	case 3:
		if (gold < potion)
		{
			cout << "\n You don't have enough gold!" << endl;
		}
		else if (gold >= potion)
		{
			cout << "\n You purchased a potion! \n Adding to inventory..." << endl;
		}
	case 4:
		if (gold < rope)
		{
			cout << "\n You don't have enough gold!" << endl;
		}
		else if (gold >= rope)
		{
			cout << "\n You purchased a rope! \n Adding to inventory..." << endl;
		}
	}

	system("pause");
	return 0;
}