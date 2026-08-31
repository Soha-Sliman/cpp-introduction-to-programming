#include<iostream>
using namespace std;

void PrintNumbbers(int N)
{
	int sum = 0;

	int i = 1;
	while (i <= N)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
		i++;

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