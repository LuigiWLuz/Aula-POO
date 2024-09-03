#include<iostream>
#include<iomanip>
using namespace std;

float troco(float valorRecebido,float total){

    float trocos;

    if(valorRecebido == total)
       return trocos = total-valorRecebido;
    else if(valorRecebido > total)
       return trocos = valorRecebido - total;

}


int main(void){

    float total{0},valorRecebido,trocos,Valorproduto;
    int cont{1};
    char opcao{'S'};


    cout << endl << "--- Armazem Paraiba ---" << endl << endl;

    cout << "Insira o valor do(s) produto(s): " << endl;
    while(toupper(opcao)!='N'){
        cout << "+ Produto " << cont << ": ";
        cin >> Valorproduto;

        total+=Valorproduto;
        ++cont;

        cout << "Deseja inserir mais um produto?(S/N) ";
        cin >> opcao;
        if(toupper(opcao) == 'N')
            cout << "+ Produto " << cont << ": " << 0 << endl;
    }

    cout << "Qual foi o valor oferecido pelo cliente: ";
    cin >> valorRecebido;

    if(valorRecebido < total){
        do{
            cout << "Valor insuficiente, insira o valor novamente..." << endl;
            cin >> valorRecebido;
        }while(valorRecebido < total);
        trocos = troco(valorRecebido,total);
    }
    else
        trocos = troco(valorRecebido,total);


    cout << "Total...: R$ " << total << endl;
    cout << "Dinheiro: R$ " << valorRecebido << endl;
    cout << "Troco...: R$ " << trocos << endl;







}



