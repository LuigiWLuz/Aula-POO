#include<iostream>
using namespace std;

int main(void){

  int num1,num2,num3,troca;
  int numeros[3];



  cout << "Insira o primeiro numero:";
  cin >> num1;
  numeros[0] = num1;
  cout << "Insira o segundo numero:";
  cin  >> num2;
  numeros[1] = num2;
  cout << "Insira o terceiro numero:";
  cin >> num3;
  numeros[2] = num3;


  int i = 0;
    for(int j = 1; j<3;++j){
        if(numeros[i] > numeros[j]){
            troca = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = troca;
        }
        if(j == 2){
            if(numeros[1]>numeros[j]){
                troca = numeros[1];
                numeros[1] = numeros[j];
                numeros[j] = troca;
            }
        }
    }

    cout << endl << "Numeros Ordenados" << endl;
    for(int cont = 0; cont < 3; ++cont){
        cout << numeros[cont] << endl;
    }





  return 0;
}

