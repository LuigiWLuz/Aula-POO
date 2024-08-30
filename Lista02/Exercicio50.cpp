#include<iostream>
using namespace std;




#include <iostream>

int main() {
    int rows = 1;
    int cols = 2,cont{0},numAcertos;
    char opcao = 'S',resposta;
    char vetGabarito[] = {'A','B','C','D','E','E','D','C','B','A'};
    int** acertosENotas = new int*[rows];

    do{


        for (int i = 0; i < rows; i++) {
            acertosENotas[i] = new int[cols];
        }


        for (int i = (rows-1); i < rows; i++) {
            for (int j = 0; j < cols-1; j++) {
                while(cont < 10){
                    cout << "Qual eh a resposta a questao " << cont+1 << ": ";
                    cin >> resposta;
                    if(resposta == vetGabarito[cont])
                        ++numAcertos;
                    if(cont == 10){
                        acertosENotas[i][0] = numAcertos;
                        acertosENotas[i][1] = numAcertos;
                    }
                    ++cont;
                }

            }
        }
        cout << "Deseja inserir mais um aluno?(S-sim/N-nao)";
        cin >> opcao;

        if(toupper(opcao) == 'S')
            ++rows;

    }while(toupper(opcao) == 'S');

            // Imprimindo os valores
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << acertosENotas[i][j] << " ";
            }
            std::cout << std::endl;
        }
    // Liberando a memória
    for (int i = 0; i < rows; i++) {
        delete[] acertosENotas[i];
    }
    delete[] acertosENotas;

    return 0;
}
