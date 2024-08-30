#include<iostream>
using namespace std;

int main(void){

    int i,n,anterior,atual,proximo;

    cout << "Insira um numero: ";
    cin >> n;

    anterior = 0;
    atual = 1;

    while(i < n){

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        cout << anterior << endl;
        ++i;
    }

}
