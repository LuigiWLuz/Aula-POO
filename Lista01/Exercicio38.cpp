#include<iostream>
using namespace std;

int main(void){

  float peso,valor,pesoAcimade5kg,valorAPagar,desconto = 0;
  char formaDePgt;
  string corte;

  cout << "Insira o corte de carne que deseja(Contra/Alcatra/Picanha): ";
  cin >> corte;
  cout << "Insira o peso total da carne escolhida: ";
  cin >> peso;
  cout << "Forma de pagamento:(D-Dinheiro/C-Cartao/P-Pix):";
  cin >> formaDePgt;


  if(corte == "Contra"){
    if(peso > 5){
        pesoAcimade5kg = peso - 5;
        valor = 40.5 * (peso-pesoAcimade5kg);
        valor += 35.5 * pesoAcimade5kg;
    }
    else{
        valor = peso*40.5;
    }
    cout << "Corte escolhido: " << corte << endl;
  }
  else if(corte == "Alcatra" ){
    if(peso > 5){
        pesoAcimade5kg = peso - 5;
        valor = 41.8 * (peso-pesoAcimade5kg);
        valor += 36.25 * pesoAcimade5kg;
    }
    else{
        valor = peso*41.8;
    }
    cout << "Corte escolhido: " << corte << endl;
  }
  else{
    if(peso > 5){
        pesoAcimade5kg = peso - 5;
        valor = 39.9 * (peso-pesoAcimade5kg);
        valor += 35.99 * pesoAcimade5kg;
    }
    else{
        valor = peso*39.9;
    }
    cout << "Corte escolhido: " << corte << endl;
  }

  if(formaDePgt == 'C'){
    desconto = valor*0.05;
    valorAPagar = valor -desconto;
  }

  cout << "Qtd de carne: " << peso <<" KG" << endl;
  cout << "Preco Total: R$" << valor << endl;
  cout << "Tipo de Pagamento: " << formaDePgt << endl;
  cout << "Desconto: R$" << desconto << endl;
  cout << "Valor a pagar: R$" << valorAPagar << endl;

}

