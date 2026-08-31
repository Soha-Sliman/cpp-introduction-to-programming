#include<iostream>
#include<string>

using namespace std;

int AreaRectangle(int length, int width)
{
	return length * width;
}

int main()
{
	int length, width;
	cout << "please enter length,,width: " << endl;
	cin >> length >> width;
	cout << AreaRectangle(length,width);
	return 0;
}