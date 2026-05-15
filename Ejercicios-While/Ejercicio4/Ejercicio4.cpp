/*Menú Interactivo
Crea un menú que se repita hasta que el usuario elija la opción de salir.*/

#include <iostream>
using namespace std;

int main()
{
    int opcion;

    do
    {
        cout << "\n=============Menu Principal=================" << endl;
        cout << "- 1. Agregar datos      -" << endl;
        cout << "- 2. Editar datos       -" << endl;
        cout << "- 3. Eliminar datos     -" << endl;
        cout << "- 4. Salir              -" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3)
        {
            cout << "\n********Logica de lo que elegiste aqui...en teoria********" << endl;
        }
        else if (opcion != 4)
        {
            cout << "\n------------ERROR: Elige una opcion valida------------" << endl;
        }

    } while (opcion != 4);

    cout << "\n-Programa cerrado" << endl;

    return 0;
}