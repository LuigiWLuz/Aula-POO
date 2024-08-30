// exemplo 18: demonstracao de matriz bidimensional
#include<iostream>
#include<iomanip>
using namespace std;

#define Linhas 10
#define Colunas 4

int main(void){

    cout << "Demonstracao de matriz bidimensional" << endl;

    int i,j;
    float notas[Linhas][Colunas+1],soma,media;

    cout << "* Informe as " << Colunas << " notas dos ";
    cout << Linhas << " alunos" << endl << endl;

    for(i = 0; i < Linhas; ++i){

        soma = 0;
        media = 0;
        cout << "Informe as notas do aluno" << i+1 << ": ";
        for(j = 0; j < Colunas; ++j){

            cin >> notas[i][j];
            soma += notas[i][j];

            if(j == 3){
                media = soma/4;
                notas[i][j+1] = media;
                cout << "Somatorio das notas do aluno: " << soma << endl;
                cout << "Media do aluno: " << media << endl;
            }
        }
    }
    return 0;
}
