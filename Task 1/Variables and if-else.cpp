#include <iostream>
using namespace std;

int main()
{
	int money;
	money = 0;
	char spend;
	spend = 'y';
	char notSpend;
	notSpend = 'n';

	if (money == 0)
	{
		cout << "You're broke as fuck\n";
		cout << "Gimme money -_-\n";
		cout << "Enter amount:\n";
		cin >> money;
		if (money <= 0)
		{
			cout << "that's not possible silly :*\n";
			cout << "silly goose\n";

			return 0;
		}
		cout << "Money is " << money << "\n";
		cout << "Spend?\n";
		cout << "yes or no\n";
		cin >> spend;
		
		if (spend == 'y')
		{
			cout << "How much?\n";
			cin >> spend;
			cout << "Now u broke again lol\n";
		}
		else if (spend == 'n')
		{
			cout << "Wise choice :3\n";
		}
		//cout << !((spend == 'y') || (notSpend == 'n')) << "\n";


	}
	else if (money != 0)
	{
		cout << "Money is " << money << "\n";
		cout << "Spend?\n";
		cout << "y or n\n";
		cin >> spend;
		cout << ((spend == 'y') || (notSpend == 'n')) << "\n";
	}
	
	return 0;
}
