//
// exemplo 13: sobrecarga de funcoes
//


#include <iostream>

using namespace std;

//Prototipos de funcao

void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int n1, float n2);


int main(void){

    cout << "\n";

    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1,0.99f);


    return 0;
}




void imprime(){

    cout << "Nenhum numero foi passado"<< endl;
}


void imprime(int valor){

  cout << "Funcao com argumento inteiro: " << valor << endl;

}

void imprime(float valor){

  cout << "Funcao com argumento float: " << valor << endl;

}

void imprime(int n1, float n2){

  cout << "Funcao com argumento inteiro: " << n1  << " e float: " << n2 << endl;

}
