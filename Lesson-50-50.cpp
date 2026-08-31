#include<iostream>
using namespace std;

int main()
{
	int PINCode;
	int count = 1;
	while (count <= 3)
	{
		cout << "please enter ATM PIN code:\n";
		cin >> PINCode;

		if (PINCode == 1234)
		{
			cout << "your balance is : " << 7500 << endl;
			return 0;//هذا السطر ينهي البرنامج فوراً و يمنعه من الانتقال للأسفل و طباعة قفل الكرت
		}
		else
		{
			cout << "Wrong PIN" << endl;
		}

		count++;
	}
	cout << "card is locked!" << endl;

	return 0;
}