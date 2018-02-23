#include <iostream>
using namespace std;
int main() 
{
    
int number_1;
char answer; 
do{
    cout << "Hello!\n";
    cout << "This is a test run!\n";
    cout << "Please enter a number, then press enter.\n";
    cin >> number_1;
    cout << "Thank You! You have entered: \n";
    cout << number_1 << " \n";
    cout << "Would you like to try again?\n";
    cin >> answer;
    }while((answer == 'y') || (answer == 'Y'));
        
return 0;
}
