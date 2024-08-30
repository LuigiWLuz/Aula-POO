#include<iostream>
using namespace std;

int main(void){

   float media,soma,peso,altura,codigo{0},opcao{1};
   int cont;
   float informacoes[cont][3];

   do{
       cout << "Insira seu peso: ";
       cin >> informacoes[cont][0];
       cout << "Insira sua altura: ";
       cin >> informacoes[cont][1];
       cout << "Deseja continuar?(1-sim/0-nao)";
       cin >> opcao;
       if(opcao!=0)
        &cont += 1;

   }while(opcao != 0);

}

