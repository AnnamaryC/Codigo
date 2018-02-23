//Annamary W. Cartagena
//802-15-1232
//Lab3Problem5-6
#include <iostream>
using namespace std;

double Hat(double weight, double height);
double Jacket(double height, double weight, int age);
double Waist(double height, double weight, int age);

int main(){
	int age;
	double height, weight;
	char ans;
	double hat_size, jacket_size, waist_in_inches; 	
do{
	cout << "Please input height(in), weight(lb), and age in that order seperated by a space." << endl;
	cin >> height >> weight >> age;
	cout << height << "(inches) is your height." << endl;
	cout << weight << "(lb) is your weight." << endl;
	cout << age << " years is your age." << endl;
	
	hat_size = Hat(weight, height);
	jacket_size = Jacket(height, weight, age);
	waist_in_inches = Waist(height, weight, age);
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	cout << "Your hat size is: " << hat_size << endl;
	cout << "Your Jacket size is: " << jacket_size << endl;
	cout << "Your waist in inches is: " << waist_in_inches << endl;
	
	jacket_size += .125;
	waist_in_inches += .5; 
	cout << "After 10 years, your jacket size will be: " << jacket_size << ", and your waist size will be: " << waist_in_inches << endl;
	
	cout << "Would you like to try again? (Y/n)" << endl;
	cin >> ans;
} while (ans == 'Y' || ans =='y');
	return 0;
}
double Hat(double weight, double height){
	return ((weight/height)*2.9);
}
double Jacket(double height, double weight, int age){
	double result;
	int measure_jacket, x;
	result = (height* weight)/228;	
	if (age > 30){
		x = age - 30;
		measure_jacket = (x/10);
		while(measure_jacket > 0){
			result += .125;
			measure_jacket--;
		}
	}return result;
}
double Waist(double height, double weight, int age){
	double result;
	int measure_waist, y;
	result = (weight/5.7);
	if (age > 28){
		y = age - 28;
		measure_waist = (y/2);
		while(measure_waist > 0){
			result += .1;
			measure_waist--;
		}
	}return result;	
}
