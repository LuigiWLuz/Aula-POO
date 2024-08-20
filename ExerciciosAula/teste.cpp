//Exemplo7: while
//
//Programa que permite a leitura de um valor inteiro e apresente o resultado
//do calculo da tabuada até 10 para esse valor.

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

    int cont, valor, resultado;

    cout << "\n";

    cout << "Informe o valor desejado: ";
    cin >> valor;
    cout << endl;

    cout << "Tabuada do " << valor << endl;

    while(cont < 10){
        ++cont;
        resultado = valor * cont;
        cout << valor << " X " << cont << " = "<<resultado << endl;
    }
    return 0;
}
