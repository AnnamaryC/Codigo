#include <iostream>
#include <cmath>
using namespace std;
//complete
double basal_metabolic_rate(int weight);
double physical_activity(double intensity, double weight, double minutes);
double energy_to_digest_food(double calories);

int main(){
	double intensity, weight, minutes_spent, calories_in_serving;
	int servings;
	double calories_required, calories_required2, calories_required3, total_calories_required;
	
	cout << "Input weight in pounds, your intensity in excersize and the minutes spent excersizing in that order seperated by a space." << endl;
	cin >> weight >> intensity >> minutes_spent;
	cout << "Input the amount of calories in one serving of your favorite food" << endl;
	cin >> calories_in_serving;
	
	calories_required = basal_metabolic_rate(weight);
	calories_required2 = physical_activity(intensity, weight, minutes_spent);
	calories_required3 = energy_to_digest_food(calories_in_serving);
	total_calories_required = calories_required + calories_required2 + calories_required3;
	
	servings = total_calories_required / calories_in_serving;
	
	cout << "The amount of calories required for your basal metabolic rate is: " << calories_required << endl;
	cout << "The amount of calories required for you phyisical activity with an intensity of " << intensity << " is: " 
	<< calories_required2 << endl;
	cout << "The amount of calories you need to digest your food with a calorie serving of " << calories_in_serving 
	<< " calories is: " << calories_required3 << endl;
	cout << "The total amount of calories you need for all three activities is: " << total_calories_required << endl;
	cout << "At the end of the day, this is the amount of servings of your favorite food you need to eat daily to maintain your weight: "
	<< servings; 
	
	return 0;
}

double basal_metabolic_rate(int weight){
	double result;
	result = 70.0 * pow((weight/2.2),(0.756));
	return result;
}
double physical_activity(double intensity, double weight, double minutes){
	double result;
	result = 0.0385 * intensity * weight * minutes;
	return result;
}
double energy_to_digest_food(double calories){
	double result;
	result = calories * 0.1;
	return result;
}
