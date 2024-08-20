//Exemplo 6 : switch
//
//Programa que recebe um numero equivalente a um determinado mes e informe
//a quantidade de dias que ele possui. O programa deve exibir uma mensagem
// para os valores que correspondem a um mes valido.

#include <iostream>
using namespace std;

int main(void){


     int mes;

     cout << "Informe o numero equivalente ao mes desejado"<< endl;
     cin >> mes;

     switch(mes){

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "O mês " << mes << " possui 31 dias" << endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "O mês " << mes << " possui 30 dias" << endl;
        break;
        case 2:
            cout << "O mês " << mes << " possui 28 dias" << endl;
        break;
        default:
            cout << "Insira um valor valido" << endl;



     }

}
