#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int gold = 100;
	int sword = 0, armor = 0, potion = 0, rope = 0;
	int swordCost = 50, armorCost = 30, potionCost = 10, ropeCost = 5;
	int choice;

	inventory:
	cout << "\n[Inventory]" << endl;
	cout << "Gold: " << gold << endl;
	cout << "Sword amount: " << sword << endl;
	cout << "Armor amount: " << armor << endl;
	cout << "Potion amount: " << potion << endl;
	cout << "Rope amount: " << rope << endl;

	do
	{
		cout << "\nWould you like to buy: \n [1] Sword \n [2] Armor \n [3] Potion \n [4] Rope \n [5] Exit" << endl;
		cout << "Input answer: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (gold < swordCost)
			{
				cout << "\n You don't have enough gold!" << endl;
			}
			else if (gold >= swordCost)
			{
				cout << "\n You purchased a sword! \n Adding to inventory..." << endl;
				goto inventory;
			}
			break;
		case 2:
			if (gold < armorCost)
			{
				cout << "\n You don't have enough gold!" << endl;
			}
			else if (gold >= armorCost)
			{
				cout << "\n You purchased armor! \n Adding to inventory..." << endl;
			}
			break;
		case 3:
			if (gold < potionCost)
			{
				cout << "\n You don't have enough gold!" << endl;
			}
			else if (gold >= potionCost)
			{
				cout << "\n You purchased a potion! \n Adding to inventory..." << endl;
			}
			break;
		case 4:
			if (gold < ropeCost)
			{
				cout << "\n You don't have enough gold!" << endl;
			}
			else if (gold >= ropeCost)
			{
				cout << "\n You purchased a rope! \n Adding to inventory..." << endl;
			}
			break;
		}

		system("pause");
		return 0;
	} while (choice == 1);

}