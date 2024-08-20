#include <iostream>

using namespace std;


int Soma(int a, int b){
return a+b;
}


int main(void){

    int a,b;
   cout << "Insira o valores para a soma: \n";
   cout << "Primeiro valor:";
   cin >> a;
   cout << "Segundo valor:";
   cin >> b;
   cout << endl;
   cout << "A soma dos valores eh igual ";
   cout << Soma(a,b) << endl;


}
