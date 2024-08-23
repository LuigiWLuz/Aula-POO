#include <iostream>
using namespace std;

int main(void){

    int valor,centenas,dezenas,unidades,nota50,nota5;

    cout << "Insira o valor que deseja retirar: ";
    cin >> valor;

    if(valor >= 10 && valor <= 1000){

        centenas = valor/100;
        dezenas = (valor-centenas*100)/10;
        unidades = valor-((centenas*100)+(dezenas*10));

        if(dezenas >= 5){
            nota50 = dezenas/5;
            dezenas -= (nota50*5);
        }
         if(unidades >= 5){
            nota5 = unidades/5;
            unidades -= (nota5*5);
        }
        cout << "Qtd notas de 100: " << centenas << endl;
        cout << "Qtd notas de 50: " << nota50 << endl;
        cout << "Qtd notas de 10: " << dezenas << endl;
        cout << "Qtd notas de 5: " << nota5 << endl;
        cout << "Qtd notas de 1: " << unidades << endl;
    }




}
