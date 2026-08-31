#include<iostream>

using namespace std;

void ReadGrades(float Grade[3])
{

	cout << "please enter Grade1?\n ";
	cin >> Grade[0];

	cout << "please enter Grade2?\n ";
	cin >> Grade[1];

	cout << "please enter Grade3?\n ";
	cin >> Grade[2];

}

float Average(float Grade[3])
{

	return (Grade[0] + Grade[1] + Grade[2]) / 3;

}

int main()
{

	float Grade[3];

	ReadGrades(Grade);
	
	cout << " The average of grades is " << Average(Grade) << endl;
	return 0;
}


