#include<iostream>

using namespace std;

void ReadPin(int &PINCode)
{
	cout << "please enter the ATM PIN code?\n";
	cin >> PINCode;

}

void CheckPin(int PINCode)
{
	if (PINCode == 1234)
	{
		cout << "your balance is: " << 7500 << endl;
	}
	else
	{
		cout << "Wrong PIN " << endl;
	}
}

int main()
{
	int PINCode;

	ReadPin(PINCode);
	CheckPin(PINCode);
	
	return 0;
}