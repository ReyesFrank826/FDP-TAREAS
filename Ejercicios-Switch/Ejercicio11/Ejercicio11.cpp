/*Calculadora Avanzada
Mejora la calculadora simple agregando ^ para exponenciación y % para módulo.*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int operaciones;
    int num1, num2, result;

    cout<< "\n=================Bienvenido a la mini calculadora=================" <<endl;
    cout<< "\n1. Potenciacion (^)";
    cout<< "\n2. Modulo o o resto (%)" <<endl;
    cin >> operaciones;

    if(operaciones <1 || operaciones >2){
        cout<< "\nError: ingrese un numero valido"<<endl;
        return 1;
    }

    switch(operaciones){
        case 1:

        cout <<"\nIngrese el coeficiente: "; cin >> num1;
        cout <<"\nIngrese la potencia: "; cin >> num2;

        result = pow(num1, num2);

        cout <<endl<<num1 << "^" << num2 << " = " << result <<endl;

        break;

        case 2:

        cout <<"\nIngrese el dividendo: "; cin >> num1;
        cout <<"\nIngrese el divisor: "; cin >> num2;

        result = fmod(num1, num2);

        cout <<endl<<num1 << "/" << num2 << ", con residuo = " << result <<endl;

        break;
    }
    return 0;
};