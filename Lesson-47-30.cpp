#include<iostream>

using namespace std;

int CalculateFactorial(int N)
{
	int F = 1;

	for (int i =N ; i >=1; i--)
	{
		F *= i;
	}
	return F;

}

int main()
{
	int N;
	cout << "please enter N: " << endl;
	cin >> N;

	cout << CalculateFactorial(N);

	return 0;
}