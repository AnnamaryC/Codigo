//Annamary W. Cartagena
//802-15-1232
//fecha
//Proyecto3_2

#include <iostream>
using namespace std;

int main(){
  char x, ans;

  do{
	cout << "Porfavor indique una de las condiciones climaticas abreviadas a su letra inicial" << endl;
	cout << "(T)Tormenta, (L)Lluvia, (B)Bueno, (S)Seco" << endl;
	cin >> x;

	switch(x){
	case 't': case 'T':
	  cout << "TORMENTA: Usar impermeable y sombrero." << endl;
	break;
        case 'l': case 'L':
          cout << "LLUVIA: Usar impermeable y paraguas." << endl;
	  break;	
        case 'b': case 'B':
          cout << "BUENO: Usar chaqueta y paraguas." << endl;
	  break;
        case 's': case 'S':
          cout << "SECO: Usar chaqueta." << endl;
	  break;
	default:
          cout << "Error 1: Condicion Climatica invalida" << endl;
	  break;
	}

	cout << "Deseas repetir?(Y/N)"<< endl;
	cin >> ans;
  }while (ans == 'Y' || ans == 'y');
	
	return 0;
}
