#include<iostream>
using namespace std;

int main(void){

  float peso,valor,pesoAcimade5kg;
  string fruta;

  cout << "Insira o peso total de frutas: ";
  cin >> peso;
  cout << "Insira a fruta(Morango/Maca): ";
  cin >> fruta;

  if(fruta == "Morango"){
    if(peso > 5){
        pesoAcimade5kg = peso - 5;
        valor = 32.5 * (peso-pesoAcimade5kg);
        valor += 30.2 * pesoAcimade5kg;
    }
    else{
        valor = peso*32.5;
    }
  }
  else{
    if(peso > 5){
        pesoAcimade5kg = peso - 5;
        valor = 13.8 * (peso-pesoAcimade5kg);
        valor += 11.5 * pesoAcimade5kg;
    }
    else{
        valor = peso*32.5;
    }
  }
    cout << "Valor a ser pago: " << valor;
}
