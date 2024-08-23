#include<iostream>
using namespace std;

int main(void){

    float qtdCombustivel,desconto,valorTotal;
    int opcao;

    cout << "Insira a quantidade de combustivel: ";
    cin >> qtdCombustivel;

    do{
    cout << "Insira qual combustivel deseja(1-Alcool/2-Gasolina): ";
    cin >> opcao;
    }while(opcao != 1 && opcao != 2);

    if(opcao == 1){
        valorTotal = qtdCombustivel*3.78;
        if(qtdCombustivel <=20){
            desconto = valorTotal * 0.03;
            valorTotal-=desconto;
        }
        else{
            desconto = valorTotal * 0.05;
            valorTotal-=desconto;
        }

    }
    else{
        valorTotal = qtdCombustivel*5.70;
        if(qtdCombustivel <=20){
            desconto = valorTotal * 0.04;
            valorTotal-=desconto;
        }
        else{
            desconto = valorTotal * 0.06;
            valorTotal-=desconto;
        }
    }
   cout << "Valor a ser Pago: " << valorTotal;
}
