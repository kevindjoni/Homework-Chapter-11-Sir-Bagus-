#include <iostream>
#include <string>

using namespace std;

struct weatherData
{
    int total,
    	highTemp,
    	lowTemp;
    float averageTemp;
};

int main()
{
    weatherData monthly[12];
    int highestTempAll, 
		lowestTempAll,
		totalRain;
    
	string months[12]= {"January", "February", "March", "April", 
						"May", "June", "July", "August", "September", 
						"October", "November", "December"};
    
    for (int x = 0; x < 12; x++)
	{
        cout << "Month: " << months[x] << endl;
        cout << "----------------" << endl;;
        cout << "The Total Rainfall for this month: " << endl;
        cin >> monthly[x].total;
    
        cout << "The Highest Temperature for this month: " << endl;
        cin >> monthly[x].highTemp;
        if(monthly[x].highTemp > 140 || monthly[x].highTemp < -100)
        {
        	cout << "Invalid input, Insert again!" << endl;
        	cin >> monthly[x].highTemp;
		}
        
        cout << "The Lowest Temperature for this month: " << endl;
        cin >> monthly[x].lowTemp;
        if(monthly[x].lowTemp > 140 || monthly[x].lowTemp < -100)
        {
        	cout << "Invalid input, Insert again!" << endl;
        	cin >> monthly[x].lowTemp;
		}
    
        int totalRain = monthly[x].total;
        int totalTemp = monthly[x].highTemp + monthly[x].lowTemp;
        monthly[x].averageTemp = totalTemp / 2;
        
        cout << "The average monthly temperature of each month is: " << endl;
		cout << monthly[x].averageTemp << endl << endl;
    }
    
    highestTempAll = 0;
    for(int i = 0; i < 12; i++)
    {
    	if(monthly[i].highTemp > highestTempAll)
    	{
    		highestTempAll = monthly[i].highTemp;
		}
	}
    
    lowestTempAll = 0; 
    for(int j = 0; j < 12; j++)
    {
    	if(monthly[j].lowTemp < lowestTempAll)
    	{
    		lowestTempAll = monthly[j].lowTemp;
		}
	}
    
    cout << endl << "The highest temperature for the year : " << highestTempAll;
    cout << endl << "The lowest temperature for the year  : " << lowestTempAll;
    cout << endl << "Total Rainfall for the year : " << totalRain;
    
    return 0;
}
