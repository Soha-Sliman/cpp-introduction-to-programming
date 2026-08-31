#include<iostream>
using namespace std;

int CalculateFactorial(int N)
{

	while (N < 0)
	{
		cout << "please enter a positive number:\n ";
		cin >> N;
	}
 	
	// nt F = 1;
	//while (N > 0)
	//{

		//F *= N;
		//N--;
	//}
	int F = 1;
	int i = N;
	while (i > 0)
	{
		
		F *= i;
		i--;
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