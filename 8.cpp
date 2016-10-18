#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

const int nWords = 50;

struct account
{
	char name[nWords],
		 address[nWords],
	     city[nWords],
	     state[nWords],
		 zip[nWords],
		 telephone[nWords];
	float balance;	
	string lastPay;   
};

void searchFunc();

int main()
{
	int nArray;
	
	cout << "Enter the amount of data you want to input:" << endl;
	cin >> nArray;
	
	account info[nArray];
	
	for(int i = 0; i < nArray; i++)
	{
		cout << "Enter your name: " << endl;
		cin.ignore();
		cin.getline(info[i].name, nWords);
		
		cout << "Enter your address: " << endl;
		cin.getline(info[i].address, nWords);
		
		cout << "Enter your city: " << endl;
		cin.getline(info[i].city, nWords);
		
		cout << "Enter your state: " << endl;
		cin.getline(info[i].state, nWords);
		
		cout << "Enter your ZIP: " << endl;
		cin.getline(info[i].zip, nWords);
		
		cout << "Enter your telephone number: " << endl;
		cin.getline(info[i].telephone, nWords);
	
		cout << "Enter your account balance: " << endl;
		cin >> info[i].balance;
		
		cout << "Enter the date of the last payment: " << endl;
		cin >> info[i].lastPay;
	}

	bool found = false;
	string nameCust;
	
	cout << "\n" << "Enter the name of person you wanted to search: " << endl;
	cin.ignore();
	getline(cin, nameCust);
	
	for(int k = 0; k < nArray; k++)
	{
		if(nameCust.compare(info[k].name) == 0)
		{
			cout << setw(20) << left << "Name: " << info[k].name << endl;
			cout << setw(20) << left << "Address: " << info[k].address << endl;
			cout << setw(20) << left << "City: " << info[k].city << endl;
			cout << setw(20) << left << "State: " << info[k].state << endl;
			cout << setw(20) << left << "ZIP: " << info[k].zip << endl;
			cout << setw(20) << left << "Phone Number: " << info[k].telephone << endl;
			cout << setw(20) << left << "Account Balance: " << info[k].balance << endl;
			cout << setw(20) << left << "DOLP: " << info[k].lastPay << endl;
		}
	}
	
	if(found = true)
	{
		cout << "Data Found";
	}
	else
	{
		cout << "Data not Found";
	}
	
	return 0;
}
