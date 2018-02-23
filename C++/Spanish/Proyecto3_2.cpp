//Annamary W. Cartagena
//802-15-1232
//fecha
//Proyecto3_2

#include <iostream>
using namespace std;

int main(){
	char x;
	
	cout << "Porfavor indique una de las condiciones climaticas abreviadas a su letra inicial" << endl;
	cout << "(T)Tormenta, (L)Lluvia, (B)Bueno, (S)Seco" << endl;
	cin >> x;
	
	if(x == 't'|| x =='T')
		cout << "TORMENTA: Usar impermeable y sombrero." << endl;
	
	else if (x == 'l'|| x =='L')
		cout << "LLUVIA: Usar impermeable y paraguas." << endl;
		
	else if (x == 'b'|| x =='B')
		cout << "BUENO: Usar chaqueta y paraguas." << endl;
		
	else if (x == 's'|| x =='S')
		cout << "SECO: Usar chaqueta." << endl;
		
	else
		cout << "Error 1: Condicion Climatica invalida" << endl;
	
	
	return 0;
}
