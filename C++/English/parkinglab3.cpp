#include <iostream>
using namespace std;

	
//complete
int main()
{
	int begin_time;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	char ch1, ch2;
	
	double length_time, minutes_to_hours, parking_pay; 


	cout << "Parking at an airport will cost you money, even if you don't stay the full hour." << endl;
	cout << "Please input day in this format (Mo, Tu, We, Th, Fr, Sa, Su)" << endl;
	cin >> ch1 >> ch2;
	
	cout << "At what time did you park? Input in 24-hour format." << endl;
	cin >> begin_time ;
	
	cout << "How long did you park? Input in minutes" << endl;
	cin >> length_time;
	
	cout << "The day you parked is " << ch1 << ch2 << endl;
	cout << "You parked at " << begin_time << " hours and stayed for " << length_time << " minutes." << endl;
	
	minutes_to_hours = length_time/60;
	
	if (( ch1 == 'M' ) || ( ch1 == 'T')  ||  ( ch1 == 'W') || (ch1 == 'F') || ( ch1 == 'm' ) || ( ch1 == 't')  ||  ( ch1 == 'w') || (ch1 == 'f')){
		 if (begin_time > 600 && begin_time < 2000){
		 	parking_pay = minutes_to_hours * 4.40;
		 }
		 else
		 	parking_pay = minutes_to_hours * 3.60;
		
	}
	
	else { 
		parking_pay = minutes_to_hours * 2;
	}

	
	cout << "For staying parked for " << length_time << " minutes, you have to pay: $" << parking_pay << endl;
	
	return 0;
}
