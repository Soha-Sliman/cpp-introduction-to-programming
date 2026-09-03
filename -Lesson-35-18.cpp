#include<iostream>
#include<cmath>

using namespace std;

double CircleArea(double r) 
{
	const float pi = 3.14;
	return pi * pow(r,2);
}
double CircleArea2(double d)
{
	const float pi = 3.14;
	return (pi * pow(d,2) )/ 4;
}
int main()
{
	cout << CircleArea(2.0) << endl;

	cout << CircleArea2(3.0);
	return 0;
}
