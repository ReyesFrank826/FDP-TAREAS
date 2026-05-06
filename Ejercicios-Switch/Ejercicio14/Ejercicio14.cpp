/*Sistema de Transporte Público
Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.*/

#include <iostream>
using namespace std;

int main () {

    int op;
    cout<< "\n========Bienvenido al sistema de transporte publico========" <<endl;
    cout << "\n1. Bus" << endl;
    cout << "2. Metro" << endl;
    cout << "3. Taxi" << endl;
    cin >> op;

    switch(op){
        case 1:
        cout<< "\nCosto estimado: 35cv ($0.35)" <<endl;
        break;

        case 2:
        cout<< "\nCosto estimado: $3.50" <<endl;
        break;

        case 3:
        cout<< "\nCosto estimado: $5.00" <<endl;
        break;

        default:

        cout <<"\nError: ingrese solo numeros validos"<<endl;
        return 1; //pa que se cierre
        break;
    }
    return 0;
};