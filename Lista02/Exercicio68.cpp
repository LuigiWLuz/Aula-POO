#include<iostream>
#include<iomanip>
using namespace std;

int main(void){

    float percentualAumento{0.015},salarioInicial{520},salarioComAumento;
    int anoInicial{1995},anoAtual{2024};

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    for(int i = anoInicial; i <= anoAtual;++i){
        if(i == 1995)
            cout << "Salario em " << i <<": " << salarioInicial << endl;
        else{
            if(i == 1996)
                salarioComAumento = salarioInicial + (salarioInicial*percentualAumento);
            else
                salarioComAumento += (salarioComAumento*percentualAumento);
            cout << "Salario em " << i <<": " << salarioComAumento << endl;
            if(percentualAumento < 0.9)
                percentualAumento = percentualAumento * 2;
        }
    }



}



