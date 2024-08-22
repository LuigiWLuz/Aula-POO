#include<iostream>
using namespace std;

int main(void){

  int diaDaSemana;

  cout << "Insira um numero referente a um dia da semana(Domingo-1/Segunda-2....):";
  cin >> diaDaSemana;

  switch(diaDaSemana){

      case 1:
          cout << "Domingo";
      break;
      case 2:
          cout << "Segunda";
      break;
      case 3:
          cout << "Terca";
      break;
      case 4:
          cout << "Quarta";
      break;
      case 5:
          cout << "Quinta";
      break;
      case 6:
          cout << "Sexta";
      break;
      case 7:
          cout << "Sabado";
      break;
      default:
        cout << "Valor invalido";

  }

  return 0;
}


