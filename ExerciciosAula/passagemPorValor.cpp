#include <iostream>

using namespace std;

void funcaoPorvalor(int a){

    ++a;
    cout << "Valor incrementado: " << a;
}


int main(void){

 int a = 4;
  funcaoPorvalor(a);

  cout<<endl << a;

}
