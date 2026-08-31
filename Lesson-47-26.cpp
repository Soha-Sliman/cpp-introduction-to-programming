#include<iostream>

using namespace std;

void ReadN(int &N)
{
	cout << "please enter N?\n";
	cin >> N;
}

void PrintNumbbers(int N)
{
	for (size_t i = 1; i <= N; i++)
	{
		cout << i << endl;
	}
}


int main()
{
	int N;

	ReadN(N);
	PrintNumbbers(N);

	return 0;
}
