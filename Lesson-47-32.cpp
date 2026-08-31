#include<iostream>

using namespace std;

void Read(int& num, int& M)
{
	cout << "please enter a num?\n ";
	cin >> num;
	cout << "please enter a M?\n ";
	cin >> M;
}

void FunPower(int num, int M)
{
	int p = 1;
	for (int i = 1; i <=M; i++)
	{
		p *= num;
	}
	cout << p << endl;
}

int main()
{
	int N, num;
	Read(num, N);
	FunPower(num, N);
	return 0;
}