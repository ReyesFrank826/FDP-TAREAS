/*Velocidad y Multa
Pide la velocidad de un conductor. Si supera los 60 km/h, se le aplica una multa; si supera los 80 km/h, la multa es mayor.*/

#include <iostream>
using namespace std;

int main () {

    float vel;
    int multaMenor = 100, multaMayor=150; //segun el reglamento vial del SV, pero yo opino que seria mejor una multa incrementable lol

    cout << endl <<endl << "Eres un conductor y estas en una revision de velocidad" << endl;
    cout << "Ingrese su velocidad" << endl;

    if (!(cin >> vel)) { //esto se lee como "Si NO se pudo leer un dato valido de vel", el ! es como un NO logico o una negacion  lol
        cout << endl << "Error: Ingrese datos validos (numeros solamente)." << endl << endl; //el mensaje de error, se devuelve 1 porque son datos no validos, el 1 se usa para eso, el 0 para cuandoi todo salio bien
        return 1; // Sale del programa, una mini validacion basicamente sin  usar try catch ni bucles, nomas para el programa antes de tirar datos erroneos o basura
    }

    //LAS CONDICIONES AQUI
    if (vel > 60 && vel <= 80){
        cout << endl << "Su velocidad excede de los 60km/h, su multa es de: " << multaMenor << endl<< endl;
    }else if (vel > 80){
        cout << endl << "Su velocidad excede de los 80km/h, su multa es de: " << multaMayor << endl<< endl;
    }else if (vel > 0 && vel <= 60){
        cout << endl << "Velocidad dentro del limite permitido" << endl<< endl;
    }else {
        cout << endl << "Error: la velocidad no puede ser negativa" << endl<< endl;
    }

    return 0;
};