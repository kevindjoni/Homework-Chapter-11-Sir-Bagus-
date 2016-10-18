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

enum months1 {January, February, March, April,
			  May, June, July, August, September,
			  October, November, December};
					 
months1 monthA;					 

int main()
{
    weatherData monthly[12];
    int highestTempAll, 
		lowestTempAll,
		totalRain;
    
	string months[12]= {"January", "February", "March", "April", 
						"May", "June", "July", "August", "September", 
						"October", "November", "December"};
    
    for (monthA = January; monthA < December; monthA = static_cast<months1>(monthA + 1))
	{
        cout << "Month: " << (monthA + 1) << endl;
        cout << "----------------" << endl;;
        cout << "The Total Rainfall for this month: " << endl;
        cin >> monthly[monthA].total;
    
        cout << "The Highest Temperature for this month: " << endl;
        cin >> monthly[monthA].highTemp;
        if(monthly[monthA].highTemp > 140 || monthly[monthA].highTemp < -100)
        {
        	cout << "Invalid input, Insert again!" << endl;
        	cin >> monthly[monthA].highTemp;
		}
        
        cout << "The Lowest Temperature for this month: " << endl;
        cin >> monthly[monthA].lowTemp;
        if(monthly[monthA].lowTemp > 140 || monthly[monthA].lowTemp < -100)
        {
        	cout << "Invalid input, Insert again!" << endl;
        	cin >> monthly[monthA].lowTemp;
		}
    
        int totalRain = monthly[monthA].total;
        int totalTemp = monthly[monthA].highTemp + monthly[monthA].lowTemp;
        monthly[monthA].averageTemp = totalTemp / 2;
        
        cout << "The average monthly temperature of each month is: " << endl;
		cout << monthly[monthA].averageTemp << endl << endl;
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
