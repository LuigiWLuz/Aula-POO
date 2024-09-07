#include<iostream>
using namespace std;

int main(void){

    int idade{25};
    int *idadePtr;

    idadePtr = &idade;

    cout << "Valor da variavel " << idade << endl;
    cout << "Endereco da variavel " << &idade << endl;

    *idadePtr = 34;

    cout << "Valor da variavel " << idade << endl;
    cout << "Endereco da variavel " << &idade << endl;

}
