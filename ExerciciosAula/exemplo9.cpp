//Exemplo 09: Calculo do MDC usando o teorema de euclides
//
//considere o seguinte cenario: "Em um jogo para duas ou mais pessoas, existem X peças
//quadradas e Y pecas triangulares. Sabendo que, para jogar esse jogo, as pecas precisam ser
// igualmente distribuidas e nao pode sobrar nenhuma delas,

#include <iostream>
using namespace std;

int main(void){

    int quadradas,triangulares,a,b,r;

    cout << endl << "Informe o total de pecas quadradas:"; cin>>quadradas;
    cout << endl << "Informe o total de pecas triangulares:"; cin>>triangulares;

    a = quadradas;
    b = triangulares;

    do{
        r = a%b;
        a = b;
        b = r;
    }while(b!=0);

    cout << "Considerando " << quadradas << " pecas quadradas e " << triangulares;
    cout << " pecas triangulares, devemos ter no maximo " << a << " participantes";

    return 0;
}
