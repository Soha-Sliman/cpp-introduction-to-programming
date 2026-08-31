#include<iostream>
#include<string>
using namespace std;
int main() {
	string st1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;
	double s1 = stod(st1);
	float s2 = stof(st1);
	int s3 = stoi(st1);
	string s4, s5;
	s4 = to_string(N1);
	s5 = to_string(N2);
	int N3_int = (int)N3;
	cout << s1 << " , " << s2 << " , " << s3 << " , " << s4 << " , " << s5 << " , " << N3_int;
	return 0;

}