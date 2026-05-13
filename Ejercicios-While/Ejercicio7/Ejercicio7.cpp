/*Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.*/

#include <iostream>
using namespace std;
int main(){

        int num=0,contador=0;
        /*do{

             //FORMA 1
        cout<<"\nIngrese un numero entero: ";
        if(!(cin>>num) || num < 0){ //si el num ingresado es distinto a int o el numero es menor que 0, se hara lo que este en el bloque
            cout<<"\nERROR: ingrese solo numeros enteros positivos" <<endl; 
            cin.clear(); //se limpia la entrada del cin
            cin.ignore(1000, '\n'); //el buffer tambien
            num = -1; //se le asigna -1 porque al ingresar letras su valor se vuelve 0, y 0 desencadena el bucle while principal, el de while(contador >= 0)
        }
            
        contador = num;
        
        }while(num <0);*/

            
        //FORMA 2 - un bucle "infinito" roto con la condicion cumplida
        while (true){
            cout<<"\nIngrese un numero entero: ";
            if (cin >> num && num >= 0){
                contador = num; //si se cumple la condicion, se asigna el valor del num a contador
                break; //si se cumple que el valor de num es int y num sea mayor o igual que 0, se rompe el bucle
            }
                cout<<"\n-ERROR: ingrese solo numeros enteros positivos-" <<endl; //mientras no se cumpla, imprimira un mensaje de error
                cin.clear(); //se limpia el valor de cin, es decir, reinicia el estado de cin.fail, de true a false, pero el dato mal puesto sigue ahi
                cin.ignore(1000, '\n'); //y se limpia el buffer para que no agarre datos basura, es decir, limpia el dato mal puesto, le dice a la funcion que limpie 1000 caracteres a menos que encuentre un salto de linea
        }
        
        cout<<"\n=============Cuenta regresiva inciada============="<<endl; //solo se repetira una vez, asi que esta afuera del while
        
        while(contador >= 0){ //mientras que el contador sea mayor o igual a 0, se repetira lo del bloque
            cout<<"\nCuenta regresiva: "<<contador;
            contador--; //es un decremento de 1 en 1, como el i++, solo que ese es en aumento de 1 en 1
        }

        cout<<"\n=============La cuenta a finalizado============="<<endl<<endl;

    return 0;
    }

