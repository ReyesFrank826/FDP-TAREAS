/*Promedio de Calificaciones
Pide calificaciones al usuario hasta que ingrese un número negativo, luego muestra el promedio.*/


//op sincera, no me gusto como era el programa siguiendo la logica de que para hasta que haya un numero negativo
#include <iostream>
using namespace std;

int main(){

    float notas=0, suma=0, prom=0;
    int contador=0, numNotas=0;

    cout << "\n******************Bienvenido al sistema de notas estudiantil******************"<<endl;

    //PRIMERA VALIDACION PAPU! - comprueba que no metas numeros o negativos dentro de un while

    while(true){ //es un bucle "infinito" a menos que se rompa con break o false, pero como no le hemos asignado una variable que tenga TRUE o FALSE, es con break
        cout << "\nCuantas calificaciones quieres ingresar? ";
        if(cin >> numNotas && numNotas >=0){ //comprueba si el dato de numNotas es int & si numNotas es mayor o igual a 0, y si si, se rompe el bucle
            cout << "\n         *Calificaciones del 1-10*"<<endl;
            break;
        }
        cout <<"\n----------ERROR: solo ingrese numeros enteros positivos-----------"<<endl;
        cin.clear(); //le quita el estado de error al cin para no entrar en un bucle infinito, es decir, vuelve a dejar que se lean datos
        cin.ignore(1000,'\n'); //limpia el dato mal ingresado
    }

    //BLOQUE PRINCIPAL! - mientras que el contador sea menor que el numero de calificaciones que se pide al inicio, seguira pidiendo datos
    //para luego sumarlos y dividirlos para sacar el promedio
    while (contador<numNotas){
    cout << "\n    * Ingrese su nota " <<contador+1<<" (o un  numero negativo para salir): ";

    //SEGUNDA VALIDACION! - si lo que ingreses como nota NO ES int, se limpiara lo que sea que hayas metido y te dejara volver a meter
    //algun valor hasta que alguna de las 2 condiciones se cumpla por el concetor OR, y se restara 1 al contador pa que se quede igual
    //y el programa no acabe hasta que logres meter lo que se te pide

    if(!(cin>>notas) || notas >10 ){
        cout <<"\n      ----------ERROR: ingrese solo numeros enteros positivos o 0 (1-10)-----------"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        contador--;
    }

    if(notas<0){ //y si, no se pueden usar if, pero bro, queria hacer que el programa fuera mas denso como si fuera proyecto real, para emular un problema real con validaciones
        break; //si el usuario mete un negativo, se cierra el bucle
    }

    contador++;
    suma += notas;
    }

    //prom = suma/numNotas;
    //cout << "\nPromedio total: " <<prom<<endl;

    // si queremos validar menos, des-comenta esto:


    //TERCERA VALIDACION! - se comprueba que si hayan datos con los que operar, sino saldra un dato erroneo o basura

    if(contador >0){
        prom = suma/numNotas;
        cout << "\nPromedio total: " <<prom<<endl;
    }else{
        cout << "\n----------No se ingresaron notas para promediar----------"<<endl<<endl<<endl;
    }
    


    return 0;
}

/*Como podras ver, es super complicado para un problema tan simple, pero me da cancer dejar cosas al aire, lo de meter letras en un int
numeros negativos en donde no se deberia, casos extra, la cosa es no dejar algu  huequito en el que el programa tire datos basura
o aun peor, se crashee, pero lo de crashear no es el caso, no es tan heavy como para que pase eso

TOTAL, que nomas queria ver como quedaba si si fuera un sistema que se pueda utilizar, no solo un ejercicio y ya
Perdon profe, me gusta hacer esto :P

LA COSA ES QUE FUNCIONA Y CREO QUE NO ES TAN CHAMBÓN! - digo yo vea*/