/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci.*/

#include <iostream>
using namespace std;

int main(){

    int num=0, Pos1=0, Pos2=1, result=0;

    cout<<"Ingrese un numero: "; cin>>num;

    for(int i=1; i<=num ;i++){
        cout<<Pos1<<" ";

        result=Pos1+Pos2;
        Pos1=Pos2;
        Pos2=result;
    }

    return 0;
}