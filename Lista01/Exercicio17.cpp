#include <iostream>

using namespace std;


int main(void){

    int num1,num2,maior;

    cout << "Insira o primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;
    maior = num1 > num2 ? num1 : num2;
    cout << maior;


}

