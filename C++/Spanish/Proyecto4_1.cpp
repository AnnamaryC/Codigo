//Annamary W. Cartagena
//802-15-1232
//7 de Diciembre de 2017
//Proyecto4_1
//Profa. Flor Narciso


#include <iostream>
using namespace std;

int main (){
  double peso_kg, peso_lb, diferencia, chose;
  char answer;
  
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

  do{
    cout << "La diferencia de un kilogramo a una libra es de 2.20462." << endl;
    cout << "La diferencia de una libra a un kilogramo es de 0.453592." << endl;
    cout << "Para convertir de kilogramos a libras, aprete el teclado (1)."<< endl;
    cout << "Para convertir de libras en kilogramos, aprete el teclado (2)."<< endl;
    cin >> chose;

    if( chose == 1){
      do{
      cout << "Indique su peso en kilogramos, despues aprete \" enter \":" << endl;
      cin >> peso_kg;

      if(peso_kg <= 0)
	cout << "Error 1: el peso indicado es menor de cero o es cero." << endl; 
      } while (peso_kg<=0);

      diferencia = 2.20462; 
      peso_lb = (peso_kg * diferencia);

      cout << "Si usted pesa " << peso_kg << " en kilogramos, pues usted pesa "
	   << peso_lb << " en libras. " << endl;
      }

    else if( chose == 2){
      do{
      cout << "Indique su peso en libras, despues aprete \" enter \":" << endl;
      cin >> peso_lb;

      if(peso_lb <= 0)
	cout << "Error 1: el peso indicado es menor de cero o es cero." << endl; 
      } while (peso_lb <=0);
      
	diferencia = 0.453592; 
	peso_kg = (peso_lb * diferencia);

	cout << "Si usted pesa " << peso_lb << " en libras, pues usted pesa "
	     << peso_kg << " en kilogramos. " << endl;
      }
    else 
      cout << "Error 2: Opcion invalida" << endl;
    


   cout << "Deseas repetir? (Y/N)" << endl;
   cin >> answer;
  }while(answer == 'y' || answer == 'Y');

  return 0;
}

