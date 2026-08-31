#include<iostream>
using namespace std;
enum engender { male, female };
enum enstatus { married, single };
struct ContactInformation {
	string numberphone, email;
};
struct Address{
	string street;
	ContactInformation coin;
};
struct Mystruct {
	string name, city , country;
	int age;
	double monthlysalary, yearlysalary;
	enstatus married;
	engender gender;
	Address ad;
};
int main()
{
	Mystruct st;
	st.name = "Mohammed Abu-Hadhoud";
	st.age = 44;
	st.city = "Amman";
	st.country = "Jordan";
	st.monthlysalary = 5000.0;
	st.yearlysalary = 60000.0;
	st.ad.street = "Airport";
	st.ad.coin.numberphone = "0999976541";
	st.ad.coin.email = "ss32@gmail.com";
	st.gender = engender::male;
	st.married = enstatus::married;
	cout << "name: " << st.name << endl;
	cout << "age: " << st.age << endl;
	cout << "city: " << st.city << endl;
	cout << "country: " << st.country << endl;
	cout << "monthlysalary: " << st.monthlysalary << endl;
	cout << "yearlysalary: " << st.yearlysalary << endl;
	cout << "gender: " << st.gender << endl;
	cout << "married: " << st.married << endl;
	cout << "street: " << st.ad.street << endl;
	cout << "numberphone: " << st.ad.coin.numberphone << endl;
	cout << "email: " << st.ad.coin.email << endl;
	return 0;

}
