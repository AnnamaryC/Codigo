#include <iostream>
using namespace std;
//complete
int main(){
	double balance, interest;
	double interest_rate, interest_pay, new_balance, monthly_payment;
	int month = 0;
	
	cout << "Your total ammount will be payed in 20 months." << endl;
	cout << "Please input your balance and interest rate(in whole numbers) in that order separated by a space."
	<< endl;
	cin >> balance >> interest;
	monthly_payment = balance/20;
	interest_rate = interest/100;
	cout << "Your monthly pay without interest is: $" << monthly_payment << " and your interest rate will be: " << interest << "%" << endl;
	cout << "Should you pay your monthly quota plus the interest every month with the interest in the declining balance, this is your estimate:" << endl;
	
	new_balance = balance;
	interest_pay = balance * interest_rate;
	
	while(new_balance >= 0){
		cout << "Month: " << month << ". New balance to pay: $" << new_balance << ". New interest: $" << interest_pay << ". " << endl; 
		cout << "You pay this month " << monthly_payment + interest_pay << endl;
		new_balance = (balance + interest_pay) - (monthly_payment + interest_pay);
		balance = new_balance;
		interest_pay = balance * interest_rate;
		month++;
		
		
	}
	
	


	return 0;
}
