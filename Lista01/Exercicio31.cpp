#include <iostream>
using namespace std;


int main(void){

    int ano;

    cout << "Insira um determinado ano: ";
    cin >> ano;

    if(ano%4==0 && ano%100 != 0){
        cout << "Ano bissexto!";
    }
    else if (ano%4 == 0 && ano%100==0 && ano%400==0){
        cout << "Ano bissexto!";
    }
    else{
        cout << "Este ano nao eh bissexto!";
    }

}
