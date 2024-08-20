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
 else{
    cout << "Reprovado" << endl;
 }





}

