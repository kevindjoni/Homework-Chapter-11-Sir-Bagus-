#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct companyData
{
	string name;
	float firstSales,
		  secondSales,
		  thirdSales,
		  fourthSales,
		  total,
		  average;
};

int main()
{
	companyData data1;
	companyData data2;
	companyData data3;
	companyData data4;
	
	cout << "East Division" << endl;
	cout << "-------------" << endl;
	cout << "Enter the First-Quarter Sales of this division:" << endl;
	cin >> data1.firstSales;
	cout << "Enter the Second-Quarter Sales of this division:" << endl;
	cin >> data1.secondSales;
	cout << "Enter the Third-Quarter Sales of this division:" << endl;
	cin >> data1.thirdSales;
	cout << "Enter the Fourth-Quarter Sales of this division:" << endl;
	cin >> data1.fourthSales;

	cout << "\n\n" << "West Division" << endl;
	cout << "-------------" << endl;
	cout << "Enter the First-Quarter Sales of this division:" << endl;
	cin >> data2.firstSales;
	cout << "Enter the Second-Quarter Sales of this division:" << endl;
	cin >> data2.secondSales;
	cout << "Enter the Third-Quarter Sales of this division:" << endl;
	cin >> data2.thirdSales;
	cout << "Enter the Fourth-Quarter Sales of this division:" << endl;
	cin >> data2.fourthSales;
	
	cout << "\n\n" << "North Division" << endl;
	cout << "-------------" << endl;
	cout << "Enter the First-Quarter Sales of this division:" << endl;
	cin >> data3.firstSales;
	cout << "Enter the Second-Quarter Sales of this division:" << endl;
	cin >> data3.secondSales;
	cout << "Enter the Third-Quarter Sales of this division:" << endl;
	cin >> data3.thirdSales;
	cout << "Enter the Fourth-Quarter Sales of this division:" << endl;
	cin >> data3.fourthSales;
	
	cout << "\n\n" << "South Division" << endl;
	cout << "-------------" << endl;
	cout << "Enter the First-Quarter Sales of this division:" << endl;
	cin >> data4.firstSales;
	cout << "Enter the Second-Quarter Sales of this division:" << endl;
	cin >> data4.secondSales;
	cout << "Enter the Third-Quarter Sales of this division:" << endl;
	cin >> data4.thirdSales;
	cout << "Enter the Fourth-Quarter Sales of this division:" << endl;
	cin >> data4.fourthSales;
	
	cout << "\n\n" << "------------------------------------------------"
		 << "\n\n";
	cout << "East Division" << endl;
	cout << "-------------" << endl;
	cout << "First-Quarter Sales: $" << data1.firstSales << endl;
	cout << "Second-Quarter Sales: $" << data1.secondSales << endl;
	cout << "Third-Quarter Sales: $" << data1.thirdSales << endl;
	cout << "Fourth-Quarter Sales: $" << data1.fourthSales << endl;
	data1.total = (data1.firstSales + data1.secondSales + data1.thirdSales
				   + data1.fourthSales);
	cout << "Total Sales: $" << data1.total << endl;
	data1.average = data1.total / 4;
	cout << "Average Sales: $" << data1.average << endl;		
	
	cout << "\n" << "West Division" << endl;
	cout << "-------------" << endl;
	cout << "First-Quarter Sales: $" << data2.firstSales << endl;
	cout << "Second-Quarter Sales: $" << data2.secondSales << endl;
	cout << "Third-Quarter Sales: $" << data2.thirdSales << endl;
	cout << "Fourth-Quarter Sales: $" << data2.fourthSales << endl;
	data2.total = (data2.firstSales + data2.secondSales + data2.thirdSales
				   + data2.fourthSales);
	cout << "Total Sales: $" << data2.total << endl;
	data2.average = data2.total / 4;
	cout << "Average Sales: $" << data2.average << endl;	
	
	cout << "\n" << "North Division" << endl;
	cout << "-------------" << endl;
	cout << "First-Quarter Sales: $" << data3.firstSales << endl;
	cout << "Second-Quarter Sales: $" << data3.secondSales << endl;
	cout << "Third-Quarter Sales: $" << data3.thirdSales << endl;
	cout << "Fourth-Quarter Sales: $" << data3.fourthSales << endl;
	data3.total = (data3.firstSales + data3.secondSales + data3.thirdSales
				   + data3.fourthSales);
	cout << "Total Sales: $" << data3.total << endl;
	data3.average = data3.total / 4;
	cout << "Average Sales: $" << data3.average << endl;	
	
	cout << "\n" << "South Division" << endl;
	cout << "-------------" << endl;
	cout << "First-Quarter Sales: $" << data4.firstSales << endl;
	cout << "Second-Quarter Sales: $" << data4.secondSales << endl;
	cout << "Third-Quarter Sales: $" << data4.thirdSales << endl;
	cout << "Fourth-Quarter Sales: $" << data4.fourthSales << endl;
	data4.total = (data4.firstSales + data4.secondSales + data4.thirdSales
				   + data4.fourthSales);
	cout << "Total Sales: $" << data4.total << endl;
	data4.average = data4.total / 4;
	cout << "Average Sales: $" << data4.average << endl;		   	 
	
	return 0;
}
