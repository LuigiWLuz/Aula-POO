#include<iostream>
using namespace std;

int main(void){

  int angulo1,angulo2,angulo3;

  cout << "Insira respectivamente os tres lados do triangulo: ";
  cin>>angulo1>>angulo2>>angulo3;


     if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
        cout << "Triangulo retangulo";
     }
     else if ( angulo1 >= 90 || angulo2 >= 90 || angulo3 >= 90){
        cout << "Triangulo Obtusangulo";
     }
     else if ( angulo1 < 90 || angulo2 < 90 || angulo3 < 90){
        cout << "Triangulo Acutangulo";
     }



  else{
    cout << "Os valores informados nao formam um triangulo.";
  }



  return 0;
}

