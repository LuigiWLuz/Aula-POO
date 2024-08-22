#include<iostream>
using namespace std;

int main(void){

  char turno;

  cout << "Insira o turno que voce estuda(M-Matutino/V-Vespertino/N-Noturno): ";
  cin >> turno;


  if(toupper(turno) == 'M')
     cout << "Bom dia!";
  else if(toupper(turno) == 'V')
     cout << "Boa Tarde!";
  else if(toupper(turno) == 'N')
    cout << "Boa Noite";
  else
    cout << "Valor Invalido!";






  return 0;
}

