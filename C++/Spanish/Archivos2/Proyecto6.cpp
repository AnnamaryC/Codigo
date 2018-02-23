//Annamary W. Cartagena
//Lemuel W. Cartagena
//Enero 18, 2018
//Profa. Flor Narciso
//Proyecto6

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

void calcular(double ventas, double& comision);
//entra ventas, sale comision
double Seguro(int estadocivil, int hijos);
// regresa prima si casado, soltero, hijos o no
bool leerValidarResp(bool& respuesta);
//repetir programa
void CantidadEmpleados(ifstream& input, int& num);
//calcula empleados que entran formulario
void Palabreria2(double a,double b,double c, ofstream& output);
//palabrearia bababababba
void input(double& estadocivil, double& hijos, double& ventas, ifstream& input);
//recoge input
void Palabreria(ofstream& output, double ultimasventas);
//ventas final de compañia 
  
int main(){
  double ventas, descuento, comision=0, a, b, ventasfinal =0;
  bool respuesta=0;
  int empleados= 0;
  ifstream recoge;
  ofstream saca;

  cout.setf(ios :: fixed);
  cout.setf(ios :: showpoint);
  cout.precision(2);

  recoge.open("entrada.txt");
  saca.open("salida.txt");

  if(recoge.fail()){
    cout << "No pudo abrirse el archivo de entrada." << endl;
    exit (1);
  }
  if(saca.fail()){
    cout << "No pudo abrirse el archivo de salida." << endl;
  	exit (1);
	  }
  
  do{
    CantidadEmpleados(recoge, empleados);
    if(empleados <= 0)
      saca << "ERROR"<< endl;
    else{
      for (int i = 1; i <= empleados; i++){
	cout << i << endl;
	saca << "Empleado " << i << endl;
      input(a, b, ventas, recoge);
      if(ventas <= 0 || a != 1 && a != 2 || b != 0 && b != 1 )
	saca << "ERROR" << endl;

      else{
      calcular(ventas, comision);
      descuento = Seguro(a,b);
      Palabreria2(comision, descuento,ventas, saca);
      ventasfinal += ventas;
      comision = 0;
      descuento = 0;
      }}
    }
   Palabreria(saca, ventasfinal);
   ventasfinal = 0;
  } while(leerValidarResp(respuesta));
  recoge.close();
  saca.close();
  return 0;
}


void calcular(double ventas, double& comision){
  if (ventas < 1000)
    comision =  0;
  else if (ventas >= 1000 && ventas <= 5000)
    comision = (ventas * .10);
  else if (ventas > 5000)
    comision =  ((ventas * .10) + 800);
}

double Seguro(int estadocivil,int hijos){
  if(estadocivil == 1)
    return 100;
  else{
  if(hijos == 0)
    return 250;
  else
    return  400;
  }}

bool leerValidarResp(bool& respuesta){
  char resp;
  do{
    cout << "Repetir?(S/N)" << endl;
    cin >> resp;
    if ( resp != 'S' && resp != 's' && resp != 'N' && resp != 'n')
      cout << "Error 4: Input invalida, por favor repetir." << endl;
  } while (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n');
    if(resp == 'S' || resp == 's')
      return true;
    else
      return false;
}


void CantidadEmpleados(ifstream& input, int& num){ 
      input >> num;
      if (num <= 0)
	cout << "Error 1: Cantidad de empleados menor o igual a cero. Por favor repetir." << endl;
} 

void Palabreria2(double a, double b,double c, ofstream& output){
  output << "Se paga esta cantidad esta semana sin la comision: " << 500 << "$" << endl;
  output << "Usted hizo esta cantidad de ventas para la empresa: " << c << "$" << endl; 
  output << "Se gano esta cantidad en comisiones: " << a << "$" << endl;
  output << "Se desconto esta cantidad en Seguro: " << b << "$" << endl;
  output << "Su sueldo neto es " << a + 500 << "$" << endl;
  output << "Su sueldo final sera " << a + 500 - b << "$" << endl << endl;
}

void input(double& estadocivil, double& hijos, double& ventas, ifstream& input){
    input >> ventas;
    if(ventas <= 0)
      cout << "Error 5: ventas menor o igual a 0. Por favor repetir TODOS inputs." << endl;
    input >> estadocivil;
    if (estadocivil != 1 && estadocivil != 2)
      cout << "Error 2: Codigo Estado Civil incorrecto, por favor repetir TODOS inputs." << endl;
    input >> hijos;
    if(hijos != 0 && hijos != 1)
      cout << "Error 3: Codigo Hijos incorrecto, por favor repetir TODOS inputs." << endl;
}

void Palabreria(ofstream& output, double ultimasventas){
  output << endl << "La compañia gano " << ultimasventas << "$ en ventas de sus empleados esta semana." << endl;
}
