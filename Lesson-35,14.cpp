#include<iostream>
#include<string>

using namespace std;

void ReadNumbers(int &num1 ,int &num2)
{
	cout << "please enter num1: " << endl;
	cin >> num1;

	cout << "please enter num2: " << endl;
	cin >> num2;
}

void PrintNumbers(int num1, int num2)
{
	cout << num1 << endl;

	cout << num2 << endl;
}

void SwapNumbers(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);

	PrintNumbers(num1, num2);

	SwapNumbers(num1, num2);

	PrintNumbers(num1, num2);
	return 0;
}