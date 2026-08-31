#include<iostream>

using namespace std;

int main()
{
	float mark;

	cout << "please enter your mark?\n";
	cin >> mark;

	if (mark >= 50)
	{
		cout << "pass " << endl;

	}

	else
	{
		cout << "fail " << endl;

	}

	return 0;
}