//Exemplo 03: Programa par armazenar notas de alunos

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

//estruturas


struct Cadastro{

    string nome;
    vector<float>notas;
    float media;

};


//prototipos das funçoes

float calcularMedia(const vector<float> &notas);
bool compararNomes(const Cadastro &a, const Cadastro &b);


int main(void){

    cout << endl << "Cadastro de notas escolares" << endl;


    //outlier

    //vetor para armazenar os cadastros dos alunos
    vector<Cadastro> alunos;

    int totalAlunos;

    int totalNotas;

    float mediaGlobal = 0.0f;

    int i,j;

    //Entrada do total de alunos e do total de notas

    cout << "Informe o total de alunos: ";
    cin >> totalAlunos;

    cout << "Informe o total de notas: ";
    cin >> totalNotas;

    cout << endl;

    //Cadastro de dados de cada aluno

    for(i = 0; i<totalAlunos; ++i){
        Cadastro aluno;

        cout << "Insira o nome do aluno " << i+1 << ": ";

        //entrada do nome do aluno
        //Ignora os espaços em branco deixados no buffer
        getline(cin >> ws,aluno.nome);


         cout << "Informe a linha com as " << totalNotas << " notas: ";

         string linhaNotas;

        //entrada da linha de notas
        getline(cin >> ws,linhaNotas);


        //extrair as notas da linha
        istringstream stream(linhaNotas);

        //variavel para armazenar a nota
        float notaTemp;

        //Extrai a nota da linha e insere no vetor de notas,
        //dentro da estrutura casdastro
        while(stream >> notaTemp){
            aluno.notas.push_back(notaTemp);
        }

        //Calcula e atribui a media di aluno
        aluno.media = calcularMedia(aluno.notas);

        //adicionar o cadastro do aluno dentro do vetor de alunos
        alunos.push_back(aluno);

        //atualiza as informações sobre a media geral da turma
        mediaGlobal += aluno.media;

        cout << endl;


        //calcula a media global da turma

        mediaGlobal = mediaGlobal/totalAlunos;


        //Executa a função para ordenar os cadastros dentro do valor
        //No caso, realiza a ordenação de acordo com os nomes cadastrados
        sort(alunos.begin(),alunos.end(),compararNomes);


        //apresenta o resultado

        cout << setprecision(2);
        cout << setiosflags(ios::fixed);

        cout << "Resultado Final" << endl;

        for(const auto& aluno : alunos){
            cout << "Aluno: " << aluno.nome << endl;
            cout << "Notas: ";
            for(const auto& nota : aluno.notas){
                cout << nota << " ";
            }
            cout << "Media " << aluno.media << endl;
        }

        cout << "Media global da turma: " << mediaGlobal << endl;
    }
}


//funçao para calcular as Media
float calcularMedia(const vector<float> &notas){

    float soma = 0.0f;

    for(float nota : notas){
        soma += nota;
    }
    return soma/notas.size();

}
bool compararNomes(const Cadastro &a, const Cadastro &b){
    return a.nome < b.nome;
}
