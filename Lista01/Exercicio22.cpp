#include <iostream>
using namespace std;

int main(void){

    float nota1,nota2,media;

    cout << "Insira a nota1: ";
    cin >> nota1;
    cout << "Insira a nota2: ";
    cin >> nota2;

    media = (nota1+nota2)/2;

    if(media >= 9 && media <=10){
        cout << "APROVADO, Conceito: A";
    }
    else if(media >= 7.5 && media < 9){
        cout << "APROVADO, Conceito: B";
    }
     else if(media >= 6 && media < 7.5){
        cout << "APROVADO, Conceito: C";
    }
    else if(media >= 4 && media < 6){
        cout << "REPROVADO, Conceito: D";
    }
    else if(media >= 0 && media < 4){
        cout << "REPROVADO, Conceito: E";
    }


    return 0;
}
