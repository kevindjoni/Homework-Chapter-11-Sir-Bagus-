#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

const int nWords = 100;

struct speakerData
{
	char name[nWords];
	char phone[nWords];
	char topic[nWords];
	float fee;
};

int main()
{
	int nArray;
	
	cout << "Enter the amount of data you want to input: " << endl;
	cin >> nArray;
	
	speakerData info[nArray];
	
	for(int i = 0; i < nArray; i++)
	{
		cout << "Enter name: " << endl;
		cin.ignore();
		cin.getline(info[i].name, nWords);
		
		cout << "Enter phone number: " << endl;
		cin.getline(info[i].phone, nWords);
		
		cout << "Enter topic: " << endl;
		cin.getline(info[i].topic, nWords);
		cin.ignore();
		
		cout << "Enter fee: " << endl;
		cin >> info[i].fee;
	}	
	
	for(int j = 0; j < nArray; j++)
	{
		cout << setw(20) << left << "Name: " << info[j].name << endl;
		cout << setw(20) << left << "Phone Number: " << info[j].phone << endl;
		cout << setw(20) << left << "Topic: " << info[j].topic << endl;
		cout << setw(20) << left << "Fee: " << info[j].fee << endl;
	}
	
	return 0;
}
