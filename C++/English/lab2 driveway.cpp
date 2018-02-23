//Annamary W. Cartagena
//802-15-1232
//lab2 Problem1

#include <iostream>
using namespace std;

int main (){
	double driveway_feet, driveway_kilometers;
	int drivewayInKilometer;
  
	cout << "Hello" << endl;
	cout << "Enter the size of your driveway in feet" << endl;
	cin >> driveway_feet;
	cout << "You entered: " << driveway_feet << "." << endl;

	driveway_kilometers = driveway_feet / 3280.84;  //3280.84 is feet in kilometers
	cout << "converting feet into kilometers, your driveway would be: " << driveway_kilometers << " kilometer[s]" << endl;
	
	drivewayInKilometer = 3280.84 / driveway_feet;
	
	cout << "This is how many driveways fit in one kilometer: " << drivewayInKilometer << endl;


	return 0;
}
