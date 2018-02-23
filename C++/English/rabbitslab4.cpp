#include <iostream>
using namespace std;

//incomplete
int rabbit_growth(int num_rabbits, double monthly_gorwth, int num_months);

int main (){
	
	int num_months, num_rabbits, final_num_rabbits;
	double monthly_growth;
	char ans;
	
	do{	
		cout << "Input number of rabbits, monthly growth in percent and number of months to compute." << endl;
		cout << "Ipute in that order seperated by a space, then press enter." << endl;
		cin >> num_rabbits >> monthly_growth >> num_months;
		
		monthly_growth /= 100;
		
		final_num_rabbits = rabbit_growth(num_rabbits, monthly_growth, num_months);
		
		cout << "Try again? (Y/n)" << endl;
		cin >> ans;
		
		ans = tolower(ans);
	}while (ans == 'y');
	
	return 0;
}

int rabbit_growth(int num_rabbits, double monthly_growth, int num_months){
	int count;
	monthly_growth += 1;
	for(count = 0, count <= num_months, count++)
		num_rabbits *= monthly_growth;
	return num_rabbits;
}
