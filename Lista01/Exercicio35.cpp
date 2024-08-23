#include<iostream>
#include<cmath>
using namespace std;

void ParouImpar(float num){
    fmod(num,2)==0? cout << "Par" << endl : cout << "Impar" << endl;
}

void PositivoouNegativo(float num){
    num>=0? cout << "Positivo" << endl : cout << "Negativo" << endl;
}
void inteiroouDecimal(float num){
    num==ceil(num)? cout << "Inteiro" << endl : cout << "Decimal" << endl;
}


void adicao(float num1,float num2){

   float soma;
   soma = num1 + num2;
   ParouImpar(soma);
   cout << "Soma: " << soma << endl;
   PositivoouNegativo(soma);
   inteiroouDecimal(soma);

}
void subtracao(float num1,float num2){

   float diferenca;
   diferenca = num1 - num2;
//   ParouImpar(diferenca);
   PositivoouNegativo(diferenca);
   inteiroouDecimal(diferenca);
}
void divisao(float num1,float num2){

   float quociente;
   quociente = num1 / num2;
   ParouImpar(quociente);
   PositivoouNegativo(quociente);
   inteiroouDecimal(quociente);
}
void multiplicacao(float num1,float num2){

   float produto;
   produto = num1 * num2;
   ParouImpar(produto);
   PositivoouNegativo(produto);
   inteiroouDecimal(produto);
}




int main(void){

   float num1,num2;
   char opcao;

   cout << "Insira o primeiro numero: ";
   cin >> num1;
   cout << "Insira o segundo numero: ";
   cin >> num2;
   do{
    cout << "Insira qual operacao deseja realizar(Adicao-A/Subtracao-S/Multiplicacao-M/Divisao-D):";
    cin >> opcao;
   }while(toupper(opcao) != 'A' && toupper(opcao) != 'S' && toupper(opcao) != 'M' && toupper(opcao) != 'D');

   switch(toupper(opcao)){
    case 'A':
        adicao(num1,num2);
    break;
    case 'S':
        subtracao(num1,num2);
    break;
    case 'M':
        multiplicacao(num1,num2);
    break;
    case 'D':
        divisao(num1,num2);
    break;
   }

}

