//Exemplo04: Exemplo de passagem por ponteiro
#include<iostream>
using namespace std;

int elevadoAoCubo(int *nPrt);

int main(void){

    int valor = 5;
    cout << valor << endl;
    elevadoAoCubo(&valor);
    cout << valor;

}


 int elevadoAoCubo(int *nPrt){
    *nPrt = *nPrt * *nPrt * *nPrt;
 }

