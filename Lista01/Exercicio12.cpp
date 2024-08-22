
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main(void){

    float altura,pesoIdeal,pesoPessoa;
    char sexo;


    cout << "Insira sua altura: ";
    cin >> altura;
    cout << "Insira seu peso: ";
    cin >> pesoPessoa;

    while( sexo != 'M' && sexo != 'H'){
    cout << "Insira o Sexo(Homem(H)/Mulher(M)):";
    cin >> sexo;
    sexo = toupper(sexo);
    }

    if(sexo == 'H'){

        pesoIdeal = (72.7*altura)-58;
        if(pesoPessoa < pesoIdeal)
            cout << "Voce esta abaixo do peso.";
        else if(pesoPessoa >= pesoIdeal && pesoPessoa <= (pesoIdeal+3))
            cout << "Voce esta dentro do peso.";
        else
            cout << "Voce esta acima do peso.";
    }
    else if (sexo == 'M'){
        pesoIdeal = (62.1*altura)-44.7;
        if(pesoPessoa < pesoIdeal)
            cout << "Voce esta abaixo do peso.";
            // pesoIdeal+3 é para que o peso da pessoa seja exatamente igual ao pessoa ideal
            // ou que seja no maximo 3 quilos acima que é aceitavel, possui uma tolerancia.
        else if(pesoPessoa >= pesoIdeal && pesoPessoa <= (pesoIdeal+3))
            cout << "Voce esta dentro do peso.";
        else
            cout << "Voce esta acima do peso.";
    }


    return 0;
}


