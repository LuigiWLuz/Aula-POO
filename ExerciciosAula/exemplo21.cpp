//Exemplo01: programa que demonstra como declarar uma variavel de ponteiro
#include<iostream>
using namespace std;

int main(void){



    int idade = 25;

    //declaração de ponteiro
    int *idadePtr;

    idadePtr = &idade;


    cout << "Valor da variavel " << idade << endl;
    cout << "Endereco da variavel" << &idade << endl;
    cout << "Valor da variavel " << idadePtr << endl;
    cout << "Valor apontado pela variavel " << *idadePtr;







}

