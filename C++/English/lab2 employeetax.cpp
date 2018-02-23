//Annamary W. Cartagena
//802-15-1232
//lab2 Problem4

#include <iostream>
using namespace std;

int main(){
	int hours_worked, dependents; //input
	double cash_overtime, overtime, payment, income = 20.92;
	double social_security = 0.12, federal = 0.14, state = 0.03, union_dues = 10, health_insurance = 0;
	double net_pay;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2); 

	cout << "Time to do taxes!" << endl;
	cout << "This will calculate taxes on: Social security, federal income, state income, union dues, and health insurance"
	<< " based on your hours worked and dependents." << endl;
	cout << "Enter hours worked a week and number of dependants in that order" << endl;
	cout << "Input both separated with a space, then press enter." << endl;
	cin >> hours_worked >> dependents;
	
	if( hours_worked > 40 ){
		overtime = hours_worked - 40;
		cash_overtime = overtime * (31.38);
	}
	payment = (40 * income) + cash_overtime;
	
	cout << "Your payment for this week is: " << payment << " $" << endl;
	cout << "Social security tax will remove: " << social_security * payment << " $" << endl;
	cout << "Federal income tax will remove: " << federal * payment << " $" << endl;
	cout << "State income tax will remove: " << state * payment << " $" << endl;
	cout << "Union dues will remove: " << union_dues << " $" << endl;  
	if(dependents >= 3){ 
	health_insurance = 55;
	cout << "Health Insurance will remove: " << health_insurance << " $" << endl;
	}
	
	net_pay = payment - ((0.29) * payment) - (health_insurance + union_dues);
	
	cout << "At the end of the day, you can only take home with you this amount: " << net_pay << endl;
	cout << "Sucks." << endl;
	


	
	return 0;
}
