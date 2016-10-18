#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title,
		   director;
	int year,
		duration;
	float cost,
		  revenues;		   
};

int main()
{
	MovieData movie1;
	MovieData movie2;
	
	cout << "Enter the title of the first movie: ";
	cin >> movie1.title;
	cout << "Enter the director's name: ";
	cin >> movie1.director;
	cout << "Enter the year when the movie was released: ";
	cin >> movie1.year;
	cout << "Enter the running time of the movie(in minutes): ";
	cin >> movie1.duration;
	cout << "Enter the cost for the movie's production: ";
	cin >> movie1.cost;
	cout << "Enter the movie's first-year revenues: ";
	cin >> movie1.revenues; 
	
	cout << "\n" << "Enter the title of the second movie: ";
	cin >> movie2.title;
	cout << "Enter the director's name: ";
	cin >> movie2.director;
	cout << "Enter the year when the movie was released: ";
	cin >> movie2.year;
	cout << "Enter the running time of the movie(in minutes): ";
	cin >> movie2.duration;
	cout << "Enter the cost for the movie's production: ";
	cin >> movie2.cost;
	cout << "Enter the movie's first-year revenues: ";
	cin >> movie2.revenues;
	
	cout << "\n" << "The data regarding the first movie is:" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Title: " << movie1.title << endl;
	cout << "Director: " <<	movie1.director << endl;
	cout << "Year Released: " << movie1.year << endl;
	cout << "Running Time: " << movie1.duration << "\n";
	cout << "Cost: " << movie1.cost << endl;
	cout << "Revenue: " << movie1.revenues << endl;	 
		 
	cout << "\n" << "The data regarding the second movie is:" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Title: " << movie2.title << endl;
	cout << "Director: " <<	movie2.director << endl;
	cout << "Year Released: " << movie2.year << endl;
	cout << "Running Time: " << movie2.duration << "\n";
	cout << "Cost: " << movie2.cost << endl;
	cout << "Revenue: " << movie2.revenues << endl;	 	 	  
	
	return 0;
}
