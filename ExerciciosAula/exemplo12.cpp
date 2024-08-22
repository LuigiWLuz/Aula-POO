//
//Exemplo 12: SobreCarga
//


#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

float resultado,n1,n2;

//prototipos de funcao
void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

int main(void){

    int opcao = 0;

    while(opcao != 5){

       cout << setprecision(2);
       cout << setiosflags(ios::right);
       cout << setiosflags(ios::fixed);


       cout << "\n";
       cout <<  "------------------------" << endl;
       cout << "   Programa Calculadora" << endl;
        cout <<  "------------------------" << endl;
         cout << "\n";

         cout << "[1] - Adicao" << endl;
         cout << "[2] - Subtracao" << endl;
         cout << "[3] - Multiplicacao" << endl;
         cout << "[4] - Divisao" << endl;
         cout << "[5] - Encerrar o programa" << endl;
         cout << "\n";
         cout << "Escolha uma opcao: ";
         cin >> opcao;


        if(opcao != 5){
             switch(opcao){

                case 1:
                    adicao();
                break;

                case 2:
                    subtracao();
                break;

                case 3:
                    multiplicacao();
                break;

                case 4:
                    divisao();
                break;
            }
        }
        else{
            cout << "Programa encerrado com sucezo!!!" << endl;
        }

    }


 return 0;

}


void entrada(){
    cout << "\n";
    cout << "Insira o primeiro numero: "; cin >> n1;
    cout << "Insira o segundo numero: "; cin >> n2;
}


void pausa(){
    char letra;
    cout << "Tecle <C> para continuar....";

    do{
        letra = cin.get();
        letra = toupper(letra);

    }while(letra != 'C');

}

void saida(string operacao){

    cout << "=> O resultado da " << operacao;
    cout << " entre " << n1 << " e " << n2;
    cout << " eh " << resultado << "!\n";

    pausa();

}



void adicao(){
    entrada();
    cout << "Rotina Adicao" << endl;
   resultado = n1 + n2;
   saida("Adicao");
}
void subtracao(){
      entrada();
     cout << "Rotina subtracao" << endl;
    resultado = n1 - n2;
    saida("subtracao");
}
void multiplicacao(){
      entrada();
     cout << "Rotina multiplicacao" << endl;
    resultado = n1 * n2;
    saida("multiplicacao");
}
void divisao(){
      entrada();
     cout << "Rotina divisao" << endl;
    resultado = n1 / n2;
    saida("divisao");
}





