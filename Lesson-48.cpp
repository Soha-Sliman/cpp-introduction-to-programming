#include<iostream>
using namespace std;

void ReadArrayData(int Arr[100], int& Length)
{
	cout << "how many numbers do you want to enter? 1 to 100?\n";
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "please enter number " << i + 1 << endl;
		cin >> Arr[i];
	}
}

void PrintArrayData(int Arr[100], int Length)
{
	for (int i = 0; i <= Length-1; i++)
	{
		cout << "number[" << i + 1 << "]:" << Arr[i] << endl;
	}
}

int CalculateArraySum(int Arr[100], int Length)
{
	int sum = 0;
	for (int i = 0; i <= Length-1; i++)
	{
		sum += Arr[i];
	}
	return sum;
}

float CalculateArrayAverage(int Arr[100], int Length)
{
	return (float)CalculateArraySum(Arr, Length) / Length;
}

int main()
{
	int Arr[100], Length;

	ReadArrayData(Arr, Length);
	PrintArrayData(Arr, Length);

	int Sum = CalculateArraySum(Arr, Length);
	cout << "Sum=" << Sum << endl;
	cout << "Average=" << Sum / Length << endl;

	//cout << "Sum=" << CalculateArraySum(Arr, Length) << endl;
	//cout << "Average=" << CalculateArrayAverage(Arr, Length) << endl;
	
	return 0;
}