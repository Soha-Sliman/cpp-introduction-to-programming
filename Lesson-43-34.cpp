#include<iostream>

using namespace std;

void ReadSales(double &TotalSales)
{
	cout << "please enter a TotalSales?\n";
	cin >> TotalSales;
}

double GetPercentage(double TotalSales)
{
	if (TotalSales>1000000)
	{
		return 0.01;
 	}
	else if (TotalSales>=500000 && TotalSales<=1000000)
	{
		return 0.02;
	}
	else if (TotalSales>=100000 && TotalSales<500000)
	{
		return 0.03;
	}
	else if (TotalSales>=50000 && TotalSales<100000)
	{
		return 0.05;
	}
	else
	{
		return 0.00;
	}
}

void CalculateAndPrint(double TotalSales)
{
	double Total = GetPercentage(TotalSales) * TotalSales;
	cout << "Total= " << Total << endl;
}

int main()
{
	double TotalSales;

	ReadSales(TotalSales);
	CalculateAndPrint(TotalSales);
	return 0;
}