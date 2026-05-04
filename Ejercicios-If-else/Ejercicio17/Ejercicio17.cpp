/*Precio de Entrada a un Parque
Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.*/

#include <iostream>
using namespace std;

int main () {

    int edad;
    const int pagoMin = 5; //al ser constante, nunca cambiara en el transcurso de la ejecuccion del programa y si en algun caso da error
    const int pagoMax = 10; //por asignarle otro valor a estas variables, sabras a donde y porque esta el error, por buenas practicas (o al menos asi lo entendi, tiene sentido)

    cout << endl <<"Ingrese su edad" << endl;
    cin >> edad;

    if(edad >0 && edad <5){
    cout << endl <<"Bienvenido a nuestro parque - precio: Gratis" << endl;

    }else if(edad >=5 && edad <12){
    cout <<endl << "Bienvenido a nuestro parque - precio: " << pagoMin <<endl;
    }else if(edad >= 12){
    cout <<endl << "Bienvenido a nuestro parque - precio: " << pagoMax <<endl;
    }else {
    cout <<endl << "Lo sentimos, hubo un problema al procesar su entrada, ingrese numeros validos" <<endl;
    }

    return 0;
};