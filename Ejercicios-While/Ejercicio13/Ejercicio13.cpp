/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/

#include <iostream>
using namespace std;

int main(){

    int num=0, Pos1=0, Pos2=1, result=0, serie=0;
    /*pide un numero y la seire fibonacci debe llegar a ese numero para que se detenga, hay que hacer una ecuacion para eso*/

    cout << "\nCuantos terminos de la serie Fibonacci quieres ver?: ";
    cin >> num; 

    do{
        serie++;
        cout<<"Termino "<<serie<<": " <<Pos1<<endl;

        //Ecuacion de fibonacci
        result=Pos1+Pos2;
        Pos1=Pos2;
        Pos2=result;

    }while(serie<num);

    return 0;
}