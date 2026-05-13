/*Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.*/

#include <iostream>
using namespace std;

int main (){

    int num=0, suma=0;

    cout << "\nIngrese un numero entero";
    cin >> num;

    while(num != 0){ //esto es la condicion, dice "mientras num sea diferente a 0, haz esto" pero en bucle
        suma = suma + num; //esto hace que se vayan sumando los numeros

        cout << "Ingrese nuevamente numero entero:";
        cin >> num;
    }

    cout << "\nLa sumatoria de los numeros ingresados es: " << suma<< endl;

    return 0;
}

/*IMPORTANTE*/
/*While (Pregunta primero):
Es como un guardia de discoteca. Si no tienes la invitación (la condición), no entras ni una sola vez.

Do-While (Pregunta después):
Es como un restaurante. Primero entras, comes y, al final, te preguntan si quieres seguir o si tienes con qué pagar.
Aquí siempre se ejecuta el código al menos una vez.*/