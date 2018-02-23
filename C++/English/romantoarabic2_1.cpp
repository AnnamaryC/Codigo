//Annamary W. Cartagena
//802-15-1232
//Lab3Problem1
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
	char num, ans;
	
	do {
	int year = 0;
	char previous = 'J';
	
	cout << "Maximun for Roman numerals is 3999." << endl; 
	cout << "Input Roman numbers capitalized, finish with a period." << endl;
	cout << "After every letter, press enter." << endl;
	
	
		do{
		
			cin >> num;
			num = toupper(num);	
				
			if (num == 'M'){
				if (previous == 'C')
					year += 800;
				else
					year += 1000;
			}
			else if (num == 'D'){
				if (previous == 'C')
					year += 300;
				else
					year += 500;
			}
			
			else if (num == 'C'){
				if (previous == 'X')
					year += 80;
				else
					year += 100;
			}
			
			else if (num == 'L'){
				if ( previous == 'X')
					year += 30;
				else
					year += 50;
			}
			
			else if (num == 'X'){
				if ( previous == 'I')
					year += 8;
				else
					year += 10;
			}
			
			else if (num == 'V'){
				if( previous == 'I')
					year += 3;
				else
					year += 5;
			}
			
			else if (num == 'I') 
				year += 1;
			
			/*
			else {
				cout << "Error, incorrect letters." << endl;
				break;
			} */
			
			previous = num; 
		} while (num != '.');
		
cout << "This is the roman year you entered in arabic year:" << endl;
cout << year << endl;
cout << "Would you like to try again? (Y/N)" << endl;
cin >> ans; 
} while ( ans == 'Y' || ans == 'y');

return 0;
}
