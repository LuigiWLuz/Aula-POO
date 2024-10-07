//Exemplo 12:

#include <iostream>

using namespace std;


void alteraPonteiro(int **pp);

int main(void){

    cout << "Exemplo de Ponteiros para Ponteiros: " << endl;

    int x =10;
    int *p = &x;

    cout << "Valor antes: " << *p << endl;

    alteraPonteiro(&p);


    cout << "Valor depois: " << *p << endl;

}

void alteraPonteiro(int **pp){

    static int y = 100;

    *pp = &y;

}

