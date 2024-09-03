#include<iostream>
using namespace std;


int main(void){

    int turmas, alunos,soma{0};

    cout << "Insira a qtd de turmas: ";
    cin >> turmas;


    int turmasEAlunos[turmas][1];
    float media;


    for(int i = 0; i < turmas; ++i){
        cout << "===============================================" << endl;
        cout << "                  Turma " << i+1 << endl;
        cout << "===============================================" << endl;

        do{
            cout << "Insira a quantidade de alunos nesta turma: ";
            cin >> alunos;
        }while(alunos >=40);
        turmasEAlunos[i][1] = alunos;
        soma+=alunos;
    }

    media = soma/turmas;

    cout << "Qtd de turmas: " << turmas << endl;
    cout << "Media de alunos: " << media;

}

