#include <iostream>

using namespace std;



int main(void){

    int num1,num2,troca;

    cout << "Insira o primeiro valor: ";
    cin >> num1;
    cout << "Insira o segundo valor: ";
    cin >> num2;

    cout << "------------------------" << endl;
    cout << " valores antes da troca " << endl;
    cout << "------------------------" << endl;
    cout << "Valor do primeiro valor: " << num1 << endl;
    cout << "Valor do segundo valor: " << num2 << endl;

    troca = num1;
    num1 = num2;
    num2 = troca;


    cout << "------------------------" << endl;
    cout << " valores depois da troca " << endl;
    cout << "------------------------" << endl;
    cout << "Valor do primeiro valor: " << num1 << endl;
    cout << "Valor do segundo valor: " << num2 << endl;

    return 0;
}


