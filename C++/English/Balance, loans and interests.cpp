// Annamary W. Cartagena
// 802-15-1232
//Prof. Marko Schutz
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int count = 1;
	double sum, interest, balance, monthly_payment;
	string name;
	char gender, button;
	
	cout.precision(2);
cout.setf(ios::fixed);

	cout << "What is your name?" << endl;
	cin >> name;	
	cout << "what is your gender?(M/F)" << endl;
	cin >> gender;
	
	if (gender == 'm' || gender == 'M') 
	{
		cout << " Hello, Mr." << name << endl;
	}
	else if (gender == 'f' || gender == 'F')
	{
		cout << "Hello, Ms." << name << endl;
	}
	
	cout << "So you are about to take out a loan, which will be paid back in 20 months with the interest you desire." << endl;
	cout << "Please input how much will the loan be, " <<endl;
	cin >> sum;
	
	cout << "And how much will the interest be (in percent)." <<endl;
	cin >> interest;
	
cout << "We will give you a sum amount of " << sum << " with an interest of " << interest << "%." << endl;
 balance = (1.0 +(interest/100.0)) * sum;
 
 cout <<  "The total amount will be " << balance << "." << endl;
 
monthly_payment = balance/20.0;
 cout << "your monthly payment will be: " << monthly_payment << " $." << endl;
 cout << "Please press any button to continue." << endl;
 cin >> button;

cout << "Your balance, in a span of 20 months, after your first month paid, should be seen like this: " << endl;


while ( balance >= 0)
{ 
balance = balance - monthly_payment; //wanted to include fabs here, but it made the program run eternally 0-0
	cout << "After month " << count++ << ": ";
	cout << fabs(balance) << endl; 
}
// this was debugged with the help of another student.



	return 0;
}
