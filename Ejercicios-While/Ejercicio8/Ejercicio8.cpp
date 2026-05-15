/*Promedio de Calificaciones
Pide calificaciones al usuario hasta que ingrese un número negativo, luego muestra el promedio.*/

#include <iostream>
using namespace std;

int main(){

    float notas=0, suma=0, prom=0;
    int numNotas=0;

    cout << "\n******************Bienvenido al sistema de notas estudiantil ******************"<<endl;
    
    do{
    cout << "\nIngrese las calificaciones (ingrese un negativo para salir): ";
    cin >> notas;
    suma = suma + notas;
    numNotas++;
    }while(notas >=0);
        
    numNotas-=1;
    prom = suma/numNotas;
    cout << "\nNotas ingresadas: " <<numNotas;
    cout << "\nEl promedio de notas es: " <<prom<<endl;

    return 0;
}