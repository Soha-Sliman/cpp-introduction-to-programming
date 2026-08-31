#include<iostream>

using namespace std;

int main()
{
	float mark1, mark2, mark3;

	cout << "please enter your mark1, mark2, mark3?\n";
	cin >> mark1 >> mark2 >> mark3;

	float avg = (mark1 + mark2 + mark3) / 3;
	cout << "The average of entered marks =" << avg << endl;

	if (avg >= 50)
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "fail" << endl;
	}
	return 0;
}