//Exemplo05: Exemplo de uso de array nativo e ponteiro
#include<iostream>
using namespace std;

void soma(int *resultado,const int *arrayPtr, const size_t tamanho);

int main(void){

    cout << endl << endl << "Exemplo de uso de array nativo e ponteiro" << endl;

    int numeros[] = {1,3,4,6,7,8,2,1,4,0};


    size_t totalElementos = sizeof(numeros)/sizeof(numeros[0]);


    int *numerosPtr = nullptr;


    int resultado{0};

    cout << "O array possui " << totalElementos << " elementos" << endl;

    cout << "Numeros [ ";
    for(int i = 0; i < totalElementos;++i){
        if(i != totalElementos-1)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << " ]" << endl;
    }

    numerosPtr = &numeros[0];

    soma(&resultado,numerosPtr,totalElementos);


    cout << "Soma: " << resultado;

}


void soma(int *resultado,const int *arrayPtr, const size_t tamanho){

    for(int i = 0; i < tamanho; ++i){
        *resultado += *arrayPtr++;
    }

}
