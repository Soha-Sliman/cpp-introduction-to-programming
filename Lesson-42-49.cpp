#include<iostream>

using namespace std;

int main()
{
	int PINCode;

	cout << "please enter the ATM PIN code?\n";
	cin >> PINCode;

	if (PINCode == 1234)
	{
		cout << "your balance is: " << 7500 << endl;
	}
	else
	{
		cout << "Wrong PIN " << endl;
	}

	return 0;
}