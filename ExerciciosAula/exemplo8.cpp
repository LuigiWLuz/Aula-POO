//Exemplo8: Fatorial
//
//Programa que calcula o fatorial de um valor fornecido pelo usuario.

#include <iostream>

using namespace std;

int main(void){

 int valor;
 long int fatorial = 1;

 cout << "insira o valor desejado:";
 cin >> valor;
 cout << endl;

 while(valor > 1){
    fatorial*=valor;
    --valor;

 }
cout << "O fatorial do " << valor << " eh igual a: " << fatorial;

return 0;

}