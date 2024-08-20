#include <iostream>

using namespace std;

void funcaoPorReferencia(int &a){

    ++a;
    cout << "Valor incrementado: " << a;
}


int main(void){

 int a = 4;
  funcaoPorReferencia(a);

  cout<<endl << a;

}
