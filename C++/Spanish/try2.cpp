#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double a, b, c,s, perimetro, area;
  cout << "El perimetro de un triagulo es la suma de sus lados de Forma P = a + b + c" << endl;
  cout << "El area de un triangulo es la multiplicacion de la base por la altura dividid a por 2, de forma A = hb/2 " << endl;
  cout << "Indique el lado a, la base b, y el lado c, en ese orden, separado por un espacio y aprete \"enter\": " << endl;
  cin >> a >> b >> c;
  cout << "A es: " << a << ", B(base) es: " << b << " y C es: " << c
       << endl;

  perimetro = (a + b + c);
  s = ((a + b + c)/2); //Heron's Formula
  area = sqrt((s)* (s-a)*(s-b)* (s-c)); //Heron's Formula
  
  cout << "El perimetro del triangulo es: " << perimetro << endl;
  cout << "El area del triangulo es: " << area << endl;
  



  return 0;
}
