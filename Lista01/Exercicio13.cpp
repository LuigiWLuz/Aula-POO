#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main(void){

    float area,litrosNecessarios,qtdLatasNecessarias,valorTotal;

    cout << "Insira o tamanho da area a ser pintada em metros quadrados: ";
    cin >> area;

    litrosNecessarios = area/3;
    qtdLatasNecessarias = ceil(litrosNecessarios/18);
    valorTotal= qtdLatasNecessarias*80;


    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);


    cout << "Quantidade necessaria de latas de tinta: " << qtdLatasNecessarias << endl;
    cout << "Preco total: R$ " << valorTotal;

    return 0;
}



