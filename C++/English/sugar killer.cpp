#include <iostream> 
#include <string>
using namespace std;

int main()
{
char answer;
do
{

string pet_name;
double weight_of_mouse, amount_sugar_to_kill, percent_to_kill, weight_dieter, amount_to_kill_you;
int amount_of_cans;
        
        cout << "I am a scientist working in a lab testing sweetener quantities.\n";
        cout << "You have a pet! It's a mouse. Please name your pet mouse\n";
        cin >> pet_name;
        cout << "What a beautiful name!\n";
        cout << "Please imput weight of the mouse in grams\n";
        cin >> weight_of_mouse;
        cout << "Now please imput how much sweetener did it take to kill the mouse in grams(Serial mouse killer!).\n";
        cin >> amount_sugar_to_kill;
        
        percent_to_kill = (100 * amount_sugar_to_kill) / weight_of_mouse;
        
        cout << "If it took ";
        cout << amount_sugar_to_kill;
        cout << "g to kill ";
        cout << pet_name;
        cout << " with ";
        cout << weight_of_mouse;
        cout << "g, then this is the amount in percent in which a mouse should consume before eating (Meanie!)\n";
        cout << "\n";
        cout << percent_to_kill;
        cout << " percent\n";
        
        cout << "Sadly, ";
        cout << pet_name;
        cout << " passed, but you didn't!\n";
        cout << "You want this sweetener to lose weight, so I'll tell you how much you can consume before dying, that way ";
        cout << pet_name;
        cout << " won't have died in vain.\n";
        
        cout << "How much do you weigh?(lb)\n";
        cin >> weight_dieter;
        cout << "If it took ";
        cout << percent_to_kill; 
        cout << "% to kill ";
        cout << pet_name;
        cout << "\n";
        
amount_to_kill_you = (weight_dieter * percent_to_kill)/ 100;
        
        cout << "then this is the amount of sweetener you can consume in lbs.\n";
        cout << amount_to_kill_you;
        cout << "\n";
        
        cout << "In ounces, this is the amount to kill you\n";
        
amount_to_kill_you = amount_to_kill_you * 16;
        cout << amount_to_kill_you;  
        cout << "\n";
        
        cout << "If there is 0.001% of sweetener per 16 ounce can, then you can consume\n";
amount_of_cans = amount_to_kill_you / 0.001;
        cout << amount_of_cans;
        cout << " cans.\n";
         
        cout << "Would you like to try again?(Y/N)\n";
        cin >> answer;
       
    
       
    }
    while(answer == 'y'||answer == 'Y');

    return 0;
}