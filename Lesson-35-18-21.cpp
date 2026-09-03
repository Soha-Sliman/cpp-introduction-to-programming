#include<iostream>
#include<cmath>

using namespace std;

double CircleArea(double r)
{
	const float pi = 3.14;
	return pi * pow(r, 2);
}

double CircleArea2(double d)
{
	const float pi = 3.14;
	return (pi * pow(d, 2) ) / 4;
}

double CircleArea3(double A)
{
	const float pi = 3.14;
	return (pi * pow(A,2) )/ 4;
}

float CircleArea4(float l)
{
	const float pi = 3.14;
	return pow(l, 2) / (4 * pi);
}

int main()
{
	cout << CircleArea(2.0) << endl;

	cout << CircleArea2(3.0) << endl;

	cout << CircleArea3(4.0) << endl;

	cout << CircleArea4(5.0);
	return 0;
}
