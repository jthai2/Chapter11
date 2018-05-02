//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Jimmy Thai on <5/2/18>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sub = 0;    //keeps track of subscripts
	int points = 0;
	int pointsPossible = 0;

	//get total possible points
	cout << "Enter the number of possible points: ";
	cin >> pointsPossible;

	//declare arrays and fill with data
	double minPoints[5] = { 0, pointsPossible * .60, pointsPossible * .70, pointsPossible * .80, pointsPossible * .90 };
	double maxPoints[5] = { pointsPossible * .59, pointsPossible * .69, pointsPossible * .79, pointsPossible * .89, pointsPossible };
	char grade[5] = { 'F', 'D', 'C', 'B', 'A' };

	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;

	while (points >= 0)
	{
		if (points > pointsPossible)
		{
			cout << points << " is an invalid number. Try again>>>" << endl;
		}
		for (int x = 0; x < 5; x++)
		{
			if (points >= minPoints[x] && points <= maxPoints[x])
			{
				cout << "Your grade is: " << grade[x] << endl;
			}
		}
		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;
	} //end while

	system("pause");
	return 0;
}	//end of main function