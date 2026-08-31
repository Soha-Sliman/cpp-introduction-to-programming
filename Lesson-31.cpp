#include<iostream>
#include<string>
using namespace std;
int main()
{
	string string1, string2, string3;

	cout << "please enter string1: " << endl;
	getline(cin, string1);

	cout << "please enter string2: " << endl;
	cin >> string2;

	cout << "please enter string3: " << endl;
	cin >> string3;

	cout << "*************** " << endl;

	cout << "the length of string1 is: " << string1.length() << endl;

	cout << string1[0] << "," << string1[2] << "," << string1[4] << "," << string1[7] << endl;

	string s = string2 + string3;
	cout << s << endl;

	int prod = stoi(string2) * stoi(string3);
	cout << string2 << "*" << string3 << "=" << prod;
}