// Include statements
#include <iostream>
#include <iomanip>

using namespace std;

// Main function
int main()
{
	// Initialize variables
	const float  PI = 3.14;
	const float  ENTRY_FEE = 40.00;
	const float	 tireDiameter = 622;
	const float  wheelRatio = 1.6;
   
    float waterstationsPrice = 62.34;
	float racerTag = 2.23; 
	float numofContestants = 0.0; 
	float raceLength = 0.0;
	int waterStations = 0;
	float circumference = 0.0;
	float radius = 0.0; 
	float averagePedal = 0.0;
	float raceLengthmm = 0.0;
	float grossProfit = 0.0;
	float netProfit = 0.0;

	// Capture raceLength
	cout << " WELCOME, to my bike race calculator tool!!! " << endl;
	cout << " Please enter the race length in kilometers: ";

	cin >> raceLength;
	cout << endl;
	
	//Capturing Water Station Price 
	waterStations = (raceLength / 10);

	cout << " This street biking race is: " << raceLength << "km in length." << endl;
	cout << " You will need to supply " << waterStations << "  water stations for your racers. " << endl;

    //Equation for finding the Average Pedal
	radius = tireDiameter / 2; 

	circumference = 2 * PI * radius;
	raceLengthmm = raceLength * 1000000;
	averagePedal = (raceLengthmm / circumference) / wheelRatio;

	cout << " The circumference of the bike tire is: " << circumference
		<< ", and with an average pedal to wheel ratio of " << wheelRatio
		<< ",  your racers will have pedaled around " << averagePedal << " times! " << endl;

	cout << endl;

    //Finding total profit
	cout << " Please input number of participants: "; 
	cin >> numofContestants; 

    grossProfit = numofContestants * ENTRY_FEE;
    waterstationsPrice = waterStations * waterstationsPrice;
    racerTag = numofContestants * racerTag;
    netProfit = grossProfit - waterstationsPrice - racerTag;
    
    cout << " Gross Profit $" << fixed << setprecision(2) << grossProfit << endl;
    cout << " Water Station cost $" << fixed << setprecision(2) << waterstationsPrice << endl;
    cout << " Racer Tag cost $" << fixed << setprecision(2) << racerTag << endl;
    cout << " Net profit $" << fixed << setprecision(2) << netProfit << endl;
    cout << " Happy Racing! ";
    


		
	
}
		