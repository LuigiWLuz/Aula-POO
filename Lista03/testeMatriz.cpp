#include <iostream>
using namespace std;


int main(void){

    int n,i;
    int *Matriz;

    cout << "Insira o tamanho da sua Matriz: ";
    cin >> n;

    Matriz = new int[n];

    cout << endl << "Insira os numeros desta matriz: " << endl;

    for(i = 0 ; i < n; ++i){
        cout << i+1 << "- numero:";
        cin >> Matriz[i];
    }

    cout << "Matriz Criada: ";
     for(i = 0 ; i < n; ++i)
        cout << Matriz[i];

    delete[] Matriz;

    return 0;

}

