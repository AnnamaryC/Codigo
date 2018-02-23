// Annamary W. Cartagena
//802-15-1232
//Prof. Marko Schutz
#include <iostream>
using namespace std;

int main()
{
char answer;
do {

	int height, weight, age, hat_size, jacket_size, waist_inches, jacket_modify, waist_modify;
	
	cout << "We are going to determine your hat size, jacket size and waist in inches based on your height, weight and age." << endl;
	cout << "Please input your height in inches(in.)" << endl;
	cin >> height;
	cout << "Please input your weight in pounds(lbs.)" << endl;
	cin >> weight;
	cout << "Please input your age." << endl;
	cin >> age;
	
	hat_size = (weight / height ) * 2.9;
	cout << "Your hat size is " << hat_size << "." << endl;
	


if (age > 30)
{  
	jacket_modify = ((age - 30)/10) * (1/8);
	jacket_size = ((height * weight) / 288) + jacket_modify;
}
else
{
	jacket_size = (height * weight) / 288;
}
	cout << "Your jacket size is " << jacket_size << " inches." << endl;
	

if(age > 28)
{
	waist_modify = ((age - 28)/2) * (1/10);
	waist_inches = (weight/5.7) + waist_modify;
}
else
{
waist_inches = weight/5.7;
}	
	cout << "Your waist is " << waist_inches << " inches." << endl; 
	
	
	
	jacket_size += (1/8);
	waist_inches += (1/10);
cout << "In ten years, your hat size will be " << hat_size;
cout << ", your jacket size will be " << jacket_size;
cout << ", and your waist(in inches) will be " << waist_inches << "." << endl;



	cout << "Do you wish to repeat? (Y/N)" << endl;
	cin >> answer;
}
while (answer == 'Y'|| answer == 'y');	
	return 0;
}
