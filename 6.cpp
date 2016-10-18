#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct soccerPlayers
{
	string name;
	int number,
		points;
};

int main()
{
	int nPlayers = 12;
	soccerPlayers arr[nPlayers];
	
	for(int i = 1; i <= 12; i++) 
	{
		cout << "Enter player " << i << "'s name: ";
		cin >> arr[nPlayers].name;
		
		cout << "Enter player " << i << "'s name: ";
		cin >> arr[nPlayers].number;
		while(arr[nPlayers].number < 0)
		{
			cout << "Invalid input, try again!" << endl;
			cin >> arr[nPlayers].number;
		}
		
		cout << "Enter the points scored by player " << i << ": ";
		cin >> arr[nPlayers].points;
		while(arr[nPlayers].points < 0)
		{
			cout << "Invalid input, try again!" << endl;
			cin >> arr[nPlayers].points;
		}
	}	
	
	cout << "Player:" << "\t\t";
	cout << "Number:" << "\t\t";
	cout << "Points:" << "\t\t" << endl;	 			 
	
	for(int j = 1; j <= 12; j++)
	{
		cout << arr[j].name << "\t\t";
		cout << arr[j].number << "\t\t";
		cout << arr[j].points << "\t\t" << endl;
	}
	
	int total;
	for(int k = 1; k <= 12; k++)
	{
		total += arr[k].points;
	}
	cout << "Total Points: " << total << endl;
	
	int highest,
		highestScorer;
	for(int l = 1; l <= 12; l++)
	{
		if(arr[l].points > highest)
		{
			highest = arr[l].points;
			highestScorer = l + 1;
		}
	}
	cout << "Highest Point: " << highest << endl;
	
	return 0;
}
