#include <iostream>

using namespace std;


int main(void){

    float salarioPorHora, hrsTrabalhadas, salarioBruto,salarioLiquido ,impostoRenda,inss,sindicato;

    cout << "Insira seu salario por hora: ";
    cin >> salarioPorHora;
    cout << "Insira o numero de horas trabalhadas no mes: ";
    cin >> hrsTrabalhadas;

    salarioBruto = salarioPorHora*hrsTrabalhadas;

    impostoRenda = salarioBruto*0.11;
    inss = salarioBruto*0.08;
    sindicato = salarioBruto*0.05;
    salarioLiquido = salarioBruto - (impostoRenda+inss+sindicato);

    cout << "Salario Bruto..: R$ " << salarioBruto << endl;
    cout << "IR..: R$ "  << impostoRenda << endl;
    cout << "INSS..: R$ "  << inss << endl;
    cout << "Sindicato..: R$ "  << impostoRenda << endl;
    cout << "Salario Liquido..: R$ "  << salarioLiquido << endl;

}
