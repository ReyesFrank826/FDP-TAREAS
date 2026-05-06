/*Sistema de Puntuación de Videojuegos
Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.*/

#include <iostream>
using namespace std;

int main () {

    int puntaje;
    cout<< "\n========Bienvenido========" <<endl;
    cout<< "Ingrese su puntaje (1-5)" <<endl;
    cin >> puntaje;

    switch(puntaje){
        case 5:
        cout<< "\nPuntaje Perfecto!" <<endl;
        break;

        case 4:
        cout<< "\nPuntaje Excelente!" <<endl;
        break;

        case 3:
        cout<< "\nPuntaje bueno!" <<endl;
        break;

        case 2:
        cout<< "\nPuntaje bajo..." <<endl;
        break;

        case 1:
        cout<< "\nPuntaje muy bajo...." <<endl;
        break;

        default:

        cout <<"\nError: ingrese solo numeros validos"<<endl;
        return 1; //pa que se cierre
        break;
    }
    return 0;
};