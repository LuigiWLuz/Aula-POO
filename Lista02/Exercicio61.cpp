#include<iostream>
#include<stdio.h>
using namespace std;


int main(void){

    string candidatos[] = {"Chuck Norris", "Van Damme", "Walter Paraiba", "Reliquia","Jao Bombadao","Branco","Nulo"};
    int numeroEleitores,contadorDeVotos[7]{0},voto;

    cout << "Insira a quantidade de eleitores: ";
    cin >> numeroEleitores;

    for(int i = 0; i < numeroEleitores;++i){
        cout << "Em qual candidato deseja votar?" << endl;
        for(int j = 0; j < 7; ++j){
            cout << j+1 << "-" << candidatos[j] << endl;
            if(j == 6){
                cout << "Insira seu voto:";
                cin >> voto;
                contadorDeVotos[voto-1] += 1;
                system("cls");
            }
        }
    }
    cout <<"-----------------------------------------------------------" << endl;
    cout << "Resultado da Eleicao(numero de votos por candidato)" << endl;
    cout <<"-----------------------------------------------------------" << endl << endl;
    for(int i = 0; i<7;++i){
        cout << i+1 << "-"<< candidatos[i] << ": " << contadorDeVotos[i] << endl;
    }


}
