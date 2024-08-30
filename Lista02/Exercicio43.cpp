#include <iostream>

int main(void){

    float num1,num2,num3,num4,num5,media,soma;

    std::cout << "Insira os 5 valores respectivamente: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    soma = num1+num2+num3+num4+num5;
    media = soma/5;

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Media: " << media << std::endl;

}
