#include<iostream>
#include<string>

using namespace std;

void mySumProcedure()
{
	int num1, num2;

	cout << "please enter num1: " << endl;
	cin >> num1;

	cout << "please enter num2: " << endl;
	cin >> num2;
	cout << num1 + num2 << endl;
}
int mySumFunction()
{
	int num1, num2;
	cout << "please enter num1: " << endl;
	cin >> num1;

	cout << "please enter num2: " << endl;
	cin >> num2;

	return num1 + num2;
}
int main()
{
	mySumProcedure();
	cout << mySumFunction();
	return 0;
}