#include<iostream>

using namespace std;

void PrintNumbbers(int N)
{
	int sum = 0;

	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
	}
	cout << sum << endl;

}


int main()
{
	int N;
	cout << "please enter N:" << endl;
	cin >> N;
	PrintNumbbers(N);

	return 0;
}