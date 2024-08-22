#include <iostream>
#include <iomanip>

using namespace std;



int main(void){

    float multa,excesso,peso;
    excesso = 0;
    multa = 0;
    cout << "Insira o peso dos peixes: ";
    cin >> peso;

    if(peso > 50){
        excesso = peso - 50;
        multa = 4 * excesso;
    }


    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << endl << "--------------------------------------------------------------------" << endl;
    cout << "                     Rendimentos do Dia " << endl;
    cout << "--------------------------------------------------------------------" << endl;

    cout << "Quantidade de peixes pegos: " << peso << " KG" << endl;
    cout << "Quantidade de peixes pegos em excesso: " << excesso <<" KG" << endl;
    cout << "Valor total da Multa em relacao ao excesso de peixes: R$" << multa << endl;


    return 0;
}




