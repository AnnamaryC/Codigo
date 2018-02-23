#include <iostream>
using namespace std;

int main (){
  double peso_kg, peso_lb, diferencia = 2.20462;
  
  cout << "La diferencia de un kilogramo a una libra es de 2.20462." << endl;
  cout << "Indique su person en kilogramos, despues aprete \" enter \":" << endl;
  cin >> peso_kg;

  peso_lb = (peso_kg * diferencia);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);

  cout << "Si usted pesa " << peso_kg << " en kilogramos, pues usted pesa "
       << peso_lb << " en libras. " << endl;

  return 0;
}
