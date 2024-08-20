#include <iostream>
#include <iomanip>
using namespace std;

int main(void){

    float salarioPorHr,horasDeTrabalho,salarioMes;
    char mes;

    cout << "Insira o salario recebido por hora:";cin >> salarioPorHr;
    cout << "Quantidade de horas trabalhadas: "; cin >> horasDeTrabalho;
    cout << "Mes referente: "; cin >> mes;

     cout << setiosflags(ios::right);
     cout << setprecision(2);

    salarioMes = salarioPorHr*horasDeTrabalho;

    cout << "O salario a ser recebido: " << salarioMes;

}
