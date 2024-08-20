//Exemplo 04: desvio condicional composto

//programa que permite a leitura de duas notas de um aluno e calcula a media.
//Se o valor da média for menor que 4, informa que o aluno foi reprovado.
//Se o valor da média estiver entre 4 e 6, informa que o aluno deve realizar
//a prova de recuperação(ifa). Se o valor da média for maior ou igual ao
//do aluno, juntamente com a média que ele obteve. Considere a apresentação dos valores
//utilizando duas casa decimais



#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

    float n1,n2, media{0};

    cout <<"Desvio condicional simples" << endl;
    cout << "* Informe as duas notas do aluno: " << endl;

    cin >> n1 >> n2;

    media = (n1+n2)/2;


     cout << setprecision(3);
     cout << setiosflags(ios::showpoint);


     if(media >= 6){
        cout << "Aprovado Nota:" << setw(6);
        cout << media << endl;
     }
     else if( media >= 4 && media < 6){
        cout << "O aluno deve fazer a IFA." << endl;
     }
     else{
        cout << "Reprovado" << endl;
     }





}
