#include<iostream>
#include<cmath>

using namespace std;

void ReadNumbers(int& num, int &M)
{

	cout << "please enter num,M: " << endl;
	cin >> num >> M;

}

void Printe(int num, int M)
{

	cout << pow(num, M);

}
int main()
{
	int num, M;

	ReadNumbers(num, M);

	Printe(num, M);
	return 0;
}