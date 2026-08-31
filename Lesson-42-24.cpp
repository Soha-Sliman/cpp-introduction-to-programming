#include<iostream>

using namespace std;

int main()
{
	int age;

	cout << "please enter your age?\n ";
	cin >> age;

	if (age >= 18 && age <= 45)
	{
		cout << "valid age" << endl;
	}

	else
	{
		cout << "Invalid age" << endl;
	}

	return 0;
}