#include<iostream>
#include<cmath>

using namespace std;

void ReadNumber(int &num)
{

	cout << "please enter num: " << endl;
	cin >> num;
}

void PrintNum(int num)
{
	cout << pow(num, 2) << endl;

	cout << pow(num, 3) << endl;

	cout << pow(num, 4) << endl;
	
}
int main()
{
	int num;
	ReadNumber(num);

	PrintNum(num);
	return 0;
}