#include<iostream>
using namespace std;

void apresenta();

int main(void){

  char nomeProd1,nomeProd2,nomeProd3;
  float preco1,preco2,preco3;

  cout << "Insira o nome do primeiro produto: ";
  cin >> nomeProd1;
  cout << "Insira seu preco: ";
  cin >> preco1;
  cout << endl;

  cout << "Insira o nome do segundo produto: ";
  cin >> nomeProd2;
  cout << "Insira seu preco: ";
  cin >> preco2;

   cout << endl;
  cout << "Insira o nome do primeiro produto: ";
  cin >> nomeProd3;
  cout << "Insira seu preco: ";
  cin >> preco3;

  if(preco1 < preco2 && preco1 < preco3){
    apresenta();
    cout <<nomeProd1 << " R$ " << preco1;
  }
  else if(preco2 < preco1 && preco2 < preco3){
    apresenta();
    cout <<nomeProd2 << " R$ " << preco2;
  }
  else if(preco3 < preco1 && preco3 < preco2){
    apresenta();
    cout <<nomeProd3 << " R$ " << preco3;
  }

  return 0;
}

void apresenta(){
    cout <<"---------------------"<<endl;
    cout << "Produto mais Barato"<< endl;
    cout <<"---------------------"<<endl;


}
