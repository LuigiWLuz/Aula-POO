#include <iostream>
#include <cmath>
using namespace std;

int main(void){

    float peso,altura,imc;

    cout << "Insira seu peso: ";
    cin >> peso;

    cout << "Insira sua altura: ";
    cin >> altura;

    imc = peso/pow(altura,2);

    if(imc < 20)
        cout << "IMC: " << imc << endl << "Abaixo do normal.";
    else if (imc >= 20 && imc < 25)
        cout << "IMC: " << imc << endl << "Normal.";
    else if (imc >= 25 && imc < 30)
        cout << "IMC: " << imc << endl << "Sobrepeso.";
    else if (imc >= 30 && imc < 35)
        cout << "IMC: " << imc << endl << "Obesidade leve.";
    else if (imc >= 35 && imc < 40)
        cout << "IMC: " << imc << endl << "Obesidade moderada.";
    else if (imc >= 40)
        cout << "IMC: " << imc << endl << "Obesidade Morbida.";

}

