#include<iostream>
using namespace std;


int main(void){


    int *Matriz;
    int cont,valor;
    char opcao{'S'};

    Matriz = new int[cont];
    while(opcao != 'N'){
        cout << "Insira um dado: ";
        cin >> valor;
        Matriz[cont] = valor;
        ++cont;
        cout << "Deseja inserir outro numero?(S/N)";
        cin >> opcao;
    }

    for(int i = 0; i < cont; ++i){
        cout << Matriz[i];
    }



}

