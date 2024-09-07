#include<iostream>
#include<iomanip>
using namespace std;

int main(void){

    float divida[5],juros[5] = {0,0.10,0.15,0.20,0.25},valorDosJuros[5],parcela[5]={1,3,6,9,12},valorFinal[5];

    cout << "Insira o valor da divida: ";
    cin >> divida[0];


    cout << "==================================" << endl;
    cout << "       Tabela de Informacoes" << endl;
    cout << "==================================" << endl;


    for(int i = 0; i < 5; ++i){
        valorDosJuros[i] = divida[0] * juros[i];
        divida[i] = divida[0] + valorDosJuros[i];
        valorFinal[i] = divida[i]/parcela[i];
    }

    cout << "Valor da Divida ";
    cout << "Valor dos Juros ";
    cout << "Parcelas ";
    cout << "Valor Final";
    cout << endl;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::left);
    for(int i = 0; i < 5; ++i){
        cout << "R$ " << divida[i];
        cout << setw(7) << "      R$ "<< valorDosJuros[i];
        cout << setw(20) << parcela[i];
        cout << setw(3) << "R$ " << valorFinal[i] << endl;
    }



}


