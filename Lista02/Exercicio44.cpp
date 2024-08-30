#include <iostream>

int main(void){

    int base,Expoente,resultado;

    std::cout << "Insira a base: ";
    std::cin >> base;
    std::cout << "Insira a expoente: ";
    std::cin >> Expoente;

    resultado = base;

    for(int i = 0 ; i < Expoente ; ++i){
        if(i > 0)
            resultado *= base;
    }

    std::cout << "Resultado: " << resultado;
}

