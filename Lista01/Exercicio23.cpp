#include<iostream>

using namespace std;

int main(void){

  int num,centenas,dezenas,unidades;

  cout << "Insira um numero inteiro menor que 1000: ";
  cin >> num;

  centenas = num/100;
  dezenas = (num-centenas*100)/10;
  unidades = num-((centenas*100)+(dezenas*10));

  cout << "Centenas: " << centenas << endl;
  cout << "Dezenas: " << dezenas << endl;
  cout << "Unidades: " << unidades << endl;


  return 0;
}

