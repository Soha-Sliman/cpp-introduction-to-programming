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
int main()
{
	cout << CircleArea(2.0) << endl;

	cout << CircleArea2(3.0);
	return 0;
}