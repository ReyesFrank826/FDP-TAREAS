/*Doble Verificación de Datos
Pide dos contraseñas y verifica si coinciden antes de continuar.*/

#include <iostream>
using namespace std;

int main () {

    string contrasena1, contrasena2;
    
    cout << "\nBienvenido a la doble autenticacion de contrasena" << endl;
    cout << "Ingrese su contrasena" << endl;
    cin >> contrasena1;

    cout << "\nConfirme su contrasena" << endl;
    cin >> contrasena2;

    if(contrasena1 == contrasena2){
    cout << "\nBienvenido al sistema" << endl; //el "\n" es casi lo mismo que el endl, es un salto de linea pero siento que se ve mas ordenado con \n
    }else{
    cout <<"\nError, contrasenas incorrectas, vuelva a intentar" <<endl;
    }

    //aqui deberia de ir un bucle, pero como aqui no hay un numero de intentos validos, serian literal bloques "if" infinitos
    //se deberia de poner alguna validacion para que la contraseña sea mayor de x caracteres y que contenga ciertos caracteres especiales
    //pero como no podemos usar bucles, no lo pondremos todavia, lastima

    return 0;
};