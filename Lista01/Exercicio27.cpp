#include<iostream>
#include<iomanip>
using namespace std;

int main(void){

  float salarioAntes,salarioComAumento,aumento,percentualAumento;

  cout << "Insira seu salario: ";
  cin >> salarioAntes;

  if(salarioAntes <= 2000){
    percentualAumento = 0.2;
    aumento = salarioAntes*percentualAumento;
    salarioComAumento = salarioAntes + aumento;
  }
  else if(salarioAntes > 2000 && salarioAntes < 4000){
    percentualAumento = 0.15;
    aumento = salarioAntes*percentualAumento;
    salarioComAumento = salarioAntes + aumento;
  }
  else if(salarioAntes >= 4000 && salarioAntes < 8000){
    percentualAumento = 0.1;
    aumento = salarioAntes*percentualAumento;
    salarioComAumento = salarioAntes + aumento;
  }
  else if(salarioAntes > 8000){
    percentualAumento = 0.05;
    aumento = salarioAntes*percentualAumento;
    salarioComAumento = salarioAntes + aumento;
  }
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);
  cout << setiosflags(ios::right);

  cout <<"-----------------------"<< endl;
  cout << "Valores apos Reajuste" << endl;
  cout <<"-----------------------"<< endl;
  cout << "Salario antes do reajuste: " << salarioAntes << endl;
  cout << "Percentual de aumento aplicado: " << percentualAumento*100 << " % " << endl;
  cout << "Valor do Aumento: R$ " << aumento << endl;
  cout << "Novo salario: R$ " << salarioComAumento;

  return 0;
}

