//Annamary W. Cartagena
//802-15-1232
//lab2 Problem3

#include <iostream>
using namespace std; 

int main(){
	int tank_capacity, gallons_of_fuel, leave_out, put_in; 
	
	cout << "Your fuel tank is empty. Luckily, you can refill with the amount of fuel you have stored." << endl;
	cout << "Please enter your tank capacity in gallons, and how many gallons you have available.(In that other)" << endl;
	cout << "Input both separated with a space, then press enter." << endl;
	cin >> tank_capacity >> gallons_of_fuel;
	cout << "You have entered " << tank_capacity << " in your tank size and " << gallons_of_fuel << " in the gallons you have available." << endl;
	
	if (tank_capacity == gallons_of_fuel){
		cout << "You have an exact amount of fuel available for your tank." << endl; 
	}
	
	else if (tank_capacity < gallons_of_fuel){
		cout << "You have too much fuel for your tank." << endl; 
		leave_out = gallons_of_fuel - tank_capacity;
		cout << "You have to leave out this amount of fuel: " << leave_out << endl;
	}
	
	else if (tank_capacity > gallons_of_fuel){
		cout << "You still have space in your tank for more fuel." << endl;
		put_in = tank_capacity - gallons_of_fuel;
		cout << "This is the amount of fuel you can still put in your tank: " << put_in << endl;
	}
	
	return 0;
}
