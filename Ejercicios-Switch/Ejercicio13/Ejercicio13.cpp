/*Zodíaco según el Mes
Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.*/

#include <iostream>
using namespace std;

int main () {

    int mes;
    cout<< "\n========Bienvenido, quieres saber que signo zodiacal eres?========" <<endl;
    cout<< "En que mes naciste? (ingrese solo numeros)" <<endl;

    cout << "\n1. Enero" << endl;
    cout << "2. Febrero" << endl;
    cout << "3. Marzo" << endl;
    cout << "4. Abril" << endl;
    cout << "5. Mayo" << endl;
    cout << "6. Junio" << endl;
    cout << "7. Julio" << endl;
    cout << "8. Agosto" << endl;
    cout << "9. Septiembre" << endl;
    cout << "10. Octubre" << endl;
    cout << "11. Noviembre" << endl;
    cout << "12. Diciembre" << endl;
    cout << "Selecciona tu mes: ";
    cin >> mes;

    switch(mes){
        case 1:
        cout<< "\nTu signo zodiacal es -Acuario- (20 de enero - 18 de febrero)" <<endl;
        break;

        case 2:
        cout<< "\nTu signo zodiacal es -Piscis- (19 de febrero - 20 de marzo)" <<endl;
        break;

        case 3:
        cout<< "\nTu signo zodiacal es -Aries- (21 de marzo - 19 de abril)" <<endl;
        break;

        case 4:
        cout<< "\nTu signo zodiacal es -Tauro- (20 de abril - 20 de mayo)" <<endl;
        break;

        case 5:
        cout<< "\nTu signo zodiacal es -Géminis- (21 de mayo - 20 de junio)" <<endl;
        break;

        case 6:
        cout<< "\nTu signo zodiacal es -Cáncer- (21 de junio - 22 de julio)" <<endl;
        break;

        case 7:
        cout<< "\nTu signo zodiacal es -Leo- (23 de julio - 22 de agosto)" <<endl;
        break;

        case 8:
        cout<< "\nTu signo zodiacal es -Virgo- (23 de agosto - 22 de septiembre)" <<endl;
        break;

        case 9:
        cout<< "\nTu signo zodiacal es -Libra- (23 de septiembre - 22 de octubre)" <<endl;
        break;

        case 10:
        cout<< "\nTu signo zodiacal es -Escorpio- (23 de octubre - 21 de noviembre)" <<endl;
        break;

        case 11:
        cout<< "\nTu signo zodiacal es -Sagitario- (22 de noviembre - 21 de diciembre)" <<endl;
        break;

        case 12:
        cout<< "\nTu signo zodiacal es -Capricornio- (22 de diciembre - 19 de enero)" <<endl;
        break;

        default:

        cout <<"\nError: ingrese solo numeros validos"<<endl;
        return 1; //pa que se cierre
        break;
    }
    return 0;
};