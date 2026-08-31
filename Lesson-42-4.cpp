#include<iostream>

using namespace std;

int main()
{
	int age;
	bool DriverLicense;

	cout << "please enter your age?\n";
	cin >> age;

	cout << "please enter a DriverLicense?\n";
	cin >> DriverLicense;

	if (age > 21 && DriverLicense == 1)
	{
		cout << "Hired" << endl;
	}
	else
	{
		cout << "Rejected" << endl;
	}

	return 0;
}