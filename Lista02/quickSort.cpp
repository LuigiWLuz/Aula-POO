//metodo de ordenação (quick sort)

#include<iostream>
#include<iomanip>

using namespace std;

//total de nomes
#define TAM 10


//prototipos de função
void trocar(string &a, string& b);
int particao(string dados[], int menor, int maior);
void quickSort(string dados[],int menor,int maior);

int main(void){

   cout << endl;
   cout << "Exemplo: QuickSort" << endl << endl;
   int i{1};

   //declara um array para armazenar os nomes
   string nomes[TAM];

   for(int i = 0; i<TAM; ++i){
        cout << "Informe o nome: " << i+1 << ": ";
        //getline lê o espaço
        getline(cin,nomes[i]);
   }

   cout << endl;

   cout << "Nomes antes da ordenacao: " << endl << endl;

   for(const auto& nome : nomes){
        cout << setw(2) << i << "." << nome << endl;
        i++;
   }

    //ordena os nomes utilizando o quicksort
   quickSort(nomes, 0, TAM - 1);

   cout << endl;

   cout << "Nomes depois da ordenacao: " << endl;

   for(const auto& nome : nomes){
        cout << setw(2) << i << "." << nome << endl;
        i++;
   }

   cout << endl;

   return 0;

}


void trocar(string &a, string& b){

    string troca = a;
    a = b;
    b = troca;

}

//função de partição, que coloca o pivo no lugar correto e organiza os
// elementos menores que o pivo a esquerda e os maiores a direita
int particao(string dados[], int menor, int maior){

    // escolhe o ultimo elemnto para ser pivo
    string pivo = dados[maior];

    //indice do ultimo elemento cujo valor é menor do que o pivo
    int i = menor - 1;

    //loop para organizar os elemntos em relação ao pivo
    for(int j = menor; j< maior; ++j){
        //move todos os elemtos menores que o pivo para a parte
        //esquerda do array de strings
        if(dados[j]<pivo){
            ++i;
            trocar(dados[i],dados[j]);
        }
    }
    //depois que o loop termina, todos os elementos menores que o
    //pivo estao a esquerda e todos os elementos maiores esta a direita
    //porem, o pivo ainda esta na ultima posição (maior)
    //Assim, trocamos o pivo com o elemento na posição i+1
    //para coloca-lo na posição correta.
    trocar(dados[i+1],dados[maior]);

    //retorna o indice do pivo, em sua posição correta dentro do array
    return i+1;

}
void quickSort(string dados[],int menor,int maior){

    //verifica se o array possui ao menos um elemento
    if(menor < maior){

        //divide o array de strings em dois e retorna o indice da partição
        int pivo = particao(dados,menor,maior);

        //Ordena os elementos dentro dos arrays antes e depois da partição
        quickSort(dados,menor,pivo-1);
        quickSort(dados,pivo+1,maior);

    }

}




