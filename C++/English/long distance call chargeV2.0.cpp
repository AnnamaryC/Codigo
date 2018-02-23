// Annamary W. Cartagena
//802-15-1232
//Prof. Marko Schutz
#include <iostream>
using namespace std;

int main ()
{
	int call_hours, call_minutes, minutes_used;
	double total_cost;
	char let1, let2, button, answer;
	do {

		cout << "This is a calculator for long-distance calling charges." << endl;
		cout << "Weekdays from 8:00AM-6:00PM, it will cost .40 cents. Weekdays from 6:00PM-8:00AM, it wil cost .25 cents." << endl;
		cout << "Weekends, it will cost .15 cents." << endl;

		cout << "Please input which day you started the call(Mo,Tu,We,Th,Fr,Sa,Su)" << endl;
		cin >> let1 >> let2;
		cout << "You have input " << let1 << let2 << endl;

		cout << "When did you start the call in hours?(in a spam of 24 hours, example: 13)" << endl;
		cout << "It starts at 0, 0 being 12. 23 being 11." << endl;
		cin >> call_hours;
		if (call_hours > 23)
		{
			cout << "That's not an appropiate number for hours." << endl;
			return 0;
		}

		do{
			cout << "When did you start the call in minutes?" << endl;
		cin >> call_minutes;

		if (call_minutes > 59 || call_minutes < 0)
		{
			cout << "That's not an appropiate number for minutes." << endl;
			return 0;
		}} while (call_minutes > 59 || call_minutes < 0)

cout << "How long was the call?" << endl;
cin >> minutes_used;

if (call_minutes < 10)
{
cout << "So you started the call at " << call_hours << ":0" << call_minutes << "." << endl;
}
else
{cout << "So you started the call at " << call_hours << ":" << call_minutes << "." << endl;
}

if (((let1 == 'm' || let1 == 'M') && (let2 == 'o' || let2 == 'O')) && (( call_hours >= 8 && call_hours <= 18) && (call_minutes >= 0 && call_minutes <= 59)))
{ cout << "You started your call on a Monday." << endl;
total_cost = minutes_used * .40;
}


else if (((let1 == 'm' || let1 == 'M') && (let2 == 'o' || let2 == 'O')) && ( (call_hours >= 18 && call_hours <= 23)))
{ cout<< "You Started your call on a Monday night." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'm' || let1 == 'M') && (let2 == 'o' || let2 == 'O')) && ((call_hours <= 7 && call_hours >= 0)))
{ cout<< "You Started your call on a Monday morning." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'm' || let1 == 'M') && (let2 == 'o' || let2 == 'O')) && ((call_hours <= 7 && call_hours >= 0) || (call_hours >= 18 && call_hours <= 23)))
{ cout<< "You Started your call on a Monday night." << endl;
total_cost = minutes_used * .25;
}


else if (((let1 == 't' || let1 == 'T') && (let2== 'u' || let2 == 'U')) && (( call_hours >= 8 && call_hours <= 18) && (call_minutes >= 0 && call_minutes <= 59)))
{ cout << "You started your call on a Tuesday." << endl;
total_cost = minutes_used * .40;
}

else if (((let1 == 'T' || let1 == 't') && (let2 == 'u' || let2 == 'U')) && ((call_hours <= 7 && call_hours >= 0)))
{ cout<< "You Started your call on a Tuesday morning." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'T' || let1 == 't') && (let2 == 'u' || let2 == 'U')) && ((call_hours <= 7 && call_hours >= 0) || (call_hours >= 18 && call_hours <= 23)))
{ cout<< "You Started your call on a Tuesday night." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'W' || let1 == 'w') && (let2== 'E' || let2 == 'e')) && (( call_hours >= 8 && call_hours <= 18) && (call_minutes >= 0 && call_minutes <= 59)))
{ cout << "You started your call on a Wednesday." << endl;
total_cost = minutes_used * .40;
}

else if (((let1 == 'W' || let1 == 'w') && (let2 == 'e' || let2 == 'E')) && ((call_hours <= 7 && call_hours >= 0)))
{ cout<< "You Started your call on a Wednesday morning." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'W' || let1 == 'e') && (let2 == 'e' || let2 == 'E')) && ((call_hours <= 7 && call_hours >= 0) || (call_hours >= 18 && call_hours <= 23)))
{ cout<< "You Started your call on a Wednesday night." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 't' || let1 == 'T') && (let2== 'h' || let2 == 'H')) && (( call_hours >= 8 && call_hours <= 18) && (call_minutes >= 0 && call_minutes <= 59)))
{ cout << "You started your call on a Thursday." << endl;
total_cost = minutes_used * .40;
}

else if (((let1 == 'T' || let1 == 't') && (let2 == 'h' || let2 == 'H')) && ((call_hours <= 7 && call_hours >= 0)))
{ cout<< "You Started your call on a Thursday morning." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'T' || let1 == 't') && (let2 == 'h' || let2 == 'H')) && ((call_hours <= 7 && call_hours >= 0) || (call_hours >= 18 && call_hours <= 23)))
{ cout<< "You Started your call on a Thursday night." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'f' || let1 == 'F') && (let2== 'r' || let2 == 'R')) && (( call_hours >= 8 && call_hours <= 18) && (call_minutes >= 0 && call_minutes <= 59)))
{ cout << "You started your call on a Friday." << endl;
total_cost = minutes_used * .40;
}

else if (((let1 == 'f' || let1 == 'F') && (let2 == 'r' || let2 == 'R')) && ((call_hours <= 7 && call_hours >= 0)))
{ cout<< "You Started your call on a Friday morning." << endl;
total_cost = minutes_used * .25;
}

else if (((let1 == 'f' || let1 == 'F') && (let2 == 'r' || let2 == 'R')) && ((call_hours <= 7 && call_hours >= 0) || (call_hours >= 18 && call_hours <= 23)))
{ cout<< "You Started your call on a Friday night." << endl;
total_cost = minutes_used * .25;
}

else if((let1 == 's' || let1 == 'S') && (let2 == 'a' || let2 == 'A'))
{ cout << "You started your call on a Saturday." << endl;
total_cost = minutes_used * .15;
}

else if((let1 == 's' || let1 == 'S') && (let2 == 'u' || let2 == 'U'))
{ cout << "You started your call on a Sunday." << endl;
total_cost = minutes_used * .15;
}

cout << "You have to pay: " << total_cost << "$." << endl;	
	
cout << "Would you like to measure again?(Y/N)" << endl;	
cin >> answer;
}while (answer == 'Y' || answer == 'y');
	
	
	return 0;
}
