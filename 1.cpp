#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title,
		   director;
	int year,
		duration;	   
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
	
	cout << "\n" << "Enter the title of the second movie: ";
	cin >> movie2.title;
	cout << "Enter the director's name: ";
	cin >> movie2.director;
	cout << "Enter the year when the movie was released: ";
	cin >> movie2.year;
	cout << "Enter the running time of the movie(in minutes): ";
	cin >> movie2.duration;
	
	cout << "\n" << "The data regarding the first movie is:" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Title: " << movie1.title
		 << endl;
	cout << "Director: " 
		 <<	movie1.director << endl;
	cout << "The year when the movie was released: " 
		 << movie1.year << endl;
	cout << "The running time of the movie(in minutes) is:"
		 << movie1.duration << "\n\n";
		 
	cout << "The data regarding the second movie is:" << endl;
	cout << "--------------------------------------" << endl;
	cout << "The title of the second movie is: " << movie2.title
		 << endl;
	cout << "The director's name of the second movie is:" 
		 <<	movie2.director << endl;
	cout << "The year when the movie was released: " 
		 << movie2.year << endl;
	cout << "The running time of the movie(in minutes) is:"
		 << movie2.duration;	 	 	  
	
	return 0;
}
