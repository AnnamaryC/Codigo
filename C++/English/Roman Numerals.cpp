// Annamary W. Cartagena
//802-15-1232
//Prof. Marko Schutz
#include <iostream>
using namespace std;

int main() {

	int a_year, dividend, quotient;
	char one, five, ten, answer;

do {
		cout << "Hello user, please enter year in arabic format: ";
	cin >> a_year;

	cout << "your year: " << a_year << endl;


	dividend = 1000;

	cout << "answer: ";

	while (a_year > 0) {

		quotient = a_year / dividend;

		if (quotient > 0) {

			switch (dividend) {
				case 1:
					one  = 'I';
					five = 'V';
					ten  = 'X';
					break;

				case 10:
					one  = 'X';
					five = 'L';
					ten  = 'C';
					break;

				case 100:
					one  = 'C';
					five = 'D';
					ten  = 'M';
					break;

				case 1000:
					one  = 'M';
					five = 'v';
					ten  = 'x';
					break;
			}

			switch (quotient) {
				case 1:
					cout << one;
					break;

				case 2:
					cout << one << one;
					break;

				case 3:
					cout << one << one << one;
					break;

				case 4:
					cout << one << five;
					break;

				case 5:
					cout << five;
					break;

				case 6:
					cout << five << one;
					break;

				case 7:
					cout << five << one << one;
					break;

				case 8:
					cout << five << one << one << one;
					break;

				case 9:
					cout << one << ten;
					break;
			}

		}

		a_year = a_year % dividend;
		dividend = dividend / 10;
	}

	cout << endl;
cout << "Do you wish to repeat again? (Y/N)" << endl;
cin >> answer;
} while (answer == 'Y'|| answer == 'y');
	return 0;
} //This was dont with the help of one other student.
