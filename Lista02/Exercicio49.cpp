#include<iostream>
using namespace std;

int main(void){

   float infoAlunos[10][2],maior{0},menor{0};

   for(int i = 0; i<10;++i){
          cout << endl << "Informacoes do Aluno " << endl;
        for(int j = 0; j<2;++j){

            if(j == 0){
                cout << "Insira o numero do aluno: ";
                cin >> infoAlunos[i][j];
            }
            if(j == 1){
                cout << "Insira a altura do aluno: ";
                cin >> infoAlunos[i][j];

                if(maior == 0 && menor == 0){
                    maior = infoAlunos[i][j];
                    menor = infoAlunos[i][j];
                }
                else if(infoAlunos[i][j] > maior)
                    maior = infoAlunos[i][j];
                else if(infoAlunos[i][j] < menor)
                    menor = infoAlunos[i][j];

            }
        }
   }

   for(int i = 0; i < 10; ++i){
        for(int j = 1; j < 2; ++j){
            if(infoAlunos[i][j] == menor){
                cout << endl<< "Menor aluno: " << infoAlunos[i][0] << endl;
                cout << "Altura: " << infoAlunos[i][j];
                cout << endl;
            }
            else if(infoAlunos[i][j] == maior){
                cout << "Maior aluno: " << infoAlunos[i][0] << endl;
                cout << "Altura: " << infoAlunos[i][j];
            }

        }

   }



}


