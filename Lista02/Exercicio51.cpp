#include<iostream>

using namespace std;

int main(void){

    float saltos[5],media,maior,menor,soma;
    string nome;

    cout << "Insira o nome do atleta: ";
    cin >> nome;

    if(nome == " " || nome == ""){
        cout << "Programa encerrado!";
    }
    else{
        for(int i = 0; i<5;++i){
            cout << i+1 << "-o Salto: ";
            cin >> saltos[i];
            if(i == 0){
                maior = saltos[i];
                menor = saltos[i];
            }
            else if (saltos[i] > maior)
                maior = saltos[i];
            else if (saltos[i] < menor)
                menor = saltos[i];
            soma += saltos[i];
        }
        media = (soma-(maior+menor))/3;
        cout << endl <<"Melhor Salto: " << maior << " m" << endl;
        cout << "Pior Salto: " << menor << " m" << endl;
        cout << "Media dos demais saltos: " << media << " m"<< endl << endl;

        cout << "Resultado Final" << endl;
        cout << nome << ": " << media <<" m";

    }

}

