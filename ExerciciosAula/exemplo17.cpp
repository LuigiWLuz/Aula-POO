//Exemplo 17: Programa que demonstra a utilização de arrays unidimensionais
//<T> generic type

#include <iostream>
using namespace std;

int main(void){

    cout << "demonstracao da utilização de arrays unidimensionais" << endl;

    int arrayInt[5] = {1,2,3,4,5};
    float arrayFloat[5] = {1.1f,2.2f,3.3f,4.4f,5.5f};
    double arrayDouble[5] = {1.11,2.22,3.33,4.44,5.55};
    char arrayChar [5] = {'a', 'e', 'i', 'o', 'u'};
    string arrayStrings[5] = {"Cris", "Renata", "João" "Miranda", "Romão"};

    // Exibe o primeiro elemento de cada array
    cout << "arrayInt[0]: " << arrayInt[0] << endl;
    cout << "arrayFloat [0]: " << arrayFloat[0] << endl;
    cout << "arrayDouble[0]: " << arrayDouble[0] << endl;
    cout << "arrayChar[0]: " << arrayChar[0] << endl;
    cout << "arrayString[0]: " << arrayStrings[0] << endl;

    return 0;

}
