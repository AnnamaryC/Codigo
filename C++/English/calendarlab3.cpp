#include <iostream>
using namespace std;

//complete

int main (){
	int num_day, year, day;
	
	cout << "Input year." << endl;
	cin >> year;
	
	cout << "Input number of days." << endl;
	cin >> num_day;
	
	if ((year %4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
	cout << "It's a Leap Year!" << endl;

		if((num_day >= 1) && ( num_day <= 31) ){
		cout << "This month is January." << endl;
		cout << "The day is " << num_day << "." << endl;
	}
	 else if((num_day >= 32) && (num_day <=60)){
		cout << "The month is February." << endl;
		 num_day = 31- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 61) && (num_day <=91)){
		cout << "The month is March." << endl;
		 num_day = 59- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 92) && (num_day <=121)){
		cout << "The month is April." << endl;
		 num_day = 90- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 122) && (num_day <=152)){
		cout << "The month is May." << endl;
		 num_day = 120- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 153) && (num_day <=182)){
		cout << "The month is June." << endl;
		 num_day = 151- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 183) && (num_day <=213)){
		cout << "The month is July." << endl;
		 num_day = 181- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 214) && (num_day <=244)){
		cout << "The month is August." << endl;
		 num_day = 212- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 245) && (num_day <=274)){
		cout << "The month is September." << endl;
		 num_day = 243- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 275) && (num_day <=305)){
		cout << "The month is October." << endl;
		 num_day = 273- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 306) && (num_day <=335)){
		cout << "The month is November." << endl;
		 num_day = 304- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 336) && (num_day <=366)){
		cout << "The month is December." << endl;
		 num_day = 304- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
		
	}
	
	
	else if((num_day >= 1) && ( num_day <= 31) ){
		cout << "This month is January." << endl;
		cout << "The day is " << num_day << "." << endl;
	}
	 else if((num_day >= 32) && (num_day <=59)){
		cout << "The month is February." << endl;
		 num_day = 31- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 60) && (num_day <=90)){
		cout << "The month is March." << endl;
		 num_day = 59- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 91) && (num_day <=120)){
		cout << "The month is April." << endl;
		 num_day = 90- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 121) && (num_day <=151)){
		cout << "The month is May." << endl;
		 num_day = 120- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 152) && (num_day <=181)){
		cout << "The month is June." << endl;
		 num_day = 151- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 182) && (num_day <=212)){
		cout << "The month is July." << endl;
		 num_day = 181- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 213) && (num_day <=243)){
		cout << "The month is August." << endl;
		 num_day = 212- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 244) && (num_day <=273)){
		cout << "The month is September." << endl;
		 num_day = 243- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 274) && (num_day <=304)){
		cout << "The month is October." << endl;
		 num_day = 273- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 305) && (num_day <=334)){
		cout << "The month is November." << endl;
		 num_day = 304- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	else if((num_day >= 335) && (num_day <=365)){
		cout << "The month is December." << endl;
		 num_day = 304- num_day;
		 num_day *= (-1);
		 cout << "The day is " << num_day << "." << endl;
	}
	
	return 0;
}
