#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num = 0;

	cout << "please enter 5 numbers ?\n";
	for (int i = 1; i <=5 ; i++)
	{
		cin >> num;

		if (num > 50)
		{
			continue;
		}
			sum += num;
	
	}
	cout <<"the sum is: "  <<  sum;
	return 0;
}

