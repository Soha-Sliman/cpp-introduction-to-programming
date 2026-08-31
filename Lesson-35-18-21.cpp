#include<iostream>
#include<cmath>

using namespace std;

double CircleArea(double r)
{
	const float pi = 3.14;
	return pi * r * r;
}

double CircleArea2(double d)
{
	const float pi = 3.14;
	return (pi * d * d) / 4;
}

double CircleArea3(double A)
{
	const float pi = 3.14;
	return (pi * A * A) / 4;
}

float CircleArea4(float l)
{
	const float pi = 3.14;
	return (l * l) / (4 * pi);
}

int main()
{
	cout << CircleArea(2.0) << endl;

	cout << CircleArea2(3.0) << endl;

	cout << CircleArea3(4.0) << endl;

	cout << CircleArea4(5.0);
	return 0;
}