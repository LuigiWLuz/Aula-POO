//exemplo 14: exemplo de escopo estatico
//
// Programa que demonstra a utilização de static, ele mantem o valor da variavel de dentro da função


#include <iostream>

using namespace std;

//prototipos de funcao
void incremento();


int main(void){

    cout << endl;

    for(int i = 0; i < 5; ++i){
        cout << "i: " << i << "-- valor: ";
        incremento();
    }

    return 0;
}



void incremento(){

    int static valor = 0;
    cout << valor<< endl;
    valor += 5;

}

