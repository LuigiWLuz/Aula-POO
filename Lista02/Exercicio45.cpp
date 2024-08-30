#include<iostream>
using namespace std;

int main(void){

    int contPar{0},contImpar{0}, numeros[10];

    cout << "Insira os numeros: ";
    cin >> numeros[0] >> numeros[1] >> numeros[2] >> numeros[3] >>
     numeros[4] >> numeros[5] >> numeros[6] >> numeros[7] >> numeros[8] >> numeros[9];

    for(const auto&numero : numeros){
        numero%2==0?++contPar:++contImpar;
    }
    cout << "Qtd de numeros pares: " << contPar << endl;
    cout << "Qtd de numeros impares: " << contImpar;

}
