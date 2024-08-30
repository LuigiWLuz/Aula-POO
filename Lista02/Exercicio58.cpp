#include<iostream>
using namespace std;

int main(void){

    int menor{0},maior{0},num,soma{0};
    char opcao = 'S';

    do{
        cout << "Insira o numero: ";
        cin >> num;

        if(menor == 0 && maior == 0){
            maior = num;
            menor = num;
            soma += num;
        }
        else if(num > maior){
            maior = num;
            soma += num;
        }
        else if(num < menor){
            menor = num;
            soma += num;
        }
        else
            soma += num;

        cout << "Deseja inserir outro numero:(S-sim/N-nao)";
        cin >> opcao;

    }while(toupper(opcao) != 'N');

    cout << "Soma dos numeros: " << soma << endl;
    cout << "Maior numero: " << maior << endl;
    cout << "manor numero: " << menor << endl;

}

