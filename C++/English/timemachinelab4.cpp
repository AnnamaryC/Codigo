#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int start_year, month1, start_day, start_hour;
	int end_year, month2, end_day, end_hour;
	string start_month, end_month;
	char a, b, c, d;
	
	cout << "This is a time machine! It calculates how forward you can go in time in hours." << endl;
	cout << "Input start month, day, year and hour(plus AM/PM) in that order seperated by a space." << endl;
	cin >> start_month >> start_day >> start_year >> start_hour >> a >> b;
	
	cout << "Input end month, day, year and hour(plus AM/PM) in that order seperated by a space." << endl;
	cin >> end_month >> end_day >> end_year >> end_hour >> a >> b;
	
	start_month = tolower(start_month);
	end_month = tolower(end_month); 
	
	if( start_month = 'january'){
		month1 = 1;
		cout << "MOnth is jan, month 1" << endl;
	}
	
	return 0;
}
