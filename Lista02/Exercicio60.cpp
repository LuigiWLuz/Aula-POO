#include<iostream>
using namespace std;

int main(void){

  int qtdPessoas,media,soma{0},idade;

  cout << "Insira a quantidade de pessoas: ";
  cin >> qtdPessoas;

  for(int i = 0; i < qtdPessoas; ++i){
    cout << "Insira a idade: ";
    cin >> idade;
    soma += idade;
  }
  media = soma/qtdPessoas;

  if(media >= 0 && media <= 25)
    cout << "A turma eh jovem";
  else if(media > 25 && media <= 60)
    cout << "A turma eh adulta";
  else if(media > 60)
    cout << "A turma eh idosa";


}

