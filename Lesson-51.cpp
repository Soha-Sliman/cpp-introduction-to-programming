#include<iostream>
using namespace std;

int ReadnumberWhile(int From, int To)
{
	int num;
	cout << "please enter a number between " << From << "and " << To << endl;
	cin >> num;

	while (num < From || num > To)
	{
		cout << "wrong number,";
		cout << "please enter a number between " << From << "and " << To << endl;
		cin >> num;
	}

	return num;
}

int ReadnumberDoWhile(int From, int To)
{
	int num;
	do
	{
		cout << "please enter a number between " << From << "and " << To << endl;
		cin >> num;
	} while (num < From || num > To);

	return num;
}

int main()
{
	//cout << ReadnumberWhile(1, 10);

	cout << ReadnumberDoWhile(1, 10);
	return 0;
}