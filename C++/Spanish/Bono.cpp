//bono
//annamary
//examenfinal

#include <iostream>
#include <fstream>
#include <cstdlib>

#define N 10

using namespace std;

void ordenarNumeros(int num[], int ne){
    double temp;
    int i, j;
    
    for(i = 0; i < ne; i++)
        for(j = 0; j < ne - 1; j++)
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1]=temp;
                
            }
}

void leerNumeros(int& num[], int& ne) {
    int i;
    for (i = 0; i < ne; i++)
        cin >> num[i];
}

void escribirNumeros(int num[], int ne){
	 int i;
    for (i = 0; i < ne; i++)
        cout << num[i];
}

int main (){
	int array[N], x;
	cout << "Escribir 10 numeros." << endl;
	leerNumeros(array, x);
	ordenarNumeros(array, x);
	
	return 0;
}
