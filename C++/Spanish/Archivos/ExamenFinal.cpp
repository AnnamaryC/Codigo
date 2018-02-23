//Annamary W. Cartagena

#include <iostream>
#include <fstream>
#include <cstdlib>

#define N 10

using namespace std;

void leerCantidadNumeros(ifstream &archEnt, int &n); 
void leerNumeros(char num[], int ne, ifstream &archEnt); 
void operaciones(char num[], int n, ofstream& archSal); 
void escribirResultados(double sum, double res, double mul, ofstream &archSal); // Escribe el resultado de la suma,
                                                               // resta y multiplicacion de los numeros del arreglo
void ordenarNumeros(char num[], int ne); // Ordena los numeros del arreglo de forma ascendente
void escribirNumeros(char num[], int ne, ofstream &archSal); // Escribe los numeros del arreglo
void escribirMenorMayor(char num[], int ne, ofstream &archSal); // Escribe el numero menor y el mayor del arreglo

int main(void)
{
    int numEltos, n;
    char tabla[N], suma, resta, multiplica;
    ifstream archivoEntrada;
    ofstream archivoSalida;
    
    archivoEntrada.open("entrada.txt"); // Abrir y validar si se puede abrir el archivo de entrada
    if (archivoEntrada.fail()) {
        cout << "No pudo abrirse el archivo de entrada" << endl;
        exit(1);
    }
    archivoSalida.open("salida.txt"); // Abrir y validar si se puede abrir el archivo de salida
    if (archivoSalida.fail()) {
        cout << "No pudo abrirse el archivo de salida" << endl;
        exit(1);
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    archivoSalida.setf(ios::fixed);
    archivoSalida.setf(ios::showpoint);
    archivoSalida.precision(2);
    
    leerCantidadNumeros(archivoEntrada, numEltos);
    if (numEltos <= 0) {
        cout << "La cantidad de numeros es menor o igual que cero" << endl;
        cout << "No se pueden realizar las operaciones" << endl;
    } else if (numEltos > N) {
        cout << "La cantidad de numeros es mayor que el tamano del arreglo" << endl;
        cout << "No se pueden realizar las operaciones" << endl;
    }
    else {
    	leerNumeros(tabla, numEltos, archivoEntrada);
    	do{
    		cout << "Presentar en el archivo como vestire(1) o salir(2)?" << endl;
    		cout << "Para contar cantidad de B(bueno), seleccionar (3)" << endl;
			cin >> n;
			if (n != 1 && n!= 2 && n!=3)
			cout << "Error 2: input invalida, por favor repetir." << endl;
		} while(n != 1 && n != 2 && n!=3);
    	if (n == 1){
    		operaciones(tabla, numEltos, archivoSalida);
		}
    	else if (n== 2)
    		return 0;
   		else{
   			operaciones(tabla, numEltos, archivoSalida);
		   int a = 0;
   			for(int i=0; i < N; i++){
			   if(tabla[i] == 'b' || tabla[i] == 'B')
   				a++;
			   }
		   cout << "Cantidades de BUENO: " << a << endl;
		   }
    }
    archivoEntrada.close();
    archivoSalida.close();

    return 0;
}

void leerCantidadNumeros(ifstream &archEnt, int &n) {
    archEnt >> n;
}
void leerNumeros(char num[], int ne, ifstream &archEnt) {
    int i;
    
    for (i = 0; i < ne; i++)
        archEnt >> num[i];
}

void operaciones(char num[], int n, ofstream& archSal){
	int i;
	for (i=0; i < n; i++){
			switch(num[i]){
				case 't': case 'T':
				 archSal << "TORMENTA: Usar impermeable y sombrero." << endl;
				 break;
				 case 'l': case 'L':
				 archSal << "LLUVIA: Usar impermeable y paraguas." << endl;
				 break;	
				 case 'b': case 'B':
				 archSal << "BUENO: Usar chaqueta y paraguas." << endl;
				 break;
				 case 's': case 'S':
    			 archSal << "SECO: Usar chaqueta." << endl;
				 break;
				 default:
    			 archSal << "Error 1: Condicion Climatica invalida" << endl;
				 break;
			}
	}
}
