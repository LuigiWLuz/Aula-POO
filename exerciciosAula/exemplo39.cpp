//Exemplo 07: Programa para demonstrar o uso de enumerações com escopo
//

#include <iostream>

using namespace std;

// Enumeração para controlar o estado de um jogo
enum class EstadoJogo{
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};


//protocolos das funções

void mostrarEstado( EstadoJogo estado);


int main(void){

    cout << endl;
    cout << "* Exemplo de Enumerações " << endl;

    //declara a enumerador, indicando que o jogo está no menu principal
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::Pausado;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::GameOver;

    mostrarEstado(estadoAtual);

    cout << endl;

    return 0;
}

void mostrarEstado( EstadoJogo estado){

    switch(estado){
        case EstadoJogo::MenuPrincipal:
            cout << "Voce esta no menu principal" << endl;
        break;
        case EstadoJogo::Jogando:
            cout << "Voce esta jogando" << endl;
        break;
        case EstadoJogo::GameOver:
            cout << "Voce perdeu, GameOver!!!" << endl;
        break;
        case EstadoJogo::Pausado:
            cout << "Voce esta pausado" << endl;
        break;
        default:
            cout << "Estado Desconhecido" << endl;
        break;
    }
}

