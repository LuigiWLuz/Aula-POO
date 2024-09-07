#include<iostream>
#include<iomanip>
using namespace std;

int main(void){

    int cont{0};
    float maiorTemp{0},menorTemp{0},temp,soma{0},media;
    char opcao{'S'};

    while(toupper(opcao) == 'S'){
        cout << "Insira uma temperatura:";
        cin >> temp;

        if(maiorTemp == 0 && menorTemp == 0){
            maiorTemp = temp;
            menorTemp = temp;
            soma+=temp;
            ++cont;
        }
        else if(temp > maiorTemp){
            maiorTemp = temp;
            soma+=temp;
            ++cont;
        }
        else if(temp < menorTemp){
            menorTemp = temp;
            soma+=temp;
            ++cont;
        }
        cout << "Deseja insira uma nova temperatura?(S/N)";
        cin >> opcao;
        cout << endl;
    }

    media = soma/cont;

    cout << setprecision(1);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);


    cout << "Menor Temperatura: " << menorTemp <<" C"<< endl;
    cout << "Maior Temperatura: " << maiorTemp <<" C" <<endl;
    cout << "Temperatura Media: " << media << " C";



}



