#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct MonthlyBudget
{
	float housing,
		  utilities,
		  householdExpenses,
		  transportation,
		  food,
		  medical,
		  insurance,
		  entertainment,
		  clothing,
		  miscellaneous;
};

void data(MonthlyBudget &data1)
{	
	cout << "Monthly Expenses" << endl;
	cout << "----------------" << endl;
	
	cout << "Enter the money spent on housing by the person" << ": ";
	cin >> 	data1.housing;
		
	cout << "Enter the money spent on utilities by the person" << ": ";
	cin >> 	data1.utilities;
		
	cout << "Enter the money spent on household expenses by the person" << ": ";
	cin >> 	data1.householdExpenses;
		
	cout << "Enter the money spent on transportation by the person" << ": ";
	cin >> 	data1.transportation;
		
	cout << "Enter the money spent on food by the person" << ": ";
	cin >> data1.food;	 
		
	cout << "Enter the money spent on medical by the person" << ": ";
	cin >> data1.medical;
		
	cout << "Enter the money spent on insurances by the person" << ": ";
	cin >> 	data1.insurance;
		
	cout << "Enter the money spent on entertainment expenses by the person" << ": ";
	cin >> 	data1.entertainment;
		
	cout << "Enter the money spent on clothing by the person" << ": ";
	cin >> 	data1.clothing;
		
	cout << "Enter the money spent on miscellaneous by the person" << ": ";
	cin >> data1.miscellaneous;
	cout << "\n";
}

void compare1(float a, float b)
{			
	
	if(a > b)
	{
		cout << "Your expenses is above the entire monthly budget.";
	}	
	else
	{
		cout << "Your expenses is below the entire monthly budget.";
	}
}

int main()
{		
	MonthlyBudget compare;
	MonthlyBudget data1;
	
	compare.housing = 500.00;
	compare.utilities = 150.00;
	compare.householdExpenses = 65.00;
	compare.transportation = 50.00;
	compare.food = 250.00;
	compare.medical = 30.00;
	compare.insurance = 100.00;
	compare.entertainment = 150.00;
	compare.clothing = 75.00;
	compare.miscellaneous = 50.00;
	
	data(data1);
	
	cout << "Housing Comparison:" << endl;
	compare1(data1.housing, compare.housing);
	cout << "Utilities Comparison:" << endl;
	compare1(data1.utilities,compare.utilities);
	cout << "Household Expenses Comparison:" << endl;
	compare1(data1.householdExpenses,compare.householdExpenses);
	cout << "Transportation Comparison:" << endl;
	compare1(data1.transportation,compare.transportation);
	cout << "Food Comparison:" << endl;
	compare1(data1.food,compare.food);
	cout << "Medical Comparison:" << endl;
	compare1(data1.medical,compare.medical);
	cout << "Insurance Comparison:" << endl;
	compare1(data1.insurance,compare.insurance);
	cout << "Entertainment Comparison:" << endl;
	compare1(data1.entertainment,compare.entertainment);
	cout << "Clothing Comparison:" << endl;
	compare1(data1.clothing,compare.clothing);
	cout << "Miscellanous Comparison:" << endl;
	compare1(data1.miscellaneous,compare.miscellaneous);
	
	return 0;
}
