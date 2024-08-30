#include<iostream>
using namespace std;

int main(void){

    int numero,fatorial{1};

    cout << "Insira um numero: ";
    cin >> numero;

    for(int i = numero; i > 1; --i){
        fatorial*=i;

    }
    cout << "Fatorial do numero escolhido: " << fatorial;
}
