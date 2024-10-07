//Exemplo 01: programa que demonstra como declarar uma estrutura

#include <iostream>
using namespace std;

struct ponto{

    int x;
    int y;

    void defineCoordenadas(int px, int py){
        x = px;
        y = py;
    }

    void exibeCoordernadas(string P) const{
        cout << "Coordenadas " << P << ": " << x << ", " << y << endl;
    }
};


int main(void){

   ponto p1;

   p1.defineCoordenadas(4,88);
   p1.exibeCoordernadas("Feijao");


}

