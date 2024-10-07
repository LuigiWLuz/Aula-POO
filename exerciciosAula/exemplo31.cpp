#include<iostream>
#include<cstring>

using namespace std;


int main(void){

    cout << "Exemplo de uso de strtok() e de alocacao de memoria dinamica" << endl;

    //Array com o texto desejado
    char texto[] = "Minha-frase-de-token";

    //Caractere  de verificação
    char separador[] = "-";

    //tamnaho inicial do array de tokens
    int capacidade = 2;

    //Array de ponteiros, utilizado para armazenas os tokens
    char **tokens = nullptr;


    //Inicialmente, aloca espaço para 2 tokens
    tokens = new char*[capacidade];

    //Ponteiro para o token
    char *tokenptr;

    //Contadores
    int i, total;


    //Exibe o texto inicial
    cout << "Texto incial: " << texto << endl;

    //Retorna o primeiro token
    tokenptr = strtok(texto,separador);

    //inicializa o contador de tokens
    total = 0;

    //loop para obter os tokens até que o ponteiro <tokenPtr> seja NULL
    while(tokenptr != NULL){

        //se chegou no limite do array que armazena os tokens
        if(total >= capacidade){

            //Duplica o tamanho do array de tokens
            capacidade *= 2;

            //criar e aloca memoria para um array temporario
            char **temp = new char*[capacidade];

            //copia os ponteiros antigos para array temporario
            for(i = 0; i < total; ++i){
                temp[i] = tokens[i];
            }

            //Libera a memoria antiga
            delete[] tokens;

            //Aponta o array de tokens para o array temporario
            tokens = temp;
        }

        //Armazena o token no array de tokens
        tokens[total] = tokenptr;

        //incrementa o contador do array de tokens
        ++total;

        //obtem o proximo token
        tokenptr = strtok(NULL, separador);
    }

    cout << "Foram gerados " << total << "tokens: " << endl;

    //exibe os tokens que foram gerados
    for(i = 0; i < total; ++i){
        cout << i+1 << "---> " << tokens[i] << endl;
    }

    cout << endl;
}

