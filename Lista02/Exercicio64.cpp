#include <iostream>
#include<iomanip>

using namespace std;


int main(void){

    int qtd;
    float valor{1.99};

    cout << "A quantidade do produto: ";
    cin >> qtd;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << endl << "Quantidade - Valor R$" << endl;
    for(int i = 1; i <= qtd; ++i){
        cout << i << " - R$ " << valor*i << endl;
    }


}

