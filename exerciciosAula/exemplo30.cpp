//Exemplo 31: Exemplo de uso alocação dinamica de memória

#include <iostream>
using namespace std;

int main(void){

    cout << "Exemplo de Alocação Dinãmica de Memória" << endl;

    int *numeros = new int[5];

    for(int i = 0; i < 5; ++i){
        numeros[i] = i*2;
    }

    cout << "* numeros: [";
    for(int i = 0; i < 5; ++i){
        if(i < 4)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << "]";
    }


    delete[] numeros;


}
