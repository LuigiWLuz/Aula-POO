//Exemplo03: Exemplo de passagem por valor
#include<iostream>
using namespace std;

int elevadoAoCubo(int n);

int main(void){

    int valor = 5;
    int Aocubo = elevadoAoCubo(5);
   cout << Aocubo;

}


 int elevadoAoCubo(int n){
    return n*n*n;
 }

