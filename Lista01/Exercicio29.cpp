#include<iostream>
using namespace std;

int main(void){

  float lado1,lado2,lado3;

  cout << "Insira respectivamente os tres lados do triangulo: ";
  cin>>lado1>>lado2>>lado3;

  if((lado1+lado2) > lado3 || (lado2+lado3) > lado1 || (lado1+lado3) > lado2){
     if(lado1 == lado2 && lado2 == lado3){
        cout << "Triangulo equilatero";
     }
     else if ((lado1 == lado2 && lado3 != lado1) || (lado1 == lado3 && lado2 != lado3)|| (lado2 == lado1 && lado2 != lado3) || (lado2 == lado3 && lado2 != lado1) ){
        cout << "Triangulo Isosceles";
     }
     else{
        cout << "Triangulo Escaleno";
     }


  }
  else{
    cout << "Os valores informados nao formam um triangulo.";
  }



  return 0;
}

