#include<iostream>
#include<string>

using namespace std;

void Read(int &d,int &h,int &m,int &s)
{

	cout << "please enter d,h,m,s: " << endl;

	cin >> d >> h >> m >> s;

}

int Calculate(int d, int h, int m, int s)
{

	int TotalSeconds = ((d * 24 * 60 * 60) + (h * 60 * 60) + (m * 60) + s);
	return TotalSeconds;

}

int main()
{

	int d, h, m, s;
	Read(d,h,m,s);

	double result = double(Calculate(d, h, m, s));
	cout << result << "seconds";

	return 0;
}