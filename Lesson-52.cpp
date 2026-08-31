#include<iostream>
using namespace std;

int main()
{
	int Arr[10] = { 10,20,44,55,33,22,99,88,99,100 };

	int count = 20;
	for (int i = 0; i < 10; i++)
	{
		cout << "we are at iteration " << i + 1 << endl;
		if (count == Arr[i])
		{
			cout  << endl << count << " found at position " << i << endl;
			break;

		}
		cout << endl;
	}
	return 0;
}