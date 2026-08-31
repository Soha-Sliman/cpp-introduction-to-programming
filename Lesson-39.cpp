#include<iostream>

using namespace std;

int main()
{
	float Grade[3];
	cout << "please enter Grade1?\n ";
	cin >> Grade[0];

	cout << "please enter Grade2?\n ";
	cin >> Grade[1];

	cout << "please enter Grade3?\n ";
	cin >> Grade[2];

	cout << "********************\n";

	float sum = Grade[0] + Grade[1] + Grade[2];
	cout << "The average of grades is: " << sum / 3 << endl;
	return 0;
}
