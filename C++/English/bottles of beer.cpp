#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num_bottles;
	
	cout << "This is the \"Bottles of beer song!\" " << endl;
	cout << "Please input a number between 1 and 5000." << endl;
	cin >> num_bottles;	
	
	
	
	
    while ( num_bottles > 0 )
        {
        cout << num_bottles << " bottle(s) of beer on the wall," << endl;
        cout << num_bottles << " bottle(s) of beer." << endl;
        cout << "Take half of 'em down, pass it around," << endl;
        num_bottles /= 2;
        cout << num_bottles << " bottle(s) of beer on the wall." << endl;
        }
	
	return 0;
}
