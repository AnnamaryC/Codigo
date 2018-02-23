// Group submission
// Annamary W. Cartagena Velez
// 802-15-1232
// Luis G. Sierra Torres
// 802-14-7832
// Lab 2 Problem 4

#include <iostream>
using namespace std;

int main()
{
	char answer;
	do
	{
		int hours_worked, dependants, overtime_hours, overtime_pay, normal_pay;
		const double pay_per_hour = 16.78; 
		const double union_dues = 10.00;
		double social_security_tax, federal_income_tax, state_income_tax, total_tax;
		double gross_pay, net_pay;

		cout << "Hello. You will be paid 16.78$ per hour for your work services. After 40 hours per week, you will have overtime." << endl;
    cout << "Please input number of hours worked" << endl;
		cin >> hours_worked;
		cout << "Input the number of dependants" << endl;
		cin >> dependants;

		if (hours_worked > 40)
		{
		const double overtime_rate = 25.17;
		overtime_hours = hours_worked - 40;
		overtime_pay = overtime_hours * overtime_rate;
		const int full_hours = 40;
		normal_pay = full_hours * pay_per_hour;
		gross_pay = normal_pay + overtime_pay;
		}
		else
		{
		gross_pay = pay_per_hour * hours_worked;
		}
		social_security_tax = gross_pay * 0.06;
		federal_income_tax = gross_pay * 0.14;
		state_income_tax = gross_pay * 0.05;
		total_tax = social_security_tax + federal_income_tax + state_income_tax;
		net_pay = gross_pay - total_tax - union_dues;
        
    if(dependants > 3)
		{
		net_pay -= 35.00;
		}

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
    
		cout << "The total gross pay is " << gross_pay << " dollars." << endl;
		cout << "There is a total tax of " << total_tax << " dollars" << endl;
		cout << social_security_tax << " dollars in social security tax" << endl;
		cout << federal_income_tax << " dollars in federal income tax" << endl;
		cout << state_income_tax << " dollars in state income tax" << endl;
		cout << union_dues << " dollars in union dues" << endl;
     if(dependants > 3)
    {
    cout << "$35.00 have been deducted out of your gross pay to cover medical insurance." << endl;
    }
    cout << "Your net pay equals " << net_pay << " dollars for this week" << endl;
        
		cout << "Do you want to repeat?" << endl;
		cin >> answer;
	} while ((answer == 'y') || (answer == 'Y')) ;

	return 0;

}
