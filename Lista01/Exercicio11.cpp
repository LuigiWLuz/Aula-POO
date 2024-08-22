
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main(void){

     int num1,num2;
     float num3,resultado3,resultado1,resultado2;

    cout << "Insira um numero inteiro: ";
    cin >> num1;
    cout << "Insira um numero inteiro novamente: ";
    cin >> num2;
    cout << "Insira um numero real ";
    cin >> num3;

    resultado1 = (num1*2)*(num2/2);
    resultado2 = (num1*3) + num3;
    resultado3 = pow(num3,3);

    cout << "O produto do dobro do primeiro com metade do segundo: " << resultado1 << endl;
    cout << "A soma do triplo do primeiro com o terceiro: " << resultado2 << endl;
    cout << "Terceiro elevado ao cubo: " << resultado3 << endl;


    return 0;
}


