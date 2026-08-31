#include<iostream>
#include<string>

using namespace std;

struct strInfo {
	string name, city, country;
	int age;
	double monthlysalary, yearlysalary;
	char gender;
	bool married;
};

void ReadInfo(strInfo &Info)
{
	cout << "please enter your name?\n ";
	getline(cin, Info.name);

	cout << "please enter your age?\n ";
	cin >> Info.age;

	cout << "please enter your city?\n ";
	cin >> Info.city;

	cout << "please enter your country?\n ";
	cin >> Info.country;

	cout << "please enter your monthlysalary?\n ";
	cin >> Info.monthlysalary;

	cout << "please enter your yearlysalary?\n ";
	cin >> Info.yearlysalary;

	cout << "please enter your gender?\n ";
	cin >> Info.gender;

	cout << "please enter your married?\n ";
	cin >> Info.married;

 }

void PrintInfo(strInfo Info)
{

	cout << "\n*******************\n";

	cout << "name: " << Info.name << endl;
	cout << "age: " << Info.age << endl;
	cout << "city: " << Info.city << endl;
	cout << "country: " << Info.country << endl;
	cout << "monthlysalary: " << Info.monthlysalary << endl;
	cout << "yearlysalary: " << Info.yearlysalary << endl;
	cout << "gender: " << Info.gender << endl;
	cout << "married: " << Info.married << endl;

	cout << "\n*******************\n";

}

int main()
{
	strInfo person1Info;
	ReadInfo(person1Info);
	PrintInfo(person1Info);

	return 0;
}