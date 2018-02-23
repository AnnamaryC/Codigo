//Annamary W. Cartagena
//Lemuel W. Cartagena
//Septiembre 12, 2017
//Profa. Flor Narciso

#include <iostream>
using namespace std;

int main(){
  double a, b, c, d, promedio;

  cout << "Por favor indique 4 numeros reales, separados por un espacio y aprente \"enter\" para obterner su promedio." << endl;
    cin >> a >> b >> c >> d;

    promedio = (( a + b + c + d)/4);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout << "El promedio de " << a << ", " << b << ", " << c << " y " << d << " es: " << promedio << "." << endl;  



  return 0;
}
