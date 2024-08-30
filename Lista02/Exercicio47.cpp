#include<iostream>
using namespace std;

int main(void){

    int numero,contNumPrimo;

    cout << "Insira o numero: ";
    cin >> numero;

    for(int i = 1; i<=numero;++i){
        if(numero%i==0)
            ++contNumPrimo;
    }
    if(contNumPrimo == 2)
        cout << "Eh numero primo";
    else
        cout << "Nao eh numero primo";

}
