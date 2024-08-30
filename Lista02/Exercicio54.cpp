#include<iostream>
using namespace std;

int main(void){

    string nome;
    int idade;
    float salario;
    char sexo,estadoCivil;

    cout << "Insira o nome:";
    cin >> nome;

    while(nome.length() <= 3){
        cout << "Insira o nome novamente:";
        cin >> nome;
    }
    cout << endl;
    cout << "Insira a idade:";
    cin >> idade;

    while(idade < 18 || idade > 70){
        cout << "Insira a idade novamente:";
        cin >> idade;
    }
    cout << endl;
    cout << "Insira o salario: ";
    cin >> salario;

    while(salario <= 0){
        cout << "Insira o salario precisa ser maior que zero,insira-o novamente:";
        cin >> salario;
    }
    cout << endl;
    cout << "Insira o sexo:";
    cin >> sexo;

    while(toupper(sexo) != 'F' && toupper(sexo) != 'M'){
        cout << "Insira o sexo novamente:";
        cin >> sexo;
    }
    cout << endl;
    cout << "Insira o estado civil:";
    cin >> estadoCivil;

    while(toupper(estadoCivil) != 'S' && toupper(estadoCivil) != 'C' && toupper(estadoCivil) != 'V' && toupper(estadoCivil) != 'D' ){
        cout << "Insira o estado civil:";
        cin >> estadoCivil;
    }


}

