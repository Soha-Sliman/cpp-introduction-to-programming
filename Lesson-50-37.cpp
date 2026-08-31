#include<iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;
	cout << "please enter set of numbers?\n";
	cin >> num;

	while (num != -99)
	{
		sum += num;
		cout << "please keep entering numbers until you enter -99:\n";
		cin >> num;
	}
	
	cout << "sum=" << sum << endl;
	return 0;
}