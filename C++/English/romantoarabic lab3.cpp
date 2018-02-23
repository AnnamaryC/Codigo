#include <iostream>
using namespace std;

int main()
{
	char num, ans, previous = 'J';
	
	do {
	int year = 0;
	
	cout << "Input Roman numbers capitalized, finish with a period." << endl;
	cout << "After every letter, press enter." << endl;
	
	do
	{
	
		cin >> num;
		
		if (num == 'M' || num == 'm')
		{
			if (previous == 'C' || previous == 'c')
				year += 900;
			else (previous == 'J');
			year += 1000;
		}
		
		else if (num == 'D' || num == 'd')
		{
			if (previous == 'C'  || previous == 'c')
				year += 400;
			else (previous == 'J');
				year += 500;
		}
		
		else if (num == 'C' || num == 'c')
		{
			if (previous == 'X'|| previous == 'x')
				year += 90;
			else (previous == 'J');
				year += 100;
		}
		
		else if (num == 'L' || num == 'l')
		{
			if ( previous == 'X' || previous == 'x')
				year += 40;
			else (previous == 'J');
				year += 50;
		}
		
		else if (num == 'X' || num == 'x')
		{
			if ( previous == 'I' || previous == 'i')
				year += 9;
			else (previous == 'J');
				year += 10;
		}
		
		else if (num == 'V' || num == 'v')
		{
			if( previous == 'I' || previous == 'i')
				year += 4;
			else (previous == 'J');
				year += 5;
		}
		
		else if ((num == 'I' || num == 'i') && (previous == 'J'))
		{
			year += 1;
		}
		
		/* 
		else {
		cout << "Error, incorrect letters." << endl;
		break;
		}
		*/
		
		previous = num; 
	} while (num != '.');
		
cout << "This is the roman year you entered in arabic year:" << endl;
cout << year << endl;
cout << "Would you like to try again? (Y/N)" << endl;
cin >> ans; 
} while ( ans == 'Y' || ans == 'y');

return 0;
}
