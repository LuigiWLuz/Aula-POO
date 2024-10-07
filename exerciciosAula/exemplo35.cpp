//Exemplo 04: Programa para demonstrar o uso de ponteiros para estruturas

#include <iostream>

using namespace std;


struct Pokemon{
    string nome;
    string tipo;
    int nivel;
    int hp;

    void aumentaHp(int pontos){
        hp+=pontos;
    }
};


int main(void){

    cout << "Exemplo Pokemon " << endl;
    Pokemon* ptrpokemon = new Pokemon;

    ptrpokemon->nome = "Espion";
    ptrpokemon->tipo = "Psiquico";
    ptrpokemon->nivel= 1;
    ptrpokemon->hp = 1;

    cout << "Dados do pokemon " << endl;

    cout << ptrpokemon->nome << endl;
    cout << ptrpokemon->tipo << endl;
    cout << ptrpokemon->nivel << endl;
    cout << ptrpokemon->hp << endl;

    cout << endl;


    cout << "Um pokemon selvagem apareceu... Vamos Batalhar!!!" << endl;
    cout << "Seu " << ptrpokemon->nome << " venceu uma luta muito dificil...";
    cout << "Ele ganhou 50 pontos" << endl;

    ptrpokemon->aumentaHp(50);

    ptrpokemon->nivel++;

    cout << "Seu" << ptrpokemon->nome << "subiu de nivel" << endl;

     cout << "Dados do pokemon " << endl;

    cout <<"Nome: "<< ptrpokemon->nome << endl;
    cout <<"Tipo: "<< ptrpokemon->tipo << endl;
    cout <<"Nivel: "<< ptrpokemon->nivel << endl;
    cout << "HP: "<<ptrpokemon->hp << endl;

    delete ptrpokemon;
}



