#include<iostream>
#include<cmath>

using namespace std;

double AreaRectangle(double a, double d)
{ 
	return a * sqrt(pow(d, 2) - pow(a, 2));
}
int main()
{
	cout << AreaRectangle(2.0, 4.0);
	return 0;
}