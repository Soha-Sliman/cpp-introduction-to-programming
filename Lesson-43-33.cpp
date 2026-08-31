#include<iostream>

using namespace std;

int main()
{
	int grade;

	cout << "please enter your grade?\n";
	cin >> grade;

	if (grade>=90 && grade<=100)
	{
		cout << "A" << endl;
	}
	else if (grade >= 80 && grade <= 89)
	{
		cout << "B" << endl;
	}
	else if (grade >= 70 && grade <= 79)
	{
		cout << "C" << endl;
	}
	else if (grade >= 60 && grade <= 69)
	{
		cout << "D" << endl;
	}
	else if (grade>=50 && grade<=59)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
	return 0;

}