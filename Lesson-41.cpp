#include<iostream>
#include<string>

using namespace std;

struct strInfo
{
	string Firstname, Lastname, Phone;
	int Age;
};

void ReadInfo(strInfo &Info)
{
	cout << "please enter your Firstname?\n ";
	cin >> Info.Firstname;

	cout << "please enter your Lasstname?\n ";
	cin >> Info.Lastname;

	cout << "please enter your Age?\n ";
	cin >> Info.Age;

	cout << "please enter your Phone?\n ";
	cin >> Info.Phone;

}

void PrintInfo(strInfo Info)
{
	cout << "\n***********************************\n";

	cout << "Firstnam: " << Info.Firstname << endl;
	cout << "Lastname: " << Info.Lastname << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;

	cout << "\n***********************************\n";
}

void ReadInfo2(strInfo person[100], int &NumberOfPerson)
{
	//ReadInfo(person[0]);
	//ReadInfo(person[1]);
	cout << "how many persons?\n";
	cin >> NumberOfPerson;
	for (int i = 0; i <= NumberOfPerson-1; i++)
	{
		cout << "please enter person " << i + 1 << "info: \n";
		ReadInfo(person[i]);
	}
}

void PrintInfo2(strInfo person[100], int NumberOfPerson)
{
	//PrintInfo(person[0]);
	//PrintInfo(person[1]);
	for (int i = 0; i <= NumberOfPerson-1; i++)
	{
		cout << "person's" << i + 1 << "info: \n";
		PrintInfo(person[i]);
	}
}

int main()
{
	strInfo person[100];

	//ReadInfo2(person);

	//PrintInfo2(person);
	int NumberOfPerson = 1;
	ReadInfo2(person, NumberOfPerson);
	PrintInfo2(person, NumberOfPerson);

	return 0;
}