#include<iostream>
using namespace std;


int main(void){

    float nota;

    cout << "Insira a nota: ";
    cin >> nota;
    while(nota < 0 || nota > 10){
        cout << "Nota invalida, insira novamente!" << endl;
        cout << "Insira a nota: ";
        cin >> nota;
    }
    cout << "Nota inserida: " << nota;
}
