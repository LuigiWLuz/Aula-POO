#include <iostream>
using namespace std;


int main(void){

    int linhas,colunas,i;
    int **Matriz;

    cout << "Insira a quantidade de linhas: ";
    cin >> linhas;

    cout << "Insira a quantidade de colunas: ";
    cin >> colunas;

    Matriz = new int*[linhas];

    cout << endl << "Insira os numeros desta matriz: " << endl;

    for(i = 0; i<linhas;++i){
        Matriz[i] = new int[colunas];
    }


    cout << "Insira os valores" << endl;
    for(i = 0; i < linhas; ++i){
        for(int j = 0; j < colunas; ++j){
            cout << "Linha: " << i << " Coluna: " << j << endl;
            cout << "Numero a ser inserido: ";
            cin >> Matriz[i][j];
        }
    }

    cout << "Valores inseridos" << endl;
    for(i = 0; i < linhas; ++i){
        for(int j = 0; j < colunas; ++j){
            cout << "Linha: " << i << " Coluna: " << j << endl;
            cout << "Numero a ser inserido: ";
            cout << Matriz[i][j];
            cout << endl;
        }
    }

    for(i = 0; i < linhas;++i)
        delete[]Matriz[i];
    delete[]Matriz;

    return 0;

}

