// exemplo 06: programa para demonstrar o uso de uniões

#include<iostream>
using namespace std;

union cadastro{
    const char* nome;
    float nota1;
    float nota2;
};

//funcao principal
int main(){

    cout << endl;
    cout << "Exemplo de Union" << endl;

    union cadastro aluno;

    cout << "Endereco de memoria utilizado por <nome>: " << &aluno.nome << endl;
    cout << "Endereco de memoria utilizado por <nota1>: " << &aluno.nota1 << endl;
    cout << "Endereco de memoria utilizado por <nota2>: " << &aluno.nota2 << endl;

    cout << endl;

    aluno.nome = "OMAGAAAAAAAAAA";
    cout << "Nome: " << aluno.nome << endl;

    aluno.nota1 = 8;
    cout << "Nota1: " << aluno.nota1 << endl;

    aluno.nota2 = 10;
    cout << "Nota2: " << aluno.nota2 << endl;
    cout << endl;

    cout << "Nome: " << aluno.nome << endl;

}

