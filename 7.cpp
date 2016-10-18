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
	
	for(int j = 0; j < nArray; j++)
	{
		cout << setw(20) << left << "Name: " << info[j].name << endl;
		cout << setw(20) << left << "Address: " << info[j].address << endl;
		cout << setw(20) << left << "City: " << info[j].city << endl;
		cout << setw(20) << left << "State: " << info[j].state << endl;
		cout << setw(20) << left << "ZIP: " << info[j].zip << endl;
		cout << setw(20) << left << "Phone Number: " << info[j].telephone << endl;
		cout << setw(20) << left << "Account Balance: " << info[j].balance << endl;
		cout << setw(20) << left << "DOLP: " << info[j].lastPay << endl;
	}
	
	return 0;
}
