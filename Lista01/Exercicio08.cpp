#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main(void){

    float PI,altura,raio,volume;
    PI = 3.141516;

    cout << "Insira a altura da lata: ";
    cin >> altura;
    cout << "Insira o raio da lata: ";
    cin >> raio;

    volume = (PI * pow(raio,2))*altura;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);


    cout << "O volume da lata eh igual a " << volume;

    return 0;
}

