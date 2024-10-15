#include <iostream>
using namespace std;


int main(void){

int Pares[20];
int Impares[20],contPar{0},contImpar{0},numero,i{1};

cout << "Insira o numeros " << endl;
while(i <= 20){
    cout << i <<"- numero: ";
    cin >> numero;
    if(numero%2 == 0){
        Pares[contPar] = numero;
        ++contPar;
    }
    else{
        Impares[contImpar] = numero;
        ++contImpar;
    }
++i;
}


cout << endl << "Numeros Pares: ";
for(int i = 0; i < contPar;++i){
     i<contPar?cout << Pares[i] << ", ":cout << Pares[i];
}
cout << endl << "Numeros Impares: ";
for(int i = 0; i < contImpar;++i){
     i<contImpar?cout << Impares[i] << ", ":cout << Impares[i];
}



}

