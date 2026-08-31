#include<iostream>
#include<string>

using namespace std; 

void fun1()
{
	string name, city, country;
	int age;

	cout << "********************" << endl;
	
	cout << "please enter your name: " << endl;
	getline(cin, name);

	cout << "please enter your age: " << endl;
	cin >> age;

	cout << "please enter your city:" << endl;
	cin >> city;

	cout << "please enter your country: " << endl;
	cin >> country;

	cout << "*********************" << endl;
}
void fun2()
{
	cout << "********" << endl;
	cout << "********" << endl;
	cout << "********" << endl;
	cout << "********" << endl;
}
void fun3()
{
	cout << "I Love Programming!\n" << endl;

	cout << "I Promise to be the best developer ever!\n" << endl;

	cout << "I know it will take some time to practice,but i will achieve my goal.\n" << endl;

	cout << "Best Regards," << endl;

	cout << "Mohammed Abu-Hadhoud." << endl;
}
void fun4()
{
	cout << "*   *" << endl;
	cout << "*   *" << endl;
	cout << "*****" << endl;
	cout << "*   *" << endl;
	cout << "*   *" << endl;

}
int main()
{
	fun1();
	fun2();
	fun3();
	fun4();
	return 0;
}