//Exemplo 31: Exemplo de uso aloca��o dinamica de mem�ria

#include <iostream>
using namespace std;

int main(void){

    cout << "Exemplo de Aloca��o Din�mica de Mem�ria" << endl;

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
