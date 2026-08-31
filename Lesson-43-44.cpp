#include<iostream>

using namespace std;

void Read(int &Day)
{
	cout << "please enter a Day?\n";
	cin >> Day;
}

void DetermineDay(int Day)
{
	if (Day==1)
	{
		cout << "Sunday" << endl;
	}
	else if (Day==2)
	{
		cout << "Monday" << endl;
	}
	else if (Day==3)
	{
		cout << "Tuesday" << endl;
	}
	else if(Day==4)
	{
		cout << "Wednesday" << endl;
	}
	else if (Day==5)
	{
		cout << "Thursday" << endl;
	}
	else if (Day==6)
	{
		cout << "Friday" << endl;
	}
	else if (Day==7)
	{
		cout << "Saturday" << endl;
	}
	else
	{
		cout << "Wrong Day" << endl;
		Read(Day);
		DetermineDay(Day);
	}
}

int main()
{
	int Day;

	Read(Day);
	DetermineDay(Day);

	return 0;
}