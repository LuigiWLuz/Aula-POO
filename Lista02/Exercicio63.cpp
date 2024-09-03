#include<iostream>
#include<iomanip>
using namespace std;


int main(void){

    float valorTotal,valorMedioUnitario,valorUnitario;
    int qtdCds;

    cout << "Insira a quantidade de CDs:";
    cin >> qtdCds;

    for(int i = 0; i < qtdCds; ++i){
        cout << "Insira o valor do CD: ";
        cin >> valorUnitario;
        valorTotal += valorUnitario;
    }
    valorMedioUnitario = valorTotal/qtdCds;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);
    cout << "Quantidade de CDS: " << qtdCds << endl;
    cout << "Valor Total da Colecao: R$ " << valorTotal << endl;
    cout << "Valor medio de cada CD: R$ " << valorMedioUnitario << endl;
}


