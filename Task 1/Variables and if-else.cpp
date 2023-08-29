#include <iostream>
using namespace std;

int main()
{
	int money;
	money = 0;
	bool spend;
	spend = true;

	if (money == 0)
	{
		cout << "You're broke as fuck\n";
		cout << "Gimme money\n";
		cin >> money;
		cout << "Money is " << money << "\n";
	}
	else (money != 0)
	{
		cout << "Spend?\n";
		cin >> spend;

	}


	return 0;
}
