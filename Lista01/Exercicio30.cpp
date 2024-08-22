#include<iostream>
#include<cmath>
using namespace std;

int main(void){

  int a,b,c,delta,x1,x2;

  cout << "Insira o valor de A: ";
  cin >> a;
  if(a != 0){
    cout << "Insira o valor de B:";
    cin >>b;
    cout << "Insira o valor de C:";
    cin >> c;

    delta = pow(b,2) - (4*a*c);
    if(delta < 0){
        cout << "A equacao nao possui raizes reais";
    }
    else if(delta == 0){
        x1 = -b/2*a;
        cout << "A equacao possui apenas uma raiz real" << endl;
        cout << "Valor da Raiz: " << x1;
    }
    else if(delta > 0){
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        cout << "A equacao possui duas raizes reais" << endl;
        cout << "Valor da Raizes: " << x1 << endl;
        cout << "Valor da Raizes: " << x2;
    }




  }
  else{
    cout << "Isto nao eh uma equacao de segundo grau....";
  }



  return 0;
}


