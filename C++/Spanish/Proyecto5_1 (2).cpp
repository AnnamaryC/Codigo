//Annamary W. Cartagena
//Lemuel W. Cartagena
//fecha
//Profa. Flor Narciso
//Proyecto5

#include <iostream>
using namespace std;

double calcular(double ventas);
//ventas.  si X < 1000, no comision
// si 1000 < x < 5000, 10% ventas
// si  x > 5000, 800$ + 10% ventas
double Seguro();
// si soltero, resta 100 del pago
//si casa@ 250
//si hijos 400
bool leerValidarResp();
//repetir
  
int main(){
  double ventas, descuento, comision, ventasfinal=0;
  bool respuesta;
  int empleados;
  do{

    do {
      cout << "Cuantos empleados entraran a este formulario?" << endl;
      cin >> empleados;
      if (empleados <= 0)
	cout << "Error 1: Cantidad de empleados menor o gial a cero. Por favor repetir." << endl;
    } while(empleados <= 0);
    for (int i=1; i <= empleados; i++){
      do{
	cout << "Empleado: " << i << endl;
	cout << "Seras pagado 500$ por semana mas una comision por sus ventas." << endl;
	cout << "Introduca dinero adquirido por ventas." << endl;
	cin >> ventas;
	if(ventas <= 0)
	  cout << "Error 5: ventas menor o igual a 0. Por favor repetir." << endl;
      }while(ventas <= 0);
      comision = calcular( ventas);
      cout <<"Por ganar "<< ventas <<  "$, pues ganastes esta cantidad en comisiones: " << comision << "$" << endl;

      descuento = Seguro();

      cout << "Se desconto esta cantidad en Seguro: " << descuento<< "$" << endl;
      cout << "Su sueldo neto es " << comision + 500 << "$" << endl;
      cout << "Su sueldo final sera " << comision + 500 - descuento << "$" << endl << endl;
      ventasfinal += ventas;
    }
    cout << "La compañia gano " << ventasfinal << "$ en ventas de sus empleados esta semana." << endl;
    
    respuesta = leerValidarResp();
  } while(respuesta);

  return 0;
}



double calcular(double ventas){
  double x;
  if (ventas < 1000)
    return x =0;
  else if (ventas >= 1000 && ventas <= 5000)
    return x = ventas * .10;
  else if (ventas > 5000)
    return x = (ventas * .10) + 800;
}

double Seguro(){
  double estadocivil, hijos;
  do{
    cout << "Se descuenta del sueldo una prima por Seguro de Salud" << endl;
    cout << "Cual es su estado civil?"<< endl;
    cout << "(1) Para soltero/a, (2) para Casado/a" << endl;
    cin >> estadocivil;
    if (estadocivil != 1 && estadocivil != 2)
      cout << "Error 2: Codigo incorrecto, por favor repetir." << endl;
     
  }while(estadocivil != 1 && estadocivil != 2);

  if(estadocivil == 1)
    return 100;
  else{
    cout << "Usted tiene hijos?" << endl;
    cout << "(0) si no tiene hijos, (1) si tiene hijos" << endl;
    cin >> hijos;
    if(hijos != 0 && hijos != 1)
      cout << "Error 3: Codigo incorrecto, por favor repetir." << endl;
  }while (hijos != 0 && hijos != 1);

  if(hijos == 0)
    return 250;
  else
    return  400;
}

bool leerValidarResp(){
  char resp;

  do{
    cout << "Desea Repetir?(S/N)" << endl;
    cin >> resp;
    if ( resp != 'S' && resp != 's' && resp != 'N' && resp != 'n')
      cout << "Error 4: Input invalida, por favor repetir." << endl;
  } while (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n');
    if(resp == 'S' || resp == 's')
      return true;
    else
      return false;

}
