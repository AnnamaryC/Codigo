//Annamary W. Cartagena
//802-15-1232
//fecha
// Proyecto3_3

#include <iostream>
using namespace std;

int main(){
  int s, x, y;
  char ans;

  do{
  cout << "Capacidad maxima en una sala de reuniones." << endl;

  do{
    cout << "Indique cual es la capacidad maxima de personas en la sala de reuniones" << endl;
    cin >> x;
    
    if ( x <= 0)
      cout << "Error 1: capacidad de sala invalida." << endl;
  }while (x <= 0);

  do{
    cout << "Indique el numero de personas que asistira a la reunion" << endl;
    cin >> y;

    if (y <=0)
      cout << "Error 2: capacidad de personas ivalida." << endl;
  }while (y <=0);

    
    if ( y <= x){
      s = x - y;
      cout << "Esta permitido celebrar la reunion" << endl;
      cout << "Tienes suficiente espacio para esta cantidad de personas: " << s << endl;
    }

    else if (y >= x){
	s=y-x;
	cout << "La reunion no puede celebrarse segun lo planeado a causa de la ley contra incendios." << endl;
	cout << "Profavor excluir esta cantidad de personas para cumplir con esta ley: " << s << endl; 
      }
    cout << "Deseas repetir? (Y/N)" << endl;
    cin >> ans;
  }while(ans == 'y' || ans == 'Y');

  return 0;
}
