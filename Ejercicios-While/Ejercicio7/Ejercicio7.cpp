/*Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.*/

#include <iostream>
using namespace std;
int main(){

        int num=0;

        cout<<"\nIngrese un numero entero: ";
        cin >> num;

        cout<<"\n=============Cuenta regresiva inciada============="<<endl; //solo se repetira una vez, asi que esta afuera del while
        
        while(num >= 0){ //mientras que el contador sea mayor o igual a 0, se repetira lo del bloque
            cout<<"\nCuenta regresiva: "<<num;
            num--; //es un decremento de 1 en 1, como el i++, solo que ese es en aumento de 1 en 1
        }

        cout<<"\n=============La cuenta a finalizado============="<<endl<<endl;

    return 0;
    }

