//Exemplo 12:

#include <iostream>
#include <cstring>

using namespace std;
int main(void){

    cout << " exemplo de uso strcmd()" << endl;

    const char *nomes[] = {
    "Paulo",
    "Ana Cristina",
    "Renata",
    "Joao",
    "Miranda",
    "RONALDO",
    "ARNALDO"};

    size_t total = sizeof(nomes) / sizeof(nomes[0]);

    // variavel temporaria
    const char *temp;

    int i,j;

    cout << "Total de nomes: " << total << endl;

    cout << "Antes da ordenacao: " << endl;


    for(i = 0; i < total; ++i){
        cout << i+1 << ". " << nomes[i] << endl;
    }


    //realiza a ordenação de A-Z dos nomes usando strcmd()

    for(i = 0; i < total; ++i){
        for(j = i+1; j < total; ++j){
            if(strcmp(nomes[i],nomes[j]) > 0){
                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }

    cout << "Depois da ordenacao: " << endl;
    for(i = 0; i < total; ++i){
        cout << i+1 << ". " << nomes[i] << endl;
    }
}



