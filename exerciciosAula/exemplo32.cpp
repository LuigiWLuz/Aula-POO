//Exemplo 01: programa que demonstra como declarar uma estrutura

#include <iostream>
using namespace std;

struct ponto{

    int x;
    int y;

};


int main(void){

    ponto p1;
    ponto p2;

    p1.x = 34;
    p1.y = -22;

    p2.x = 11;
    p2.y = -9;


    cout << p1.x << endl;
    cout << p1.y << endl;
    cout << p2.x << endl;
    cout << p2.y << endl;


}

