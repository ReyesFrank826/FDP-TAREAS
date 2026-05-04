/*Autenticación con Intentos
Simula un sistema de autenticación con un usuario y contraseña, permitiendo hasta 3 intentos.*/

#include <iostream>
using namespace std;

int main(){

    string usuarioSistema="franklin", contrasenaSistema="00031126", usuario, contrasena;
    int intentos = 3, intentosRestantes;

    cout <<"ingrese su usuario" << endl;
    cin >>usuario;

    cout <<"ingrese su contraseña" << endl;
    cin >>contrasena;

    if(usuario == usuarioSistema && contrasena == contrasenaSistema){
        cout << "Bienvenido, a iniciado sesion con exito";
    }else{
        cout <<"Credenciales incorrectas" <<endl;
        intentosRestantes = intentos - 1;
            cout <<"Numero de intentos: " <<intentosRestantes <<endl;
            cout <<"Tienes solo 3 intentos" <<endl;

        if(intentosRestantes ==0){
            cout <<"Intentos maximos alcanzados, lo sentimos" <<endl;
        }
    }
    return 0;
};

//se puede si meto un if en otro if, pero sale larguiiiiiiiiiisimo, mejor usar ciclos, nose puede xd
//tmabien me falta el flujograma lol