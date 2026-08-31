#include<iostream>
#include<cmath>

using namespace std;

void ReadInfo(float &num1, float &num2, string &OperationType)
{
	cout << "please enter num1,num2,OperationTYpe?\n";
	cin >> num1 >> num2;
	cin >> OperationType;
}

float Calculation(float& num1, float& num2, string& OperationType)
{
	if (OperationType=="+")
	{
		return num1 + num2;
	}
	else if (OperationType=="-")
	{
		return num1 - num2;
	}
	else if (OperationType=="*")
	{
		return num1 * num2;
	}
	else if (OperationType=="/")
	{
		return num1 / num2;
	}
	//else
	//{
		//cout << "error:invalid operation type " << endl;
	//}
	else
	{
		return NAN;
	}
}

int main()
{
	float num1, num2;
	string OperationType;

	ReadInfo(num1, num2, OperationType);
	cout << Calculation(num1, num2, OperationType);

	return 0;
}


