#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]){

    cout << "Exemplo de argumentos da funcao principal" << endl;

    if(argc != 4){
        //exibe essa mensagem]
        cerr << "Uso: " << argv[0] << "somar/subtrair num1 num2 " << endl;
        //encerra o programa
        return 1;
    }

    //recupera o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if(!strcmp(operacao, "Somar")){
        cout << "Soma: " << num1 + num2 << endl;
    }
    else if(!strcmp(operacao,"Subtrair")){
        cout << "Subtracao: " << num1 - num2 << endl;
    }


    cout << endl;
}
