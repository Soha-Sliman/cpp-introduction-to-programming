#include<iostream>
#include<cmath>

using namespace std;

double CircleArea(double a, double b)
{

	float const pi = 3.14;
	return pi * (b * b / 4) * ((2 * a - b) / (2 * a + b));

}

double CircleArea2(double c, double d, double e)
{

	float const pi = 3.14;
	double p = (c + d + e) / 2;
	return pi * pow((c * d * e) /( 4 * sqrt(p * (p - c) * (p - d) * (p - e) ) ), 2 );

}

int main()
{

	cout << CircleArea(20.0, 10.0) << endl;

	cout << CircleArea2(5.0, 6.0, 7.0);
	return 0;
}