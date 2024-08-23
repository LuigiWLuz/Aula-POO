#include<iostream>
#include<cmath>
using namespace std;

int main(void){

  float num;

  cout << "Informe seu numero: ";
  cin >> num;

  if(num == ceil(num)){
    cout << "Numero inteiro!";
  }
  else{
    cout << "Numero decimal";
  }

}

