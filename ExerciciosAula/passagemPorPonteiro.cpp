#include <iostream>

using namespace std;

void funcaoPorPonteiro(int *a){
    ++(*a);
    cout << "Valor incrementado: " << *a;
}


int main(void){

 int a = 4;
  funcaoPorPonteiro(&a);

  cout<<endl << a;

}
