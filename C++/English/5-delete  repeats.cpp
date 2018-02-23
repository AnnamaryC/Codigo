#include <iostream>
#include <cmath>
#include <cstdlib>
#include  <fstream>

using namespace std;

void delete_repeats ( char letters[], int  i);

int main(){
	char letters[10];
	int i;
	
	cout << "Enter 10 lowercase characters." << endl;
	cin >> letters[i];
	
	delete_repeats(letters, i);
	
	for(i = 0, i < 10, i++)
		cout << letters[i]; 
	
	
	return 0;
}

void delete_repeats(char letters[10], int i){
	int t = 0;
	char prev = '.';
	  for(i=0, i<10, i++){
	  	t = i;
	  	if(letters[i] == prev)
	  		letters[i] = t;
	  }
}
