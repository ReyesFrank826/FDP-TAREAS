/*Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.*/

#include <iostream>
using namespace std;

int main(){

    int num=0,suma=0, contador=2;
    bool error;

    do {
        cout << "\nIngrese un numero entero: ";
        cin >> num;

        error = cin.fail(); //es para guardar si el error es true o false, cin.fail se activa y es true cuando el dato no es int (en este caso)

        if(error){ //esto SOLO ES UNA PRUEBA DE VALIDACIONES NOMAS PORQUE QUISE, y no, no esta hecho con ia, yo lo investigue
            cin.clear(); //es para que el cin se restaure y pueda volver a pedir datos
            cin.ignore(10000, '\n'); //es para que "ignore" o tire a la basura el dato erroneo original
            /*Es como decir: "Ignora caracteres hasta que se cumpla una de estas dos condiciones: 
            que llegues a 10,000 letras O que encuentres un salto de línea" - esto si lo saque de gemini para entenderlo :p*/ 
            cout << "\nError: no se permiten letras ni simbolos." << endl;
            //y ahora se repite si sigue habiendo un error al leer!
        }
    } while (error); //

    while(contador <=num){
        
        suma= suma+contador;
        contador+=2;
    }
    

    cout << "\nLa suma de los pares es: "<<suma<<endl;
    return 0;
}

