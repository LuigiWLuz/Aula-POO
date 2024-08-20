#include <iostream>
#include <iomanip>
using namespace std;

int main(void){

    float nota1,nota2,nota3,nota4,media;

    cout << "--Informe as 4 notas bimestrais--"<< endl;
    cout << "Nota1:";cin >> nota1;
    cout << endl;
     cout << "Nota2:";cin >> nota2;
    cout << endl;
     cout << "Nota3:";cin >> nota3;
    cout << endl;
     cout << "Nota4:";cin >> nota4;

     media = (nota1+nota2+nota3+nota4)/4;

     cout << setprecision(3);
     cout << setiosflags(ios::right);

     cout << "A media final do aluno: " << media;
}
