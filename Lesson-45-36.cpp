#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void ReadInfo(float& num1, float& num2, char& OperationType)
{
	cout << "please enter num1,num2,OperationTYpe?\n";
	cin >> num1 >> num2;
	cin >> OperationType;
}

float Calculation(float& num1, float& num2, char& OperationType)
{
	switch (OperationType)
	{
	case '+':
		return num1 + num2;
		break;
	case '-':
		return num1 - num2;
		break;
	case '*':
		return num1 * num2;
		break;
	case '/':
		return num1 / num2;
		break;
	default:
		return NAN;
	}
}

int main()
{
	float num1, num2;
	char OperationType;

	ReadInfo(num1, num2, OperationType);
	cout << Calculation(num1, num2, OperationType);

	return 0;
}