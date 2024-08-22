#include<iostream>
#include<cmath>

using namespace std;

int main(void){

  int num;

  cout << "Insira um numero: ";
  cin >> num;

  num%2==0?cout << "Par" : cout << "Impar";

  return 0;
}

