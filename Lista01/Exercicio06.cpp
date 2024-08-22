#include <iostream>
#include <iomanip>


using namespace std;



int main(void){


    float velMedia, kmPorLitro, tempoGasto,distancia,combustivelGasto;


    cout << "Insira a velocidade Media na viagem percorrida: ";
    cin >> velMedia;
    cout << "Insira a quantidade de quilometros que automovel faz por litro: ";
    cin >> kmPorLitro;
    cout << "Insira o tempo gasto na viagem em horas: ";
    cin >> tempoGasto;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    distancia = tempoGasto*velMedia;

    combustivelGasto = distancia/kmPorLitro;


    cout <<"------------------------------------"<<endl;
    cout <<"          Valores da Viagem         "<< endl;
    cout <<"------------------------------------"<<endl;

    cout << "Velocidade Media: " << velMedia << " KM/H" <<endl;
    cout << "Tempo gasto na Viagem: " << tempoGasto << " H" << endl;
    cout << "Distancia Total: " << distancia << " KM"<< endl;
    cout << "Combustivel Gasto: " << combustivelGasto << " L" << endl;

return 0;
}


