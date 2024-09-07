#include<iostream>
#include<iomanip>

using namespace std;


int main(void){

    string nomeItens[] = {"Cachorro Quente","Bauru Simples  ","Bauru com Ovo  ","Hamburguer     ", "Cheeseburguer  ","X-Calango      ","Refrigerante   "};
    float itens[7][2] = {{100,7.50},{101,10.30},{102,12.50},{103,12.20},{104,10.30},{105,18.10},{106,11.00}};
    float codigoItem,soma{0},valorPagoPorItem[7][2] = {{100,0},{101,0},{102,0},{103,0},{104,0},{105,0},{106,0}};
    int quantidadeItem;
    char opcao{'S'};

    cout << "==========================================" << endl;
    cout << "             Tabela de Produtos " << endl;
    cout << "==========================================" << endl;

    for(int i = 0; i<7; ++i)
        cout << nomeItens[i] << setw(10)<<itens[i][0]<<endl;
    cout << endl;
    while(opcao == 'S'){
        cout << "Insira o codigo do item desejado: ";
        cin >> codigoItem;
        cout << "Insira a quantidade do item desejado:";
        cin >> quantidadeItem;

        for(int i = 0; i < 7;++i){
            if(valorPagoPorItem[i][0] == codigoItem){
                valorPagoPorItem[i][1] += itens[i][1]*quantidadeItem;
                soma+=itens[i][1]*quantidadeItem;
            }

        }

        cout << "Deseja inserir mais algum item?(S/N)";
        cin >> opcao;
    }

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);
    cout << endl << "Valor gasto por produto: " << endl;
     for(int i = 0; i < 7;++i){
        if(valorPagoPorItem[i][1] > 0)
            cout << nomeItens[i] << ": "<< valorPagoPorItem[i][1] << endl;
     }

    cout << endl;
    cout << "Total do pedido: R$ " << soma;

}
