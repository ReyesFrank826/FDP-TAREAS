/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.*/

#include <iostream>
using namespace std;

int main () {

    int consumoKWH;
    const float tarifaBaja = 0.1925; //segun datos de CAESS, no me los saco asi na mas porque si
    const float tarifaMedia = 0.1926; //esto se multiplicara por el valor de consumo
    const float tarifaAlta = 0.1907; //se pone como constante porque estos ahuevo no cambian (al menos no en este proggrama, mucho menos mientras se esta corriendo xd)

    float costoTotal;
    
    cout << "\nCalculadora de tarifa segun el consumo electrico" << endl;
    cout << "Ingrese su consumo de kWh:" << endl;
    cin >> consumoKWH;

    if(consumoKWH >= 0 && consumoKWH < 100){
        costoTotal = consumoKWH * tarifaBaja;
        cout << "\nSu total a pagar es de: $" << costoTotal << endl<< endl; 
    }else if(consumoKWH >= 100 && consumoKWH < 200){
        costoTotal = consumoKWH * tarifaMedia;
        cout << "\nSu total a pagar es de: $" << costoTotal << endl<< endl; 
    }else if(consumoKWH >= 200){
        costoTotal = consumoKWH * tarifaAlta;
        cout << "\nSu total a pagar es de: $" << costoTotal << endl<< endl; 
    }else{
    cout <<"\nError, hubo un problema al procesar su solicitud, vuelva a intentarlo" <<endl;
    }

    return 0;
};