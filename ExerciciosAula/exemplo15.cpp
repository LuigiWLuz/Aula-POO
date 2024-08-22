//exemplo 15: exemplo de register
//
// Programa que demonstra a utilização de register

#include <iostream>

using namespace std;


int main(void){

    register int i;

    cout << endl;

    for(i = 0; i < 5; ++i){
        cout << "Valor do contador: " << i << endl;

    }

    return 0;
}

