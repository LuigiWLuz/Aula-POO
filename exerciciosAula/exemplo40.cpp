#include <iostream>
using namespace std;



int main(int argc, char* argv[]){

    cout << "Exemplo de argumentos da funcao principal" << endl;

    cout << "Numero de argumentos: " << argc << endl;

    for(int i =0; i <argc;++i){
        cout << "Argumento " << i << ": " << argv[i] << endl;
    }

    cout << endl;
}
