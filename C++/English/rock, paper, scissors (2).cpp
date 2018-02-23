#include <iostream>
#include <string>
using namespace std;

int main ()
{
	
string name1, name2;
	
char answer, player1, player2;
do {
	
 
cout << "This is a game of rock, paper, scissors.\n";
cout << "Player one, please input your name:\n";
cin >> name1;
cout << "Player two, please input your name:\n";
cin >> name2;

cout << "Player one, please choose your weapon of choice.(R, P , S)\n";
cin >> player1;
cout << "Player two, please choose the weapon of your choice(R, P, S).\n";
cin >> player2;

if (((player1 == 'R') || (player1 == 'r')) && ((player2 == 'R') || (player2 == 'r')))
{ 
	cout << "Both chose rock, nobody wins.\n";
}

else if (((player1 == 'S') || (player1 == 's')) && ((player2 == 'S') || (player2 == 's')))
{
	cout << "Both chose scissors, nobody wins.\n";
}

else if (((player1 == 'P') || (player1 == 'p')) && ((player2 == 'P') || (player2 == 'p')))
{
	cout << "Both chose paper, nobody wins.\n";
}

else if (((player1 == 'P') || (player1 == 'p')) && ((player2 == 'S') || (player2 == 's')))
{
	cout << name1 << " chose paper and " << name2 << " chose scissors.\n";
	cout << name2 << " wins! Scissors cut paper.\n";
}
else if (((player1 == 'r') || (player1 == 'R')) && ((player2 == 'P') || (player2 == 'p')))
{
	cout << name1 << " chose rock and " << name2 << " chose paper.\n";
	cout << name2 << " wins! Paper covers rock.\n";
}
else if (((player1 == 'S') || (player1 == 's')) && ((player2 == 'R') || (player2 == 'r')))
{
	cout << name1 << " chose scissors and " << name2 << "chose rock.\n";
	cout << name2 << " wins! Rock breaks scissors.\n";
}
else if (((player1 == 's') || (player1 == 'S')) && ((player2 == 'p') || (player2 == 'P')))
{
	cout << name1 << " chose scissors and " << name2 << " chose paper.\n";
	cout << name1 << " wins! Scissors cut paper.\n";
} 
else if (((player1 == 'p') || (player1 == 'P')) && ((player2 == 'r') || (player2 == 'R')))
{
	cout << name1 << " chose paper and " << name2 << " chose rock.\n";
	cout << name1 << " wins! Paper covers rock.\n";
}
else if (((player1 == 'r') || (player1 == 'R')) && ((player2 == 's') || (player2 == 'S')))
{
	cout << name1 << " chose rock and " << name2 << "chose scissors.\n";
	cout << name1 << " wins! Rock breaks scissors.\n";
}





cout << "Would you like to play again?\n";
cin >> answer;
} 
while (answer == 'y'|| answer == 'Y');


	return 0;
}
