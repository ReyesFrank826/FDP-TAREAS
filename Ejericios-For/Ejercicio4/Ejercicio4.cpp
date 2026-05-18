/*Tabla de Multiplicar
Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.*/

#include <iostream>
using namespace std;

int main(){

    int n=0;

    cout<<"ingrese un numero entero: ";
    cin >> n;

    for(int i=1; i<=10 ;i++){

        cout<<"| "<<n<<" x "<<i<<" = "<<n*i<<" |"<<endl;
    }

    return 0;
}