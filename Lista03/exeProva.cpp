#include<iostream>
#include<iomanip>
using namespace std;


int main(void){


    int *Matriz;
    int cont{0},valor,maior,l{0};
    char opcao{'S'};

    Matriz = new int[cont];
    while(toupper(opcao) != 'N'){
        cout << "Insira um dado: ";
        cin >> valor;
        if(cont == 0)
            maior = valor;
        else if (valor > maior)
            maior = valor;
        Matriz[cont] = valor;
        ++cont;
        cout << "Deseja inserir outro numero?(S/N)";
        cin >> opcao;
    }
    cout << endl << endl;
    cout << "Dados: ";
    for(int i = 0; i < cont; ++i){
        if(i == 0)
            cout << "[ " << Matriz[i] << ", ";
        else if(i == cont-1)
            cout << Matriz[i] << " ]" << endl;
        else
            cout << Matriz[i] << ", ";
    }
    cout << endl;
    cout << "Total de Linhas: " << cont << endl;
    cout << "Total de Colunas: " << maior << endl;
    cout << endl << endl;
    cout << "Histograma Horizontal"<< endl;
    cout << endl;

    for(int i = 0; i < cont; ++i){
        cout << i + 1 << "|";
        while(l < Matriz[i]){
            cout << setw(2) << "*";
            if(l == Matriz[i]-1)
                cout << endl;
            ++l;
        }
        l = 0;
        }
    l = 0;
     cout << setw(2) << "+";
     while(l < maior){
        cout << setw(2) <<"-";
        ++l;
    }
    cout << endl;

    l = 0;
    while(l <= maior){
        cout << setw(2) << l;
        ++l;
    }





    delete[]Matriz;

}


