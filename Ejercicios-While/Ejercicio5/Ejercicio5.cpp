/*Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.*/

#include <iostream>
using namespace std;

int main()
{

    int num = 0, suma = 0, contador = 2;

    cout << "\nIngrese un numero entero: ";
    cin >> num;

    while (contador <= num)
    {
        suma = suma + contador;
        contador += 2;
    }

    cout << "\nLa suma de los pares es: " << suma << endl;
    return 0;
}
